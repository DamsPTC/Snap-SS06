/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024ce764; end: 1024ce783;  */

void FUN_1024ce764(void)

{
  func_0x000107c61168(&PTR_PTR_112847d10);
  return;
}



/* Entry: 1024ce784; end: 1024ce793; -[_TtC25SCCreatorsLoggingServices25SCCreatorsLoggingServices discoverFeedLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ce784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ea0558));
  return;
}



/* Entry: 1024ce794; end: 1024ce82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ce794(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea0558) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024ce82c; end: 1024ce883; -[_TtC25SCCreatorsLoggingServices25SCCreatorsLoggingServices initWithDiscoverFeedLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ce82c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ea0558) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1024ce884; end: 1024ce8e3; -[_TtC25SCCreatorsLoggingServices25SCCreatorsLoggingServices init] */

void FUN_1024ce884(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCreatorsLoggingServices.SCCreatorsLoggingServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024ce8b0);
  (*pcVar1)();
}



/* Entry: 1024ce8e4; end: 1024ce8f3; -[_TtC25SCCreatorsLoggingServices25SCCreatorsLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ce8e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea0558));
  return;
}



/* Entry: 1024ce8f4; end: 1024ce947;  */

undefined8 FUN_1024ce8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1024ce948(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1024ce948; end: 1024ceb37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ce948(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar2 = *(long *)(param_2 + _DAT_11302e640);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar6 = lVar2;
    func_0x000107c5b8bc();
    func_0x000107c61180();
    lVar3 = lVar6;
    func_0x000107c4b5a4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    bVar1 = *(byte *)(lVar3 + _DAT_11302e838);
    func_0x000107c61170(lVar3);
    if ((bVar1 & 1) != 0) {
      lVar6 = lVar2;
      func_0x000107c5b8bc();
      func_0x000107c61180();
      lVar3 = lVar6;
      func_0x000107c4b5a4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar6);
      func_0x0001000285a8(0x112ea0588,&UNK_10dab22e0);
      uVar4 = *(undefined8 *)(param_3 + _DAT_112f308e8);
      func_0x000107c61174();
      uVar8 = uVar4;
      func_0x0001000bda74();
      func_0x000107c61170(uVar4);
      func_0x0001000285a8(0x112ea0590,&UNK_10dab22e8);
      uVar5 = *(undefined8 *)(param_3 + _DAT_112f308f0);
      func_0x000107c61174();
      uVar4 = uVar5;
      func_0x0001000bda74();
      func_0x000107c61170(uVar5);
      lVar6 = 0;
      func_0x0001024cf014();
      func_0x000107c613fc();
      puVar7 = PTR_PTR_1126ae810;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(long *)(lVar6 + 0x10) = lVar3;
      *(undefined8 *)(lVar6 + 0x18) = uVar8;
      *(undefined8 *)(lVar6 + 0x20) = uVar4;
      *(undefined **)(lVar6 + 0x28) = puVar7;
      uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
      *(long *)(unaff_x20 + 0x10) = lVar6;
      func_0x000107c61574(uVar8);
      lVar6 = *(long *)(unaff_x20 + 0x10);
      if (lVar6 != 0) {
        func_0x000107c6157c(lVar6);
        FUN_1024cebcc();
        func_0x000107c61574(lVar6);
      }
      func_0x000107c61170(param_2);
      func_0x000107c615e8(lVar2);
      goto LAB_1024ceb08;
    }
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_2);
LAB_1024ceb08:
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1024ceb38; end: 1024ceb7f;  */

undefined8 FUN_1024ceb38(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c42194(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x28));
  }
  return 0;
}



/* Entry: 1024ceb80; end: 1024ceb83;  */

void FUN_1024ceb80(void)

{
  return;
}



/* Entry: 1024ceb84; end: 1024cebcb;  */

undefined8 FUN_1024ceb84(void)

{
  long *unaff_x20;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    func_0x000107c42194(*(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + 0x28));
  }
  return 0;
}



/* Entry: 1024cebcc; end: 1024cecdb;  */

void FUN_1024cebcc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar1 = puStack_70;
  if (puStack_70 != (undefined *)0x0) {
    func_0x000107c42f1c(puStack_70);
    puVar2 = puStack_70;
    func_0x000107c61180();
    puVar3 = &UNK_110515798;
    func_0x000107c613fc(&UNK_110515798,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_50 = FUN_1024cf034;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_1024cee44;
    puStack_58 = &UNK_1105157b0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    puVar3 = puVar2;
    func_0x000107c5c320(puVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c3e924(puVar3);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1024cecdc; end: 1024ced73;  */

void FUN_1024cecdc(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000102fe4e28(0x1024cf058,param_2,FUN_1024ced74,0,0x1024cf07c,param_2,0x1024ced78,0,
                        0x1024cf0b8,param_2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1024ced74; end: 1024ced7b;  */

void FUN_1024ced74(void)

{
  return;
}



/* Entry: 1024ced7c; end: 1024cee43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ced7c(long param_1,long param_2)

{
  long lStack_48;
  
  if (param_1 == *(long *)(*(long *)(param_2 + 0x10) + _DAT_11302e840)) {
    func_0x0001000d224c(&lStack_48);
    if (lStack_48 != 0) {
      FUN_1024cef4c();
      if (param_2 == 0) {
        param_1 = 0;
      }
      else {
        func_0x000107c5fadc();
        func_0x000107c6142c(param_2);
      }
      func_0x000107c431ec(lStack_48);
      func_0x000107c615e8(lStack_48);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1024cee44; end: 1024cee8f;  */

void FUN_1024cee44(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1024cee90; end: 1024cef4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cee90(undefined8 param_1,long param_2)

{
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    FUN_1024cef4c();
    if (param_2 == 0) {
      param_1 = 0;
    }
    else {
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c431ec(lStack_48);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1024cef4c; end: 1024cefd7;  */

undefined1  [16] FUN_1024cef4c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c40fac();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lStack_38);
      goto LAB_1024cefc4;
    }
    func_0x000107c615e8(lStack_38);
  }
  lVar2 = 0;
  param_2 = 0;
LAB_1024cefc4:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 1024cefd8; end: 1024cf033;  */

void FUN_1024cefd8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024cf034; end: 1024cf0bf;  */

void FUN_1024cf034(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000102fe4e28(0x1024cf058,lVar1,FUN_1024ced74,0,0x1024cf07c,lVar1,0x1024ced78,0,
                        0x1024cf0b8,lVar1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1024cf0c0; end: 1024cf74b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024cf0c0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  ulong *puVar12;
  long *plVar13;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar2 = *(long *)(param_3 + _DAT_11302e640);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5b8bc();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c4b5a4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    bVar1 = *(byte *)(lVar4 + _DAT_11302e838);
    func_0x000107c61170(lVar4);
    if ((bVar1 & 1) != 0) {
      func_0x0001000285a8(0x112ea0588,&UNK_10dab22e0);
      uVar5 = *(undefined8 *)(param_4 + _DAT_112f308e8);
      func_0x000107c61174();
      uVar6 = uVar5;
      func_0x0001000bda74();
      func_0x000107c61170(uVar5);
      func_0x0001000285a8(0x112ea0590,&UNK_10dab22e8);
      uVar7 = *(undefined8 *)(param_4 + _DAT_112f308f0);
      func_0x000107c61174();
      uVar5 = uVar7;
      func_0x0001000bda74();
      func_0x000107c61170(uVar7);
      func_0x0001000285a8(0x112ea06f0,&UNK_10dab23b0);
      uVar7 = param_5;
      func_0x000107c4b480();
      func_0x000107c61180();
      uVar8 = uVar7;
      func_0x0001000bda74();
      func_0x000107c61170(uVar7);
      lVar3 = lVar2;
      func_0x000107c5b8bc();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c4b5a4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      uVar7 = param_2;
      func_0x000107c4b304();
      func_0x000107c61180();
      lVar9 = 0;
      FUN_1024d00f0();
      lVar10 = lVar9;
      func_0x000107c610f8();
      lVar3 = _DAT_112ea0808;
      puVar11 = PTR_PTR_1126ae810;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar10 + lVar3) = puVar11;
      lVar3 = _DAT_112ea0810;
      uStack_68 = 0;
      func_0x0001000285a8(0x112ea06f8,&UNK_10dab23b8);
      func_0x000107c613fc();
      puVar12 = &uStack_68;
      func_0x00010006c248();
      *(ulong **)(lVar10 + lVar3) = puVar12;
      lVar3 = _DAT_112ea0818;
      uStack_68 = uStack_68 & 0xffffffffffffff00;
      func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
      func_0x000107c613fc();
      puVar12 = &uStack_68;
      func_0x00010006c248();
      *(ulong **)(lVar10 + lVar3) = puVar12;
      *(undefined8 *)(lVar10 + _DAT_112ea07e8) = uVar6;
      *(undefined8 *)(lVar10 + _DAT_112ea07f0) = uVar5;
      *(undefined8 *)(lVar10 + _DAT_112ea07e0) = uVar8;
      *(long *)(lVar10 + _DAT_112ea07f8) = lVar4;
      *(undefined8 *)(lVar10 + _DAT_112ea0800) = uVar7;
      plVar13 = &lStack_78;
      lStack_78 = lVar10;
      lStack_70 = lVar9;
      func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
      *(long **)(unaff_x20 + 0x10) = plVar13;
      func_0x000107c61174();
      FUN_1024cfa40();
      func_0x000107c61170(plVar13);
      func_0x000107c61170(param_3);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(param_4);
      goto LAB_1024cf3cc;
    }
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
LAB_1024cf3cc:
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_5);
  return unaff_x20;
}



/* Entry: 1024cf74c; end: 1024cf7af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1024cf74c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c42194(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ea0808));
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x000107c61170(uVar1);
  return 0;
}



/* Entry: 1024cf7b0; end: 1024cf7b3;  */

void FUN_1024cf7b0(void)

{
  return;
}



/* Entry: 1024cf7b4; end: 1024cf7d7;  */

undefined8 FUN_1024cf7b4(void)

{
  FUN_1024cf74c();
  return 0;
}



/* Entry: 1024cf7d8; end: 1024cf7f7;  */

void FUN_1024cf7d8(void)

{
  func_0x000107c61168(&PTR_PTR_112ea0740);
  return;
}



/* Entry: 1024cf7f8; end: 1024cf803;  */

void FUN_1024cf7f8(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 1024cf804; end: 1024cf8db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1024cf804(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lStack_48;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112ea07a8);
  if ((uVar1 != param_3 || ((ulong *)(unaff_x20 + _DAT_112ea07a8))[1] != param_4) &&
     (func_0x000107c605b8(), (uVar1 & 1) == 0)) {
    return 0;
  }
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ea07a0) + 0x30);
  func_0x000107c6157c(uVar2);
  func_0x0001000c74f0(&lStack_48);
  func_0x000107c61574(uVar2);
  if (*(long *)(lStack_48 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c61434(lStack_48);
    func_0x000100029284();
    uVar2 = 0;
    if ((param_2 & 1) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(lStack_48 + 0x38) + param_1 * 8);
    }
    func_0x000107c6142c(lStack_48);
  }
  func_0x000107c6142c(lStack_48);
  return uVar2;
}



/* Entry: 1024cf8dc; end: 1024cf973; -[_TtC14LensSwipesImpl31LensPlayTimeForDiscoverProvider playTimeForLensId:storyId:] */

undefined8
FUN_1024cf8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  uVar1 = param_3;
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_2);
  FUN_1024cf804(param_4,param_3,param_5,uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1024cf974; end: 1024cf9d3; -[_TtC14LensSwipesImpl31LensPlayTimeForDiscoverProvider init] */

void FUN_1024cf974(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensSwipesImpl.LensPlayTimeForDiscoverProvider",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024cf9a0);
  (*pcVar1)();
}



/* Entry: 1024cf9d4; end: 1024cfa1f; -[_TtC14LensSwipesImpl31LensPlayTimeForDiscoverProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024cf9f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024cf9f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cf9d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea07a0));
  return;
}



/* Entry: 1024cfa20; end: 1024cfa3f;  */

void FUN_1024cfa20(void)

{
  func_0x000107c61168(&PTR_PTR_112847e90);
  return;
}



/* Entry: 1024cfa40; end: 1024cfb5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cfa40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar1 = puStack_70;
  if (puStack_70 != (undefined *)0x0) {
    func_0x000107c42f1c(puStack_70);
    puVar2 = puStack_70;
    func_0x000107c61180();
    puVar3 = &UNK_1105158c0;
    func_0x000107c613fc(&UNK_1105158c0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_50 = FUN_1024d0110;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_1024cee44;
    puStack_58 = &UNK_1105158d8;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    puVar3 = puVar2;
    func_0x000107c5c320(puVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c3e924(puVar3);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1024cfb60; end: 1024cfc07;  */

void FUN_1024cfb60(undefined8 param_1,long param_2)

{
  undefined1 auStack_b0 [16];
  long lStack_a0;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lStack_a0 = param_2;
    lStack_80 = param_2;
    lStack_60 = param_2;
    lStack_40 = param_2;
    func_0x000102fe4e28(0x1024d0134,auStack_50,FUN_1024d014c,auStack_70,0x1024d0170,auStack_90,
                        FUN_1024d0194,auStack_b0,FUN_1024cfd4c,0);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1024cfc08; end: 1024cfd4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cfc08(ulong param_1,ulong param_2,long param_3,long param_4)

{
  ulong *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  long lStack_68;
  long lStack_60;
  undefined1 uStack_51;
  
  if (param_3 == *(long *)(*(long *)(param_4 + _DAT_112ea07f8) + _DAT_11302e840)) {
    uVar4 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar4 = param_2 >> 0x38 & 0xf;
    }
    if ((uVar4 != 0) && (uVar4 = param_1, FUN_1024cfd50(), uVar4 != 0)) {
      lVar5 = 0;
      FUN_1024cfa20();
      lVar6 = lVar5;
      func_0x000107c610f8();
      lVar3 = _DAT_112ea07b0;
      uStack_51 = 0;
      func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
      func_0x000107c613fc();
      func_0x000107c6157c(uVar4);
      puVar7 = &uStack_51;
      func_0x00010006c248();
      *(undefined1 **)(lVar6 + lVar3) = puVar7;
      puVar1 = (ulong *)(lVar6 + _DAT_112ea07a8);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      *(ulong *)(lVar6 + _DAT_112ea07a0) = uVar4;
      puVar2 = PTR_s_init_1125d9248;
      lStack_68 = lVar6;
      lStack_60 = lVar5;
      func_0x000107c61434(param_2);
      plVar8 = &lStack_68;
      func_0x000107c61154(plVar8,puVar2);
      FUN_1024cfe8c();
      func_0x000107c61574(uVar4);
      func_0x000107c61170(plVar8);
    }
  }
  return;
}



/* Entry: 1024cfd4c; end: 1024cfd4f;  */

void FUN_1024cfd4c(void)

{
  return;
}



/* Entry: 1024cfd50; end: 1024cfe8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024cfd50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puStack_38;
  
  func_0x0001000d224c(&puStack_38);
  puVar1 = puStack_38;
  if (puStack_38 == (undefined *)0x0) {
    lVar4 = 0;
  }
  else {
    puVar2 = &UNK_110515910;
    func_0x000107c613fc(&UNK_110515910,0x18,7);
    *(undefined **)(puVar2 + 0x10) = puStack_38;
    func_0x0001000285a8(0x112ea06f0,&UNK_10dab23b0);
    func_0x000107c613fc();
    func_0x000107c615f0(puStack_38);
    pcVar3 = FUN_1024d02d8;
    func_0x0001000bdd8c(FUN_1024d02d8,puVar2);
    lVar4 = 0;
    func_0x0001024d05dc();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 0;
    func_0x000107c61614(lVar4 + 0x10,0);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar4 + 0x28) = puVar2;
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001010fe67c();
    puStack_38 = puVar2;
    func_0x0001000285a8(0x112ea0848,&UNK_10dab2478);
    func_0x000107c613fc();
    ppuVar5 = &puStack_38;
    func_0x00010006c248();
    func_0x000107c615e8(puVar1);
    *(undefined ***)(lVar4 + 0x30) = ppuVar5;
    *(code **)(lVar4 + 0x20) = pcVar3;
  }
  return lVar4;
}



/* Entry: 1024cfe8c; end: 1024cfff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cfe8c(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long alStack_60 [2];
  long lStack_50;
  
  lVar1 = _DAT_112ea0810;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ea0810);
  func_0x000107c6157c(uVar2);
  func_0x0001000c74f0(alStack_60);
  func_0x000107c61574(uVar2);
  lVar4 = alStack_60[0];
  if (alStack_60[0] != 0) {
    lVar3 = *(long *)(alStack_60[0] + _DAT_112ea07a0);
    func_0x000107c6157c(lVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c42194(*(undefined8 *)(lVar3 + 0x28));
    func_0x000107c61574(lVar3);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c6157c(uVar2);
  func_0x0001000c74f0(alStack_60);
  func_0x000107c61574(uVar2);
  if (alStack_60[0] != 0) {
    lVar4 = *(long *)(alStack_60[0] + _DAT_112ea07a0);
    func_0x000107c6157c(lVar4);
    func_0x000107c61170(alStack_60[0]);
    *(undefined8 *)(lVar4 + 0x18) = 0;
    func_0x000107c61604(lVar4 + 0x10,0);
    func_0x000107c61574(lVar4);
  }
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112ea07a0);
    *(undefined ***)(lVar3 + 0x18) = &PTR_DAT_1105158a0;
    func_0x000107c61604(lVar3 + 0x10);
    lVar4 = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c6157c(lVar3);
    FUN_1024d02e4();
    func_0x000107c61170(lVar4);
    func_0x000107c61574(lVar3);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  lStack_50 = param_1;
  func_0x000107c6157c(uVar2);
  func_0x000100075034(FUN_1024d019c,alStack_60,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 1024cfff8; end: 1024d0057; -[_TtC14LensSwipesImpl33LensPlayTimeInSpotlightController init] */

void FUN_1024cfff8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensSwipesImpl.LensPlayTimeInSpotlightController",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d0024);
  (*pcVar1)();
}



/* Entry: 1024d0058; end: 1024d00ef; -[_TtC14LensSwipesImpl33LensPlayTimeInSpotlightController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024d0074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024d0094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024d00d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d0098) */
/* WARNING: Removing unreachable block (ram,0x0001024d0078) */
/* WARNING: Removing unreachable block (ram,0x0001024d00d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d0058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea07e0));
  return;
}



/* Entry: 1024d00f0; end: 1024d010f;  */

void FUN_1024d00f0(void)

{
  func_0x000107c61168(&PTR_PTR_112847f60);
  return;
}



/* Entry: 1024d0110; end: 1024d014b;  */

void FUN_1024d0110(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lStack_a0 = lVar1;
    lStack_80 = lVar1;
    lStack_60 = lVar1;
    lStack_40 = lVar1;
    func_0x000102fe4e28(0x1024d0134,auStack_50,FUN_1024d014c,auStack_70,0x1024d0170,auStack_90,
                        FUN_1024d0194,auStack_b0,FUN_1024cfd4c,0);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1024d014c; end: 1024d0193;  */

void FUN_1024d014c(void)

{
  FUN_1024cfe8c(0);
  return;
}



/* Entry: 1024d0194; end: 1024d019b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d0194(ulong param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_68;
  long lStack_60;
  undefined1 uStack_51;
  
  if (param_3 == *(long *)(*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ea07f8) + _DAT_11302e840)
     ) {
    uVar4 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar4 = param_2 >> 0x38 & 0xf;
    }
    if ((uVar4 != 0) && (uVar4 = param_1, FUN_1024cfd50(), uVar4 != 0)) {
      lVar5 = 0;
      FUN_1024cfa20();
      lVar6 = lVar5;
      func_0x000107c610f8();
      lVar3 = _DAT_112ea07b0;
      uStack_51 = 0;
      func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
      func_0x000107c613fc();
      func_0x000107c6157c(uVar4);
      puVar7 = &uStack_51;
      func_0x00010006c248();
      *(undefined1 **)(lVar6 + lVar3) = puVar7;
      puVar1 = (ulong *)(lVar6 + _DAT_112ea07a8);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      *(ulong *)(lVar6 + _DAT_112ea07a0) = uVar4;
      puVar2 = PTR_s_init_1125d9248;
      lStack_68 = lVar6;
      lStack_60 = lVar5;
      func_0x000107c61434(param_2);
      plVar8 = &lStack_68;
      func_0x000107c61154(plVar8,puVar2);
      FUN_1024cfe8c();
      func_0x000107c61574(uVar4);
      func_0x000107c61170(plVar8);
    }
  }
  return;
}



/* Entry: 1024d019c; end: 1024d01df;  */

void FUN_1024d019c(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 1024d01e0; end: 1024d02d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1024d01e0(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long unaff_x20;
  undefined8 uVar4;
  byte bStack_48;
  undefined7 uStack_47;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea0810);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(&bStack_48);
  func_0x000107c61574(uVar4);
  lVar2 = _DAT_112ea07b0;
  lVar1 = CONCAT71(uStack_47,bStack_48);
  if (lVar1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = param_1 == 0x3c;
    if (bVar3) {
      uVar4 = *(undefined8 *)(lVar1 + _DAT_112ea07b0);
      func_0x000107c6157c(uVar4);
      func_0x0001000c74f0(&bStack_48);
      func_0x000107c61574(uVar4);
      if ((bStack_48 & 1) == 0) {
        uVar4 = *(undefined8 *)(lVar1 + lVar2);
        func_0x000107c6157c(uVar4);
        func_0x000100075034(FUN_1024cf7f8,0,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar4);
        func_0x000107c53c94(*(undefined8 *)(unaff_x20 + _DAT_112ea0800));
      }
    }
    func_0x000107c61170(lVar1);
  }
  return bVar3;
}



/* Entry: 1024d02d8; end: 1024d02e3;  */

void FUN_1024d02d8(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1024d02e4; end: 1024d03e7;  */

void FUN_1024d02e4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4b47c(uStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  puVar2 = &UNK_110515960;
  func_0x000107c613fc(&UNK_110515960,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcStack_48 = FUN_1024d0728;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x42000000;
  pcStack_58 = FUN_1024d0730;
  puStack_50 = &UNK_110515978;
  ppuVar3 = &puStack_68;
  puStack_40 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_40);
  uVar4 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1024d03e8; end: 1024d059f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d03e8(ulong *param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  
  uVar7 = param_2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar4 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  dVar11 = *(double *)(*(long *)(param_3 + _DAT_113081648) + _DAT_1130816f0);
  uVar5 = *param_1;
  func_0x000107c61558();
  uVar10 = *param_1;
  uVar6 = uVar4;
  uVar8 = uVar7;
  func_0x000100029284();
  uVar9 = (ulong)~(uint)uVar8 & 1;
  lVar1 = *(long *)(uVar10 + 0x10) + uVar9;
  if (SCARRY8(*(long *)(uVar10 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1024d057c);
    (*pcVar3)();
  }
  if (*(long *)(uVar10 + 0x18) < lVar1) {
    func_0x000101432e00(lVar1,uVar5);
    uVar6 = uVar4;
    uVar5 = uVar7;
    func_0x000100029284();
    if (((uint)uVar8 & 1) != ((uint)uVar5 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1024d04e0);
      (*pcVar3)();
    }
  }
  else if ((uVar5 & 1) == 0) {
    func_0x000101432c98();
    *param_1 = uVar10;
    goto joined_r0x0001024d0594;
  }
  *param_1 = uVar10;
joined_r0x0001024d0594:
  if ((uVar8 & 1) == 0) {
    lVar1 = uVar10 + (uVar6 >> 6) * 8;
    *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar6 & 0x3f);
    puVar2 = (ulong *)(*(long *)(uVar10 + 0x30) + uVar6 * 0x10);
    *puVar2 = uVar4;
    puVar2[1] = uVar7;
    *(undefined8 *)(*(long *)(uVar10 + 0x38) + uVar6 * 8) = 0;
    if (SCARRY8(*(long *)(uVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1024d05a0);
      (*pcVar3)();
    }
    *(long *)(uVar10 + 0x10) = *(long *)(uVar10 + 0x10) + 1;
    func_0x000107c61434(uVar7);
  }
  *(double *)(*(long *)(uVar10 + 0x38) + uVar6 * 8) =
       dVar11 + *(double *)(*(long *)(uVar10 + 0x38) + uVar6 * 8);
  func_0x000107c6142c(uVar7);
  return;
}



/* Entry: 1024d05a0; end: 1024d05fb;  */

void FUN_1024d05a0(void)

{
  long unaff_x20;
  
  FUN_1024d05fc(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024d05fc; end: 1024d061f;  */

undefined8 FUN_1024d05fc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1024d0620; end: 1024d0727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d0620(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_113081638);
    if (lVar2 != 0) {
      lVar1 = param_2 + 0x10;
      func_0x000107c61618();
      if (lVar1 != 0) {
        uVar4 = *(ulong *)(param_1 + _DAT_113081658);
        func_0x000107c61174();
        FUN_1024d01e0();
        if ((uVar4 & 1) == 0) {
          func_0x000107c61170(lVar2);
        }
        else {
          uVar3 = *(undefined8 *)(param_2 + 0x30);
          lStack_70 = lVar2;
          lStack_68 = param_1;
          func_0x000107c6157c(uVar3);
          func_0x000100075034(FUN_1024d0798,auStack_80,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61170(lVar2);
          func_0x000107c61574(uVar3);
        }
        func_0x000107c615e8(lVar1);
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1024d0728; end: 1024d072f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d0728(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_113081638);
    if (lVar3 != 0) {
      lVar2 = lVar1 + 0x10;
      func_0x000107c61618();
      if (lVar2 != 0) {
        uVar5 = *(ulong *)(param_1 + _DAT_113081658);
        func_0x000107c61174();
        FUN_1024d01e0();
        if ((uVar5 & 1) == 0) {
          func_0x000107c61170(lVar3);
        }
        else {
          uVar4 = *(undefined8 *)(lVar1 + 0x30);
          lStack_70 = lVar3;
          lStack_68 = param_1;
          func_0x000107c6157c(uVar4);
          func_0x000100075034(FUN_1024d0798,auStack_80,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61170(lVar3);
          func_0x000107c61574(uVar4);
        }
        func_0x000107c615e8(lVar2);
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1024d0730; end: 1024d077b;  */

void FUN_1024d0730(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1024d077c; end: 1024d0797;  */

void FUN_1024d077c(long param_1,long param_2)

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



/* Entry: 1024d0798; end: 1024d07af;  */

void FUN_1024d0798(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1024d03e8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1024d07b0; end: 1024d081b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d07b0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1024d0ba4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ea0910) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1024d081c; end: 1024d0887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d081c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea0910) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024d0888; end: 1024d08e7; -[_TtC43SpotlightWidgetScopedFactoryServiceProvider29SpotlightWidgetScopedServices init] */

void FUN_1024d0888(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightWidgetScopedFactoryServiceProvider.SpotlightWidgetScopedServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d08b4);
  (*pcVar1)();
}



/* Entry: 1024d08e8; end: 1024d08f7; -[_TtC43SpotlightWidgetScopedFactoryServiceProvider29SpotlightWidgetScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d08e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea0910));
  return;
}



/* Entry: 1024d08f8; end: 1024d0963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d08f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110515b70;
  func_0x000107c613fc(&UNK_110515b70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1024d0c3c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1024d0964; end: 1024d09ff;  */

void FUN_1024d0964(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110515a80;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110515a80;
  return;
}



/* Entry: 1024d0a00; end: 1024d0a37;  */

void FUN_1024d0a00(long *param_1)

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



/* Entry: 1024d0a38; end: 1024d0a3f;  */

undefined8 FUN_1024d0a38(void)

{
  return 0x1b;
}



/* Entry: 1024d0a40; end: 1024d0b73;  */

void FUN_1024d0a40(undefined8 *param_1)

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
  puVar1 = &UNK_110515b98;
  func_0x000107c613fc(&UNK_110515b98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1024d0c14;
  func_0x00010058fa64(FUN_1024d0c14,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024d0b74; end: 1024d0ba3;  */

undefined ** FUN_1024d0b74(void)

{
  return &PTR_DAT_113067150;
}



/* Entry: 1024d0ba4; end: 1024d0bc3;  */

void FUN_1024d0ba4(void)

{
  func_0x000107c61168(&PTR_PTR_112848058);
  return;
}



/* Entry: 1024d0bc4; end: 1024d0c13;  */

undefined1  [16] FUN_1024d0bc4(void)

{
  return ZEXT816(0x110515ad0);
}



/* Entry: 1024d0c14; end: 1024d0c3b;  */

void FUN_1024d0c14(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1024d0c3c; end: 1024d0c4f;  */

void FUN_1024d0c3c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1024d0c50; end: 1024d0f5b;  */

void FUN_1024d0c50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112ea0988,&UNK_10dab2758);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_1024d0a00;
  func_0x0001000823a8(FUN_1024d0a00,0);
  func_0x000100082720("SpotlightWidgetScopedServicesCleanupRelayServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ea0990,&UNK_10dab2770);
  puVar3 = &UNK_110515c48;
  func_0x000107c613fc(&UNK_110515c48,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar8 = 0x1024d0f64;
  func_0x0001000823a8(0x1024d0f64,puVar3);
  pcVar4 = "SpotlightWidgetEntryPointWrapperServiceProvider";
  func_0x000100082720("SpotlightWidgetEntryPointWrapperServiceProvider",0x2f,2);
  FUN_1024d1ba4();
  func_0x000100082720("SpotlightWidgetScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ea0998,&UNK_10dab2760);
  puVar3 = &UNK_110515c70;
  func_0x000107c613fc(&UNK_110515c70,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 **)(puVar3 + 0x18) = puVar1;
  *(char **)(puVar3 + 0x20) = pcVar4;
  *(code **)(puVar3 + 0x28) = pcVar2;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar2);
  uVar5 = 0x1024d0f70;
  func_0x0001000823a8(0x1024d0f70,puVar3);
  func_0x000100082720("SpotlightWidgetScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112ea0918,&UNK_10dab2520);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1024d0f7c;
  func_0x0001000823a8(0x1024d0f7c,uVar5);
  func_0x000100082720("SpotlightWidgetScopeInitializationServiceProvider",0x31,2);
  func_0x0001000285a8(0x112ea0908,&UNK_10dab2510);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1024d0f84;
  func_0x0001000823a8(0x1024d0f84,uVar6);
  func_0x000100082720("SpotlightWidgetScopedServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110515c98;
  func_0x000107c613fc(&UNK_110515c98,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  uVar7 = 0x1024d0f8c;
  func_0x0001000823a8(0x1024d0f8c,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SpotlightWidgetScopeEntryPointProvider",0x26,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1024d0f5c; end: 1024d0f93;  */

void FUN_1024d0f5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *param_2;
  func_0x0001000285a8(0x112ea0988,&UNK_10dab2758);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_1024d0a00;
  func_0x0001000823a8(FUN_1024d0a00,0);
  func_0x000100082720("SpotlightWidgetScopedServicesCleanupRelayServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ea0990,&UNK_10dab2770);
  puVar3 = &UNK_110515c48;
  func_0x000107c613fc(&UNK_110515c48,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar6);
  uVar4 = 0x1024d0f64;
  func_0x0001000823a8(0x1024d0f64,puVar3);
  pcVar5 = "SpotlightWidgetEntryPointWrapperServiceProvider";
  func_0x000100082720("SpotlightWidgetEntryPointWrapperServiceProvider",0x2f,2);
  FUN_1024d1ba4();
  func_0x000100082720("SpotlightWidgetScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ea0998,&UNK_10dab2760);
  puVar3 = &UNK_110515c70;
  func_0x000107c613fc(&UNK_110515c70,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 **)(puVar3 + 0x18) = puVar1;
  *(char **)(puVar3 + 0x20) = pcVar5;
  *(code **)(puVar3 + 0x28) = pcVar2;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(pcVar2);
  uVar6 = 0x1024d0f70;
  func_0x0001000823a8(0x1024d0f70,puVar3);
  func_0x000100082720("SpotlightWidgetScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112ea0918,&UNK_10dab2520);
  func_0x000107c6157c(uVar6);
  uVar8 = 0x1024d0f7c;
  func_0x0001000823a8(0x1024d0f7c,uVar6);
  func_0x000100082720("SpotlightWidgetScopeInitializationServiceProvider",0x31,2);
  func_0x0001000285a8(0x112ea0908,&UNK_10dab2510);
  func_0x000107c6157c(uVar8);
  uVar7 = 0x1024d0f84;
  func_0x0001000823a8(0x1024d0f84,uVar8);
  func_0x000100082720("SpotlightWidgetScopedServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110515c98;
  func_0x000107c613fc(&UNK_110515c98,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  uVar7 = 0x1024d0f8c;
  func_0x0001000823a8(0x1024d0f8c,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SpotlightWidgetScopeEntryPointProvider",0x26,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1024d0f94; end: 1024d119b;  */

void FUN_1024d0f94(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1024d128c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  FUN_1024d3c20(0);
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1024d3970(uStack_48,uStack_50,uStack_58);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uStack_50;
  func_0x000107c61174(uStack_50);
  uVar3 = uStack_58;
  func_0x000107c61174(uStack_58);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_48;
  func_0x000107c61174(uStack_48);
  func_0x000107c6157c(uVar1);
  FUN_1024d3980();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1024d119c; end: 1024d11cf;  */

void FUN_1024d119c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024d11d0; end: 1024d11d7;  */

undefined8 FUN_1024d11d0(void)

{
  return 0x1b;
}



/* Entry: 1024d11d8; end: 1024d125b;  */

void FUN_1024d11d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1024d12cc,param_2,FUN_1024d12d0,param_2,0x1024d12f8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1024d125c; end: 1024d128b;  */

undefined ** FUN_1024d125c(void)

{
  return &PTR_DAT_113067150;
}



/* Entry: 1024d128c; end: 1024d12ab;  */

void FUN_1024d128c(void)

{
  func_0x000107c61168(&PTR_PTR_112ea0a08);
  return;
}



/* Entry: 1024d12ac; end: 1024d12cf;  */

undefined1  [16] FUN_1024d12ac(void)

{
  return ZEXT816(0x110515cf0);
}



/* Entry: 1024d12d0; end: 1024d1323;  */

void FUN_1024d12d0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1024d1324; end: 1024d135f;  */

void FUN_1024d1324(undefined8 *param_1,undefined8 param_2)

{
  FUN_1024d1360();
  func_0x0001000a7f38("SpotlightWidgetScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1024d1360; end: 1024d154b;  */

void FUN_1024d1360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074df50;
  ppuVar4 = &PTR_DAT_113067150;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ea0a78;
  func_0x0001000285a8(0x112ea0a78,&UNK_10dab28a8);
  func_0x0001000a6ee8(&UNK_110515cf0,"SpotlightWidgetEntryPointWrapperScopeInitializationPluginKey",
                      0x3c,2,FUN_1024d15c0,param_1,uVar2,&UNK_110515cf0,&PTR_DAT_112ea09a0);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110515d40;
  func_0x000107c613fc(&UNK_110515d40,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110515f50,"SpotlightWidgetScopeGraphBridgeScopeInitializationPluginKey",
                      0x3b,2,FUN_1024d15c8,puVar3,uVar2,&UNK_110515f50,&PTR_DAT_112ea0b08);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110515d68;
  func_0x000107c613fc(&UNK_110515d68,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110515b10,"SpotlightWidgetScopedServicesScopeInitializationPluginKey",
                      0x39,2,FUN_1024d16b0,puVar3,uVar2,&UNK_110515b10,&PTR_DAT_112ea0920);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ea0a80;
  func_0x0001000285a8(0x112ea0a80,&UNK_10dab28b0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1024d154c; end: 1024d15bf;  */

void FUN_1024d154c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1024d16ec;
  func_0x0001000823a8(0x1024d16ec,param_3);
  func_0x000100082720("SpotlightWidgetEntryPointWrapperScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024d15c0; end: 1024d15c7;  */

void FUN_1024d15c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1024d16ec;
  func_0x0001000823a8();
  func_0x000100082720("SpotlightWidgetEntryPointWrapperScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024d15c8; end: 1024d1607;  */

void FUN_1024d15c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1024d1d48(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpotlightWidgetScopeGraphBridgeScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024d1608; end: 1024d16af;  */

void FUN_1024d1608(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110515d90;
  func_0x000107c613fc(&UNK_110515d90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1024d16e4;
  func_0x0001000823a8(FUN_1024d16e4,puVar1);
  func_0x000100082720("SpotlightWidgetScopedServicesScopeInitializationPluginProvider",0x3e,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1024d16b0; end: 1024d16b7;  */

void FUN_1024d16b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110515d90;
  func_0x000107c613fc(&UNK_110515d90,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1024d16e4;
  func_0x0001000823a8(FUN_1024d16e4,puVar3);
  func_0x000100082720("SpotlightWidgetScopedServicesScopeInitializationPluginProvider",0x3e,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1024d16b8; end: 1024d16e3;  */

void FUN_1024d16b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024d16e4; end: 1024d16f3;  */

void FUN_1024d16e4(undefined8 *param_1)

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
  puVar1 = &UNK_110515b98;
  func_0x000107c613fc(&UNK_110515b98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1024d0c14;
  func_0x00010058fa64(FUN_1024d0c14,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024d16f4; end: 1024d177b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024d16f4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1024d1ab4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112ea0a88) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ea0a90) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d177c);
  (*pcVar1)();
}



/* Entry: 1024d177c; end: 1024d17db; -[_TtC31SpotlightWidgetScopeGraphBridge46SpotlightWidgetScopeGraphBridgeSaberEntryPoint init] */

void FUN_1024d177c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightWidgetScopeGraphBridge.SpotlightWidgetScopeGraphBridgeSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d17a8);
  (*pcVar1)();
}



/* Entry: 1024d17dc; end: 1024d1813; -[_TtC31SpotlightWidgetScopeGraphBridge46SpotlightWidgetScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024d17f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d17fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d17dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea0a88));
  return;
}



/* Entry: 1024d1814; end: 1024d183b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d1814(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ea0a90),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ea0a88));
  return;
}



/* Entry: 1024d183c; end: 1024d185b;  */

void FUN_1024d183c(void)

{
  func_0x000107c61168(&PTR_PTR_112848118);
  return;
}



/* Entry: 1024d185c; end: 1024d18e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024d185c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea0ac0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ea0ac8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024d18e4);
  (*pcVar2)();
}



/* Entry: 1024d18e4; end: 1024d19cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1024d18e4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea0ac0);
  *(undefined **)(unaff_x20 + _DAT_112ea0ac0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea0ac8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea0ac8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110515eb0;
  func_0x000107c613fc(&UNK_110515eb0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1024d19d0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1024d19cc; end: 1024d19d7;  */

void FUN_1024d19cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1024d19d8; end: 1024d1a37; -[_TtC31SpotlightWidgetScopeGraphBridge44SpotlightWidgetScopedServicesSaberEntryPoint init] */

void FUN_1024d19d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightWidgetScopeGraphBridge.SpotlightWidgetScopedServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d1a04);
  (*pcVar1)();
}



/* Entry: 1024d1a38; end: 1024d1a6f; -[_TtC31SpotlightWidgetScopeGraphBridge44SpotlightWidgetScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d1a38(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea0ac8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea0ac0));
  return;
}



/* Entry: 1024d1a70; end: 1024d1a73;  */

void FUN_1024d1a70(void)

{
  return;
}



/* Entry: 1024d1a74; end: 1024d1a93;  */

void FUN_1024d1a74(void)

{
  FUN_1024d18e4();
  return;
}


