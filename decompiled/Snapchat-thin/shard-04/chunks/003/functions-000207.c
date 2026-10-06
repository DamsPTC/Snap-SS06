/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10330ab88; end: 10330abb3;  */

bool FUN_10330ab88(long *param_1)

{
  return *param_1 != 0;
}



/* Entry: 10330abb4; end: 10330abd3;  */

void FUN_10330abb4(void)

{
  func_0x000107c61168(&PTR_PTR_1128ccf38);
  return;
}



/* Entry: 10330abd4; end: 10330abe7;  */

void FUN_10330abd4(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 10330abe8; end: 10330ad97;  */

void FUN_10330abe8(ulong *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 auStack_58 [24];
  
  uVar5 = *param_1;
  puVar7 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar7,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  if (uVar5 == 0) {
    puVar6 = *(undefined1 **)(param_2 + 0x28);
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    puVar6 = *(undefined1 **)(param_2 + 0x28);
    uVar5 = uVar3;
    if (puVar7 != (undefined1 *)0x0) {
      if ((puVar6 == (undefined1 *)0x0) ||
         (((uVar3 != *(ulong *)(param_2 + 0x20) || (puVar6 != puVar7)) &&
          (func_0x000107c605b8(uVar3,puVar7,*(ulong *)(param_2 + 0x20),puVar6,0), (uVar3 & 1) == 0))
         )) goto LAB_10330aca8;
      func_0x000107c6142c(puVar7);
      goto LAB_10330acf0;
    }
  }
  if (puVar6 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
LAB_10330aca8:
    *(ulong *)(param_2 + 0x20) = uVar5;
    *(undefined1 **)(param_2 + 0x28) = puVar7;
    func_0x000107c6142c(puVar6);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    lVar2 = *(long *)(param_2 + 0x18);
    uVar4 = uVar1;
    func_0x000107c614f0(uVar1);
    pcVar8 = *(code **)(lVar2 + 0x10);
    func_0x000107c615f0(uVar1);
    (*pcVar8)(uVar4,lVar2);
    func_0x000107c61574(param_2);
    func_0x000107c615e8(uVar1);
    return;
  }
LAB_10330acf0:
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 10330ad98; end: 10330adb7;  */

void FUN_10330ad98(void)

{
  func_0x000107c61168(&PTR_PTR_112f58168);
  return;
}



/* Entry: 10330adb8; end: 10330adfb;  */

void FUN_10330adb8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10330adfc; end: 10330ae0f;  */

void FUN_10330adfc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10330ae10; end: 10330b00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330ae10(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  puVar3 = &UNK_11063c460;
  puVar2 = puVar3;
  func_0x000107c613fc(&UNK_11063c460,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,lVar10);
  func_0x000107c613fc(&UNK_11063c460,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,lVar10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_103414440(0);
  func_0x000107c613fc();
  uVar12 = uVar11;
  FUN_103413f70(uVar11);
  uVar4 = 0;
  func_0x000104343354(0);
  func_0x000107c613fc();
  pcVar5 = FUN_10330b0b8;
  func_0x000104341f08(FUN_10330b0b8,puVar2,FUN_10330b154,puVar3,uVar12,&PTR_DAT_110652230,uVar4);
  lVar6 = 0;
  FUN_10330b4f0();
  lVar7 = lVar6;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar7 + _DAT_112f58298);
  *puVar1 = pcVar5;
  puVar1[1] = &PTR_DAT_11075cab0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c61174(uVar11);
  func_0x000107c6157c(pcVar5);
  plVar8 = &lStack_50;
  func_0x000107c61154(plVar8,puVar3);
  func_0x000107c4fc08(*(undefined8 *)(lVar10 + _DAT_1130720a8));
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  *(code **)(unaff_x20 + 0x20) = pcVar5;
  func_0x000107c6157c(pcVar5);
  func_0x000107c61574(uVar12);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  *(long **)(unaff_x20 + 0x28) = plVar8;
  func_0x000107c61174(plVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c6157c(pcVar5);
  func_0x0001000d224c(&uStack_58);
  uVar12 = 0;
  FUN_10330ad98(0);
  func_0x000107c613fc();
  pcVar9 = pcVar5;
  FUN_10330b26c(pcVar5,uStack_58,uVar12);
  func_0x000107c61170(plVar8);
  func_0x000107c61574(pcVar5);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  *(code **)(unaff_x20 + 0x30) = pcVar9;
  func_0x000107c61574(uVar12);
  return;
}



/* Entry: 10330b00c; end: 10330b0b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10330b00c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130720a0);
    func_0x000107c615f0(uVar2);
    func_0x000107c61170(param_1);
    uVar1 = uVar2;
    func_0x000107c4ae5c(uVar2);
    func_0x000107c61180();
    func_0x000107c615e8(uVar2);
    uVar2 = uVar1;
    func_0x000107c5e3f8(uVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
  }
  return uVar2;
}



/* Entry: 10330b0b8; end: 10330b0bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10330b0b8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_1130720a0);
    func_0x000107c615f0(uVar3);
    func_0x000107c61170(lVar1);
    uVar2 = uVar3;
    func_0x000107c4ae5c(uVar3);
    func_0x000107c61180();
    func_0x000107c615e8(uVar3);
    uVar3 = uVar2;
    func_0x000107c5e3f8(uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
  }
  return uVar3;
}



/* Entry: 10330b0c0; end: 10330b153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10330b0c0(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c4977c(*(undefined8 *)(param_2 + _DAT_1130720a0));
    func_0x000107c5c42c(param_1);
    func_0x000107c61180();
    func_0x000107c61170(param_2);
  }
  return param_1;
}



/* Entry: 10330b154; end: 10330b15b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10330b154(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c4977c(*(undefined8 *)(lVar1 + _DAT_1130720a0));
    func_0x000107c5c42c(param_1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  return param_1;
}



/* Entry: 10330b15c; end: 10330b1e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10330b15c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  func_0x000107c61574(uVar1);
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x000107c5d34c(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130720a8));
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar2);
    func_0x0001043431ec();
    func_0x000107c61574(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  }
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  func_0x000107c61574(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  func_0x000107c61170(uVar1);
  return 0;
}



/* Entry: 10330b1e4; end: 10330b227;  */

void FUN_10330b1e4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10330b228; end: 10330b26b;  */

void FUN_10330b228(void)

{
  FUN_10330ae10();
  return;
}



/* Entry: 10330b26c; end: 10330b327;  */

long FUN_10330b26c(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x38) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined ***)(param_3 + 0x18) = &PTR_DAT_11075cab0;
  puVar1 = &UNK_11063c4a0;
  func_0x000107c613fc(&UNK_11063c4a0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_3);
  pcVar5 = *(code **)(*param_2 + 0x60);
  func_0x000107c6157c(param_1);
  pcVar2 = FUN_10330b348;
  puVar4 = puVar1;
  (*pcVar5)();
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  *(code **)(param_3 + 0x30) = pcVar2;
  *(undefined **)(param_3 + 0x38) = puVar4;
  func_0x000107c615e8(uVar3);
  return param_3;
}



/* Entry: 10330b328; end: 10330b347;  */

void FUN_10330b328(void)

{
  func_0x000107c61168(&PTR_PTR_112f58218);
  return;
}



/* Entry: 10330b348; end: 10330b34f;  */

void FUN_10330b348(ulong *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 *puVar7;
  undefined1 *puVar8;
  code *pcVar9;
  undefined1 auStack_58 [24];
  
  uVar6 = *param_1;
  puVar8 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar8,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    return;
  }
  if (uVar6 == 0) {
    puVar7 = *(undefined1 **)(lVar3 + 0x28);
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar4 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    puVar7 = *(undefined1 **)(lVar3 + 0x28);
    uVar6 = uVar4;
    if (puVar8 != (undefined1 *)0x0) {
      if ((puVar7 == (undefined1 *)0x0) ||
         (((uVar4 != *(ulong *)(lVar3 + 0x20) || (puVar7 != puVar8)) &&
          (func_0x000107c605b8(uVar4,puVar8,*(ulong *)(lVar3 + 0x20),puVar7,0), (uVar4 & 1) == 0))))
      goto LAB_10330aca8;
      func_0x000107c6142c(puVar8);
      goto LAB_10330acf0;
    }
  }
  if (puVar7 != (undefined1 *)0x0) {
    puVar8 = (undefined1 *)0x0;
LAB_10330aca8:
    *(ulong *)(lVar3 + 0x20) = uVar6;
    *(undefined1 **)(lVar3 + 0x28) = puVar8;
    func_0x000107c6142c(puVar7);
    uVar1 = *(undefined8 *)(lVar3 + 0x10);
    lVar2 = *(long *)(lVar3 + 0x18);
    uVar5 = uVar1;
    func_0x000107c614f0(uVar1);
    pcVar9 = *(code **)(lVar2 + 0x10);
    func_0x000107c615f0(uVar1);
    (*pcVar9)(uVar5,lVar2);
    func_0x000107c61574(lVar3);
    func_0x000107c615e8(uVar1);
    return;
  }
LAB_10330acf0:
  func_0x000107c61574(lVar3);
  return;
}



/* Entry: 10330b350; end: 10330b38b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330b350(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  func_0x000107c614f0();
  func_0x000107c610f8();
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f58298);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10330b38c; end: 10330b417; -[_TtC22LensPlusUpsellCardHost23LensPlusUpsellUIFeature isPointInsideView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10330b38c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_3 + _DAT_112f58298);
  lVar1 = ((undefined8 *)(param_3 + _DAT_112f58298))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x18);
  func_0x000107c61174(param_3);
  (*pcVar3)(param_1,param_2,uVar2,lVar1);
  func_0x000107c61170(param_3);
  return (uint)uVar2 & 1;
}



/* Entry: 10330b418; end: 10330b41b; -[_TtC22LensPlusUpsellCardHost23LensPlusUpsellUIFeature setUIHidden:] */

void FUN_10330b418(void)

{
  return;
}



/* Entry: 10330b41c; end: 10330b47b; -[_TtC22LensPlusUpsellCardHost23LensPlusUpsellUIFeature init] */

void FUN_10330b41c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPlusUpsellCardHost.LensPlusUpsellUIFeature",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10330b448);
  (*pcVar1)();
}



/* Entry: 10330b47c; end: 10330b48b; -[_TtC22LensPlusUpsellCardHost23LensPlusUpsellUIFeature .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330b47c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f58298));
  return;
}



/* Entry: 10330b48c; end: 10330b4ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330b48c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c610f8();
  lVar2 = param_2;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_2 + _DAT_112f58298);
  *puVar1 = param_1;
  puVar1[1] = param_4;
  lStack_40 = param_2;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10330b4f0; end: 10330b50f;  */

void FUN_10330b4f0(void)

{
  func_0x000107c61168(&PTR_PTR_1128ccff8);
  return;
}



/* Entry: 10330b510; end: 10330b5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330b510(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_2;
  func_0x000100083b20(&uStack_38);
  FUN_10330b960();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f582d0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f582d8) = uStack_38;
  puVar1 = PTR_s_init_1125d9248;
  lStack_48 = lVar3;
  lStack_40 = lVar2;
  func_0x000107c6157c(param_2);
  plVar4 = &lStack_48;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 10330b5fc; end: 10330b61b;  */

void FUN_10330b5fc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10330b61c; end: 10330b67b; -[_TtC48LensExplorerInfoCardScopedFactoryServiceProvider36SCLensExplorerInfoCardScopedServices init] */

void FUN_10330b61c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerInfoCardScopedFactoryServiceProvider.SCLensExplorerInfoCardScopedServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10330b648);
  (*pcVar1)();
}



/* Entry: 10330b67c; end: 10330b6b3; -[_TtC48LensExplorerInfoCardScopedFactoryServiceProvider36SCLensExplorerInfoCardScopedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010330b698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010330b69c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330b67c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f582d8));
  return;
}



/* Entry: 10330b6b4; end: 10330b71f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330b6b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11063c688;
  func_0x000107c613fc(&UNK_11063c688,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10330b9f8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10330b720; end: 10330b7bb;  */

void FUN_10330b720(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11063c598;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11063c598;
  return;
}



/* Entry: 10330b7bc; end: 10330b7f3;  */

void FUN_10330b7bc(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 10330b7f4; end: 10330b7fb;  */

undefined8 FUN_10330b7f4(void)

{
  return 0x1b;
}



/* Entry: 10330b7fc; end: 10330b92f;  */

void FUN_10330b7fc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11063c6b0;
  func_0x000107c613fc(&UNK_11063c6b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10330b9d0;
  func_0x00010058fa64(FUN_10330b9d0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10330b930; end: 10330b95f;  */

undefined ** FUN_10330b930(void)

{
  return &PTR_DAT_113066c28;
}



/* Entry: 10330b960; end: 10330b97f;  */

void FUN_10330b960(void)

{
  func_0x000107c61168(&PTR_PTR_1128cd0b8);
  return;
}



/* Entry: 10330b980; end: 10330b9cf;  */

undefined1  [16] FUN_10330b980(void)

{
  return ZEXT816(0x11063c5e8);
}



/* Entry: 10330b9d0; end: 10330b9f7;  */

void FUN_10330b9d0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10330b9f8; end: 10330ba0b;  */

void FUN_10330b9f8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10330ba0c; end: 10330bcf3;  */

void FUN_10330ba0c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112f58350,&UNK_10dbafc90);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  FUN_10330c048(param_3,param_4,param_5,param_6);
  func_0x000100082720("LensExplorerInfoCardScopedLensExplorerSessionLoggingServiceProvider",0x43,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_10330b7bc;
  func_0x0001000823a8(FUN_10330b7bc,0);
  func_0x000100082720("SCLensExplorerInfoCardScopedServicesCleanupRelayServiceProvider",0x3f,2);
  uVar3 = param_3;
  FUN_10330c7d8();
  func_0x000100082720("LensExplorerInfoCardScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f58358,&UNK_10dbafca0);
  puVar4 = &UNK_11063c760;
  func_0x000107c613fc(&UNK_11063c760,0x28,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(code **)(puVar4 + 0x20) = pcVar2;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar2);
  uVar8 = 0x10330bd00;
  func_0x0001000823a8(0x10330bd00,puVar4);
  func_0x000100082720("SCLensExplorerInfoCardScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112f582e0,&UNK_10dbaf9f0);
  func_0x000107c6157c(uVar8);
  uVar5 = 0x10330bd0c;
  func_0x0001000823a8(0x10330bd0c,uVar8);
  func_0x000100082720("SCLensExplorerInfoCardScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f582c8,&UNK_10dbaf9e0);
  puVar4 = &UNK_11063c788;
  func_0x000107c613fc(&UNK_11063c788,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x10330bd14;
  func_0x0001000823a8(0x10330bd14,puVar4);
  func_0x000100082720("SCLensExplorerInfoCardScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_11063c7b0;
  func_0x000107c613fc(&UNK_11063c7b0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(code **)(puVar4 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  pcVar7 = FUN_10330bd48;
  func_0x0001000823a8(FUN_10330bd48,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_3);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar5);
  func_0x000100082720("SCLensExplorerInfoCardScopeEntryPointProvider",0x2d,2);
  *param_1 = pcVar7;
  return;
}



/* Entry: 10330bcf4; end: 10330bd1b;  */

void FUN_10330bcf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f58350,&UNK_10dbafc90);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  FUN_10330c048(uVar2,uVar6,uVar5,uVar7);
  func_0x000100082720("LensExplorerInfoCardScopedLensExplorerSessionLoggingServiceProvider",0x43,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_10330b7bc;
  func_0x0001000823a8(FUN_10330b7bc,0);
  func_0x000100082720("SCLensExplorerInfoCardScopedServicesCleanupRelayServiceProvider",0x3f,2);
  uVar9 = uVar2;
  FUN_10330c7d8();
  func_0x000100082720("LensExplorerInfoCardScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f58358,&UNK_10dbafca0);
  puVar4 = &UNK_11063c760;
  func_0x000107c613fc(&UNK_11063c760,0x28,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar9;
  *(code **)(puVar4 + 0x20) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar3);
  uVar5 = 0x10330bd00;
  func_0x0001000823a8(0x10330bd00,puVar4);
  func_0x000100082720("SCLensExplorerInfoCardScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112f582e0,&UNK_10dbaf9f0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x10330bd0c;
  func_0x0001000823a8(0x10330bd0c,uVar5);
  func_0x000100082720("SCLensExplorerInfoCardScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f582c8,&UNK_10dbaf9e0);
  puVar4 = &UNK_11063c788;
  func_0x000107c613fc(&UNK_11063c788,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x10330bd14;
  func_0x0001000823a8(0x10330bd14,puVar4);
  func_0x000100082720("SCLensExplorerInfoCardScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_11063c7b0;
  func_0x000107c613fc(&UNK_11063c7b0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar7;
  *(code **)(puVar4 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  pcVar8 = FUN_10330bd48;
  func_0x0001000823a8(FUN_10330bd48,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCLensExplorerInfoCardScopeEntryPointProvider",0x2d,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 10330bd1c; end: 10330bd47;  */

void FUN_10330bd1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10330bd48; end: 10330bd4f;  */

void FUN_10330bd48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11063c598;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11063c598;
  return;
}



/* Entry: 10330bd50; end: 10330bd8b;  */

void FUN_10330bd50(undefined8 *param_1,undefined8 param_2)

{
  FUN_10330bd8c();
  func_0x0001000a7f38("SCLensExplorerInfoCardScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = param_2;
  return;
}



/* Entry: 10330bd8c; end: 10330bf23;  */

void FUN_10330bd8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d6b8;
  ppuVar4 = &PTR_DAT_113066c28;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11063c7d8;
  func_0x000107c613fc(&UNK_11063c7d8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f58360;
  func_0x0001000285a8(0x112f58360,&UNK_10dbafca8);
  func_0x0001000a6ee8(&UNK_11063caf0,
                      "LensExplorerInfoCardScopeGraphBridgeScopeInitializationPluginKey",0x40,2,
                      FUN_10330bf24,puVar2,uVar3,&UNK_11063caf0,&PTR_DAT_112f584d0);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11063c800;
  func_0x000107c613fc(&UNK_11063c800,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11063c628,
                      "SCLensExplorerInfoCardScopedServicesScopeInitializationPluginKey",0x40,2,
                      FUN_10330c00c,puVar2,uVar3,&UNK_11063c628,&PTR_DAT_112f582e8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f58368;
  func_0x0001000285a8(0x112f58368,&UNK_10dbafcb0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10330bf24; end: 10330bf63;  */

void FUN_10330bf24(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10330c95c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LensExplorerInfoCardScopeGraphBridgeScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 10330bf64; end: 10330c00b;  */

void FUN_10330bf64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11063c828;
  func_0x000107c613fc(&UNK_11063c828,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10330c040;
  func_0x0001000823a8(FUN_10330c040,puVar1);
  func_0x000100082720("SCLensExplorerInfoCardScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar2;
  return;
}



/* Entry: 10330c00c; end: 10330c013;  */

void FUN_10330c00c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11063c828;
  func_0x000107c613fc(&UNK_11063c828,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10330c040;
  func_0x0001000823a8(FUN_10330c040,puVar3);
  func_0x000100082720("SCLensExplorerInfoCardScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar4;
  return;
}



/* Entry: 10330c014; end: 10330c03f;  */

void FUN_10330c014(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10330c040; end: 10330c047;  */

void FUN_10330c040(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11063c6b0;
  func_0x000107c613fc(&UNK_11063c6b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10330b9d0;
  func_0x00010058fa64(FUN_10330b9d0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10330c048; end: 10330c0eb;  */

void FUN_10330c048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f58370,&UNK_10dbafcc0);
  puVar1 = &UNK_11063c8f8;
  func_0x000107c613fc(&UNK_11063c8f8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_10330c0ec,puVar1);
  return;
}



/* Entry: 10330c0ec; end: 10330c1eb;  */

void FUN_10330c0ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126acfa8;
  func_0x000107c61168(PTR_PTR_1126acfa8);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000107c52080(puVar1,param_3,uStack_58,uStack_60,uStack_68,uStack_70,5);
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_58);
  puVar2 = PTR_PTR_1126ad098;
  func_0x000107c610f8();
  func_0x000107c48638();
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 10330c1ec; end: 10330c1fb;  */

undefined1  [16] FUN_10330c1ec(void)

{
  return ZEXT816(0x11063c920);
}



/* Entry: 10330c1fc; end: 10330c283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10330c1fc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10330c6e8();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f58378) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f58380) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10330c284);
  (*pcVar1)();
}



/* Entry: 10330c284; end: 10330c2e3; -[_TtC36LensExplorerInfoCardScopeGraphBridge51LensExplorerInfoCardScopeGraphBridgeSaberEntryPoint init] */

void FUN_10330c284(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerInfoCardScopeGraphBridge.LensExplorerInfoCardScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10330c2b0);
  (*pcVar1)();
}



/* Entry: 10330c2e4; end: 10330c31b; -[_TtC36LensExplorerInfoCardScopeGraphBridge51LensExplorerInfoCardScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010330c300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010330c304) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330c2e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f58378));
  return;
}



/* Entry: 10330c31c; end: 10330c343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330c31c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f58380),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f58378));
  return;
}



/* Entry: 10330c344; end: 10330c363;  */

void FUN_10330c344(void)

{
  func_0x000107c61168(&PTR_PTR_1128cd180);
  return;
}



/* Entry: 10330c364; end: 10330c3c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10330c364(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f584c8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10330c3c8; end: 10330c3cf;  */

void FUN_10330c3c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10330c3d0; end: 10330c46f;  */

void FUN_10330c3d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10330c470; end: 10330c48f;  */

void FUN_10330c470(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10330c490; end: 10330c517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10330c490(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f58480) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f58488);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10330c518);
  (*pcVar2)();
}



/* Entry: 10330c518; end: 10330c5ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10330c518(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f58480);
  *(undefined **)(unaff_x20 + _DAT_112f58480) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f58488);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f58488))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11063ca50;
  func_0x000107c613fc(&UNK_11063ca50,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10330c604,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10330c600; end: 10330c60b;  */

void FUN_10330c600(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10330c60c; end: 10330c66b; -[_TtC36LensExplorerInfoCardScopeGraphBridge51SCLensExplorerInfoCardScopedServicesSaberEntryPoint init] */

void FUN_10330c60c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerInfoCardScopeGraphBridge.SCLensExplorerInfoCardScopedServicesSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10330c638);
  (*pcVar1)();
}



/* Entry: 10330c66c; end: 10330c6a3; -[_TtC36LensExplorerInfoCardScopeGraphBridge51SCLensExplorerInfoCardScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330c66c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f58488));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f58480));
  return;
}



/* Entry: 10330c6a4; end: 10330c6a7;  */

void FUN_10330c6a4(void)

{
  return;
}



/* Entry: 10330c6a8; end: 10330c6c7;  */

void FUN_10330c6a8(void)

{
  FUN_10330c518();
  return;
}



/* Entry: 10330c6c8; end: 10330c6e7;  */

void FUN_10330c6c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128cd248);
  return;
}



/* Entry: 10330c6e8; end: 10330c7b7;  */

undefined8 FUN_10330c6e8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f584b8,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10330c7b8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10330c7b8; end: 10330c7d7;  */

void FUN_10330c7b8(void)

{
  func_0x000107c61168(&PTR_PTR_1128cd310);
  return;
}



/* Entry: 10330c7d8; end: 10330c823;  */

void FUN_10330c7d8(undefined8 param_1)

{
  func_0x0001000285a8(0x112f584c0,&UNK_10dbafe98);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10330c890,param_1);
  return;
}



/* Entry: 10330c824; end: 10330c88f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330c824(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10330c7b8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f584c8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10330c890; end: 10330c897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330c890(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10330c7b8();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f584c8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10330c898; end: 10330c8e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330c898(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f584c8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10330c8e4; end: 10330c943; -[_TtC36LensExplorerInfoCardScopeGraphBridge44LensExplorerInfoCardScopeGraphBridgeServices init] */

void FUN_10330c8e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerInfoCardScopeGraphBridge.LensExplorerInfoCardScopeGraphBridgeServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10330c910);
  (*pcVar1)();
}



/* Entry: 10330c944; end: 10330c95b; -[_TtC36LensExplorerInfoCardScopeGraphBridge44LensExplorerInfoCardScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330c944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f584c8));
  return;
}



/* Entry: 10330c95c; end: 10330cad3;  */

void FUN_10330c95c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11063ca98;
  func_0x000107c613fc(&UNK_11063ca98,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10330cad4,puVar1);
  return;
}



/* Entry: 10330cad4; end: 10330cadb;  */

void FUN_10330cad4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f584b8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f584b8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11063cb30;
  func_0x000107c613fc(&UNK_11063cb30,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10330cb88;
  func_0x00010058fa64(0x10330cb88,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10330cadc; end: 10330cb37;  */

void FUN_10330cadc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f584b8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f584b8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10330cb38; end: 10330cb8f;  */

undefined ** FUN_10330cb38(void)

{
  return &PTR_DAT_113066c28;
}



/* Entry: 10330cb90; end: 10330cbd7; -[SCLensExplorerInfoCardScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330cb90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f58520;
  func_0x000107c61428(param_1 + _DAT_112f58520,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10330cbd8; end: 10330cc2f; -[SCLensExplorerInfoCardScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330cbd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f58520;
  func_0x000107c61428(param_1 + _DAT_112f58520,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10330cc30; end: 10330cc77; -[SCLensExplorerInfoCardScopeGraphBridgeSaberEntryPoint lensExplorerInfoCardScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330cc30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f58528;
  func_0x000107c61428(param_1 + _DAT_112f58528,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10330cc78; end: 10330ccdb; -[SCLensExplorerInfoCardScopeGraphBridgeSaberEntryPoint setLensExplorerInfoCardScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330cc78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f58528;
  func_0x000107c61428(param_1 + _DAT_112f58528,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10330ccdc; end: 10330ce0f;  */

/* WARNING: Possible PIC construction at 0x00010330cd94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010330cdb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010330cdcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010330cd98) */
/* WARNING: Removing unreachable block (ram,0x00010330cdb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330ccdc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c4b0cc();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_10330c344();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_10330c6e8();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10330ce10);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f58378) = lVar5;
    *(long *)(lVar4 + _DAT_112f58380) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10330ce10; end: 10330ce37; -[SCLensExplorerInfoCardScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10330ce10(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10330ccdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10330ce38; end: 10330ce7b; -[SCLensExplorerInfoCardScopeGraphBridgeSaberEntryPoint end] */

void FUN_10330ce38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10330ce7c; end: 10330d013;  */

void FUN_10330ce7c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0ec21b0)) {
      uVar2 = 0xd000000000000033;
      func_0x000107c605b8(0xd000000000000033,0x800000010f13de50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensExplorerInfoCardScopeGraphBridge/SCLensExplorerInfoCardScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x60,2,0x30,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10330d014);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55d18();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10330d014; end: 10330d0bf; -[SCLensExplorerInfoCardScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10330d014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10330ce7c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10330d0c0; end: 10330d12b; -[SCLensExplorerInfoCardScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330d0c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f58520,0);
  *(undefined8 *)(param_1 + _DAT_112f58528) = 0;
  *(undefined8 *)(param_1 + _DAT_112f58530) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10330d12c; end: 10330d15f;  */

void FUN_10330d12c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10330d160; end: 10330d1a7; -[SCLensExplorerInfoCardScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010330d18c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010330d190) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330d160(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f58520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f58528));
  return;
}



/* Entry: 10330d1a8; end: 10330d1c7;  */

void FUN_10330d1a8(void)

{
  func_0x000107c61168(&PTR_PTR_1128cd3d0);
  return;
}



/* Entry: 10330d1c8; end: 10330d1d3; -[SCSCLensExplorerInfoCardScopedLensExplorerSessionLoggingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330d1c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f58560;
  func_0x000107c61428(param_1 + _DAT_112f58560,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10330d1d4; end: 10330d1df; -[SCSCLensExplorerInfoCardScopedLensExplorerSessionLoggingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330d1d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f58560;
  func_0x000107c61428(param_1 + _DAT_112f58560,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10330d1e0; end: 10330d1eb; -[SCSCLensExplorerInfoCardScopedLensExplorerSessionLoggingServicesSaberServiceProvider lensExplorerInfoCardScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330d1e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f58568;
  func_0x000107c61428(param_1 + _DAT_112f58568,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10330d1ec; end: 10330d22f;  */

void FUN_10330d1ec(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10330d230; end: 10330d23b; -[SCSCLensExplorerInfoCardScopedLensExplorerSessionLoggingServicesSaberServiceProvider setLensExplorerInfoCardScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330d230(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f58568;
  func_0x000107c61428(param_1 + _DAT_112f58568,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


