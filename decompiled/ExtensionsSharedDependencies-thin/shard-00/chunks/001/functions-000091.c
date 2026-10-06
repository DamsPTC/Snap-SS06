/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001ae734; end: 001ae8bf;  */

void FUN_001ae734(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0x11,2,0);
  if (iVar1 == 0) {
    if (lRam0000000000af3138 != -1) {
      _swift_once(0xaf3138,FUN_001b9584);
    }
    uVar4 = uRam0000000000b65c98;
    puVar2 = &UNK_009b59a0;
    _swift_allocObject(&UNK_009b59a0,0x58,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    *(undefined8 *)(puVar2 + 0x18) = 0x1b58e8;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x48) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x50) = 0;
    puVar5 = &UNK_007e2338;
    puVar6 = &UNK_007e2330;
    puVar7 = &UNK_007e2328;
    puVar3 = &UNK_009b59c8;
  }
  else {
    if (lRam0000000000af3138 != -1) {
      _swift_once(0xaf3138,FUN_001b9584);
    }
    uVar4 = uRam0000000000b65c98;
    puVar2 = &UNK_009b59f0;
    _swift_allocObject(&UNK_009b59f0,0x58,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    *(undefined8 *)(puVar2 + 0x18) = 0x1b58e8;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined **)(puVar2 + 0x28) = &UNK_007e2620;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined **)(puVar2 + 0x38) = &UNK_007e2628;
    puVar5 = &UNK_007e2350;
    puVar6 = &UNK_007e2348;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined **)(puVar2 + 0x48) = &UNK_007e2630;
    puVar7 = &UNK_007e2340;
    puVar3 = &UNK_009b5a18;
    *(undefined8 *)(puVar2 + 0x50) = 0;
  }
  _swift_allocObject(puVar3,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = 0x1b58e8;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  _swift_retain_n(uVar4,3);
  *param_1 = puVar7;
  param_1[1] = uVar4;
  param_1[2] = puVar6;
  param_1[3] = puVar2;
  param_1[4] = puVar5;
  param_1[5] = puVar3;
  return;
}



/* Entry: 001ae8c0; end: 001aef37;  */

long __s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentV6userId12clearInPlaceACSS_SbtcfC
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_140;
  undefined4 uStack_134;
  code *pcStack_130;
  ulong uStack_128;
  long lStack_120;
  code *pcStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  long lStack_f8;
  ulong uStack_f0;
  undefined4 uStack_e4;
  code *pcStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar1 = 0;
  uStack_a8 = param_1;
  uStack_a0 = param_2;
  uStack_94 = param_3;
  __s10Foundation6LocaleVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar10 = (long)&lStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSS10FoundationE17LocalizationValueVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar9 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0xaf2dc8;
  func_0x000115a8(0xaf2dc8,&UNK_007e1f30);
  lVar3 = 0;
  uStack_c0 = uVar2;
  __s10Foundation23LocalizedStringResourceVMa();
  lVar8 = *(long *)(lVar3 + -8);
  uStack_b8 = *(undefined8 *)(lVar8 + 0x40);
  lStack_f8 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_b0 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar9 - uStack_b0;
  lStack_140 = lVar7;
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lVar9,0x44492072657355,0xe700000000000000);
  lStack_120 = lVar10;
  __s10Foundation6LocaleV7currentACvgZ(lVar10);
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceV17BundleDescriptionOMa();
  uStack_d0 = *(undefined8 *)(*(long *)(lVar1 + -8) + 0x40);
  lStack_d8 = lVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_c8 = extraout_x12_00 + 0xfU & 0xfffffffffffffff0;
  lVar5 = lVar7 - uStack_c8;
  uStack_e4 = *(undefined4 *)
               PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_00998e98
  ;
  pcStack_e0 = *(code **)(extraout_x8_01 + 0x68);
  (*pcStack_e0)(lVar5);
  __s10Foundation23LocalizedStringResourceV_5table6locale6bundle7commentACSSAAE17LocalizationValueV_SSSgAA6LocaleVAC17BundleDescriptionOs06StaticC0VSgtcfC
            (lVar7,lVar9,0x74726f6853707041,0xec00000073747563,lVar10,lVar5,0,0,0x100);
  lVar1 = 0xaf2dd0;
  func_0x000115a8(0xaf2dd0,&UNK_007e1f38);
  uStack_108 = *(undefined8 *)(*(long *)(lVar1 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_f0 = extraout_x12_01 + 0xfU & 0xfffffffffffffff0;
  lVar5 = lVar5 - uStack_f0;
  pcStack_100 = *(code **)(lVar8 + 0x38);
  (*pcStack_100)(lVar5,1,1,lVar3);
  uStack_90 = 0;
  uStack_88 = 0;
  lVar1 = 0xaf2dd8;
  func_0x000115a8(0xaf2dd8,&UNK_007e1f40);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar5 - extraout_x8_02;
  lVar1 = 0;
  __sSS10AppIntentsE18IntentInputOptionsVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar6,1,1,lVar1);
  lVar1 = 0xaf2de0;
  func_0x000115a8(0xaf2de0,&UNK_007e1f48);
  lVar1 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_110 = lVar1 + 0xfU & 0xfffffffffffffff0;
  lVar1 = lVar6 - uStack_110;
  lVar7 = 0;
  __s10AppIntents12IntentDialogVMa();
  pcStack_118 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  (*pcStack_118)(lVar1,1,1,lVar7);
  lVar8 = 0;
  __s10AppIntents23InputConnectionBehaviorOMa();
  lVar3 = *(long *)(*(long *)(lVar8 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_128 = lVar3 + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar1 - uStack_128;
  uStack_134 = *(undefined4 *)PTR___s10AppIntents23InputConnectionBehaviorO7defaultyA2CmFWC_0099abd0
  ;
  pcStack_130 = *(code **)(extraout_x8_03 + 0x68);
  (*pcStack_130)(lVar10,uStack_134,lVar8);
  lVar3 = lStack_140;
  __s10AppIntents15IntentParameterCAASS9ValueTypeRtzrlE5title11description7default12inputOptions07requestE6Dialog0J18ConnectionBehaviorACyxG10Foundation23LocalizedStringResourceV_AOSg09UnwrappedF0QzSgYtSSAAE0c5InputK0VSgAA0cM0VSgAA0unO0OYttcfC
            (lStack_140,lVar5,&uStack_90,lVar6,lVar1,lVar10);
  uVar2 = 0xaf2de8;
  func_0x000115a8(0xaf2de8,&UNK_007e1f50);
  uStack_c0 = uVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar10 - uStack_b0;
  _swift_retain(lVar3);
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lVar9,0x6e49207261656c43,0xee006563616c5020);
  lVar1 = lStack_120;
  __s10Foundation6LocaleV7currentACvgZ(lStack_120);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = lVar10 - uStack_c8;
  (*pcStack_e0)(lVar5,uStack_e4,lStack_d8);
  __s10Foundation23LocalizedStringResourceV_5table6locale6bundle7commentACSSAAE17LocalizationValueV_SSSgAA6LocaleVAC17BundleDescriptionOs06StaticC0VSgtcfC
            (lVar10,lVar9,0x74726f6853707041,0xec00000073747563,lVar1,lVar5,0,0,0x100);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = lVar5 - uStack_f0;
  (*pcStack_100)(lVar5,1,1,lStack_f8);
  uStack_90 = CONCAT71(uStack_90._1_7_,2);
  lVar1 = 0xaf2df0;
  func_0x000115a8(0xaf2df0,&UNK_007e1f58);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar5 - extraout_x8_04;
  lVar1 = 0;
  __sSb10AppIntentsE17IntentDisplayNameVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar6,1,1,lVar1);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar1 = lVar6 - uStack_110;
  (*pcStack_118)(lVar1,1,1,lVar7);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar7 = lVar1 - uStack_128;
  (*pcStack_130)(lVar7,uStack_134,lVar8);
  __s10AppIntents15IntentParameterCAASb9ValueTypeRtzrlE5title11description7default11displayName07requestE6Dialog23inputConnectionBehaviorACyxG10Foundation23LocalizedStringResourceV_AOSg09UnwrappedF0QzSgYtSbAAE0c7DisplayK0VSgAA0cM0VSgAA05InputoP0OYttcfC
            (lVar10,lVar5,&uStack_90,lVar6,lVar1,lVar7);
  func_0x000115a8(0xaf2df8,&UNK_007e1f60);
  __s10AppIntents0A17DependencyManagerCMa(0);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  lVar1 = lVar10;
  _swift_retain();
  __s10AppIntents0A17DependencyManagerC6sharedACvgZ();
  puVar4 = &uStack_90;
  __s10AppIntents0A10DependencyC3key7manager7defaultACyxGs11AnyHashableVSg_AA0aC7ManagerCxyXAtcfC
            (puVar4,lVar1,FUN_001ae734,0);
  uStack_90 = uStack_a8;
  uStack_88 = uStack_a0;
  _swift_retain();
  __s10AppIntents15IntentParameterC12wrappedValuexvs(&uStack_90);
  uStack_90 = CONCAT71(uStack_90._1_7_,(char)uStack_94);
  __s10AppIntents15IntentParameterC12wrappedValuexvs(&uStack_90);
  _swift_release(puVar4);
  _swift_release(lVar10);
  _swift_release(lVar3);
  return lVar3;
}



/* Entry: 001aef38; end: 001aef53;  */

void FUN_001aef38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001aef54,0,0);
  return;
}



/* Entry: 001aef54; end: 001af06b;  */

void FUN_001aef54(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  long *plVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  __s10AppIntents0A10DependencyC12wrappedValuexvg(unaff_x22 + 0x10);
  piVar5 = *(int **)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x38);
  __s10AppIntents15IntentParameterC12wrappedValuexvg(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar6;
  __s10AppIntents15IntentParameterC12wrappedValuexvg(unaff_x22 + 0xa8);
  uVar7 = *(undefined1 *)(unaff_x22 + 0xa8);
  puVar8 = &UNK_009b57a8;
  _swift_allocObject(&UNK_009b57a8,0x28,7);
  *(undefined **)(unaff_x22 + 0x90) = puVar8;
  *(undefined8 *)(puVar8 + 0x10) = uVar10;
  *(undefined8 *)(puVar8 + 0x18) = uVar2;
  *(undefined8 *)(puVar8 + 0x20) = uVar4;
  iVar1 = *piVar5;
  plVar9 = (long *)(ulong)(uint)piVar5[1];
  _swift_retain(uVar10);
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_001af06c;
                    /* WARNING: Could not recover jumptable at 0x001af068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar3,uVar6,uVar7,&UNK_007e1f78,puVar8);
  return;
}



/* Entry: 001af06c; end: 001af0c7;  */

void FUN_001af06c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_001af0c8;
  }
  else {
    pcVar1 = FUN_001af140;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 001af0c8; end: 001af13f;  */

void FUN_001af0c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(uVar4);
  _swift_release(uVar2);
  _swift_release(uVar3);
  __s10AppIntents12IntentResultPAAE6resultAA0cD9ContainerVys5NeverOA3HGyAIRszrlFZ(uVar5);
                    /* WARNING: Could not recover jumptable at 0x001af13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001af140; end: 001af1a3;  */

void FUN_001af140(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(uVar4);
  _swift_release(uVar2);
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x001af1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001af1a4; end: 001af237;  */

void FUN_001af1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,qword param_4,
                 qword param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = 0;
  __sScMMa();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  pcVar2 = section_00000068.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x20) = pcVar2;
  *(long *)pcVar2 = unaff_x22;
  *(code **)(pcVar2 + 8) = FUN_001af238;
  *(undefined8 *)(pcVar2 + 0x28) = param_1;
  *(undefined8 *)(pcVar2 + 0x30) = param_2;
  *(undefined8 *)(pcVar2 + 0x10) = param_3;
  *(qword *)(pcVar2 + 0x18) = param_4;
  *(qword *)(pcVar2 + 0x20) = param_5;
  uVar3 = 0;
  __sScMMa();
  uVar1 = uVar3;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(pcVar2 + 0x38) = uVar1;
  FUN_000421a4();
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(pcVar2 + 0x40) = uVar3;
  *(undefined8 *)(pcVar2 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001af394,uVar3,uVar1);
  return;
}



/* Entry: 001af238; end: 001af2b7;  */

void FUN_001af238(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(lVar3 + 0x28) = unaff_x20;
  _swift_task_dealloc(uVar1);
  FUN_000421a4();
  __sScA15unownedExecutorScevgTj(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_001af2b8;
  }
  else {
    pcVar2 = (code *)0x1af2ec;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar2,uVar4,uVar1);
  return;
}



/* Entry: 001af2b8; end: 001af31f;  */

void FUN_001af2b8(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x001af2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001af320; end: 001af393;  */

void FUN_001af320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  uVar1 = 0;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  FUN_000421a4();
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001af394,uVar1,uVar2);
  return;
}



/* Entry: 001af394; end: 001af4b7;  */

void FUN_001af394(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0x1a,0,0);
  if (iVar1 != 0) {
    lVar3 = 0xaf2de0;
    func_0x000115a8(0xaf2de0,&UNK_007e1f48);
    uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x50) = uVar2;
    lVar3 = 0;
    __s10AppIntents12IntentDialogVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar2,1,1,lVar3);
    plVar4 = (long *)(ulong)*(uint *)(
                                     PTR___s10AppIntents0A6IntentPAAE20continueInForeground_13alwaysConfirmyAA0C6DialogVSg_SbtYaKFTu_0099ab20
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x58) = plVar4;
    plVar5 = plVar4;
    FUN_001b1270();
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_001af4b8;
                    /* WARNING: Could not recover jumptable at 0x00777594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___s10AppIntents0A6IntentPAAE20continueInForeground_13alwaysConfirmyAA0C6DialogVSg_SbtYaKF_0099ab18
    )(uVar2,0,&__s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentVN,plVar5);
    return;
  }
  piVar6 = *(int **)(unaff_x22 + 0x28);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1af5ac;
                    /* WARNING: Could not recover jumptable at 0x001af4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))();
  return;
}



/* Entry: 001af4b8; end: 001af563;  */

void FUN_001af4b8(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar4 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(long *)(lVar4 + 0x60) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x58));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_0099c0e8)
              (FUN_001af564,*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x48));
    return;
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x50);
  FUN_001b1878(uVar5);
  _swift_task_dealloc(uVar5);
  piVar3 = *(int **)(lVar4 + 0x28);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(lVar4 + 0x68) = plVar2;
  *plVar2 = lVar6;
  plVar2[1] = 0x1af5ac;
                    /* WARNING: Could not recover jumptable at 0x001af560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))();
  return;
}



/* Entry: 001af564; end: 001af623;  */

void FUN_001af564(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  FUN_001b1878(uVar1);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001af5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001af624; end: 001af693;  */

void FUN_001af624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  uVar1 = 0;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  FUN_000421a4();
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001af694,uVar1,uVar2);
  return;
}



/* Entry: 001af694; end: 001af7b7;  */

void FUN_001af694(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0x1a,0,0);
  if (iVar1 != 0) {
    lVar3 = 0xaf2de0;
    func_0x000115a8(0xaf2de0,&UNK_007e1f48);
    uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x48) = uVar2;
    lVar3 = 0;
    __s10AppIntents12IntentDialogVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar2,1,1,lVar3);
    plVar4 = (long *)(ulong)*(uint *)(
                                     PTR___s10AppIntents0A6IntentPAAE20continueInForeground_13alwaysConfirmyAA0C6DialogVSg_SbtYaKFTu_0099ab20
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x50) = plVar4;
    plVar5 = plVar4;
    FUN_001b139c();
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_001af7b8;
                    /* WARNING: Could not recover jumptable at 0x00777594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___s10AppIntents0A6IntentPAAE20continueInForeground_13alwaysConfirmyAA0C6DialogVSg_SbtYaKF_0099ab18
    )(uVar2,0,&__s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentVN,plVar5);
    return;
  }
  piVar6 = *(int **)(unaff_x22 + 0x20);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1af8ac;
                    /* WARNING: Could not recover jumptable at 0x001af7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))();
  return;
}



/* Entry: 001af7b8; end: 001af863;  */

void FUN_001af7b8(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar4 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(long *)(lVar4 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x50));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_0099c0e8)
              (FUN_001af864,*(undefined8 *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x40));
    return;
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x48);
  FUN_001b1878(uVar5);
  _swift_task_dealloc(uVar5);
  piVar3 = *(int **)(lVar4 + 0x20);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(lVar4 + 0x60) = plVar2;
  *plVar2 = lVar6;
  plVar2[1] = 0x1af8ac;
                    /* WARNING: Could not recover jumptable at 0x001af860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))();
  return;
}



/* Entry: 001af864; end: 001af923;  */

void FUN_001af864(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x30));
  FUN_001b1878(uVar1);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001af8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001af924; end: 001af93f;  */

void FUN_001af924(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000000af2da0 != -1) {
    _swift_once(0xaf2da0,FUN_001ae534);
  }
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceVMa();
  lVar2 = lVar1;
  FUN_00028010();
                    /* WARNING: Could not recover jumptable at 0x001b0550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 001af940; end: 001af96b;  */

bool FUN_001af940(void)

{
  int iVar1;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0x1a,0,0);
  return iVar1 == 0;
}



/* Entry: 001af96c; end: 001af96f;  */

void FUN_001af96c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar2 = 0xaf2da8;
  func_0x000115a8(0xaf2da8,&UNK_007e1f20);
  lVar3 = 0;
  __s10AppIntents11IntentModesVMa();
  lVar10 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar9 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  _swift_allocObject(lVar2,uVar9 + lVar10 * 2,uVar8 | 7);
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  lVar1 = lVar2 + uVar9;
  __s10AppIntents11IntentModesV10backgroundACvgZ(lVar1);
  lVar4 = 0;
  __s10AppIntents11IntentModesV14ForegroundModeVMa();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar11 + 0x40));
  puVar5 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10AppIntents11IntentModesV14ForegroundModeV7dynamicAEvgZ(puVar5);
  __s10AppIntents11IntentModesV10foregroundyA2C14ForegroundModeVFZ(lVar1 + lVar10,puVar5);
  (**(code **)(lVar11 + 8))(puVar5,lVar4);
  lStack_58 = lVar2;
  FUN_001ae6a0();
  uVar6 = 0xaf2db8;
  func_0x000115a8(0xaf2db8,&UNK_007e1f28);
  uVar7 = uVar6;
  func_0x001ae6e4();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (param_1,&lStack_58,uVar6,uVar7,lVar3,puVar5);
  return;
}



/* Entry: 001af970; end: 001af983;  */

void FUN_001af970(void)

{
  __s10AppIntents0A6IntentPAAE20authenticationPolicyAA0c14AuthenticationE0OvgZ();
  return;
}



/* Entry: 001af984; end: 001af98b;  */

undefined8 FUN_001af984(void)

{
  return 0;
}



/* Entry: 001af98c; end: 001af9b3;  */

void FUN_001af98c(void)

{
  __s10AppIntents0A6IntentPAAE16parameterSummaryQrvgZ();
  return;
}



/* Entry: 001af9b4; end: 001afa1f;  */

void FUN_001af9b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  dword *pdVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  pdVar3 = &section_00000068.reserved2;
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar3;
  *(long *)pdVar3 = unaff_x22;
  *(code **)(pdVar3 + 2) = FUN_001afa20;
  *(undefined8 *)(pdVar3 + 0x18) = uVar2;
  *(undefined8 *)(pdVar3 + 0x1a) = uVar4;
  *(undefined8 *)(pdVar3 + 0x14) = param_1;
  *(undefined8 *)(pdVar3 + 0x16) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001aef54,0,0);
  return;
}



/* Entry: 001afa20; end: 001afa5b;  */

void FUN_001afa20(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001afa58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001afa5c; end: 001afaaf;  */

void FUN_001afa5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_001b0760();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



/* Entry: 001afab0; end: 001afc1b;  */

void FUN_001afab0(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation6LocaleVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSS10FoundationE17LocalizationValueVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  __s10Foundation23LocalizedStringResourceVMa(0);
  FUN_00028504();
  FUN_00028010(uVar2,0xb65ba8);
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lVar4,0xd00000000000001a,0x80000000008b9640);
  __s10Foundation6LocaleV7currentACvgZ(puVar3);
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceV17BundleDescriptionOMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (lVar1,*(undefined4 *)
                    PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_00998e98
            );
  __s10Foundation23LocalizedStringResourceV_5table6locale6bundle7commentACSSAAE17LocalizationValueV_SSSgAA6LocaleVAC17BundleDescriptionOs06StaticC0VSgtcfC
            (uVar2,lVar4,0x74726f6853707041,0xec00000073747563,puVar3,lVar1,0,0,0x100);
  return;
}



/* Entry: 001afc1c; end: 001b018b;  */

void FUN_001afc1c(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0x11,2,0);
  if (iVar1 == 0) {
    if (lRam0000000000af3138 != -1) {
      _swift_once(0xaf3138,FUN_001b9584);
    }
    uVar4 = uRam0000000000b65c98;
    puVar2 = &UNK_009b5900;
    _swift_allocObject(&UNK_009b5900,0x58,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    *(undefined8 *)(puVar2 + 0x18) = 0x1b58e8;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x48) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x50) = 0;
    puVar5 = &UNK_007e2300;
    puVar6 = &UNK_007e22f8;
    puVar7 = &UNK_007e22f0;
    puVar3 = &UNK_009b5928;
  }
  else {
    if (lRam0000000000af3138 != -1) {
      _swift_once(0xaf3138,FUN_001b9584);
    }
    uVar4 = uRam0000000000b65c98;
    puVar2 = &UNK_009b5950;
    _swift_allocObject(&UNK_009b5950,0x58,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    *(undefined8 *)(puVar2 + 0x18) = 0x1b58e8;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined **)(puVar2 + 0x28) = &UNK_007e2620;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined **)(puVar2 + 0x38) = &UNK_007e2628;
    puVar5 = &UNK_007e2318;
    puVar6 = &UNK_007e2310;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined **)(puVar2 + 0x48) = &UNK_007e2630;
    puVar7 = &UNK_007e2308;
    puVar3 = &UNK_009b5978;
    *(undefined8 *)(puVar2 + 0x50) = 0;
  }
  _swift_allocObject(puVar3,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = 0x1b58e8;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  _swift_retain_n(uVar4,3);
  *param_1 = puVar7;
  param_1[1] = uVar4;
  param_1[2] = puVar6;
  param_1[3] = puVar2;
  param_1[4] = puVar5;
  param_1[5] = puVar3;
  return;
}



/* Entry: 001b018c; end: 001b01a7;  */

void FUN_001b018c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b01a8,0,0);
  return;
}



/* Entry: 001b01a8; end: 001b0297;  */

void FUN_001b01a8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  __s10AppIntents0A10DependencyC12wrappedValuexvg(unaff_x22 + 0x10);
  piVar5 = *(int **)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x38);
  __s10AppIntents15IntentParameterC12wrappedValuexvg(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar6;
  puVar7 = &UNK_009b57d0;
  _swift_allocObject(&UNK_009b57d0,0x20,7);
  *(undefined **)(unaff_x22 + 0x88) = puVar7;
  *(undefined8 *)(puVar7 + 0x10) = uVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar4;
  iVar1 = *piVar5;
  plVar8 = (long *)(ulong)(uint)piVar5[1];
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_001b0298;
                    /* WARNING: Could not recover jumptable at 0x001b0294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar3,uVar6,&UNK_007e1f90,puVar7);
  return;
}



/* Entry: 001b0298; end: 001b02f3;  */

void FUN_001b0298(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_001b02f4;
  }
  else {
    pcVar1 = FUN_001b036c;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 001b02f4; end: 001b036b;  */

void FUN_001b02f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(uVar4);
  _swift_release(uVar2);
  _swift_release(uVar3);
  __s10AppIntents12IntentResultPAAE6resultAA0cD9ContainerVys5NeverOA3HGyAIRszrlFZ(uVar5);
                    /* WARNING: Could not recover jumptable at 0x001b0368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b036c; end: 001b03cf;  */

void FUN_001b036c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(uVar4);
  _swift_release(uVar2);
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x001b03cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b03d0; end: 001b045b;  */

void FUN_001b03d0(qword param_1,undefined8 param_2,undefined8 param_3,qword param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  long unaff_x22;
  
  uVar2 = 0;
  __sScMMa();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  pcVar3 = section_00000068.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x20) = pcVar3;
  *(long *)pcVar3 = unaff_x22;
  *(code **)(pcVar3 + 8) = FUN_001b045c;
  *(qword *)(pcVar3 + 0x20) = param_1;
  *(undefined8 *)(pcVar3 + 0x28) = param_2;
  *(undefined8 *)(pcVar3 + 0x10) = param_3;
  *(qword *)(pcVar3 + 0x18) = param_4;
  uVar1 = 0;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(pcVar3 + 0x30) = uVar2;
  FUN_000421a4();
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(pcVar3 + 0x38) = uVar1;
  *(undefined8 *)(pcVar3 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001af694,uVar1,uVar2);
  return;
}



/* Entry: 001b045c; end: 001b04db;  */

void FUN_001b045c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(lVar3 + 0x28) = unaff_x20;
  _swift_task_dealloc(uVar1);
  FUN_000421a4();
  __sScA15unownedExecutorScevgTj(uVar4,uVar1);
  if (unaff_x20 == 0) {
    uVar2 = 0x1b1fa0;
  }
  else {
    uVar2 = 0x1b1fc4;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(uVar2,uVar4,uVar1);
  return;
}



/* Entry: 001b04dc; end: 001b04f7;  */

void FUN_001b04dc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000000af2e00 != -1) {
    _swift_once(0xaf2e00,FUN_001afab0);
  }
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceVMa();
  lVar2 = lVar1;
  FUN_00028010();
                    /* WARNING: Could not recover jumptable at 0x001b0550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 001b04f8; end: 001b0563;  */

void FUN_001b04f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  if (*param_4 != -1) {
    _swift_once(param_4,param_6);
  }
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceVMa();
  lVar2 = lVar1;
  FUN_00028010();
                    /* WARNING: Could not recover jumptable at 0x001b0550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 001b0564; end: 001b06a3;  */

void FUN_001b0564(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar2 = 0xaf2da8;
  func_0x000115a8(0xaf2da8,&UNK_007e1f20);
  lVar3 = 0;
  __s10AppIntents11IntentModesVMa();
  lVar10 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar9 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  _swift_allocObject(lVar2,uVar9 + lVar10 * 2,uVar8 | 7);
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  lVar1 = lVar2 + uVar9;
  __s10AppIntents11IntentModesV10backgroundACvgZ(lVar1);
  lVar4 = 0;
  __s10AppIntents11IntentModesV14ForegroundModeVMa();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar11 + 0x40));
  puVar5 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10AppIntents11IntentModesV14ForegroundModeV7dynamicAEvgZ(puVar5);
  __s10AppIntents11IntentModesV10foregroundyA2C14ForegroundModeVFZ(lVar1 + lVar10,puVar5);
  (**(code **)(lVar11 + 8))(puVar5,lVar4);
  lStack_58 = lVar2;
  FUN_001ae6a0();
  uVar6 = 0xaf2db8;
  func_0x000115a8(0xaf2db8,&UNK_007e1f28);
  uVar7 = uVar6;
  func_0x001ae6e4();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (param_1,&lStack_58,uVar6,uVar7,lVar3,puVar5);
  return;
}



/* Entry: 001b06a4; end: 001b06ab;  */

undefined8 FUN_001b06a4(void)

{
  return 0;
}



/* Entry: 001b06ac; end: 001b070f;  */

void FUN_001b06ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  dword *pdVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  pdVar3 = &section_00000068.reloff;
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar3;
  *(long *)pdVar3 = unaff_x22;
  *(code **)(pdVar3 + 2) = FUN_001b1f9c;
  *(undefined8 *)(pdVar3 + 0x16) = uVar1;
  *(undefined8 *)(pdVar3 + 0x18) = uVar2;
  *(undefined8 *)(pdVar3 + 0x14) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b01a8,0,0);
  return;
}



/* Entry: 001b0710; end: 001b075f;  */

void FUN_001b0710(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001b0e08();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 001b0760; end: 001b0d5b;  */

long FUN_001b0760(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_130 [8];
  long lStack_128;
  undefined4 uStack_11c;
  code *pcStack_118;
  ulong uStack_110;
  undefined1 *puStack_108;
  code *pcStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined4 uStack_cc;
  code *pcStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar1 = 0;
  __s10Foundation6LocaleVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSS10FoundationE17LocalizationValueVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar7 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0xaf2dc8;
  func_0x000115a8(0xaf2dc8,&UNK_007e1f30);
  lVar2 = 0;
  uStack_a8 = uVar3;
  __s10Foundation23LocalizedStringResourceVMa();
  lVar6 = *(long *)(lVar2 + -8);
  uStack_a0 = *(undefined8 *)(lVar6 + 0x40);
  lStack_e0 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_98 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
  lVar8 = lVar7 - uStack_98;
  lStack_128 = lVar8;
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lVar7,0x44492072657355,0xe700000000000000);
  puStack_108 = puVar4;
  __s10Foundation6LocaleV7currentACvgZ(puVar4);
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceV17BundleDescriptionOMa();
  uStack_b8 = *(undefined8 *)(*(long *)(lVar1 + -8) + 0x40);
  lStack_c0 = lVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_b0 = extraout_x12_00 + 0xfU & 0xfffffffffffffff0;
  lVar5 = lVar8 - uStack_b0;
  uStack_cc = *(undefined4 *)
               PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_00998e98
  ;
  pcStack_c8 = *(code **)(extraout_x8_01 + 0x68);
  (*pcStack_c8)(lVar5);
  __s10Foundation23LocalizedStringResourceV_5table6locale6bundle7commentACSSAAE17LocalizationValueV_SSSgAA6LocaleVAC17BundleDescriptionOs06StaticC0VSgtcfC
            (lVar8,lVar7,0x74726f6853707041,0xec00000073747563,puVar4,lVar5,0,0,0x100);
  lVar1 = 0xaf2dd0;
  func_0x000115a8(0xaf2dd0,&UNK_007e1f38);
  uStack_f0 = *(undefined8 *)(*(long *)(lVar1 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_d8 = extraout_x12_01 + 0xfU & 0xfffffffffffffff0;
  lVar5 = lVar5 - uStack_d8;
  pcStack_e8 = *(code **)(lVar6 + 0x38);
  (*pcStack_e8)(lVar5,1,1,lVar2);
  uStack_90 = 0;
  uStack_88 = 0;
  lVar1 = 0xaf2dd8;
  func_0x000115a8(0xaf2dd8,&UNK_007e1f40);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar5 - extraout_x8_02;
  lVar1 = 0;
  __sSS10AppIntentsE18IntentInputOptionsVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar9,1,1,lVar1);
  lVar1 = 0xaf2de0;
  func_0x000115a8(0xaf2de0,&UNK_007e1f48);
  lVar1 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_f8 = lVar1 + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar9 - uStack_f8;
  lVar6 = 0;
  __s10AppIntents12IntentDialogVMa();
  pcStack_100 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  (*pcStack_100)(lVar10,1,1,lVar6);
  lVar8 = 0;
  __s10AppIntents23InputConnectionBehaviorOMa();
  lVar1 = *(long *)(*(long *)(lVar8 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_110 = lVar1 + 0xfU & 0xfffffffffffffff0;
  lVar11 = lVar10 - uStack_110;
  uStack_11c = *(undefined4 *)PTR___s10AppIntents23InputConnectionBehaviorO7defaultyA2CmFWC_0099abd0
  ;
  pcStack_118 = *(code **)(extraout_x8_03 + 0x68);
  (*pcStack_118)(lVar11,uStack_11c,lVar8);
  lVar2 = lStack_128;
  __s10AppIntents15IntentParameterCAASS9ValueTypeRtzrlE5title11description7default12inputOptions07requestE6Dialog0J18ConnectionBehaviorACyxG10Foundation23LocalizedStringResourceV_AOSg09UnwrappedF0QzSgYtSSAAE0c5InputK0VSgAA0cM0VSgAA0unO0OYttcfC
            (lStack_128,lVar5,&uStack_90,lVar9,lVar10,lVar11);
  func_0x000115a8(0xaf2de8,&UNK_007e1f50);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = lVar11 - uStack_98;
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lVar7,0x6e49207261656c43,0xee006563616c5020);
  puVar4 = puStack_108;
  __s10Foundation6LocaleV7currentACvgZ(puStack_108);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = lVar11 - uStack_b0;
  (*pcStack_c8)(lVar5,uStack_cc,lStack_c0);
  __s10Foundation23LocalizedStringResourceV_5table6locale6bundle7commentACSSAAE17LocalizationValueV_SSSgAA6LocaleVAC17BundleDescriptionOs06StaticC0VSgtcfC
            (lVar11,lVar7,0x74726f6853707041,0xec00000073747563,puVar4,lVar5,0,0,0x100);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = lVar5 - uStack_d8;
  (*pcStack_e8)(lVar5,1,1,lStack_e0);
  uStack_90 = CONCAT71(uStack_90._1_7_,2);
  lVar1 = 0xaf2df0;
  func_0x000115a8(0xaf2df0,&UNK_007e1f58);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar5 - extraout_x8_04;
  lVar1 = 0;
  __sSb10AppIntentsE17IntentDisplayNameVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar7,1,1,lVar1);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = lVar7 - uStack_f8;
  (*pcStack_100)(lVar9,1,1,lVar6);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar1 = lVar9 - uStack_110;
  (*pcStack_118)(lVar1,uStack_11c,lVar8);
  __s10AppIntents15IntentParameterCAASb9ValueTypeRtzrlE5title11description7default11displayName07requestE6Dialog23inputConnectionBehaviorACyxG10Foundation23LocalizedStringResourceV_AOSg09UnwrappedF0QzSgYtSbAAE0c7DisplayK0VSgAA0cM0VSgAA05InputoP0OYttcfC
            (lVar11,lVar5,&uStack_90,lVar7,lVar9,lVar1);
  func_0x000115a8(0xaf2df8,&UNK_007e1f60);
  uVar3 = 0;
  __s10AppIntents0A17DependencyManagerCMa();
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  __s10AppIntents0A17DependencyManagerC6sharedACvgZ();
  __s10AppIntents0A10DependencyC3key7manager7defaultACyxGs11AnyHashableVSg_AA0aC7ManagerCxyXAtcfC
            (&uStack_90,uVar3,FUN_001ae734,0);
  return lVar2;
}



/* Entry: 001b0d5c; end: 001b0d8f;  */

void FUN_001b0d5c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001b0d90; end: 001b0e07;  */

void FUN_001b0d90(undefined8 param_1,undefined8 param_2)

{
  qword qVar1;
  qword qVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long unaff_x20;
  qword qVar7;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  qVar1 = *(qword *)(unaff_x20 + 0x18);
  qVar7 = *(qword *)(unaff_x20 + 0x20);
  pcVar6 = segment_command_00000020.segname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar6;
  *(long *)pcVar6 = unaff_x22;
  *(qword *)(pcVar6 + 8) = 0x1b1ff4;
  qVar2 = 0;
  __sScMMa();
  *(qword *)(pcVar6 + 0x10) = qVar2;
  __sScM6sharedScMvgZ();
  *(qword *)(pcVar6 + 0x18) = qVar2;
  pcVar3 = section_00000068.sectname + 8;
  _swift_task_alloc();
  *(char **)(pcVar6 + 0x20) = pcVar3;
  *(char **)pcVar3 = pcVar6;
  *(code **)(pcVar3 + 8) = FUN_001af238;
  *(undefined8 *)(pcVar3 + 0x28) = param_1;
  *(undefined8 *)(pcVar3 + 0x30) = param_2;
  *(undefined8 *)(pcVar3 + 0x10) = uVar5;
  *(qword *)(pcVar3 + 0x18) = qVar1;
  *(qword *)(pcVar3 + 0x20) = qVar7;
  uVar4 = 0;
  __sScMMa();
  uVar5 = uVar4;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(pcVar3 + 0x38) = uVar5;
  FUN_000421a4();
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(pcVar3 + 0x40) = uVar4;
  *(undefined8 *)(pcVar3 + 0x48) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001af394,uVar4,uVar5);
  return;
}



/* Entry: 001b0e08; end: 001b1193;  */

undefined1  [16] FUN_001b0e08(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar1 = 0;
  __s10Foundation6LocaleVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar7 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSS10FoundationE17LocalizationValueVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar6 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000115a8(0xaf2dc8,&UNK_007e1f30);
  lVar2 = 0;
  __s10Foundation23LocalizedStringResourceVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  lVar5 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lVar6,0x74616e6974736544,0xef4c5255206e6f69);
  __s10Foundation6LocaleV7currentACvgZ(lVar7);
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceV17BundleDescriptionOMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar8 = lVar5 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (lVar8,*(undefined4 *)
                    PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_00998e98
            );
  __s10Foundation23LocalizedStringResourceV_5table6locale6bundle7commentACSSAAE17LocalizationValueV_SSSgAA6LocaleVAC17BundleDescriptionOs06StaticC0VSgtcfC
            (lVar5,lVar6,0x74726f6853707041,0xec00000073747563,lVar7,lVar8,0,0,0x100);
  lVar1 = 0xaf2dd0;
  func_0x000115a8(0xaf2dd0,&UNK_007e1f38);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_03;
  (**(code **)(lVar9 + 0x38))(lVar8,1,1,lVar2);
  uStack_80 = 0;
  uStack_78 = 0;
  lVar1 = 0xaf2dd8;
  func_0x000115a8(0xaf2dd8,&UNK_007e1f40);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = lVar8 - extraout_x8_04;
  lVar1 = 0;
  __sSS10AppIntentsE18IntentInputOptionsVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar2,1,1,lVar1);
  lVar1 = 0xaf2de0;
  func_0x000115a8(0xaf2de0,&UNK_007e1f48);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar2 - extraout_x8_05;
  lVar1 = 0;
  __s10AppIntents12IntentDialogVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar7,1,1,lVar1);
  lVar1 = 0;
  __s10AppIntents23InputConnectionBehaviorOMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar7 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12_00 + 0x68))
            (lVar1,*(undefined4 *)
                    PTR___s10AppIntents23InputConnectionBehaviorO7defaultyA2CmFWC_0099abd0);
  __s10AppIntents15IntentParameterCAASS9ValueTypeRtzrlE5title11description7default12inputOptions07requestE6Dialog0J18ConnectionBehaviorACyxG10Foundation23LocalizedStringResourceV_AOSg09UnwrappedF0QzSgYtSSAAE0c5InputK0VSgAA0cM0VSgAA0unO0OYttcfC
            (lVar5,lVar8,&uStack_80,lVar2,lVar7,lVar1);
  func_0x000115a8(0xaf2df8,&UNK_007e1f60);
  uVar3 = 0;
  __s10AppIntents0A17DependencyManagerCMa(0);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  __s10AppIntents0A17DependencyManagerC6sharedACvgZ();
  puVar4 = &uStack_80;
  __s10AppIntents0A10DependencyC3key7manager7defaultACyxGs11AnyHashableVSg_AA0aC7ManagerCxyXAtcfC
            (puVar4,uVar3,FUN_001afc1c,0);
  auVar10._8_8_ = puVar4;
  auVar10._0_8_ = lVar5;
  return auVar10;
}



/* Entry: 001b1194; end: 001b11bf;  */

void FUN_001b1194(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001b11c0; end: 001b1227;  */

void FUN_001b11c0(qword param_1,undefined8 param_2)

{
  qword qVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  qword qVar4;
  char *pcVar5;
  char *pcVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  qVar1 = *(qword *)(unaff_x20 + 0x18);
  pcVar6 = segment_command_00000020.segname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar6;
  *(long *)pcVar6 = unaff_x22;
  *(qword *)(pcVar6 + 8) = 0x1b1ff0;
  qVar4 = 0;
  __sScMMa();
  *(qword *)(pcVar6 + 0x10) = qVar4;
  __sScM6sharedScMvgZ();
  *(qword *)(pcVar6 + 0x18) = qVar4;
  pcVar5 = section_00000068.sectname + 8;
  _swift_task_alloc();
  *(char **)(pcVar6 + 0x20) = pcVar5;
  *(char **)pcVar5 = pcVar6;
  *(code **)(pcVar5 + 8) = FUN_001b045c;
  *(qword *)(pcVar5 + 0x20) = param_1;
  *(undefined8 *)(pcVar5 + 0x28) = param_2;
  *(undefined8 *)(pcVar5 + 0x10) = uVar3;
  *(qword *)(pcVar5 + 0x18) = qVar1;
  uVar2 = 0;
  __sScMMa();
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(pcVar5 + 0x30) = uVar3;
  FUN_000421a4();
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(pcVar5 + 0x38) = uVar2;
  *(undefined8 *)(pcVar5 + 0x40) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001af694,uVar2,uVar3);
  return;
}



/* Entry: 001b1228; end: 001b122b;  */

void FUN_001b1228(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1fe8;
  _swift_getWitnessTable
            (&UNK_007e1fe8,&__s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentVN);
  puRam0000000000af2e08 = puVar1;
  return;
}



/* Entry: 001b122c; end: 001b126b;  */

void FUN_001b122c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e1fe8;
  _swift_getWitnessTable
            (&UNK_007e1fe8,&__s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentVN);
  puRam0000000000af2e08 = puVar1;
  return;
}



/* Entry: 001b126c; end: 001b126f;  */

void FUN_001b126c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &__s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentV0bC00bH0AAMc;
  _swift_getWitnessTable
            (&__s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentV0bC00bH0AAMc,
             &__s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentVN);
  puRam0000000000af2e10 = puVar1;
  return;
}



/* Entry: 001b1270; end: 001b12af;  */

void FUN_001b1270(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &__s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentV0bC00bH0AAMc;
  _swift_getWitnessTable
            (&__s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentV0bC00bH0AAMc,
             &__s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentVN);
  puRam0000000000af2e10 = puVar1;
  return;
}



/* Entry: 001b12b0; end: 001b12b3;  */

void FUN_001b12b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e20b0;
  _swift_getWitnessTable
            (&UNK_007e20b0,&__s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentVN);
  puRam0000000000af2e18 = puVar1;
  return;
}



/* Entry: 001b12b4; end: 001b12f3;  */

void FUN_001b12b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e20b0;
  _swift_getWitnessTable
            (&UNK_007e20b0,&__s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentVN);
  puRam0000000000af2e18 = puVar1;
  return;
}



/* Entry: 001b12f4; end: 001b12f7;  */

void FUN_001b12f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e20d8;
  _swift_getWitnessTable
            (&UNK_007e20d8,&__s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentVN);
  puRam0000000000af2e20 = puVar1;
  return;
}



/* Entry: 001b12f8; end: 001b1337;  */

void FUN_001b12f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e20d8;
  _swift_getWitnessTable
            (&UNK_007e20d8,&__s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentVN);
  puRam0000000000af2e20 = puVar1;
  return;
}



/* Entry: 001b1338; end: 001b1357;  */

void FUN_001b1338(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_00846030,1);
  return;
}



/* Entry: 001b1358; end: 001b1397;  */

void FUN_001b1358(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2144;
  _swift_getWitnessTable
            (&UNK_007e2144,&__s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentVN);
  puRam0000000000af2e28 = puVar1;
  return;
}



/* Entry: 001b1398; end: 001b139b;  */

void FUN_001b1398(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &__s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentV0bC00bI0AAMc;
  _swift_getWitnessTable
            (&__s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentV0bC00bI0AAMc,
             &__s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentVN);
  puRam0000000000af2e30 = puVar1;
  return;
}



/* Entry: 001b139c; end: 001b13db;  */

void FUN_001b139c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &__s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentV0bC00bI0AAMc;
  _swift_getWitnessTable
            (&__s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentV0bC00bI0AAMc,
             &__s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentVN);
  puRam0000000000af2e30 = puVar1;
  return;
}



/* Entry: 001b13dc; end: 001b13df;  */

void FUN_001b13dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2210;
  _swift_getWitnessTable
            (&UNK_007e2210,&__s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentVN);
  puRam0000000000af2e38 = puVar1;
  return;
}



/* Entry: 001b13e0; end: 001b141f;  */

void FUN_001b13e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2210;
  _swift_getWitnessTable
            (&UNK_007e2210,&__s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentVN);
  puRam0000000000af2e38 = puVar1;
  return;
}



/* Entry: 001b1420; end: 001b1423;  */

void FUN_001b1420(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2238;
  _swift_getWitnessTable
            (&UNK_007e2238,&__s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentVN);
  puRam0000000000af2e40 = puVar1;
  return;
}



/* Entry: 001b1424; end: 001b1463;  */

void FUN_001b1424(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2e40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2238;
  _swift_getWitnessTable
            (&UNK_007e2238,&__s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentVN);
  puRam0000000000af2e40 = puVar1;
  return;
}



/* Entry: 001b1464; end: 001b147f;  */

void FUN_001b1464(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_00846058,1);
  return;
}



/* Entry: 001b1480; end: 001b14bf;  */

void FUN_001b1480(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (*param_4)();
  uStack_30 = param_2;
  uStack_28 = param_1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_0099ab08,1);
  return;
}



/* Entry: 001b14c0; end: 001b14c3;  */

undefined8 * FUN_001b14c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_retain();
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Entry: 001b14c4; end: 001b14f3;  */

void FUN_001b14c4(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_1[2]);
  return;
}



/* Entry: 001b14f4; end: 001b15b3;  */

undefined8 * FUN_001b14f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_retain();
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Entry: 001b15b4; end: 001b15ff;  */

undefined8 * FUN_001b15b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 001b1600; end: 001b169b;  */

int FUN_001b1600(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 001b169c; end: 001b16f7;  */

void FUN_001b169c(undefined8 *param_1)

{
  _swift_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_1[1]);
  return;
}



/* Entry: 001b16f8; end: 001b1753;  */

undefined8 * FUN_001b16f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 001b1754; end: 001b178f;  */

undefined8 * FUN_001b1754(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 001b1790; end: 001b1827;  */

int FUN_001b1790(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 001b1828; end: 001b1877;  */

void FUN_001b1828(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000af2e48 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xaf2e50;
  FUN_00016c74(0xaf2e50,&UNK_007e22e0);
  puVar2 = PTR___s10AppIntents21IntentResultContainerVyxq_q0_q1_GAA0cD0AAMc_0099abc8;
  _swift_getWitnessTable
            (PTR___s10AppIntents21IntentResultContainerVyxq_q0_q1_GAA0cD0AAMc_0099abc8,uVar1);
  puRam0000000000af2e48 = puVar2;
  return;
}



/* Entry: 001b1878; end: 001b18bf;  */

undefined8 FUN_001b1878(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xaf2de0;
  func_0x000115a8(0xaf2de0,&UNK_007e1f48);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 001b18c0; end: 001b190f;  */

void FUN_001b18c0(undefined1 param_1)

{
  char *pcVar1;
  dword *pdVar2;
  long lVar3;
  ulong uVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  pcVar1 = section_00000068.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar1;
  *(long *)pcVar1 = unaff_x22;
  pcVar1[8] = '\0';
  pcVar1[9] = ' ';
  pcVar1[10] = '\x1b';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1[0x68] = param_1;
  pdVar2 = &section_00000108.reserved2;
  _swift_task_alloc();
  *(dword **)(pcVar1 + 0x40) = pdVar2;
  *(char **)pdVar2 = pcVar1;
  *(undefined8 *)(pdVar2 + 2) = 0x1b2950;
  *(char **)(pdVar2 + 0x40) = pcVar1 + 0x10;
  *(undefined8 *)(pdVar2 + 0x42) = unaff_x20;
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  *(long *)(pdVar2 + 0x44) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(pdVar2 + 0x46) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar2 + 0x48) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b903c,0,0);
  return;
}



/* Entry: 001b1910; end: 001b1913;  */

void FUN_001b1910(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
    _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
    _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001b1914; end: 001b19bb;  */

void FUN_001b1914(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar2 = section_000001a8.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar2;
  *(long *)pcVar2 = unaff_x22;
  pcVar2[8] = -8;
  pcVar2[9] = '\x1f';
  pcVar2[10] = '\x1b';
  pcVar2[0xb] = '\0';
  pcVar2[0xc] = '\0';
  pcVar2[0xd] = '\0';
  pcVar2[0xe] = '\0';
  pcVar2[0xf] = '\0';
  *(undefined8 *)(pcVar2 + 0xb0) = uVar6;
  *(long *)(pcVar2 + 0xb8) = unaff_x20 + 0x28;
  *(undefined8 *)(pcVar2 + 0xa0) = uVar5;
  *(undefined8 *)(pcVar2 + 0xa8) = uVar1;
  *(undefined8 *)(pcVar2 + 0x90) = param_4;
  *(undefined8 *)(pcVar2 + 0x98) = param_5;
  pcVar2[0x1a0] = param_3;
  *(undefined8 *)(pcVar2 + 0x80) = param_1;
  *(undefined8 *)(pcVar2 + 0x88) = param_2;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(pcVar2 + 0xc0) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(pcVar2 + 200) = uVar5;
  *(undefined8 *)(pcVar2 + 0xd0) = *(undefined8 *)(unaff_x20 + 0x50);
  lVar3 = 0;
  __sScEMa();
  *(long *)(pcVar2 + 0xd8) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(pcVar2 + 0xe0) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar2 + 0xe8) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b2bc8,0,0);
  return;
}



/* Entry: 001b19bc; end: 001b19bf;  */

void FUN_001b19bc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001b19c0; end: 001b1a4f;  */

void FUN_001b19c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar3 = section_000000b8.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar3;
  *(long *)pcVar3 = unaff_x22;
  pcVar3[8] = -4;
  pcVar3[9] = '\x1f';
  pcVar3[10] = '\x1b';
  pcVar3[0xb] = '\0';
  pcVar3[0xc] = '\0';
  pcVar3[0xd] = '\0';
  pcVar3[0xe] = '\0';
  pcVar3[0xf] = '\0';
  *(undefined8 *)(pcVar3 + 0x70) = uVar2;
  *(undefined8 *)(pcVar3 + 0x78) = uVar6;
  *(undefined8 *)(pcVar3 + 0x60) = param_4;
  *(undefined8 *)(pcVar3 + 0x68) = uVar1;
  *(undefined8 *)(pcVar3 + 0x50) = param_2;
  *(undefined8 *)(pcVar3 + 0x58) = param_3;
  *(undefined8 *)(pcVar3 + 0x48) = param_1;
  lVar4 = 0;
  __sScEMa();
  *(long *)(pcVar3 + 0x80) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(pcVar3 + 0x88) = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar3 + 0x90) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b3e7c,0,0);
  return;
}



/* Entry: 001b1a50; end: 001b1a9f;  */

void FUN_001b1a50(undefined1 param_1)

{
  char *pcVar1;
  dword *pdVar2;
  long lVar3;
  ulong uVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  pcVar1 = section_00000068.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar1;
  *(long *)pcVar1 = unaff_x22;
  *(code **)(pcVar1 + 8) = FUN_001b1aa0;
  pcVar1[0x68] = param_1;
  pdVar2 = &section_00000108.reserved2;
  _swift_task_alloc();
  *(dword **)(pcVar1 + 0x40) = pdVar2;
  *(char **)pdVar2 = pcVar1;
  *(undefined8 *)(pdVar2 + 2) = 0x1b2950;
  *(char **)(pdVar2 + 0x40) = pcVar1 + 0x10;
  *(undefined8 *)(pdVar2 + 0x42) = unaff_x20;
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  *(long *)(pdVar2 + 0x44) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(pdVar2 + 0x46) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar2 + 0x48) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b903c,0,0);
  return;
}



/* Entry: 001b1aa0; end: 001b1adb;  */

void FUN_001b1aa0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001b1ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001b1adc; end: 001b1b83;  */

void FUN_001b1adc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar2 = section_000001a8.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar2;
  *(long *)pcVar2 = unaff_x22;
  pcVar2[8] = '\x04';
  pcVar2[9] = ' ';
  pcVar2[10] = '\x1b';
  pcVar2[0xb] = '\0';
  pcVar2[0xc] = '\0';
  pcVar2[0xd] = '\0';
  pcVar2[0xe] = '\0';
  pcVar2[0xf] = '\0';
  *(undefined8 *)(pcVar2 + 0xb0) = uVar6;
  *(long *)(pcVar2 + 0xb8) = unaff_x20 + 0x28;
  *(undefined8 *)(pcVar2 + 0xa0) = uVar5;
  *(undefined8 *)(pcVar2 + 0xa8) = uVar1;
  *(undefined8 *)(pcVar2 + 0x90) = param_4;
  *(undefined8 *)(pcVar2 + 0x98) = param_5;
  pcVar2[0x1a0] = param_3;
  *(undefined8 *)(pcVar2 + 0x80) = param_1;
  *(undefined8 *)(pcVar2 + 0x88) = param_2;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(pcVar2 + 0xc0) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(pcVar2 + 200) = uVar5;
  *(undefined8 *)(pcVar2 + 0xd0) = *(undefined8 *)(unaff_x20 + 0x50);
  lVar3 = 0;
  __sScEMa();
  *(long *)(pcVar2 + 0xd8) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(pcVar2 + 0xe0) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar2 + 0xe8) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b2bc8,0,0);
  return;
}



/* Entry: 001b1b84; end: 001b1c13;  */

void FUN_001b1b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar3 = section_000000b8.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar3;
  *(long *)pcVar3 = unaff_x22;
  pcVar3[8] = '\b';
  pcVar3[9] = ' ';
  pcVar3[10] = '\x1b';
  pcVar3[0xb] = '\0';
  pcVar3[0xc] = '\0';
  pcVar3[0xd] = '\0';
  pcVar3[0xe] = '\0';
  pcVar3[0xf] = '\0';
  *(undefined8 *)(pcVar3 + 0x70) = uVar2;
  *(undefined8 *)(pcVar3 + 0x78) = uVar6;
  *(undefined8 *)(pcVar3 + 0x60) = param_4;
  *(undefined8 *)(pcVar3 + 0x68) = uVar1;
  *(undefined8 *)(pcVar3 + 0x50) = param_2;
  *(undefined8 *)(pcVar3 + 0x58) = param_3;
  *(undefined8 *)(pcVar3 + 0x48) = param_1;
  lVar4 = 0;
  __sScEMa();
  *(long *)(pcVar3 + 0x80) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(pcVar3 + 0x88) = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar3 + 0x90) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b3e7c,0,0);
  return;
}



/* Entry: 001b1c14; end: 001b1c63;  */

void FUN_001b1c14(undefined1 param_1)

{
  char *pcVar1;
  dword *pdVar2;
  long lVar3;
  ulong uVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  pcVar1 = section_00000068.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar1;
  *(long *)pcVar1 = unaff_x22;
  pcVar1[8] = '\f';
  pcVar1[9] = ' ';
  pcVar1[10] = '\x1b';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1[0x68] = param_1;
  pdVar2 = &section_00000108.reserved2;
  _swift_task_alloc();
  *(dword **)(pcVar1 + 0x40) = pdVar2;
  *(char **)pdVar2 = pcVar1;
  *(undefined8 *)(pdVar2 + 2) = 0x1b2950;
  *(char **)(pdVar2 + 0x40) = pcVar1 + 0x10;
  *(undefined8 *)(pdVar2 + 0x42) = unaff_x20;
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  *(long *)(pdVar2 + 0x44) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(pdVar2 + 0x46) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar2 + 0x48) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b903c,0,0);
  return;
}



/* Entry: 001b1c64; end: 001b1d0b;  */

void FUN_001b1c64(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar2 = section_000001a8.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar2;
  *(long *)pcVar2 = unaff_x22;
  pcVar2[8] = '\x10';
  pcVar2[9] = ' ';
  pcVar2[10] = '\x1b';
  pcVar2[0xb] = '\0';
  pcVar2[0xc] = '\0';
  pcVar2[0xd] = '\0';
  pcVar2[0xe] = '\0';
  pcVar2[0xf] = '\0';
  *(undefined8 *)(pcVar2 + 0xb0) = uVar6;
  *(long *)(pcVar2 + 0xb8) = unaff_x20 + 0x28;
  *(undefined8 *)(pcVar2 + 0xa0) = uVar5;
  *(undefined8 *)(pcVar2 + 0xa8) = uVar1;
  *(undefined8 *)(pcVar2 + 0x90) = param_4;
  *(undefined8 *)(pcVar2 + 0x98) = param_5;
  pcVar2[0x1a0] = param_3;
  *(undefined8 *)(pcVar2 + 0x80) = param_1;
  *(undefined8 *)(pcVar2 + 0x88) = param_2;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(pcVar2 + 0xc0) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(pcVar2 + 200) = uVar5;
  *(undefined8 *)(pcVar2 + 0xd0) = *(undefined8 *)(unaff_x20 + 0x50);
  lVar3 = 0;
  __sScEMa();
  *(long *)(pcVar2 + 0xd8) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(pcVar2 + 0xe0) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar2 + 0xe8) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b2bc8,0,0);
  return;
}



/* Entry: 001b1d0c; end: 001b1d9b;  */

void FUN_001b1d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar3 = section_000000b8.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar3;
  *(long *)pcVar3 = unaff_x22;
  pcVar3[8] = '\x14';
  pcVar3[9] = ' ';
  pcVar3[10] = '\x1b';
  pcVar3[0xb] = '\0';
  pcVar3[0xc] = '\0';
  pcVar3[0xd] = '\0';
  pcVar3[0xe] = '\0';
  pcVar3[0xf] = '\0';
  *(undefined8 *)(pcVar3 + 0x70) = uVar2;
  *(undefined8 *)(pcVar3 + 0x78) = uVar6;
  *(undefined8 *)(pcVar3 + 0x60) = param_4;
  *(undefined8 *)(pcVar3 + 0x68) = uVar1;
  *(undefined8 *)(pcVar3 + 0x50) = param_2;
  *(undefined8 *)(pcVar3 + 0x58) = param_3;
  *(undefined8 *)(pcVar3 + 0x48) = param_1;
  lVar4 = 0;
  __sScEMa();
  *(long *)(pcVar3 + 0x80) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(pcVar3 + 0x88) = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar3 + 0x90) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b3e7c,0,0);
  return;
}



/* Entry: 001b1d9c; end: 001b1deb;  */

void FUN_001b1d9c(undefined1 param_1)

{
  char *pcVar1;
  dword *pdVar2;
  long lVar3;
  ulong uVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  pcVar1 = section_00000068.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar1;
  *(long *)pcVar1 = unaff_x22;
  pcVar1[8] = '\x18';
  pcVar1[9] = ' ';
  pcVar1[10] = '\x1b';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1[0x68] = param_1;
  pdVar2 = &section_00000108.reserved2;
  _swift_task_alloc();
  *(dword **)(pcVar1 + 0x40) = pdVar2;
  *(char **)pdVar2 = pcVar1;
  *(undefined8 *)(pdVar2 + 2) = 0x1b2950;
  *(char **)(pdVar2 + 0x40) = pcVar1 + 0x10;
  *(undefined8 *)(pdVar2 + 0x42) = unaff_x20;
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  *(long *)(pdVar2 + 0x44) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(pdVar2 + 0x46) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar2 + 0x48) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b903c,0,0);
  return;
}



/* Entry: 001b1dec; end: 001b1e37;  */

void FUN_001b1dec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
    _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
    _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001b1e38; end: 001b1edf;  */

void FUN_001b1e38(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar2 = section_000001a8.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar2;
  *(long *)pcVar2 = unaff_x22;
  pcVar2[8] = '\x1c';
  pcVar2[9] = ' ';
  pcVar2[10] = '\x1b';
  pcVar2[0xb] = '\0';
  pcVar2[0xc] = '\0';
  pcVar2[0xd] = '\0';
  pcVar2[0xe] = '\0';
  pcVar2[0xf] = '\0';
  *(undefined8 *)(pcVar2 + 0xb0) = uVar6;
  *(long *)(pcVar2 + 0xb8) = unaff_x20 + 0x28;
  *(undefined8 *)(pcVar2 + 0xa0) = uVar5;
  *(undefined8 *)(pcVar2 + 0xa8) = uVar1;
  *(undefined8 *)(pcVar2 + 0x90) = param_4;
  *(undefined8 *)(pcVar2 + 0x98) = param_5;
  pcVar2[0x1a0] = param_3;
  *(undefined8 *)(pcVar2 + 0x80) = param_1;
  *(undefined8 *)(pcVar2 + 0x88) = param_2;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(pcVar2 + 0xc0) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(pcVar2 + 200) = uVar5;
  *(undefined8 *)(pcVar2 + 0xd0) = *(undefined8 *)(unaff_x20 + 0x50);
  lVar3 = 0;
  __sScEMa();
  *(long *)(pcVar2 + 0xd8) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(pcVar2 + 0xe0) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar2 + 0xe8) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b2bc8,0,0);
  return;
}



/* Entry: 001b1ee0; end: 001b1f0b;  */

void FUN_001b1ee0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001b1f0c; end: 001b1f9b;  */

void FUN_001b1f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar3 = section_000000b8.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar3;
  *(long *)pcVar3 = unaff_x22;
  pcVar3[8] = ' ';
  pcVar3[9] = ' ';
  pcVar3[10] = '\x1b';
  pcVar3[0xb] = '\0';
  pcVar3[0xc] = '\0';
  pcVar3[0xd] = '\0';
  pcVar3[0xe] = '\0';
  pcVar3[0xf] = '\0';
  *(undefined8 *)(pcVar3 + 0x70) = uVar2;
  *(undefined8 *)(pcVar3 + 0x78) = uVar6;
  *(undefined8 *)(pcVar3 + 0x60) = param_4;
  *(undefined8 *)(pcVar3 + 0x68) = uVar1;
  *(undefined8 *)(pcVar3 + 0x50) = param_2;
  *(undefined8 *)(pcVar3 + 0x58) = param_3;
  *(undefined8 *)(pcVar3 + 0x48) = param_1;
  lVar4 = 0;
  __sScEMa();
  *(long *)(pcVar3 + 0x80) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(pcVar3 + 0x88) = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar3 + 0x90) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b3e7c,0,0);
  return;
}



/* Entry: 001b1f9c; end: 001b203b;  */

void FUN_001b1f9c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001afa58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001b203c; end: 001b209b;  */

void FUN_001b203c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  __s10Foundation23LocalizedStringResourceVMa(0);
  FUN_00028504();
  FUN_00028010(uVar1,0xb65bc0);
  __s10Foundation23LocalizedStringResourceV13stringLiteralACSS_tcfC
            (uVar1,0xd000000000000010,0x80000000008b9680);
  return;
}



/* Entry: 001b209c; end: 001b2107;  */

void FUN_001b209c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  FUN_000421a4();
  __sScA15unownedExecutorScevgTj(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b2108,uVar1,uVar2);
  return;
}



/* Entry: 001b2108; end: 001b2143;  */

void FUN_001b2108(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
  __s10AppIntents12IntentResultPAAE6resultAA0cD9ContainerVys5NeverOA3HGyAIRszrlFZ(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001b2140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b2144; end: 001b21b3;  */

void FUN_001b2144(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000000af2e58 != -1) {
    _swift_once(0xaf2e58,FUN_001b203c);
  }
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceVMa();
  lVar2 = lVar1;
  FUN_00028010();
                    /* WARNING: Could not recover jumptable at 0x001b2198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 001b21b4; end: 001b2233;  */

uint FUN_001b21b4(uint param_1)

{
  __s10AppIntents0A6IntentPAAE04openA7WhenRunSbvgZ();
  return param_1 & 1;
}


