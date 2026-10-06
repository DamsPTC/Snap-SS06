// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceCatalogProductCell
// Superclass: UICollectionViewCell
// Address: 0x112b38318

@interface SCCommerceCatalogProductCell

// Property: mainHorizontalStack; attributes: T@"UIStackView",&,N,V_mainHorizontalStack
// Property: priceHorizontalStack; attributes: T@"UIStackView",&,N,V_priceHorizontalStack
// Property: labelsVerticalStack; attributes: T@"UIStackView",&,N,V_labelsVerticalStack
// Property: titleLabel; attributes: T@"SCCommerceShimmerLabel",&,N,V_titleLabel
// Property: productPriceLabel; attributes: T@"SIGLabel",&,N,V_productPriceLabel
// Property: strikeThroughPriceLabel; attributes: T@"SCCommerceShimmerLabel",&,N,V_strikeThroughPriceLabel
// Property: outOfStockLabel; attributes: T@"SIGLabel",&,N,V_outOfStockLabel
// Property: subtitleLabel; attributes: T@"SIGLabel",&,N,V_subtitleLabel
// Property: checkmarkView; attributes: T@"UIImageView",&,N,V_checkmarkView
// Property: imageView; attributes: T@"UIImageView",&,N,V_imageView
// Property: shimmeringView; attributes: T@"FBShimmeringView",&,N,V_shimmeringView
// Property: imageCancelable; attributes: T@"<SCCanceling>",&,N,V_imageCancelable
// Property: imageProvider; attributes: T@"<SCDynamicImageSourceProvider>",&,N,V_imageProvider
// Property: favoritesHeartView; attributes: T@"SCCommerceIconView",&,N,V_favoritesHeartView
// Property: viewModel; attributes: T@"SCCommerceCatalogProductCellViewModel",&,N,V_viewModel
// Property: delegate; attributes: T@"<SCCommerceCatalogProductCellDelegate>",W,N,V_delegate

// -[SCCommerceCatalogProductCell initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106d69bbc

// -[SCCommerceCatalogProductCell prepareForReuse]
// Type encoding: v16@0:8
// Implementation: 0x106d69c0c

// -[SCCommerceCatalogProductCell populateWithViewModel:imageFetchingService:commerceIconProvider:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106d69c54

// -[SCCommerceCatalogProductCell _setupViews]
// Type encoding: v16@0:8
// Implementation: 0x106d6a76c

// -[SCCommerceCatalogProductCell _strikethroughText:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d6b9c0

// -[SCCommerceCatalogProductCell _priceColor]
// Type encoding: @16@0:8
// Implementation: 0x106d6bb20

// -[SCCommerceCatalogProductCell _resetShimmer]
// Type encoding: v16@0:8
// Implementation: 0x106d6bb9c

// -[SCCommerceCatalogProductCell _resetCell]
// Type encoding: v16@0:8
// Implementation: 0x106d6bc28

// -[SCCommerceCatalogProductCell _loadImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6bc50

// -[SCCommerceCatalogProductCell _showImageError:forURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d6bd38

// -[SCCommerceCatalogProductCell _updateIconsWithIconProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6bec4

// -[SCCommerceCatalogProductCell _favoritesHeartButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x106d6bf64

// -[SCCommerceCatalogProductCell _imageFetchCompleted:imageURL:error:startTimeMilliseconds:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x106d6c0e0

// -[SCCommerceCatalogProductCell _logEntry:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c294

// -[SCCommerceCatalogProductCell _logError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c298

// -[SCCommerceCatalogProductCell delegate]
// Type encoding: @16@0:8
// Implementation: 0x106d6c29c

// -[SCCommerceCatalogProductCell setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c2bc

// -[SCCommerceCatalogProductCell mainHorizontalStack]
// Type encoding: @16@0:8
// Implementation: 0x106d6c2d0

// -[SCCommerceCatalogProductCell setMainHorizontalStack:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c2e0

// -[SCCommerceCatalogProductCell priceHorizontalStack]
// Type encoding: @16@0:8
// Implementation: 0x106d6c320

// -[SCCommerceCatalogProductCell setPriceHorizontalStack:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c330

// -[SCCommerceCatalogProductCell labelsVerticalStack]
// Type encoding: @16@0:8
// Implementation: 0x106d6c370

// -[SCCommerceCatalogProductCell setLabelsVerticalStack:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c380

// -[SCCommerceCatalogProductCell titleLabel]
// Type encoding: @16@0:8
// Implementation: 0x106d6c3c0

// -[SCCommerceCatalogProductCell setTitleLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c3d0

// -[SCCommerceCatalogProductCell productPriceLabel]
// Type encoding: @16@0:8
// Implementation: 0x106d6c410

// -[SCCommerceCatalogProductCell setProductPriceLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c420

// -[SCCommerceCatalogProductCell strikeThroughPriceLabel]
// Type encoding: @16@0:8
// Implementation: 0x106d6c460

// -[SCCommerceCatalogProductCell setStrikeThroughPriceLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c470

// -[SCCommerceCatalogProductCell outOfStockLabel]
// Type encoding: @16@0:8
// Implementation: 0x106d6c4b0

// -[SCCommerceCatalogProductCell setOutOfStockLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c4c0

// -[SCCommerceCatalogProductCell subtitleLabel]
// Type encoding: @16@0:8
// Implementation: 0x106d6c500

// -[SCCommerceCatalogProductCell setSubtitleLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c510

// -[SCCommerceCatalogProductCell checkmarkView]
// Type encoding: @16@0:8
// Implementation: 0x106d6c550

// -[SCCommerceCatalogProductCell setCheckmarkView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c560

// -[SCCommerceCatalogProductCell imageView]
// Type encoding: @16@0:8
// Implementation: 0x106d6c5a0

// -[SCCommerceCatalogProductCell setImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c5b0

// -[SCCommerceCatalogProductCell shimmeringView]
// Type encoding: @16@0:8
// Implementation: 0x106d6c5f0

// -[SCCommerceCatalogProductCell setShimmeringView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c600

// -[SCCommerceCatalogProductCell imageCancelable]
// Type encoding: @16@0:8
// Implementation: 0x106d6c640

// -[SCCommerceCatalogProductCell setImageCancelable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c650

// -[SCCommerceCatalogProductCell imageProvider]
// Type encoding: @16@0:8
// Implementation: 0x106d6c690

// -[SCCommerceCatalogProductCell setImageProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c6a0

// -[SCCommerceCatalogProductCell favoritesHeartView]
// Type encoding: @16@0:8
// Implementation: 0x106d6c6e0

// -[SCCommerceCatalogProductCell setFavoritesHeartView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c6f0

// -[SCCommerceCatalogProductCell viewModel]
// Type encoding: @16@0:8
// Implementation: 0x106d6c730

// -[SCCommerceCatalogProductCell setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d6c740

// -[SCCommerceCatalogProductCell .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106d6c780

// +[SCCommerceCatalogProductCell sizeWithViewModel:forWidth:]
// Type encoding: {CGSize=dd}32@0:8@16d24
// Implementation: 0x106d69a58

@end
