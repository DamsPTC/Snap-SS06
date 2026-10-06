/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001b59b8; end: 001b59f7;  */

void FUN_001b59b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2750;
  _swift_getWitnessTable(&UNK_007e2750,&UNK_009b5dd0);
  puRam0000000000af2f28 = puVar1;
  return;
}



/* Entry: 001b59f8; end: 001b59fb;  */

void FUN_001b59f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e27f0;
  _swift_getWitnessTable(&UNK_007e27f0,&UNK_009b5e60);
  puRam0000000000af2f30 = puVar1;
  return;
}



/* Entry: 001b59fc; end: 001b5a3b;  */

void FUN_001b59fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e27f0;
  _swift_getWitnessTable(&UNK_007e27f0,&UNK_009b5e60);
  puRam0000000000af2f30 = puVar1;
  return;
}



/* Entry: 001b5a3c; end: 001b5a3f;  */

void FUN_001b5a3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2890;
  _swift_getWitnessTable(&UNK_007e2890,&UNK_009b5ef0);
  puRam0000000000af2f38 = puVar1;
  return;
}



/* Entry: 001b5a40; end: 001b5a7f;  */

void FUN_001b5a40(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2890;
  _swift_getWitnessTable(&UNK_007e2890,&UNK_009b5ef0);
  puRam0000000000af2f38 = puVar1;
  return;
}



/* Entry: 001b5a80; end: 001b5e8b;  */

int FUN_001b5a80(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001b5afc;
        goto LAB_001b5ae0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001b5ae0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_001b5afc:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001b5e8c; end: 001b5ebb;  */

undefined8 * FUN_001b5e8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_retain(uVar1);
  return param_1;
}



/* Entry: 001b5ebc; end: 001b5ec3;  */

void FUN_001b5ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 001b5ec4; end: 001b5f2f;  */

undefined8 * FUN_001b5ec4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Entry: 001b5f30; end: 001b5ff3;  */

int FUN_001b5f30(ulong *param_1,int param_2)

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



/* Entry: 001b5ff4; end: 001b6033;  */

void FUN_001b5ff4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3038 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2a20;
  _swift_getWitnessTable(&UNK_007e2a20,&UNK_009b5fe8);
  puRam0000000000af3038 = puVar1;
  return;
}



/* Entry: 001b6034; end: 001b6037;  */

void FUN_001b6034(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3040 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2a48;
  _swift_getWitnessTable(&UNK_007e2a48,&UNK_009b5fe8);
  puRam0000000000af3040 = puVar1;
  return;
}



/* Entry: 001b6038; end: 001b6077;  */

void FUN_001b6038(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3040 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2a48;
  _swift_getWitnessTable(&UNK_007e2a48,&UNK_009b5fe8);
  puRam0000000000af3040 = puVar1;
  return;
}



/* Entry: 001b6078; end: 001b6087;  */

void FUN_001b6078(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_008461ac,1);
  return;
}



/* Entry: 001b6088; end: 001b60c7;  */

void FUN_001b6088(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_001b60c8();
  uStack_30 = param_2;
  uStack_28 = param_1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_0099ab08,1);
  return;
}



/* Entry: 001b60c8; end: 001b6107;  */

void FUN_001b60c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3048 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2988;
  _swift_getWitnessTable(&UNK_007e2988,&UNK_009b5fe8);
  puRam0000000000af3048 = puVar1;
  return;
}



/* Entry: 001b6108; end: 001b6277;  */

void FUN_001b6108(void)

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
  FUN_00028010(uVar2,0xb65bd8);
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lVar4,0x6d6143206e65704f,0xeb00000000617265);
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



/* Entry: 001b6278; end: 001b62e7;  */

void FUN_001b6278(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000000af3050 != -1) {
    _swift_once(0xaf3050,FUN_001b6108);
  }
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceVMa();
  lVar2 = lVar1;
  FUN_00028010();
                    /* WARNING: Could not recover jumptable at 0x001b62cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 001b62e8; end: 001b62ef;  */

undefined8 FUN_001b62e8(void)

{
  return 1;
}



/* Entry: 001b62f0; end: 001b6357;  */

void FUN_001b62f0(void)

{
  __s10AppIntents0A6IntentPAAE14supportedModesAA0cE0VvgZ();
  return;
}



/* Entry: 001b6358; end: 001b6373;  */

void FUN_001b6358(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b6374,0,0);
  return;
}



/* Entry: 001b6374; end: 001b6443;  */

void FUN_001b6374(void)

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
  plVar3[1] = 0x1b63e8;
                    /* WARNING: Could not recover jumptable at 0x001b63e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(0);
  return;
}



/* Entry: 001b6444; end: 001b649f;  */

void FUN_001b6444(void)

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
                    /* WARNING: Could not recover jumptable at 0x001b649c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b64a0; end: 001b64e7;  */

void FUN_001b64a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_release(uVar1);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x001b64e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b64e8; end: 001b6567;  */

void FUN_001b64e8(undefined8 *param_1)

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
            (&uStack_60,uVar1,0x1b65a4,0);
  *param_1 = puVar2;
  return;
}



/* Entry: 001b6568; end: 001b6593;  */

void FUN_001b6568(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_001b60c8();
  __s10AppIntents0A6IntentPAAE20persistentIdentifierSSvgZ(param_1,uVar1);
  return;
}



/* Entry: 001b6594; end: 001b65cf;  */

undefined1  [16] FUN_001b6594(void)

{
  return ZEXT816(0x9b5fe8);
}



/* Entry: 001b65d0; end: 001b660f;  */

void FUN_001b65d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2b30;
  _swift_getWitnessTable(&UNK_007e2b30,&UNK_009b60b0);
  puRam0000000000af3058 = puVar1;
  return;
}



/* Entry: 001b6610; end: 001b6613;  */

void FUN_001b6610(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2b58;
  _swift_getWitnessTable(&UNK_007e2b58,&UNK_009b60b0);
  puRam0000000000af3060 = puVar1;
  return;
}



/* Entry: 001b6614; end: 001b6653;  */

void FUN_001b6614(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2b58;
  _swift_getWitnessTable(&UNK_007e2b58,&UNK_009b60b0);
  puRam0000000000af3060 = puVar1;
  return;
}



/* Entry: 001b6654; end: 001b6663;  */

void FUN_001b6654(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_008461f0,1);
  return;
}



/* Entry: 001b6664; end: 001b66a3;  */

void FUN_001b6664(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_001b66a4();
  uStack_30 = param_2;
  uStack_28 = param_1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_0099ab08,1);
  return;
}



/* Entry: 001b66a4; end: 001b66e3;  */

void FUN_001b66a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2a98;
  _swift_getWitnessTable(&UNK_007e2a98,&UNK_009b60b0);
  puRam0000000000af3068 = puVar1;
  return;
}



/* Entry: 001b66e4; end: 001b684f;  */

void FUN_001b66e4(void)

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
  FUN_00028010(uVar2,0xb65bf0);
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lVar4,0x616843206e65704f,0xe900000000000074);
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



/* Entry: 001b6850; end: 001b68bf;  */

void FUN_001b6850(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000000af3070 != -1) {
    _swift_once(0xaf3070,FUN_001b66e4);
  }
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceVMa();
  lVar2 = lVar1;
  FUN_00028010();
                    /* WARNING: Could not recover jumptable at 0x001b68a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 001b68c0; end: 001b68c7;  */

undefined8 FUN_001b68c0(void)

{
  return 1;
}



/* Entry: 001b68c8; end: 001b692f;  */

void FUN_001b68c8(void)

{
  __s10AppIntents0A6IntentPAAE14supportedModesAA0cE0VvgZ();
  return;
}



/* Entry: 001b6930; end: 001b694b;  */

void FUN_001b6930(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b694c,0,0);
  return;
}



/* Entry: 001b694c; end: 001b6a1b;  */

void FUN_001b694c(void)

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
  plVar3[1] = 0x1b69c0;
                    /* WARNING: Could not recover jumptable at 0x001b69bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(6);
  return;
}



/* Entry: 001b6a1c; end: 001b6a77;  */

void FUN_001b6a1c(void)

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
                    /* WARNING: Could not recover jumptable at 0x001b6a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b6a78; end: 001b6abf;  */

void FUN_001b6a78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_release(uVar1);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x001b6abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b6ac0; end: 001b6b3f;  */

void FUN_001b6ac0(undefined8 *param_1)

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
            (&uStack_60,uVar1,0x1b6b7c,0);
  *param_1 = puVar2;
  return;
}



/* Entry: 001b6b40; end: 001b6b6b;  */

void FUN_001b6b40(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_001b66a4();
  __s10AppIntents0A6IntentPAAE20persistentIdentifierSSvgZ(param_1,uVar1);
  return;
}



/* Entry: 001b6b6c; end: 001b6ba7;  */

undefined1  [16] FUN_001b6b6c(void)

{
  return ZEXT816(0x9b60b0);
}



/* Entry: 001b6ba8; end: 001b6be7;  */

void FUN_001b6ba8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3078 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2c40;
  _swift_getWitnessTable(&UNK_007e2c40,&UNK_009b6178);
  puRam0000000000af3078 = puVar1;
  return;
}



/* Entry: 001b6be8; end: 001b6beb;  */

void FUN_001b6be8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2c68;
  _swift_getWitnessTable(&UNK_007e2c68,&UNK_009b6178);
  puRam0000000000af3080 = puVar1;
  return;
}



/* Entry: 001b6bec; end: 001b6c2b;  */

void FUN_001b6bec(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2c68;
  _swift_getWitnessTable(&UNK_007e2c68,&UNK_009b6178);
  puRam0000000000af3080 = puVar1;
  return;
}



/* Entry: 001b6c2c; end: 001b6c3b;  */

void FUN_001b6c2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_00846234,1);
  return;
}



/* Entry: 001b6c3c; end: 001b6c7b;  */

void FUN_001b6c3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_001b6c7c();
  uStack_30 = param_2;
  uStack_28 = param_1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_0099ab08,1);
  return;
}



/* Entry: 001b6c7c; end: 001b6cbb;  */

void FUN_001b6c7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3088 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2ba8;
  _swift_getWitnessTable(&UNK_007e2ba8,&UNK_009b6178);
  puRam0000000000af3088 = puVar1;
  return;
}



/* Entry: 001b6cbc; end: 001b6e27;  */

void FUN_001b6cbc(void)

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
  FUN_00028010(uVar2,0xb65c08);
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lVar4,0x6d6147206e65704f,0xea00000000007365);
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



/* Entry: 001b6e28; end: 001b6e97;  */

void FUN_001b6e28(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000000af3090 != -1) {
    _swift_once(0xaf3090,FUN_001b6cbc);
  }
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceVMa();
  lVar2 = lVar1;
  FUN_00028010();
                    /* WARNING: Could not recover jumptable at 0x001b6e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 001b6e98; end: 001b6e9f;  */

undefined8 FUN_001b6e98(void)

{
  return 1;
}



/* Entry: 001b6ea0; end: 001b6f07;  */

void FUN_001b6ea0(void)

{
  __s10AppIntents0A6IntentPAAE14supportedModesAA0cE0VvgZ();
  return;
}



/* Entry: 001b6f08; end: 001b6f23;  */

void FUN_001b6f08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b6f24,0,0);
  return;
}



/* Entry: 001b6f24; end: 001b6ff3;  */

void FUN_001b6f24(void)

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
  plVar3[1] = 0x1b6f98;
                    /* WARNING: Could not recover jumptable at 0x001b6f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(7);
  return;
}



/* Entry: 001b6ff4; end: 001b704f;  */

void FUN_001b6ff4(void)

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
                    /* WARNING: Could not recover jumptable at 0x001b704c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b7050; end: 001b7097;  */

void FUN_001b7050(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_release(uVar1);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x001b7094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b7098; end: 001b7117;  */

void FUN_001b7098(undefined8 *param_1)

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
            (&uStack_60,uVar1,0x1b7154,0);
  *param_1 = puVar2;
  return;
}



/* Entry: 001b7118; end: 001b7143;  */

void FUN_001b7118(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_001b6c7c();
  __s10AppIntents0A6IntentPAAE20persistentIdentifierSSvgZ(param_1,uVar1);
  return;
}



/* Entry: 001b7144; end: 001b717f;  */

undefined1  [16] FUN_001b7144(void)

{
  return ZEXT816(0x9b6178);
}



/* Entry: 001b7180; end: 001b71bf;  */

void FUN_001b7180(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2d50;
  _swift_getWitnessTable(&UNK_007e2d50,&UNK_009b6240);
  puRam0000000000af3098 = puVar1;
  return;
}



/* Entry: 001b71c0; end: 001b71c3;  */

void FUN_001b71c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af30a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2d78;
  _swift_getWitnessTable(&UNK_007e2d78,&UNK_009b6240);
  puRam0000000000af30a0 = puVar1;
  return;
}



/* Entry: 001b71c4; end: 001b7203;  */

void FUN_001b71c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af30a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2d78;
  _swift_getWitnessTable(&UNK_007e2d78,&UNK_009b6240);
  puRam0000000000af30a0 = puVar1;
  return;
}



/* Entry: 001b7204; end: 001b7213;  */

void FUN_001b7204(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_00846278,1);
  return;
}



/* Entry: 001b7214; end: 001b7253;  */

void FUN_001b7214(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_001b7254();
  uStack_30 = param_2;
  uStack_28 = param_1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_0099ab08,1);
  return;
}



/* Entry: 001b7254; end: 001b7293;  */

void FUN_001b7254(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af30a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2cb8;
  _swift_getWitnessTable(&UNK_007e2cb8,&UNK_009b6240);
  puRam0000000000af30a8 = puVar1;
  return;
}



/* Entry: 001b7294; end: 001b7403;  */

void FUN_001b7294(void)

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
  FUN_00028010(uVar2,0xb65c20);
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lVar4,0x6e654c206e65704f,0xeb00000000736573);
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



/* Entry: 001b7404; end: 001b7473;  */

void FUN_001b7404(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000000af30b0 != -1) {
    _swift_once(0xaf30b0,FUN_001b7294);
  }
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceVMa();
  lVar2 = lVar1;
  FUN_00028010();
                    /* WARNING: Could not recover jumptable at 0x001b7458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 001b7474; end: 001b747b;  */

undefined8 FUN_001b7474(void)

{
  return 1;
}



/* Entry: 001b747c; end: 001b74e3;  */

void FUN_001b747c(void)

{
  __s10AppIntents0A6IntentPAAE14supportedModesAA0cE0VvgZ();
  return;
}



/* Entry: 001b74e4; end: 001b74ff;  */

void FUN_001b74e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b7500,0,0);
  return;
}



/* Entry: 001b7500; end: 001b75cf;  */

void FUN_001b7500(void)

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
  plVar3[1] = 0x1b7574;
                    /* WARNING: Could not recover jumptable at 0x001b7570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(3);
  return;
}



/* Entry: 001b75d0; end: 001b762b;  */

void FUN_001b75d0(void)

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
                    /* WARNING: Could not recover jumptable at 0x001b7628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b762c; end: 001b7673;  */

void FUN_001b762c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_release(uVar1);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x001b7670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b7674; end: 001b76f3;  */

void FUN_001b7674(undefined8 *param_1)

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
            (&uStack_60,uVar1,0x1b7730,0);
  *param_1 = puVar2;
  return;
}



/* Entry: 001b76f4; end: 001b771f;  */

void FUN_001b76f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_001b7254();
  __s10AppIntents0A6IntentPAAE20persistentIdentifierSSvgZ(param_1,uVar1);
  return;
}



/* Entry: 001b7720; end: 001b775b;  */

undefined1  [16] FUN_001b7720(void)

{
  return ZEXT816(0x9b6240);
}



/* Entry: 001b775c; end: 001b779b;  */

void FUN_001b775c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af30b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2e60;
  _swift_getWitnessTable(&UNK_007e2e60,&UNK_009b6308);
  puRam0000000000af30b8 = puVar1;
  return;
}



/* Entry: 001b779c; end: 001b779f;  */

void FUN_001b779c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af30c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2e88;
  _swift_getWitnessTable(&UNK_007e2e88,&UNK_009b6308);
  puRam0000000000af30c0 = puVar1;
  return;
}



/* Entry: 001b77a0; end: 001b77df;  */

void FUN_001b77a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af30c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2e88;
  _swift_getWitnessTable(&UNK_007e2e88,&UNK_009b6308);
  puRam0000000000af30c0 = puVar1;
  return;
}



/* Entry: 001b77e0; end: 001b77ef;  */

void FUN_001b77e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_008462bc,1);
  return;
}



/* Entry: 001b77f0; end: 001b782f;  */

void FUN_001b77f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_001b7830();
  uStack_30 = param_2;
  uStack_28 = param_1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_0099ab08,1);
  return;
}



/* Entry: 001b7830; end: 001b786f;  */

void FUN_001b7830(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af30c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2dc8;
  _swift_getWitnessTable(&UNK_007e2dc8,&UNK_009b6308);
  puRam0000000000af30c8 = puVar1;
  return;
}



/* Entry: 001b7870; end: 001b79d7;  */

void FUN_001b7870(void)

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
  FUN_00028010(uVar2,0xb65c38);
  __sSS10FoundationE17LocalizationValueV13stringLiteralACSS_tcfC
            (lVar4,0x70614d206e65704f,0xe800000000000000);
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



/* Entry: 001b79d8; end: 001b7a47;  */

void FUN_001b79d8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000000af30d0 != -1) {
    _swift_once(0xaf30d0,FUN_001b7870);
  }
  lVar1 = 0;
  __s10Foundation23LocalizedStringResourceVMa();
  lVar2 = lVar1;
  FUN_00028010();
                    /* WARNING: Could not recover jumptable at 0x001b7a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 001b7a48; end: 001b7a4f;  */

undefined8 FUN_001b7a48(void)

{
  return 1;
}



/* Entry: 001b7a50; end: 001b7ab7;  */

void FUN_001b7a50(void)

{
  __s10AppIntents0A6IntentPAAE14supportedModesAA0cE0VvgZ();
  return;
}



/* Entry: 001b7ab8; end: 001b7ad3;  */

void FUN_001b7ab8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001b7ad4,0,0);
  return;
}



/* Entry: 001b7ad4; end: 001b7ba3;  */

void FUN_001b7ad4(void)

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
  plVar3[1] = 0x1b7b48;
                    /* WARNING: Could not recover jumptable at 0x001b7b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(1);
  return;
}



/* Entry: 001b7ba4; end: 001b7bff;  */

void FUN_001b7ba4(void)

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
                    /* WARNING: Could not recover jumptable at 0x001b7bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b7c00; end: 001b7c47;  */

void FUN_001b7c00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_release(uVar1);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x001b7c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001b7c48; end: 001b7cc7;  */

void FUN_001b7c48(undefined8 *param_1)

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
            (&uStack_60,uVar1,0x1b7d04,0);
  *param_1 = puVar2;
  return;
}



/* Entry: 001b7cc8; end: 001b7cf3;  */

void FUN_001b7cc8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_001b7830();
  __s10AppIntents0A6IntentPAAE20persistentIdentifierSSvgZ(param_1,uVar1);
  return;
}



/* Entry: 001b7cf4; end: 001b7d2f;  */

undefined1  [16] FUN_001b7cf4(void)

{
  return ZEXT816(0x9b6308);
}



/* Entry: 001b7d30; end: 001b7d6f;  */

void FUN_001b7d30(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af30d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2f70;
  _swift_getWitnessTable(&UNK_007e2f70,&UNK_009b63d0);
  puRam0000000000af30d8 = puVar1;
  return;
}



/* Entry: 001b7d70; end: 001b7d73;  */

void FUN_001b7d70(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af30e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2f98;
  _swift_getWitnessTable(&UNK_007e2f98,&UNK_009b63d0);
  puRam0000000000af30e0 = puVar1;
  return;
}



/* Entry: 001b7d74; end: 001b7db3;  */

void FUN_001b7d74(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af30e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e2f98;
  _swift_getWitnessTable(&UNK_007e2f98,&UNK_009b63d0);
  puRam0000000000af30e0 = puVar1;
  return;
}



/* Entry: 001b7db4; end: 001b7dc3;  */

void FUN_001b7db4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_00846300,1);
  return;
}



/* Entry: 001b7dc4; end: 001b7e03;  */

void FUN_001b7dc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_001b7e04();
  uStack_30 = param_2;
  uStack_28 = param_1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_0099ab08,1);
  return;
}


