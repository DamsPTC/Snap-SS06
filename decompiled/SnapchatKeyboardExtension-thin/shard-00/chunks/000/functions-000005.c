/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10002afe4; end: 10002b003;  */

void FUN_10002afe4(void)

{
  __s7SwiftUI17EnvironmentValuesV7openURLAA13OpenURLActionVvg();
  return;
}



/* Entry: 10002b004; end: 10002b07f;  */

void FUN_10002b004(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __s7SwiftUI13OpenURLActionVMa();
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  __s7SwiftUI17EnvironmentValuesV7openURLAA13OpenURLActionVvs
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 10002b080; end: 10002b08b;  */

void FUN_10002b080(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __s7SwiftUI13OpenURLActionVMa();
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  __s7SwiftUI17EnvironmentValuesV7openURLAA13OpenURLActionVvs
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 10002b08c; end: 10002b113;  */

undefined8 FUN_10002b08c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_100010860(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10002b114; end: 10002b11f;  */

void FUN_10002b114(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ae54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_10004cf40)();
  return;
}



/* Entry: 10002b120; end: 10002b197;  */

void FUN_10002b120(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000525e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000525e8;
  func_0x0001000118b8(0x1000525e8,&UNK_10003d320);
  uVar2 = uVar1;
  FUN_10002ae28();
  uVar3 = uVar2;
  func_0x00010002af24();
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0,uVar1,
             &uStack_30);
  puRam00000001000525e0 = puVar4;
  return;
}



/* Entry: 10002b198; end: 10002b19f;  */

undefined8 * FUN_10002b198(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_100029cd4(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10002b1a0; end: 10002b1cb;  */

long FUN_10002b1a0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10002b1cc; end: 10002b1d3;  */

void FUN_10002b1cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ae54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_10004cf40)(param_2);
  return;
}



/* Entry: 10002b1d4; end: 10002b203;  */

void FUN_10002b1d4(undefined8 *param_1)

{
  FUN_10002b204(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(param_1[4]);
  return;
}



/* Entry: 10002b204; end: 10002b20b;  */

void FUN_10002b204(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(param_2);
  return;
}



/* Entry: 10002b20c; end: 10002b303;  */

undefined8 * FUN_10002b20c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar1 = *(undefined1 *)(param_2 + 2);
  FUN_10002b1cc(uVar2,uVar3,uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar1;
  uVar2 = param_2[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  _swift_retain(uVar2);
  return param_1;
}



/* Entry: 10002b304; end: 10002b31f;  */

void FUN_10002b304(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 10002b320; end: 10002b37b;  */

undefined8 * FUN_10002b320(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_10002b204(uVar3,uVar4,uVar2);
  uVar3 = param_1[4];
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  _swift_release(uVar3);
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 10002b37c; end: 10002b43f;  */

int FUN_10002b37c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10002b440; end: 10002b507;  */

void FUN_10002b440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  __s23ExtensionsStickerPicker0B14FetchViewModelCMa();
  _swift_allocObject();
  _swift_retain(param_4);
  _swift_bridgeObjectRetain(param_3);
  __s23ExtensionsStickerPicker0B14FetchViewModelC9remoteURL9stickerId0I12ImageFetcher13extensionTypeAC10Foundation0H0V_SSAA0bkL0CSgAA09ExtensionN0Otcfc
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,param_3,
             param_4,1);
  return;
}



/* Entry: 10002b508; end: 10002c2af;  */

void FUN_10002b508(long param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long alStack_100 [6];
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar5 = 0x1000512d0;
  puVar7 = &UNK_10003bb40;
  lStack_b8 = param_1;
  FUN_100010860(0x1000512d0,&UNK_10003bb40);
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)alStack_100 - extraout_x8;
  puVar6 = unaff_x20;
  func_0x00010002ba88(lVar15);
  uVar12 = unaff_x20[5];
  uVar13 = unaff_x20[6];
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_98,uVar12,0,uVar13,0,puVar6,puVar7);
  puVar6 = (undefined8 *)(lVar15 + *(int *)(lVar5 + 0x24));
  alStack_100[5] = lVar15;
  puVar6[1] = uStack_90;
  *puVar6 = uStack_98;
  puVar6[3] = uStack_80;
  puVar6[2] = uStack_88;
  puVar6[5] = uStack_70;
  puVar6[4] = uStack_78;
  lVar5 = *unaff_x20;
  uVar12 = unaff_x20[1];
  bVar1 = *(byte *)(unaff_x20 + 2);
  uVar13 = unaff_x20[4];
  __sScMMa(0);
  puVar7 = PTR___sScMMa_10004d028;
  uStack_cc = (uint)bVar1;
  uStack_c8 = uVar12;
  FUN_10002b1cc(lVar5,uVar12,bVar1);
  uStack_c0 = uVar13;
  _swift_retain();
  __sScM6sharedScMvgZ();
  uVar12 = 0x100051400;
  func_0x00010002d090(0x100051400,puVar7,PTR___sScMScAsMc_10004d030);
  puVar7 = &UNK_10004e678;
  _swift_allocObject(&UNK_10004e678,0x58,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar13;
  *(undefined8 *)(puVar7 + 0x18) = uVar12;
  uVar12 = *unaff_x20;
  uVar19 = unaff_x20[3];
  uVar13 = unaff_x20[2];
  *(undefined8 *)(puVar7 + 0x28) = unaff_x20[1];
  *(undefined8 *)(puVar7 + 0x20) = uVar12;
  *(undefined8 *)(puVar7 + 0x38) = uVar19;
  *(undefined8 *)(puVar7 + 0x30) = uVar13;
  uVar12 = unaff_x20[4];
  *(undefined8 *)(puVar7 + 0x48) = unaff_x20[5];
  *(undefined8 *)(puVar7 + 0x40) = uVar12;
  *(undefined8 *)(puVar7 + 0x50) = unaff_x20[6];
  lVar8 = 0;
  __sScPMa();
  lVar16 = *(long *)(lVar8 + -8);
  lVar14 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  uVar17 = lVar14 + 0xfU & 0xfffffffffffffff0;
  lVar15 = lVar15 - uVar17;
  __sScP13userInitiatedScPvgZ(lVar15);
  iVar4 = 2;
  FUN_100038d80(2,0x1a,4,0);
  if (iVar4 == 0) {
    lVar14 = 0x1000512c8;
    FUN_100010860(0x1000512c8,&UNK_10003bb38);
    lVar3 = lStack_b8;
    puVar6 = (undefined8 *)(lStack_b8 + *(int *)(lVar14 + 0x24));
    lVar14 = 0;
    __s7SwiftUI13_TaskModifierVMa();
    (**(code **)(lVar16 + 0x20))((long)puVar6 + (long)*(int *)(lVar14 + 0x14),lVar15,lVar8);
    *puVar6 = &UNK_10003d400;
    puVar6[1] = puVar7;
    FUN_10002c8c8(alStack_100[5],lVar3);
  }
  else {
    lVar14 = 0;
    __s7SwiftUI14_TaskModifier2VMa();
    alStack_100[1] = *(long *)(lVar14 + -8);
    alStack_100[2] = lVar14;
    alStack_100[3] = lVar15;
    (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(alStack_100[1] + 0x40));
    lVar11 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    uStack_a8 = 0;
    uStack_a0 = 0xe000000000000000;
    alStack_100[0] = lVar11;
    __ss11_StringGutsV4growyySiF(0x11);
    _swift_bridgeObjectRelease(uStack_a0);
    uStack_a8 = 0xd00000000000004c;
    uStack_a0 = 0x8000000100045dd0;
    uStack_b0 = 0x2b;
    puVar10 = PTR___sSis23CustomStringConvertiblesWP_10004cd18;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_10004ccf8,PTR___sSis23CustomStringConvertiblesWP_10004cd18);
    alStack_100[4] = lVar5;
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar10);
    uVar13 = uStack_a0;
    uVar12 = uStack_a8;
    (*(code *)PTR____chkstk_darwin_10004c8a8)();
    lVar11 = lVar11 - uVar17;
    (**(code **)(lVar16 + 0x10))(lVar11,lVar15,lVar8);
    lVar3 = lStack_b8;
    lVar5 = alStack_100[4];
    lVar14 = alStack_100[0];
    __s7SwiftUI14_TaskModifier2V4name18executorPreference8priority6actionACSS_Sch_pSgScPyyYaYAcntcfC
              (alStack_100[0],uVar12,uVar13,0,0,lVar11,&UNK_10003d400,puVar7);
    (**(code **)(lVar16 + 8))(lVar15,lVar8);
    FUN_10002c8c8(alStack_100[5],lVar3);
    lVar8 = 0x1000512d8;
    FUN_100010860(0x1000512d8,&UNK_10003d430);
    (**(code **)(alStack_100[1] + 0x20))(lVar3 + *(int *)(lVar8 + 0x24),lVar14,alStack_100[2]);
  }
  puVar7 = &UNK_10004e6a0;
  _swift_allocObject(&UNK_10004e6a0,0x48,7);
  uVar12 = *unaff_x20;
  uVar19 = unaff_x20[3];
  uVar13 = unaff_x20[2];
  *(undefined8 *)(puVar7 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar7 + 0x10) = uVar12;
  *(undefined8 *)(puVar7 + 0x28) = uVar19;
  *(undefined8 *)(puVar7 + 0x20) = uVar13;
  uVar12 = unaff_x20[4];
  *(undefined8 *)(puVar7 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar7 + 0x30) = uVar12;
  *(undefined8 *)(puVar7 + 0x40) = unaff_x20[6];
  lVar8 = 0x1000525f0;
  FUN_100010860(0x1000525f0,&UNK_10003d410);
  lVar15 = lStack_b8;
  uVar13 = uStack_c8;
  uVar2 = uStack_cc;
  puVar6 = (undefined8 *)(lStack_b8 + *(int *)(lVar8 + 0x24));
  *puVar6 = 0x10002c91c;
  puVar6[1] = puVar7;
  puVar6[2] = 0;
  puVar6[3] = 0;
  FUN_10002b1cc(lVar5,uStack_c8,uStack_cc);
  uVar9 = 0;
  __s23ExtensionsStickerPicker0B14FetchViewModelCMa(0);
  uVar12 = 0x1000525f8;
  func_0x00010002d090(0x1000525f8,PTR___s23ExtensionsStickerPicker0B14FetchViewModelCMa_10004ca08,
                      PTR___s23ExtensionsStickerPicker0B14FetchViewModelC7Combine16ObservableObjectAAMc_10004c9f0
                     );
  uVar19 = uStack_c0;
  _swift_retain(uStack_c0);
  uVar18 = lVar5;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(lVar5,uVar13,uVar2,uVar9,uVar12);
  lVar8 = 0x100052600;
  FUN_100010860(0x100052600,&UNK_10003d418);
  lVar14 = lVar15 + *(int *)(lVar8 + 0x24);
  __s23ExtensionsStickerPicker0B14FetchViewModelC7fileURL10Foundation0H0VSgvg(lVar14);
  _swift_release(uVar18);
  puVar7 = &UNK_10004e6c8;
  _swift_allocObject(&UNK_10004e6c8,0x48,7);
  uVar12 = *unaff_x20;
  uVar9 = unaff_x20[3];
  uVar18 = unaff_x20[2];
  *(undefined8 *)(puVar7 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar7 + 0x10) = uVar12;
  *(undefined8 *)(puVar7 + 0x28) = uVar9;
  *(undefined8 *)(puVar7 + 0x20) = uVar18;
  uVar12 = unaff_x20[4];
  *(undefined8 *)(puVar7 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar7 + 0x30) = uVar12;
  *(undefined8 *)(puVar7 + 0x40) = unaff_x20[6];
  lVar8 = 0x100052608;
  FUN_100010860(0x100052608,&UNK_10003d420);
  puVar6 = (undefined8 *)(lVar14 + *(int *)(lVar8 + 0x24));
  *puVar6 = 0x10002c924;
  puVar6[1] = puVar7;
  puVar7 = &UNK_10004e6f0;
  _swift_allocObject(&UNK_10004e6f0,0x48,7);
  uVar12 = *unaff_x20;
  uVar9 = unaff_x20[3];
  uVar18 = unaff_x20[2];
  *(undefined8 *)(puVar7 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar7 + 0x10) = uVar12;
  *(undefined8 *)(puVar7 + 0x28) = uVar9;
  *(undefined8 *)(puVar7 + 0x20) = uVar18;
  uVar12 = unaff_x20[4];
  *(undefined8 *)(puVar7 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar7 + 0x30) = uVar12;
  *(undefined8 *)(puVar7 + 0x40) = unaff_x20[6];
  lVar8 = 0x100052610;
  FUN_100010860(0x100052610,&UNK_10003d428);
  puVar6 = (undefined8 *)(lVar15 + *(int *)(lVar8 + 0x24));
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = FUN_10002c95c;
  puVar6[3] = puVar7;
  FUN_10002b1cc(lVar5,uVar13,uVar2);
  _swift_retain(uVar19);
  FUN_10002b1cc(lVar5,uVar13,uVar2);
  _swift_retain(uVar19);
  return;
}



/* Entry: 10002c2b0; end: 10002c38b;  */

void FUN_10002c2b0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _objc_retain(param_2);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar4 + 0x68))
            (puVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_10004c6b8,
             lVar1);
  puVar2 = puVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar3,param_2);
  _swift_release(param_2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  *param_1 = puVar2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10002c38c; end: 10002c41b;  */

void FUN_10002c38c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_10004d028;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
  uVar3 = 0x100051400;
  func_0x00010002d090(0x100051400,puVar1,PTR___sScMScAsMc_10004d030);
  __sScA15unownedExecutorScevgTj(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(FUN_10002c41c,uVar2,uVar3);
  return;
}



/* Entry: 10002c41c; end: 10002c4ab;  */

void FUN_10002c41c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  uVar3 = *(undefined1 *)(puVar1 + 2);
  uVar4 = 0;
  __s23ExtensionsStickerPicker0B14FetchViewModelCMa(0);
  uVar5 = 0x1000525f8;
  func_0x00010002d090(0x1000525f8,PTR___s23ExtensionsStickerPicker0B14FetchViewModelCMa_10004ca08,
                      PTR___s23ExtensionsStickerPicker0B14FetchViewModelC7Combine16ObservableObjectAAMc_10004c9f0
                     );
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar6,uVar2,uVar3,uVar4,uVar5);
  __s23ExtensionsStickerPicker0B14FetchViewModelC05fetchB8IfNeededyyF();
  _swift_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010002c4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10002c4ac; end: 10002c643;  */

void FUN_10002c4ac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_2;
  uVar6 = param_2[1];
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar2 = 0;
  __s23ExtensionsStickerPicker0B14FetchViewModelCMa(0);
  uVar5 = 0x1000525f8;
  func_0x00010002d090(0x1000525f8,PTR___s23ExtensionsStickerPicker0B14FetchViewModelCMa_10004ca08,
                      PTR___s23ExtensionsStickerPicker0B14FetchViewModelC7Combine16ObservableObjectAAMc_10004c9f0
                     );
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar3,uVar6,uVar1,uVar2,uVar5);
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  puVar4 = PTR__OBJC_CLASS___UIScreen_100051048;
  _objc_opt_self(PTR__OBJC_CLASS___UIScreen_100051048);
  func_0x00010003b2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003b360();
  _objc_release(puVar4);
  __s23ExtensionsStickerPicker0B14FetchViewModelC27prepareDisplayImageIfNeeded11stickerSize5scaleySo6CGSizeV_12CoreGraphics7CGFloatVtF
            (uVar5,uVar6,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(uVar3);
  return;
}



/* Entry: 10002c644; end: 10002c6b7;  */

void FUN_10002c644(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = *(undefined1 *)(param_1 + 2);
  uVar3 = 0;
  __s23ExtensionsStickerPicker0B14FetchViewModelCMa(0);
  uVar4 = 0x1000525f8;
  func_0x00010002d090(0x1000525f8,PTR___s23ExtensionsStickerPicker0B14FetchViewModelCMa_10004ca08,
                      PTR___s23ExtensionsStickerPicker0B14FetchViewModelC7Combine16ObservableObjectAAMc_10004c9f0
                     );
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar5,uVar1,uVar2,uVar3,uVar4);
  __s23ExtensionsStickerPicker0B14FetchViewModelC5resetyyF();
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(uVar5);
  return;
}



/* Entry: 10002c6b8; end: 10002c6c3;  */

void FUN_10002c6b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_10004c620
  )();
  return;
}



/* Entry: 10002c6c4; end: 10002c703;  */

void FUN_10002c6c4(void)

{
  FUN_10002b508();
  return;
}



/* Entry: 10002c704; end: 10002c7e7;  */

void FUN_10002c704(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  __s7SwiftUI24ButtonStyleConfigurationV5labelAC5LabelVvg();
  __s7SwiftUI24ButtonStyleConfigurationV9isPressedSbvg();
  uVar6 = 0x3feb333333333333;
  uVar8 = 0x3ff0000000000000;
  uVar9 = uVar6;
  if ((param_2 & 1) == 0) {
    uVar9 = 0x3ff0000000000000;
  }
  __s7SwiftUI9UnitPointV6centerACvgZ();
  uVar4 = 0x100052670;
  FUN_100010860(0x100052670,&UNK_10003d478);
  puVar1 = (undefined8 *)(param_1 + *(int *)(uVar4 + 0x24));
  *puVar1 = uVar9;
  puVar1[1] = uVar9;
  puVar1[2] = uVar6;
  puVar1[3] = uVar8;
  __s7SwiftUI24ButtonStyleConfigurationV9isPressedSbvg();
  if ((uVar4 & 1) == 0) {
    __s7SwiftUI9AnimationV6spring8response15dampingFraction13blendDurationACSd_S2dtFZ
              (0x3fc999999999999a,0x3fe999999999999a,0);
    uVar7 = uVar4;
  }
  else {
    uVar7 = 0;
  }
  bVar3 = (byte)uVar4;
  __s7SwiftUI24ButtonStyleConfigurationV9isPressedSbvg();
  lVar5 = 0x100052678;
  FUN_100010860(0x100052678,&UNK_10003d480);
  puVar2 = (ulong *)(param_1 + *(int *)(lVar5 + 0x24));
  *puVar2 = uVar7;
  *(byte *)(puVar2 + 1) = bVar3 & 1;
  return;
}



/* Entry: 10002c7e8; end: 10002c7f7;  */

void FUN_10002c7e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003adb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_10004ced8)(param_1,&UNK_10003e46c,1);
  return;
}



/* Entry: 10002c7f8; end: 10002c82f;  */

void FUN_10002c7f8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10002b204(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10002c830; end: 10002c88b;  */

void FUN_10002c830(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10002c88c;
  plVar5[2] = unaff_x20 + 0x20;
  lVar2 = 0;
  __sScMMa(0,uVar4);
  puVar1 = PTR___sScMMa_10004d028;
  lVar3 = lVar2;
  __sScM6sharedScMvgZ();
  plVar5[3] = lVar3;
  uVar4 = 0x100051400;
  func_0x00010002d090(0x100051400,puVar1,PTR___sScMScAsMc_10004d030);
  __sScA15unownedExecutorScevgTj(lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(FUN_10002c41c,lVar2,uVar4);
  return;
}



/* Entry: 10002c88c; end: 10002c8c7;  */

void FUN_10002c88c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010002c8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10002c8c8; end: 10002c917;  */

undefined8 FUN_10002c8c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000512d0;
  FUN_100010860(0x1000512d0,&UNK_10003bb40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10002c918; end: 10002c92b;  */

void FUN_10002c918(void)

{
  long unaff_x20;
  
  FUN_10002b204(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10002c92c; end: 10002c95b;  */

void FUN_10002c92c(void)

{
  long unaff_x20;
  
  FUN_10002b204(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10002c95c; end: 10002c963;  */

void FUN_10002c95c(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar3 = 0;
  __s23ExtensionsStickerPicker0B14FetchViewModelCMa(0);
  uVar4 = 0x1000525f8;
  func_0x00010002d090(0x1000525f8,PTR___s23ExtensionsStickerPicker0B14FetchViewModelCMa_10004ca08,
                      PTR___s23ExtensionsStickerPicker0B14FetchViewModelC7Combine16ObservableObjectAAMc_10004c9f0
                     );
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar5,uVar1,uVar2,uVar3,uVar4);
  __s23ExtensionsStickerPicker0B14FetchViewModelC5resetyyF();
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(uVar5);
  return;
}



/* Entry: 10002c964; end: 10002c9ab;  */

undefined8 FUN_10002c964(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x100052648;
  FUN_100010860(0x100052648,&UNK_10003d468);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10002c9ac; end: 10002ca8f;  */

void FUN_10002c9ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (puRam0000000100052650 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100052630;
  func_0x0001000118b8(0x100052630,&UNK_10003d450);
  uVar2 = 0x100052638;
  func_0x0001000118b8(0x100052638,&UNK_10003d458);
  uVar3 = 0x100052658;
  func_0x00010002d0d0(0x100052658,0x100052638,&UNK_10003d458,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_10004c720);
  uVar4 = uVar3;
  FUN_10002ca90();
  puStack_48 = &UNK_10004e658;
  puVar5 = &uStack_50;
  uStack_50 = uVar2;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  _swift_getOpaqueTypeConformance
            (puVar5,PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_10004c638,1);
  puVar6 = puVar5;
  FUN_1000284f8();
  puVar7 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0;
  puStack_60 = puVar5;
  puStack_58 = puVar6;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0,uVar1,
             &puStack_60);
  puRam0000000100052650 = puVar7;
  return;
}



/* Entry: 10002ca90; end: 10002cacf;  */

void FUN_10002ca90(void)

{
  undefined *puVar1;
  
  if (puRam0000000100052660 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10003d368;
  _swift_getWitnessTable(&UNK_10003d368,&UNK_10004e658);
  puRam0000000100052660 = puVar1;
  return;
}



/* Entry: 10002cad0; end: 10002cb67;  */

undefined8 FUN_10002cad0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x100052630;
  FUN_100010860(0x100052630,&UNK_10003d450);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10002cb68; end: 10002cbdf;  */

void FUN_10002cb68(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  FUN_10002b204(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x48 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10002cbe0; end: 10002cc1f;  */

void FUN_10002cbe0(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(unaff_x20 + 0x28))
            (*(undefined8 *)(unaff_x20 + 0x30),
             unaff_x20 + (uVar2 + 0x48 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 10002cc20; end: 10002cc2b;  */

void FUN_10002cc20(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _objc_retain(uVar3);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar5 + 0x68))
            (puVar4,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_10004c6b8,
             lVar1);
  puVar2 = puVar4;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar4,uVar3);
  _swift_release(uVar3);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
  *param_1 = puVar2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10002cc2c; end: 10002cf63;  */

void FUN_10002cc2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000100052680 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100052610;
  func_0x0001000118b8(0x100052610,&UNK_10003d428);
  uVar2 = uVar1;
  func_0x00010002cca4();
  puStack_28 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_10004c560;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &uStack_30);
  puRam0000000100052680 = puVar3;
  return;
}



/* Entry: 10002cf64; end: 10002cf67;  */

void FUN_10002cf64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000526c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100052678;
  func_0x0001000118b8(0x100052678,&UNK_10003d480);
  uVar2 = uVar1;
  func_0x00010002d000();
  uVar3 = 0x100051d08;
  func_0x00010002d0d0(0x100051d08,0x100051d10,&UNK_10003c3d0,
                      PTR___s7SwiftUI18_AnimationModifierVyxGAA04ViewD0AAMc_10004c468);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &uStack_30);
  puRam00000001000526c8 = puVar4;
  return;
}



/* Entry: 10002cf68; end: 10002d113;  */

void FUN_10002cf68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000526c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100052678;
  func_0x0001000118b8(0x100052678,&UNK_10003d480);
  uVar2 = uVar1;
  func_0x00010002d000();
  uVar3 = 0x100051d08;
  func_0x00010002d0d0(0x100051d08,0x100051d10,&UNK_10003c3d0,
                      PTR___s7SwiftUI18_AnimationModifierVyxGAA04ViewD0AAMc_10004c468);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &uStack_30);
  puRam00000001000526c8 = puVar4;
  return;
}



/* Entry: 10002d114; end: 10002d123;  */

void FUN_10002d114(void)

{
  long unaff_x20;
  
  FUN_10002b204(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10002d124; end: 10002d187;  */

long FUN_10002d124(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10002d188; end: 10002d1a7;  */

void FUN_10002d188(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010002d19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(*param_1);
  return;
}



/* Entry: 10002d1a8; end: 10002d2cf;  */

undefined1 * FUN_10002d1a8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x28) = lVar3;
  pcVar2 = (code *)**(undefined8 **)(lVar3 + -8);
  _swift_retain();
  (*pcVar2)(param_1 + 0x10,param_2 + 0x10,lVar3);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  param_1[0x48] = param_2[0x48];
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  _swift_unknownObjectRetain();
  _swift_retain(uVar1);
  return param_1;
}



/* Entry: 10002d2d0; end: 10002d42f;  */

void FUN_10002d2d0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  if (param_1 != param_2) {
    lVar3 = param_1[3];
    lVar5 = param_2[3];
    if (lVar3 == lVar5) {
      if ((*(byte *)(*(long *)(lVar3 + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010002d388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar3 + -8) + 0x18))(param_1,param_2,lVar3);
        return;
      }
      uVar4 = *param_1;
      uVar2 = *param_2;
      _swift_retain(uVar2);
      _swift_release(uVar4);
      *param_1 = uVar2;
    }
    else {
      param_1[3] = lVar5;
      param_1[4] = param_2[4];
      lVar6 = *(long *)(lVar3 + -8);
      lVar7 = *(long *)(lVar5 + -8);
      uVar1 = *(uint *)(lVar7 + 0x50);
      if ((*(byte *)(lVar6 + 0x52) >> 1 & 1) != 0) {
        uVar4 = *param_1;
        if ((uVar1 >> 0x11 & 1) == 0) {
          (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
        }
        else {
          uVar2 = *param_2;
          *param_1 = uVar2;
          _swift_retain(uVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_10004cf38)(uVar4);
        return;
      }
      (**(code **)(lVar6 + 0x20))(auStack_68,param_1,lVar3);
      if ((uVar1 >> 0x11 & 1) == 0) {
        (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      (**(code **)(lVar6 + 8))(auStack_68,lVar3);
    }
  }
  return;
}



/* Entry: 10002d430; end: 10002d4ab;  */

undefined1 * FUN_10002d430(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_release(uVar1);
  FUN_10002d188(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _swift_unknownObjectRelease(uVar2);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  param_1[0x48] = param_2[0x48];
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 10002d4ac; end: 10002d557;  */

int FUN_10002d4ac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10002d558; end: 10002d58b;  */

void FUN_10002d558(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance(&uStack_20,&UNK_10003e4f8,1);
  return;
}



/* Entry: 10002d58c; end: 10002dcbb;  */

void FUN_10002d58c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x12;
  code *pcVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar3 = 0x100052758;
  func_0x0001000118b8(0x100052758,&UNK_10003d540);
  uVar6 = 0x100052760;
  func_0x0001000118b8(0x100052760,&UNK_10003d548);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = 0xff;
  FUN_1000271d4(0xff,uVar1,uVar2);
  uVar5 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,uVar6,uVar4,0,0);
  uVar6 = 0xff;
  __s7SwiftUI9TupleViewVMa(0xff,uVar5);
  puVar8 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868;
  puVar7 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868;
  _swift_getWitnessTable(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868,uVar6);
  uVar4 = 0xff;
  __s7SwiftUI6VStackVMa(0xff,uVar6,puVar7);
  uVar6 = 0xff;
  __s7SwiftUI19_ConditionalContentVMa(0xff,uVar3,uVar4);
  uVar3 = 0x100052768;
  func_0x00010002e410(0x100052768,0x100052758,&UNK_10003d540,puVar8);
  puVar8 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760;
  _swift_getWitnessTable(PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760,uVar4);
  puVar7 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0;
  uStack_70 = uVar3;
  puStack_68 = puVar8;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0,uVar6,
             &uStack_70);
  lVar9 = 0;
  __s7SwiftUI6ZStackVMa(0,uVar6,puVar7);
  lVar13 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar13 + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar12 = (long)puVar11 - extraout_x12;
  __s7SwiftUI9AlignmentV6bottomACvgZ();
  uStack_90 = uVar1;
  uStack_88 = uVar2;
  __s7SwiftUI6ZStackV9alignment7contentACyxGAA9AlignmentV_xyXEtcfC(puVar11);
  puVar8 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_10004c780;
  _swift_getWitnessTable(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_10004c780,lVar9);
  FUN_100028c48(lVar12,puVar11,lVar9,puVar8);
  pcVar10 = *(code **)(lVar13 + 8);
  (*pcVar10)(puVar11,lVar9);
  FUN_100028c48(param_1,lVar12,lVar9,puVar8);
  (*pcVar10)(lVar12,lVar9);
  return;
}



/* Entry: 10002dcbc; end: 10002e037;  */

void FUN_10002dcbc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_360;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 uStack_2d0;
  undefined8 *puStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined7 uStack_258;
  undefined4 uStack_251;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined1 uStack_100;
  undefined2 uStack_ff;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined2 uStack_8f;
  
  lVar4 = 0;
  uStack_360 = param_4;
  uStack_348 = param_1;
  FUN_1000271d4();
  lStack_350 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lStack_350 + 0x40));
  lVar9 = (long)&uStack_360 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lStack_358 = lVar9 - extraout_x12;
  lVar5 = 0;
  func_0x00010002d54c(0,param_3,param_4);
  FUN_10002e038(&uStack_f0);
  uStack_238 = uStack_e8;
  uStack_240 = uStack_f0;
  uStack_228 = uStack_d8;
  uStack_230 = uStack_e0;
  uStack_218 = uStack_c8;
  uStack_220 = uStack_d0;
  uStack_208 = uStack_b8;
  uStack_210 = uStack_c0;
  lStack_328 = uStack_e8;
  uStack_330 = uStack_f0;
  uStack_318 = uStack_d8;
  uStack_320 = uStack_e0;
  uStack_308 = uStack_c8;
  uStack_310 = uStack_d0;
  uStack_2f8 = uStack_b8;
  uStack_300 = uStack_c0;
  uStack_1f8 = uStack_a8;
  uStack_200 = uStack_b0;
  uStack_1e8 = uStack_98;
  uStack_1f0 = uStack_a0;
  uStack_2e8 = uStack_a8;
  uStack_2f0 = uStack_b0;
  uStack_2d8 = uStack_98;
  uStack_2e0 = uStack_a0;
  uStack_1e0 = uStack_90;
  uStack_2d0 = uStack_90;
  uStack_1c8 = uStack_e8;
  uStack_1d0 = uStack_f0;
  uStack_1b8 = uStack_d8;
  uStack_1c0 = uStack_e0;
  uStack_170 = uStack_90;
  uStack_188 = uStack_a8;
  uStack_190 = uStack_b0;
  uStack_178 = uStack_98;
  uStack_180 = uStack_a0;
  uStack_1a8 = uStack_c8;
  uStack_1b0 = uStack_d0;
  uStack_198 = uStack_b8;
  uStack_1a0 = uStack_c0;
  FUN_10002e174(&uStack_240,&uStack_160,0x100052778,&UNK_10003d560);
  func_0x00010002e1bc(&uStack_1d0,0x100052778,&UNK_10003d560);
  uStack_118 = uStack_2e8;
  uStack_120 = uStack_2f0;
  uStack_108 = (undefined7)uStack_2d8;
  uStack_101 = (undefined1)((ulong)uStack_2d8 >> 0x38);
  uStack_110 = uStack_2e0;
  uStack_100 = uStack_2d0;
  uStack_158 = lStack_328;
  uStack_160 = uStack_330;
  uStack_148 = uStack_318;
  uStack_150 = uStack_320;
  uStack_138 = uStack_308;
  uStack_140 = uStack_310;
  uStack_128 = uStack_2f8;
  uStack_130 = uStack_300;
  uStack_ff = 0x100;
  uStack_e8 = lStack_328;
  uStack_f0 = uStack_330;
  uStack_d8 = uStack_318;
  uStack_e0 = uStack_320;
  uStack_90 = uStack_2d0;
  uStack_a8 = uStack_2e8;
  uStack_b0 = uStack_2f0;
  uStack_98 = uStack_2d8;
  uStack_a0 = uStack_2e0;
  uStack_c8 = uStack_308;
  uStack_d0 = uStack_310;
  uStack_b8 = uStack_2f8;
  uStack_c0 = uStack_300;
  uStack_8f = 0x100;
  FUN_10002e174(&uStack_160,&uStack_2b0,0x100052760,&UNK_10003d548);
  func_0x00010002e1bc(&uStack_f0,0x100052760,&UNK_10003d548);
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  uVar11 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined1 *)(param_2 + 0x48);
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(&uStack_2b0,param_2,lVar5);
  puVar6 = &UNK_10004e818;
  _swift_allocObject(&UNK_10004e818,0x80,7);
  *(undefined8 *)(puVar6 + 0x10) = param_3;
  *(undefined8 *)(puVar6 + 0x18) = uStack_360;
  *(undefined8 *)(puVar6 + 0x48) = uStack_288;
  *(undefined8 *)(puVar6 + 0x40) = uStack_290;
  *(undefined8 *)(puVar6 + 0x58) = uStack_278;
  *(undefined8 *)(puVar6 + 0x50) = uStack_280;
  *(undefined8 *)(puVar6 + 0x68) = uStack_268;
  *(undefined8 *)(puVar6 + 0x60) = uStack_270;
  *(ulong *)(puVar6 + 0x78) = CONCAT17((undefined1)uStack_251,uStack_258);
  *(undefined8 *)(puVar6 + 0x70) = uStack_260;
  *(undefined8 *)(puVar6 + 0x28) = uStack_2a8;
  *(undefined8 *)(puVar6 + 0x20) = uStack_2b0;
  *(undefined8 *)(puVar6 + 0x38) = uStack_298;
  *(undefined8 *)(puVar6 + 0x30) = uStack_2a0;
  FUN_100027e04(lVar9,uVar11,uVar10,uVar2,uVar7,uVar1,FUN_10002e238,puVar6,param_3);
  puVar6 = &UNK_10003cf48;
  _swift_getWitnessTable(&UNK_10003cf48,lVar4);
  lVar5 = lStack_358;
  FUN_100028c48(lStack_358,lVar9,lVar4,puVar6);
  lVar3 = lStack_350;
  pcVar8 = *(code **)(lStack_350 + 8);
  _swift_unknownObjectRetain(uVar10);
  _swift_retain(uVar1);
  (*pcVar8)(lVar9,lVar4);
  uStack_268 = uStack_118;
  uStack_270 = uStack_120;
  uStack_258 = uStack_108;
  uStack_260 = uStack_110;
  uStack_251 = CONCAT22(uStack_ff,CONCAT11(uStack_100,uStack_101));
  uStack_2a8 = uStack_158;
  uStack_2b0 = uStack_160;
  uStack_298 = uStack_148;
  uStack_2a0 = uStack_150;
  uStack_288 = uStack_138;
  uStack_290 = uStack_140;
  uStack_278 = uStack_128;
  uStack_280 = uStack_130;
  puStack_2c0 = &uStack_2b0;
  (**(code **)(lVar3 + 0x10))(lVar9,lVar5,lVar4);
  uVar7 = 0x100052760;
  lStack_2b8 = lVar9;
  FUN_10002e174(&uStack_160,&uStack_330,0x100052760,&UNK_10003d548);
  FUN_100010860(0x100052760,&UNK_10003d548);
  uStack_330 = uVar7;
  lStack_328 = lVar4;
  func_0x00010002e288();
  uStack_340 = uVar7;
  puStack_338 = puVar6;
  FUN_10002722c(uStack_348,&puStack_2c0,2,&uStack_330,&uStack_340);
  func_0x00010002e1bc(&uStack_160,0x100052760,&UNK_10003d548);
  (*pcVar8)(lVar5,lVar4);
  (*pcVar8)(lVar9,lVar4);
  func_0x00010002e1bc(&uStack_2b0,0x100052760,&UNK_10003d548);
  return;
}



/* Entry: 10002e038; end: 10002e0bf;  */

void FUN_10002e038(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000100038a3c();
  puVar1 = &UNK_10003d578;
  _swift_getKeyPath();
  puVar2 = puVar1;
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar3 = 0x4034000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  *(char *)(param_1 + 7) = (char)puVar2;
  param_1[8] = uVar3;
  param_1[9] = param_3;
  param_1[10] = param_4;
  param_1[0xb] = param_5;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *param_1 = param_6;
  param_1[1] = param_7;
  param_1[2] = 0x402c000000000000;
  param_1[3] = 0x48;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = puVar1;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}



/* Entry: 10002e0c0; end: 10002e0e7;  */

void FUN_10002e0c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_10004c620
  )();
  return;
}



/* Entry: 10002e0e8; end: 10002e167;  */

undefined8 FUN_10002e0e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker13LoggedOutViewVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10002e168; end: 10002e173;  */

void FUN_10002e168(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_360;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 uStack_2d0;
  undefined8 *puStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined7 uStack_258;
  undefined4 uStack_251;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined1 uStack_100;
  undefined2 uStack_ff;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined2 uStack_8f;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar4 = 0;
  uStack_360 = uVar7;
  uStack_348 = param_1;
  FUN_1000271d4();
  lStack_350 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lStack_350 + 0x40));
  lVar10 = (long)&uStack_360 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lStack_358 = lVar10 - extraout_x12;
  lVar5 = 0;
  func_0x00010002d54c(0,uVar1,uVar7);
  FUN_10002e038(&uStack_f0);
  uStack_238 = uStack_e8;
  uStack_240 = uStack_f0;
  uStack_228 = uStack_d8;
  uStack_230 = uStack_e0;
  uStack_218 = uStack_c8;
  uStack_220 = uStack_d0;
  uStack_208 = uStack_b8;
  uStack_210 = uStack_c0;
  lStack_328 = uStack_e8;
  uStack_330 = uStack_f0;
  uStack_318 = uStack_d8;
  uStack_320 = uStack_e0;
  uStack_308 = uStack_c8;
  uStack_310 = uStack_d0;
  uStack_2f8 = uStack_b8;
  uStack_300 = uStack_c0;
  uStack_1f8 = uStack_a8;
  uStack_200 = uStack_b0;
  uStack_1e8 = uStack_98;
  uStack_1f0 = uStack_a0;
  uStack_2e8 = uStack_a8;
  uStack_2f0 = uStack_b0;
  uStack_2d8 = uStack_98;
  uStack_2e0 = uStack_a0;
  uStack_1e0 = uStack_90;
  uStack_2d0 = uStack_90;
  uStack_1c8 = uStack_e8;
  uStack_1d0 = uStack_f0;
  uStack_1b8 = uStack_d8;
  uStack_1c0 = uStack_e0;
  uStack_170 = uStack_90;
  uStack_188 = uStack_a8;
  uStack_190 = uStack_b0;
  uStack_178 = uStack_98;
  uStack_180 = uStack_a0;
  uStack_1a8 = uStack_c8;
  uStack_1b0 = uStack_d0;
  uStack_198 = uStack_b8;
  uStack_1a0 = uStack_c0;
  FUN_10002e174(&uStack_240,&uStack_160,0x100052778,&UNK_10003d560);
  func_0x00010002e1bc(&uStack_1d0,0x100052778,&UNK_10003d560);
  uStack_118 = uStack_2e8;
  uStack_120 = uStack_2f0;
  uStack_108 = (undefined7)uStack_2d8;
  uStack_101 = (undefined1)((ulong)uStack_2d8 >> 0x38);
  uStack_110 = uStack_2e0;
  uStack_100 = uStack_2d0;
  uStack_158 = lStack_328;
  uStack_160 = uStack_330;
  uStack_148 = uStack_318;
  uStack_150 = uStack_320;
  uStack_138 = uStack_308;
  uStack_140 = uStack_310;
  uStack_128 = uStack_2f8;
  uStack_130 = uStack_300;
  uStack_ff = 0x100;
  uStack_e8 = lStack_328;
  uStack_f0 = uStack_330;
  uStack_d8 = uStack_318;
  uStack_e0 = uStack_320;
  uStack_90 = uStack_2d0;
  uStack_a8 = uStack_2e8;
  uStack_b0 = uStack_2f0;
  uStack_98 = uStack_2d8;
  uStack_a0 = uStack_2e0;
  uStack_c8 = uStack_308;
  uStack_d0 = uStack_310;
  uStack_b8 = uStack_2f8;
  uStack_c0 = uStack_300;
  uStack_8f = 0x100;
  FUN_10002e174(&uStack_160,&uStack_2b0,0x100052760,&UNK_10003d548);
  func_0x00010002e1bc(&uStack_f0,0x100052760,&UNK_10003d548);
  uVar11 = *(undefined8 *)(lVar8 + 0x38);
  uVar12 = *(undefined8 *)(lVar8 + 0x40);
  uVar3 = *(undefined1 *)(lVar8 + 0x48);
  uVar7 = *(undefined8 *)(lVar8 + 0x50);
  uVar2 = *(undefined8 *)(lVar8 + 0x58);
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(&uStack_2b0,lVar8,lVar5);
  puVar6 = &UNK_10004e818;
  _swift_allocObject(&UNK_10004e818,0x80,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uStack_360;
  *(undefined8 *)(puVar6 + 0x48) = uStack_288;
  *(undefined8 *)(puVar6 + 0x40) = uStack_290;
  *(undefined8 *)(puVar6 + 0x58) = uStack_278;
  *(undefined8 *)(puVar6 + 0x50) = uStack_280;
  *(undefined8 *)(puVar6 + 0x68) = uStack_268;
  *(undefined8 *)(puVar6 + 0x60) = uStack_270;
  *(ulong *)(puVar6 + 0x78) = CONCAT17((undefined1)uStack_251,uStack_258);
  *(undefined8 *)(puVar6 + 0x70) = uStack_260;
  *(undefined8 *)(puVar6 + 0x28) = uStack_2a8;
  *(undefined8 *)(puVar6 + 0x20) = uStack_2b0;
  *(undefined8 *)(puVar6 + 0x38) = uStack_298;
  *(undefined8 *)(puVar6 + 0x30) = uStack_2a0;
  FUN_100027e04(lVar10,uVar12,uVar11,uVar3,uVar7,uVar2,FUN_10002e238,puVar6,uVar1);
  puVar6 = &UNK_10003cf48;
  _swift_getWitnessTable(&UNK_10003cf48,lVar4);
  lVar5 = lStack_358;
  FUN_100028c48(lStack_358,lVar10,lVar4,puVar6);
  lVar8 = lStack_350;
  pcVar9 = *(code **)(lStack_350 + 8);
  _swift_unknownObjectRetain(uVar11);
  _swift_retain(uVar2);
  (*pcVar9)(lVar10,lVar4);
  uStack_268 = uStack_118;
  uStack_270 = uStack_120;
  uStack_258 = uStack_108;
  uStack_260 = uStack_110;
  uStack_251 = CONCAT22(uStack_ff,CONCAT11(uStack_100,uStack_101));
  uStack_2a8 = uStack_158;
  uStack_2b0 = uStack_160;
  uStack_298 = uStack_148;
  uStack_2a0 = uStack_150;
  uStack_288 = uStack_138;
  uStack_290 = uStack_140;
  uStack_278 = uStack_128;
  uStack_280 = uStack_130;
  puStack_2c0 = &uStack_2b0;
  (**(code **)(lVar8 + 0x10))(lVar10,lVar5,lVar4);
  uVar7 = 0x100052760;
  lStack_2b8 = lVar10;
  FUN_10002e174(&uStack_160,&uStack_330,0x100052760,&UNK_10003d548);
  FUN_100010860(0x100052760,&UNK_10003d548);
  uStack_330 = uVar7;
  lStack_328 = lVar4;
  func_0x00010002e288();
  uStack_340 = uVar7;
  puStack_338 = puVar6;
  FUN_10002722c(uStack_348,&puStack_2c0,2,&uStack_330,&uStack_340);
  func_0x00010002e1bc(&uStack_160,0x100052760,&UNK_10003d548);
  (*pcVar9)(lVar5,lVar4);
  (*pcVar9)(lVar10,lVar4);
  func_0x00010002e1bc(&uStack_2b0,0x100052760,&UNK_10003d548);
  return;
}



/* Entry: 10002e174; end: 10002e1fb;  */

undefined8 FUN_10002e174(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_100010860(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10002e1fc; end: 10002e237;  */

void FUN_10002e1fc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_10002d188(unaff_x20 + 0x30);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10002e238; end: 10002e23f;  */

void FUN_10002e238(void)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uStack_21 = 0;
  uVar1 = 0x1000513d8;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_21,uVar1);
  return;
}



/* Entry: 10002e240; end: 10002e453;  */

void FUN_10002e240(undefined1 param_1)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uVar1 = 0x1000513d8;
  uStack_21 = param_1;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_21,uVar1);
  return;
}



/* Entry: 10002e454; end: 10002e45b;  */

void FUN_10002e454(undefined1 *param_1,undefined1 param_2)

{
  __s7SwiftUI17EnvironmentValuesV22multilineTextAlignmentAA0fG0Ovg();
  *param_1 = param_2;
  return;
}



/* Entry: 10002e45c; end: 10002e59f;  */

void FUN_10002e45c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar7 = 0x100052758;
  func_0x0001000118b8(0x100052758,&UNK_10003d540);
  uVar4 = 0x100052760;
  func_0x0001000118b8(0x100052760,&UNK_10003d548);
  uVar2 = 0xff;
  FUN_1000271d4(0xff,uVar3,uVar1);
  uVar3 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,uVar4,uVar2,0,0);
  uVar4 = 0xff;
  __s7SwiftUI9TupleViewVMa(0xff,uVar3);
  puVar6 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868;
  puVar5 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868;
  _swift_getWitnessTable(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868,uVar4);
  uVar3 = 0xff;
  __s7SwiftUI6VStackVMa(0xff,uVar4,puVar5);
  uVar4 = 0xff;
  __s7SwiftUI19_ConditionalContentVMa(0xff,uVar7,uVar3);
  uVar7 = 0x100052768;
  func_0x00010002e410(0x100052768,0x100052758,&UNK_10003d540,puVar6);
  puVar6 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760;
  _swift_getWitnessTable(PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760,uVar3);
  puVar5 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0;
  uStack_50 = uVar7;
  puStack_48 = puVar6;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0,uVar4,
             &uStack_50);
  uVar7 = 0xff;
  __s7SwiftUI6ZStackVMa(0xff,uVar4,puVar5);
  _swift_getWitnessTable(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_10004c780,uVar7);
  return;
}



/* Entry: 10002e5a0; end: 10002e5ab;  */

void FUN_10002e5a0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_10002d188(unaff_x20 + 0x30);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10002e5ac; end: 10002e617;  */

long FUN_10002e5ac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10002e618; end: 10002e767;  */

undefined1 * FUN_10002e618(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  lVar4 = *(long *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x28) = lVar4;
  pcVar2 = (code *)**(undefined8 **)(lVar4 + -8);
  _swift_retain();
  (*pcVar2)(param_1 + 0x10,param_2 + 0x10,lVar4);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  param_1[0x50] = param_2[0x50];
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  _swift_retain();
  _swift_unknownObjectRetain(uVar1);
  _swift_retain(uVar3);
  return param_1;
}



/* Entry: 10002e768; end: 10002e793;  */

void FUN_10002e768(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0xc] = param_2[0xc];
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Entry: 10002e794; end: 10002e81f;  */

undefined1 * FUN_10002e794(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_release(uVar1);
  FUN_10002d188(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _swift_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  _swift_unknownObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  param_1[0x50] = param_2[0x50];
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 10002e820; end: 10002e8cb;  */

int FUN_10002e820(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10002e8cc; end: 10002e8ff;  */

void FUN_10002e8cc(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance(&uStack_20,&UNK_10003e568,1);
  return;
}



/* Entry: 10002e900; end: 10002ea87;  */

void FUN_10002e900(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  __s7SwiftUI19_ConditionalContentV7StorageOMa();
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffb0 + -extraout_x8;
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(puVar2,param_2,param_3);
  _swift_storeEnumTagMultiPayload(puVar2,lVar1,0);
  __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
            (param_1,puVar2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 10002ea88; end: 10002f1f7;  */

void FUN_10002ea88(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x12;
  code *pcVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar3 = 0x100052830;
  func_0x0001000118b8(0x100052830,&UNK_10003d650);
  uVar6 = 0x100052760;
  func_0x0001000118b8(0x100052760,&UNK_10003d548);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = 0xff;
  FUN_1000271d4(0xff,uVar1,uVar2);
  uVar5 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,uVar6,uVar4,0,0);
  uVar6 = 0xff;
  __s7SwiftUI9TupleViewVMa(0xff,uVar5);
  puVar8 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868;
  puVar7 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868;
  _swift_getWitnessTable(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868,uVar6);
  uVar4 = 0xff;
  __s7SwiftUI6VStackVMa(0xff,uVar6,puVar7);
  uVar6 = 0xff;
  __s7SwiftUI19_ConditionalContentVMa(0xff,uVar3,uVar4);
  uVar3 = 0x100052838;
  func_0x00010002f7d4(0x100052838,0x100052830,&UNK_10003d650,puVar8);
  puVar8 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760;
  _swift_getWitnessTable(PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760,uVar4);
  puVar7 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0;
  uStack_70 = uVar3;
  puStack_68 = puVar8;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0,uVar6,
             &uStack_70);
  lVar9 = 0;
  __s7SwiftUI6ZStackVMa(0,uVar6,puVar7);
  lVar13 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar13 + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar12 = (long)puVar11 - extraout_x12;
  __s7SwiftUI9AlignmentV6bottomACvgZ();
  uStack_90 = uVar1;
  uStack_88 = uVar2;
  __s7SwiftUI6ZStackV9alignment7contentACyxGAA9AlignmentV_xyXEtcfC(puVar11);
  puVar8 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_10004c780;
  _swift_getWitnessTable(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_10004c780,lVar9);
  FUN_100028c48(lVar12,puVar11,lVar9,puVar8);
  pcVar10 = *(code **)(lVar13 + 8);
  (*pcVar10)(puVar11,lVar9);
  FUN_100028c48(param_1,lVar12,lVar9,puVar8);
  (*pcVar10)(lVar12,lVar9);
  return;
}



/* Entry: 10002f1f8; end: 10002f57b;  */

void FUN_10002f1f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_360;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d0;
  undefined8 *puStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined7 uStack_258;
  undefined1 uStack_251;
  undefined1 uStack_250;
  undefined2 uStack_24f;
  undefined5 uStack_24d;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_100;
  undefined2 uStack_ff;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_90;
  undefined2 uStack_8f;
  
  lVar4 = 0;
  uStack_360 = param_4;
  uStack_348 = param_1;
  FUN_1000271d4();
  lStack_350 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lStack_350 + 0x40));
  lVar9 = (long)&uStack_360 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lStack_358 = lVar9 - extraout_x12;
  lVar5 = 0;
  func_0x00010002e8c0(0,param_3,param_4);
  FUN_10002f57c(&uStack_2b0);
  uStack_238 = uStack_2a8;
  uStack_240 = uStack_2b0;
  uStack_228 = uStack_298;
  uStack_230 = uStack_2a0;
  uStack_218 = uStack_288;
  uStack_220 = uStack_290;
  uStack_208 = uStack_278;
  uStack_210 = uStack_280;
  lStack_328 = uStack_2a8;
  uStack_330 = uStack_2b0;
  uStack_318 = uStack_298;
  uStack_320 = uStack_2a0;
  uStack_308 = uStack_288;
  uStack_310 = uStack_290;
  uStack_2f8 = uStack_278;
  uStack_300 = uStack_280;
  uStack_1f8 = uStack_268;
  uStack_200 = uStack_270;
  uStack_1f0 = uStack_260;
  uStack_2e8 = uStack_268;
  uStack_2f0 = uStack_270;
  uStack_2e0 = uStack_260;
  uStack_1e0 = uStack_250;
  uStack_2d0 = uStack_250;
  uStack_1c8 = uStack_2a8;
  uStack_1d0 = uStack_2b0;
  uStack_1b8 = uStack_298;
  uStack_1c0 = uStack_2a0;
  uStack_170 = uStack_250;
  uStack_188 = uStack_268;
  uStack_190 = uStack_270;
  uStack_180 = uStack_260;
  uStack_1a8 = uStack_288;
  uStack_1b0 = uStack_290;
  uStack_198 = uStack_278;
  uStack_1a0 = uStack_280;
  FUN_10002f6b8(&uStack_240,&uStack_f0,0x100052778,&UNK_10003d560);
  func_0x00010002f700(&uStack_1d0,0x100052778,&UNK_10003d560);
  uStack_118 = uStack_2e8;
  uStack_120 = uStack_2f0;
  uStack_110 = uStack_2e0;
  uStack_100 = uStack_2d0;
  uStack_158 = lStack_328;
  uStack_160 = uStack_330;
  uStack_148 = uStack_318;
  uStack_150 = uStack_320;
  uStack_138 = uStack_308;
  uStack_140 = uStack_310;
  uStack_128 = uStack_2f8;
  uStack_130 = uStack_300;
  uStack_ff = 0x100;
  uStack_e8 = lStack_328;
  uStack_f0 = uStack_330;
  uStack_d8 = uStack_318;
  uStack_e0 = uStack_320;
  uStack_90 = uStack_2d0;
  uStack_a8 = uStack_2e8;
  uStack_b0 = uStack_2f0;
  uStack_a0 = uStack_2e0;
  uStack_c8 = uStack_308;
  uStack_d0 = uStack_310;
  uStack_b8 = uStack_2f8;
  uStack_c0 = uStack_300;
  uStack_8f = 0x100;
  FUN_10002f6b8(&uStack_160,&uStack_2b0,0x100052760,&UNK_10003d548);
  func_0x00010002f700(&uStack_f0,0x100052760,&UNK_10003d548);
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  uVar11 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined1 *)(param_2 + 0x50);
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(&uStack_2b0,param_2,lVar5);
  puVar6 = &UNK_10004e908;
  _swift_allocObject(&UNK_10004e908,0x88,7);
  *(undefined8 *)(puVar6 + 0x10) = param_3;
  *(undefined8 *)(puVar6 + 0x18) = uStack_360;
  *(undefined8 *)(puVar6 + 0x68) = uStack_268;
  *(undefined8 *)(puVar6 + 0x60) = uStack_270;
  *(ulong *)(puVar6 + 0x78) = CONCAT17(uStack_251,uStack_258);
  *(undefined8 *)(puVar6 + 0x70) = uStack_260;
  *(ulong *)(puVar6 + 0x80) = CONCAT53(uStack_24d,CONCAT21(uStack_24f,uStack_250));
  *(undefined8 *)(puVar6 + 0x28) = uStack_2a8;
  *(undefined8 *)(puVar6 + 0x20) = uStack_2b0;
  *(undefined8 *)(puVar6 + 0x38) = uStack_298;
  *(undefined8 *)(puVar6 + 0x30) = uStack_2a0;
  *(undefined8 *)(puVar6 + 0x48) = uStack_288;
  *(undefined8 *)(puVar6 + 0x40) = uStack_290;
  *(undefined8 *)(puVar6 + 0x58) = uStack_278;
  *(undefined8 *)(puVar6 + 0x50) = uStack_280;
  FUN_100027e04(lVar9,uVar11,uVar10,uVar2,uVar7,uVar1,FUN_10002f784,puVar6,param_3);
  puVar6 = &UNK_10003cf48;
  _swift_getWitnessTable(&UNK_10003cf48,lVar4);
  lVar5 = lStack_358;
  FUN_100028c48(lStack_358,lVar9,lVar4,puVar6);
  lVar3 = lStack_350;
  pcVar8 = *(code **)(lStack_350 + 8);
  _swift_unknownObjectRetain(uVar10);
  _swift_retain(uVar1);
  (*pcVar8)(lVar9,lVar4);
  uStack_268 = uStack_118;
  uStack_270 = uStack_120;
  uStack_260 = uStack_110;
  uStack_250 = uStack_100;
  uStack_24f = uStack_ff;
  uStack_2a8 = uStack_158;
  uStack_2b0 = uStack_160;
  uStack_298 = uStack_148;
  uStack_2a0 = uStack_150;
  uStack_288 = uStack_138;
  uStack_290 = uStack_140;
  uStack_278 = uStack_128;
  uStack_280 = uStack_130;
  puStack_2c0 = &uStack_2b0;
  (**(code **)(lVar3 + 0x10))(lVar9,lVar5,lVar4);
  uVar7 = 0x100052760;
  lStack_2b8 = lVar9;
  FUN_10002f6b8(&uStack_160,&uStack_330,0x100052760,&UNK_10003d548);
  FUN_100010860(0x100052760,&UNK_10003d548);
  uStack_330 = uVar7;
  lStack_328 = lVar4;
  func_0x00010002e288();
  uStack_340 = uVar7;
  puStack_338 = puVar6;
  FUN_10002722c(uStack_348,&puStack_2c0,2,&uStack_330,&uStack_340);
  func_0x00010002f700(&uStack_160,0x100052760,&UNK_10003d548);
  (*pcVar8)(lVar5,lVar4);
  (*pcVar8)(lVar9,lVar4);
  func_0x00010002f700(&uStack_2b0,0x100052760,&UNK_10003d548);
  return;
}



/* Entry: 10002f57c; end: 10002f603;  */

void FUN_10002f57c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000100038b08();
  puVar1 = &UNK_10003d668;
  _swift_getKeyPath();
  puVar2 = puVar1;
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar3 = 0x4034000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  *(char *)(param_1 + 7) = (char)puVar2;
  param_1[8] = uVar3;
  param_1[9] = param_3;
  param_1[10] = param_4;
  param_1[0xb] = param_5;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *param_1 = param_6;
  param_1[1] = param_7;
  param_1[2] = 0x402c000000000000;
  param_1[3] = 0x48;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = puVar1;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}



/* Entry: 10002f604; end: 10002f62b;  */

void FUN_10002f604(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_10004c620
  )();
  return;
}



/* Entry: 10002f62c; end: 10002f6ab;  */

undefined8 FUN_10002f62c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker12NoAvatarViewVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10002f6ac; end: 10002f6b7;  */

void FUN_10002f6ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_360;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d0;
  undefined8 *puStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined7 uStack_258;
  undefined1 uStack_251;
  undefined1 uStack_250;
  undefined2 uStack_24f;
  undefined5 uStack_24d;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_100;
  undefined2 uStack_ff;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_90;
  undefined2 uStack_8f;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar4 = 0;
  uStack_360 = uVar7;
  uStack_348 = param_1;
  FUN_1000271d4();
  lStack_350 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lStack_350 + 0x40));
  lVar10 = (long)&uStack_360 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lStack_358 = lVar10 - extraout_x12;
  lVar5 = 0;
  func_0x00010002e8c0(0,uVar1,uVar7);
  FUN_10002f57c(&uStack_2b0);
  uStack_238 = uStack_2a8;
  uStack_240 = uStack_2b0;
  uStack_228 = uStack_298;
  uStack_230 = uStack_2a0;
  uStack_218 = uStack_288;
  uStack_220 = uStack_290;
  uStack_208 = uStack_278;
  uStack_210 = uStack_280;
  lStack_328 = uStack_2a8;
  uStack_330 = uStack_2b0;
  uStack_318 = uStack_298;
  uStack_320 = uStack_2a0;
  uStack_308 = uStack_288;
  uStack_310 = uStack_290;
  uStack_2f8 = uStack_278;
  uStack_300 = uStack_280;
  uStack_1f8 = uStack_268;
  uStack_200 = uStack_270;
  uStack_1f0 = uStack_260;
  uStack_2e8 = uStack_268;
  uStack_2f0 = uStack_270;
  uStack_2e0 = uStack_260;
  uStack_1e0 = uStack_250;
  uStack_2d0 = uStack_250;
  uStack_1c8 = uStack_2a8;
  uStack_1d0 = uStack_2b0;
  uStack_1b8 = uStack_298;
  uStack_1c0 = uStack_2a0;
  uStack_170 = uStack_250;
  uStack_188 = uStack_268;
  uStack_190 = uStack_270;
  uStack_180 = uStack_260;
  uStack_1a8 = uStack_288;
  uStack_1b0 = uStack_290;
  uStack_198 = uStack_278;
  uStack_1a0 = uStack_280;
  FUN_10002f6b8(&uStack_240,&uStack_f0,0x100052778,&UNK_10003d560);
  func_0x00010002f700(&uStack_1d0,0x100052778,&UNK_10003d560);
  uStack_118 = uStack_2e8;
  uStack_120 = uStack_2f0;
  uStack_110 = uStack_2e0;
  uStack_100 = uStack_2d0;
  uStack_158 = lStack_328;
  uStack_160 = uStack_330;
  uStack_148 = uStack_318;
  uStack_150 = uStack_320;
  uStack_138 = uStack_308;
  uStack_140 = uStack_310;
  uStack_128 = uStack_2f8;
  uStack_130 = uStack_300;
  uStack_ff = 0x100;
  uStack_e8 = lStack_328;
  uStack_f0 = uStack_330;
  uStack_d8 = uStack_318;
  uStack_e0 = uStack_320;
  uStack_90 = uStack_2d0;
  uStack_a8 = uStack_2e8;
  uStack_b0 = uStack_2f0;
  uStack_a0 = uStack_2e0;
  uStack_c8 = uStack_308;
  uStack_d0 = uStack_310;
  uStack_b8 = uStack_2f8;
  uStack_c0 = uStack_300;
  uStack_8f = 0x100;
  FUN_10002f6b8(&uStack_160,&uStack_2b0,0x100052760,&UNK_10003d548);
  func_0x00010002f700(&uStack_f0,0x100052760,&UNK_10003d548);
  uVar11 = *(undefined8 *)(lVar8 + 0x40);
  uVar12 = *(undefined8 *)(lVar8 + 0x48);
  uVar3 = *(undefined1 *)(lVar8 + 0x50);
  uVar7 = *(undefined8 *)(lVar8 + 0x58);
  uVar2 = *(undefined8 *)(lVar8 + 0x60);
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(&uStack_2b0,lVar8,lVar5);
  puVar6 = &UNK_10004e908;
  _swift_allocObject(&UNK_10004e908,0x88,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uStack_360;
  *(undefined8 *)(puVar6 + 0x68) = uStack_268;
  *(undefined8 *)(puVar6 + 0x60) = uStack_270;
  *(ulong *)(puVar6 + 0x78) = CONCAT17(uStack_251,uStack_258);
  *(undefined8 *)(puVar6 + 0x70) = uStack_260;
  *(ulong *)(puVar6 + 0x80) = CONCAT53(uStack_24d,CONCAT21(uStack_24f,uStack_250));
  *(undefined8 *)(puVar6 + 0x28) = uStack_2a8;
  *(undefined8 *)(puVar6 + 0x20) = uStack_2b0;
  *(undefined8 *)(puVar6 + 0x38) = uStack_298;
  *(undefined8 *)(puVar6 + 0x30) = uStack_2a0;
  *(undefined8 *)(puVar6 + 0x48) = uStack_288;
  *(undefined8 *)(puVar6 + 0x40) = uStack_290;
  *(undefined8 *)(puVar6 + 0x58) = uStack_278;
  *(undefined8 *)(puVar6 + 0x50) = uStack_280;
  FUN_100027e04(lVar10,uVar12,uVar11,uVar3,uVar7,uVar2,FUN_10002f784,puVar6,uVar1);
  puVar6 = &UNK_10003cf48;
  _swift_getWitnessTable(&UNK_10003cf48,lVar4);
  lVar5 = lStack_358;
  FUN_100028c48(lStack_358,lVar10,lVar4,puVar6);
  lVar8 = lStack_350;
  pcVar9 = *(code **)(lStack_350 + 8);
  _swift_unknownObjectRetain(uVar11);
  _swift_retain(uVar2);
  (*pcVar9)(lVar10,lVar4);
  uStack_268 = uStack_118;
  uStack_270 = uStack_120;
  uStack_260 = uStack_110;
  uStack_250 = uStack_100;
  uStack_24f = uStack_ff;
  uStack_2a8 = uStack_158;
  uStack_2b0 = uStack_160;
  uStack_298 = uStack_148;
  uStack_2a0 = uStack_150;
  uStack_288 = uStack_138;
  uStack_290 = uStack_140;
  uStack_278 = uStack_128;
  uStack_280 = uStack_130;
  puStack_2c0 = &uStack_2b0;
  (**(code **)(lVar8 + 0x10))(lVar10,lVar5,lVar4);
  uVar7 = 0x100052760;
  lStack_2b8 = lVar10;
  FUN_10002f6b8(&uStack_160,&uStack_330,0x100052760,&UNK_10003d548);
  FUN_100010860(0x100052760,&UNK_10003d548);
  uStack_330 = uVar7;
  lStack_328 = lVar4;
  func_0x00010002e288();
  uStack_340 = uVar7;
  puStack_338 = puVar6;
  FUN_10002722c(uStack_348,&puStack_2c0,2,&uStack_330,&uStack_340);
  func_0x00010002f700(&uStack_160,0x100052760,&UNK_10003d548);
  (*pcVar9)(lVar5,lVar4);
  (*pcVar9)(lVar10,lVar4);
  func_0x00010002f700(&uStack_2b0,0x100052760,&UNK_10003d548);
  return;
}



/* Entry: 10002f6b8; end: 10002f73f;  */

undefined8 FUN_10002f6b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_100010860(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10002f740; end: 10002f783;  */

void FUN_10002f740(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_10002d188(unaff_x20 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10002f784; end: 10002f78b;  */

void FUN_10002f784(void)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uStack_21 = 0;
  uVar1 = 0x1000513d8;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_21,uVar1);
  return;
}



/* Entry: 10002f78c; end: 10002f8af;  */

void FUN_10002f78c(undefined1 param_1)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uVar1 = 0x1000513d8;
  uStack_21 = param_1;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_21,uVar1);
  return;
}



/* Entry: 10002f8b0; end: 10002f9f3;  */

void FUN_10002f8b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar7 = 0x100052830;
  func_0x0001000118b8(0x100052830,&UNK_10003d650);
  uVar4 = 0x100052760;
  func_0x0001000118b8(0x100052760,&UNK_10003d548);
  uVar2 = 0xff;
  FUN_1000271d4(0xff,uVar3,uVar1);
  uVar3 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,uVar4,uVar2,0,0);
  uVar4 = 0xff;
  __s7SwiftUI9TupleViewVMa(0xff,uVar3);
  puVar6 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868;
  puVar5 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868;
  _swift_getWitnessTable(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868,uVar4);
  uVar3 = 0xff;
  __s7SwiftUI6VStackVMa(0xff,uVar4,puVar5);
  uVar4 = 0xff;
  __s7SwiftUI19_ConditionalContentVMa(0xff,uVar7,uVar3);
  uVar7 = 0x100052838;
  func_0x00010002f7d4(0x100052838,0x100052830,&UNK_10003d650,puVar6);
  puVar6 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760;
  _swift_getWitnessTable(PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760,uVar3);
  puVar5 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0;
  uStack_50 = uVar7;
  puStack_48 = puVar6;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0,uVar4,
             &uStack_50);
  uVar7 = 0xff;
  __s7SwiftUI6ZStackVMa(0xff,uVar4,puVar5);
  _swift_getWitnessTable(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_10004c780,uVar7);
  return;
}



/* Entry: 10002f9f4; end: 10002f9ff;  */

void FUN_10002f9f4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_10002d188(unaff_x20 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10002fa00; end: 10002fadb;  */

void FUN_10002fa00(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = 0x1000528d0;
  lVar1 = 0x13f;
  FUN_100030584(0x13f,0x1000528d0,PTR___s7SwiftUI13OpenURLActionVMa_10004c258);
  if (uVar2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x100051e00;
    lVar1 = 0x13f;
    FUN_100030584(0x13f,0x100051e00,PTR___s7SwiftUI11ColorSchemeOMa_10004c178);
    if (uVar2 < 0x40) {
      lStack_50 = *(long *)(lVar1 + -8) + 0x40;
      puStack_48 = &UNK_10003d6e0;
      puStack_38 = PTR___sBi64_WV_10004cc78 + 0x40;
      puStack_40 = &UNK_10003d6f8;
      puStack_28 = PTR___syycWV_10004cdf8 + 0x40;
      puStack_30 = &UNK_10003d710;
      _swift_initStructMetadata(param_1,0,7,&lStack_58,param_1 + 0x20);
    }
  }
  return;
}



/* Entry: 10002fadc; end: 10002fc7f;  */

long * FUN_10002fadc(long *param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    uVar11 = 0x1000524b8;
    FUN_100010860(0x1000524b8,&UNK_10003d6a0);
    plVar8 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,uVar11);
    bVar7 = (int)plVar8 != 1;
    if (bVar7) {
      *param_1 = *param_2;
      _swift_retain();
    }
    else {
      lVar9 = 0;
      __s7SwiftUI13OpenURLActionVMa();
      (**(code **)(*(long *)(lVar9 + -8) + 0x10))(param_1,param_2,lVar9);
    }
    _swift_storeEnumTagMultiPayload(param_1,uVar11,!bVar7);
    lVar12 = (long)*(int *)(param_3 + 0x24);
    uVar11 = 0x100051d68;
    FUN_100010860(0x100051d68,&UNK_10003c420);
    lVar9 = (long)param_2 + lVar12;
    _swift_getEnumCaseMultiPayload(lVar9,uVar11);
    bVar7 = (int)lVar9 != 1;
    if (bVar7) {
      *(undefined8 *)((long)param_1 + lVar12) = *(undefined8 *)((long)param_2 + lVar12);
      _swift_retain();
    }
    else {
      lVar9 = 0;
      __s7SwiftUI11ColorSchemeOMa();
      (**(code **)(*(long *)(lVar9 + -8) + 0x10))
                ((long)param_1 + lVar12,(long)param_2 + lVar12,lVar9);
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar12,uVar11,!bVar7);
    iVar4 = *(int *)(param_3 + 0x2c);
    puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    *puVar1 = *puVar2;
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar2 + 8);
    uVar11 = *(undefined8 *)((long)param_2 + (long)iVar4);
    *(undefined8 *)((long)param_1 + (long)iVar4) = uVar11;
    iVar4 = *(int *)(param_3 + 0x34);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    lVar9 = puVar3[1];
    uVar13 = *puVar3;
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar6[1] = puVar3[1];
    *puVar6 = uVar13;
    _swift_retain();
    _swift_unknownObjectRetain(uVar11);
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar10 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar9 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar9);
  return param_1;
}



/* Entry: 10002fc80; end: 10002fd73;  */

void FUN_10002fc80(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = 0x1000524b8;
  FUN_100010860(0x1000524b8,&UNK_10003d6a0);
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar1);
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    __s7SwiftUI13OpenURLActionVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  }
  else {
    _swift_release(*param_1);
  }
  lVar4 = (long)*(int *)(param_2 + 0x24);
  uVar1 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  lVar3 = (long)param_1 + lVar4;
  _swift_getEnumCaseMultiPayload(lVar3,uVar1);
  if ((int)lVar3 == 1) {
    lVar3 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar3 + -8) + 8))((long)param_1 + lVar4,lVar3);
  }
  else {
    _swift_release(*(undefined8 *)((long)param_1 + lVar4));
  }
  _swift_release(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x28) + 8));
  _swift_unknownObjectRelease(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x2c)));
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)
            (*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x38) + 8));
  return;
}



/* Entry: 10002fd74; end: 1000303e3;  */

undefined8 * FUN_10002fd74(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar7 = 0x1000524b8;
  FUN_100010860(0x1000524b8,&UNK_10003d6a0);
  puVar5 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar7);
  bVar4 = (int)puVar5 != 1;
  if (bVar4) {
    *param_1 = *param_2;
    _swift_retain();
  }
  else {
    lVar6 = 0;
    __s7SwiftUI13OpenURLActionVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar7,!bVar4);
  lVar9 = (long)*(int *)(param_3 + 0x24);
  uVar7 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  lVar6 = (long)param_2 + lVar9;
  _swift_getEnumCaseMultiPayload(lVar6,uVar7);
  bVar4 = (int)lVar6 != 1;
  if (bVar4) {
    *(undefined8 *)((long)param_1 + lVar9) = *(undefined8 *)((long)param_2 + lVar9);
    _swift_retain();
  }
  else {
    lVar6 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar6);
  }
  _swift_storeEnumTagMultiPayload((long)param_1 + lVar9,uVar7,!bVar4);
  iVar3 = *(int *)(param_3 + 0x2c);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar1 = *puVar2;
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar2 + 8);
  uVar8 = *(undefined8 *)((long)param_2 + (long)iVar3);
  *(undefined8 *)((long)param_1 + (long)iVar3) = uVar8;
  iVar3 = *(int *)(param_3 + 0x34);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar7 = param_2[1];
  uVar10 = *param_2;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar5[1] = param_2[1];
  *puVar5 = uVar10;
  _swift_retain();
  _swift_unknownObjectRetain(uVar8);
  _swift_retain(uVar7);
  return param_1;
}



/* Entry: 1000303e4; end: 1000303ef;  */

void FUN_1000303e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_10004cea8)();
  return;
}



/* Entry: 1000303f0; end: 1000304af;  */

ulong FUN_1000303f0(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  lVar1 = 0x100052848;
  FUN_100010860(0x100052848,&UNK_10003d6b0);
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
  }
  else {
    lVar1 = 0x100051d78;
    FUN_100010860(0x100051d78,&UNK_10003c430);
    if ((int)param_2 != *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
      uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x2c));
      if (0xfffffffe < uVar2) {
        uVar2 = 0xffffffff;
      }
      return (ulong)((int)uVar2 + 1);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
    param_1 = param_1 + (long)*(int *)(param_3 + 0x24);
  }
                    /* WARNING: Could not recover jumptable at 0x000100030484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,lVar1);
  return param_1;
}



/* Entry: 1000304b0; end: 1000304bb;  */

void FUN_1000304b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ae9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_10004cf70)();
  return;
}



/* Entry: 1000304bc; end: 100030577;  */

void FUN_1000304bc(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = 0x100052848;
  FUN_100010860(0x100052848,&UNK_10003d6b0);
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  }
  else {
    lVar1 = 0x100051d78;
    FUN_100010860(0x100051d78,&UNK_10003c430);
    if (param_3 != *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
      *(ulong *)(param_1 + *(int *)(param_4 + 0x2c)) = (ulong)((int)param_2 - 1);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
    param_1 = param_1 + *(int *)(param_4 + 0x24);
  }
                    /* WARNING: Could not recover jumptable at 0x000100030558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,lVar1);
  return;
}



/* Entry: 100030578; end: 100030583;  */

void FUN_100030578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_10003e59c);
  return;
}



/* Entry: 100030584; end: 1000305cf;  */

void FUN_100030584(long param_1,long *param_2,code *param_3)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0xff;
    (*param_3)();
    __s7SwiftUI11EnvironmentV7ContentOMa();
    if (lVar1 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 1000305d0; end: 100030603;  */

void FUN_1000305d0(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance(&uStack_20,&UNK_10003e5d8,1);
  return;
}



/* Entry: 100030604; end: 1000309cf;  */

void FUN_100030604(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar10;
  long unaff_x20;
  code *pcVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined *apuStack_e0 [2];
  long alStack_d0 [4];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined *puStack_70;
  byte bStack_61;
  
  uVar4 = 0x100052760;
  uStack_a8 = param_1;
  func_0x0001000118b8(0x100052760,&UNK_10003d548);
  alStack_d0[2] = *(undefined8 *)(param_2 + 0x10);
  alStack_d0[1] = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0xff;
  FUN_1000271d4(0xff);
  uVar3 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,uVar4,uVar2,0,0);
  uVar4 = 0xff;
  __s7SwiftUI9TupleViewVMa(0xff,uVar3);
  puVar5 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868;
  _swift_getWitnessTable(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868,uVar4);
  lVar6 = 0;
  apuStack_e0[1] = puVar5;
  __s7SwiftUI6VStackVMa(0,uVar4);
  alStack_d0[0] = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(alStack_d0[0] + 0x40));
  lVar13 = (long)apuStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar10 = lVar13 - extraout_x12;
  lVar7 = 0x1000528d8;
  FUN_100010860(0x1000528d8,&UNK_10003d790);
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)(lVar10 - extraout_x8_00);
  lVar8 = 0;
  __s7SwiftUI19_ConditionalContentVMa(0,lVar7,lVar6);
  lStack_b0 = *(long *)(lVar8 + -8);
  alStack_d0[3] = lVar8;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = (long)puVar12 - extraout_x8_01;
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(param_2 + 0x28));
  uStack_a0 = *puVar1;
  uStack_98 = *(undefined8 *)(puVar1 + 8);
  uVar4 = 0x1000513d8;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvg(&bStack_61);
  if ((bStack_61 & 1) == 0) {
    __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
    *puVar12 = uVar4;
    puVar12[1] = 0;
    *(undefined1 *)(puVar12 + 2) = 0;
    lVar10 = 0x1000528e0;
    FUN_100010860(0x1000528e0,&UNK_10003d7a0);
    FUN_1000309d0((long)puVar12 + (long)*(int *)(lVar10 + 0x2c));
    puVar5 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760;
    uVar4 = 0x1000528e8;
    func_0x000100033048(0x1000528e8,0x1000528d8,&UNK_10003d790,
                        PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760);
    _swift_getWitnessTable(puVar5,lVar6);
    func_0x00010002e900(lVar8,puVar12,lVar7,lVar6,uVar4,puVar5);
    func_0x0001000330d4(puVar12,0x1000528d8,&UNK_10003d790);
  }
  else {
    uStack_90 = alStack_d0[2];
    uStack_88 = alStack_d0[1];
    __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
    __s7SwiftUI6VStackV9alignment7spacing7contentACyxGAA19HorizontalAlignmentV_12CoreGraphics7CGFloatVSgxyXEtcfC
              (lVar13);
    puVar5 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760;
    puVar9 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760;
    _swift_getWitnessTable(PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760,lVar6);
    FUN_100028c48(lVar10,lVar13,lVar6,puVar9);
    pcVar11 = *(code **)(alStack_d0[0] + 8);
    (*pcVar11)(lVar13,lVar6);
    FUN_100028c48(lVar13,lVar10,lVar6,puVar9);
    uVar4 = 0x1000528e8;
    func_0x000100033048(0x1000528e8,0x1000528d8,&UNK_10003d790,puVar5);
    func_0x00010002e9c4(lVar8,lVar13,lVar7,lVar6,uVar4,puVar9);
    (*pcVar11)(lVar13,lVar6);
    (*pcVar11)(lVar10,lVar6);
  }
  puVar5 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760;
  uVar4 = 0x1000528e8;
  func_0x000100033048(0x1000528e8,0x1000528d8,&UNK_10003d790,
                      PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760);
  _swift_getWitnessTable(puVar5,lVar6);
  lVar7 = alStack_d0[3];
  puVar9 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0;
  uStack_78 = uVar4;
  puStack_70 = puVar5;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0,
             alStack_d0[3],&uStack_78);
  FUN_100028c48(uStack_a8,lVar8,lVar7,puVar9);
  (**(code **)(lStack_b0 + 8))(lVar8,lVar7);
  return;
}



/* Entry: 1000309d0; end: 10003154b;  */

void FUN_1000309d0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long alStack_c50 [4];
  undefined8 *puStack_c30;
  long lStack_c28;
  undefined *puStack_c20;
  ulong uStack_c18;
  ulong uStack_c10;
  undefined8 uStack_c08;
  long lStack_c00;
  long lStack_bf8;
  long *plStack_bf0;
  undefined1 auStack_be8 [216];
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined1 uStack_a40;
  long lStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  long lStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined1 uStack_990;
  long lStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  long lStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined1 uStack_8e0;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined1 uStack_800;
  long lStack_7f0;
  undefined8 uStack_7e8;
  undefined2 uStack_7e0;
  undefined6 uStack_7de;
  undefined2 uStack_7d8;
  undefined6 uStack_7d6;
  undefined2 uStack_7d0;
  undefined6 uStack_7ce;
  undefined2 uStack_7c8;
  undefined6 uStack_7c6;
  undefined2 uStack_7c0;
  undefined6 uStack_7be;
  undefined2 uStack_7b8;
  undefined6 uStack_7b6;
  undefined2 uStack_7b0;
  undefined6 uStack_7ae;
  long alStack_7a8 [2];
  undefined2 uStack_798;
  undefined8 uStack_796;
  undefined8 uStack_78e;
  undefined8 uStack_786;
  undefined8 uStack_77e;
  undefined8 uStack_776;
  undefined6 uStack_76e;
  undefined2 uStack_768;
  undefined6 uStack_766;
  long lStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined1 uStack_718;
  undefined7 uStack_717;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined1 uStack_6f0;
  long lStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined1 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined1 uStack_670;
  long lStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 uStack_5e8;
  undefined7 uStack_5e7;
  undefined8 uStack_5e0;
  long lStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined1 uStack_5c0;
  long lStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined1 uStack_538;
  undefined8 uStack_530;
  long lStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 uStack_510;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined1 uStack_460;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 uStack_3b0;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_1f0;
  undefined6 uStack_1e6;
  undefined2 uStack_1e0;
  undefined6 uStack_1de;
  undefined2 uStack_1d8;
  undefined6 uStack_1d6;
  undefined2 uStack_1d0;
  undefined6 uStack_1ce;
  undefined2 uStack_1c8;
  undefined6 uStack_1c6;
  undefined2 uStack_1c0;
  undefined6 uStack_1be;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 auStack_e0 [64];
  
  lVar8 = 0;
  alStack_c50[3] = param_4;
  puStack_c30 = param_1;
  uStack_c08 = param_3;
  lStack_c00 = param_2;
  FUN_100030578();
  alStack_c50[2] = *(long *)(lVar8 + -8);
  alStack_c50[0] = *(long *)(alStack_c50[2] + 0x40);
  lStack_bf8 = lVar8;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(alStack_c50[0] + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x1000528f0;
  alStack_c50[1] = (long)alStack_c50 - extraout_x8;
  FUN_100010860(0x1000528f0,&UNK_10003d7f0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = ((long)alStack_c50 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_c28 = lVar8;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  plVar12 = (long *)(lVar8 - extraout_x12);
  lVar8 = 0;
  plStack_bf0 = plVar12;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  uStack_c18 = *(long *)(lVar8 + -8);
  uStack_c10 = lVar8;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(uStack_c18 + 0x40));
  lVar16 = (long)plVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  __s7SwiftUI11ColorSchemeOMa();
  lVar13 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar13 + 0x40));
  lVar18 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  uVar19 = lVar18 - extraout_x12_00;
  FUN_100027f2c(uVar19);
  (**(code **)(lVar13 + 0x68))
            (lVar18,*(undefined4 *)PTR___s7SwiftUI11ColorSchemeO5lightyA2CmFWC_10004c170,lVar8);
  uVar20 = uVar19;
  __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(uVar19,lVar18);
  pcVar14 = *(code **)(lVar13 + 8);
  (*pcVar14)(lVar18,lVar8);
  (*pcVar14)(uVar19,lVar8);
  pcVar2 = "blackGhostOutline";
  if ((uVar20 & 1) == 0) {
    pcVar2 = "whiteGhostOutline";
  }
  uVar9 = 0xd000000000000011;
  __s7SwiftUI5ImageV_6bundleACSS_So8NSBundleCSgtcfC
            (0xd000000000000011,(ulong)(pcVar2 + -0x20) | 0x8000000000000000,0);
  uVar19 = uStack_c10;
  uVar20 = uStack_c18;
  (**(code **)(uStack_c18 + 0x68))
            (lVar16,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_10004c6b8,
             uStack_c10);
  uVar23 = 0;
  uVar25 = 0;
  lVar8 = lVar16;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,lVar16,uVar9);
  _swift_release(uVar9);
  (**(code **)(uVar20 + 8))(lVar16,uVar19);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uVar7 = 0;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (auStack_e0,0x404e000000000000,0,0x404e000000000000,0,lVar16,uVar19);
  uStack_1d8 = (undefined2)auStack_e0._8_8_;
  uStack_1d6 = SUB86(auStack_e0._8_8_,2);
  uStack_1e0 = (undefined2)auStack_e0._0_8_;
  uStack_1de = SUB86(auStack_e0._0_8_,2);
  uStack_1c8 = (undefined2)auStack_e0._24_8_;
  uStack_1c6 = SUB86(auStack_e0._24_8_,2);
  uStack_1d0 = (undefined2)auStack_e0._16_8_;
  uStack_1ce = SUB86(auStack_e0._16_8_,2);
  uStack_1b8 = (undefined2)auStack_e0._40_8_;
  uStack_1b6 = SUB86(auStack_e0._40_8_,2);
  uStack_1c0 = (undefined2)auStack_e0._32_8_;
  uStack_1be = SUB86(auStack_e0._32_8_,2);
  __s7SwiftUI4EdgeO3SetV3topAEvgZ();
  uStack_7e8 = 0;
  uStack_7e0 = 1;
  uVar9 = CONCAT26(uStack_1d0,uStack_1d6);
  uStack_7d6 = uStack_1de;
  uStack_7d0 = uStack_1d8;
  uStack_7de = uStack_1e6;
  uStack_7d8 = uStack_1e0;
  uStack_7c6 = uStack_1ce;
  uStack_7c0 = uStack_1c8;
  uStack_7ce = uStack_1d6;
  uStack_7c8 = uStack_1d0;
  uStack_7b6 = uStack_1be;
  uStack_7be = uStack_1c6;
  uStack_7b8 = uStack_1c0;
  uStack_7b0 = uStack_1b8;
  uStack_7ae = uStack_1b6;
  uVar21 = 0x4024000000000000;
  lStack_7f0 = lVar8;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_198 = CONCAT62(uStack_7d6,uStack_7d8);
  uStack_1a0 = CONCAT62(uStack_7de,uStack_7e0);
  uStack_188 = CONCAT62(uStack_7c6,uStack_7c8);
  uStack_190 = CONCAT62(uStack_7ce,uStack_7d0);
  uStack_178 = CONCAT62(uStack_7b6,uStack_7b8);
  uStack_180 = CONCAT62(uStack_7be,uStack_7c0);
  uStack_170 = CONCAT62(uStack_7ae,uStack_7b0);
  uStack_1a8 = uStack_7e8;
  lStack_1b0 = lStack_7f0;
  alStack_7a8[1] = 0;
  uStack_798 = 1;
  uStack_78e = CONCAT26(uStack_1d8,uStack_1de);
  uStack_796 = CONCAT26(uStack_1e0,uStack_1e6);
  uStack_77e = CONCAT26(uStack_1c8,uStack_1ce);
  uStack_786 = CONCAT26(uStack_1d0,uStack_1d6);
  uStack_776 = CONCAT26(uStack_1c0,uStack_1c6);
  uStack_766 = uStack_1b6;
  uStack_76e = uStack_1be;
  uStack_768 = uStack_1b8;
  uVar26 = uVar25;
  alStack_7a8[0] = lVar8;
  func_0x00010003308c(&lStack_7f0,&uStack_2c0,0x100051cf0,&UNK_10003c3c0);
  plVar12 = alStack_7a8;
  func_0x0001000330d4(plVar12,0x100051cf0,&UNK_10003c3c0);
  uVar6 = SUB81(plVar12,0);
  __s7SwiftUI4EdgeO3SetV6bottomAEvgZ();
  uStack_738 = uStack_188;
  uStack_740 = uStack_190;
  uStack_728 = uStack_178;
  uStack_730 = uStack_180;
  uStack_720 = uStack_170;
  uStack_758 = uStack_1a8;
  lStack_760 = lStack_1b0;
  uStack_748 = uStack_198;
  uStack_750 = uStack_1a0;
  uStack_6f0 = 0;
  uVar22 = 0x4034000000000000;
  lVar8 = lStack_1b0;
  uVar24 = uStack_180;
  uStack_718 = uVar7;
  uStack_710 = uVar21;
  uStack_708 = uVar9;
  uStack_700 = uVar23;
  uStack_6f8 = uVar25;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_118 = CONCAT71(uStack_717,uStack_718);
  uStack_120 = uStack_720;
  uStack_108 = uStack_708;
  uStack_110 = uStack_710;
  uStack_f8 = uStack_6f8;
  uStack_100 = uStack_700;
  uStack_f0 = uStack_6f0;
  uStack_158 = uStack_758;
  lStack_160 = lStack_760;
  uStack_148 = uStack_748;
  uStack_150 = uStack_750;
  uStack_138 = uStack_738;
  uStack_140 = uStack_740;
  uStack_128 = uStack_728;
  uStack_130 = uStack_730;
  uStack_6a0 = uStack_170;
  uStack_6b8 = uStack_188;
  uStack_6c0 = uStack_190;
  uStack_6a8 = uStack_178;
  uStack_6b0 = uStack_180;
  uStack_6d8 = uStack_1a8;
  lStack_6e0 = lStack_1b0;
  uStack_6c8 = uStack_198;
  uStack_6d0 = uStack_1a0;
  uStack_670 = 0;
  uStack_698 = uVar7;
  uStack_690 = uVar21;
  uStack_688 = uVar9;
  uStack_680 = uVar23;
  uStack_678 = uVar25;
  func_0x00010003308c(&lStack_760,&uStack_2c0,0x1000528f8,&UNK_10003d800);
  func_0x0001000330d4(&lStack_6e0,0x1000528f8,&UNK_10003d800);
  uStack_5f0 = CONCAT71(uStack_ef,uStack_f0);
  uStack_540 = CONCAT71(uStack_ef,uStack_f0);
  uStack_618 = uStack_118;
  uStack_620 = uStack_120;
  uStack_608 = uStack_108;
  uStack_610 = uStack_110;
  uStack_5f8 = uStack_f8;
  uStack_600 = uStack_100;
  uStack_658 = uStack_158;
  lStack_660 = lStack_160;
  uStack_648 = uStack_148;
  uStack_650 = uStack_150;
  uStack_638 = uStack_138;
  uStack_640 = uStack_140;
  uStack_628 = uStack_128;
  uStack_630 = uStack_130;
  uStack_5c0 = 0;
  uStack_588 = uStack_138;
  uStack_590 = uStack_140;
  uStack_578 = uStack_128;
  uStack_580 = uStack_130;
  uStack_5a8 = uStack_158;
  lStack_5b0 = lStack_160;
  uStack_598 = uStack_148;
  uStack_5a0 = uStack_150;
  uStack_558 = uStack_108;
  uStack_560 = uStack_110;
  uStack_548 = uStack_f8;
  uStack_550 = uStack_100;
  uStack_568 = uStack_118;
  uStack_570 = uStack_120;
  uStack_510 = 0;
  uStack_5e8 = uVar6;
  uStack_5e0 = uVar22;
  lStack_5d8 = lVar8;
  uStack_5d0 = uVar24;
  uStack_5c8 = uVar26;
  uStack_538 = uVar6;
  uStack_530 = uVar22;
  lStack_528 = lVar8;
  uStack_520 = uVar24;
  uStack_518 = uVar26;
  func_0x00010003308c(&lStack_660,&uStack_2c0,0x100052900,&UNK_10003d808);
  func_0x0001000330d4(&lStack_5b0,0x100052900,&UNK_10003d808);
  lVar18 = lStack_c00;
  lVar8 = lStack_bf8;
  FUN_10003154c(&uStack_2c0);
  uVar7 = (undefined1)lVar8;
  __s7SwiftUI4EdgeO3SetV6bottomAEvgZ();
  uStack_478 = uStack_238;
  uStack_480 = uStack_240;
  uStack_468 = uStack_228;
  uStack_470 = uStack_230;
  uStack_460 = (undefined1)uStack_220;
  uStack_4b8 = uStack_278;
  uStack_4c0 = uStack_280;
  uStack_4a8 = uStack_268;
  uStack_4b0 = uStack_270;
  uStack_498 = uStack_258;
  uStack_4a0 = uStack_260;
  uStack_488 = uStack_248;
  uStack_490 = uStack_250;
  uStack_4f8 = uStack_2b8;
  uStack_500 = uStack_2c0;
  uStack_4e8 = uStack_2a8;
  uStack_4f0 = uStack_2b0;
  uStack_4d8 = uStack_298;
  uStack_4e0 = uStack_2a0;
  uStack_4c8 = uStack_288;
  uStack_4d0 = uStack_290;
  uVar21 = 0x4034000000000000;
  uVar9 = uStack_290;
  uVar24 = uStack_2b0;
  uVar26 = uStack_270;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_a88 = uStack_478;
  uStack_a90 = uStack_480;
  uStack_a78 = uStack_468;
  uStack_a80 = uStack_470;
  uStack_a70 = CONCAT71(uStack_a70._1_7_,uStack_460);
  uStack_ac8 = uStack_4b8;
  uStack_ad0 = uStack_4c0;
  uStack_ab8 = uStack_4a8;
  uStack_ac0 = uStack_4b0;
  uStack_aa8 = uStack_498;
  uStack_ab0 = uStack_4a0;
  uStack_a98 = uStack_488;
  uStack_aa0 = uStack_490;
  uStack_b08 = uStack_4f8;
  uStack_b10 = uStack_500;
  uStack_af8 = uStack_4e8;
  uStack_b00 = uStack_4f0;
  uStack_ae8 = uStack_4d8;
  uStack_af0 = uStack_4e0;
  uStack_ad8 = uStack_4c8;
  uStack_ae0 = uStack_4d0;
  uStack_3d8 = uStack_248;
  uStack_3e0 = uStack_250;
  uStack_3c8 = uStack_238;
  uStack_3d0 = uStack_240;
  uStack_3b8 = uStack_228;
  uStack_3c0 = uStack_230;
  uStack_3b0 = (undefined1)uStack_220;
  uStack_408 = uStack_278;
  uStack_410 = uStack_280;
  uStack_3f8 = uStack_268;
  uStack_400 = uStack_270;
  uStack_3e8 = uStack_258;
  uStack_3f0 = uStack_260;
  uStack_448 = uStack_2b8;
  uStack_450 = uStack_2c0;
  uStack_438 = uStack_2a8;
  uStack_440 = uStack_2b0;
  uStack_428 = uStack_298;
  uStack_430 = uStack_2a0;
  uStack_418 = uStack_288;
  uStack_420 = uStack_290;
  func_0x00010003308c(&uStack_500,&uStack_3a0,0x100052908,&UNK_10003d810);
  lVar13 = alStack_c50[3];
  func_0x0001000330d4(&uStack_450,0x100052908,&UNK_10003d810);
  uStack_328 = uStack_a98;
  uStack_330 = uStack_aa0;
  uStack_318 = uStack_a88;
  uStack_320 = uStack_a90;
  uStack_308 = uStack_a78;
  uStack_310 = uStack_a80;
  uStack_368 = uStack_ad8;
  uStack_370 = uStack_ae0;
  uStack_358 = uStack_ac8;
  uStack_360 = uStack_ad0;
  uStack_348 = uStack_ab8;
  uStack_350 = uStack_ac0;
  uStack_338 = uStack_aa8;
  uStack_340 = uStack_ab0;
  uStack_398 = uStack_b08;
  uStack_3a0 = uStack_b10;
  uStack_388 = uStack_af8;
  uStack_390 = uStack_b00;
  uStack_378 = uStack_ae8;
  uStack_380 = uStack_af0;
  uStack_248 = uStack_a98;
  uStack_250 = uStack_aa0;
  uStack_238 = uStack_a88;
  uStack_240 = uStack_a90;
  uStack_228 = uStack_a78;
  uStack_230 = uStack_a80;
  uStack_288 = uStack_ad8;
  uStack_290 = uStack_ae0;
  uStack_278 = uStack_ac8;
  uStack_280 = uStack_ad0;
  uStack_268 = uStack_ab8;
  uStack_270 = uStack_ac0;
  uStack_258 = uStack_aa8;
  uStack_260 = uStack_ab0;
  uStack_2b8 = uStack_b08;
  uStack_2c0 = uStack_b10;
  uStack_2a8 = uStack_af8;
  uStack_2b0 = uStack_b00;
  uStack_300 = uStack_a70;
  uStack_2d0 = 0;
  uStack_220 = uStack_a70;
  uStack_298 = uStack_ae8;
  uStack_2a0 = uStack_af0;
  uStack_1f0 = 0;
  uStack_2f8 = uVar7;
  uStack_2f0 = uVar21;
  uStack_2e8 = uVar9;
  uStack_2e0 = uVar24;
  uStack_2d8 = uVar26;
  uStack_218 = uVar7;
  uStack_210 = uVar21;
  func_0x00010003308c(&uStack_3a0,&uStack_8d0,0x100052910,&UNK_10003d818);
  puVar10 = &uStack_2c0;
  func_0x0001000330d4(puVar10,0x100052910,&UNK_10003d818);
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  plVar12 = plStack_bf0;
  *plStack_bf0 = (long)puVar10;
  plVar12[1] = 0x4030000000000000;
  *(undefined1 *)(plVar12 + 2) = 0;
  lVar8 = 0x100052918;
  FUN_100010860(0x100052918,&UNK_10003d820);
  func_0x000100031748((long)plVar12 + (long)*(int *)(lVar8 + 0x2c),lVar18,uStack_c08,lVar13);
  lVar4 = lStack_bf8;
  lVar16 = alStack_c50[2];
  lVar8 = alStack_c50[1];
  uStack_c18 = 0;
  uStack_c10 = 0;
  uVar20 = 0;
  puStack_c20 = (undefined *)0x0;
  bVar5 = *(char *)(lVar18 + *(int *)(lStack_bf8 + 0x34)) == '\x01';
  if (bVar5) {
    puVar1 = (ulong *)(lVar18 + *(int *)(lStack_bf8 + 0x38));
    uStack_c10 = *puVar1;
    uVar20 = puVar1[1];
    (**(code **)(alStack_c50[2] + 0x10))(alStack_c50[1],lVar18,lStack_bf8);
    uVar19 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar15 = uVar19 + 0x20 & (uVar19 ^ 0xffffffffffffffff);
    puVar11 = &UNK_10004e9f8;
    _swift_allocObject(&UNK_10004e9f8,uVar15 + alStack_c50[0],uVar19 | 7);
    *(undefined8 *)(puVar11 + 0x10) = uStack_c08;
    *(long *)(puVar11 + 0x18) = lVar13;
    (**(code **)(lVar16 + 0x20))(puVar11 + uVar15,lVar8,lVar4);
    uStack_c18 = uVar20;
    _swift_retain_n(uVar20,2);
    puStack_c20 = puVar11;
    _swift_retain(puVar11);
    uVar20 = 0x100033244;
  }
  lVar16 = lStack_c28;
  uVar17 = (ulong)bVar5;
  lStack_9a8 = lStack_5d8;
  uStack_9b0 = uStack_5e0;
  uStack_998 = uStack_5c8;
  uStack_9a0 = uStack_5d0;
  uStack_990 = uStack_5c0;
  uStack_9e8 = uStack_618;
  uStack_9f0 = uStack_620;
  uStack_9d8 = uStack_608;
  uStack_9e0 = uStack_610;
  uStack_9b8 = CONCAT71(uStack_5e7,uStack_5e8);
  uStack_9c8 = uStack_5f8;
  uStack_9d0 = uStack_600;
  uStack_9c0 = uStack_5f0;
  uStack_a28 = uStack_658;
  lStack_a30 = lStack_660;
  uStack_a18 = uStack_648;
  uStack_a20 = uStack_650;
  uStack_a08 = uStack_638;
  uStack_a10 = uStack_640;
  uStack_9f8 = uStack_628;
  uStack_a00 = uStack_630;
  uStack_a68 = CONCAT71(uStack_2f7,uStack_2f8);
  uStack_a70 = uStack_300;
  uStack_a58 = uStack_2e8;
  uStack_a60 = uStack_2f0;
  uStack_a48 = uStack_2d8;
  uStack_a50 = uStack_2e0;
  uStack_a40 = uStack_2d0;
  uStack_aa8 = uStack_338;
  uStack_ab0 = uStack_340;
  uStack_a98 = uStack_328;
  uStack_aa0 = uStack_330;
  uStack_a88 = uStack_318;
  uStack_a90 = uStack_320;
  uStack_a78 = uStack_308;
  uStack_a80 = uStack_310;
  uStack_ae8 = uStack_378;
  uStack_af0 = uStack_380;
  uStack_ad8 = uStack_368;
  uStack_ae0 = uStack_370;
  uStack_ac8 = uStack_358;
  uStack_ad0 = uStack_360;
  uStack_ab8 = uStack_348;
  uStack_ac0 = uStack_350;
  uStack_b08 = uStack_398;
  uStack_b10 = uStack_3a0;
  uStack_af8 = uStack_388;
  uStack_b00 = uStack_390;
  func_0x00010003308c(plStack_bf0,lStack_c28,0x1000528f0,&UNK_10003d7f0);
  puVar3 = puStack_c30;
  lStack_8f8 = lStack_9a8;
  uStack_900 = uStack_9b0;
  uStack_8e8 = uStack_998;
  uStack_8f0 = uStack_9a0;
  uStack_938 = uStack_9e8;
  uStack_940 = uStack_9f0;
  uStack_928 = uStack_9d8;
  uStack_930 = uStack_9e0;
  uStack_918 = uStack_9c8;
  uStack_920 = uStack_9d0;
  uStack_908 = uStack_9b8;
  uStack_910 = uStack_9c0;
  uStack_978 = uStack_a28;
  lStack_980 = lStack_a30;
  uStack_968 = uStack_a18;
  uStack_970 = uStack_a20;
  uStack_958 = uStack_a08;
  uStack_960 = uStack_a10;
  uStack_948 = uStack_9f8;
  uStack_950 = uStack_a00;
  puStack_c30[0x13] = lStack_9a8;
  puStack_c30[0x12] = uStack_9b0;
  puStack_c30[0x15] = uStack_998;
  puStack_c30[0x14] = uStack_9a0;
  puStack_c30[0xb] = uStack_9e8;
  puStack_c30[10] = uStack_9f0;
  puStack_c30[0xd] = uStack_9d8;
  puStack_c30[0xc] = uStack_9e0;
  puStack_c30[0xf] = uStack_9c8;
  puStack_c30[0xe] = uStack_9d0;
  puStack_c30[0x11] = uStack_9b8;
  puStack_c30[0x10] = uStack_9c0;
  puStack_c30[3] = uStack_a28;
  puStack_c30[2] = lStack_a30;
  puStack_c30[5] = uStack_a18;
  puStack_c30[4] = uStack_a20;
  puStack_c30[7] = uStack_a08;
  puStack_c30[6] = uStack_a10;
  puStack_c30[9] = uStack_9f8;
  puStack_c30[8] = uStack_a00;
  uStack_828 = uStack_a68;
  uStack_830 = uStack_a70;
  uStack_818 = uStack_a58;
  uStack_820 = uStack_a60;
  uStack_808 = uStack_a48;
  uStack_810 = uStack_a50;
  uStack_868 = uStack_aa8;
  uStack_870 = uStack_ab0;
  uStack_858 = uStack_a98;
  uStack_860 = uStack_aa0;
  uStack_848 = uStack_a88;
  uStack_850 = uStack_a90;
  uStack_838 = uStack_a78;
  uStack_840 = uStack_a80;
  uStack_8a8 = uStack_ae8;
  uStack_8b0 = uStack_af0;
  uStack_898 = uStack_ad8;
  uStack_8a0 = uStack_ae0;
  uStack_888 = uStack_ac8;
  uStack_890 = uStack_ad0;
  uStack_878 = uStack_ab8;
  uStack_880 = uStack_ac0;
  uStack_8c8 = uStack_b08;
  uStack_8d0 = uStack_b10;
  uStack_8b8 = uStack_af8;
  uStack_8c0 = uStack_b00;
  puStack_c30[0x2e] = uStack_a58;
  puStack_c30[0x2d] = uStack_a60;
  puStack_c30[0x30] = uStack_a48;
  puStack_c30[0x2f] = uStack_a50;
  puStack_c30[0x26] = uStack_a98;
  puStack_c30[0x25] = uStack_aa0;
  puStack_c30[0x28] = uStack_a88;
  puStack_c30[0x27] = uStack_a90;
  puStack_c30[0x2a] = uStack_a78;
  puStack_c30[0x29] = uStack_a80;
  puStack_c30[0x2c] = uStack_a68;
  puStack_c30[0x2b] = uStack_a70;
  puStack_c30[0x1c] = uStack_ae8;
  puStack_c30[0x1b] = uStack_af0;
  puStack_c30[0x1e] = uStack_ad8;
  puStack_c30[0x1d] = uStack_ae0;
  puStack_c30[0x20] = uStack_ac8;
  puStack_c30[0x1f] = uStack_ad0;
  puStack_c30[0x22] = uStack_ab8;
  puStack_c30[0x21] = uStack_ac0;
  puStack_c30[0x24] = uStack_aa8;
  puStack_c30[0x23] = uStack_ab0;
  puStack_c30[0x18] = uStack_b08;
  puStack_c30[0x17] = uStack_b10;
  *puStack_c30 = 0;
  *(undefined1 *)(puStack_c30 + 1) = 1;
  uStack_8e0 = uStack_990;
  *(undefined1 *)(puStack_c30 + 0x16) = uStack_990;
  uStack_800 = uStack_a40;
  *(undefined1 *)(puStack_c30 + 0x31) = uStack_a40;
  puStack_c30[0x1a] = uStack_af8;
  puStack_c30[0x19] = uStack_b00;
  lVar8 = 0x100052920;
  FUN_100010860(0x100052920,&UNK_10003d828);
  func_0x00010003308c(lVar16,(long)puVar3 + (long)*(int *)(lVar8 + 0x50),0x1000528f0,&UNK_10003d7f0)
  ;
  puVar10 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar8 + 0x60));
  *puVar10 = 0;
  *(undefined1 *)(puVar10 + 1) = 1;
  puVar1 = (ulong *)((long)puVar3 + (long)*(int *)(lVar8 + 0x70));
  func_0x00010003308c(&lStack_980,auStack_be8,0x100052900,&UNK_10003d808);
  func_0x00010003308c(&uStack_8d0,auStack_be8,0x100052910,&UNK_10003d818);
  uVar15 = uStack_c10;
  uVar19 = uStack_c18;
  puVar11 = puStack_c20;
  FUN_1000329a0(uVar17,uStack_c10,uStack_c18,uVar20,puStack_c20,0);
  func_0x0001000329d0(uVar17,uVar15,uVar19,uVar20,puVar11,0);
  *puVar1 = uVar17;
  puVar1[1] = uVar15;
  puVar1[2] = uVar19;
  puVar1[3] = uVar20;
  puVar1[4] = (ulong)puVar11;
  *(undefined1 *)(puVar1 + 5) = 0;
  func_0x0001000330d4(plStack_bf0,0x1000528f0,&UNK_10003d7f0);
  func_0x0001000329d0(uVar17,uVar15,uVar19,uVar20,puVar11,0);
  func_0x0001000330d4(lVar16,0x1000528f0,&UNK_10003d7f0);
  func_0x0001000330d4(&uStack_b10,0x100052910,&UNK_10003d818);
  func_0x0001000330d4(&lStack_a30,0x100052900,&UNK_10003d808);
  return;
}



/* Entry: 10003154c; end: 100031cb3;  */

void FUN_10003154c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_328 [120];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 uStack_80;
  undefined8 *puVar5;
  
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  uVar2 = param_2;
  func_0x0001000387d8();
  uVar3 = uVar2;
  uVar6 = param_3;
  func_0x0001000388a4();
  uStack_238 = 0x4028000000000000;
  uStack_230 = 0;
  uStack_218 = 0x402c000000000000;
  uStack_210 = 0x48;
  uStack_208 = 1;
  uStack_1f0 = 0x4028000000000000;
  uStack_1e8 = 0x48;
  uStack_1e0 = 0;
  puVar4 = &UNK_10003d7c0;
  uStack_240 = param_2;
  uStack_228 = uVar2;
  uStack_220 = param_3;
  uStack_200 = uVar3;
  uStack_1f8 = uVar6;
  _swift_getKeyPath();
  uStack_278 = CONCAT71(uStack_207,uStack_208);
  uStack_280 = uStack_210;
  uStack_268 = uStack_1f8;
  uStack_270 = uStack_200;
  uStack_258 = uStack_1e8;
  uStack_260 = uStack_1f0;
  uStack_2a0 = CONCAT71(uStack_22f,uStack_230);
  uStack_2a8 = uStack_238;
  uStack_2b0 = uStack_240;
  uStack_250 = uStack_1e0;
  uStack_298 = uStack_228;
  uStack_288 = uStack_218;
  uStack_290 = uStack_220;
  uStack_1d0 = 0x4028000000000000;
  uStack_1c8 = 0;
  uStack_1b0 = 0x402c000000000000;
  uStack_1a8 = 0x48;
  uStack_1a0 = 1;
  uStack_188 = 0x4028000000000000;
  uStack_180 = 0x48;
  uStack_178 = 0;
  uStack_1d8 = param_2;
  uStack_1c0 = uVar2;
  uStack_1b8 = param_3;
  uStack_198 = uVar3;
  uStack_190 = uVar6;
  func_0x00010003308c(&uStack_240,&uStack_f0,0x1000529e8,&UNK_10003d8b0);
  puVar5 = &uStack_1d8;
  func_0x0001000330d4(puVar5,0x1000529e8,&UNK_10003d8b0);
  uVar1 = SUB81(puVar5,0);
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uStack_128 = uStack_268;
  uStack_130 = uStack_270;
  uStack_118 = uStack_258;
  uStack_120 = uStack_260;
  uStack_168 = uStack_2a8;
  uStack_170 = uStack_2b0;
  uStack_158 = uStack_298;
  uStack_160 = uStack_2a0;
  uStack_110 = CONCAT71(uStack_24f,uStack_250);
  uStack_148 = uStack_288;
  uStack_150 = uStack_290;
  uStack_138 = uStack_278;
  uStack_140 = uStack_280;
  uStack_100 = 1;
  uVar7 = 0x4034000000000000;
  uVar2 = uStack_2b0;
  uVar3 = uStack_2a0;
  uVar6 = uStack_290;
  puStack_108 = puVar4;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  param_1[0x10] = uVar7;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar6;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[9] = uStack_128;
  param_1[8] = uStack_130;
  param_1[0xb] = uStack_118;
  param_1[10] = uStack_120;
  param_1[0xd] = puStack_108;
  param_1[0xc] = uStack_110;
  *(undefined1 *)(param_1 + 0xe) = uStack_100;
  param_1[1] = uStack_168;
  *param_1 = uStack_170;
  param_1[3] = uStack_158;
  param_1[2] = uStack_160;
  param_1[5] = uStack_148;
  param_1[4] = uStack_150;
  param_1[7] = uStack_138;
  param_1[6] = uStack_140;
  uStack_a8 = uStack_268;
  uStack_b0 = uStack_270;
  uStack_98 = uStack_258;
  uStack_a0 = uStack_260;
  uStack_90 = CONCAT71(uStack_24f,uStack_250);
  uStack_e8 = uStack_2a8;
  uStack_f0 = uStack_2b0;
  uStack_d8 = uStack_298;
  uStack_e0 = uStack_2a0;
  uStack_c8 = uStack_288;
  uStack_d0 = uStack_290;
  uStack_b8 = uStack_278;
  uStack_c0 = uStack_280;
  uStack_80 = 1;
  puStack_88 = puVar4;
  func_0x00010003308c(&uStack_170,auStack_328,0x1000529f0,&UNK_10003d8b8);
  func_0x0001000330d4(&uStack_f0,0x1000529f0,&UNK_10003d8b8);
  return;
}



/* Entry: 100031cb4; end: 100031fc7;  */

void FUN_100031cb4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_438 [152];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  ulong uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 uStack_60;
  
  func_0x000100038bd4();
  uVar4 = param_6;
  uVar9 = param_7;
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uVar5 = uVar4;
  uStack_c0 = __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC(0x4024000000000000);
  uStack_c8 = CONCAT71(uStack_c8._1_7_,(char)uVar4);
  uStack_a0 = uStack_a0 & 0xffffffffffffff00;
  uStack_e0 = 0x4031000000000000;
  uStack_d8 = 0xd4;
  uStack_d0 = uStack_d0 & 0xffffffffffffff00;
  uStack_f0 = param_6;
  uStack_e8 = param_7;
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  uStack_a8 = param_5;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_2e8 = uStack_c8;
  uStack_2f0 = uStack_d0;
  uStack_2d8 = uStack_b8;
  uStack_2e0 = uStack_c0;
  uStack_2c8 = uStack_a8;
  uStack_2d0 = uStack_b0;
  uStack_2c0 = (undefined1)uStack_a0;
  uStack_308 = uStack_e8;
  uStack_310 = uStack_f0;
  uStack_2f8 = uStack_d8;
  uStack_300 = uStack_e0;
  func_0x00010003308c(&uStack_310,&uStack_190,0x100052970,&UNK_10003d858);
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_348,0x4070400000000000,0,0,1,uVar5,uVar9);
  uStack_378 = uStack_2e8;
  uStack_380 = uStack_2f0;
  uStack_368 = uStack_2d8;
  uStack_370 = uStack_2e0;
  uStack_358 = uStack_2c8;
  uStack_360 = uStack_2d0;
  uStack_350 = uStack_2c0;
  uStack_398 = uStack_308;
  uStack_3a0 = uStack_310;
  uStack_388 = uStack_2f8;
  uStack_390 = uStack_300;
  func_0x0001000330d4(&uStack_f0,0x100052970,&UNK_10003d858);
  puVar6 = PTR__OBJC_CLASS___UIColor_100051030;
  _objc_opt_self();
  func_0x00010003b520();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar7 = puVar6;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_1d0 = CONCAT71(uStack_34f,uStack_350);
  uStack_248 = uStack_338;
  uStack_250 = uStack_340;
  uStack_238 = uStack_328;
  uStack_240 = uStack_330;
  uStack_288 = uStack_378;
  uStack_290 = uStack_380;
  uStack_278 = uStack_368;
  uStack_280 = uStack_370;
  uStack_260 = CONCAT71(uStack_34f,uStack_350);
  uStack_268 = uStack_358;
  uStack_270 = uStack_360;
  uStack_258 = uStack_348;
  uStack_2a8 = uStack_398;
  uStack_2b0 = uStack_3a0;
  uStack_298 = uStack_388;
  uStack_2a0 = uStack_390;
  uStack_1b8 = uStack_338;
  uStack_1c0 = uStack_340;
  uStack_1a8 = uStack_328;
  uStack_1b0 = uStack_330;
  uStack_1f8 = uStack_378;
  uStack_200 = uStack_380;
  uStack_1e8 = uStack_368;
  uStack_1f0 = uStack_370;
  uStack_1d8 = uStack_358;
  uStack_1e0 = uStack_360;
  uStack_1c8 = uStack_348;
  uStack_230 = uStack_320;
  uStack_1a0 = uStack_320;
  uStack_218 = uStack_398;
  uStack_220 = uStack_3a0;
  uStack_208 = uStack_388;
  uStack_210 = uStack_390;
  func_0x00010003308c(&uStack_2b0,&uStack_f0,0x100052960,&UNK_10003d850);
  func_0x0001000330d4(&uStack_220,0x100052960,&UNK_10003d850);
  uStack_128 = uStack_338;
  uStack_130 = uStack_340;
  uStack_118 = uStack_328;
  uStack_120 = uStack_330;
  uStack_168 = uStack_378;
  uStack_170 = uStack_380;
  uStack_158 = uStack_368;
  uStack_160 = uStack_370;
  uStack_140 = CONCAT71(uStack_34f,uStack_350);
  uStack_148 = uStack_358;
  uStack_150 = uStack_360;
  uStack_138 = uStack_348;
  uStack_188 = uStack_398;
  uStack_190 = uStack_3a0;
  uStack_178 = uStack_388;
  uStack_180 = uStack_390;
  uStack_110 = uStack_320;
  lVar8 = 0x100052938;
  puStack_108 = puVar6;
  uStack_100 = (char)puVar7;
  FUN_100010860(0x100052938,&UNK_10003d840);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x24));
  lVar8 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar3 = *(int *)(lVar8 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_10004c448;
  lVar8 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar8 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar8);
  auVar10 = NEON_fmov(0x4036000000000000,8);
  puVar1[1] = auVar10._8_8_;
  *puVar1 = auVar10._0_8_;
  lVar8 = 0x100052980;
  FUN_100010860(0x100052980,&UNK_10003d868);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x24)) = 0x100;
  param_1[0xd] = uStack_128;
  param_1[0xc] = uStack_130;
  param_1[0xf] = uStack_118;
  param_1[0xe] = uStack_120;
  param_1[0x11] = puStack_108;
  param_1[0x10] = uStack_110;
  *(undefined1 *)(param_1 + 0x12) = uStack_100;
  param_1[5] = uStack_168;
  param_1[4] = uStack_170;
  param_1[7] = uStack_158;
  param_1[6] = uStack_160;
  param_1[9] = uStack_148;
  param_1[8] = uStack_150;
  param_1[0xb] = uStack_138;
  param_1[10] = uStack_140;
  param_1[1] = uStack_188;
  *param_1 = uStack_190;
  param_1[3] = uStack_178;
  param_1[2] = uStack_180;
  uStack_88 = uStack_338;
  uStack_90 = uStack_340;
  uStack_78 = uStack_328;
  uStack_80 = uStack_330;
  uStack_c8 = uStack_378;
  uStack_d0 = uStack_380;
  uStack_b8 = uStack_368;
  uStack_c0 = uStack_370;
  uStack_a0 = CONCAT71(uStack_34f,uStack_350);
  uStack_a8 = uStack_358;
  uStack_b0 = uStack_360;
  uStack_98 = uStack_348;
  uStack_e8 = uStack_398;
  uStack_f0 = uStack_3a0;
  uStack_d8 = uStack_388;
  uStack_e0 = uStack_390;
  uStack_70 = uStack_320;
  puStack_68 = puVar6;
  uStack_60 = (char)puVar7;
  func_0x00010003308c(&uStack_190,auStack_438,0x100052950,&UNK_10003d848);
  func_0x0001000330d4(&uStack_f0,0x100052950,&UNK_10003d848);
  return;
}



/* Entry: 100031fc8; end: 10003249f;  */

void FUN_100031fc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auStack_810 [232];
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined1 uStack_718;
  undefined7 uStack_717;
  undefined8 uStack_710;
  undefined1 uStack_708;
  undefined7 uStack_707;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined1 uStack_6e0;
  undefined7 uStack_6df;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined1 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined1 uStack_640;
  undefined7 uStack_63f;
  undefined1 uStack_638;
  undefined7 uStack_637;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined1 uStack_610;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined1 uStack_560;
  undefined7 uStack_55f;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 uStack_4b0;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined1 uStack_400;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 uStack_60;
  
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  uStack_720 = 0;
  uStack_718 = 1;
  uStack_728 = param_6;
  func_0x000100038ca0();
  uStack_710 = 0;
  uStack_708 = 1;
  uStack_700 = 0x4031000000000000;
  uStack_6f8 = 0x6472616f6279656b;
  uStack_6f0 = 0xe800000000000000;
  uStack_6e8 = 0x48;
  uStack_6e0 = 0;
  uStack_6c8 = 0x4031000000000000;
  uStack_6c0 = 0x48;
  uStack_6b8 = 0;
  uStack_6d8 = param_6;
  uStack_6d0 = param_7;
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uStack_4d8 = CONCAT71(uStack_6df,uStack_6e0);
  uStack_4e0 = uStack_6e8;
  uStack_4c8 = uStack_6d0;
  uStack_4d0 = uStack_6d8;
  uStack_4b8 = uStack_6c0;
  uStack_4c0 = uStack_6c8;
  uStack_4b0 = uStack_6b8;
  uStack_510 = CONCAT71(uStack_717,uStack_718);
  uStack_518 = uStack_720;
  uStack_520 = uStack_728;
  uStack_508 = uStack_710;
  uStack_500 = CONCAT71(uStack_707,uStack_708);
  uStack_4f8 = uStack_700;
  uStack_4e8 = uStack_6f0;
  uStack_4f0 = uStack_6f8;
  uVar7 = 0x1000529d0;
  uVar9 = uStack_6f8;
  func_0x00010003308c(&uStack_520,&uStack_140,0x1000529d0,&UNK_10003d890);
  uStack_630 = __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC(0x4024000000000000);
  uStack_638 = (undefined1)param_6;
  uStack_610 = 0;
  uStack_668 = uStack_4d8;
  uStack_670 = uStack_4e0;
  uStack_658 = uStack_4c8;
  uStack_660 = uStack_4d0;
  uStack_648 = uStack_4b8;
  uStack_650 = uStack_4c0;
  uStack_640 = uStack_4b0;
  uStack_6a8 = uStack_518;
  uStack_6b0 = uStack_520;
  uStack_698 = uStack_508;
  uStack_6a0 = uStack_510;
  uStack_688 = uStack_4f8;
  uStack_690 = uStack_500;
  uStack_678 = uStack_4e8;
  uStack_680 = uStack_4f0;
  puVar3 = &uStack_728;
  uStack_628 = uVar9;
  uStack_620 = param_4;
  uStack_618 = param_5;
  func_0x0001000330d4(puVar3,0x1000529d0,&UNK_10003d890);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_418 = uStack_628;
  uStack_420 = uStack_630;
  uStack_408 = uStack_618;
  uStack_410 = uStack_620;
  uStack_400 = uStack_610;
  uStack_458 = uStack_668;
  uStack_460 = uStack_670;
  uStack_448 = uStack_658;
  uStack_450 = uStack_660;
  uStack_430 = CONCAT71(uStack_63f,uStack_640);
  uStack_428 = CONCAT71(uStack_637,uStack_638);
  uStack_438 = uStack_648;
  uStack_440 = uStack_650;
  uStack_498 = uStack_6a8;
  uStack_4a0 = uStack_6b0;
  uStack_488 = uStack_698;
  uStack_490 = uStack_6a0;
  uStack_478 = uStack_688;
  uStack_480 = uStack_690;
  uStack_468 = uStack_678;
  uStack_470 = uStack_680;
  func_0x00010003308c(&uStack_4a0,&uStack_140,0x1000529c0,&UNK_10003d888);
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_558,0x4070400000000000,0,0,1,puVar3,uVar7);
  uStack_578 = uStack_418;
  uStack_580 = uStack_420;
  uStack_568 = uStack_408;
  uStack_570 = uStack_410;
  uStack_560 = uStack_400;
  uStack_5b8 = uStack_458;
  uStack_5c0 = uStack_460;
  uStack_5a8 = uStack_448;
  uStack_5b0 = uStack_450;
  uStack_598 = uStack_438;
  uStack_5a0 = uStack_440;
  uStack_588 = uStack_428;
  uStack_590 = uStack_430;
  uStack_5f8 = uStack_498;
  uStack_600 = uStack_4a0;
  uStack_5e8 = uStack_488;
  uStack_5f0 = uStack_490;
  uStack_5d8 = uStack_478;
  uStack_5e0 = uStack_480;
  uStack_5c8 = uStack_468;
  uStack_5d0 = uStack_470;
  func_0x0001000330d4(&uStack_6b0,0x1000529c0,&UNK_10003d888);
  puVar4 = PTR__OBJC_CLASS___UIColor_100051030;
  _objc_opt_self();
  func_0x00010003b520();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar5 = puVar4;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_350 = CONCAT71(uStack_55f,uStack_560);
  uStack_270 = CONCAT71(uStack_55f,uStack_560);
  uStack_348 = uStack_558;
  uStack_338 = uStack_548;
  uStack_340 = uStack_550;
  uStack_328 = uStack_538;
  uStack_330 = uStack_540;
  uStack_388 = uStack_598;
  uStack_390 = uStack_5a0;
  uStack_378 = uStack_588;
  uStack_380 = uStack_590;
  uStack_368 = uStack_578;
  uStack_370 = uStack_580;
  uStack_358 = uStack_568;
  uStack_360 = uStack_570;
  uStack_3c8 = uStack_5d8;
  uStack_3d0 = uStack_5e0;
  uStack_3b8 = uStack_5c8;
  uStack_3c0 = uStack_5d0;
  uStack_3a8 = uStack_5b8;
  uStack_3b0 = uStack_5c0;
  uStack_398 = uStack_5a8;
  uStack_3a0 = uStack_5b0;
  uStack_3e8 = uStack_5f8;
  uStack_3f0 = uStack_600;
  uStack_3d8 = uStack_5e8;
  uStack_3e0 = uStack_5f0;
  uStack_268 = uStack_558;
  uStack_258 = uStack_548;
  uStack_260 = uStack_550;
  uStack_248 = uStack_538;
  uStack_250 = uStack_540;
  uStack_2a8 = uStack_598;
  uStack_2b0 = uStack_5a0;
  uStack_298 = uStack_588;
  uStack_2a0 = uStack_590;
  uStack_288 = uStack_578;
  uStack_290 = uStack_580;
  uStack_278 = uStack_568;
  uStack_280 = uStack_570;
  uStack_2e8 = uStack_5d8;
  uStack_2f0 = uStack_5e0;
  uStack_2d8 = uStack_5c8;
  uStack_2e0 = uStack_5d0;
  uStack_2c8 = uStack_5b8;
  uStack_2d0 = uStack_5c0;
  uStack_2b8 = uStack_5a8;
  uStack_2c0 = uStack_5b0;
  uStack_320 = uStack_530;
  uStack_240 = uStack_530;
  uStack_308 = uStack_5f8;
  uStack_310 = uStack_600;
  uStack_2f8 = uStack_5e8;
  uStack_300 = uStack_5f0;
  func_0x00010003308c(&uStack_3f0,&uStack_140,0x1000529b0,&UNK_10003d880);
  func_0x0001000330d4(&uStack_310,0x1000529b0,&UNK_10003d880);
  uStack_190 = CONCAT71(uStack_55f,uStack_560);
  uStack_188 = uStack_558;
  uStack_178 = uStack_548;
  uStack_180 = uStack_550;
  uStack_168 = uStack_538;
  uStack_170 = uStack_540;
  uStack_1c8 = uStack_598;
  uStack_1d0 = uStack_5a0;
  uStack_1b8 = uStack_588;
  uStack_1c0 = uStack_590;
  uStack_1a8 = uStack_578;
  uStack_1b0 = uStack_580;
  uStack_198 = uStack_568;
  uStack_1a0 = uStack_570;
  uStack_208 = uStack_5d8;
  uStack_210 = uStack_5e0;
  uStack_1f8 = uStack_5c8;
  uStack_200 = uStack_5d0;
  uStack_1e8 = uStack_5b8;
  uStack_1f0 = uStack_5c0;
  uStack_1d8 = uStack_5a8;
  uStack_1e0 = uStack_5b0;
  uStack_228 = uStack_5f8;
  uStack_230 = uStack_600;
  uStack_218 = uStack_5e8;
  uStack_220 = uStack_5f0;
  uStack_160 = uStack_530;
  lVar6 = 0x100052988;
  puStack_158 = puVar4;
  uStack_150 = (char)puVar5;
  FUN_100010860(0x100052988,&UNK_10003d870);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x24));
  lVar6 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar2 = *(int *)(lVar6 + 0x14);
  uVar1 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_10004c448;
  lVar6 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x68))((long)puVar3 + (long)iVar2,uVar1,lVar6);
  auVar8 = NEON_fmov(0x4036000000000000,8);
  puVar3[1] = auVar8._8_8_;
  *puVar3 = auVar8._0_8_;
  lVar6 = 0x100052980;
  FUN_100010860(0x100052980,&UNK_10003d868);
  *(undefined2 *)((long)puVar3 + (long)*(int *)(lVar6 + 0x24)) = 0x100;
  param_1[0x19] = uStack_168;
  param_1[0x18] = uStack_170;
  param_1[0x1b] = puStack_158;
  param_1[0x1a] = uStack_160;
  *(undefined1 *)(param_1 + 0x1c) = uStack_150;
  param_1[0x11] = uStack_1a8;
  param_1[0x10] = uStack_1b0;
  param_1[0x13] = uStack_198;
  param_1[0x12] = uStack_1a0;
  param_1[0x15] = uStack_188;
  param_1[0x14] = uStack_190;
  param_1[0x17] = uStack_178;
  param_1[0x16] = uStack_180;
  param_1[9] = uStack_1e8;
  param_1[8] = uStack_1f0;
  param_1[0xb] = uStack_1d8;
  param_1[10] = uStack_1e0;
  param_1[0xd] = uStack_1c8;
  param_1[0xc] = uStack_1d0;
  param_1[0xf] = uStack_1b8;
  param_1[0xe] = uStack_1c0;
  param_1[1] = uStack_228;
  *param_1 = uStack_230;
  param_1[3] = uStack_218;
  param_1[2] = uStack_220;
  param_1[5] = uStack_208;
  param_1[4] = uStack_210;
  param_1[7] = uStack_1f8;
  param_1[6] = uStack_200;
  uStack_a0 = CONCAT71(uStack_55f,uStack_560);
  uStack_98 = uStack_558;
  uStack_88 = uStack_548;
  uStack_90 = uStack_550;
  uStack_78 = uStack_538;
  uStack_80 = uStack_540;
  uStack_d8 = uStack_598;
  uStack_e0 = uStack_5a0;
  uStack_c8 = uStack_588;
  uStack_d0 = uStack_590;
  uStack_b8 = uStack_578;
  uStack_c0 = uStack_580;
  uStack_a8 = uStack_568;
  uStack_b0 = uStack_570;
  uStack_118 = uStack_5d8;
  uStack_120 = uStack_5e0;
  uStack_108 = uStack_5c8;
  uStack_110 = uStack_5d0;
  uStack_f8 = uStack_5b8;
  uStack_100 = uStack_5c0;
  uStack_e8 = uStack_5a8;
  uStack_f0 = uStack_5b0;
  uStack_138 = uStack_5f8;
  uStack_140 = uStack_600;
  uStack_128 = uStack_5e8;
  uStack_130 = uStack_5f0;
  uStack_70 = uStack_530;
  puStack_68 = puVar4;
  uStack_60 = (char)puVar5;
  func_0x00010003308c(&uStack_230,auStack_810,0x1000529a0,&UNK_10003d878);
  func_0x0001000330d4(&uStack_140,0x1000529a0,&UNK_10003d878);
  return;
}



/* Entry: 1000324a0; end: 100032883;  */

void FUN_1000324a0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  long extraout_x12;
  code *pcVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 auStack_390 [12];
  uint uStack_384;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 uStack_2d0;
  undefined8 *puStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined7 uStack_258;
  undefined4 uStack_251;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined1 uStack_100;
  undefined2 uStack_ff;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined2 uStack_8f;
  
  lVar6 = 0;
  uStack_370 = param_4;
  uStack_348 = param_1;
  FUN_100030578();
  lVar13 = *(long *)(lVar6 + -8);
  lStack_368 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(lStack_368 + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_390 + -extraout_x8;
  lVar7 = 0;
  FUN_1000271d4(0,param_3,param_4);
  lStack_350 = *(long *)(lVar7 + -8);
  lStack_358 = lVar7;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lStack_350 + 0x40));
  lVar7 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_378 = lVar7;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lStack_360 = lVar7 - extraout_x12;
  FUN_100032884(&uStack_f0,lVar6);
  uStack_238 = uStack_e8;
  uStack_240 = uStack_f0;
  uStack_228 = uStack_d8;
  uStack_230 = uStack_e0;
  uStack_218 = uStack_c8;
  uStack_220 = uStack_d0;
  uStack_208 = uStack_b8;
  uStack_210 = uStack_c0;
  lStack_328 = uStack_e8;
  uStack_330 = uStack_f0;
  uStack_318 = uStack_d8;
  uStack_320 = uStack_e0;
  uStack_308 = uStack_c8;
  uStack_310 = uStack_d0;
  uStack_2f8 = uStack_b8;
  uStack_300 = uStack_c0;
  uStack_1f8 = uStack_a8;
  uStack_200 = uStack_b0;
  uStack_1e8 = uStack_98;
  uStack_1f0 = uStack_a0;
  uStack_2e8 = uStack_a8;
  uStack_2f0 = uStack_b0;
  uStack_2d8 = uStack_98;
  uStack_2e0 = uStack_a0;
  uStack_1e0 = uStack_90;
  uStack_2d0 = uStack_90;
  uStack_1c8 = uStack_e8;
  uStack_1d0 = uStack_f0;
  uStack_1b8 = uStack_d8;
  uStack_1c0 = uStack_e0;
  uStack_170 = uStack_90;
  uStack_188 = uStack_a8;
  uStack_190 = uStack_b0;
  uStack_178 = uStack_98;
  uStack_180 = uStack_a0;
  uStack_1a8 = uStack_c8;
  uStack_1b0 = uStack_d0;
  uStack_198 = uStack_b8;
  uStack_1a0 = uStack_c0;
  func_0x00010003308c(&uStack_240,&uStack_160,0x100052778,&UNK_10003d560);
  func_0x0001000330d4(&uStack_1d0,0x100052778,&UNK_10003d560);
  uStack_118 = uStack_2e8;
  uStack_120 = uStack_2f0;
  uStack_108 = (undefined7)uStack_2d8;
  uStack_101 = (undefined1)((ulong)uStack_2d8 >> 0x38);
  uStack_110 = uStack_2e0;
  uStack_100 = uStack_2d0;
  uStack_158 = lStack_328;
  uStack_160 = uStack_330;
  uStack_148 = uStack_318;
  uStack_150 = uStack_320;
  uStack_138 = uStack_308;
  uStack_140 = uStack_310;
  uStack_128 = uStack_2f8;
  uStack_130 = uStack_300;
  uStack_ff = 0x100;
  uStack_e8 = lStack_328;
  uStack_f0 = uStack_330;
  uStack_d8 = uStack_318;
  uStack_e0 = uStack_320;
  uStack_90 = uStack_2d0;
  uStack_a8 = uStack_2e8;
  uStack_b0 = uStack_2f0;
  uStack_98 = uStack_2d8;
  uStack_a0 = uStack_2e0;
  uStack_c8 = uStack_308;
  uStack_d0 = uStack_310;
  uStack_b8 = uStack_2f8;
  uStack_c0 = uStack_300;
  uStack_8f = 0x100;
  func_0x00010003308c(&uStack_160,&uStack_2b0,0x100052760,&UNK_10003d548);
  func_0x0001000330d4(&uStack_f0,0x100052760,&UNK_10003d548);
  uStack_380 = *(undefined8 *)(param_2 + *(int *)(lVar6 + 0x2c));
  uVar15 = *(undefined8 *)(param_2 + *(int *)(lVar6 + 0x30));
  uStack_384 = (uint)*(byte *)(param_2 + *(int *)(lVar6 + 0x34));
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x38));
  uVar9 = *puVar1;
  uVar2 = puVar1[1];
  (**(code **)(lVar13 + 0x10))(puVar12,param_2,lVar6);
  uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar14 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
  puVar8 = &UNK_10004e9d0;
  _swift_allocObject(&UNK_10004e9d0,uVar14 + lStack_368,uVar10 | 7);
  uVar4 = uStack_370;
  *(undefined8 *)(puVar8 + 0x10) = param_3;
  *(undefined8 *)(puVar8 + 0x18) = uStack_370;
  (**(code **)(lVar13 + 0x20))(puVar8 + uVar14,puVar12,lVar6);
  lVar6 = lStack_378;
  uVar3 = uStack_380;
  FUN_100027e04(lStack_378,uVar15,uStack_380,uStack_384,uVar9,uVar2,0x100032990,puVar8,param_3,uVar4
               );
  lVar13 = lStack_358;
  puVar8 = &UNK_10003cf48;
  _swift_getWitnessTable(&UNK_10003cf48,lStack_358);
  lVar7 = lStack_360;
  FUN_100028c48(lStack_360,lVar6,lVar13,puVar8);
  lVar5 = lStack_350;
  pcVar11 = *(code **)(lStack_350 + 8);
  _swift_unknownObjectRetain(uVar3);
  _swift_retain(uVar2);
  (*pcVar11)(lVar6,lVar13);
  uStack_268 = uStack_118;
  uStack_270 = uStack_120;
  uStack_258 = uStack_108;
  uStack_260 = uStack_110;
  uStack_251 = CONCAT22(uStack_ff,CONCAT11(uStack_100,uStack_101));
  uStack_2a8 = uStack_158;
  uStack_2b0 = uStack_160;
  uStack_298 = uStack_148;
  uStack_2a0 = uStack_150;
  uStack_288 = uStack_138;
  uStack_290 = uStack_140;
  uStack_278 = uStack_128;
  uStack_280 = uStack_130;
  puStack_2c0 = &uStack_2b0;
  (**(code **)(lVar5 + 0x10))(lVar6,lVar7,lVar13);
  lStack_2b8 = lVar6;
  uVar9 = 0x100052760;
  func_0x00010003308c(&uStack_160,&uStack_330,0x100052760,&UNK_10003d548);
  FUN_100010860(0x100052760,&UNK_10003d548);
  lStack_328 = lVar13;
  uStack_330 = uVar9;
  func_0x00010002e288();
  uStack_340 = uVar9;
  puStack_338 = puVar8;
  FUN_10002722c(uStack_348,&puStack_2c0,2,&uStack_330,&uStack_340);
  func_0x0001000330d4(&uStack_160,0x100052760,&UNK_10003d548);
  (*pcVar11)(lVar7,lVar13);
  (*pcVar11)(lVar6,lVar13);
  func_0x0001000330d4(&uStack_2b0,0x100052760,&UNK_10003d548);
  return;
}


