/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100bff488; end: 100bff48f; -[SCLensMetadataDataModel onDemandTemplateId] */

undefined8 FUN_100bff488(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 100bff490; end: 100bff497; -[SCLensMetadataDataModel unlockablesAttachments] */

undefined8 FUN_100bff490(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 100bff498; end: 100bffb5f; -[SCLensMetadataModelTransformer _lensUnlockablesAttachmentForDataModelUnlockablesAttachment:] */

void FUN_100bff498(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uStack_70;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    puVar22 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x000107c414c4();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar1 == 0) {
      uStack_70 = (undefined *)0x0;
    }
    else {
      uStack_70 = PTR_PTR_1126bb800;
      func_0x000107c610f4();
      lVar1 = param_3;
      func_0x000107c414c4();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c5d7e0();
      func_0x000107c61180();
      puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar3 = param_3;
      func_0x000107c414c4();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c45248();
      func_0x000107c4d978(puVar22,param_2,lVar4);
      func_0x000107c61180();
      lVar4 = param_3;
      func_0x000107c414c4();
      func_0x000107c61180();
      lVar5 = lVar4;
      func_0x000107c3deb0();
      func_0x000107c61180();
      lVar6 = param_3;
      func_0x000107c414c4();
      func_0x000107c61180();
      lVar7 = lVar6;
      func_0x000107c45238();
      func_0x000107c61180();
      lVar8 = param_3;
      func_0x000107c414c4();
      func_0x000107c61180();
      lVar9 = lVar8;
      func_0x000107c49958();
      func_0x000107c61180();
      puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar10 = param_3;
      func_0x000107c414c4();
      func_0x000107c61180();
      lVar11 = lVar10;
      func_0x000107c4995c();
      func_0x000107c4d978(puVar24,param_2,lVar11);
      func_0x000107c61180();
      lVar11 = param_3;
      func_0x000107c414c4();
      func_0x000107c61180();
      lVar12 = lVar11;
      func_0x000107c3dca0();
      func_0x000107c61180();
      lVar13 = param_3;
      func_0x000107c414c4();
      func_0x000107c61180();
      lVar14 = lVar13;
      func_0x000107c3dca8();
      func_0x000107c61180();
      lVar15 = param_3;
      func_0x000107c414c4();
      func_0x000107c61180();
      lVar16 = lVar15;
      func_0x000107c5c700();
      func_0x000107c61180();
      lVar17 = param_3;
      func_0x000107c414c4();
      func_0x000107c61180();
      lVar18 = lVar17;
      func_0x000107c41514();
      func_0x000107c61180();
      lVar19 = param_3;
      func_0x000107c414c4();
      func_0x000107c61180();
      lVar20 = lVar19;
      func_0x000107c414dc();
      func_0x000107c61180();
      func_0x000107c49138(uStack_70,param_2,lVar2,puVar22,lVar5,lVar7,lVar9,puVar24,lVar12,lVar14,
                          lVar16,lVar18,lVar20);
      func_0x000107c61170(lVar20);
      func_0x000107c61170(lVar19);
      func_0x000107c61170(lVar18);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(lVar16);
      func_0x000107c61170(lVar15);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(lVar13);
      func_0x000107c61170(lVar12);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(puVar24);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar22);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
    }
    lVar1 = param_3;
    func_0x000107c4c0a0();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar1 == 0) {
      puVar24 = (undefined *)0x0;
    }
    else {
      puVar24 = PTR_PTR_1126bb7e8;
      func_0x000107c610f4(PTR_PTR_1126bb7e8);
      lVar1 = param_3;
      func_0x000107c4c0a0(param_3);
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c5ddb8();
      func_0x000107c61180();
      puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar3 = param_3;
      func_0x000107c4c0a0(param_3);
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5ddd4();
      func_0x000107c4d978(puVar22,param_2,lVar4);
      func_0x000107c61180();
      lVar4 = param_3;
      func_0x000107c4c0a0(param_3);
      func_0x000107c61180();
      lVar5 = lVar4;
      func_0x000107c5de48();
      func_0x000107c61180();
      func_0x000107c494c0(puVar24,param_2,lVar2,puVar22,lVar5);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar22);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
    }
    lVar1 = param_3;
    func_0x000107c5e224();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar1 == 0) {
      puVar23 = (undefined *)0x0;
    }
    else {
      puVar23 = PTR_PTR_1126bb7f0;
      func_0x000107c610f4();
      lVar1 = param_3;
      func_0x000107c5e224(param_3);
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c5e264();
      func_0x000107c61180();
      puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar3 = param_3;
      func_0x000107c5e224(param_3);
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5ab38();
      func_0x000107c4d978(puVar22,param_2,lVar4);
      func_0x000107c61180();
      func_0x000107c495c0(puVar23,param_2,lVar2,puVar22);
      func_0x000107c61170(puVar22);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
    }
    lVar1 = param_3;
    func_0x000107c3dde8();
    func_0x000107c61180();
    func_0x000107c61170();
    puVar21 = (undefined *)0x0;
    if (lVar1 != 0) {
      puVar21 = PTR_PTR_1126bb7f8;
      func_0x000107c610f4(PTR_PTR_1126bb7f8);
      lVar1 = param_3;
      func_0x000107c3dde8();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c3de0c();
      func_0x000107c61180();
      lVar3 = param_3;
      func_0x000107c3dde8(param_3);
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c4995c();
      func_0x000107c61180();
      lVar5 = param_3;
      func_0x000107c3dde8(param_3);
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c3dca4();
      func_0x000107c61180();
      lVar7 = param_3;
      func_0x000107c3dde8(param_3);
      func_0x000107c61180();
      lVar8 = lVar7;
      func_0x000107c3ddb4();
      func_0x000107c61180();
      func_0x000107c456e0(puVar21,param_2,lVar2,lVar4,lVar6,lVar8);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
    }
    puVar22 = PTR_PTR_1126bb7e0;
    func_0x000107c610f4(PTR_PTR_1126bb7e0);
    lVar1 = param_3;
    func_0x000107c3e318(param_3);
    func_0x000107c61180();
    lVar2 = param_3;
    func_0x000107c40e08(param_3);
    func_0x000107c61180();
    lVar3 = param_3;
    func_0x000107c4b858();
    func_0x000107c61180();
    func_0x000107c45800(puVar22,param_2,lVar1,puVar24,puVar23,lVar2,puVar21,uStack_70,lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar21);
    func_0x000107c61170(puVar23);
    func_0x000107c61170(puVar24);
    func_0x000107c61170(uStack_70);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 100bffb60; end: 100bffb67; -[SCLensMetadataDataModel isRanked] */

undefined1 FUN_100bffb60(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 100bffb68; end: 100bffb6f; -[SCLensMetadataDataModel priority] */

undefined8 FUN_100bffb68(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 100bffb70; end: 100bffb77; -[SCLensMetadataDataModel lensDescriptors] */

undefined8 FUN_100bffb70(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 100bffb78; end: 100bffb7f; -[SCLensMetadataDataModel communityLensData] */

undefined8 FUN_100bffb78(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 100bffb80; end: 100bffdb7; -[SCLensMetadataModelTransformer _lensCommunityDataForDataModelCommunityLensData:] */

void FUN_100bffb80(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x000107c4b014();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar1 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR_PTR_1126bb848;
      func_0x000107c610f4();
      lVar1 = param_3;
      func_0x000107c4b014();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c5d984();
      func_0x000107c61180();
      lVar3 = param_3;
      func_0x000107c4b014();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5d8f8();
      func_0x000107c61180();
      lVar5 = param_3;
      func_0x000107c4b014(param_3);
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c5da58();
      func_0x000107c61180();
      lVar7 = param_3;
      func_0x000107c4b014(param_3);
      func_0x000107c61180();
      lVar8 = lVar7;
      func_0x000107c5b380();
      func_0x000107c61180();
      lVar9 = param_3;
      func_0x000107c4b014(param_3);
      func_0x000107c61180();
      lVar10 = lVar9;
      func_0x000107c5b38c();
      lVar11 = param_3;
      func_0x000107c4b014(param_3);
      func_0x000107c61180();
      lVar12 = lVar11;
      func_0x000107c4a110();
      func_0x000107c4925c(puVar14,param_2,lVar2,lVar4,lVar6,lVar8,lVar10,lVar12);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
    }
    puVar13 = PTR_PTR_1126bb850;
    func_0x000107c610f4(PTR_PTR_1126bb850);
    lVar1 = param_3;
    func_0x000107c3e3a0(param_3);
    func_0x000107c61180();
    lVar2 = param_3;
    func_0x000107c518a0(param_3);
    func_0x000107c61180();
    func_0x000107c4722c(puVar13,param_2,puVar14,lVar1,lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar14);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 100bffdb8; end: 100bffdbf; -[SCLensMetadataCommunityLensData lensCreatorData] */

undefined8 FUN_100bffdb8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bffdc0; end: 100bffdc7; -[SCLensMetadataLensCreatorData userId] */

undefined8 FUN_100bffdc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bffdc8; end: 100bffdcf; -[SCLensMetadataLensCreatorData userAvatarId] */

undefined8 FUN_100bffdc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bffdd0; end: 100bffdd7; -[SCLensMetadataLensCreatorData userSelfieId] */

undefined8 FUN_100bffdd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100bffdd8; end: 100bffddf; -[SCLensMetadataLensCreatorData snapProIdentifier] */

undefined8 FUN_100bffdd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100bffde0; end: 100bffde7; -[SCLensMetadataLensCreatorData snapProIsDeactivated] */

undefined1 FUN_100bffde0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100bffde8; end: 100bffdef; -[SCLensMetadataLensCreatorData isOfficialCreator] */

undefined1 FUN_100bffde8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 100bffdf0; end: 100bfff13; -[SCLensCreator initWithUserId:userAvatarId:userSelfieId:snapProIdentifier:snapProIsDeactivated:isOfficialCreator:] */

undefined1 *
FUN_100bffdf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_11270ad70;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bfff14; end: 100bfff1b; -[SCLensMetadataCommunityLensData attributionName] */

undefined8 FUN_100bfff14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bfff1c; end: 100bfff23; -[SCLensMetadataCommunityLensData scannedData] */

undefined8 FUN_100bfff1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bfff24; end: 100bfff2b; -[SCLensMetadataDataModel snappablesReplyType] */

long FUN_100bfff24(long param_1)

{
  return (long)*(char *)(param_1 + 0x12);
}



/* Entry: 100bfff2c; end: 100bfff43; -[SCLensMetadataModelTransformer _lensReplyTypeForDataModelSnappablesReplyType:] */

undefined1 FUN_100bfff2c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 100bfff44; end: 100bfff4b; -[SCLensMetadataDataModel snappablesTaglineKey] */

undefined8 FUN_100bfff44(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 100bfff4c; end: 100bfff53; -[SCLensMetadataDataModel snappablesPlayButtonGradientColors] */

undefined8 FUN_100bfff4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 100bfff54; end: 100bfff8f; -[SCLensMetadataModelTransformer _lensGradientColorsForDataModelGradientColors:] */

void FUN_100bfff54(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x000107c4c284(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8ee38,0);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bfff90; end: 100bfff97; -[SCLensMetadataDataModel isLeftCarousel] */

undefined1 FUN_100bfff90(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 100bfff98; end: 100bfff9f; -[SCLensMetadataDataModel contextHint] */

undefined8 FUN_100bfff98(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 100bfffa0; end: 100bfffa7; -[SCLensMetadataDataModel isCommunity] */

undefined1 FUN_100bfffa0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 100bfffa8; end: 100bfffaf; -[SCLensMetadataDataModel checksum] */

undefined8 FUN_100bfffa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 100bfffb0; end: 100bfffb7; -[SCLensMetadataDataModel lensCollectionId] */

undefined8 FUN_100bfffb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 100bfffb8; end: 100bfffbf; -[SCLensMetadataDataModel carouselGroup] */

undefined8 FUN_100bfffb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 100bfffc0; end: 100c0007b; -[SCLensMetadataModelTransformer _lensUnlockablesCarouselGroupForDataModelUnlockablesCarouselGroup:] */

void FUN_100bfffc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bb808;
  puVar3 = (undefined *)0x0;
  if (param_4 != 0) {
    func_0x000107c61174(param_4);
    func_0x000107c610f4(puVar1);
    lVar2 = param_4;
    func_0x000107c44520(param_4);
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c3f6b0(param_4);
    func_0x000107c61170(param_4);
    func_0x000107c4d954(param_1,puVar3);
    func_0x000107c61180();
    func_0x000107c46c1c(puVar1,param_3,lVar2,puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c0007c; end: 100c00083; -[SCLensMetadataLensAsset signature] */

undefined8 FUN_100c0007c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100c00084; end: 100c0008b; -[SCLensMetadataUnlockablesCarouselGroup groupName] */

undefined8 FUN_100c00084(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c0008c; end: 100c00093; -[SCLensMetadataLensAsset checksum] */

undefined8 FUN_100c0008c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100c00094; end: 100c0009b; -[SCLensMetadataLensAsset assetType] */

long FUN_100c00094(long param_1)

{
  return (long)*(char *)(param_1 + 8);
}



/* Entry: 100c0009c; end: 100c000c3; -[SCLensMetadataModelTransformer _lensAssestTypeForDataModelAssestType:] */

undefined8 FUN_100c0009c(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 10) {
    return *(undefined8 *)(&UNK_10e532980 + ((ulong)(param_3 - 1U) & 0xff) * 8);
  }
  return 0;
}



/* Entry: 100c000c4; end: 100c000cb; -[SCLensMetadataLensAsset requestTiming] */

long FUN_100c000c4(long param_1)

{
  return (long)*(char *)(param_1 + 9);
}



/* Entry: 100c000cc; end: 100c000f3; -[SCLensMetadataModelTransformer _lensRequestingTimeForDataModelRequestTiming:] */

undefined8 FUN_100c000cc(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 5) {
    return *(undefined8 *)(&UNK_10e5329d0 + ((ulong)(param_3 - 1U) & 0xff) * 8);
  }
  return 0;
}



/* Entry: 100c000f4; end: 100c000fb; -[SCLensMetadataLensAsset scale] */

undefined8 FUN_100c000f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100c000fc; end: 100c00103; -[SCLensMetadataLensAsset preloadLimit] */

undefined8 FUN_100c000fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100c00104; end: 100c0010b; -[SCLensMetadataLensAsset originalFilename] */

undefined8 FUN_100c00104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100c0010c; end: 100c00113; -[SCLensMetadataUnlockablesCarouselGroup carouselScore] */

undefined8 FUN_100c0010c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c00114; end: 100c0011b; -[SCLensMetadataLensAsset encodedBitmoji] */

undefined8 FUN_100c00114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 100c0011c; end: 100c00123; -[SCLensMetadataLensAsset avatarId] */

undefined8 FUN_100c0011c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100c00124; end: 100c0012b; -[SCLensMetadataLensAsset userId] */

undefined8 FUN_100c00124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 100c0012c; end: 100c00133; -[SCLensMetadataLensAsset encryptionKey] */

undefined8 FUN_100c0012c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 100c00134; end: 100c0013b; -[SCLensMetadataLensAsset encryptionIv] */

undefined8 FUN_100c00134(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 100c0013c; end: 100c001e7; -[SCUnlockablesCarouselGroup initWithGroupName:carouselScore:] */

undefined1 *
FUN_100c0013c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270add8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c001e8; end: 100c001ef; -[SCLensMetadataDataModel carouselGlobalScoreList] */

undefined8 FUN_100c001e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 100c001f0; end: 100c001ff; -[SCLensMetadataModelTransformer _lensUnlockablesCarouselGlobalScoreListForDataModelUnlockablesCarouselGlobalScoreList:] */

void FUN_100c001f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_compactMap__1125ae648,&PTR___NSConcreteGlobalBlock_110c8ee78);
  return;
}



/* Entry: 100c00200; end: 100c00207; -[SCLensMetadataDataModel unlockableSnapInfo] */

undefined8 FUN_100c00200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 100c00208; end: 100c0020f; -[SCLensMetadataLensAsset storageOptions] */

undefined8 FUN_100c00208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 100c00210; end: 100c0024b; -[SCLensMetadataModelTransformer _lensAssetStorageOptionsForDataModelAssetStorageOptions:] */

void FUN_100c00210(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x000107c4c284(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8ee18,0);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0024c; end: 100c00307;  */

void FUN_100c0024c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_2);
  func_0x000107c4dfe4();
  puVar1 = PTR_PTR_1126bb840;
  func_0x000107c610f4(PTR_PTR_1126bb840);
  uVar2 = param_2;
  func_0x000107c5d7e8(param_2);
  func_0x000107c61180();
  uVar3 = param_2;
  func_0x000107c3f9b4(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c48efc(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c00308; end: 100c0030f; -[SCLensMetadataLensAssetStorageOption optionType] */

long FUN_100c00308(long param_1)

{
  return (long)*(char *)(param_1 + 8);
}



/* Entry: 100c00310; end: 100c00317; -[SCLensMetadataDataModel connectedLensInfo] */

undefined8 FUN_100c00310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 100c00318; end: 100c00393; -[SCLensMetadataModelTransformer _lensConnectedLensInfoForDataModelConnectedLensInfo:] */

void FUN_100c00318(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bb818;
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c610f4(puVar1);
    lVar2 = param_3;
    func_0x000107c3ddb8(param_3);
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    func_0x000107c456cc(puVar1,param_2,lVar2);
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c00394; end: 100c0039b; -[SCLensMetadataDataModel musicTrackMetadata] */

undefined8 FUN_100c00394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 100c0039c; end: 100c003d3; -[SCLensMetadataModelTransformer _lensMusicTrackMetadataForDataModelMusicTrackMetadata:] */

void FUN_100c0039c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x000107c4c280(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8eeb8);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c003d4; end: 100c003db; -[SCLensMetadataLensAssetStorageOption url] */

undefined8 FUN_100c003d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c003dc; end: 100c003e3; -[SCLensMetadataLensAssetStorageOption checksum] */

undefined8 FUN_100c003dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c003e4; end: 100c003eb; -[SCLensMetadataDataModel shoppingLensMetadata] */

undefined8 FUN_100c003e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 100c003ec; end: 100c0049f; -[SCLensAssetStorageOption initWithType:url:checksum:] */

undefined1 *
FUN_100c003ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_11270ad48;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100c004a0; end: 100c004a7; -[SCLensMetadataDataModel remoteApiInfo] */

undefined8 FUN_100c004a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 100c004a8; end: 100c0054b; -[SCLensMetadataModelTransformer _remoteApiInfoForDataModelRemoteApiInfo:] */

void FUN_100c004a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bb880;
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c610f4(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    lVar2 = param_3;
    func_0x000107c4fe2c(param_3);
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    func_0x000107c5a74c(puVar3,param_2,lVar2);
    func_0x000107c61180();
    func_0x000107c482f0(puVar1,param_2,puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c0054c; end: 100c00553; -[SCLensMetadataDataModel customizationInfo] */

undefined8 FUN_100c0054c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 100c00554; end: 100c00607; -[SCLensMetadataModelTransformer _customizationInfoForDataModelCustomizationInfo:] */

void FUN_100c00554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bb828;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  uVar2 = param_3;
  func_0x000107c5d0f0(param_3);
  uVar3 = param_3;
  func_0x000107c4ec4c(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c3c154(param_1,param_2,uVar3);
  func_0x000107c61180();
  func_0x000107c48ee4(puVar1,param_2,(long)(int)uVar2,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c00608; end: 100c00883; -[SCLensAsset initWithIdentifier:url:signature:checksum:type:requestTiming:scale:preloadLimit:originalFilename:encodedBitmoji:avatarId:userId:encryptionKey:encryptionIv:storageOptions:] */

undefined8 *
FUN_100c00608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  puStack_68 = PTR_PTR_11270ad38;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[5] = param_7;
    puVar1[6] = param_8;
    puVar1[7] = param_9;
    puVar1[8] = param_10;
    uVar2 = param_11;
    func_0x000107c40794();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_12;
    func_0x000107c40794();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_13;
    func_0x000107c40794();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_14;
    func_0x000107c40794();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_15;
    func_0x000107c40794();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_16;
    func_0x000107c40794();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_17;
    func_0x000107c40794();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100c00884; end: 100c00983; -[SCLensMetadataModelTransformer _predefinedCustomizationForDataModelCustomizationBody:] */

void FUN_100c00884(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c41198();
  func_0x000107c61180();
  lVar2 = param_3;
  func_0x000107c41184();
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c4adac();
  if ((lVar3 == 0) || (lVar3 = lVar2, func_0x000107c4adac(), lVar3 == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar3 = param_3;
    func_0x000107c4f1b8();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c4adac();
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_3;
      func_0x000107c4f1b8(param_3);
      func_0x000107c61180();
    }
    func_0x000107c61170(lVar3);
    puVar5 = PTR_PTR_1126bb820;
    func_0x000107c610f4(PTR_PTR_1126bb820);
    func_0x000107c46344();
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100c00984; end: 100c00a0b; -[SCLensCustomizationMetadata initWithType:predefinedCustomization:] */

undefined1 *
FUN_100c00984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270ae08;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100c00a0c; end: 100c00a13; -[SCLensMetadataDataModel adRenderDataBytes] */

undefined8 FUN_100c00a0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 100c00a14; end: 100c00a1b; -[SCLensMetadataDataModel prefetchContexts] */

undefined8 FUN_100c00a14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 100c00a1c; end: 100c00a7b; -[SCLensMetadataModelTransformer _prefetchContextsFromPrefetchContextsArray:] */

void FUN_100c00a1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c40808();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c5a74c(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_3);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c00a7c; end: 100c00a83; -[SCLensMetadataDataModel targetingCampaignId] */

undefined8 FUN_100c00a7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 100c00a84; end: 100c00a8b; -[SCLensMetadataDataModel isSnapchatPlusExclusive] */

undefined1 FUN_100c00a84(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17);
}



/* Entry: 100c00a8c; end: 100c00a93; -[SCLensMetadataDataModel primaryCategory] */

undefined8 FUN_100c00a8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 100c00a94; end: 100c00ab7; -[SCUnlockableTrackInfo copyWithZone:] */

undefined8 FUN_100c00a94(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100c00ab8; end: 100c00adb; -[SCUnlockablesCarouselGroup copyWithZone:] */

undefined8 FUN_100c00ab8(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100c00adc; end: 100c00aff; -[SCLensCustomizationMetadata copyWithZone:] */

undefined8 FUN_100c00adc(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100c00b00; end: 100c00b23; -[SCLensPreview copyWithZone:] */

undefined8 FUN_100c00b00(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100c00b24; end: 100c00b47; -[SCLensMiscData copyWithZone:] */

undefined8 FUN_100c00b24(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100c00b48; end: 100c00bb3; +[SCMixerInternalMetadataItem lensWithLensMetadata:] */

void FUN_100c00b48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126de598;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c00bb4; end: 100c00bf7; -[SCMixerInternalMetadataItem internalInit] */

void FUN_100c00bb4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_1127019f8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c00bf8; end: 100c00c1f;  */

void FUN_100c00bf8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100c00c20; end: 100c00c4b;  */

void FUN_100c00c20(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c00c4c; end: 100c00c93;  */

/* WARNING: Possible PIC construction at 0x000100c00c80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c00c84) */

void FUN_100c00c4c(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3c270();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c00c94; end: 100c00d3f; -[SCPlaybackMediaResolutionServiceEntryPoint _registerCustomMediaResolvers:] */

/* WARNING: Possible PIC construction at 0x000100c00ce4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c00c94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c40808();
  if (lVar1 != 0) {
    param_3 = *(long *)(param_1 + _DAT_11272bf4c);
    func_0x000107c5c734(param_3);
    func_0x000107c61180();
    func_0x000107c4fbf0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c00d40; end: 100c00e57; -[SCComposerUserSessionEntryPoint registerImageLoaders:] */

/* WARNING: Possible PIC construction at 0x000100c00da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c00db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c00de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c00e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c00e34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c00e1c) */
/* WARNING: Removing unreachable block (ram,0x000100c00de4) */
/* WARNING: Removing unreachable block (ram,0x000100c00dbc) */
/* WARNING: Removing unreachable block (ram,0x000100c00da8) */
/* WARNING: Removing unreachable block (ram,0x000100c00e38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c00d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + _DAT_112724b08) & 1) != 0) {
    return;
  }
  lVar1 = (long)_DAT_112724b0c;
  func_0x000107c61174(param_3);
  param_1 = param_1 + lVar1;
  func_0x000107c61148(param_1);
  func_0x000107c3ecf4();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c00e58; end: 100c00eb7; -[_TtC47SCComposerUserSessionImageLoadersPluginRegistry51SCComposerUserSessionImageLoadersPluginSaberService buildSaberPlugins] */

void FUN_100c00e58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c00eb8();
  func_0x000107c61170(param_1);
  uVar2 = 0x112df9008;
  func_0x0001000285a8(0x112df9008,&UNK_10dc93ca0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100c00eb8; end: 100c010af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100c00eb8(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 uStack_51;
  long lStack_50;
  long lStack_48;
  
  uStack_51 = uRam0000000112df8fd8;
  func_0x00010008a7c8(&lStack_50,&uStack_51);
  lVar2 = lStack_50;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lStack_50 != 0) {
    func_0x000100083b20(&lStack_48);
    func_0x000107c61574(lVar2);
    lVar2 = lStack_48;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lStack_48 != 0) {
      func_0x000107c61550();
      if ((((int)puVar3 == 0) || ((long)puVar4 < 0)) || (((ulong)puVar4 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar4 >> 0x3e == 0) {
          puVar3 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar3 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar4) {
            puVar3 = puVar4;
          }
          func_0x000107c60480(puVar3);
        }
        puVar4 = (undefined *)0x0;
        FUN_100be8df8(0,puVar3 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      }
      uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar6 + 0x10);
      puVar3 = puVar4;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_100be8df8(puVar3,uVar1 + 1,1,puVar4);
        uVar6 = (ulong)puVar3 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
      *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
    }
  }
  uStack_51 = uRam0000000112df8fd9;
  func_0x00010008a7c8(&lStack_50,&uStack_51);
  if (lStack_50 != 0) {
    func_0x000100083b20(&lStack_48);
    func_0x000107c61574(lStack_50);
    if (lStack_48 != 0) {
      puVar4 = puVar3;
      func_0x000107c61550();
      if ((((int)puVar4 == 0) || ((long)puVar3 < 0)) ||
         (puVar4 = puVar3, ((ulong)puVar3 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar5 = puVar3;
          }
          func_0x000107c60480(puVar5);
        }
        puVar4 = (undefined *)0x0;
        FUN_100be8df8(0,puVar5 + 1,1,puVar3);
      }
      uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar6 + 0x10);
      puVar3 = puVar4;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_100be8df8(puVar3,uVar1 + 1,1,puVar4);
        uVar6 = (ulong)puVar3 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
      *(long *)(uVar6 + uVar1 * 8 + 0x20) = lStack_48;
    }
  }
  return puVar3;
}



/* Entry: 100c010b0; end: 100c010bb;  */

void FUN_100c010b0(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (*param_2 == '\x01') {
    FUN_100c0139c(uVar1,*(undefined8 *)(unaff_x20 + 0x20));
    pcVar2 = "SCComposerBitmojiSelfieDownloaderPluginProvider";
    uVar3 = 0x2f;
  }
  else {
    FUN_100c01128(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
    pcVar2 = "SCComposerBitmojiDownloaderPluginProvider";
    uVar3 = 0x29;
  }
  func_0x000100082720(pcVar2,uVar3,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 100c010bc; end: 100c01127;  */

void FUN_100c010bc(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*param_2 == '\x01') {
    FUN_100c0139c(param_3,param_5);
    pcVar1 = "SCComposerBitmojiSelfieDownloaderPluginProvider";
    uVar2 = 0x2f;
  }
  else {
    FUN_100c01128(param_3,param_4);
    pcVar1 = "SCComposerBitmojiDownloaderPluginProvider";
    uVar2 = 0x29;
  }
  func_0x000100082720(pcVar1,uVar2,2);
  *param_1 = param_3;
  return;
}



/* Entry: 100c01128; end: 100c0113b;  */

void FUN_100c01128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11043df20;
  func_0x0001000285a8(0x112df8ec0,&UNK_10d9c9570);
  func_0x000107c613fc(&UNK_11043df20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_100c011c4,puVar1);
  return;
}



/* Entry: 100c0113c; end: 100c011c3;  */

void FUN_100c0113c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(0x112df8ec0,&UNK_10d9c9570);
  func_0x000107c613fc(param_3,0x20,7);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_4,param_3);
  return;
}



/* Entry: 100c011c4; end: 100c011cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c011c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar1 = uStack_38;
  func_0x000107c45070(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000100083b20(&lStack_40);
  uVar2 = *(undefined8 *)(lStack_40 + _DAT_113093a98);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_40);
  puVar3 = PTR_PTR_1126a88f0;
  func_0x000107c610f8();
  func_0x000107c459c4();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 100c011cc; end: 100c01287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c011cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c45070(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000100083b20(&lStack_40);
  uVar2 = *(undefined8 *)(lStack_40 + _DAT_113093a98);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_40);
  puVar3 = PTR_PTR_1126a88f0;
  func_0x000107c610f8();
  func_0x000107c459c4();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 100c01288; end: 100c01363; -[SCComposerBitmojiDownloader initWithBitmojiImageFetcher:performerProvider:] */

undefined1 *
FUN_100c01288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e9bf8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4e60c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c01364; end: 100c0136f; -[SCLensMetadataRemoteApiInfo remoteApiSpecIds] */

undefined8 FUN_100c01364(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c01370; end: 100c0139b;  */

void FUN_100c01370(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c0139c; end: 100c013b7;  */

void FUN_100c0139c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11043df48;
  func_0x0001000285a8(0x112df8ec0,&UNK_10d9c9570);
  func_0x000107c613fc(&UNK_11043df48,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x100c013b0,puVar1);
  return;
}



/* Entry: 100c013b8; end: 100c0146f;  */

void FUN_100c013b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c45070(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000100083b20(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c51d00(uStack_40);
  func_0x000107c61180();
  func_0x000107c61170(uStack_40);
  puVar3 = PTR_PTR_1126a88e8;
  func_0x000107c610f8();
  func_0x000107c459c0();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}


