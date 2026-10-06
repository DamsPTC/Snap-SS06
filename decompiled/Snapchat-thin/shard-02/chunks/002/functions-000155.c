/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a7551c; end: 101a757f7;  */

/* WARNING: Possible PIC construction at 0x000101a755f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a7565c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a75680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a75698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a75758: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a7569c) */
/* WARNING: Removing unreachable block (ram,0x000101a75684) */
/* WARNING: Removing unreachable block (ram,0x000101a75660) */
/* WARNING: Removing unreachable block (ram,0x000101a755f4) */
/* WARNING: Removing unreachable block (ram,0x000101a7575c) */

void FUN_101a7551c(long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_68;
  
  if (param_1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar4 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010efcd970);
    func_0x000107c466bc(puVar3);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  if (param_3 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar6 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar6 == 0) {
    func_0x000107c615f0(param_1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c615f0(param_1);
    FUN_101a75864(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a757f8);
      (*pcVar1)();
    }
    uVar5 = 0;
    do {
      puVar3 = puStack_68;
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(ulong *)(param_3 + uVar5 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar5;
        func_0x000100fb0f0c(uVar5,param_3);
      }
      uVar4 = uVar2;
      func_0x000107c41214();
      func_0x000107c61180();
      if (uVar4 != 0) {
        func_0x000107c5ee30();
        goto code_r0x000107c61170;
      }
      func_0x000107c61170(uVar2);
      uVar4 = *(ulong *)(puVar3 + 0x10);
      puStack_68 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar4) {
        FUN_101a75864(1 < *(ulong *)(puVar3 + 0x18),uVar4 + 1,1);
      }
      uVar5 = uVar5 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
      *(undefined4 *)(puStack_68 + uVar4 * 4 + 0x20) = 2;
      puVar3 = puStack_68;
    } while (uVar6 != uVar5);
  }
  puStack_68 = puVar3;
  func_0x000100b60084(&puStack_68);
  func_0x000107c6142c(puVar3);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 101a757f8; end: 101a7581b;  */

void FUN_101a757f8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a7581c; end: 101a75827;  */

undefined8 FUN_101a7581c(void)

{
  return 0;
}



/* Entry: 101a75828; end: 101a75843;  */

bool FUN_101a75828(long param_1)

{
  func_0x000101a75980();
  return param_1 < 1;
}



/* Entry: 101a75844; end: 101a75863;  */

void FUN_101a75844(void)

{
  FUN_101a75358();
  return;
}



/* Entry: 101a75864; end: 101a7587f;  */

void FUN_101a75864(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101a75880();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101a75880; end: 101a75a2b;  */

undefined * FUN_101a75880(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a75980);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112df2718;
    func_0x0001000285a8(0x112df2718,&UNK_10d9c0778);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x1d;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 2) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 2);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 4 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101a75a2c; end: 101a75a4f;  */

/* WARNING: Possible PIC construction at 0x000101a755f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a7565c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a75680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a75698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a75758: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a7569c) */
/* WARNING: Removing unreachable block (ram,0x000101a75684) */
/* WARNING: Removing unreachable block (ram,0x000101a75660) */
/* WARNING: Removing unreachable block (ram,0x000101a755f4) */
/* WARNING: Removing unreachable block (ram,0x000101a7575c) */

void FUN_101a75a2c(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  undefined *puStack_68;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  if (param_1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar5 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010efcd970);
    func_0x000107c466bc(puVar4);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  if (uVar1 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar1) {
      uVar7 = uVar1;
    }
    func_0x000107c60480();
  }
  if (uVar7 == 0) {
    func_0x000107c615f0(param_1);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c615f0(param_1);
    FUN_101a75864(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a757f8);
      (*pcVar2)();
    }
    uVar6 = 0;
    do {
      puVar4 = puStack_68;
      if ((uVar1 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(uVar1 + uVar6 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar6;
        func_0x000100fb0f0c(uVar6,uVar1);
      }
      uVar5 = uVar3;
      func_0x000107c41214();
      func_0x000107c61180();
      if (uVar5 != 0) {
        func_0x000107c5ee30();
        goto code_r0x000107c61170;
      }
      func_0x000107c61170(uVar3);
      uVar5 = *(ulong *)(puVar4 + 0x10);
      puStack_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar5) {
        FUN_101a75864(1 < *(ulong *)(puVar4 + 0x18),uVar5 + 1,1);
      }
      uVar6 = uVar6 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar5 + 1;
      *(undefined4 *)(puStack_68 + uVar5 * 4 + 0x20) = 2;
      puVar4 = puStack_68;
    } while (uVar7 != uVar6);
  }
  puStack_68 = puVar4;
  func_0x000100b60084(&puStack_68);
  func_0x000107c6142c(puVar4);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 101a75a50; end: 101a75a6f;  */

void FUN_101a75a50(void)

{
  func_0x000107c61168(&PTR_PTR_112df26b8);
  return;
}



/* Entry: 101a75a70; end: 101a75aa3;  */

void FUN_101a75a70(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101a75aa4; end: 101a75afb;  */

void FUN_101a75aa4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  FUN_101a75a50();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110434b00;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 101a75afc; end: 101a75b0b;  */

void FUN_101a75afc(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  FUN_101a75a50();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110434b00;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar3);
  return;
}



/* Entry: 101a75b0c; end: 101a75b2f;  */

void FUN_101a75b0c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a75b30; end: 101a75bd7;  */

void FUN_101a75b30(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_110434b68;
  func_0x000107c613fc(&UNK_110434b68,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  func_0x0001000285a8(0x112df2720,&UNK_10d9c0780);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  pcVar2 = FUN_101a75bd8;
  func_0x0001000bdd8c(FUN_101a75bd8,puVar1);
  uVar3 = 0;
  func_0x0001001d4af4(0);
  func_0x000107c610f8();
  func_0x00010079a054(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101a75bd8; end: 101a75bdb;  */

void FUN_101a75bd8(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  FUN_101a75a50();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110434b00;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar3);
  return;
}



/* Entry: 101a75bdc; end: 101a75c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a75bdc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112df27f8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101a75c28; end: 101a75c83; -[SnapEditorServices init] */

void FUN_101a75c28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorServices.SnapEditorServices",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a75c54);
  (*pcVar1)();
}



/* Entry: 101a75c84; end: 101a75c93; -[SnapEditorServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a75c84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112df27f8));
  return;
}



/* Entry: 101a75c94; end: 101a76593;  */

long FUN_101a75c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(undefined8 *)(unaff_x20 + 0x50) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = param_7;
  *(undefined8 *)(unaff_x20 + 0x60) = param_8;
  *(undefined8 *)(unaff_x20 + 0x68) = param_9;
  *(undefined8 *)(unaff_x20 + 0x70) = param_10;
  *(undefined8 *)(unaff_x20 + 0x78) = param_11;
  *(undefined8 *)(unaff_x20 + 0x80) = param_12;
  *(undefined8 *)(unaff_x20 + 0x88) = param_13;
  *(undefined8 *)(unaff_x20 + 0x90) = param_14;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  puVar4 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar4;
  puVar5 = PTR_PTR_1126a86f8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar5;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  uVar6 = uVar7;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar8 = 0xd000000000000013;
  uVar6 = uVar8;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar6 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef22380);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar6 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar6 = uVar8;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efcda00);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efcda20);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85690);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efcda40);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efcda60);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(puVar5);
  func_0x000107c61174();
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efcda80);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(puVar5);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a7658c);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x98) = puVar2;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    *(undefined **)(unaff_x20 + 0xa0) = puVar3;
    func_0x000107c52018();
    func_0x000107c61180();
    if (puVar4 != (undefined *)0x0) {
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_11);
      func_0x000107c61170(param_12);
      func_0x000107c61170(param_13);
      func_0x000107c61170(param_14);
      *(undefined **)(unaff_x20 + 0xa8) = puVar4;
      return unaff_x20;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a76594);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a76590);
  (*pcVar1)();
}



/* Entry: 101a76594; end: 101a76667;  */

void FUN_101a76594(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  return;
}



/* Entry: 101a76668; end: 101a766cb;  */

undefined1  [16] FUN_101a76668(void)

{
  return ZEXT816(0x110434ce0);
}



/* Entry: 101a766cc; end: 101a766f3;  */

void FUN_101a766cc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a766f4; end: 101a7673f;  */

undefined8 FUN_101a766f4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a76740; end: 101a769c7;  */

void FUN_101a76740(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x00010020a038();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_101a77a04(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x000101a77744();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  func_0x000101a77780();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar5);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 101a769c8; end: 101a76a0b;  */

void FUN_101a769c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a76a0c; end: 101a76a5b;  */

void FUN_101a76a0c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a76a5c; end: 101a76a9f;  */

undefined1  [16] FUN_101a76a5c(void)

{
  return ZEXT816(0x110434e68);
}



/* Entry: 101a76aa0; end: 101a76af3;  */

void FUN_101a76aa0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a76af4; end: 101a76bd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101a76af4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112df2aa8);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c41050();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar2;
  if (lVar2 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112df2aa0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) goto LAB_101a76bbc;
    lVar3 = lVar1;
    func_0x000107c5df50();
    if ((int)lVar3 != 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112df2ab0);
      uVar4 = 0x64656b6e696c6e75;
      func_0x000107c5fadc(0x64656b6e696c6e75,0xe800000000000000);
      func_0x000108c7a45c(uVar5,uVar4,1);
      func_0x000107c61170(uVar4);
      func_0x000107c5a59c(lVar1);
    }
  }
  func_0x000107c61170(lVar1);
LAB_101a76bbc:
  return lVar2 != 0;
}



/* Entry: 101a76bd4; end: 101a76c53; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl isQualifiedForSaturnOnProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101a76bd4(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a76af4();
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112df2aa0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5df50();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(param_1);
      if ((int)lVar3 == 0) {
        return 0;
      }
      return 1;
    }
  }
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 101a76c54; end: 101a76cd3; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl isEligibleForSaturnPermissionFst] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101a76c54(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a76af4();
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_112df2aa0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c5df50();
      func_0x000107c61170(uVar1);
      func_0x000107c61170(param_1);
      if ((uVar2 & 1) != 0) {
        return 0;
      }
      return 1;
    }
  }
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 101a76cd4; end: 101a76d7b; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl isEligibleForSaturnUpsellOnFriendProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a76cd4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112df2a98);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010efcdd40);
    lVar3 = lVar2;
    func_0x000107c3ebd4(lVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return lVar3;
}



/* Entry: 101a76d7c; end: 101a76f6b; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl isSaturnCommunityUpsellOnMyProfileEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a76d7c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112df2a98);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010efcdd10);
    lVar3 = lVar2;
    func_0x000107c3ebd4(lVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return lVar3;
}



/* Entry: 101a76f6c; end: 101a76fa7; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl saturnUpsellTrayVariantWithSurface:] */

undefined8 FUN_101a76f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000101a76e24(param_3);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 101a76fa8; end: 101a7704f; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl isSaturnUpsellChatHeaderEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a76fa8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112df2a98);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010efcdc00);
    lVar3 = lVar2;
    func_0x000107c3ebd4(lVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return lVar3;
}



/* Entry: 101a77050; end: 101a770f7; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl isSaturnUpsellTrayGeneralUserEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a77050(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112df2a98);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efcdbe0);
    lVar3 = lVar2;
    func_0x000107c3ebd4(lVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return lVar3;
}



/* Entry: 101a770f8; end: 101a7719f; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl isSaturnInviteClipboardHandoffEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a770f8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112df2a98);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efcdbc0);
    lVar3 = lVar2;
    func_0x000107c3ebd4(lVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return lVar3;
}



/* Entry: 101a771a0; end: 101a77247; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl isSaturnChatHeaderViewerEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a771a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112df2a98);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010efcdb90);
    lVar3 = lVar2;
    func_0x000107c3ebd4(lVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return lVar3;
}



/* Entry: 101a77248; end: 101a772c7; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl isUserEligibleForSaturnStatusFeatures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101a77248(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a76af4();
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_112df2aa0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c5df50();
      func_0x000107c61170(uVar1);
      func_0x000107c61170(param_1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 101a772c8; end: 101a77373; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl saturnStatusInChatHeaderManualExposure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a772c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112df2a98);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010efcdb70);
    lVar3 = lVar2;
    func_0x000107c4c270(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101a77374; end: 101a7741b; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl isSaturnChatHeaderAPIEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a77374(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112df2a98);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efcdb40);
    lVar3 = lVar2;
    func_0x000107c3ebd4(lVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return lVar3;
}



/* Entry: 101a7741c; end: 101a774cf; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl currentUserSaturnId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a7741c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112df2aa8);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
      func_0x000107c5fadc(lVar2,param_2);
      func_0x000107c6142c(param_2);
      goto LAB_101a774c0;
    }
  }
  func_0x000107c61170(param_1);
  lVar2 = 0;
LAB_101a774c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101a774d0; end: 101a77577; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl isSaturnFriendsFeedAPIEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a774d0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112df2a98);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010efcdb10);
    lVar3 = lVar2;
    func_0x000107c3ebd4(lVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return lVar3;
}



/* Entry: 101a77578; end: 101a77623; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl saturnStatusInFriendsFeedManualExposure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a77578(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112df2a98);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010efcdaf0);
    lVar3 = lVar2;
    func_0x000107c4c270(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101a77624; end: 101a77683; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl init] */

void FUN_101a77624(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaturnExperimentProviderServicesImpl.SaturnExperimentProviderImpl",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a77650);
  (*pcVar1)();
}



/* Entry: 101a77684; end: 101a776db; -[_TtC36SaturnExperimentProviderServicesImpl28SaturnExperimentProviderImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101a776a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a776c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a776a4) */
/* WARNING: Removing unreachable block (ram,0x000101a776c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a77684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df2a98));
  return;
}



/* Entry: 101a776dc; end: 101a776fb;  */

void FUN_101a776dc(void)

{
  func_0x000107c61168(&PTR_PTR_1127f2308);
  return;
}



/* Entry: 101a776fc; end: 101a77847;  */

void FUN_101a776fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 101a77848; end: 101a7792f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a77848(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lStack_50;
  long lStack_48;
  
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a7792c);
    (*pcVar2)();
  }
  lVar4 = *(long *)(param_1 + 0x18);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5164c();
    func_0x000107c61180();
    lVar6 = 0;
    FUN_101a776dc();
    lVar7 = lVar6;
    func_0x000107c610f8();
    lVar1 = _DAT_112df2ab0;
    puVar8 = PTR_PTR_1126b0c28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar7 + lVar1) = puVar8;
    *(long *)(lVar7 + _DAT_112df2a98) = lVar3;
    *(long *)(lVar7 + _DAT_112df2aa0) = lVar4;
    *(undefined8 *)(lVar7 + _DAT_112df2aa8) = uVar5;
    lStack_50 = lVar7;
    lStack_48 = lVar6;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a77930);
  (*pcVar2)();
}



/* Entry: 101a77930; end: 101a77937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a77930(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101a7792c);
    (*pcVar2)();
  }
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c5164c();
    func_0x000107c61180();
    lVar6 = 0;
    FUN_101a776dc();
    lVar7 = lVar6;
    func_0x000107c610f8();
    lVar1 = _DAT_112df2ab0;
    puVar8 = PTR_PTR_1126b0c28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar7 + lVar1) = puVar8;
    *(long *)(lVar7 + _DAT_112df2a98) = lVar3;
    *(long *)(lVar7 + _DAT_112df2aa0) = lVar4;
    *(undefined8 *)(lVar7 + _DAT_112df2aa8) = uVar5;
    lStack_50 = lVar7;
    lStack_48 = lVar6;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a77930);
  (*pcVar2)();
}



/* Entry: 101a77938; end: 101a7796f;  */

void FUN_101a77938(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101a77970; end: 101a7798b;  */

void FUN_101a77970(long param_1,long param_2)

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



/* Entry: 101a7798c; end: 101a779af;  */

/* WARNING: Possible PIC construction at 0x000101a77998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a7799c) */

void FUN_101a7798c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a779b0; end: 101a77a03;  */

void FUN_101a779b0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a77a04; end: 101a77a83;  */

void FUN_101a77a04(undefined8 param_1)

{
  if (lRam0000000112df2b08 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66be04);
  return;
}



/* Entry: 101a77a84; end: 101a77b5f;  */

void FUN_101a77a84(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_50 = 0x101a77b68;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101a77938;
  puStack_58 = &UNK_110434f90;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x00010020a0c4(0);
  func_0x000107c610f8();
  func_0x000103feda70(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 101a77b60; end: 101a77b6b;  */

void FUN_101a77b60(long param_1,long param_2)

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



/* Entry: 101a77b6c; end: 101a77bff;  */

void FUN_101a77b6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001001f6974();
  func_0x000107c613fc();
  FUN_101a77c60(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 101a77c00; end: 101a77c0b;  */

void FUN_101a77c00(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001001f6974();
  func_0x000107c613fc();
  FUN_101a77c60(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a77c0c; end: 101a77c5f;  */

undefined8 FUN_101a77c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101a77c60(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101a77c60; end: 101a77d3b;  */

void FUN_101a77c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_101a7a87c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a7a47c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101a7a48c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 101a77d3c; end: 101a77d77;  */

void FUN_101a77d3c(void)

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



/* Entry: 101a77d78; end: 101a77dcb;  */

void FUN_101a77d78(undefined8 *param_1)

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



/* Entry: 101a77dcc; end: 101a77e17;  */

void FUN_101a77dcc(undefined8 *param_1)

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



/* Entry: 101a77e18; end: 101a77e6b;  */

void FUN_101a77e18(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a77e6c; end: 101a77f2f;  */

void FUN_101a77e6c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001001c973c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  FUN_101a78cbc(0);
  func_0x000107c610f8();
  uVar1 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  func_0x000101a78a10(uStack_48,uVar1,uStack_58);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 101a77f30; end: 101a77f3b;  */

void FUN_101a77f30(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001001c973c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = uStack_58;
  FUN_101a78cbc(0);
  func_0x000107c610f8();
  uVar2 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  func_0x000101a78a10(uStack_48,uVar2,uStack_58);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 101a77f3c; end: 101a77fc3;  */

long FUN_101a77f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_101a78cbc(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000101a78a10(param_1,param_2,param_3);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 101a77fc4; end: 101a77ff7;  */

void FUN_101a77fc4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a77ff8; end: 101a7802b;  */

undefined1  [16] FUN_101a77ff8(void)

{
  return ZEXT816(0x110435160);
}



/* Entry: 101a7802c; end: 101a7807f;  */

void FUN_101a7802c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a78080; end: 101a781ab;  */

void FUN_101a78080(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  uVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x000107c5fc48();
  puVar2 = &UNK_110435250;
  func_0x000107c613fc(&UNK_110435250,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcStack_68 = FUN_101a788c0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_110435268;
  ppuVar3 = &puStack_88;
  puStack_60 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_60;
  func_0x000107c6157c();
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4ffe4(uStack_58);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101a781ac; end: 101a78257;  */

void FUN_101a781ac(undefined8 param_1,code *param_2)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  pcStack_48 = FUN_101a78798;
  uStack_40 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x42000000;
  uStack_58 = 0x101a78820;
  puStack_50 = &UNK_110435290;
  ppuVar1 = &puStack_68;
  func_0x000107c60bc4(ppuVar1);
  func_0x000107c43ecc(uStack_38);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c615e8(uStack_38);
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 101a78258; end: 101a785a7;  */

void FUN_101a78258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar1 = &UNK_1104352c8;
  func_0x000107c613fc(&UNK_1104352c8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_7);
  func_0x0001000d224c(&uStack_68);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_6,param_7);
  puVar2 = &UNK_1104352f0;
  func_0x000107c613fc(&UNK_1104352f0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101a788e8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  pcStack_78 = FUN_101a788f4;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_100ff4e14;
  puStack_80 = &UNK_110435308;
  ppuVar3 = &puStack_98;
  puStack_70 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_70;
  func_0x000107c6157c(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c518ec(uStack_68);
  func_0x000107c61574(puVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uStack_68);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  return;
}



/* Entry: 101a785a8; end: 101a78707;  */

void FUN_101a785a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_58);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_6,param_7);
  puVar1 = &UNK_1104353b8;
  func_0x000107c613fc(&UNK_1104353b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = 0x101a78974;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  uStack_68 = 0x101a789a8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_100ff4e14;
  puStack_70 = &UNK_1104353d0;
  ppuVar2 = &puStack_88;
  puStack_60 = puVar1;
  func_0x000107c60bc4(ppuVar2);
  puVar1 = puStack_60;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c518ec(uStack_58);
  func_0x000107c61574(param_1);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  return;
}



/* Entry: 101a78708; end: 101a78797;  */

void FUN_101a78708(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  pcStack_38 = FUN_101a78798;
  uStack_30 = 0;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0x42000000;
  uStack_48 = 0x101a78820;
  puStack_40 = &UNK_1104353f8;
  ppuVar1 = &puStack_58;
  func_0x000107c60bc4(ppuVar1);
  func_0x000107c43ecc(uStack_28,param_2,ppuVar1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c615e8(uStack_28);
  return;
}



/* Entry: 101a78798; end: 101a7887b;  */

void FUN_101a78798(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar2 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar2 != 0) {
    if ((long)uVar2 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a78820);
      (*pcVar1)();
    }
    if ((param_1 & 0xc000000000000001) != 0) {
      uVar3 = 0;
      do {
        func_0x0001014b749c(uVar3,param_1);
        func_0x000107c615e8();
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
  }
  return;
}



/* Entry: 101a7887c; end: 101a788bf;  */

void FUN_101a7887c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a788c0; end: 101a788f3;  */

void FUN_101a788c0(void)

{
  code *pcVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x0001000d224c(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),pcVar1,
                      *(undefined8 *)(unaff_x20 + 0x20));
  pcStack_48 = FUN_101a78798;
  uStack_40 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x42000000;
  uStack_58 = 0x101a78820;
  puStack_50 = &UNK_110435290;
  ppuVar2 = &puStack_68;
  func_0x000107c60bc4(ppuVar2);
  func_0x000107c43ecc(uStack_38);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(uStack_38);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



/* Entry: 101a788f4; end: 101a78913;  */

void FUN_101a788f4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101a78914; end: 101a7894f;  */

void FUN_101a78914(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a78950; end: 101a789ab;  */

void FUN_101a78950(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_58);
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000107c5fadc(uVar5,uVar3);
  func_0x000107c5fadc(uVar6,uVar9);
  puVar7 = &UNK_1104353b8;
  func_0x000107c613fc(&UNK_1104353b8,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x101a78974;
  *(undefined8 *)(puVar7 + 0x18) = uVar1;
  uStack_68 = 0x101a789a8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_100ff4e14;
  puStack_70 = &UNK_1104353d0;
  ppuVar8 = &puStack_88;
  puStack_60 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar7 = puStack_60;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar7);
  func_0x000107c518ec(uStack_58);
  func_0x000107c61574(uVar1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 101a789ac; end: 101a78a67;  */

undefined8 FUN_101a789ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_2;
  FUN_101a78b88(param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101a78a68; end: 101a78ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a78a68(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11305b998);
  lVar1 = 0;
  func_0x000101a788a0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  func_0x000107c6157c(uVar2);
  FUN_101a78080(0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar1);
  return;
}



/* Entry: 101a78ac4; end: 101a78b1b; +[_TtC46SCScheduleIncompleteAuthenticationNotification44RevokeLocallyScheduledNotificationEntryPoint attributedTask] */

void FUN_101a78ac4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100079360(0);
  uVar1 = 0;
  func_0x0001009acf5c(0);
  func_0x0001009acf7c();
  uVar2 = uVar1;
  func_0x0001009acfd0();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101a78b1c; end: 101a78b7b; -[_TtC46SCScheduleIncompleteAuthenticationNotification44RevokeLocallyScheduledNotificationEntryPoint init] */

void FUN_101a78b1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCScheduleIncompleteAuthenticationNotification.RevokeLocallyScheduledNotificationEntryPoint"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a78b48);
  (*pcVar1)();
}



/* Entry: 101a78b7c; end: 101a78b87;  */

void FUN_101a78b7c(void)

{
  return;
}



/* Entry: 101a78b88; end: 101a78cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a78b88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  func_0x000107c614f0();
  lVar1 = *(long *)(param_1 + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c615f0();
    func_0x000107c44424();
    func_0x000107c61180();
    puVar3 = &UNK_110435448;
    func_0x000107c613fc(&UNK_110435448,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    pcStack_70 = FUN_101a78cdc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110435460;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615ec(lVar1,2);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101a78cbc; end: 101a78cdb;  */

void FUN_101a78cbc(void)

{
  func_0x000107c61168(&PTR_PTR_1127f23e0);
  return;
}



/* Entry: 101a78cdc; end: 101a78cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a78cdc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11305b998);
  lVar1 = 0;
  func_0x000101a788a0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  func_0x000107c6157c(uVar2);
  FUN_101a78080(0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar1);
  return;
}



/* Entry: 101a78d00; end: 101a78ebb;  */

undefined8 FUN_101a78d00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_68 = param_2;
  func_0x000107c5f824();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c613fc();
  lVar2 = param_3;
  func_0x000107c3e270();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(uStack_68);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
  }
  else {
    lVar2 = lVar3;
    func_0x000107c4f800(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c5f818(puVar7);
    puVar4 = &UNK_1104354a0;
    func_0x000107c613fc(&UNK_1104354a0,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = param_4;
    uVar5 = 0;
    func_0x000100964acc(0);
    func_0x000107c61174(param_4);
    func_0x000100905790(puVar7,FUN_101a78fbc,puVar4,uVar5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uStack_68);
    func_0x000107c61170(param_3);
    func_0x000107c61170(lVar2);
    func_0x000107c61574(puVar4);
    (**(code **)(lVar6 + 8))(puVar7,lVar1);
  }
  return unaff_x20;
}



/* Entry: 101a78ebc; end: 101a78fbb;  */

/* WARNING: Possible PIC construction at 0x000101a78f90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a78f94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a78ebc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + _DAT_11305b998);
  lVar1 = 0;
  func_0x000101a788a0();
  uVar4 = 0x18;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  func_0x000107c6157c();
  func_0x000101a794d8();
  uVar2 = uVar6;
  uVar5 = uVar4;
  func_0x000101a794f8();
  puVar3 = &UNK_1104354e0;
  func_0x000107c613fc(&UNK_1104354e0,0x48,7);
  *(long *)(puVar3 + 0x10) = lVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar2;
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  *(undefined8 *)(puVar3 + 0x38) = 0x73696765725f6572;
  *(undefined8 *)(puVar3 + 0x40) = 0xef6e6f6974617274;
  func_0x000107c6157c(lVar1);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  FUN_101a78080(FUN_101a79000,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar1);
  return;
}



/* Entry: 101a78fbc; end: 101a78fdf;  */

/* WARNING: Possible PIC construction at 0x000101a78f90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a78f94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a78fbc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11305b998);
  lVar1 = 0;
  func_0x000101a788a0();
  uVar4 = 0x18;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  func_0x000107c6157c();
  func_0x000101a794d8();
  uVar2 = uVar6;
  uVar5 = uVar4;
  func_0x000101a794f8();
  puVar3 = &UNK_1104354e0;
  func_0x000107c613fc(&UNK_1104354e0,0x48,7);
  *(long *)(puVar3 + 0x10) = lVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar2;
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  *(undefined8 *)(puVar3 + 0x38) = 0x73696765725f6572;
  *(undefined8 *)(puVar3 + 0x40) = 0xef6e6f6974617274;
  func_0x000107c6157c(lVar1);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  FUN_101a78080(FUN_101a79000,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar1);
  return;
}



/* Entry: 101a78fe0; end: 101a78fff;  */

void FUN_101a78fe0(void)

{
  func_0x000107c61168(&PTR_PTR_112df2ee0);
  return;
}



/* Entry: 101a79000; end: 101a79013;  */

void FUN_101a79000(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar4 = &UNK_1104352c8;
  func_0x000107c613fc(&UNK_1104352c8,0x48,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  *(undefined8 *)(puVar4 + 0x20) = uVar2;
  *(undefined8 *)(puVar4 + 0x28) = uVar6;
  *(undefined8 *)(puVar4 + 0x30) = uVar3;
  *(undefined8 *)(puVar4 + 0x38) = uVar7;
  *(undefined8 *)(puVar4 + 0x40) = uVar10;
  func_0x000107c6157c(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar10);
  func_0x0001000d224c(&uStack_68);
  func_0x000107c5fadc(uVar5,uVar2);
  func_0x000107c5fadc(uVar6,uVar3);
  func_0x000107c5fadc(uVar7,uVar10);
  puVar8 = &UNK_1104352f0;
  func_0x000107c613fc(&UNK_1104352f0,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x101a788e8;
  *(undefined **)(puVar8 + 0x18) = puVar4;
  pcStack_78 = FUN_101a788f4;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_100ff4e14;
  puStack_80 = &UNK_110435308;
  ppuVar9 = &puStack_98;
  puStack_70 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar8 = puStack_70;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar8);
  func_0x000107c518ec(uStack_68);
  func_0x000107c61574(puVar4);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c615e8(uStack_68);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 101a79014; end: 101a7937b;  */

undefined8 FUN_101a79014(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_68 = param_2;
  func_0x000107c5f824();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c613fc();
  lVar2 = param_3;
  func_0x000107c3e270();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(uStack_68);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
  }
  else {
    lVar2 = lVar3;
    func_0x000107c4f800(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c5f818(puVar7);
    puVar4 = &UNK_110435510;
    func_0x000107c613fc(&UNK_110435510,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = param_4;
    uVar5 = 0;
    func_0x000100964acc(0);
    func_0x000107c61174(param_4);
    func_0x000100905790(puVar7,FUN_101a7947c,puVar4,uVar5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uStack_68);
    func_0x000107c61170(param_3);
    func_0x000107c61170(lVar2);
    func_0x000107c61574(puVar4);
    (**(code **)(lVar6 + 8))(puVar7,lVar1);
  }
  return unaff_x20;
}



/* Entry: 101a7937c; end: 101a7947b;  */

/* WARNING: Possible PIC construction at 0x000101a79450: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a79454) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a7937c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + _DAT_11305b998);
  lVar1 = 0;
  func_0x000101a788a0();
  uVar4 = 0x18;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  func_0x000107c6157c();
  func_0x000101a794d8();
  uVar2 = uVar6;
  uVar5 = uVar4;
  func_0x000101a794f8();
  puVar3 = &UNK_110435578;
  func_0x000107c613fc(&UNK_110435578,0x48,7);
  *(long *)(puVar3 + 0x10) = lVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar2;
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  *(undefined8 *)(puVar3 + 0x38) = 0x73696765725f6572;
  *(undefined8 *)(puVar3 + 0x40) = 0xef6e6f6974617274;
  func_0x000107c6157c(lVar1);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  FUN_101a78080(0x101a794c0,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar1);
  return;
}



/* Entry: 101a7947c; end: 101a7949f;  */

/* WARNING: Possible PIC construction at 0x000101a79450: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a79454) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a7947c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11305b998);
  lVar1 = 0;
  func_0x000101a788a0();
  uVar4 = 0x18;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  func_0x000107c6157c();
  func_0x000101a794d8();
  uVar2 = uVar6;
  uVar5 = uVar4;
  func_0x000101a794f8();
  puVar3 = &UNK_110435578;
  func_0x000107c613fc(&UNK_110435578,0x48,7);
  *(long *)(puVar3 + 0x10) = lVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar2;
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  *(undefined8 *)(puVar3 + 0x38) = 0x73696765725f6572;
  *(undefined8 *)(puVar3 + 0x40) = 0xef6e6f6974617274;
  func_0x000107c6157c(lVar1);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  FUN_101a78080(0x101a794c0,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar1);
  return;
}



/* Entry: 101a794a0; end: 101a794bf;  */

void FUN_101a794a0(void)

{
  func_0x000107c61168(&PTR_PTR_112df2f78);
  return;
}



/* Entry: 101a794c0; end: 101a79517;  */

void FUN_101a794c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar4 = &UNK_1104352c8;
  func_0x000107c613fc(&UNK_1104352c8,0x48,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  *(undefined8 *)(puVar4 + 0x20) = uVar2;
  *(undefined8 *)(puVar4 + 0x28) = uVar6;
  *(undefined8 *)(puVar4 + 0x30) = uVar3;
  *(undefined8 *)(puVar4 + 0x38) = uVar7;
  *(undefined8 *)(puVar4 + 0x40) = uVar10;
  func_0x000107c6157c(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar10);
  func_0x0001000d224c(&uStack_68);
  func_0x000107c5fadc(uVar5,uVar2);
  func_0x000107c5fadc(uVar6,uVar3);
  func_0x000107c5fadc(uVar7,uVar10);
  puVar8 = &UNK_1104352f0;
  func_0x000107c613fc(&UNK_1104352f0,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x101a788e8;
  *(undefined **)(puVar8 + 0x18) = puVar4;
  pcStack_78 = FUN_101a788f4;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_100ff4e14;
  puStack_80 = &UNK_110435308;
  ppuVar9 = &puStack_98;
  puStack_70 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar8 = puStack_70;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar8);
  func_0x000107c518ec(uStack_68);
  func_0x000107c61574(puVar4);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c615e8(uStack_68);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  return;
}


