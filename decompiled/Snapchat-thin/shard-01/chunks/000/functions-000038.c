/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c81fc4; end: 100c81fcf; -[SCContextAwareAppStartupThrottleRequest .cxx_destruct] */

void FUN_100c81fc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100c81fd0; end: 100c82063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c81fd0(undefined8 param_1)

{
  byte bStack_31;
  
  func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
  func_0x000100087bd4(&bStack_31,FUN_100c82084);
  if ((bStack_31 != 2) && (func_0x000100087f6c(param_1), (bStack_31 & 1) != 0)) {
    func_0x000100c7f554();
  }
  return;
}



/* Entry: 100c82064; end: 100c82083;  */

void FUN_100c82064(void)

{
  FUN_100c81fd0();
  return;
}



/* Entry: 100c82084; end: 100c820d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c82084(undefined1 *param_1)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_113095990) + 1;
  if (!SCARRY8(*(long *)(unaff_x20 + _DAT_113095990),1)) {
    *(long *)(unaff_x20 + _DAT_113095990) = lVar1;
    uVar2 = 2;
    if (lVar1 <= *(long *)(unaff_x20 + _DAT_113095998)) {
      uVar2 = lVar1 == *(long *)(unaff_x20 + _DAT_113095998);
    }
    *param_1 = uVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100c820c8);
  (*pcVar3)();
}



/* Entry: 100c820d4; end: 100c82103;  */

void FUN_100c820d4(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined1 *)(param_1 + 1),param_1[2]);
  return;
}



/* Entry: 100c82104; end: 100c8222f;  */

void FUN_100c82104(undefined8 param_1,ulong param_2,long param_3,long param_4,int param_5,
                  long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if (param_3 != 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_88,0,0);
    if (*(char *)(param_4 + 0x18) == '\x01') {
      func_0x000107c61428(param_4 + 0x10,auStack_a0,1,0);
      *(undefined8 *)(param_4 + 0x10) = 3;
      *(undefined1 *)(param_4 + 0x18) = 0;
      func_0x000107c4f6dc();
      if (param_3 == 0x19) {
        func_0x000107c61428(param_4 + 0x10,auStack_b8,1,0);
        *(undefined8 *)(param_4 + 0x10) = 1;
        *(undefined1 *)(param_4 + 0x18) = 0;
      }
    }
  }
  if (((param_2 & 1) != 0) && (func_0x000107c49a44(), param_5 != 0)) {
    func_0x000107c61428(param_6 + 0x10,auStack_58,0,0);
    param_6 = param_6 + 0x10;
    func_0x000107c61618();
    if (param_6 != 0) {
      func_0x000107c61428(param_4 + 0x10,auStack_70,0,0);
      uVar1 = 2;
      if (*(char *)(param_4 + 0x18) != '\x01') {
        uVar1 = *(undefined8 *)(param_4 + 0x10);
      }
      FUN_100c8227c(uVar1,param_7);
      func_0x000107c61170(param_6);
    }
  }
  return;
}



/* Entry: 100c82230; end: 100c8227b;  */

void FUN_100c82230(void)

{
  func_0x000100087bd4(0x100c8247c);
  return;
}



/* Entry: 100c8227c; end: 100c82397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c8227c(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_60 [16];
  
  FUN_100c82230();
  func_0x000100087bd4(FUN_100c82b28,auStack_60,PTR___sytN_11034f1b0 + 8);
  plVar1 = *(long **)(unaff_x20 + _DAT_112ee3210);
  func_0x000100471e0c(plVar1,0);
  puVar2 = &UNK_110589780;
  func_0x000107c613fc(&UNK_110589780,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar3 = FUN_100c86bc4;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_100c86bc4);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112ee31d8),pcVar4,puVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 100c82398; end: 100c82463;  */

void FUN_100c82398(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x18,auStack_68,1,0);
  lVar4 = *(long *)(param_1 + 0x18);
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 != 0) {
    func_0x000107c61434(lVar4);
    plVar6 = (long *)(lVar4 + 0x28);
    do {
      lVar1 = plVar6[-1];
      lVar2 = *plVar6;
      lVar3 = lVar1;
      func_0x000107c614f0(lVar1);
      pcVar7 = *(code **)(lVar2 + 8);
      func_0x000107c615f0(lVar1);
      (*pcVar7)(lVar3,lVar2);
      func_0x000107c615e8(lVar1);
      plVar6 = plVar6 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    func_0x000107c6142c(lVar4);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  *(undefined **)(param_1 + 0x18) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(lVar4);
  return;
}



/* Entry: 100c82464; end: 100c8248f;  */

void FUN_100c82464(void)

{
  FUN_100c82398();
  return;
}



/* Entry: 100c82490; end: 100c824c3;  */

void FUN_100c82490(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  puVar1 = &DAT_10dd3ad58;
  func_0x000107c61520(&DAT_10dd3ad58,uVar2);
  (**(code **)(puVar1 + 0x58))();
  func_0x000100087bd4(FUN_100c82520,uVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 100c824c4; end: 100c8251f;  */

void FUN_100c824c4(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x58))();
  func_0x000100087bd4(FUN_100c82520,param_1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 100c82520; end: 100c82537;  */

void FUN_100c82520(void)

{
  func_0x0001007b79fc();
  return;
}



/* Entry: 100c82538; end: 100c82543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c82538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_2;
  uStack_48 = param_3;
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + _DAT_113096858),FUN_100c8264c,auStack_60,
                      PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 100c82544; end: 100c82563;  */

void FUN_100c82544(void)

{
  FUN_100c82538();
  return;
}



/* Entry: 100c82564; end: 100c8264b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c82564(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x21;
  undefined8 uVar5;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(*param_1 + 0x50);
  uStack_60 = uVar5;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_2;
  func_0x000107c61428((long)param_1 + _DAT_113096860,auStack_88,0x21,0);
  uVar2 = 0xff;
  func_0x0001000876dc(0xff,uVar5);
  uVar5 = 0;
  func_0x000107c5fc80(0,uVar2);
  puVar3 = PTR___sSayxGSMsMc_11034dcf8;
  func_0x000107c61520(PTR___sSayxGSMsMc_11034dcf8,uVar5);
  puVar4 = PTR___sSayxGSmsMc_11034dd28;
  func_0x000107c61520(PTR___sSayxGSmsMc_11034dd28,uVar5);
  func_0x000107c5ff0c(FUN_100c8273c,auStack_70,uVar5,puVar3,puVar4);
  if (unaff_x21 == 0) {
    func_0x000107c614a8(auStack_88);
    return;
  }
  func_0x000107c614a8(auStack_88);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c8264c);
  (*pcVar1)();
}



/* Entry: 100c8264c; end: 100c82667;  */

void FUN_100c8264c(void)

{
  long unaff_x20;
  
  FUN_100c82564(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100c82668; end: 100c8273b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100c82668(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar1 = _DAT_1138154e8;
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *param_1;
  (**(code **)(param_5 + 0x10))(puVar4,param_4,param_5);
  lVar3 = lVar3 + lVar1;
  func_0x000107c5eeb4(lVar3,puVar4);
  (**(code **)(lVar5 + 8))(puVar4,lVar2);
  return (uint)lVar3 & 1;
}



/* Entry: 100c8273c; end: 100c8277f;  */

uint FUN_100c8273c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100c82668(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return (uint)param_1 & 1;
}



/* Entry: 100c82780; end: 100c827e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c82780(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_113815488;
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_1130950b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_1130950b8 + 8));
  return;
}



/* Entry: 100c827e4; end: 100c827e7;  */

void FUN_100c827e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c827e8; end: 100c82837;  */

void FUN_100c827e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c82838; end: 100c8283b;  */

void FUN_100c82838(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c8283c; end: 100c8289f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c8283c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_113815438;
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_113094310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_113094318 + 8));
  return;
}



/* Entry: 100c828a0; end: 100c828c3;  */

void FUN_100c828a0(void)

{
  FUN_100c8283c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100c828c4; end: 100c82923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c828c4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_1138154b8;
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_1130959a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_1130959a8));
  return;
}



/* Entry: 100c82924; end: 100c82947;  */

void FUN_100c82924(void)

{
  FUN_100c828c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100c82948; end: 100c82997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c82948(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_1138154a8;
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_1130956b0));
  return;
}



/* Entry: 100c82998; end: 100c829bb;  */

void FUN_100c82998(void)

{
  FUN_100c82948();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100c829bc; end: 100c82a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c829bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee31f0);
  if (*(char *)(puVar1 + 1) != '\x01') {
    uVar3 = *puVar1;
    func_0x0001000298f0();
    func_0x000107c61428();
    param_1 = (undefined8 *)*param_1;
    func_0x000107c61174();
    func_0x0001048d8204(uVar3);
    func_0x000107c61170();
  }
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *param_1;
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000022;
  func_0x000100029b28(0xd000000000000022,0x800000010f0e4170);
  func_0x000107c61170(uVar3);
  *puVar1 = uVar2;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



/* Entry: 100c82a88; end: 100c82b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c82a88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_100c829bc();
  *(undefined1 *)(param_1 + _DAT_112ee31e8) = 0;
  lVar1 = *(long *)(param_1 + _DAT_112ee3208);
  func_0x000107c61428(lVar1 + 0x28,auStack_58,1,0);
  *(undefined8 *)(lVar1 + 0x28) = 1;
  func_0x000107c61428(lVar1 + 0x30,auStack_70,1,0);
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  FUN_100c82b40();
  return;
}



/* Entry: 100c82b28; end: 100c82b3f;  */

void FUN_100c82b28(void)

{
  long unaff_x20;
  
  FUN_100c82a88(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100c82b40; end: 100c82f0f;  */

void FUN_100c82b40(void)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  lVar8 = *unaff_x20;
  lVar4 = *(long *)(lVar8 + 0x60);
  uVar5 = *(undefined8 *)(lVar8 + 0x50);
  lVar1 = 0;
  func_0x000107c614b8(0,*(undefined8 *)(lVar4 + 8),uVar5,&UNK_10e70d970,&UNK_10e70d978);
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar2 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  (**(code **)(*(long *)(lVar8 + 0x68) + 0x10))(lVar3,*(undefined8 *)(lVar8 + 0x58));
  func_0x000100c85648(0,uVar5,lVar4,*(undefined8 *)(lVar8 + 0x70));
  (**(code **)(lVar7 + 0x10))(puVar2,lVar3,lVar1);
  lVar4 = *unaff_x20;
  uVar5 = *(undefined8 *)((long)unaff_x20 + *(long *)(lVar4 + 0x88));
  uVar6 = *(undefined8 *)((long)unaff_x20 + *(long *)(lVar4 + 0x90));
  lVar4 = *(long *)(lVar4 + 0x78);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  FUN_100c857b0(puVar2,uVar5,uVar6,(long)unaff_x20 + lVar4);
  func_0x000100087bd4(FUN_100c85e2c,auStack_90,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  (**(code **)(lVar7 + 8))(lVar3,lVar1);
  return;
}



/* Entry: 100c82f10; end: 100c82f7f;  */

void FUN_100c82f10(undefined8 *param_1)

{
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000100c82ccc(&uStack_b8);
  param_1[0xd] = uStack_50;
  param_1[0xc] = uStack_58;
  param_1[0xf] = uStack_40;
  param_1[0xe] = uStack_48;
  param_1[0x11] = uStack_30;
  param_1[0x10] = uStack_38;
  param_1[0x12] = uStack_28;
  param_1[5] = uStack_90;
  param_1[4] = uStack_98;
  param_1[7] = uStack_80;
  param_1[6] = uStack_88;
  param_1[9] = uStack_70;
  param_1[8] = uStack_78;
  param_1[0xb] = uStack_60;
  param_1[10] = uStack_68;
  param_1[1] = uStack_b0;
  *param_1 = uStack_b8;
  param_1[3] = uStack_a0;
  param_1[2] = uStack_a8;
  return;
}



/* Entry: 100c82f80; end: 100c82f9f;  */

undefined * FUN_100c82f80(ulong param_1)

{
  if (param_1 < 0x12) {
    return (&PTR_PTR_110d85d88)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 100c82fa0; end: 100c82fd3;  */

void FUN_100c82fa0(long param_1)

{
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  func_0x000107c3b9f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c82fd4; end: 100c83137; -[SCProfileHeaderButtonEntryPoint _initThumbnailProviderAndFetchIconWithProfileIdOnPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c82fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126c2fa0;
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_112731df8;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c4d39c();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_112731e04;
  func_0x000107c61148(lVar4);
  lVar5 = lVar4;
  func_0x000107c4f3e4();
  func_0x000107c61180();
  lVar6 = param_1 + _DAT_112731e08;
  func_0x000107c61148(lVar6);
  lVar7 = lVar6;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c4789c();
  func_0x000107c61170(param_3);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112731e0c);
  *(undefined **)(param_1 + _DAT_112731e0c) = puVar1;
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be11990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchIcon_112562000);
  return;
}



/* Entry: 100c83138; end: 100c8328b; -[SCProfileHeaderLiveStoryThumbnailProvider initWithMyStoryDataCoordinator:profilesProvider:performer:userId:profileId:circumstanceEngine:] */

undefined1 *
FUN_100c83138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126ec458;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c8328c; end: 100c83367; -[SCProfileHeaderLiveStoryThumbnailProvider fetchLatestStoryThumbnailWithCompletion:] */

void FUN_100c8328c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c61144(auStack_38,param_1);
    func_0x000107c6111c(auStack_40,auStack_38);
    func_0x000107c61174(param_3);
    func_0x000107c3b6f4(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c83368; end: 100c8347f; -[SCProfileHeaderLiveStoryThumbnailProvider _fetchStoryFromMyStoriesDataCoordinatorWithCompletion:] */

void FUN_100c83368(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4f7c0(uVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c4f738(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c83480; end: 100c83507;  */

/* WARNING: Possible PIC construction at 0x000100c834d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c834d4) */

void FUN_100c83480(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    if (param_2 != 0) {
      param_2 = param_1 + 0x28;
      func_0x000107c61148(param_2);
      func_0x000107c3b8fc();
      goto code_r0x000107c61170;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  }
  func_0x000107c61170(lVar1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c83508; end: 100c836a7; -[SCProfileHeaderLiveStoryThumbnailProvider _handleFetchedMyStories:completion:] */

/* WARNING: Possible PIC construction at 0x000100c8359c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c83624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c83648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c8367c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c8368c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c8364c) */
/* WARNING: Removing unreachable block (ram,0x000100c83628) */
/* WARNING: Removing unreachable block (ram,0x000100c835a0) */
/* WARNING: Removing unreachable block (ram,0x000100c83634) */
/* WARNING: Removing unreachable block (ram,0x000100c83650) */
/* WARNING: Removing unreachable block (ram,0x000100c8363c) */
/* WARNING: Removing unreachable block (ram,0x000100c83680) */
/* WARNING: Removing unreachable block (ram,0x000100c835ac) */
/* WARNING: Removing unreachable block (ram,0x000100c83640) */
/* WARNING: Removing unreachable block (ram,0x000100c83644) */
/* WARNING: Removing unreachable block (ram,0x000100c835d0) */
/* WARNING: Removing unreachable block (ram,0x000100c83690) */

void FUN_100c83508(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126c2fa8;
  func_0x000107c61174(param_3);
  func_0x000107c5000c(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x0001005929c0(uVar3);
  func_0x000100819854(param_3,uVar2,uVar4,uVar3,puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c836a8; end: 100c839a7;  */

void FUN_100c836a8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c60f34();
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_100c83bec;
    puStack_88 = &UNK_105be6b18;
    uStack_80 = 0;
    puStack_d0 = &uStack_d8;
    uStack_d8 = 0;
    uStack_c8 = 0x3032000000;
    pcStack_c0 = FUN_100c83bec;
    puStack_b8 = &UNK_105be6b18;
    uStack_b0 = 0;
    func_0x000107c60f38();
    func_0x000107c61174(lVar2);
    func_0x000107c3b6dc(lVar1);
    func_0x000107c60f38(lVar2);
    func_0x000107c61174(lVar2);
    func_0x000107c3b6e0(lVar1);
    func_0x000107c60f40(lVar2,0xffffffffffffffff);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    if (param_2 != 0) {
      func_0x000107c3d798(puVar3);
    }
    if (puStack_a0[5] != 0) {
      func_0x000107c3d798(puVar3);
    }
    if (puStack_d0[5] != 0) {
      func_0x000107c3d798(puVar3);
    }
    lVar4 = lVar1;
    func_0x000107c3b858();
    func_0x000107c61180();
    lVar5 = lVar1;
    func_0x000107c3cc88();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c61174(lVar5);
      func_0x000107c61170(param_3);
      param_3 = lVar5;
    }
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) {
      (**(code **)(lVar8 + 0x10))(lVar8,0,0,0);
    }
    else {
      lVar6 = lVar4;
      func_0x000107c5c93c(lVar4);
      func_0x000107c61180();
      lVar7 = lVar4;
      func_0x000107c5c964(lVar4);
      func_0x000107c61180();
      (**(code **)(lVar8 + 0x10))(lVar8,lVar6,lVar7,param_3);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar6);
    }
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c60bcc(&uStack_d8,8);
    func_0x000107c61170(uStack_b0);
    func_0x000107c60bcc(&uStack_a8,8);
    func_0x000107c61170(uStack_80);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c839a8; end: 100c83a7f; -[SCProfileHeaderLiveStoryThumbnailProvider _fetchPendingPublicStoryFromMyStoriesDataCoordinatorWithCompletion:] */

void FUN_100c839a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  if ((lVar1 == 0) || (func_0x000107c4adac(), lVar1 == 0)) {
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c61174(param_3);
    func_0x000107c4f788(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c83a80; end: 100c83b07; -[SCMyStoriesDataCoordinator querySnapProPendingSnapsWithBusinessId:confirmedSnapComponentIds:completion:] */

/* WARNING: Possible PIC construction at 0x000100c83ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c83af0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c83ae4) */
/* WARNING: Removing unreachable block (ram,0x000100c83af4) */

void FUN_100c83a80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4f788();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100c83b08; end: 100c83beb; -[SCStoriesSnapPostCoordinator querySnapProPendingSnapsWithBusinessId:confirmedSnapComponentIds:completion:] */

void FUN_100c83b08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_100c83ce0;
  puStack_68 = &UNK_1108465d0;
  uStack_60 = param_4;
  uStack_58 = param_3;
  lStack_50 = param_1;
  uStack_48 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c4e524(uVar1,param_2,&puStack_80);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100c83bec; end: 100c83bfb;  */

void FUN_100c83bec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100c83bfc; end: 100c83cd7; -[SCProfileHeaderLiveStoryThumbnailProvider _fetchPublicStoryFromMyStoriesDataCoordinatorWithCompletion:] */

void FUN_100c83bfc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  if ((lVar1 == 0) || (func_0x000107c4adac(), lVar1 == 0)) {
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c61174(param_3);
    func_0x000107c44688(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c83cd8; end: 100c83cdf;  */

void FUN_100c83cd8(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c4c228(uStack_38);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126a7af8;
  func_0x000107c610f8();
  func_0x000107c4638c();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(uStack_38);
    func_0x000107c61170(uVar2);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c83ec0);
  (*pcVar1)();
}



/* Entry: 100c83ce0; end: 100c83ebf;  */

void FUN_100c83ce0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x98);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c50004();
  func_0x000107c61170(uVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x98);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5b55c();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000100504554();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),uVar3);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 100c83ec0; end: 100c83fcf; -[SCSnapProProfilesProviderImpl initWithDataHandler:businessProfileManager:] */

undefined1 *
FUN_100c83ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126ff3f0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126dc8a0;
    func_0x000107c610f4();
    func_0x000107c46388();
    puVar4 = puVar3;
    func_0x000107c4c280();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c3d740(*(undefined8 *)((long)puVar1 + 0x10));
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c83fd0; end: 100c84077; -[SCDataHandlerObservable initWithDataHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100c83fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126ff468;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11277df60;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277df64);
    *(undefined **)((long)puVar1 + (long)_DAT_11277df64) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c84078; end: 100c8407f; -[SCImpalaBusinessProfileManager addListener:] */

void FUN_100c84078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 100c84080; end: 100c8432b; -[SCImpalaBusinessProfileManagerListenerAnnouncer addListener:] */

undefined8 FUN_100c84080(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c60d88(param_1 + 8);
  plVar3 = (long *)0x30;
  func_0x000107c60e20();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_DAT_110acb578;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    func_0x000107c61144(auStack_90,param_3);
    FUN_100c8432c(plVar10,auStack_90);
    func_0x000107c61120(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_100c8446c(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_100c84234:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x000107c60d68(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        func_0x000107c61148();
        func_0x000107c61170();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_100c84254;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      func_0x000107c61148();
      func_0x000107c61170();
      if (lVar5 != 0) {
        FUN_100c8432c(plVar10,lVar7);
      }
    }
    func_0x000107c61144(auStack_78,param_3);
    FUN_100c8432c(plVar10,auStack_78);
    func_0x000107c61120(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_100c8446c(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_100c84234;
    }
  }
  uVar9 = 1;
LAB_100c84254:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      func_0x000107c60d68(plVar3);
    }
  }
  func_0x000107c60d8c(param_1 + 8);
  func_0x000107c61170(param_3);
  return uVar9;
}



/* Entry: 100c8432c; end: 100c8446b;  */

void FUN_100c8432c(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    func_0x000107c6111c(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      func_0x000107c2aa10();
LAB_100c84468:
      func_0x000104bd35f4();
      plVar5 = param_1;
      func_0x000107c60c40();
      func_0x000107c60dc4();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_100c84468;
      lVar4 = uVar7 << 3;
      func_0x000107c60e20();
    }
    lVar9 = lVar4 + lVar9;
    func_0x000107c6111c(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        func_0x000107c6114c(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        func_0x000107c61120(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      func_0x000107c60e14(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 100c8446c; end: 100c844b3;  */

void FUN_100c8446c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c60c40();
  func_0x000107c60dc4();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 100c844b4; end: 100c8459f; -[SCSnapProProfilesProviderImpl handlerForBusinessProfileId:isManaged:createIfNeeded:completion:] */

void FUN_100c844b4(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(param_3);
  if (param_4 == 0) {
    func_0x000107c44690(uVar1);
    func_0x000107c61180();
  }
  else {
    func_0x000107c4c23c();
    func_0x000107c61180();
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_108f1fa74;
  puStack_50 = &UNK_11092fc10;
  uStack_48 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c44684(uVar1,param_2,param_3,param_5,&puStack_68);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100c845a0; end: 100c845a7; -[SCImpalaBusinessProfileManager managedHandlers] */

undefined8 FUN_100c845a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 100c845a8; end: 100c846cf; -[SCImpalaBusinessProfileHandlers handlerForBusinessProfileId:createIfNeeded:completion:] */

void FUN_100c845a8(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_5);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuStack_50 = param_3;
  }
  func_0x000107c61174(param_3);
  func_0x000107c3e17c(puVar1,param_2,&ppuStack_50,1);
  func_0x000107c61180();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  puStack_68 = &UNK_108f18f5c;
  puStack_60 = &UNK_110859310;
  uStack_58 = param_5;
  func_0x000107c61174(param_5);
  ppuVar5 = &puStack_78;
  puVar3 = puVar1;
  puVar4 = PTR____NSArray0__struct_11034ab48;
  func_0x000107c44694(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(param_5);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar4);
  ppuVar2 = ppuVar5;
  func_0x000107c61174(ppuVar5);
  func_0x000100078e94();
  func_0x000107c61180();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  puStack_f8 = &UNK_108f18f10;
  puStack_f0 = &UNK_110855c70;
  ppuStack_e8 = param_3;
  puStack_e0 = puVar3;
  puStack_d8 = puVar4;
  ppuStack_d0 = ppuVar5;
  uStack_c8 = param_4;
  func_0x000107c61174(ppuVar5);
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c4e590(ppuVar2,param_2,&puStack_108);
  func_0x000107c61170(ppuVar2);
  func_0x000107c61170(ppuStack_d0);
  func_0x000107c61170(puStack_d8);
  func_0x000107c61170(puStack_e0);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 100c846d0; end: 100c847cf; -[SCImpalaBusinessProfileHandlers handlersForBusinessProfileIds:userIds:createIfNeeded:completion:] */

void FUN_100c846d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000100078e94();
  func_0x000107c61180();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_108f18f10;
  puStack_70 = &UNK_110855c70;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_6;
  uStack_48 = param_5;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c4e590(uVar1,param_2,&puStack_88);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c847d0; end: 100c84ad3; -[SCLegacyStoriesServicesEntryPoint _createSnapProPendingSnapManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c847d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
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
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_78,auStack_70);
  func_0x000107c61174(param_3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar2 = param_1 + _DAT_1127542d4;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar4 = PTR_PTR_1126cf490;
  func_0x000107c610f4();
  lVar17 = (long)_DAT_1127542f8;
  lVar2 = param_1 + lVar17;
  func_0x000107c61148();
  lVar5 = lVar2;
  func_0x000107c4f3e4();
  func_0x000107c61180();
  lVar17 = param_1 + lVar17;
  func_0x000107c61148();
  lVar6 = lVar17;
  func_0x000107c5da30();
  func_0x000107c61180();
  lVar7 = param_1 + _DAT_1127542fc;
  func_0x000107c61148();
  lVar8 = lVar7;
  func_0x000107c5a958();
  func_0x000107c61180();
  lVar9 = param_1 + _DAT_1127542b8;
  func_0x000107c61148(lVar9);
  lVar10 = lVar9;
  func_0x000107c5b46c();
  func_0x000107c61180();
  lVar11 = param_1 + _DAT_112754300;
  func_0x000107c61148();
  lVar12 = lVar11;
  func_0x000107c5bfe4();
  func_0x000107c61180();
  lVar13 = param_1 + _DAT_112754304;
  func_0x000107c61148();
  lVar14 = lVar13;
  func_0x000107c408d0();
  func_0x000107c61180();
  lVar15 = param_1 + _DAT_112754308;
  func_0x000107c61148();
  param_1 = param_1 + _DAT_11275429c;
  func_0x000107c61148();
  lVar16 = param_1;
  func_0x000107c5da60();
  func_0x000107c61180();
  func_0x000107c47e0c();
  func_0x000107c61170(lVar16);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_70);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100c84ad4; end: 100c84adb; -[SCSnapProMessagingServices shareMessageSender] */

undefined8 FUN_100c84ad4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c84adc; end: 100c84aeb; -[_TtC23SCStoryDraftingServices23SCStoryDraftingServices storyDraftingDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c84adc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fe68f0));
  return;
}



/* Entry: 100c84aec; end: 100c84e9f; -[SCStoriesSnapProPendingSnapManager initWithPerformer:circumstanceEngine:snapProProfilesProvider:snapProUserProfileIdProvider:snapProShareSender:snapchatterFetcher:storyDraftingDataCoordinator:nonFatalReporter:pollerManager:businessProfileManagerService:userSession:] */

undefined8 *
FUN_100c84aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puStack_70 = PTR_PTR_1126f3e40;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[9];
    puVar1[9] = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_10;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126cf430;
    func_0x000107c610fc();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x12,param_12);
    puVar3 = PTR_PTR_1126b10e0;
    func_0x000107c61160();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_80,puVar1);
    uVar2 = param_6;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c4f588();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_88,auStack_80);
    uVar5 = uVar4;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar6 = puVar1[0xb];
    puVar1[0xb] = uVar5;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100c84ea0; end: 100c84eeb; -[SCCreatorsPublicStorySendingLogger init] */

undefined8 FUN_100c84ea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aca90;
  func_0x000107c610f8(PTR_PTR_1126aca90);
  func_0x000107c453e4();
  func_0x000107c46b6c(param_1,param_2,puVar1);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100c84eec; end: 100c84f5f; -[SCGraphenePublicStorySendingMetric2 init] */

undefined1 * FUN_100c84eec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3e70;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100c84f60; end: 100c84ffb; -[SCCreatorsPublicStorySendingLogger initWithGraphene:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c84f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f35850;
  func_0x000107c61174();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100c84ffc();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lVar1 = _DAT_112f35858;
  FUN_100c85110();
  *(undefined **)(param_1 + lVar1) = puVar4;
  *(undefined8 *)(param_1 + _DAT_112f35860) = param_3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c84ffc; end: 100c8510f;  */

undefined * FUN_100c84ffc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined2 uVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined2 *puVar12;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f35898,&UNK_10db7dd50);
    puVar8 = puVar11;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar12 = (undefined2 *)(param_1 + 0x40);
    do {
      uVar2 = *(ulong *)(puVar12 + -0x10);
      uVar4 = *(ulong *)(puVar12 + -0xc);
      uVar3 = *(ulong *)(puVar12 + -8);
      uVar5 = *(ulong *)(puVar12 + -4);
      uVar6 = *puVar12;
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      uVar9 = uVar2;
      uVar10 = uVar4;
      func_0x00010303eccc(uVar2,uVar4,uVar3,uVar5);
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100c8510c);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x20);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      puVar1[2] = uVar3;
      puVar1[3] = uVar5;
      *(undefined2 *)(*(long *)(puVar8 + 0x38) + uVar9 * 2) = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100c85110);
        (*pcVar7)();
      }
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar11 = puVar11 + -1;
      puVar12 = puVar12 + 0x14;
    } while (puVar11 != (undefined *)0x0);
    func_0x000107c61574(puVar8);
  }
  return puVar8;
}



/* Entry: 100c85110; end: 100c8520b;  */

undefined * FUN_100c85110(long param_1)

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
    func_0x0001000285a8(0x112f35890,&UNK_10db7dd48);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100c85208);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100c8520c);
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



/* Entry: 100c8520c; end: 100c85213; -[SCSnapProUserProfileIdProviderImpl provideRealProfileIdConvertedFromDefaultProfile] */

void FUN_100c8520c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fd810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_placeholderConvertedToRealBusine_11261d020);
  return;
}



/* Entry: 100c85214; end: 100c8521b; -[SCImpalaBusinessProfileManager placeholderConvertedToRealBusinessId] */

void FUN_100c85214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fd810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_placeholderConvertedToRealBusine_11261d020);
  return;
}



/* Entry: 100c8521c; end: 100c85243; -[SCImpalaBusinessProfileHandlers placeholderConvertedToRealBusinessId] */

void FUN_100c8521c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c85244; end: 100c854c3; -[SCStoriesSnapProPendingSnapManager removeSnaps:businessId:] */

/* WARNING: Possible PIC construction at 0x000100c852a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c852a8) */
/* WARNING: Removing unreachable block (ram,0x000100c852bc) */
/* WARNING: Removing unreachable block (ram,0x000100c85308) */
/* WARNING: Removing unreachable block (ram,0x000100c85314) */
/* WARNING: Removing unreachable block (ram,0x000100c8531c) */
/* WARNING: Removing unreachable block (ram,0x000100c8532c) */
/* WARNING: Removing unreachable block (ram,0x000100c85334) */
/* WARNING: Removing unreachable block (ram,0x000100c85384) */
/* WARNING: Removing unreachable block (ram,0x000100c853c8) */
/* WARNING: Removing unreachable block (ram,0x000100c853d4) */
/* WARNING: Removing unreachable block (ram,0x000100c853f4) */
/* WARNING: Removing unreachable block (ram,0x000100c8540c) */
/* WARNING: Removing unreachable block (ram,0x000100c85428) */
/* WARNING: Removing unreachable block (ram,0x000100c85450) */
/* WARNING: Removing unreachable block (ram,0x000100c85470) */

void FUN_100c85244(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar1 = param_3;
  func_0x000107c40808();
  if (lVar1 == 0) {
    func_0x000107c61170(param_4);
    func_0x000107c61170();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
      return;
    }
    func_0x000107c60e78();
    uVar2 = *(undefined8 *)(param_3 + 0x10);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 100c854c4; end: 100c854cb; -[SCStoriesSnapProPendingSnapManager snapsWithBusinessId:] */

void FUN_100c854c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 100c854cc; end: 100c855cb;  */

/* WARNING: Possible PIC construction at 0x000100c85510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c8556c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c855b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c85570) */
/* WARNING: Removing unreachable block (ram,0x000100c85514) */
/* WARNING: Removing unreachable block (ram,0x000100c85598) */
/* WARNING: Removing unreachable block (ram,0x000100c8559c) */
/* WARNING: Removing unreachable block (ram,0x000100c85518) */
/* WARNING: Removing unreachable block (ram,0x000100c855b4) */

void FUN_100c854cc(long param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107c43638(param_2);
    func_0x000107c61180();
    func_0x000107c5b134();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100c85594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 100c855cc; end: 100c85627;  */

/* WARNING: Possible PIC construction at 0x000100c85608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c8560c) */

void FUN_100c855cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100c85628; end: 100c85657;  */

undefined * FUN_100c85628(ulong param_1)

{
  if (param_1 < 0xd) {
    return (&PTR_PTR_110d85d20)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 100c85658; end: 100c856f3;  */

void FUN_100c85658(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x58) + 8);
  lVar1 = 0x13f;
  func_0x000107c614b8(0x13f,uVar2,*(undefined8 *)(param_1 + 0x50),&UNK_10e70d970,&UNK_10e70d978);
  if (uVar2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10db0e500;
    puStack_30 = PTR___sBbWV_11034d660 + 0x40;
    puStack_28 = puStack_30;
    func_0x000107c61524(param_1,0,4,&lStack_40,param_1 + 0x68);
  }
  return;
}



/* Entry: 100c856f4; end: 100c857af;  */

undefined8 * FUN_100c856f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  uVar5 = param_2[8];
  uVar6 = param_2[9];
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  uVar6 = param_2[10];
  uVar7 = param_2[0xb];
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  uVar7 = param_2[0xc];
  uVar2 = param_2[0xd];
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar2;
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  uVar3 = param_2[0x10];
  uVar4 = param_2[0x11];
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar4;
  uVar4 = param_2[0x12];
  param_1[0x12] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 100c857b0; end: 100c8580f;  */

void FUN_100c857b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c613fc();
  FUN_100c85810(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 100c85810; end: 100c85b0f;  */

long * FUN_100c85810(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  long *plVar6;
  long *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  code *pcVar12;
  long lVar13;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined *puStack_68;
  
  lVar5 = *(long *)(*unaff_x20 + 0x50);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar13 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = *(undefined8 *)(*(long *)(extraout_x12 + 0x58) + 8);
  uVar1 = 0;
  FUN_100c85b10(0);
  puVar2 = PTR___sSSN_11034da80;
  func_0x000107c5f9cc(PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  lVar8 = *(long *)(param_2 + 0x10);
  puStack_68 = puVar2;
  if (lVar8 == 0) {
    func_0x000107c6142c(param_2);
    plVar6 = (long *)0x0;
  }
  else {
    pcVar12 = *(code **)(lVar9 + 0x10);
    puVar10 = (undefined8 *)(param_2 + 0x28);
    plVar11 = (long *)0x0;
    lStack_c0 = param_2;
    lStack_b8 = lVar9;
    do {
      plVar4 = (long *)puVar10[-1];
      uVar7 = *puVar10;
      (*pcVar12)(lVar13,param_4,lVar5);
      func_0x000107c61438(uVar7,2);
      plVar6 = plVar4;
      FUN_100c85bf8(plVar4,uVar7,param_1,lVar13);
      uVar3 = 0;
      plStack_80 = plVar4;
      uStack_78 = uVar7;
      plStack_70 = plVar6;
      func_0x000107c5fa34(0,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
      func_0x000107c61580(plVar6,2);
      func_0x000107c5fa44(&plStack_70,&plStack_80,uVar3);
      plVar4 = plVar6;
      if (plVar11 != (long *)0x0) {
        uVar7 = *(undefined8 *)((long)plVar11 + *(long *)(*plVar11 + 0x78));
        *(long **)((long)plVar11 + *(long *)(*plVar11 + 0x78)) = plVar6;
        func_0x000107c6157c(plVar6);
        func_0x000107c61574(uVar7);
        func_0x000107c61634((long)plVar6 + *(long *)(*plVar6 + 0x80),plVar11);
        func_0x000107c61574(plVar6);
        plVar4 = plVar11;
      }
      puVar10 = puVar10 + 2;
      func_0x000107c61574(plVar4);
      lVar8 = lVar8 + -1;
      plVar11 = plVar6;
    } while (lVar8 != 0);
    func_0x000107c6142c(lStack_c0);
    lVar9 = lStack_b8;
  }
  lVar8 = *(long *)(param_3 + 0x10);
  if (lVar8 != 0) {
    pcVar12 = *(code **)(lVar9 + 0x10);
    puVar10 = (undefined8 *)(param_3 + 0x28);
    do {
      plVar11 = (long *)puVar10[-1];
      uVar7 = *puVar10;
      (*pcVar12)(lVar13,param_4,lVar5);
      func_0x000107c61438(uVar7,2);
      plVar4 = plVar11;
      FUN_100c85bf8(plVar11,uVar7,param_1,lVar13);
      uVar3 = 0;
      plStack_80 = plVar11;
      uStack_78 = uVar7;
      plStack_70 = plVar4;
      func_0x000107c5fa34(0,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
      func_0x000107c5fa44(&plStack_70,&plStack_80,uVar3);
      puVar10 = puVar10 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  lVar8 = param_3;
  func_0x000100403a6c();
  func_0x000107c61574(plVar6);
  func_0x000107c6142c(param_3);
  *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)) = lVar8;
  lVar9 = *(long *)(*unaff_x20 + 0x68);
  lVar8 = 0;
  func_0x000107c614b8(0,uStack_b0,lVar5,&UNK_10e70d970,&UNK_10e70d978);
  (**(code **)(*(long *)(lVar8 + -8) + 0x20))((long)unaff_x20 + lVar9,param_1,lVar8);
  *(undefined **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)) = puStack_68;
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)) = 1;
  return unaff_x20;
}



/* Entry: 100c85b10; end: 100c85b1f;  */

void FUN_100c85b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e70d5bc);
  return;
}



/* Entry: 100c85b20; end: 100c85bf7;  */

void FUN_100c85b20(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_60 = &UNK_10db0e3e8;
  uVar3 = *(ulong *)(param_1 + 0x50);
  uVar2 = *(ulong *)(param_1 + 0x58);
  lVar1 = 0x13f;
  func_0x000107c614b8(0x13f,uVar2,uVar3,&UNK_10e70d970,&UNK_10e70d978);
  if (uVar2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_50 = &UNK_10db0e400;
    puStack_48 = &UNK_10db0e418;
    puStack_40 = &UNK_10db0e430;
    puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
    lVar1 = 0x13f;
    puStack_30 = puStack_38;
    func_0x000107c6143c();
    if (uVar3 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      func_0x000107c61524(param_1,0,8,&puStack_60,param_1 + 0x68);
    }
  }
  return;
}



/* Entry: 100c85bf8; end: 100c85d97;  */

void FUN_100c85bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c613fc();
  func_0x000100c85c58(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 100c85d98; end: 100c85dcb;  */

void FUN_100c85d98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar6 = param_2[0x11];
  uVar5 = param_2[0x10];
  param_1[0x12] = param_2[0x12];
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar5;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  return;
}



/* Entry: 100c85dcc; end: 100c85e2b;  */

void FUN_100c85dcc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((long)param_1 + *(long *)(*param_1 + 0xb0));
  *(undefined8 *)((long)param_1 + *(long *)(*param_1 + 0xb0)) = param_2;
  func_0x000107c61574(uVar1);
  func_0x000107c6157c(param_2);
  FUN_100c85e48(param_3,param_2);
  return;
}



/* Entry: 100c85e2c; end: 100c85e47;  */

void FUN_100c85e2c(void)

{
  long unaff_x20;
  
  FUN_100c85dcc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100c85e48; end: 100c85fe3;  */

void FUN_100c85e48(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar10 = *unaff_x20;
  lVar7 = *(long *)(lVar10 + 0x60);
  uVar8 = *(undefined8 *)(lVar10 + 0x50);
  lVar1 = 0;
  uStack_78 = param_2;
  func_0x000107c614b8(0,*(undefined8 *)(lVar7 + 8),uVar8,&UNK_10e70d970,&UNK_10e70d978);
  lVar5 = *(long *)(lVar1 + -8);
  lVar9 = *(long *)(lVar5 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar9 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c6071c();
  (**(code **)(lVar7 + 0x10))(*(undefined8 *)(*unaff_x20 + 0x78),param_1,uVar8,lVar7);
  dVar11 = *(double *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x98));
  if (dVar11 != 0.0) {
    uVar2 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xa0));
    uStack_80 = uVar2;
    func_0x000107c614f0();
    uStack_88 = uVar2;
    (**(code **)(lVar5 + 0x10))(auStack_90 + -extraout_x8,param_1,lVar1);
    uVar4 = (ulong)*(byte *)(lVar5 + 0x50);
    uVar6 = uVar4 + 0x48 & (uVar4 ^ 0xffffffffffffffff);
    puVar3 = &UNK_110589b40;
    func_0x000107c613fc(&UNK_110589b40,uVar6 + lVar9,uVar4 | 7);
    uVar2 = uStack_78;
    *(undefined8 *)(puVar3 + 0x10) = uVar8;
    *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(lVar10 + 0x58);
    *(long *)(puVar3 + 0x20) = lVar7;
    *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(lVar10 + 0x68);
    *(undefined8 *)(puVar3 + 0x30) = *(undefined8 *)(lVar10 + 0x70);
    *(long **)(puVar3 + 0x38) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x40) = uStack_78;
    (**(code **)(lVar5 + 0x20))(puVar3 + uVar6,auStack_90 + -extraout_x8,lVar1);
    func_0x000107c6157c();
    func_0x000107c6157c(uVar2);
    func_0x00010488b6c8(dVar11,&UNK_102a362f8,puVar3,uStack_88);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 100c85fe4; end: 100c86073;  */

void FUN_100c85fe4(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c614b8(0,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 8),
                      *(undefined8 *)(unaff_x20 + 0x10),&UNK_10e70d970,&UNK_10e70d978);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x48 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c86074; end: 100c861ff;  */

/* WARNING: Possible PIC construction at 0x000100c861ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c861b0) */

void FUN_100c86074(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long *unaff_x20;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  lVar7 = *unaff_x20;
  lVar3 = *(long *)(lVar7 + 0x58);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar4 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_78 = param_2;
  (**(code **)(*(long *)(lVar7 + 0x60) + 0x10))(*(undefined8 *)(lVar7 + 0x78));
  lVar5 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
  lVar6 = lVar5;
  func_0x000107c61434();
  func_0x000107c5fc7c();
  if (lVar6 != 0) {
    lVar6 = 0;
    lVar7 = *(long *)(lVar7 + 0x68);
    pcVar9 = *(code **)(lVar7 + 0x10);
    do {
      func_0x000107c5fc98((long)puVar4 - extraout_x12,lVar6,lVar5,lVar3);
      lVar1 = lVar6 + 1;
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100c86200);
        (*pcVar9)();
      }
      (**(code **)(lVar8 + 0x20))(puVar4,(long)puVar4 - extraout_x12,lVar3);
      (*pcVar9)(param_1,uStack_78,lVar3,lVar7);
      (**(code **)(lVar8 + 8))(puVar4,lVar3);
      lVar2 = lVar5;
      func_0x000107c5fc7c(lVar5,lVar3);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar5);
  return;
}



/* Entry: 100c86200; end: 100c8621f;  */

void FUN_100c86200(void)

{
  FUN_100c86074();
  return;
}



/* Entry: 100c86220; end: 100c86433;  */

/* WARNING: Possible PIC construction at 0x000100c86280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c862b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c862e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c86310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c86340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c86370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c863a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c86374) */
/* WARNING: Removing unreachable block (ram,0x000100c8638c) */
/* WARNING: Removing unreachable block (ram,0x000100c8637c) */
/* WARNING: Removing unreachable block (ram,0x000100c86390) */
/* WARNING: Removing unreachable block (ram,0x000100c86344) */
/* WARNING: Removing unreachable block (ram,0x000100c8635c) */
/* WARNING: Removing unreachable block (ram,0x000100c8634c) */
/* WARNING: Removing unreachable block (ram,0x000100c86360) */
/* WARNING: Removing unreachable block (ram,0x000100c86314) */
/* WARNING: Removing unreachable block (ram,0x000100c8632c) */
/* WARNING: Removing unreachable block (ram,0x000100c8631c) */
/* WARNING: Removing unreachable block (ram,0x000100c86330) */
/* WARNING: Removing unreachable block (ram,0x000100c862e4) */
/* WARNING: Removing unreachable block (ram,0x000100c862fc) */
/* WARNING: Removing unreachable block (ram,0x000100c862ec) */
/* WARNING: Removing unreachable block (ram,0x000100c86300) */
/* WARNING: Removing unreachable block (ram,0x000100c862b4) */
/* WARNING: Removing unreachable block (ram,0x000100c862cc) */
/* WARNING: Removing unreachable block (ram,0x000100c862bc) */
/* WARNING: Removing unreachable block (ram,0x000100c862d0) */
/* WARNING: Removing unreachable block (ram,0x000100c86284) */
/* WARNING: Removing unreachable block (ram,0x000100c8629c) */
/* WARNING: Removing unreachable block (ram,0x000100c8628c) */
/* WARNING: Removing unreachable block (ram,0x000100c862a0) */
/* WARNING: Removing unreachable block (ram,0x000100c863a4) */
/* WARNING: Removing unreachable block (ram,0x000100c86428) */
/* WARNING: Removing unreachable block (ram,0x000100c863d4) */
/* WARNING: Removing unreachable block (ram,0x000100c863e0) */
/* WARNING: Removing unreachable block (ram,0x000100c863e4) */
/* WARNING: Removing unreachable block (ram,0x000100c8642c) */
/* WARNING: Removing unreachable block (ram,0x000100c863e8) */
/* WARNING: Removing unreachable block (ram,0x000100c863f0) */
/* WARNING: Removing unreachable block (ram,0x000100c863f4) */
/* WARNING: Removing unreachable block (ram,0x000100c86430) */
/* WARNING: Removing unreachable block (ram,0x000100c863f8) */

void FUN_100c86220(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126abdc0;
  func_0x000107c610f8(PTR_PTR_1126abdc0);
  func_0x000107c453e4();
  func_0x000107c5947c();
  func_0x000107c521d0(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c55e70(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100c86434; end: 100c86453;  */

void FUN_100c86434(void)

{
  FUN_100c86220();
  return;
}



/* Entry: 100c86454; end: 100c864d3; -[SCALensCarouselActivationRequested setSnapSource:] */

/* WARNING: Possible PIC construction at 0x000100c864bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c864c0) */

void FUN_100c86454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x0001008cc2b4(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110ea0638,10,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c864d4; end: 100c86553; -[SCALensCarouselActivationRequested setActivationAction:] */

/* WARNING: Possible PIC construction at 0x000100c8653c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c86540) */

void FUN_100c864d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  FUN_100c85628(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110fddd78,2,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c86554; end: 100c8656b; -[SCALensCarouselActivationRequested setLensSessionId:] */

void FUN_100c86554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fae358,7,param_3,0);
  return;
}



/* Entry: 100c8656c; end: 100c86583; -[SCALensCarouselActivationRequested setLensId:] */

void FUN_100c8656c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db19f8,6,param_3,0);
  return;
}



/* Entry: 100c86584; end: 100c8659b; -[SCALensCarouselActivationRequested setDeeplink:] */

void FUN_100c86584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dabab8,5,param_3,0);
  return;
}



/* Entry: 100c8659c; end: 100c865b3; -[SCALensCarouselActivationRequested setSnapcodeId:] */

void FUN_100c8659c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdddd8,0xb,param_3,0);
  return;
}



/* Entry: 100c865b4; end: 100c865cb; -[SCALensCarouselActivationRequested setCollectionId:] */

void FUN_100c865b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db9038,4,param_3,0);
  return;
}


