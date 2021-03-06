#ifndef SPRITEOBJECTINFO_H
#define SPRITEOBJECTINFO_H

#include "universalobjectinterface.h"

#include "../override/imagefile.h"

#include "angleinfo.h"


namespace SpriterEngine
{

	class SpriteObjectInfo : public UniversalObjectInterface
	{
	public:
		SpriteObjectInfo();

		point getOffset() override;
		point getPosition() override;
		real getAngle() override;
		point getScale() override;
		real getAlphaOverride() override;
		real getAlpha() override;
		point getPivot() override;
		ImageFile *getImage() override;

		void setOffset(const point& newOffset) override;
		void setPosition(const point &newPosition) override;
		void setAngle(real newAngle) override;
		void setScale(const point &newScale) override;
		void setAlphaOverride(real newAlpha) override;
		void setAlpha(real newAlpha) override;
		void setPivot(const point &newPivot) override;
		void setImage(ImageFile *newImageFile) override;
		void setSpin(int newSpin) override;

		void setToBlendedLinear(UniversalObjectInterface *aObject, UniversalObjectInterface *bObject, real t, real blendRatio, ObjectRefInstance *blendedRefInstance = 0) override;
		
		void render() override;

	private:
		point offset;
		point position;
		AngleInfo angle;
		point scale;
		real alphaOverride;
		real alpha;
		point pivot;
		ImageFile *imageFile;
	};

}

#endif // SPRITEOBJECTINFO_H
