/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001b7e04; end: 001b7e43;  */

void FUN_001b7e04(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af30e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2ed8;
  _swift_getWitnessTable(&UNK_007e2ed8,&UNK_009b63d0);
  puRam0000000000af30e8 = puVar1;
  return;
}



/* Entry: 001b7e44; end: 001b7fb7;  */

void FUN_001b7e44(void)

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
  FUN_00028010(uVar2,0xb65c50);
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lVar4,0x6d654d206e65704f,0xed0000736569726f);
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



/* Entry: 001b7fb8; end: 001b8027;  */

void FUN_001b7fb8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000000af30f0 != -1) {
    _swift_once(0xaf30f0,FUN_001b7e44);
  }
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceVMa();
  lVar2 = lVar1;
  FUN_00028010();
                    /* WARNING: Could not recover jumptable at 0x001b800c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 001b8028; end: 001b802f;  */

undefined8 FUN_001b8028(void)

{
  return 1;
}



/* Entry: 001b8030; end: 001b8097;  */

void FUN_001b8030(void)

{
  __s10AppIntents0A6IntentPAAE14supportedModesAA0cE0VvgZ();
  return;
}



/* Entry: 001b8098; end: 001b80b3;  */

void FUN_001b8098(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b80b4,0,0);
  return;
}



/* Entry: 001b80b4; end: 001b8183;  */

void FUN_001b80b4(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  __s10AppIntents0A10DependencyC12wrappedValuexvg(unaff_x22 + 0x10);
  piVar2 = *(int **)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x38);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1b8128;
                    /* WARNING: Could not recover jumptable at 0x001b8124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(2);
  return;
}



/* Entry: 001b8184; end: 001b81df;  */

void FUN_001b8184(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_release(uVar1);
  _swift_release(uVar2);
  __s10AppIntents12IntentResultPAAE6resultAA0cD9ContainerVys5NeverOA3HGyAIRszrlFZ(uVar3);
                    /* WARNING: Could not recover jumptable at 0x001b81dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b81e0; end: 001b8227;  */

void FUN_001b81e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_release(uVar1);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x001b8224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b8228; end: 001b82a7;  */

void FUN_001b8228(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = &uStack_60;
  func_0x000115a8(0xaf2df8,&UNK_007e1f60);
  uVar1 = 0;
  __s10AppIntents0A17DependencyManagerCMa(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  __s10AppIntents0A17DependencyManagerC6sharedACvgZ();
  __s10AppIntents0A10DependencyC3key7manager7defaultACyxGs11AnyHashableVSg_AA0aC7ManagerCxyXAtcfC
            (&uStack_60,uVar1,0x1b82e4,0);
  *param_1 = puVar2;
  return;
}



/* Entry: 001b82a8; end: 001b82d3;  */

void FUN_001b82a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_001b7e04();
  __s10AppIntents0A6IntentPAAE20persistentIdentifierSSvgZ(param_1,uVar1);
  return;
}



/* Entry: 001b82d4; end: 001b830f;  */

undefined1  [16] FUN_001b82d4(void)

{
  return ZEXT816(0x9b63d0);
}



/* Entry: 001b8310; end: 001b834f;  */

void FUN_001b8310(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af30f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e3080;
  _swift_getWitnessTable(&UNK_007e3080,&UNK_009b6498);
  puRam0000000000af30f8 = puVar1;
  return;
}



/* Entry: 001b8350; end: 001b8353;  */

void FUN_001b8350(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3100 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e30a8;
  _swift_getWitnessTable(&UNK_007e30a8,&UNK_009b6498);
  puRam0000000000af3100 = puVar1;
  return;
}



/* Entry: 001b8354; end: 001b8393;  */

void FUN_001b8354(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3100 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e30a8;
  _swift_getWitnessTable(&UNK_007e30a8,&UNK_009b6498);
  puRam0000000000af3100 = puVar1;
  return;
}



/* Entry: 001b8394; end: 001b83a3;  */

void FUN_001b8394(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_00846344,1);
  return;
}



/* Entry: 001b83a4; end: 001b83e3;  */

void FUN_001b83a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_001b83e4();
  uStack_30 = param_2;
  uStack_28 = param_1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_0099ab08,1);
  return;
}



/* Entry: 001b83e4; end: 001b8423;  */

void FUN_001b83e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2fe8;
  _swift_getWitnessTable(&UNK_007e2fe8,&UNK_009b6498);
  puRam0000000000af3108 = puVar1;
  return;
}



/* Entry: 001b8424; end: 001b8597;  */

void FUN_001b8424(void)

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
  FUN_00028010(uVar2,0xb65c68);
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lVar4,0x6f7053206e65704f,0xee00746867696c74);
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



/* Entry: 001b8598; end: 001b8607;  */

void FUN_001b8598(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000000af3110 != -1) {
    _swift_once(0xaf3110,FUN_001b8424);
  }
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceVMa();
  lVar2 = lVar1;
  FUN_00028010();
                    /* WARNING: Could not recover jumptable at 0x001b85ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 001b8608; end: 001b860f;  */

undefined8 FUN_001b8608(void)

{
  return 1;
}



/* Entry: 001b8610; end: 001b8677;  */

void FUN_001b8610(void)

{
  __s10AppIntents0A6IntentPAAE14supportedModesAA0cE0VvgZ();
  return;
}



/* Entry: 001b8678; end: 001b8693;  */

void FUN_001b8678(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b8694,0,0);
  return;
}



/* Entry: 001b8694; end: 001b8763;  */

void FUN_001b8694(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  __s10AppIntents0A10DependencyC12wrappedValuexvg(unaff_x22 + 0x10);
  piVar2 = *(int **)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x38);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1b8708;
                    /* WARNING: Could not recover jumptable at 0x001b8704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(4);
  return;
}



/* Entry: 001b8764; end: 001b87bf;  */

void FUN_001b8764(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_release(uVar1);
  _swift_release(uVar2);
  __s10AppIntents12IntentResultPAAE6resultAA0cD9ContainerVys5NeverOA3HGyAIRszrlFZ(uVar3);
                    /* WARNING: Could not recover jumptable at 0x001b87bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b87c0; end: 001b8807;  */

void FUN_001b87c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_release(uVar1);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x001b8804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b8808; end: 001b8887;  */

void FUN_001b8808(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = &uStack_60;
  func_0x000115a8(0xaf2df8,&UNK_007e1f60);
  uVar1 = 0;
  __s10AppIntents0A17DependencyManagerCMa(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  __s10AppIntents0A17DependencyManagerC6sharedACvgZ();
  __s10AppIntents0A10DependencyC3key7manager7defaultACyxGs11AnyHashableVSg_AA0aC7ManagerCxyXAtcfC
            (&uStack_60,uVar1,0x1b88c4,0);
  *param_1 = puVar2;
  return;
}



/* Entry: 001b8888; end: 001b88b3;  */

void FUN_001b8888(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_001b83e4();
  __s10AppIntents0A6IntentPAAE20persistentIdentifierSSvgZ(param_1,uVar1);
  return;
}



/* Entry: 001b88b4; end: 001b88ef;  */

undefined1  [16] FUN_001b88b4(void)

{
  return ZEXT816(0x9b6498);
}



/* Entry: 001b88f0; end: 001b892f;  */

void FUN_001b88f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e3190;
  _swift_getWitnessTable(&UNK_007e3190,&UNK_009b6560);
  puRam0000000000af3118 = puVar1;
  return;
}



/* Entry: 001b8930; end: 001b8933;  */

void FUN_001b8930(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e31b8;
  _swift_getWitnessTable(&UNK_007e31b8,&UNK_009b6560);
  puRam0000000000af3120 = puVar1;
  return;
}



/* Entry: 001b8934; end: 001b8973;  */

void FUN_001b8934(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e31b8;
  _swift_getWitnessTable(&UNK_007e31b8,&UNK_009b6560);
  puRam0000000000af3120 = puVar1;
  return;
}



/* Entry: 001b8974; end: 001b8983;  */

void FUN_001b8974(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_00846388,1);
  return;
}



/* Entry: 001b8984; end: 001b89c3;  */

void FUN_001b8984(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_001b89c4();
  uStack_30 = param_2;
  uStack_28 = param_1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_0099ab08,1);
  return;
}



/* Entry: 001b89c4; end: 001b8a03;  */

void FUN_001b89c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e30f8;
  _swift_getWitnessTable(&UNK_007e30f8,&UNK_009b6560);
  puRam0000000000af3128 = puVar1;
  return;
}



/* Entry: 001b8a04; end: 001b8b73;  */

void FUN_001b8a04(void)

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
  FUN_00028010(uVar2,0xb65c80);
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lVar4,0x6f7453206e65704f,0xec00000073656972);
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



/* Entry: 001b8b74; end: 001b8be3;  */

void FUN_001b8b74(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000000af3130 != -1) {
    _swift_once(0xaf3130,FUN_001b8a04);
  }
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceVMa();
  lVar2 = lVar1;
  FUN_00028010();
                    /* WARNING: Could not recover jumptable at 0x001b8bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 001b8be4; end: 001b8beb;  */

undefined8 FUN_001b8be4(void)

{
  return 1;
}



/* Entry: 001b8bec; end: 001b8c53;  */

void FUN_001b8bec(void)

{
  __s10AppIntents0A6IntentPAAE14supportedModesAA0cE0VvgZ();
  return;
}



/* Entry: 001b8c54; end: 001b8c6f;  */

void FUN_001b8c54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b8c70,0,0);
  return;
}



/* Entry: 001b8c70; end: 001b8d3f;  */

void FUN_001b8c70(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  __s10AppIntents0A10DependencyC12wrappedValuexvg(unaff_x22 + 0x10);
  piVar2 = *(int **)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x38);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1b8ce4;
                    /* WARNING: Could not recover jumptable at 0x001b8ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(5);
  return;
}



/* Entry: 001b8d40; end: 001b8d9b;  */

void FUN_001b8d40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_release(uVar1);
  _swift_release(uVar2);
  __s10AppIntents12IntentResultPAAE6resultAA0cD9ContainerVys5NeverOA3HGyAIRszrlFZ(uVar3);
                    /* WARNING: Could not recover jumptable at 0x001b8d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b8d9c; end: 001b8de3;  */

void FUN_001b8d9c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_release(uVar1);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x001b8de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b8de4; end: 001b8e63;  */

void FUN_001b8de4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = &uStack_60;
  func_0x000115a8(0xaf2df8,&UNK_007e1f60);
  uVar1 = 0;
  __s10AppIntents0A17DependencyManagerCMa(0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  __s10AppIntents0A17DependencyManagerC6sharedACvgZ();
  __s10AppIntents0A10DependencyC3key7manager7defaultACyxGs11AnyHashableVSg_AA0aC7ManagerCxyXAtcfC
            (&uStack_60,uVar1,0x1b8ea0,0);
  *param_1 = puVar2;
  return;
}



/* Entry: 001b8e64; end: 001b8e8f;  */

void FUN_001b8e64(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_001b89c4();
  __s10AppIntents0A6IntentPAAE20persistentIdentifierSSvgZ(param_1,uVar1);
  return;
}



/* Entry: 001b8e90; end: 001b8ec7;  */

undefined1  [16] FUN_001b8e90(void)

{
  return ZEXT816(0x9b6560);
}



/* Entry: 001b8ec8; end: 001b8f57;  */

void FUN_001b8ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1bb278;
                    /* WARNING: Could not recover jumptable at 0x001b8f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 001b8f58; end: 001b8fdb;  */

void FUN_001b8f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x20);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_001bb274;
                    /* WARNING: Could not recover jumptable at 0x001b8fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 001b8fdc; end: 001b903b;  */

void FUN_001b8fdc(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x100) = param_1;
  *(undefined8 *)(unaff_x22 + 0x108) = unaff_x20;
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  *(long *)(unaff_x22 + 0x110) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b903c,0,0);
  return;
}



/* Entry: 001b903c; end: 001b9217;  */

/* WARNING: Removing unreachable block (ram,0x001b913c) */
/* WARNING: Removing unreachable block (ram,0x001b906c) */

void FUN_001b903c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  qword *pqVar6;
  undefined8 uVar7;
  long *plVar8;
  qword unaff_x22;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar9 = *(long *)(unaff_x22 + 0x108);
  __s10Foundation4UUIDVACycfC(uVar7);
  puVar5 = &UNK_009b6680;
  FUN_001c7e10();
  *(undefined **)(unaff_x22 + 0x128) = puVar5;
  *(undefined8 *)(unaff_x22 + 0x130) = param_2;
  uVar10 = *(undefined8 *)(lVar9 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined **)(unaff_x22 + 0x28) = puVar5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  _swift_retain(uVar10);
  uVar7 = 0xaf2eb0;
  func_0x000115a8(0xaf2eb0,&UNK_007e2670);
  FUN_001d496c(unaff_x22 + 0x38,0x1bb130,unaff_x22 + 0x10,uVar7);
  _swift_release(uVar10);
  lVar9 = *(long *)(unaff_x22 + 0x38);
  if (lVar9 != 0) {
    lVar1 = *(long *)(unaff_x22 + 0x58);
    lVar3 = *(long *)(unaff_x22 + 0x60);
    lVar2 = *(long *)(unaff_x22 + 0x48);
    lVar4 = *(long *)(unaff_x22 + 0x50);
    lVar11 = *(long *)(unaff_x22 + 0x40);
    __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
    _swift_release(puVar5);
    _swift_release(param_2);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
    plVar8 = *(long **)(unaff_x22 + 0x100);
    (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))(uVar7,*(undefined8 *)(unaff_x22 + 0x110));
    _swift_task_dealloc(uVar7);
    *plVar8 = lVar9;
    plVar8[1] = lVar11;
    plVar8[2] = lVar2;
    plVar8[3] = lVar4;
    plVar8[4] = lVar1;
    plVar8[5] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x001b9098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x98) = puVar5;
  pqVar6 = &section_00000068.size;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x138) = pqVar6;
  uVar7 = 0xaf3290;
  func_0x000115a8(0xaf3290,&UNK_007e3288);
  uVar10 = uVar7;
  func_0x001bb14c();
  *pqVar6 = unaff_x22;
  pqVar6[1] = (qword)FUN_001b9218;
  pqVar6[0xe] = uVar10;
  pqVar6[0xf] = unaff_x22 + 0x98;
  pqVar6[0xd] = uVar7;
  pqVar6[7] = unaff_x22 + 0x68;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001ca160,0,0);
  return;
}



/* Entry: 001b9218; end: 001b9273;  */

void FUN_001b9218(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x140) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x138));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_001b9274;
  }
  else {
    pcVar1 = FUN_001b9428;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 001b9274; end: 001b9427;  */

void FUN_001b9274(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar5 = *(long *)(unaff_x22 + 0x140);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar9 = *(long *)(unaff_x22 + 0x108);
  if (lVar5 == 0) {
    uVar7 = *(undefined8 *)(lVar9 + 0x10);
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar6;
    _swift_retain(uVar7);
    uVar4 = 0xaf32a0;
    func_0x000115a8(0xaf32a0,&UNK_007e3290);
    FUN_001d496c(unaff_x22 + 0xf8,0x1bb290,unaff_x22 + 0xe0,uVar4);
    _swift_release(uVar1);
    _swift_release(uVar2);
    _swift_release(uVar7);
    _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
    uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
    puVar3 = *(undefined8 **)(unaff_x22 + 0x100);
    (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x110));
    _swift_task_dealloc(uVar1);
    puVar3[1] = uVar15;
    *puVar3 = uVar14;
    puVar3[3] = uVar12;
    puVar3[2] = uVar10;
    puVar3[5] = uVar13;
    puVar3[4] = uVar11;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    _swift_release(uVar8);
    _swift_release(uVar7);
    _swift_release(uVar4);
    uVar7 = *(undefined8 *)(lVar9 + 0x10);
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar6;
    _swift_retain(uVar7);
    uVar4 = 0xaf32a0;
    func_0x000115a8(0xaf32a0,&UNK_007e3290);
    FUN_001d496c(unaff_x22 + 0xd8,FUN_001bb27c,unaff_x22 + 0xc0,uVar4);
    _swift_release(uVar1);
    _swift_release(uVar2);
    _swift_release(uVar7);
    _swift_release(*(undefined8 *)(unaff_x22 + 0xd8));
    (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))
              (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x110));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x120));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x001b9424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 001b9428; end: 001b94e7;  */

void FUN_001b9428(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x108) + 0x10);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x120);
  _swift_retain(uVar4);
  uVar3 = 0xaf32a0;
  func_0x000115a8(0xaf32a0,&UNK_007e3290);
  FUN_001d496c(unaff_x22 + 0xb8,0x1bb19c,unaff_x22 + 0xa0,uVar3);
  _swift_release(uVar1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xb8));
  (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))
            (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x110));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x120));
                    /* WARNING: Could not recover jumptable at 0x001b94e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b94e8; end: 001b9547;  */

void FUN_001b94e8(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  piVar2 = (int *)*unaff_x20;
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_001b9548;
                    /* WARNING: Could not recover jumptable at 0x001b9544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(param_1);
  return;
}



/* Entry: 001b9548; end: 001b9583;  */

void FUN_001b9548(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001b9580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001b9584; end: 001b969f;  */

void FUN_001b9584(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  lVar1 = 0;
  FUN_001ba6bc();
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = (long)puVar4 - extraout_x12;
  FUN_001b9de0();
  _swift_allocObject();
  lVar3 = 0xaf31e0;
  func_0x000115a8(0xaf31e0,&UNK_007e3258);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar5,1,1,lVar3);
  *(undefined **)(lVar5 + *(int *)(lVar1 + 0x14)) = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  func_0x001bb1f4(lVar5,puVar4);
  func_0x000115a8(0xaf32b0,&UNK_007e32a0);
  _swift_allocObject();
  FUN_001d4864();
  func_0x001bb238(lVar5);
  *(undefined1 **)(lVar2 + 0x10) = puVar4;
  lRam0000000000b65c98 = lVar2;
  return;
}



/* Entry: 001b96a0; end: 001b9767;  */

void FUN_001b96a0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = 0xaf31e0;
  func_0x000115a8(0xaf31e0,&UNK_007e3258);
  lVar3 = param_2;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_2,1,lVar2);
  if ((int)lVar3 == 0) {
    puVar1 = (undefined8 *)(param_2 + *(int *)(lVar2 + 0x30));
    uVar7 = *puVar1;
    uVar4 = puVar1[1];
    uVar8 = puVar1[2];
    uVar5 = puVar1[3];
    uVar9 = puVar1[4];
    uVar6 = puVar1[5];
    _swift_retain(uVar4);
    _swift_retain(uVar5);
    _swift_retain(uVar6);
  }
  else {
    uVar7 = 0;
    uVar4 = 0;
    uVar8 = 0;
    uVar5 = 0;
    uVar9 = 0;
    uVar6 = 0;
  }
  *param_1 = uVar7;
  param_1[1] = uVar4;
  param_1[2] = uVar8;
  param_1[3] = uVar5;
  param_1[4] = uVar9;
  param_1[5] = uVar6;
  return;
}



/* Entry: 001b9768; end: 001b987f;  */

void FUN_001b9768(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = 0xaf31e0;
  func_0x000115a8(0xaf31e0,&UNK_007e3258);
  lVar2 = param_2;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(param_2,1,lVar3);
  if ((int)lVar2 == 0) {
    puVar1 = (undefined8 *)(param_2 + *(int *)(lVar3 + 0x30));
    uVar4 = *puVar1;
    uVar7 = puVar1[1];
    uVar9 = puVar1[2];
    uVar6 = puVar1[3];
    uVar10 = puVar1[4];
    uVar8 = puVar1[5];
    _swift_retain(uVar7);
    _swift_retain(uVar6);
    _swift_retain(uVar8);
  }
  else {
    lVar3 = 0;
    FUN_001ba6bc();
    lVar3 = (long)*(int *)(lVar3 + 0x14);
    _swift_retain(param_5);
    uVar4 = *(undefined8 *)(param_2 + lVar3);
    _swift_isUniquelyReferenced_nonNull_native(uVar4);
    uVar5 = *(undefined8 *)(param_2 + lVar3);
    FUN_001ba808(param_5,param_3,uVar4);
    uVar4 = 0;
    uVar7 = 0;
    uVar9 = 0;
    uVar6 = 0;
    uVar10 = 0;
    uVar8 = 0;
    *(undefined8 *)(param_2 + lVar3) = uVar5;
  }
  *param_1 = uVar4;
  param_1[1] = uVar7;
  param_1[2] = uVar9;
  param_1[3] = uVar6;
  param_1[4] = uVar10;
  param_1[5] = uVar8;
  return;
}



/* Entry: 001b9880; end: 001b98a3;  */

void FUN_001b9880(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 001b98a4; end: 001b9987;  */

void FUN_001b98a4(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar2 = 0;
  uVar4 = param_3;
  FUN_001ba6bc();
  lVar2 = (long)*(int *)(lVar2 + 0x14);
  uVar6 = *(undefined8 *)(param_2 + lVar2);
  _swift_bridgeObjectRetain(uVar6);
  FUN_001b9988();
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = 0;
  if ((uVar4 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + lVar2);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(param_2 + lVar2);
    if (iVar1 == 0) {
      func_0x001ba978();
    }
    lVar7 = *(long *)(lVar5 + 0x30);
    lVar3 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 8))
              (lVar7 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_3,lVar3);
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + param_3 * 8);
    func_0x001baee0(param_3,lVar5);
    *(long *)(param_2 + lVar2) = lVar5;
  }
  *param_1 = uVar6;
  return;
}



/* Entry: 001b9988; end: 001b99eb;  */

undefined1  [16] FUN_001b9988(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  uVar6 = *(ulong *)(unaff_x20 + 0x28);
  uVar1 = 0;
  __s10Foundation4UUIDVMa(0);
  uVar2 = 0xaec6c0;
  FUN_001bb1b4(0xaec6c0,PTR___s10Foundation4UUIDVSHAAMc_0099c4b8);
  __sSH13_rawHashValue4seedS2i_tFTj(uVar6,uVar1,uVar2);
  lVar3 = 0;
  uStack_68 = param_1;
  __s10Foundation4UUIDVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar11 + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar10 = 0;
  }
  else {
    lVar9 = *(long *)(lVar11 + 0x48);
    pcVar7 = *(code **)(lVar11 + 0x10);
    do {
      (*pcVar7)(puVar8,*(long *)(unaff_x20 + 0x30) + lVar9 * uVar6,lVar3);
      uVar2 = 0xaf3288;
      FUN_001bb1b4(0xaf3288,PTR___s10Foundation4UUIDVSQAAMc_0099c4c0);
      puVar4 = puVar8;
      __sSQ2eeoiySbx_xtFZTj(puVar8,uStack_68,lVar3,uVar2);
      uVar10 = (uint)puVar4;
      (**(code **)(lVar11 + 8))(puVar8,lVar3);
      if (((ulong)puVar4 & 1) != 0) break;
      uVar6 = uVar6 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  auVar12._8_4_ = uVar10 & 1;
  auVar12._0_8_ = uVar6;
  auVar12._12_4_ = 0;
  return auVar12;
}



/* Entry: 001b99ec; end: 001b9a83;  */

void FUN_001b99ec(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (param_1 & 0x3f);
  lVar3 = *(long *)(param_4 + 0x30);
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_2,lVar2);
  *(undefined8 *)(*(long *)(param_4 + 0x38) + param_1 * 8) = param_3;
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1b9a84);
  (*pcVar1)();
}



/* Entry: 001b9a84; end: 001b9bb3;  */

undefined1  [16] FUN_001b9a84(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  ulong uVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_68 = param_1;
  __s10Foundation4UUIDVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar8 = 0;
  }
  else {
    lVar7 = *(long *)(lVar9 + 0x48);
    pcVar5 = *(code **)(lVar9 + 0x10);
    do {
      (*pcVar5)(puVar6,*(long *)(unaff_x20 + 0x30) + lVar7 * param_2,lVar1);
      uVar2 = 0xaf3288;
      FUN_001bb1b4(0xaf3288,PTR___s10Foundation4UUIDVSQAAMc_0099c4c0);
      puVar3 = puVar6;
      __sSQ2eeoiySbx_xtFZTj(puVar6,uStack_68,lVar1,uVar2);
      uVar8 = (uint)puVar3;
      (**(code **)(lVar9 + 8))(puVar6,lVar1);
      if (((ulong)puVar3 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar10._8_4_ = uVar8 & 1;
  auVar10._0_8_ = param_2;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 001b9bb4; end: 001b9c0f;  */

long FUN_001b9bb4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 001b9c10; end: 001b9ce7;  */

undefined8 * FUN_001b9c10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar3 = param_2[5];
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  _swift_retain(uVar3);
  return param_1;
}



/* Entry: 001b9ce8; end: 001b9d3b;  */

undefined8 * FUN_001b9ce8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 001b9d3c; end: 001b9ddf;  */

int FUN_001b9d3c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 001b9de0; end: 001b9dff;  */

void FUN_001b9de0(void)

{
  _objc_opt_self(&PTR_PTR_00af3180);
  return;
}



/* Entry: 001b9e00; end: 001b9f4f;  */

long * FUN_001b9e00(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar5 = 0xaf31e0;
    func_0x000115a8(0xaf31e0,&UNK_007e3258);
    lVar11 = *(long *)(lVar5 + -8);
    plVar4 = param_2;
    (**(code **)(lVar11 + 0x30))(param_2,1,lVar5);
    if ((int)plVar4 == 0) {
      lVar6 = 0;
      __s10Foundation4UUIDVMa();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x30));
      uVar7 = puVar2[1];
      uVar10 = *puVar2;
      uVar14 = puVar2[3];
      uVar13 = puVar2[2];
      uVar9 = puVar2[3];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar10;
      puVar1[3] = uVar14;
      puVar1[2] = uVar13;
      uVar10 = puVar2[5];
      uVar13 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar13;
      pcVar12 = *(code **)(lVar11 + 0x38);
      _swift_retain(uVar7);
      _swift_retain(uVar9);
      _swift_retain(uVar10);
      (*pcVar12)(param_1,0,1,lVar5);
    }
    else {
      lVar5 = 0xaf31e8;
      func_0x000115a8(0xaf31e8,&UNK_007e3260);
      _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    _swift_bridgeObjectRetain();
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar8 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar5 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 001b9f50; end: 001b9fef;  */

void FUN_001b9f50(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0xaf31e0;
  func_0x000115a8(0xaf31e0,&UNK_007e3258);
  lVar2 = param_1;
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,1,lVar1);
  if ((int)lVar2 == 0) {
    lVar2 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    lVar1 = param_1 + *(int *)(lVar1 + 0x30);
    _swift_release(*(undefined8 *)(lVar1 + 8));
    _swift_release(*(undefined8 *)(lVar1 + 0x18));
    _swift_release(*(undefined8 *)(lVar1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  return;
}



/* Entry: 001b9ff0; end: 001ba303;  */

long FUN_001b9ff0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = 0xaf31e0;
  func_0x000115a8(0xaf31e0,&UNK_007e3258);
  lVar8 = *(long *)(lVar3 + -8);
  lVar4 = param_2;
  (**(code **)(lVar8 + 0x30))(param_2,1,lVar3);
  if ((int)lVar4 == 0) {
    lVar4 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x30));
    puVar2 = (undefined8 *)(param_2 + *(int *)(lVar3 + 0x30));
    uVar5 = puVar2[1];
    uVar7 = *puVar2;
    uVar11 = puVar2[3];
    uVar10 = puVar2[2];
    uVar6 = puVar2[3];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar7;
    puVar1[3] = uVar11;
    puVar1[2] = uVar10;
    uVar7 = puVar2[5];
    uVar10 = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar10;
    pcVar9 = *(code **)(lVar8 + 0x38);
    _swift_retain(uVar5);
    _swift_retain(uVar6);
    _swift_retain(uVar7);
    (*pcVar9)(param_1,0,1,lVar3);
  }
  else {
    lVar3 = 0xaf31e8;
    func_0x000115a8(0xaf31e8,&UNK_007e3260);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 001ba304; end: 001ba3fb;  */

long FUN_001ba304(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = 0xaf31e0;
  func_0x000115a8(0xaf31e0,&UNK_007e3258);
  lVar5 = *(long *)(lVar3 + -8);
  lVar4 = param_2;
  (**(code **)(lVar5 + 0x30))(param_2,1,lVar3);
  if ((int)lVar4 == 0) {
    lVar4 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x30));
    puVar2 = (undefined8 *)(param_2 + *(int *)(lVar3 + 0x30));
    uVar6 = *puVar2;
    uVar8 = puVar2[3];
    uVar7 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar6;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    uVar6 = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar6;
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar3);
  }
  else {
    lVar3 = 0xaf31e8;
    func_0x000115a8(0xaf31e8,&UNK_007e3260);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Entry: 001ba3fc; end: 001ba597;  */

long FUN_001ba3fc(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar6 = 0xaf31e0;
  func_0x000115a8(0xaf31e0,&UNK_007e3258);
  lVar7 = *(long *)(lVar6 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar4 = param_1;
  (*pcVar8)(param_1,1,lVar6);
  lVar3 = param_2;
  (*pcVar8)(param_2,1,lVar6);
  if ((int)lVar4 == 0) {
    if ((int)lVar3 == 0) {
      lVar4 = 0;
      __s10Foundation4UUIDVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 0x28))(param_1,param_2,lVar4);
      puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x30));
      puVar2 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x30));
      uVar5 = puVar1[1];
      uVar9 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar9;
      _swift_release(uVar5);
      uVar5 = puVar1[3];
      uVar9 = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar9;
      _swift_release(uVar5);
      uVar5 = puVar1[5];
      uVar9 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar9;
      _swift_release(uVar5);
      goto LAB_001ba508;
    }
    func_0x001ba7c8(param_1,0xaf31e0,&UNK_007e3258);
  }
  else if ((int)lVar3 == 0) {
    lVar4 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x30));
    puVar2 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x30));
    uVar5 = *puVar2;
    uVar10 = puVar2[3];
    uVar9 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar5;
    puVar1[3] = uVar10;
    puVar1[2] = uVar9;
    uVar5 = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar5;
    (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar6);
    goto LAB_001ba508;
  }
  lVar6 = 0xaf31e8;
  func_0x000115a8(0xaf31e8,&UNK_007e3260);
  _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
LAB_001ba508:
  lVar6 = (long)*(int *)(param_3 + 0x14);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = *(undefined8 *)(param_2 + lVar6);
  _swift_bridgeObjectRelease(uVar5);
  return param_1;
}



/* Entry: 001ba598; end: 001ba5a3;  */

void FUN_001ba598(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_0099ba10)();
  return;
}



/* Entry: 001ba5a4; end: 001ba62b;  */

ulong FUN_001ba5a4(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0xaf31e8;
  func_0x000115a8(0xaf31e8,&UNK_007e3260);
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x001ba600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
    return param_1;
  }
  uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14));
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  return (ulong)((int)uVar2 + 1);
}



/* Entry: 001ba62c; end: 001ba637;  */

void FUN_001ba62c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_0099bb68)();
  return;
}



/* Entry: 001ba638; end: 001ba6bb;  */

void FUN_001ba638(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0xaf31e8;
  func_0x000115a8(0xaf31e8,&UNK_007e3260);
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x001ba69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x14)) = (ulong)((int)param_2 - 1);
  return;
}



/* Entry: 001ba6bc; end: 001ba6f3;  */

void FUN_001ba6bc(undefined8 param_1)

{
  if (lRam0000000000af3248 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_00846410);
  return;
}



/* Entry: 001ba6f4; end: 001ba807;  */

void FUN_001ba6f4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x001ba768();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBbWV_0099ae78 + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 001ba808; end: 001bb12f;  */

void FUN_001ba808(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = 0;
  uVar4 = param_2;
  __s10Foundation4UUIDVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  FUN_001b9988();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar9 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1ba914);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar9) {
    param_3 = param_3 & 1;
    func_0x001bab90(lVar9);
    uVar3 = param_2;
    FUN_001b9988();
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(lVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1ba8d4);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x001ba978();
    lVar9 = *unaff_x20;
    goto joined_r0x001ba928;
  }
  lVar9 = *unaff_x20;
joined_r0x001ba928:
  if ((uVar4 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(uVar6);
    return;
  }
  (**(code **)(lVar10 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
  FUN_001b99ec(uVar3,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,
               lVar9);
  return;
}



/* Entry: 001bb130; end: 001bb1b3;  */

void FUN_001bb130(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_001b9768(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
               *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 001bb1b4; end: 001bb273;  */

void FUN_001bb1b4(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    __s10Foundation4UUIDVMa(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 001bb274; end: 001bb27b;  */

void FUN_001bb274(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001b9580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001bb27c; end: 001bb2a3;  */

void FUN_001bb27c(void)

{
  func_0x001bb19c();
  return;
}



/* Entry: 001bb2a4; end: 001bb2b7;  */

void FUN_001bb2a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001bb2b8,0,0);
  return;
}



/* Entry: 001bb2b8; end: 001bb30f;  */

void FUN_001bb2b8(undefined8 param_1)

{
  long unaff_x22;
  
  func_0x001b5014();
  _swift_allocError(&UNK_009b6820,param_1,0,0);
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x001bb30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001bb310; end: 001bb343;  */

void FUN_001bb310(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(0x1bb338,0,0);
  return;
}



/* Entry: 001bb344; end: 001bb357;  */

void FUN_001bb344(void)

{
  __s10AppIntents0A17ShortcutsProviderPAAE17shortcutTileColorAA08ShortcutfG0OvgZ();
  return;
}



/* Entry: 001bb358; end: 001bb367;  */

undefined1  [16] FUN_001bb358(void)

{
  return ZEXT816(0x9b66b0);
}



/* Entry: 001bb368; end: 001c05ef;  */

long FUN_001bb368(void)

{
  byte bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  ulong uVar13;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_1f0 [8];
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long lStack_130;
  code *pcStack_128;
  long lStack_120;
  undefined4 uStack_114;
  code *pcStack_110;
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
  code *pcStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  undefined4 uStack_94;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar6 = 0;
  __s10Foundation6LocaleVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = 0;
  puStack_d8 = auStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSS10FoundationE17LocalizationValueVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar12 = (long)(auStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  lStack_e0 = lVar12;
  __s10AppIntents0A8ShortcutVMa();
  lStack_190 = *(long *)(lVar6 + -8);
  lStack_148 = *(undefined8 *)(lStack_190 + 0x40);
  lStack_c8 = lVar6;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_140 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar12 - uStack_140;
  lStack_178 = lVar12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - extraout_x13;
  uVar7 = 0xaf2df8;
  uStack_150 = lVar12;
  func_0x000115a8(0xaf2df8,&UNK_007e1f60);
  uVar8 = 0;
  lStack_130 = uVar7;
  __s10AppIntents0A17DependencyManagerCMa();
  uStack_88 = 0;
  pppuStack_90 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_138 = uVar8;
  __s10AppIntents0A17DependencyManagerC6sharedACvgZ();
  ppppuVar9 = &pppuStack_90;
  __s10AppIntents0A10DependencyC3key7manager7defaultACyxGs11AnyHashableVSg_AA0aC7ManagerCxyXAtcfC
            (ppppuVar9,uVar8,0x1b65a4,0);
  lVar6 = 0xaf32b8;
  pppuStack_90 = ppppuVar9;
  func_0x000115a8(0xaf32b8,&UNK_007e3360);
  lVar11 = 0xaf32c0;
  func_0x000115a8(0xaf32c0,&UNK_007e3368);
  uStack_e8 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar15 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  lStack_100 = uStack_e8 * 4;
  _swift_allocObject(lVar6,uVar15 + uStack_e8 * 5,uVar13 | 7);
  *(undefined8 *)(lVar6 + 0x18) = 10;
  *(undefined8 *)(lVar6 + 0x10) = 5;
  lStack_f0 = lVar6 + uVar15;
  lVar11 = 0xaf32c8;
  uStack_158 = lVar6;
  func_0x000115a8(0xaf32c8,&UNK_007e3370);
  pcStack_d0 = *(code **)(*(long *)(lVar11 + -8) + 0x40);
  lVar20 = lVar11;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar13 = extraout_x12_00 + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar12 - uVar13;
  uStack_f8 = uVar13;
  FUN_001b60c8();
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar12,7,1,&UNK_009b5fe8);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  lVar10 = 0;
  __s10AppIntents0A19ShortcutPhraseTokenOMa();
  lVar6 = *(long *)(lVar10 + -8);
  lVar19 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar15 = lVar19 + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar12 - uVar15;
  uStack_94 = *(undefined4 *)
               PTR___s10AppIntents0A19ShortcutPhraseTokenO15applicationNameyA2CmFWC_0099aad0;
  pcStack_b0 = *(code **)(lVar6 + 0x68);
  uStack_b8 = uVar15;
  (*pcStack_b0)(lVar14,uStack_94,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar14,lVar11);
  pcStack_a0 = *(code **)(lVar6 + 8);
  (*pcStack_a0)(lVar14,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x6172656d614320,0xe700000000000000,lVar11);
  lVar6 = lStack_f0;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_f0,lVar12,&UNK_009b5fe8,lVar20);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar14 - uVar13;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar14,0xc,1,&UNK_009b5fe8,lVar20);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x206e65706f,0xe500000000000000,lVar11);
  lStack_a8 = lVar19;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  lVar19 = lVar14 - uVar15;
  (*pcStack_b0)(lVar19,uStack_94,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar19,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar19,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x6172656d614320,0xe700000000000000,lVar11);
  uVar13 = uStack_e8;
  uStack_160 = lVar20;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar6 + uStack_e8,lVar14,&UNK_009b5fe8,lVar20);
  lStack_108 = uVar13 << 1;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar15 = uStack_f8;
  lVar19 = lVar19 - uStack_f8;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar19,5,1,&UNK_009b5fe8,lVar20);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar16 = uStack_b8;
  lVar12 = lVar19 - uStack_b8;
  lStack_c0 = lVar10;
  (*pcVar18)(lVar12,uVar5,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar12,lVar11);
  (*pcVar4)(lVar12,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x70616e5320,0xe500000000000000,lVar11);
  lVar20 = lStack_f0;
  lVar6 = lStack_108;
  uVar13 = uStack_160;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_f0 + lStack_108,lVar19,&UNK_009b5fe8,uStack_160);
  uStack_e8 = lVar6 + uStack_e8;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - uVar15;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar12,8,1,&UNK_009b5fe8,uVar13);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  lVar6 = lStack_c0;
  lVar14 = lVar12 - uVar16;
  (*pcStack_b0)(lVar14,uStack_94,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar14,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar14,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x6572757470616320,0xe800000000000000,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20 + uStack_e8,lVar12,&UNK_009b5fe8,uVar13);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar14 - uStack_f8;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar14,7,1,&UNK_009b5fe8,uVar13);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lStack_c0;
  lVar19 = lVar14 - uVar16;
  (*pcVar18)(lVar19,uVar5,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar19,lVar11);
  (*pcVar4)(lVar19,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x6569666c657320,0xe700000000000000,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20 + lStack_100,lVar14,&UNK_009b5fe8,uVar13);
  lVar6 = 0xaf2dd0;
  func_0x000115a8(0xaf2dd0,&UNK_007e1f38);
  lStack_f0 = *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lStack_e0;
  uStack_e8 = extraout_x12_01 + 0xfU & 0xfffffffffffffff0;
  lVar19 = lVar19 - uStack_e8;
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lStack_e0,0x6172656d6143,0xe600000000000000);
  puVar2 = puStack_d8;
  __s10Foundation6LocaleV7currentACvgZ(puStack_d8);
  lVar11 = 0;
  __s10Foundation23LocalizedStringResourceV17BundleDescriptionOMa();
  lStack_100 = *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40);
  lStack_108 = lVar11;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_f8 = extraout_x12_02 + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar19 - uStack_f8;
  uStack_114 = *(undefined4 *)
                PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_00998e98
  ;
  pcStack_110 = *(code **)(extraout_x8_01 + 0x68);
  (*pcStack_110)(lVar12);
  __s10Foundation23LocalizedStringResourceV_5table6locale6bundle7commentACSSAAE17LocalizationValueV_SSSgAA6LocaleVAC17BundleDescriptionOs06StaticC0VSgtcfC
            (lVar19,lVar6,0x74726f6853707041,0xec00000073747563,puVar2,lVar12,0,0,0x100);
  lVar6 = 0;
  __s10Foundation23LocalizedStringResourceVMa();
  pcStack_128 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  lStack_120 = lVar6;
  (*pcStack_128)(lVar19,0,1,lVar6);
  uVar15 = uStack_150;
  __s10AppIntents0A8ShortcutV6intent7phrases10shortTitle15systemImageNameACx_SayAA0aC6PhraseVyxGG10Foundation23LocalizedStringResourceVSgSSSgYttcAA0A6IntentRzlufC
            (uStack_150,&pppuStack_90,uStack_158,lVar19,0x662e6172656d6163,0xeb000000006c6c69,
             &UNK_009b5fe8,uVar13);
  __s10AppIntents0A16ShortcutsBuilderO15buildExpressionyAA0A8ShortcutVAFFZ(lStack_178,uVar15);
  pcStack_d0 = *(code **)(lStack_190 + 8);
  (*pcStack_d0)(uVar15,lStack_c8);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - uStack_140;
  lStack_180 = lVar12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - extraout_x12_03;
  uStack_70 = 0;
  uStack_88 = 0;
  pppuStack_90 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_198 = lVar12;
  __s10AppIntents0A17DependencyManagerC6sharedACvgZ();
  ppppuVar9 = &pppuStack_90;
  __s10AppIntents0A10DependencyC3key7manager7defaultACyxGs11AnyHashableVSg_AA0aC7ManagerCxyXAtcfC
            (ppppuVar9,uVar15,0x1b7d04,0);
  lVar6 = 0xaf32d0;
  pppuStack_90 = ppppuVar9;
  func_0x000115a8(0xaf32d0,&UNK_007e3380);
  lVar11 = 0xaf32d8;
  func_0x000115a8(0xaf32d8,&UNK_007e3388);
  uStack_158 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar15 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  lStack_170 = uStack_158 * 8;
  _swift_allocObject(lVar6,uVar15 + uStack_158 * 9,uVar13 | 7);
  *(undefined8 *)(lVar6 + 0x18) = 0x12;
  *(undefined8 *)(lVar6 + 0x10) = 9;
  lVar20 = lVar6 + uVar15;
  lVar11 = 0xaf32e0;
  lStack_1a0 = lVar6;
  func_0x000115a8(0xaf32e0,&UNK_007e3390);
  lStack_168 = *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40);
  lVar6 = lVar11;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_150 = extraout_x12_04 + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar12 - uStack_150;
  FUN_001b7830();
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar12,4,1,&UNK_009b6308,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  uVar13 = uStack_b8;
  lVar14 = lVar12 - uStack_b8;
  (*pcStack_b0)(lVar14,uStack_94,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar14,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar14,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x70614d20,0xe400000000000000,lVar11);
  lStack_188 = lVar6;
  uStack_160 = lVar20;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20,lVar12,&UNK_009b6308,lVar6);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar14 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar14,9,1,&UNK_009b6308,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar18 = pcStack_b0;
  lVar12 = lVar14 - uVar13;
  (*pcStack_b0)(lVar12,uVar5,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar12,lVar11);
  (*pcVar4)(lVar12,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x70614d20,0xe400000000000000,lVar11);
  uVar13 = uStack_158;
  lVar10 = lStack_188;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20 + uStack_158,lVar14,&UNK_009b6308,lStack_188);
  lStack_1b0 = uVar13 << 1;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar12,9,1,&UNK_009b6308,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar16 = uStack_b8;
  lVar6 = lStack_c0;
  lVar20 = lVar12 - uStack_b8;
  (*pcVar18)(lVar20,uVar5,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar20,lVar11);
  pcVar18 = pcStack_a0;
  (*pcStack_a0)(lVar20,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x614d2070616e5320,0xe900000000000070,lVar11);
  uVar13 = uStack_160;
  lVar6 = lStack_1b0;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (uStack_160 + lStack_1b0,lVar12,&UNK_009b6308,lVar10);
  lStack_1b0 = lVar6 + uStack_158;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar15 = uStack_150;
  lVar20 = lVar20 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar20,9,1,&UNK_009b6308,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  lVar12 = lStack_c0;
  lVar6 = lVar20 - uVar16;
  (*pcStack_b0)(lVar6,uStack_94,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar6,lVar11);
  (*pcVar18)(lVar6,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x6f697461636f6c20,0xe90000000000006e,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (uVar13 + lStack_1b0,lVar20,&UNK_009b6308,lVar10);
  uVar13 = uStack_158;
  lVar14 = uStack_158 * 4;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lVar6 - uVar15;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar6,0x14,1,&UNK_009b6308,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar15 = uStack_b8;
  lVar10 = lVar6 - uStack_b8;
  (*pcStack_b0)(lVar10,uVar5,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar10,lVar11);
  pcVar18 = pcStack_a0;
  (*pcStack_a0)(lVar10,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0xd000000000000014,0x80000000008b96c0,lVar11);
  lVar20 = lStack_188;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (uStack_160 + lVar14,lVar6,&UNK_009b6308,lStack_188);
  lStack_1b0 = uVar13 * 5;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar10 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar10,0x15,1,&UNK_009b6308,lVar20);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lVar10 - uVar15;
  (*pcStack_b0)(lVar6,uStack_94,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar6,lVar11);
  (*pcVar18)(lVar6,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0xd000000000000015,0x80000000008b96e0,lVar11);
  uVar13 = uStack_160;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (uStack_160 + lStack_1b0,lVar10,&UNK_009b6308,lVar20);
  lStack_1b0 = uVar13 + uStack_158 * 6;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar13 = uStack_150;
  lVar6 = lVar6 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar6,7,1,&UNK_009b6308,lVar20);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar18 = pcStack_b0;
  uVar15 = uStack_b8;
  lVar10 = lVar6 - uStack_b8;
  (*pcStack_b0)(lVar10,uStack_94,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar10,lVar11);
  (*pcStack_a0)(lVar10,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x736563616c7020,0xe700000000000000,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_1b0,lVar6,&UNK_009b6308,lVar20);
  uStack_158 = lStack_170 - uStack_158;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar10 - uVar13;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar10,7,1,&UNK_009b6308,lVar20);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  lVar6 = lVar10 - uVar15;
  (*pcVar18)(lVar6,uStack_94,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar6,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar6,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x79627261656e20,0xe700000000000000,lVar11);
  uVar13 = uStack_160;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (uStack_160 + uStack_158,lVar10,&UNK_009b6308,lVar20);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lVar6 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar6,0x10,1,&UNK_009b6308,lVar20);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0xd000000000000010,0x80000000008b9700,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar6 - uVar15;
  (*pcVar18)(lVar14,uVar5,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar14,lVar11);
  (*pcVar4)(lVar14,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (uVar13 + lStack_170,lVar6,&UNK_009b6308,lVar20);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lStack_e0;
  lVar14 = lVar14 - uStack_e8;
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lStack_e0,0x70614d,0xe300000000000000);
  puVar2 = puStack_d8;
  __s10Foundation6LocaleV7currentACvgZ(puStack_d8);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar14 - uStack_f8;
  (*pcStack_110)(lVar10,uStack_114,lStack_108);
  __s10Foundation23LocalizedStringResourceV_5table6locale6bundle7commentACSSAAE17LocalizationValueV_SSSgAA6LocaleVAC17BundleDescriptionOs06StaticC0VSgtcfC
            (lVar14,lVar6,0x74726f6853707041,0xec00000073747563,puVar2,lVar10,0,0,0x100);
  (*pcStack_128)(lVar14,0,1,lStack_120);
  lVar6 = lStack_198;
  __s10AppIntents0A8ShortcutV6intent7phrases10shortTitle15systemImageNameACx_SayAA0aC6PhraseVyxGG10Foundation23LocalizedStringResourceVSgSSSgYttcAA0A6IntentRzlufC
            (lStack_198,&pppuStack_90,lStack_1a0,lVar14,0x6e6f697461636f6c,0xed00006c6c69662e,
             &UNK_009b6308,lVar20);
  __s10AppIntents0A16ShortcutsBuilderO15buildExpressionyAA0A8ShortcutVAFFZ(lStack_180,lVar6);
  (*pcStack_d0)(lVar6,lStack_c8);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar10 - uStack_140;
  lStack_188 = lVar10;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar10 - extraout_x12_05;
  uStack_70 = 0;
  uStack_88 = 0;
  pppuStack_90 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_198 = lVar10;
  __s10AppIntents0A17DependencyManagerC6sharedACvgZ();
  ppppuVar9 = &pppuStack_90;
  __s10AppIntents0A10DependencyC3key7manager7defaultACyxGs11AnyHashableVSg_AA0aC7ManagerCxyXAtcfC
            (ppppuVar9,lVar6,0x1b82e4,0);
  lVar6 = 0xaf32e8;
  pppuStack_90 = ppppuVar9;
  func_0x000115a8(0xaf32e8,&UNK_007e3398);
  lVar11 = 0xaf32f0;
  func_0x000115a8(0xaf32f0,&UNK_007e33a0);
  lStack_168 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar16 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  _swift_allocObject(lVar6,uVar16 + lStack_168 * 10,uVar13 | 7);
  uStack_1a8 = 0x14;
  lStack_1b0 = 10;
  *(undefined8 *)(lVar6 + 0x18) = 0x14;
  *(undefined8 *)(lVar6 + 0x10) = 10;
  lVar20 = lVar6 + uVar16;
  lVar11 = 0xaf32f8;
  lStack_1a0 = lVar6;
  uStack_150 = lVar20;
  func_0x000115a8(0xaf32f8,&UNK_007e33a8);
  lVar19 = *(long *)(*(long *)(lVar11 + -8) + 0x40);
  lVar6 = lVar11;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_158 = lVar19 + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar10 - uStack_158;
  FUN_001b7e04();
  uStack_160 = lVar6;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar10,9,1,&UNK_009b63d0,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  lVar14 = lVar10 - uVar15;
  (*pcStack_b0)(lVar14,uStack_94,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar14,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar14,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x6569726f6d654d20,0xe900000000000073,lVar11);
  uVar13 = uStack_160;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20,lVar10,&UNK_009b63d0,uStack_160);
  lStack_170 = lVar19;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar14 - uStack_158;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar14,0xe,1,&UNK_009b63d0,uVar13);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lStack_c0;
  lVar20 = lVar14 - uVar15;
  (*pcVar18)(lVar20,uVar5,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar20,lVar11);
  (*pcVar4)(lVar20,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x6569726f6d654d20,0xe900000000000073,lVar11);
  uVar16 = uStack_150;
  uVar13 = uStack_160;
  lVar6 = lStack_168;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (uStack_150 + lStack_168,lVar14,&UNK_009b63d0,uStack_160);
  lStack_1b8 = lVar6 << 1;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar15 = uStack_158;
  lVar20 = lVar20 - uStack_158;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar20,0x11,1,&UNK_009b63d0,uVar13);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x20796d206e65706f,0xe800000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  uVar3 = uStack_b8;
  lVar6 = lStack_c0;
  lVar10 = lVar20 - uStack_b8;
  (*pcStack_b0)(lVar10,uStack_94,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar10,lVar11);
  (*pcStack_a0)(lVar10,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x6569726f6d654d20,0xe900000000000073,lVar11);
  uVar13 = uStack_160;
  lVar6 = lStack_1b8;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (uVar16 + lStack_1b8,lVar20,&UNK_009b63d0,uStack_160);
  lVar20 = lStack_168;
  lStack_1b8 = lVar6 + lStack_168;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar10 - uVar15;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar10,7,1,&UNK_009b63d0,uVar13);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lStack_c0;
  lVar12 = lVar10 - uVar3;
  (*pcVar18)(lVar12,uVar5,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar12,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar12,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x736f746f687020,0xe700000000000000,lVar11);
  uVar15 = uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (uStack_150 + lStack_1b8,lVar10,&UNK_009b63d0,uVar13);
  lStack_1b8 = lVar20 << 2;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - uStack_158;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar12,0xc,1,&UNK_009b63d0,uVar13);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar18 = pcStack_b0;
  uVar16 = uStack_b8;
  lVar6 = lStack_c0;
  lVar10 = lVar12 - uStack_b8;
  (*pcStack_b0)(lVar10,uStack_94,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar10,lVar11);
  (*pcVar4)(lVar10,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x5320646576617320,0xec0000007370616e,lVar11);
  uVar13 = uStack_160;
  lVar6 = lStack_1b8;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (uVar15 + lStack_1b8,lVar12,&UNK_009b63d0,uStack_160);
  lStack_1b8 = lVar6 + lVar20;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar15 = uStack_158;
  lVar10 = lVar10 - uStack_158;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar10,0xc,1,&UNK_009b63d0,uVar13);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lStack_c0;
  lVar12 = lVar10 - uVar16;
  (*pcVar18)(lVar12,uStack_94,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar12,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar12,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x206172656d616320,0xec0000006c6c6f72,lVar11);
  uVar16 = uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (uStack_150 + lStack_1b8,lVar10,&UNK_009b63d0,uVar13);
  lStack_1b8 = uVar16 + lVar20 * 6;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - uVar15;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar12,0xc,1,&UNK_009b63d0,uVar13);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x20796d,0xe300000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  uVar16 = uStack_b8;
  lVar6 = lStack_c0;
  lVar20 = lVar12 - uStack_b8;
  (*pcVar18)(lVar20,uStack_94,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar20,lVar11);
  (*pcVar4)(lVar20,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x6569726f6d654d20,0xe900000000000073,lVar11);
  uVar13 = uStack_160;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_1b8,lVar12,&UNK_009b63d0,uStack_160);
  lStack_1b8 = lStack_168 * 8;
  lStack_1d0 = lStack_168 * 7;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar15 = uStack_158;
  lVar20 = lVar20 - uStack_158;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar20,0xb,1,&UNK_009b63d0,uVar13);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar18 = pcStack_b0;
  lVar10 = lVar20 - uVar16;
  (*pcStack_b0)(lVar10,uVar5,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar10,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar10,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x61626873616c4620,0xeb00000000736b63,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (uStack_150 + lStack_1d0,lVar20,&UNK_009b63d0,uVar13);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar10 - uVar15;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar10,0x10,1,&UNK_009b63d0,uVar13);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  lVar6 = lStack_c0;
  lVar12 = lVar10 - uVar16;
  (*pcVar18)(lVar12,uStack_94,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar12,lVar11);
  (*pcVar4)(lVar12,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x61626873616c4620,0xeb00000000736b63,lVar11);
  uVar13 = uStack_160;
  lVar6 = lStack_1b8;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (uStack_150 + lStack_1b8,lVar10,&UNK_009b63d0,uStack_160);
  lStack_168 = lVar6 + lStack_168;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - uStack_158;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar12,0xe,1,&UNK_009b63d0,uVar13);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x20796d,0xe300000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lStack_c0;
  lVar20 = lVar12 - uVar16;
  (*pcVar18)(lVar20,uVar5,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar20,lVar11);
  (*pcVar4)(lVar20,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x61626873616c4620,0xeb00000000736b63,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (uStack_150 + lStack_168,lVar12,&UNK_009b63d0,uVar13);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lStack_e0;
  lVar20 = lVar20 - uStack_e8;
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lStack_e0,0x736569726f6d654d,0xe800000000000000);
  puVar2 = puStack_d8;
  __s10Foundation6LocaleV7currentACvgZ(puStack_d8);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar20 - uStack_f8;
  (*pcStack_110)(lVar12,uStack_114,lStack_108);
  __s10Foundation23LocalizedStringResourceV_5table6locale6bundle7commentACSSAAE17LocalizationValueV_SSSgAA6LocaleVAC17BundleDescriptionOs06StaticC0VSgtcfC
            (lVar20,lVar6,0x74726f6853707041,0xec00000073747563,puVar2,lVar12,0,0,0x100);
  (*pcStack_128)(lVar20,0,1,lStack_120);
  lVar6 = lStack_198;
  __s10AppIntents0A8ShortcutV6intent7phrases10shortTitle15systemImageNameACx_SayAA0aC6PhraseVyxGG10Foundation23LocalizedStringResourceVSgSSSgYttcAA0A6IntentRzlufC
            (lStack_198,&pppuStack_90,lStack_1a0,lVar20,0xd00000000000001e,0x80000000008b9720,
             &UNK_009b63d0,uVar13);
  __s10AppIntents0A16ShortcutsBuilderO15buildExpressionyAA0A8ShortcutVAFFZ(lStack_188,lVar6);
  (*pcStack_d0)(lVar6,lStack_c8);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - uStack_140;
  lStack_198 = lVar12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - extraout_x12_06;
  uStack_70 = 0;
  uStack_88 = 0;
  pppuStack_90 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_1a0 = lVar12;
  __s10AppIntents0A17DependencyManagerC6sharedACvgZ();
  ppppuVar9 = &pppuStack_90;
  __s10AppIntents0A10DependencyC3key7manager7defaultACyxGs11AnyHashableVSg_AA0aC7ManagerCxyXAtcfC
            (ppppuVar9,lVar6,0x1b7730,0);
  lVar6 = 0xaf3300;
  pppuStack_90 = ppppuVar9;
  func_0x000115a8(0xaf3300,&UNK_007e33b0);
  lVar11 = 0xaf3308;
  func_0x000115a8(0xaf3308,&UNK_007e33b8);
  uStack_160 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar15 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  _swift_allocObject(lVar6,uVar15 + uStack_160 * 10,uVar13 | 7);
  *(undefined8 *)(lVar6 + 0x18) = uStack_1a8;
  *(long *)(lVar6 + 0x10) = lStack_1b0;
  lVar20 = lVar6 + uVar15;
  lVar11 = 0xaf3310;
  lStack_1b8 = lVar6;
  func_0x000115a8(0xaf3310,&UNK_007e33c0);
  lVar19 = *(long *)(*(long *)(lVar11 + -8) + 0x40);
  lVar6 = lVar11;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_150 = lVar19 + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar12 - uStack_150;
  FUN_001b7254();
  uStack_158 = lVar6;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar12,7,1,&UNK_009b6240,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  uVar15 = uStack_b8;
  lVar14 = lVar12 - uStack_b8;
  (*pcStack_b0)(lVar14,uStack_94,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar14,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar14,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x7365736e654c20,0xe700000000000000,lVar11);
  uVar13 = uStack_158;
  lStack_170 = lVar20;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20,lVar12,&UNK_009b6240,uStack_158);
  lStack_168 = lVar19;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar14 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar14,0xc,1,&UNK_009b6240,uVar13);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar18 = pcStack_b0;
  lVar6 = lStack_c0;
  lVar10 = lVar14 - uVar15;
  (*pcStack_b0)(lVar10,uVar5,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar10,lVar11);
  (*pcVar4)(lVar10,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x7365736e654c20,0xe700000000000000,lVar11);
  uVar15 = uStack_158;
  uVar13 = uStack_160;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20 + uStack_160,lVar14,&UNK_009b6240,uStack_158);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar10 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar10,5,1,&UNK_009b6240,uVar15);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  uVar3 = uStack_b8;
  lVar12 = lVar10 - uStack_b8;
  (*pcVar18)(lVar12,uStack_94,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar12,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar12,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x736e654c20,0xe500000000000000,lVar11);
  uVar16 = uStack_158;
  lVar20 = lStack_170;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_170 + uVar13 * 2,lVar10,&UNK_009b6240,uStack_158);
  uVar15 = uStack_160;
  lStack_1d0 = uVar13 * 2 + uStack_160;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar12,8,1,&UNK_009b6240,uVar16);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar18 = pcStack_b0;
  lVar6 = lStack_c0;
  lVar10 = lVar12 - uVar3;
  (*pcStack_b0)(lVar10,uVar5,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar10,lVar11);
  (*pcVar4)(lVar10,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x737265746c696620,0xe800000000000000,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20 + lStack_1d0,lVar12,&UNK_009b6240,uVar16);
  lStack_1d0 = uVar15 << 2;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar15 = uStack_150;
  lVar10 = lVar10 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar10,0xd,1,&UNK_009b6240,uVar16);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar10 - uStack_b8;
  (*pcVar18)(lVar12,uStack_94,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar12,lVar11);
  (*pcStack_a0)(lVar12,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x737265746c696620,0xe800000000000000,lVar11);
  lVar6 = lStack_1d0;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20 + lStack_1d0,lVar10,&UNK_009b6240,uVar16);
  uVar13 = uStack_160;
  lStack_1d0 = lVar6 + uStack_160;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - uVar15;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar12,8,1,&UNK_009b6240,uVar16);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  uVar16 = uStack_b8;
  lVar6 = lStack_c0;
  lVar10 = lVar12 - uStack_b8;
  (*pcStack_b0)(lVar10,uStack_94,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar10,lVar11);
  (*pcStack_a0)(lVar10,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x7374636566666520,0xe800000000000000,lVar11);
  uVar15 = uStack_158;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20 + lStack_1d0,lVar12,&UNK_009b6240,uStack_158);
  lStack_1d0 = lVar20 + uVar13 * 6;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar13 = uStack_150;
  lVar10 = lVar10 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar10,3,1,&UNK_009b6240,uVar15);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lStack_c0;
  lVar12 = lVar10 - uVar16;
  (*pcVar18)(lVar12,uVar5,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar12,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar12,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x726120,0xe300000000000000,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_1d0,lVar10,&UNK_009b6240,uVar15);
  lStack_1d0 = uStack_160 * 8;
  lStack_1d8 = uStack_160 * 7;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - uVar13;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar12,0x12,1,&UNK_009b6240,uVar15);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  uVar15 = uStack_b8;
  lVar10 = lVar12 - uStack_b8;
  (*pcStack_b0)(lVar10,uStack_94,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar10,lVar11);
  (*pcVar4)(lVar10,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0xd000000000000012,0x80000000008b9740,lVar11);
  uVar13 = uStack_158;
  lVar20 = lStack_170;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_170 + lStack_1d8,lVar12,&UNK_009b6240,uStack_158);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar10 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar10,0xd,1,&UNK_009b6240,uVar13);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar10 - uVar15;
  (*pcVar18)(lVar12,uVar5,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar12,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar12,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x6665206563616620,0xed00007374636566,lVar11);
  uVar13 = uStack_158;
  lVar6 = lStack_1d0;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20 + lStack_1d0,lVar10,&UNK_009b6240,uStack_158);
  lVar6 = lVar6 + uStack_160;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar12,0x12,1,&UNK_009b6240,uVar13);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lStack_c0;
  lVar20 = lVar12 - uVar15;
  (*pcVar18)(lVar20,uVar5,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar20,lVar11);
  (*pcVar4)(lVar20,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x6665206563616620,0xed00007374636566,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_170 + lVar6,lVar12,&UNK_009b6240,uVar13);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lStack_e0;
  lVar20 = lVar20 - uStack_e8;
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lStack_e0,0x7365736e654c,0xe600000000000000);
  puVar2 = puStack_d8;
  __s10Foundation6LocaleV7currentACvgZ(puStack_d8);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar20 - uStack_f8;
  (*pcStack_110)(lVar14,uStack_114,lStack_108);
  __s10Foundation23LocalizedStringResourceV_5table6locale6bundle7commentACSSAAE17LocalizationValueV_SSSgAA6LocaleVAC17BundleDescriptionOs06StaticC0VSgtcfC
            (lVar20,lVar6,0x74726f6853707041,0xec00000073747563,puVar2,lVar14,0,0,0x100);
  (*pcStack_128)(lVar20,0,1,lStack_120);
  lVar6 = lStack_1a0;
  __s10AppIntents0A8ShortcutV6intent7phrases10shortTitle15systemImageNameACx_SayAA0aC6PhraseVyxGG10Foundation23LocalizedStringResourceVSgSSSgYttcAA0A6IntentRzlufC
            (lStack_1a0,&pppuStack_90,lStack_1b8,lVar20,0xd000000000000010,0x80000000008b9760,
             &UNK_009b6240,uVar13);
  __s10AppIntents0A16ShortcutsBuilderO15buildExpressionyAA0A8ShortcutVAFFZ(lStack_198,lVar6);
  (*pcStack_d0)(lVar6,lStack_c8);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar14 - uStack_140;
  lStack_1a0 = lVar14;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar14 - extraout_x12_07;
  uStack_70 = 0;
  uStack_88 = 0;
  pppuStack_90 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_170 = lVar14;
  __s10AppIntents0A17DependencyManagerC6sharedACvgZ();
  ppppuVar9 = &pppuStack_90;
  __s10AppIntents0A10DependencyC3key7manager7defaultACyxGs11AnyHashableVSg_AA0aC7ManagerCxyXAtcfC
            (ppppuVar9,lVar6,0x1b88c4,0);
  lVar6 = 0xaf3318;
  pppuStack_90 = ppppuVar9;
  func_0x000115a8(0xaf3318,&UNK_007e33c8);
  lVar11 = 0xaf3320;
  func_0x000115a8(0xaf3320,&UNK_007e33d0);
  uStack_158 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar15 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  _swift_allocObject(lVar6,uVar15 + uStack_158 * 6,uVar13 | 7);
  uStack_1c8 = 0xc;
  lStack_1d0 = 6;
  *(undefined8 *)(lVar6 + 0x18) = 0xc;
  *(undefined8 *)(lVar6 + 0x10) = 6;
  lVar20 = lVar6 + uVar15;
  lVar11 = 0xaf3328;
  lStack_1b8 = lVar6;
  lStack_168 = lVar20;
  func_0x000115a8(0xaf3328,&UNK_007e33d8);
  uStack_160 = *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40);
  lVar12 = lVar11;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_150 = extraout_x12_08 + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar14 - uStack_150;
  FUN_001b83e4();
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar14,10,1,&UNK_009b6498,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  uVar13 = uStack_b8;
  lVar19 = lVar14 - uStack_b8;
  (*pcVar18)(lVar19,uStack_94,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar19,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar19,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x67696c746f705320,0xea00000000007468,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20,lVar14,&UNK_009b6498,lVar12);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar15 = uStack_150;
  lVar19 = lVar19 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar19,0xf,1,&UNK_009b6498,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar18 = pcStack_b0;
  lVar6 = lStack_c0;
  lVar10 = lVar19 - uVar13;
  (*pcStack_b0)(lVar10,uVar5,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar10,lVar11);
  (*pcVar4)(lVar10,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x67696c746f705320,0xea00000000007468,lVar11);
  uVar13 = uStack_158;
  lVar20 = lStack_168;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_168 + uStack_158,lVar19,&UNK_009b6498,lVar12);
  lStack_1d8 = uVar13 << 1;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar10 - uVar15;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar10,7,1,&UNK_009b6498,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar15 = uStack_b8;
  lVar6 = lStack_c0;
  lVar14 = lVar10 - uStack_b8;
  (*pcVar18)(lVar14,uStack_94,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar14,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar14,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x736f6564697620,0xe700000000000000,lVar11);
  lVar6 = lStack_1d8;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20 + lStack_1d8,lVar10,&UNK_009b6498,lVar12);
  uVar13 = uStack_158;
  lStack_1d8 = lVar6 + uStack_158;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar14 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar14,8,1,&UNK_009b6498,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  lVar6 = lStack_c0;
  lVar19 = lVar14 - uVar15;
  (*pcStack_b0)(lVar19,uStack_94,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar19,lVar11);
  (*pcVar4)(lVar19,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x756f7920726f6620,0xe800000000000000,lVar11);
  lVar10 = lStack_168;
  lStack_1e0 = lVar12;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_168 + lStack_1d8,lVar14,&UNK_009b6498,lVar12);
  lStack_1d8 = uVar13 << 2;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar19 = lVar19 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar19,9,1,&UNK_009b6498,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar15 = uStack_b8;
  lVar6 = lStack_c0;
  lVar14 = lVar19 - uStack_b8;
  (*pcVar18)(lVar14,uVar5,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar14,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar14,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x6e69646e65727420,0xe900000000000067,lVar11);
  lVar6 = lStack_1d8;
  lVar20 = lStack_1e0;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar10 + lStack_1d8,lVar19,&UNK_009b6498,lStack_1e0);
  lVar6 = lVar6 + uStack_158;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar14 - uStack_150;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar14,6,1,&UNK_009b6498,lVar20);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lStack_c0;
  lVar19 = lVar14 - uVar15;
  (*pcVar18)(lVar19,uVar5,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar19,lVar11);
  (*pcVar4)(lVar19,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x736c65657220,0xe600000000000000,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar10 + lVar6,lVar14,&UNK_009b6498,lVar20);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lStack_e0;
  lVar19 = lVar19 - uStack_e8;
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lStack_e0,0x6867696c746f7053,0xe900000000000074);
  puVar2 = puStack_d8;
  __s10Foundation6LocaleV7currentACvgZ(puStack_d8);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar19 - uStack_f8;
  (*pcStack_110)(lVar14,uStack_114,lStack_108);
  __s10Foundation23LocalizedStringResourceV_5table6locale6bundle7commentACSSAAE17LocalizationValueV_SSSgAA6LocaleVAC17BundleDescriptionOs06StaticC0VSgtcfC
            (lVar19,lVar6,0x74726f6853707041,0xec00000073747563,puVar2,lVar14,0,0,0x100);
  (*pcStack_128)(lVar19,0,1,lStack_120);
  lVar6 = lStack_170;
  __s10AppIntents0A8ShortcutV6intent7phrases10shortTitle15systemImageNameACx_SayAA0aC6PhraseVyxGG10Foundation23LocalizedStringResourceVSgSSSgYttcAA0A6IntentRzlufC
            (lStack_170,&pppuStack_90,lStack_1b8,lVar19,0x6c69662e79616c70,0xe90000000000006c,
             &UNK_009b6498,lVar20);
  __s10AppIntents0A16ShortcutsBuilderO15buildExpressionyAA0A8ShortcutVAFFZ(lStack_1a0,lVar6);
  (*pcStack_d0)(lVar6,lStack_c8);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar14 - uStack_140;
  lStack_1b8 = lVar14;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar14 - extraout_x12_09;
  uStack_70 = 0;
  uStack_88 = 0;
  pppuStack_90 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_1d8 = lVar14;
  __s10AppIntents0A17DependencyManagerC6sharedACvgZ();
  ppppuVar9 = &pppuStack_90;
  __s10AppIntents0A10DependencyC3key7manager7defaultACyxGs11AnyHashableVSg_AA0aC7ManagerCxyXAtcfC
            (ppppuVar9,lVar6,0x1b8ea0,0);
  lVar6 = 0xaf3330;
  pppuStack_90 = ppppuVar9;
  func_0x000115a8(0xaf3330,&UNK_007e33e0);
  lVar11 = 0xaf3338;
  func_0x000115a8(0xaf3338,&UNK_007e33e8);
  uStack_150 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar16 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  _swift_allocObject(lVar6,uVar16 + uStack_150 * 10,uVar13 | 7);
  *(undefined8 *)(lVar6 + 0x18) = uStack_1a8;
  *(long *)(lVar6 + 0x10) = lStack_1b0;
  lVar20 = lVar6 + uVar16;
  lVar11 = 0xaf3340;
  lStack_1e0 = lVar6;
  lStack_168 = lVar20;
  func_0x000115a8(0xaf3340,&UNK_007e33f0);
  uStack_158 = *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40);
  lVar10 = lVar11;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_160 = extraout_x12_10 + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar14 - uStack_160;
  FUN_001b89c4();
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar14,8,1,&UNK_009b6560,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  lVar6 = lVar14 - uVar15;
  (*pcStack_b0)(lVar6,uStack_94,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar6,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar6,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x736569726f745320,0xe800000000000000,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20,lVar14,&UNK_009b6560,lVar10);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar13 = uStack_160;
  lVar6 = lVar6 - uStack_160;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar6,0xd,1,&UNK_009b6560,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lStack_c0;
  lVar14 = lVar6 - uVar15;
  (*pcVar18)(lVar14,uVar5,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar14,lVar11);
  (*pcVar4)(lVar14,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x736569726f745320,0xe800000000000000,lVar11);
  uVar15 = uStack_150;
  lVar20 = lStack_168;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_168 + uStack_150,lVar6,&UNK_009b6560,lVar10);
  lStack_1b0 = uVar15 << 1;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar14 - uVar13;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar14,9,1,&UNK_009b6560,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar18 = pcStack_b0;
  uVar16 = uStack_b8;
  lVar19 = lVar14 - uStack_b8;
  (*pcStack_b0)(lVar19,uStack_94,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar19,lVar11);
  (*pcStack_a0)(lVar19,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x65766f6373694420,0xe900000000000072,lVar11);
  lVar6 = lStack_1b0;
  lStack_170 = lVar10;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20 + lStack_1b0,lVar14,&UNK_009b6560,lVar10);
  uVar15 = uStack_150;
  lStack_1b0 = lVar6 + uStack_150;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar13 = uStack_160;
  lVar19 = lVar19 - uStack_160;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar19,5,1,&UNK_009b6560,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  lVar14 = lVar19 - uVar16;
  (*pcVar18)(lVar14,uStack_94,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar14,lVar11);
  (*pcStack_a0)(lVar14,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x7377656e20,0xe500000000000000,lVar11);
  lVar10 = lStack_168;
  lVar20 = lStack_170;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_168 + lStack_1b0,lVar19,&UNK_009b6560,lStack_170);
  lStack_1b0 = uVar15 << 2;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar14 - uVar13;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar14,6,1,&UNK_009b6560,lVar20);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar13 = uStack_b8;
  lVar19 = lVar14 - uStack_b8;
  (*pcStack_b0)(lVar19,uVar5,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar19,lVar11);
  pcVar18 = pcStack_a0;
  (*pcStack_a0)(lVar19,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x73776f687320,0xe600000000000000,lVar11);
  lVar6 = lStack_1b0;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar10 + lStack_1b0,lVar14,&UNK_009b6560,lVar20);
  lVar6 = lVar6 + uStack_150;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar19 = lVar19 - uStack_160;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar19,9,1,&UNK_009b6560,lVar20);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  lVar14 = lVar19 - uVar13;
  (*pcStack_b0)(lVar14,uStack_94,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar14,lVar11);
  (*pcVar18)(lVar14,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x726f746165726320,0xe900000000000073,lVar11);
  lVar10 = lStack_168;
  lVar20 = lStack_170;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_168 + lVar6,lVar19,&UNK_009b6560,lStack_170);
  lStack_1b0 = lVar10 + uStack_150 * 6;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar14 - uStack_160;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar14,0xb,1,&UNK_009b6560,lVar20);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar18 = pcStack_b0;
  lVar19 = lVar14 - uVar13;
  (*pcStack_b0)(lVar19,uVar5,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar19,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar19,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x74532070616e5320,0xeb00000000737261,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_1b0,lVar14,&UNK_009b6560,lVar20);
  lStack_1b0 = uStack_150 * 8;
  lStack_1e8 = uStack_150 * 7;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar13 = uStack_160;
  lVar19 = lVar19 - uStack_160;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar19,0xf,1,&UNK_009b6560,lVar20);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar19 - uStack_b8;
  (*pcVar18)(lVar14,uVar5,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar14,lVar11);
  (*pcVar4)(lVar14,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x20646e6569724620,0xef736569726f7453,lVar11);
  lVar10 = lStack_168;
  lVar6 = lStack_170;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_168 + lStack_1e8,lVar19,&UNK_009b6560,lStack_170);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar14 - uVar13;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar14,0x14,1,&UNK_009b6560,lVar6);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  uVar13 = uStack_b8;
  lVar19 = lVar14 - uStack_b8;
  (*pcStack_b0)(lVar19,uStack_94,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar19,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar19,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x20646e6569724620,0xef736569726f7453,lVar11);
  lVar20 = lStack_170;
  lVar6 = lStack_1b0;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar10 + lStack_1b0,lVar14,&UNK_009b6560,lStack_170);
  uStack_150 = lVar6 + uStack_150;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar19 = lVar19 - uStack_160;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar19,0xe,1,&UNK_009b6560,lVar20);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar19 - uVar13;
  (*pcVar18)(lVar14,uVar5,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar14,lVar11);
  (*pcVar4)(lVar14,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x6972637362757320,0xee00736e6f697470,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_168 + uStack_150,lVar19,&UNK_009b6560,lVar20);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lStack_e0;
  lVar14 = lVar14 - uStack_e8;
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lStack_e0,0x736569726f7453,0xe700000000000000);
  puVar2 = puStack_d8;
  __s10Foundation6LocaleV7currentACvgZ(puStack_d8);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar14 - uStack_f8;
  (*pcStack_110)(lVar10,uStack_114,lStack_108);
  __s10Foundation23LocalizedStringResourceV_5table6locale6bundle7commentACSSAAE17LocalizationValueV_SSSgAA6LocaleVAC17BundleDescriptionOs06StaticC0VSgtcfC
            (lVar14,lVar6,0x74726f6853707041,0xec00000073747563,puVar2,lVar10,0,0,0x100);
  (*pcStack_128)(lVar14,0,1,lStack_120);
  lVar6 = lStack_1d8;
  __s10AppIntents0A8ShortcutV6intent7phrases10shortTitle15systemImageNameACx_SayAA0aC6PhraseVyxGG10Foundation23LocalizedStringResourceVSgSSSgYttcAA0A6IntentRzlufC
            (lStack_1d8,&pppuStack_90,lStack_1e0,lVar14,0x662e6172656d6163,0xee00737265746c69,
             &UNK_009b6560,lVar20);
  __s10AppIntents0A16ShortcutsBuilderO15buildExpressionyAA0A8ShortcutVAFFZ(lStack_1b8,lVar6);
  (*pcStack_d0)(lVar6,lStack_c8);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar10 - uStack_140;
  lStack_170 = lVar10;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar10 - extraout_x12_11;
  uStack_70 = 0;
  uStack_88 = 0;
  pppuStack_90 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_1b0 = lVar10;
  __s10AppIntents0A17DependencyManagerC6sharedACvgZ();
  ppppuVar9 = &pppuStack_90;
  __s10AppIntents0A10DependencyC3key7manager7defaultACyxGs11AnyHashableVSg_AA0aC7ManagerCxyXAtcfC
            (ppppuVar9,lVar6,0x1b6b7c,0);
  lVar6 = 0xaf3348;
  pppuStack_90 = ppppuVar9;
  func_0x000115a8(0xaf3348,&UNK_007e33f8);
  lVar11 = 0xaf3350;
  func_0x000115a8(0xaf3350,&UNK_007e3400);
  uStack_150 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar15 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  _swift_allocObject(lVar6,uVar15 + uStack_150 * 6,uVar13 | 7);
  *(undefined8 *)(lVar6 + 0x18) = uStack_1c8;
  *(long *)(lVar6 + 0x10) = lStack_1d0;
  lVar20 = lVar6 + uVar15;
  lVar11 = 0xaf3358;
  lStack_1d8 = lVar6;
  lStack_168 = lVar20;
  func_0x000115a8(0xaf3358,&UNK_007e3408);
  uStack_158 = *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40);
  lVar14 = lVar11;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_160 = extraout_x12_12 + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar10 - uStack_160;
  FUN_001b66a4();
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar10,5,1,&UNK_009b60b0,lVar14);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  uVar13 = uStack_b8;
  lVar19 = lVar10 - uStack_b8;
  (*pcStack_b0)(lVar19,uStack_94,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar19,lVar11);
  (*pcStack_a0)(lVar19,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x7461684320,0xe500000000000000,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20,lVar10,&UNK_009b60b0,lVar14);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar19 = lVar19 - uStack_160;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar19,0xb,1,&UNK_009b60b0,lVar14);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar19 - uVar13;
  (*pcVar18)(lVar10,uVar5,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar10,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar10,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x737461684320,0xe600000000000000,lVar11);
  uVar13 = uStack_150;
  lVar6 = lStack_168;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_168 + uStack_150,lVar19,&UNK_009b60b0,lVar14);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar10 - uStack_160;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar10,6,1,&UNK_009b60b0,lVar14);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  lVar20 = lStack_c0;
  lVar12 = lVar10 - uStack_b8;
  (*pcVar18)(lVar12,uStack_94,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar12,lVar11);
  (*pcVar4)(lVar12,lVar20);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x737461684320,0xe600000000000000,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar6 + uVar13 * 2,lVar10,&UNK_009b60b0,lVar14);
  lStack_1d0 = uVar13 * 2 + uStack_150;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar13 = uStack_160;
  lVar12 = lVar12 - uStack_160;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar12,9,1,&UNK_009b60b0,lVar14);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar18 = pcStack_b0;
  uVar15 = uStack_b8;
  lVar19 = lVar12 - uStack_b8;
  (*pcStack_b0)(lVar19,uVar5,lVar20);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar19,lVar11);
  (*pcVar4)(lVar19,lVar20);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x6567617373656d20,0xe900000000000073,lVar11);
  lVar20 = lStack_168;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_168 + lStack_1d0,lVar12,&UNK_009b60b0,lVar14);
  lStack_1d0 = uStack_150 << 2;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar19 = lVar19 - uVar13;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar19,6,1,&UNK_009b60b0,lVar14);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  lVar10 = lStack_c0;
  lVar12 = lVar19 - uVar15;
  (*pcVar18)(lVar12,uStack_94,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar12,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar12,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x786f626e6920,0xe600000000000000,lVar11);
  lVar6 = lStack_1d0;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20 + lStack_1d0,lVar19,&UNK_009b60b0,lVar14);
  lVar6 = lVar6 + uStack_150;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - uStack_160;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar12,4,1,&UNK_009b60b0,lVar14);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar20 = lVar12 - uStack_b8;
  (*pcVar18)(lVar20,uVar5,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar20,lVar11);
  (*pcVar4)(lVar20,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x736d6420,0xe400000000000000,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_168 + lVar6,lVar12,&UNK_009b60b0,lVar14);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lStack_e0;
  lVar20 = lVar20 - uStack_e8;
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lStack_e0,0x74616843,0xe400000000000000);
  puVar2 = puStack_d8;
  __s10Foundation6LocaleV7currentACvgZ(puStack_d8);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar20 - uStack_f8;
  (*pcStack_110)(lVar12,uStack_114,lStack_108);
  __s10Foundation23LocalizedStringResourceV_5table6locale6bundle7commentACSSAAE17LocalizationValueV_SSSgAA6LocaleVAC17BundleDescriptionOs06StaticC0VSgtcfC
            (lVar20,lVar6,0x74726f6853707041,0xec00000073747563,puVar2,lVar12,0,0,0x100);
  (*pcStack_128)(lVar20,0,1,lStack_120);
  lVar6 = lStack_1b0;
  __s10AppIntents0A8ShortcutV6intent7phrases10shortTitle15systemImageNameACx_SayAA0aC6PhraseVyxGG10Foundation23LocalizedStringResourceVSgSSSgYttcAA0A6IntentRzlufC
            (lStack_1b0,&pppuStack_90,lStack_1d8,lVar20,0x2e6567617373656d,0xec0000006c6c6966,
             &UNK_009b60b0,lVar14);
  __s10AppIntents0A16ShortcutsBuilderO15buildExpressionyAA0A8ShortcutVAFFZ(lStack_170,lVar6);
  (*pcStack_d0)(lVar6,lStack_c8);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - uStack_140;
  uStack_150 = lVar12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - extraout_x12_13;
  uStack_70 = 0;
  uStack_88 = 0;
  pppuStack_90 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_158 = lVar12;
  __s10AppIntents0A17DependencyManagerC6sharedACvgZ();
  ppppuVar9 = &pppuStack_90;
  __s10AppIntents0A10DependencyC3key7manager7defaultACyxGs11AnyHashableVSg_AA0aC7ManagerCxyXAtcfC
            (ppppuVar9,lVar6,0x1b7154,0);
  lVar6 = 0xaf3360;
  pppuStack_90 = ppppuVar9;
  func_0x000115a8(0xaf3360,&UNK_007e3410);
  lVar11 = 0xaf3368;
  func_0x000115a8(0xaf3368,&UNK_007e3418);
  lStack_130 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar15 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  _swift_allocObject(lVar6,uVar15 + lStack_130 * 7,uVar13 | 7);
  *(undefined8 *)(lVar6 + 0x18) = 0xe;
  *(undefined8 *)(lVar6 + 0x10) = 7;
  lVar20 = lVar6 + uVar15;
  lVar11 = 0xaf3370;
  uStack_160 = lVar6;
  func_0x000115a8(0xaf3370,&UNK_007e3420);
  uStack_140 = *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40);
  lVar14 = lVar11;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_138 = extraout_x12_14 + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar12 - uStack_138;
  FUN_001b6c7c();
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar12,6,1,&UNK_009b6178,lVar14);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  uVar13 = uStack_b8;
  lVar19 = lVar12 - uStack_b8;
  (*pcStack_b0)(lVar19,uStack_94,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar19,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar19,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x73656d614720,0xe600000000000000,lVar11);
  lStack_148 = lVar20;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20,lVar12,&UNK_009b6178,lVar14);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar19 = lVar19 - uStack_138;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar19,0xb,1,&UNK_009b6178,lVar14);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lStack_c0;
  lVar12 = lVar19 - uVar13;
  (*pcVar18)(lVar12,uVar5,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar12,lVar11);
  (*pcVar4)(lVar12,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x73656d614720,0xe600000000000000,lVar11);
  lVar6 = lStack_130;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20 + lStack_130,lVar19,&UNK_009b6178,lVar14);
  lStack_168 = lVar6 << 1;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar13 = uStack_138;
  lVar12 = lVar12 - uStack_138;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar12,0xb,1,&UNK_009b6178,lVar14);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar19 = lVar12 - uStack_b8;
  (*pcVar18)(lVar19,uStack_94,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar19,lVar11);
  (*pcVar4)(lVar19,lVar10);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x61472070616e5320,0xeb0000000073656d,lVar11);
  lVar20 = lStack_148;
  lVar6 = lStack_168;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_148 + lStack_168,lVar12,&UNK_009b6178,lVar14);
  lVar10 = lStack_130;
  lStack_168 = lVar6 + lStack_130;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar19 = lVar19 - uVar13;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar19,0x10,1,&UNK_009b6178,lVar14);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar15 = uStack_b8;
  lVar12 = lStack_c0;
  lVar6 = lVar19 - uStack_b8;
  (*pcStack_b0)(lVar6,uStack_94,lStack_c0);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar6,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar6,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x614720696e694d20,0xeb0000000073656d,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar20 + lStack_168,lVar19,&UNK_009b6178,lVar14);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar13 = uStack_138;
  lVar6 = lVar6 - uStack_138;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar6,5,1,&UNK_009b6178,lVar14);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar18 = pcStack_b0;
  lVar19 = lVar6 - uVar15;
  (*pcStack_b0)(lVar19,uStack_94,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar19,lVar11);
  (*pcVar4)(lVar19,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x79616c7020,0xe500000000000000,lVar11);
  lStack_1b0 = lVar14;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_148 + lVar10 * 4,lVar6,&UNK_009b6178,lVar14);
  lVar6 = lVar10 * 4 + lStack_130;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar19 = lVar19 - uVar13;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar19,7,1,&UNK_009b6178,lVar14);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar5 = uStack_94;
  uVar13 = uStack_b8;
  lVar14 = lVar19 - uStack_b8;
  (*pcVar18)(lVar14,uStack_94,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar14,lVar11);
  pcVar18 = pcStack_a0;
  (*pcStack_a0)(lVar14,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x676e696d616720,0xe700000000000000,lVar11);
  lVar10 = lStack_148;
  lVar20 = lStack_1b0;
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lStack_148 + lVar6,lVar19,&UNK_009b6178,lStack_1b0);
  lVar6 = lStack_130 * 6;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar14 - uStack_138;
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV15literalCapacity18interpolationCountAEyx_GSi_SitcfC
            (lVar14,0xb,1,&UNK_009b6178,lVar20);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar19 = lVar14 - uVar13;
  (*pcStack_b0)(lVar19,uVar5,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV06appendF0yyAA0acD5TokenOF(lVar19,lVar11);
  (*pcVar18)(lVar19,lVar12);
  __s10AppIntents0A14ShortcutPhraseV19StringInterpolationV13appendLiteralyySSF
            (0x614720696e694d20,0xeb0000000073656d,lVar11);
  __s10AppIntents0A14ShortcutPhraseV19stringInterpolationACyxGAC06StringF0Vyx_G_tcfC
            (lVar10 + lVar6,lVar14,&UNK_009b6178,lVar20);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lStack_e0;
  lVar19 = lVar19 - uStack_e8;
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lStack_e0,0x73656d6147,0xe500000000000000);
  puVar2 = puStack_d8;
  __s10Foundation6LocaleV7currentACvgZ(puStack_d8);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = lVar19 - uStack_f8;
  (*pcStack_110)(lVar11,uStack_114,lStack_108);
  __s10Foundation23LocalizedStringResourceV_5table6locale6bundle7commentACSSAAE17LocalizationValueV_SSSgAA6LocaleVAC17BundleDescriptionOs06StaticC0VSgtcfC
            (lVar19,lVar6,0x74726f6853707041,0xec00000073747563,puVar2,lVar11,0,0,0x100);
  (*pcStack_128)(lVar19,0,1,lStack_120);
  uVar13 = uStack_158;
  __s10AppIntents0A8ShortcutV6intent7phrases10shortTitle15systemImageNameACx_SayAA0aC6PhraseVyxGG10Foundation23LocalizedStringResourceVSgSSSgYttcAA0A6IntentRzlufC
            (uStack_158,&pppuStack_90,uStack_160,lVar19,0xd000000000000013,0x80000000008b9780,
             &UNK_009b6178,lVar20);
  __s10AppIntents0A16ShortcutsBuilderO15buildExpressionyAA0A8ShortcutVAFFZ(uStack_150,uVar13);
  lVar19 = lStack_c8;
  (*pcStack_d0)(uVar13,lStack_c8);
  lVar6 = 0xaf3378;
  func_0x000115a8(0xaf3378,&UNK_007e3428);
  lVar20 = lStack_190;
  lVar17 = *(long *)(lStack_190 + 0x48);
  bVar1 = *(byte *)(lStack_190 + 0x50);
  _swift_allocObject();
  *(undefined8 *)(lVar6 + 0x18) = 0x10;
  *(undefined8 *)(lVar6 + 0x10) = 8;
  lVar11 = lVar6 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff));
  pcVar18 = *(code **)(lVar20 + 0x10);
  (*pcVar18)(lVar11,lStack_178,lVar19);
  (*pcVar18)(lVar11 + lVar17,lStack_180,lVar19);
  (*pcVar18)(lVar11 + lVar17 * 2,lStack_188,lVar19);
  lVar12 = lStack_198;
  (*pcVar18)(lVar11 + lVar17 * 3,lStack_198,lVar19);
  lVar10 = lStack_1a0;
  (*pcVar18)(lVar11 + lVar17 * 4,lStack_1a0,lVar19);
  lVar20 = lStack_1b8;
  (*pcVar18)(lVar11 + lVar17 * 5,lStack_1b8,lVar19);
  lVar14 = lStack_170;
  (*pcVar18)(lVar11 + lVar17 * 6,lStack_170,lVar19);
  uVar13 = uStack_150;
  (*pcVar18)(lVar11 + lVar17 * 7,uStack_150,lVar19);
  lVar11 = lVar6;
  __s10AppIntents0A16ShortcutsBuilderO10buildBlockySayAA0A8ShortcutVGAFd_tFZ(lVar6);
  _swift_release(lVar6);
  pcVar18 = pcStack_d0;
  (*pcStack_d0)(uVar13,lVar19);
  (*pcVar18)(lVar14,lVar19);
  (*pcVar18)(lVar20,lVar19);
  (*pcVar18)(lVar10,lVar19);
  (*pcVar18)(lVar12,lVar19);
  (*pcVar18)(lStack_188,lVar19);
  (*pcVar18)(lStack_180,lVar19);
  (*pcVar18)(lStack_178,lVar19);
  return lVar11;
}



/* Entry: 001c05f0; end: 001c06db;  */

void FUN_001c05f0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001c06dc; end: 001c06f7;  */

bool FUN_001c06dc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001c06f8; end: 001c0797;  */

void FUN_001c06f8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001c0798; end: 001c079b;  */

void FUN_001c0798(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af33b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e34b8;
  _swift_getWitnessTable(&UNK_007e34b8,&UNK_009b6790);
  puRam0000000000af33b8 = puVar1;
  return;
}



/* Entry: 001c079c; end: 001c07db;  */

void FUN_001c079c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af33b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e34b8;
  _swift_getWitnessTable(&UNK_007e34b8,&UNK_009b6790);
  puRam0000000000af33b8 = puVar1;
  return;
}



/* Entry: 001c07dc; end: 001c07df;  */

void FUN_001c07dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000af33c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xaf33c8;
  FUN_00016c74(0xaf33c8,&UNK_007e3478);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  puRam0000000000af33c0 = puVar2;
  return;
}



/* Entry: 001c07e0; end: 001c082f;  */

void FUN_001c07e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000af33c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xaf33c8;
  FUN_00016c74(0xaf33c8,&UNK_007e3478);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  puRam0000000000af33c0 = puVar2;
  return;
}



/* Entry: 001c0830; end: 001c0833;  */

void FUN_001c0830(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af33d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e34e0;
  _swift_getWitnessTable(&UNK_007e34e0,&UNK_009b6820);
  puRam0000000000af33d0 = puVar1;
  return;
}



/* Entry: 001c0834; end: 001c0873;  */

void FUN_001c0834(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af33d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e34e0;
  _swift_getWitnessTable(&UNK_007e34e0,&UNK_009b6820);
  puRam0000000000af33d0 = puVar1;
  return;
}



/* Entry: 001c0874; end: 001c0b3f;  */

void FUN_001c0874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}


