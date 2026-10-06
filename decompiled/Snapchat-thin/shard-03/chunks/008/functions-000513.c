/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ca54d8; end: 102ca5537; -[_TtC24TapTooltipImplementation21TapTooltipEventStream init] */

void FUN_102ca54d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TapTooltipImplementation.TapTooltipEventStream",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ca5504);
  (*pcVar1)();
}



/* Entry: 102ca5538; end: 102ca55a3; -[_TtC24TapTooltipImplementation21TapTooltipEventStream .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ca5578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ca557c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca5538(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f09900 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f09908));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f09910));
  return;
}



/* Entry: 102ca55a4; end: 102ca55c3;  */

void FUN_102ca55a4(void)

{
  func_0x000107c61168(&PTR_PTR_11289c5d8);
  return;
}



/* Entry: 102ca55c4; end: 102ca55e3;  */

void FUN_102ca55c4(void)

{
  FUN_102ca4eb0();
  return;
}



/* Entry: 102ca55e4; end: 102ca55e7; -[_TtC24TapTooltipImplementation21TapTooltipEventStream adInteractionEventObservable] */

void FUN_102ca55e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102ca55e8; end: 102ca55eb; -[_TtC24TapTooltipImplementation21TapTooltipEventStream adLifecycleEventObservable] */

void FUN_102ca55e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102ca55ec; end: 102ca563f;  */

undefined8 FUN_102ca55ec(void)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f105dd0);
  func_0x000107c3ebdc();
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 102ca5640; end: 102ca5a03;  */

void FUN_102ca5640(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  long *plVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [24];
  long *plStack_60;
  long lStack_58;
  
  lVar2 = *(long *)(unaff_x20 + 0x68);
  lVar1 = *(long *)(unaff_x20 + 0x70);
  func_0x0001000a8868(unaff_x20 + 0x50,lVar2);
  (**(code **)(lVar1 + 8))(lVar2,lVar1);
  if (lVar2 == 0) {
    uVar11 = 0;
  }
  else {
    puVar8 = &UNK_1105bcae0;
    puVar3 = puVar8;
    func_0x000107c613fc(&UNK_1105bcae0,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    uVar4 = 0x102ca72b4;
    func_0x0001000c0ebc(0x102ca72b4,puVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(puVar3);
    puVar3 = puVar8;
    func_0x000107c613fc(&UNK_1105bcae0,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    uVar11 = 0x102ca72bc;
    func_0x0001000c0ebc(0x102ca72bc,puVar3);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c6157c(uVar11);
    pcVar5 = FUN_102ca5c84;
    func_0x0001000c0ebc(FUN_102ca5c84,0);
    func_0x000107c61574(uVar11);
    puVar3 = puVar8;
    func_0x000107c613fc(&UNK_1105bcae0,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    uVar4 = 0x102ca72c4;
    puVar10 = puVar3;
    (**(code **)(*(long *)pcVar5 + 0x60))(0x102ca72c4);
    func_0x000107c61574(pcVar5);
    func_0x000107c61574(puVar3);
    uVar6 = uVar4;
    func_0x000107c614f0(uVar4);
    uVar12 = *(undefined8 *)(unaff_x20 + 0xa8);
    (**(code **)(puVar10 + 0x10))(uVar12,uVar6,puVar10);
    func_0x000107c615e8(uVar4);
    func_0x000107c6157c(uVar11);
    pcVar5 = FUN_102ca6098;
    func_0x0001000c0ebc(FUN_102ca6098,0);
    func_0x000107c61574(uVar11);
    pcVar7 = FUN_102ca60c8;
    func_0x0001000c0ebc(FUN_102ca60c8,0);
    func_0x000107c61574(pcVar5);
    puVar3 = puVar8;
    func_0x000107c613fc(&UNK_1105bcae0,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    uVar4 = 0x102ca72cc;
    puVar10 = puVar3;
    (**(code **)(*(long *)pcVar7 + 0x60))(0x102ca72cc);
    func_0x000107c61574(pcVar7);
    func_0x000107c61574(puVar3);
    uVar6 = uVar4;
    func_0x000107c614f0(uVar4);
    (**(code **)(puVar10 + 0x10))(uVar12,uVar6,puVar10);
    func_0x000107c615e8(uVar4);
    func_0x000107c6157c(uVar11);
    pcVar5 = FUN_102ca6218;
    func_0x0001000c0ebc(FUN_102ca6218,0);
    func_0x000107c61574(uVar11);
    func_0x000107c613fc(&UNK_1105bcae0,0x18,7);
    func_0x000107c61644(puVar8 + 0x10);
    uVar4 = 0x102ca72d4;
    puVar3 = puVar8;
    (**(code **)(*(long *)pcVar5 + 0x60))(0x102ca72d4);
    func_0x000107c61574(pcVar5);
    func_0x000107c61574(puVar8);
    uVar6 = uVar4;
    func_0x000107c614f0(uVar4);
    (**(code **)(puVar3 + 0x10))(uVar12,uVar6,puVar3);
    func_0x000107c615e8(uVar4);
  }
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,plStack_60);
  plVar9 = plStack_60;
  (**(code **)(lStack_58 + 8))(plStack_60,lStack_58);
  puVar8 = &UNK_1105bcae0;
  func_0x000107c613fc(&UNK_1105bcae0,0x18,7);
  func_0x000107c61644(puVar8 + 0x10);
  pcVar5 = FUN_102ca72ac;
  puVar3 = puVar8;
  (**(code **)(*plVar9 + 0x60))(FUN_102ca72ac);
  func_0x000107c61574(plVar9);
  func_0x000107c61574(puVar8);
  func_0x0001000834e4(auStack_78);
  pcVar7 = pcVar5;
  func_0x000107c614f0(pcVar5);
  (**(code **)(puVar3 + 0x10))(*(undefined8 *)(unaff_x20 + 0xa8),pcVar7,puVar3);
  func_0x000107c61574(uVar11);
  func_0x000107c615e8(pcVar5);
  return;
}



/* Entry: 102ca5a04; end: 102ca5b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102ca5a04(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(*param_1 + _DAT_11308c0c0);
  lVar2 = param_2;
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar5 = 0;
    lVar2 = 0;
  }
  else {
    lVar5 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    if (lVar2 == 0) {
LAB_102ca5ae4:
      uVar4 = 1;
      goto LAB_102ca5b18;
    }
LAB_102ca5acc:
    uVar4 = 0;
    lVar3 = lVar2;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x10);
    lVar3 = *(long *)(param_2 + 0x18);
    func_0x000107c61434(lVar3);
    func_0x000107c61574(param_2);
    if (lVar2 == 0) {
      if (lVar3 == 0) goto LAB_102ca5ae4;
      uVar4 = 0;
    }
    else {
      if (lVar3 == 0) goto LAB_102ca5acc;
      if ((lVar5 == lVar1) && (lVar2 == lVar3)) {
        func_0x000107c6142c(lVar2);
        uVar4 = 1;
      }
      else {
        func_0x000107c605b8(lVar5,lVar2,lVar1,lVar3,0);
        uVar4 = (uint)lVar5;
        func_0x000107c6142c(lVar2);
      }
    }
  }
  func_0x000107c6142c(lVar3);
LAB_102ca5b18:
  return uVar4 & 1;
}



/* Entry: 102ca5b34; end: 102ca5b97;  */

uint FUN_102ca5b34(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_2;
    FUN_102ca5b98();
    uVar2 = (uint)lVar1;
    func_0x000107c61574(param_2);
  }
  return uVar2 & 1;
}



/* Entry: 102ca5b98; end: 102ca5c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102ca5b98(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar2 != 0) {
    func_0x0001041f3970();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      lVar2 = *(long *)(*(long *)(lVar1 + _DAT_113068f48) + _DAT_11308f208);
      if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + _DAT_113091068), lVar2 == 0)) {
        uVar4 = 0;
      }
      else {
        lVar3 = *(long *)(lVar2 + _DAT_113090680);
        lVar2 = lVar3;
        func_0x000107c61174(lVar3);
        func_0x000107c61170(lVar1);
        if (lVar3 == 0) {
          return 0;
        }
        uVar4 = 1;
        lVar1 = lVar2;
      }
      func_0x000107c61170(lVar1);
      return uVar4;
    }
  }
  return 0;
}



/* Entry: 102ca5c84; end: 102ca5cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102ca5c84(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + _DAT_11308c0c8);
  func_0x000107c30b1c(uVar1);
  return (int)uVar1 == 1;
}



/* Entry: 102ca5cb4; end: 102ca5d07;  */

void FUN_102ca5cb4(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_102ca5d08();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102ca5d08; end: 102ca6097;  */

/* WARNING: Possible PIC construction at 0x000102ca5d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca5d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca5de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca5f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca602c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca6070: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ca5f2c) */
/* WARNING: Removing unreachable block (ram,0x000102ca606c) */
/* WARNING: Removing unreachable block (ram,0x000102ca5f40) */
/* WARNING: Removing unreachable block (ram,0x000102ca5dec) */
/* WARNING: Removing unreachable block (ram,0x000102ca5df0) */
/* WARNING: Removing unreachable block (ram,0x000102ca5d8c) */
/* WARNING: Removing unreachable block (ram,0x000102ca5d90) */
/* WARNING: Removing unreachable block (ram,0x000102ca5db4) */
/* WARNING: Removing unreachable block (ram,0x000102ca6044) */
/* WARNING: Removing unreachable block (ram,0x000102ca5dc8) */
/* WARNING: Removing unreachable block (ram,0x000102ca5d74) */
/* WARNING: Removing unreachable block (ram,0x000102ca5d78) */
/* WARNING: Removing unreachable block (ram,0x000102ca6030) */
/* WARNING: Removing unreachable block (ram,0x000102ca6070) */

void FUN_102ca5d08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0xa2) == '\x01') {
    *(undefined1 *)(unaff_x20 + 0xa2) = 0;
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c3d368(uVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102ca6098; end: 102ca60c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102ca6098(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + _DAT_11308c0c8);
  func_0x000107c30b1c(uVar1);
  return (int)uVar1 == 2;
}



/* Entry: 102ca60c8; end: 102ca613b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102ca60c8(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11308c0c8;
  lVar2 = *param_1;
  func_0x000107c61428(lVar2 + _DAT_11308c0c8,auStack_38,0x20,0);
  uVar3 = *(undefined8 *)(lVar2 + lVar1);
  func_0x000107c61174(lVar2);
  func_0x000107c30b30(uVar3);
  func_0x000107c614a8(auStack_38);
  func_0x000107c61170(lVar2);
  return uVar3;
}



/* Entry: 102ca613c; end: 102ca6217;  */

void FUN_102ca613c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0x90);
    if (lVar1 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c61174(lVar1);
      func_0x000107c61574(lVar2);
      func_0x000107c498f8(lVar1);
      func_0x000107c61170(lVar1);
    }
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x98);
    if (lVar2 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c61174(lVar2);
      func_0x000107c61574(param_2);
      func_0x000107c498f8(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102ca6218; end: 102ca6247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102ca6218(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + _DAT_11308c0c8);
  func_0x000107c30b1c(uVar1);
  return (int)uVar1 == 3;
}



/* Entry: 102ca6248; end: 102ca62f7;  */

void FUN_102ca6248(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x98);
    if (lVar2 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c61174(lVar2);
      func_0x000107c61574(lVar1);
      func_0x000107c498f8(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0xa2) = 1;
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102ca62f8; end: 102ca6593;  */

void FUN_102ca62f8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  double dStack_a8;
  double dStack_a0;
  uint uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  undefined8 uVar6;
  
  func_0x000107c61428(param_6 + 0x10,auStack_78,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61648();
  if (param_6 != 0) {
    uVar6 = *(undefined8 *)(param_5 + 0x18);
    uVar1 = *(undefined8 *)(param_5 + 0x20);
    lVar2 = param_5;
    func_0x0001000a8868(param_5,uVar6);
    FUN_102d24050(&dStack_a8,&UNK_1105c3bc0,uVar6,&UNK_1105c3bc0,uVar1,&PTR_DAT_1105c3338,lVar2);
    uVar5 = (uint)uVar6;
    if (lStack_80 == 0) {
      uVar6 = *(undefined8 *)(param_5 + 0x18);
      uVar1 = *(undefined8 *)(param_5 + 0x20);
      lVar2 = param_5;
      func_0x0001000a8868(param_5,uVar6);
      FUN_102d24050(&dStack_a8,&UNK_1105c3c48,uVar6,&UNK_1105c3c48,uVar1,&PTR_DAT_1105c3340,lVar2);
      if (lStack_90 == 0) {
        uVar6 = *(undefined8 *)(param_5 + 0x18);
        uVar1 = *(undefined8 *)(param_5 + 0x20);
        func_0x0001000a8868(param_5,uVar6);
        FUN_102d24050(&dStack_a8,&UNK_1105c3cc8,uVar6,&UNK_1105c3cc8,uVar1,&PTR_DAT_1105c3348,
                      param_5);
        if (lStack_90 == 0) {
          func_0x000107c61574(param_6);
          return;
        }
        FUN_102ca6594(dStack_a8,dStack_a0);
        lVar2 = lStack_90;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c4c194();
        func_0x000107c61180();
        func_0x000107c51724();
        func_0x000107c61170(puVar4);
        uVar6 = *(undefined8 *)(param_6 + 0x40);
        lVar2 = *(long *)(param_6 + 0x48);
        func_0x0001000a8868(param_6 + 0x28,uVar6);
        (**(code **)(lVar2 + 8))
                  (dStack_a8,dStack_a0,dStack_a8 / param_3,dStack_a0 / param_4,2,1,uVar6,lVar2);
        lVar2 = lStack_90;
      }
      func_0x000107c61574(param_6);
      func_0x000107c6142c(lVar2);
    }
    else {
      lVar3 = lStack_90;
      FUN_102ca6c68(lStack_90);
      lVar2 = 0;
      if ((uVar5 & 0xff) != 1) {
        lVar2 = lVar3;
      }
      if (*(long *)(param_6 + 0x98) != 0) {
        func_0x000107c498f8();
      }
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      func_0x000107c61180();
      func_0x000107c51724();
      func_0x000107c61170(puVar4);
      FUN_102ca7308(param_6 + 0x28,&dStack_a8);
      func_0x0001000a8868(&dStack_a8,lStack_90);
      uVar6 = 3;
      if ((uStack_98 & 1) == 0) {
        uVar6 = 1;
      }
      (**(code **)(lStack_88 + 8))
                (dStack_a8,dStack_a0,dStack_a8 / param_3,dStack_a0 / param_4,uVar6,lVar2,lStack_90,
                 lStack_88);
      func_0x000107c61574(param_6);
      func_0x000107c6142c(lStack_80);
      func_0x0001000834e4(&dStack_a8);
    }
  }
  return;
}



/* Entry: 102ca6594; end: 102ca674f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca6594(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  code *pcVar7;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long alStack_68 [3];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(alStack_68);
  if (alStack_68[0] != 0) {
    uVar1 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010f105dd0);
    lVar2 = alStack_68[0];
    func_0x000107c3ebdc();
    func_0x000107c615e8(alStack_68[0]);
    func_0x000107c61170(uVar1);
    if ((int)lVar2 != 0) {
      lVar2 = *(long *)(unaff_x20 + 0x20);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      func_0x000107c5fadc(lVar3,*(undefined8 *)(unaff_x20 + 0x18));
      func_0x000107c3d368();
      func_0x000107c61180();
      func_0x000107c61170();
      if (lVar2 != 0) {
        func_0x0001041f3970();
        func_0x000107c61170(lVar2);
        if (lVar3 != 0) {
          lVar4 = *(long *)(lVar3 + _DAT_113068f48);
          func_0x000107c61174();
          func_0x000107c61170(lVar3);
          lVar2 = lVar4;
          func_0x000107c4e8c0();
          func_0x000107c61180();
          func_0x000107c61170(lVar4);
          if (lVar2 != 0) {
            func_0x000107c61170(lVar2);
            func_0x0001000d224c(alStack_68);
            func_0x0001000a8868(alStack_68,uStack_50);
            uStack_78 = 4;
            uStack_70 = CONCAT71(uStack_70._1_7_,4);
            pcVar7 = *(code **)(lStack_48 + 0x10);
            puVar5 = &UNK_1105c3600;
            ppuVar6 = &PTR_DAT_1105c32c0;
            goto LAB_102ca6720;
          }
        }
      }
    }
  }
  func_0x0001000d224c(alStack_68);
  func_0x0001000a8868(alStack_68,uStack_50);
  pcVar7 = *(code **)(lStack_48 + 0x10);
  puVar5 = &UNK_1105c3d48;
  ppuVar6 = &PTR_DAT_1105c3350;
  uStack_78 = param_1;
  uStack_70 = param_2;
LAB_102ca6720:
  (*pcVar7)(&uStack_78,puVar5,ppuVar6,uStack_50,lStack_48);
  func_0x0001000834e4(alStack_68);
  return;
}



/* Entry: 102ca6750; end: 102ca67d7;  */

/* WARNING: Possible PIC construction at 0x000102ca678c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ca6790) */
/* WARNING: Removing unreachable block (ram,0x000102ca67c8) */
/* WARNING: Removing unreachable block (ram,0x000102ca6794) */
/* WARNING: Removing unreachable block (ram,0x000102ca67a0) */
/* WARNING: Removing unreachable block (ram,0x000102ca67b4) */

void FUN_102ca6750(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c4a784(uVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102ca67d8; end: 102ca688f;  */

void FUN_102ca67d8(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0xa0) = 1;
    FUN_102ca6750();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102ca6890; end: 102ca6933;  */

void FUN_102ca6890(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x0001000834e4(unaff_x20 + 0x50);
  FUN_102c62b64(unaff_x20 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  return;
}



/* Entry: 102ca6934; end: 102ca6b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102ca6934(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 auVar7 [16];
  long lStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_50);
  if (lStack_50 != 0) {
    uVar1 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010f105dd0);
    lVar4 = lStack_50;
    func_0x000107c3ebdc();
    func_0x000107c615e8(lStack_50);
    func_0x000107c61170(uVar1);
    if ((int)lVar4 != 0) {
      lVar4 = param_1;
      func_0x000107c4e8c0();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000103bfb8b0(0);
        lVar2 = *(long *)(lVar4 + _DAT_113815338);
        lVar5 = ((long *)(lVar4 + _DAT_113815338))[1];
        func_0x000107c61434(lVar5);
        lVar3 = lVar5;
        func_0x000103bfaab8();
        func_0x000107c6142c(lVar5);
        lStack_50 = lVar2;
        lStack_48 = lVar3;
        func_0x000100e8b654();
        puVar6 = PTR___sSSN_11034da80;
        func_0x000107c601f8(PTR___sSSN_11034da80,lVar5);
        func_0x000107c6142c(lVar3);
        func_0x000107c61170(lVar4);
        goto LAB_102ca6af8;
      }
    }
  }
  lVar4 = *(long *)(param_1 + _DAT_11308f208);
  if (lVar4 == 0) {
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + _DAT_113091068);
    lVar4 = *(long *)(lVar4 + _DAT_113091070);
    func_0x000107c61174(lVar4);
    func_0x000107c61174(lVar5);
  }
  func_0x000103bfb8b0(0);
  lVar2 = lVar5;
  lVar3 = lVar4;
  func_0x000103bfab18();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  if (lVar3 == 0) {
    puVar6 = (undefined *)0x0;
    lVar5 = -0x2000000000000000;
  }
  else {
    lStack_50 = lVar2;
    lStack_48 = lVar3;
    func_0x000100e8b654();
    puVar6 = PTR___sSSN_11034da80;
    func_0x000107c601f8(PTR___sSSN_11034da80,lVar5);
    func_0x000107c6142c(lVar3);
  }
LAB_102ca6af8:
  auVar7._8_8_ = lVar5;
  auVar7._0_8_ = puVar6;
  return auVar7;
}



/* Entry: 102ca6b18; end: 102ca6b53;  */

void FUN_102ca6b18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f09a50;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f09a50,&UNK_10db3c648);
  func_0x000107c5fb18(&uStack_18,uVar1);
  return;
}



/* Entry: 102ca6b54; end: 102ca6b73;  */

void FUN_102ca6b54(void)

{
  FUN_102ca6c78();
  return;
}



/* Entry: 102ca6b74; end: 102ca6b7f;  */

undefined * FUN_102ca6b74(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar8;
    func_0x000107c60498();
    puVar9 = puVar9 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar9,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      func_0x000100102924(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102ca6b80; end: 102ca6bff;  */

undefined * FUN_102ca6b80(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  FUN_102ca5b98();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (((param_1 & 1) != 0) && (*(char *)(lVar3 + 0xa0) == '\x01')) {
    puVar1 = (undefined *)0x112f05268;
    func_0x0001000285a8(0x112f05268,&UNK_10db39870);
    func_0x000107c613fc();
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    uVar2 = 0;
    func_0x000103b9a070();
    *(undefined8 *)(puVar1 + 0x20) = uVar2;
  }
  return puVar1;
}



/* Entry: 102ca6c00; end: 102ca6c03;  */

undefined * FUN_102ca6c00(void)

{
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 102ca6c04; end: 102ca6c67; -[SCAdPlaybackLoadedSnapMetadata tapTooltipConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca6c04(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + _DAT_113068f48) + _DAT_11308f208);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + _DAT_113091068), lVar1 != 0)) {
    func_0x000107c61174(*(undefined8 *)(lVar1 + _DAT_113090680));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ca6c68; end: 102ca6c77;  */

undefined1  [16] FUN_102ca6c68(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 8) {
    uVar1 = param_1;
  }
  auVar2[8] = 7 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 102ca6c78; end: 102ca7267;  */

/* WARNING: Possible PIC construction at 0x000102ca7204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ca7208) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102ca6c78(void)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar14;
  long unaff_x21;
  undefined8 *unaff_x22;
  long lVar15;
  ulong uVar16;
  undefined8 unaff_x23;
  undefined8 uVar17;
  undefined8 *unaff_x24;
  undefined8 uVar18;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_d0 [128];
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar14 = unaff_x20[4];
  uVar16 = unaff_x20[2];
  uVar17 = unaff_x20[3];
  func_0x000107c5fadc(uVar16,uVar17);
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  puVar10 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar14 == 0) goto code_r0x000100214a84;
  func_0x0001041f3970();
  func_0x000107c61170(lVar14);
  puVar10 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 == 0) goto code_r0x000100214a84;
  lVar14 = *(long *)(uVar16 + _DAT_113068f48);
  func_0x000107c61174();
  func_0x000107c61170();
  FUN_102ca5b98();
  if (((uVar16 & 1) == 0) || (*(char *)(unaff_x20 + 0x14) != '\x01')) {
    func_0x000107c61170(lVar14);
    puVar10 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    goto code_r0x000100214a84;
  }
  lVar12 = lVar14;
  FUN_102ca6934(lVar14);
  puVar8 = (undefined8 *)PTR_PTR_1126ac1d0;
  func_0x000107c610f8();
  func_0x000107c5fadc(lVar12,uVar17);
  func_0x000107c6142c(uVar17);
  func_0x000107c4628c();
  func_0x000107c61170(lVar12);
  if (*(char *)((long)unaff_x20 + 0xa1) == '\x01') {
    lVar12 = lVar14;
    func_0x000107c3dde0();
    func_0x000107c61180();
    if (lVar12 == 0) {
LAB_102ca6de4:
      lVar9 = lVar14;
      func_0x000107c5e224();
      func_0x000107c61180();
      if (lVar9 != 0) {
        uVar17 = *(undefined8 *)(lVar9 + _DAT_113091390);
        lVar12 = ((undefined8 *)(lVar9 + _DAT_113091390))[1];
        func_0x000107c61434(lVar12);
        func_0x000107c61170(lVar9);
        if (lVar12 != 0) goto LAB_102ca6e24;
      }
      uVar17 = 0;
    }
    else {
      lVar15 = *(long *)(lVar12 + _DAT_11308fab8);
      lVar9 = lVar15;
      func_0x000107c61174();
      func_0x000107c61170(lVar12);
      if (lVar15 == 0) goto LAB_102ca6de4;
      uVar17 = *(undefined8 *)(lVar9 + _DAT_113090408);
      lVar12 = ((undefined8 *)(lVar9 + _DAT_113090408))[1];
      func_0x000107c61434(lVar12);
      func_0x000107c61170(lVar9);
      if (lVar12 == 0) goto LAB_102ca6de4;
LAB_102ca6e24:
      func_0x000107c5fadc(uVar17,lVar12);
      func_0x000107c6142c(lVar12);
    }
    func_0x000107c55208(puVar8);
    func_0x000107c61170(uVar17);
  }
  unaff_x25 = _DAT_11308f208;
  if (((*(long *)(lVar14 + _DAT_11308f208) != 0) &&
      (lVar12 = *(long *)(*(long *)(lVar14 + _DAT_11308f208) + _DAT_113091070), lVar12 != 0)) &&
     (*(long *)(lVar12 + _DAT_113091028) == 3)) {
    lVar12 = lVar14;
    func_0x000107c5e224();
    func_0x000107c61180();
    if (lVar12 == 0) {
LAB_102ca6f20:
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined8 *)(lVar12 + _DAT_113091390);
      lVar9 = ((undefined8 *)(lVar12 + _DAT_113091390))[1];
      func_0x000107c61434(lVar9);
      func_0x000107c61170(lVar12);
      if (lVar9 == 0) goto LAB_102ca6f20;
      func_0x000107c5fadc(uVar17,lVar9);
      func_0x000107c6142c(lVar9);
    }
    func_0x000107c55208(puVar8);
    func_0x000107c61170(uVar17);
    lVar12 = lVar14;
    func_0x000107c5e224();
    func_0x000107c61180();
    if (lVar12 == 0) {
LAB_102ca6f94:
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined8 *)(lVar12 + _DAT_113091388);
      lVar9 = ((undefined8 *)(lVar12 + _DAT_113091388))[1];
      func_0x000107c61434(lVar9);
      func_0x000107c61170(lVar12);
      if (lVar9 == 0) goto LAB_102ca6f94;
      func_0x000107c5fadc(uVar17,lVar9);
      func_0x000107c6142c(lVar9);
    }
    func_0x000107c54250(puVar8);
    func_0x000107c61170(uVar17);
  }
  uVar16 = ((undefined8 *)(lVar14 + _DAT_11308f290))[1];
  if (uVar16 >> 0x3c < 0xf) {
    uVar18 = *(undefined8 *)(lVar14 + _DAT_11308f290);
    func_0x00010006c00c(uVar18,uVar16);
    uVar17 = uVar18;
    func_0x000107c5ee20(uVar18,uVar16);
    func_0x0001000b44c0(uVar18,uVar16);
  }
  else {
    uVar17 = 0;
  }
  func_0x000107c523f8(puVar8);
  func_0x000107c61170(uVar17);
  func_0x000107c425d8(lVar14);
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c547e4(puVar8);
  func_0x000107c61170(puVar13);
  if (((*(long *)(lVar14 + unaff_x25) != 0) &&
      (lVar12 = *(long *)(*(long *)(lVar14 + unaff_x25) + _DAT_113091068), lVar12 != 0)) &&
     ((lVar12 = *(long *)(lVar12 + _DAT_113090618), lVar12 != 0 &&
      (lVar12 = *(long *)(lVar12 + _DAT_113090558), lVar12 != 0)))) {
    func_0x000107c61174();
    lVar9 = lVar12;
    func_0x000106434f9c();
    func_0x000107c61180();
    lVar15 = lVar9;
    func_0x000107c44d98();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    func_0x000107c55398(puVar8);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar15);
  }
  lVar12 = lVar14;
  func_0x000107c5cc0c();
  func_0x000107c61180();
  if (lVar12 == 0) {
LAB_102ca7160:
    uVar17 = 0;
  }
  else {
    lVar15 = *(long *)(lVar12 + _DAT_113090650);
    lVar9 = lVar15;
    func_0x000107c61174();
    func_0x000107c61170(lVar12);
    if (lVar15 == 0) goto LAB_102ca7160;
    lVar12 = *(long *)(lVar9 + _DAT_11308f8e8);
    func_0x000107c61174();
    func_0x000107c61170(lVar9);
    uVar17 = *(undefined8 *)(lVar12 + _DAT_11308f930);
    func_0x000107c61174(uVar17);
    func_0x000107c61170(lVar12);
  }
  func_0x000107c523fc(puVar8);
  func_0x000107c61170(uVar17);
  unaff_x22 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  unaff_x22[3] = 4;
  unaff_x22[2] = 2;
  puVar10 = unaff_x22;
  func_0x000103b999ac();
  unaff_x23 = puVar10[1];
  unaff_x24 = unaff_x22 + 4;
  *unaff_x24 = *puVar10;
  unaff_x22[5] = unaff_x23;
  uVar17 = 0;
  FUN_102ca7268();
  unaff_x22[9] = uVar17;
  unaff_x22[6] = puVar8;
  func_0x000107c61434(unaff_x23);
  func_0x000107c61174();
  puVar10 = puVar8;
  func_0x000103b999b8();
  uVar17 = puVar10[1];
  unaff_x22[10] = *puVar10;
  unaff_x22[0xb] = uVar17;
  uVar4 = *(undefined1 *)((long)unaff_x20 + 0xa1);
  unaff_x22[0xf] = PTR___sSbN_11034dd40;
  *(undefined1 *)(unaff_x22 + 0xc) = uVar4;
  func_0x000107c61434();
  unaff_x30 = 0x102ca7208;
  register0x00000008 = (BADSPACEBASE *)auStack_d0;
  puVar10 = unaff_x22;
  unaff_x19 = unaff_x20;
  unaff_x20 = puVar8;
  unaff_x21 = lVar14;
  unaff_x29 = puVar1;
code_r0x000100214a84:
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar13 = (undefined *)puVar10[2];
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar6 = puVar13;
    func_0x000107c60498();
    puVar10 = puVar10 + 4;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar10,(undefined1 *)((long)register0x00000008 + -0x80));
      uVar16 = *(ulong *)((long)register0x00000008 + -0x80);
      uVar3 = *(ulong *)((long)register0x00000008 + -0x78);
      uVar7 = uVar16;
      uVar11 = uVar3;
      func_0x000100029284();
      if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar5)();
      }
      uVar11 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar11 + 0x40) = *(ulong *)(puVar6 + uVar11 + 0x40) | 1L << (uVar7 & 0x3f)
      ;
      puVar2 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar2 = uVar16;
      puVar2[1] = uVar3;
      func_0x000100102924((undefined1 *)((long)register0x00000008 + -0x70),
                          *(long *)(puVar6 + 0x38) + uVar7 * 0x20);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      puVar10 = puVar10 + 6;
      puVar13 = puVar13 + -1;
    } while (puVar13 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 102ca7268; end: 102ca72ab;  */

void FUN_102ca7268(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f09848 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ac1d0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f09848 = puVar1;
  return;
}



/* Entry: 102ca72ac; end: 102ca7307;  */

void FUN_102ca72ac(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  long unaff_x20;
  double dStack_a8;
  double dStack_a0;
  uint uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  undefined8 uVar7;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar7 = *(undefined8 *)(param_5 + 0x18);
    uVar1 = *(undefined8 *)(param_5 + 0x20);
    lVar3 = param_5;
    func_0x0001000a8868(param_5,uVar7);
    FUN_102d24050(&dStack_a8,&UNK_1105c3bc0,uVar7,&UNK_1105c3bc0,uVar1,&PTR_DAT_1105c3338,lVar3);
    uVar6 = (uint)uVar7;
    if (lStack_80 == 0) {
      uVar7 = *(undefined8 *)(param_5 + 0x18);
      uVar1 = *(undefined8 *)(param_5 + 0x20);
      lVar3 = param_5;
      func_0x0001000a8868(param_5,uVar7);
      FUN_102d24050(&dStack_a8,&UNK_1105c3c48,uVar7,&UNK_1105c3c48,uVar1,&PTR_DAT_1105c3340,lVar3);
      if (lStack_90 == 0) {
        uVar7 = *(undefined8 *)(param_5 + 0x18);
        uVar1 = *(undefined8 *)(param_5 + 0x20);
        func_0x0001000a8868(param_5,uVar7);
        FUN_102d24050(&dStack_a8,&UNK_1105c3cc8,uVar7,&UNK_1105c3cc8,uVar1,&PTR_DAT_1105c3348,
                      param_5);
        if (lStack_90 == 0) {
          func_0x000107c61574(lVar2);
          return;
        }
        FUN_102ca6594(dStack_a8,dStack_a0);
        lVar3 = lStack_90;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c4c194();
        func_0x000107c61180();
        func_0x000107c51724();
        func_0x000107c61170(puVar5);
        uVar7 = *(undefined8 *)(lVar2 + 0x40);
        lVar3 = *(long *)(lVar2 + 0x48);
        func_0x0001000a8868(lVar2 + 0x28,uVar7);
        (**(code **)(lVar3 + 8))
                  (dStack_a8,dStack_a0,dStack_a8 / param_3,dStack_a0 / param_4,2,1,uVar7,lVar3);
        lVar3 = lStack_90;
      }
      func_0x000107c61574(lVar2);
      func_0x000107c6142c(lVar3);
    }
    else {
      lVar4 = lStack_90;
      FUN_102ca6c68(lStack_90);
      lVar3 = 0;
      if ((uVar6 & 0xff) != 1) {
        lVar3 = lVar4;
      }
      if (*(long *)(lVar2 + 0x98) != 0) {
        func_0x000107c498f8();
      }
      puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      func_0x000107c61180();
      func_0x000107c51724();
      func_0x000107c61170(puVar5);
      FUN_102ca7308(lVar2 + 0x28,&dStack_a8);
      func_0x0001000a8868(&dStack_a8,lStack_90);
      uVar7 = 3;
      if ((uStack_98 & 1) == 0) {
        uVar7 = 1;
      }
      (**(code **)(lStack_88 + 8))
                (dStack_a8,dStack_a0,dStack_a8 / param_3,dStack_a0 / param_4,uVar7,lVar3,lStack_90,
                 lStack_88);
      func_0x000107c61574(lVar2);
      func_0x000107c6142c(lStack_80);
      func_0x0001000834e4(&dStack_a8);
    }
  }
  return;
}



/* Entry: 102ca7308; end: 102ca734b;  */

long FUN_102ca7308(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102ca734c; end: 102ca7353;  */

void FUN_102ca734c(long param_1,long param_2)

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



/* Entry: 102ca7354; end: 102ca74c7;  */

long FUN_102ca7354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1105bcc10;
  func_0x000107c613fc(&UNK_1105bcc10,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  uVar2 = 0x112f09a58;
  func_0x0001000285a8(0x112f09a58,&UNK_10db3c650);
  func_0x000107c613fc();
  pcVar3 = FUN_102ca7624;
  func_0x0001000bdd8c(FUN_102ca7624,puVar1,uVar2);
  lVar4 = 0;
  func_0x000102ca775c();
  func_0x000107c613fc();
  *(code **)(lVar4 + 0x10) = pcVar3;
  *(long *)(unaff_x20 + 0x10) = lVar4;
  return unaff_x20;
}



/* Entry: 102ca74c8; end: 102ca7623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca74c8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_113078b68;
  uVar8 = *(undefined8 *)(param_4 + _DAT_113078b60);
  func_0x000107c61428(param_4 + _DAT_113078b68,auStack_78,0,0);
  param_4 = param_4 + lVar1;
  func_0x000107c61618(param_4);
  lVar3 = 0;
  FUN_102ca7854();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar1 = _DAT_112f09bb8;
  func_0x000107c61614(lVar4 + _DAT_112f09bb8,0);
  lVar2 = _DAT_112f09bc0;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102ca8ab8();
  *(undefined **)(lVar4 + lVar2) = puVar5;
  lVar2 = _DAT_112f09bc8;
  func_0x000102ca8acc();
  *(undefined **)(lVar4 + lVar2) = puVar6;
  *(undefined8 *)(lVar4 + _DAT_112f09ba0) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112f09ba8) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112f09bb0) = uVar8;
  func_0x000107c61604(lVar4 + lVar1,param_4);
  puVar6 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(uVar8);
  plVar7 = &lStack_88;
  func_0x000107c61154(plVar7,puVar6);
  func_0x000107c615e8(param_4);
  *param_1 = (long)plVar7;
  param_1[1] = (long)&PTR_DAT_1105bcc70;
  return;
}



/* Entry: 102ca7624; end: 102ca762f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca7624(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = _DAT_113078b68;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar11 = *(undefined8 *)(lVar10 + _DAT_113078b60);
  func_0x000107c61428(lVar10 + _DAT_113078b68,auStack_78,0,0);
  lVar10 = lVar10 + lVar3;
  func_0x000107c61618(lVar10);
  lVar5 = 0;
  FUN_102ca7854();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar3 = _DAT_112f09bb8;
  func_0x000107c61614(lVar6 + _DAT_112f09bb8,0);
  lVar4 = _DAT_112f09bc0;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102ca8ab8();
  *(undefined **)(lVar6 + lVar4) = puVar7;
  lVar4 = _DAT_112f09bc8;
  func_0x000102ca8acc();
  *(undefined **)(lVar6 + lVar4) = puVar8;
  *(undefined8 *)(lVar6 + _DAT_112f09ba0) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_112f09ba8) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112f09bb0) = uVar11;
  func_0x000107c61604(lVar6 + lVar3,lVar10);
  puVar8 = PTR_s_init_1125d9248;
  lStack_88 = lVar6;
  lStack_80 = lVar5;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c615f0(uVar11);
  plVar9 = &lStack_88;
  func_0x000107c61154(plVar9,puVar8);
  func_0x000107c615e8(lVar10);
  *param_1 = (long)plVar9;
  param_1[1] = (long)&PTR_DAT_1105bcc70;
  return;
}



/* Entry: 102ca7630; end: 102ca7663;  */

void FUN_102ca7630(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102ca7664; end: 102ca76a3;  */

void FUN_102ca7664(void)

{
  undefined8 auStack_30 [2];
  
  func_0x0001000d224c(auStack_30);
  FUN_102ca7874();
  func_0x000107c615e8(auStack_30[0]);
  return;
}



/* Entry: 102ca76a4; end: 102ca76c7;  */

void FUN_102ca76a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ca76c8; end: 102ca770b;  */

void FUN_102ca76c8(void)

{
  undefined8 auStack_30 [2];
  
  func_0x0001000d224c(auStack_30);
  FUN_102ca7874();
  func_0x000107c615e8(auStack_30[0]);
  return;
}



/* Entry: 102ca770c; end: 102ca7713;  */

undefined8 FUN_102ca770c(void)

{
  return 0;
}



/* Entry: 102ca7714; end: 102ca7733;  */

void FUN_102ca7714(void)

{
  func_0x000107c61168(&PTR_PTR_112f09aa0);
  return;
}



/* Entry: 102ca7734; end: 102ca7737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca7734(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = _DAT_113078b68;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar11 = *(undefined8 *)(lVar10 + _DAT_113078b60);
  func_0x000107c61428(lVar10 + _DAT_113078b68,auStack_78,0,0);
  lVar10 = lVar10 + lVar3;
  func_0x000107c61618(lVar10);
  lVar5 = 0;
  FUN_102ca7854();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar3 = _DAT_112f09bb8;
  func_0x000107c61614(lVar6 + _DAT_112f09bb8,0);
  lVar4 = _DAT_112f09bc0;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102ca8ab8();
  *(undefined **)(lVar6 + lVar4) = puVar7;
  lVar4 = _DAT_112f09bc8;
  func_0x000102ca8acc();
  *(undefined **)(lVar6 + lVar4) = puVar8;
  *(undefined8 *)(lVar6 + _DAT_112f09ba0) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_112f09ba8) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112f09bb0) = uVar11;
  func_0x000107c61604(lVar6 + lVar3,lVar10);
  puVar8 = PTR_s_init_1125d9248;
  lStack_88 = lVar6;
  lStack_80 = lVar5;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c615f0(uVar11);
  plVar9 = &lStack_88;
  func_0x000107c61154(plVar9,puVar8);
  func_0x000107c615e8(lVar10);
  *param_1 = (long)plVar9;
  param_1[1] = (long)&PTR_DAT_1105bcc70;
  return;
}



/* Entry: 102ca7738; end: 102ca777b;  */

void FUN_102ca7738(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ca777c; end: 102ca77db; -[_TtC22ActiveOperaSessionImpl22OperaPageViewPresenter init] */

void FUN_102ca777c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ActiveOperaSessionImpl.OperaPageViewPresenter",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ca77a8);
  (*pcVar1)();
}



/* Entry: 102ca77dc; end: 102ca7853; -[_TtC22ActiveOperaSessionImpl22OperaPageViewPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ca7838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ca783c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca77dc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f09ba0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f09ba8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f09bb0));
  FUN_102ca8bd8(param_1 + _DAT_112f09bb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f09bc0));
  return;
}



/* Entry: 102ca7854; end: 102ca7873;  */

void FUN_102ca7854(void)

{
  func_0x000107c61168(&PTR_PTR_11289c6b8);
  return;
}



/* Entry: 102ca7874; end: 102ca7957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca7874(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f09bb0);
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  func_0x000103bb9ce4();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb9d5c();
  uVar1 = puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
  func_0x000107c3d744(uVar6);
  func_0x000107c61170(puVar4);
  lVar5 = unaff_x20 + _DAT_112f09bb8;
  func_0x000107c61618();
  if (lVar5 != 0) {
    func_0x000107c41cac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
    return;
  }
  return;
}



/* Entry: 102ca7958; end: 102ca7bc7;  */

/* WARNING: Possible PIC construction at 0x000102ca7b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca7b9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca7bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ca7ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ca7ba0) */
/* WARNING: Removing unreachable block (ram,0x000102ca7b34) */
/* WARNING: Removing unreachable block (ram,0x000102ca7ab4) */

void FUN_102ca7958(long *param_1,long param_2,undefined8 *param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_3 == (undefined8 *)0x0) {
    return;
  }
  func_0x000107c61174();
  puVar2 = param_3;
  func_0x000103bb9ce4();
  plVar3 = (long *)*puVar2;
  if ((plVar3 != param_1 || puVar2[1] != param_2) &&
     (func_0x000107c605b8(plVar3,puVar2[1],param_1,param_2,0), ((ulong)plVar3 & 1) == 0)) {
    func_0x000103bb9d5c();
    plVar5 = (long *)*plVar3;
    if (((plVar5 == param_1) && (plVar3[1] == param_2)) ||
       (func_0x000107c605b8(plVar5,plVar3[1],param_1,param_2,0), ((ulong)plVar5 & 1) != 0)) {
      func_0x000107c3b9ac(param_3);
      func_0x000107c61180();
      func_0x000107c5faec();
    }
    goto code_r0x000107c61170;
  }
  if ((param_4 == 0) || (func_0x000103bba310(), *(long *)(param_4 + 0x10) == 0)) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
LAB_102ca7b00:
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    lVar4 = *plVar3;
    uVar1 = plVar3[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_4);
    uVar6 = uVar1;
    func_0x000100029284(lVar4);
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(param_4);
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
      func_0x000107c6142c(uVar1);
      goto LAB_102ca7b00;
    }
    func_0x0001000bb420(*(long *)(param_4 + 0x38) + lVar4 * 0x20,&uStack_60);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(param_4);
    if (lStack_48 == 0) goto LAB_102ca7b00;
    func_0x000107c6147c(&uStack_61,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
  }
  func_0x000107c3b9ac(param_3);
  func_0x000107c61180();
  func_0x000107c5faec();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102ca7bc8; end: 102ca7cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca7bc8(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar4 = _DAT_112f09bc0;
  func_0x000107c61428(unaff_x20 + _DAT_112f09bc0,auStack_48,0x20,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (*(long *)(lVar4 + 0x10) != 0) {
    func_0x000107c61434(lVar4);
    func_0x000100029284();
    if ((param_2 & 1) != 0) {
      uVar1 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + param_1 * 8);
      func_0x000107c61174(uVar1);
      func_0x000107c614a8(auStack_48);
      func_0x000107c6142c(lVar4);
      uVar3 = *(ulong *)(unaff_x20 + _DAT_112f09ba0);
      uVar2 = uVar3;
      func_0x000107c49d24();
      if ((uVar2 & 1) != 0) {
        func_0x000107c4ffec(uVar3);
        func_0x000107c61180();
        func_0x000107c61170(uVar1);
        func_0x000107c615e8(uVar3);
        return;
      }
      func_0x000107c61170(uVar1);
      return;
    }
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 102ca7cc4; end: 102ca7d7f; -[_TtC22ActiveOperaSessionImpl22OperaPageViewPresenter operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102ca7d64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ca7d68) */

void FUN_102ca7cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102ca7958(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102ca7d80; end: 102ca7f23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca7d80(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  puVar5 = PTR_PTR_1126db980;
  func_0x000107c610f8(PTR_PTR_1126db980);
  func_0x000107c453e4();
  func_0x000107c59c08();
  lVar4 = _DAT_112f09bc0;
  puVar1 = (undefined8 *)(*(long *)(param_1 + _DAT_113078ad8) + _DAT_113078aa0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  func_0x000107c61428(unaff_x20 + _DAT_112f09bc0,auStack_78,0x21,0);
  func_0x000107c61434(uVar3);
  func_0x000107c61174(param_1);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c61558(uVar6);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined8 *)(unaff_x20 + lVar4) = 0x8000000000000000;
  FUN_102ca83a0(param_1,uVar2,uVar3,uVar6,0x112f09c00,&UNK_10db3c730);
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(unaff_x20 + lVar4) = uVar7;
  func_0x000107c614a8(auStack_78);
  lVar4 = _DAT_112f09bc8;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  func_0x000107c61428(unaff_x20 + _DAT_112f09bc8,auStack_78,0x21,0);
  func_0x000107c61434(uVar3);
  func_0x000107c61174(puVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c61558(uVar6);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined8 *)(unaff_x20 + lVar4) = 0x8000000000000000;
  FUN_102ca83a0(puVar5,uVar2,uVar3,uVar6,0x112f09bf8,&UNK_10db3c728);
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(unaff_x20 + lVar4) = uVar7;
  func_0x000107c614a8(auStack_78);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 102ca7f24; end: 102ca7f8b; -[_TtC22ActiveOperaSessionImpl22OperaPageViewPresenter operaPageViewDidBegin:interface:] */

/* WARNING: Possible PIC construction at 0x000102ca7f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ca7f70) */

void FUN_102ca7f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_102ca7d80(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102ca7f8c; end: 102ca80ef; -[_TtC22ActiveOperaSessionImpl22OperaPageViewPresenter operaPageViewDidComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca7f8c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  
  lVar3 = _DAT_113078ad8;
  puVar1 = (undefined8 *)(*(long *)(param_3 + _DAT_113078ad8) + _DAT_113078aa0);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61428(param_1 + _DAT_112f09bc0,auStack_78,0x21,0);
  lVar4 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61434(uVar2);
  FUN_102ca82cc(uVar5,uVar2,0x112f09c00,&UNK_10db3c730);
  func_0x000107c614a8(auStack_78);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(uVar5);
  puVar1 = (undefined8 *)(*(long *)(param_3 + lVar3) + _DAT_113078aa0);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61428(param_1 + _DAT_112f09bc8,auStack_78,0x21,0);
  func_0x000107c61434(uVar2);
  FUN_102ca82cc(uVar5,uVar2,0x112f09bf8,&UNK_10db3c728);
  func_0x000107c614a8(auStack_78);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 102ca80f0; end: 102ca821b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca80f0(long param_1,ulong param_2)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112f09bc8;
  func_0x000107c61428(unaff_x20 + _DAT_112f09bc8,auStack_58,0x20,0);
  lVar2 = *(long *)(unaff_x20 + lVar2);
  if (*(long *)(lVar2 + 0x10) != 0) {
    func_0x000107c61434(lVar2);
    func_0x000100029284();
    if ((param_2 & 1) != 0) {
      lVar1 = *(long *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(lVar2);
      lVar2 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar2 != 0) {
        lVar1 = lVar2;
        func_0x000107c4e2ac(lVar2);
        func_0x000107c61180();
        func_0x000107c5f9e8();
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar1);
        return;
      }
      goto LAB_102ca81f8;
    }
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c614a8(auStack_58);
LAB_102ca81f8:
  func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 102ca821c; end: 102ca82cb; -[_TtC22ActiveOperaSessionImpl22OperaPageViewPresenter pagePropertiesForPageId:dataModel:] */

void FUN_102ca821c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102ca80f0(param_3,param_2,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  uVar1 = param_3;
  func_0x000107c5f9dc(param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ca82cc; end: 102ca839f;  */

undefined8 FUN_102ca82cc(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_102ca8514(param_3,param_4);
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    func_0x000102ca8908(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar2;
}



/* Entry: 102ca83a0; end: 102ca8513;  */

void FUN_102ca83a0(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102ca8490);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_102ca8674(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ca8454);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_102ca8514(param_5,param_6);
    lVar6 = *unaff_x20;
    goto joined_r0x000102ca84ac;
  }
  lVar6 = *unaff_x20;
joined_r0x000102ca84ac:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102ca8514);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102ca8514; end: 102ca8673;  */

void FUN_102ca8514(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_102ca85e0;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_102ca85e0:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102ca8674);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102ca864c;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_102ca864c:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102ca8674; end: 102ca8ab7;  */

void FUN_102ca8674(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102ca88d4:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102ca8904);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_102ca88d4;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102ca8908);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 102ca8ab8; end: 102ca8adf;  */

undefined * FUN_102ca8ab8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f09c00,&UNK_10db3c730);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ca8bd4);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ca8bd8);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102ca8ae0; end: 102ca8bd7;  */

undefined * FUN_102ca8ae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ca8bd4);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ca8bd8);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102ca8bd8; end: 102ca8bfb;  */

undefined8 FUN_102ca8bd8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102ca8bfc; end: 102ca8c67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca8bfc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102ca8ff0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f09c10) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102ca8c68; end: 102ca8cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca8c68(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f09c10) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ca8cd4; end: 102ca8d33; -[_TtC41OperaPageViewScopedFactoryServiceProvider27OperaPageViewScopedServices init] */

void FUN_102ca8cd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OperaPageViewScopedFactoryServiceProvider.OperaPageViewScopedServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ca8d00);
  (*pcVar1)();
}



/* Entry: 102ca8d34; end: 102ca8d43; -[_TtC41OperaPageViewScopedFactoryServiceProvider27OperaPageViewScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca8d34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f09c10));
  return;
}



/* Entry: 102ca8d44; end: 102ca8daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ca8d44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105bce48;
  func_0x000107c613fc(&UNK_1105bce48,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102ca9088,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102ca8db0; end: 102ca8e4b;  */

void FUN_102ca8db0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105bcd58;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105bcd58;
  return;
}



/* Entry: 102ca8e4c; end: 102ca8e83;  */

void FUN_102ca8e4c(long *param_1)

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



/* Entry: 102ca8e84; end: 102ca8e8b;  */

undefined8 FUN_102ca8e84(void)

{
  return 0x1b;
}



/* Entry: 102ca8e8c; end: 102ca8fbf;  */

void FUN_102ca8e8c(undefined8 *param_1)

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
  puVar1 = &UNK_1105bce70;
  func_0x000107c613fc(&UNK_1105bce70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102ca9060;
  func_0x00010058fa64(FUN_102ca9060,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102ca8fc0; end: 102ca8fef;  */

undefined ** FUN_102ca8fc0(void)

{
  return &PTR_DAT_1130666d0;
}



/* Entry: 102ca8ff0; end: 102ca900f;  */

void FUN_102ca8ff0(void)

{
  func_0x000107c61168(&PTR_PTR_11289c7a0);
  return;
}



/* Entry: 102ca9010; end: 102ca905f;  */

undefined1  [16] FUN_102ca9010(void)

{
  return ZEXT816(0x1105bcda8);
}



/* Entry: 102ca9060; end: 102ca9087;  */

void FUN_102ca9060(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102ca9088; end: 102ca908b;  */

void FUN_102ca9088(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102ca908c; end: 102ca90d7;  */

void FUN_102ca908c(undefined8 param_1)

{
  func_0x0001000285a8(0x112f09c78,&UNK_10db3c940);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102ca9154,param_1);
  return;
}



/* Entry: 102ca90d8; end: 102ca9153;  */

void FUN_102ca90d8(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112f09c80,&UNK_10db3c980);
  func_0x000107c613fc();
  pcVar1 = FUN_102ca94c4;
  func_0x0001000841fc(FUN_102ca94c4,param_2);
  func_0x000100084214(&UNK_10db3c950,0x29,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102ca9154; end: 102ca916b;  */

void FUN_102ca9154(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112f09c80,&UNK_10db3c980);
  func_0x000107c613fc();
  pcVar1 = FUN_102ca94c4;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10db3c950,0x29,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102ca916c; end: 102ca94c3;  */

void FUN_102ca916c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f09c88,&UNK_10db3c988);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f09c90,&UNK_10db3c990);
  puVar2 = &UNK_1105bced0;
  func_0x000107c613fc(&UNK_1105bced0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar10 = 0x102ca94cc;
  func_0x0001000823a8(0x102ca94cc,puVar2);
  func_0x000100082720("OperaPageViewEntryPointWrapperServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112f09c98,&UNK_10db3c998);
  func_0x000107c6157c(uVar10);
  uVar3 = 0x102ca94d4;
  func_0x0001000823a8(0x102ca94d4,uVar10);
  func_0x000100082720("OperaPageViewServicesServiceProvider",0x24,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102ca8e4c;
  func_0x0001000823a8(FUN_102ca8e4c,0);
  func_0x000100082720("OperaPageViewScopedServicesCleanupRelayServiceProvider",0x36,2);
  uVar5 = uVar3;
  FUN_102caa344();
  func_0x000100082720("OperaPageViewScopeGraphBridgeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112f09ca0,&UNK_10db3c9a8);
  puVar2 = &UNK_1105bcef8;
  func_0x000107c613fc(&UNK_1105bcef8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar10;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(pcVar4);
  uVar6 = 0x102ca94dc;
  func_0x0001000823a8(0x102ca94dc,puVar2);
  func_0x000100082720("OperaPageViewScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f09c18,&UNK_10db3c750);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x102ca94e8;
  func_0x0001000823a8(0x102ca94e8,uVar6);
  func_0x000100082720("OperaPageViewScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112f09c08,&UNK_10db3c740);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102ca94f0;
  func_0x0001000823a8(0x102ca94f0,uVar7);
  func_0x000100082720("OperaPageViewScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1105bcf20;
  func_0x000107c613fc(&UNK_1105bcf20,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar9 = FUN_102ca9524;
  func_0x0001000823a8(FUN_102ca9524,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("OperaPageViewScopeEntryPointProvider",0x24,2);
  *param_1 = pcVar9;
  return;
}



/* Entry: 102ca94c4; end: 102ca94f7;  */

void FUN_102ca94c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f09c88,&UNK_10db3c988);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f09c90,&UNK_10db3c990);
  puVar2 = &UNK_1105bced0;
  func_0x000107c613fc(&UNK_1105bced0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  uVar10 = 0x102ca94cc;
  func_0x0001000823a8(0x102ca94cc,puVar2);
  func_0x000100082720("OperaPageViewEntryPointWrapperServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112f09c98,&UNK_10db3c998);
  func_0x000107c6157c(uVar10);
  uVar3 = 0x102ca94d4;
  func_0x0001000823a8(0x102ca94d4,uVar10);
  func_0x000100082720("OperaPageViewServicesServiceProvider",0x24,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102ca8e4c;
  func_0x0001000823a8(FUN_102ca8e4c,0);
  func_0x000100082720("OperaPageViewScopedServicesCleanupRelayServiceProvider",0x36,2);
  uVar5 = uVar3;
  FUN_102caa344();
  func_0x000100082720("OperaPageViewScopeGraphBridgeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112f09ca0,&UNK_10db3c9a8);
  puVar2 = &UNK_1105bcef8;
  func_0x000107c613fc(&UNK_1105bcef8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar10;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(pcVar4);
  uVar6 = 0x102ca94dc;
  func_0x0001000823a8(0x102ca94dc,puVar2);
  func_0x000100082720("OperaPageViewScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f09c18,&UNK_10db3c750);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x102ca94e8;
  func_0x0001000823a8(0x102ca94e8,uVar6);
  func_0x000100082720("OperaPageViewScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112f09c08,&UNK_10db3c740);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102ca94f0;
  func_0x0001000823a8(0x102ca94f0,uVar7);
  func_0x000100082720("OperaPageViewScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1105bcf20;
  func_0x000107c613fc(&UNK_1105bcf20,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar9 = FUN_102ca9524;
  func_0x0001000823a8(FUN_102ca9524,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("OperaPageViewScopeEntryPointProvider",0x24,2);
  *param_1 = pcVar9;
  return;
}



/* Entry: 102ca94f8; end: 102ca9523;  */

void FUN_102ca94f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102ca9524; end: 102ca952b;  */

void FUN_102ca9524(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105bcd58;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105bcd58;
  return;
}



/* Entry: 102ca952c; end: 102ca9613;  */

void FUN_102ca952c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_102ca9888();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_102ca978c(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ca9614; end: 102ca964f;  */

void FUN_102ca9614(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ca9650; end: 102ca96a3;  */

void FUN_102ca9650(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ca96a4; end: 102ca96ab;  */

undefined8 FUN_102ca96a4(void)

{
  return 0x1b;
}



/* Entry: 102ca96ac; end: 102ca972f;  */

void FUN_102ca96ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102ca98d8,param_2,FUN_102ca98dc,param_2,FUN_102ca9904,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102ca9730; end: 102ca9777;  */

undefined8 FUN_102ca9730(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102cabddc();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 102ca9778; end: 102ca978b;  */

void FUN_102ca9778(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1105bcf38;
  return;
}



/* Entry: 102ca978c; end: 102ca986b;  */

void FUN_102ca978c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_102cabee8(0);
  func_0x000107c613fc();
  uVar3 = param_1;
  FUN_102cabb84(param_1,param_2,puVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar3);
  FUN_102cabb94();
  func_0x000107c61574(uVar3);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar4 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ca986c);
  (*pcVar1)();
}



/* Entry: 102ca986c; end: 102ca9887;  */

undefined ** FUN_102ca986c(void)

{
  return &PTR_DAT_1130666d0;
}



/* Entry: 102ca9888; end: 102ca98a7;  */

void FUN_102ca9888(void)

{
  func_0x000107c61168(&PTR_PTR_112f09d10);
  return;
}



/* Entry: 102ca98a8; end: 102ca98db;  */

undefined1  [16] FUN_102ca98a8(void)

{
  return ZEXT816(0x1105bcf78);
}



/* Entry: 102ca98dc; end: 102ca9903;  */

void FUN_102ca98dc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}


