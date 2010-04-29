///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2009 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2007-02-22
// Licence : This source is under MIT License
// File    : glm/gtx/color_space.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef glm_gtx_color_space
#define glm_gtx_color_space

// Dependency:
#include "../glm.hpp"

namespace glm
{
	namespace test{
		void main_gtx_color_space();
	}//namespace test

    namespace gtx{
	//! GLM_GTX_color_space extension: Related to RGB to HSV conversions and operations
    namespace color_space
    {
		//! Converts a color from HSV color space to its color in RGB color space.
		//! From GLM_GTX_color_space extension.
        template <typename valType> 
		detail::tvec3<valType> rgbColor(
			detail::tvec3<valType> const & hsvValue);

		//! Converts a color from RGB color space to its color in HSV color space.
		//! From GLM_GTX_color_space extension.
        template <typename valType> 
		detail::tvec3<valType> hsvColor(
			detail::tvec3<valType> const & rgbValue);
		
		//! Build a saturation matrix.
		//! From GLM_GTX_color_space extension
        template <typename valType> 
		detail::tmat4x4<valType> saturation(
			valType const s);

        //! Modify the saturation of a color.
		//! From GLM_GTX_color_space extension.
		template <typename valType> 
		detail::tvec3<valType> saturation(
			valType const s, 
			detail::tvec3<valType> const & color);
		
		//! Modify the saturation of a color.
		//! From GLM_GTX_color_space extension.
        template <typename valType> 
		detail::tvec4<valType> saturation(
			valType const s, 
			detail::tvec4<valType> const & color);
		
		//! Compute color luminosity associating ratios (0.33, 0.59, 0.11) to RGB canals.
		//! From GLM_GTX_color_space extension.
		template <typename valType> 
		valType luminosity(
			detail::tvec3<valType> const & color);
		
	}//namespace color_space
	}//namespace gtx
}//namespace glm

#define GLM_GTX_color_space namespace gtx::color_space
#ifndef GLM_GTX_GLOBAL
namespace glm {using GLM_GTX_color_space;}
#endif//GLM_GTC_GLOBAL

#include "color_space.inl"

#endif//glm_gtx_color_space
