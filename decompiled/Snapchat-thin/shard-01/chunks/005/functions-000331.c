/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010e8778; end: 1010e8783; -[SCLensContentReadinessApiPluginEntryPoint asyncTaskCompletionAnnouncerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e8778(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5d0f8;
  func_0x000107c61428(param_1 + _DAT_112d5d0f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010e8784; end: 1010e87c7;  */

void FUN_1010e8784(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1010e87c8; end: 1010e87d3; -[SCLensContentReadinessApiPluginEntryPoint setAsyncTaskCompletionAnnouncerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e87c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5d0f8;
  func_0x000107c61428(param_1 + _DAT_112d5d0f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010e87d4; end: 1010e8827;  */

void FUN_1010e87d4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010e8828; end: 1010e899f;  */

/* WARNING: Possible PIC construction at 0x0001010e8900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010e8910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010e8978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010e8968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010e897c) */
/* WARNING: Removing unreachable block (ram,0x0001010e8914) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001010e8904) */
/* WARNING: Removing unreachable block (ram,0x0001010e896c) */

void FUN_1010e8828(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c5b3b4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3fa0c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3e278();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar4 = 0;
        FUN_1010e866c();
        func_0x000107c613fc();
        *(long *)(lVar4 + 0x20) = lVar3;
        *(long *)(lVar4 + 0x28) = unaff_x20;
        *(long *)(lVar4 + 0x10) = lVar1;
        *(long *)(lVar4 + 0x18) = lVar2;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c61174(unaff_x20);
        FUN_1010e83ac();
        lVar1 = unaff_x20;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1010e89a0; end: 1010e89c7; -[SCLensContentReadinessApiPluginEntryPoint begin] */

void FUN_1010e89a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010e8828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010e89c8; end: 1010e8a0b; -[SCLensContentReadinessApiPluginEntryPoint end] */

void FUN_1010e89c8(undefined8 param_1)

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



/* Entry: 1010e8a0c; end: 1010e8c77;  */

void FUN_1010e8a0c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    if ((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef10dbaa0)) {
      uVar2 = 0xd000000000000011;
      func_0x000107c605b8(0xd000000000000011,0x800000010ef24560,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
           (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53414();
        }
        else {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef10dfd50)) &&
             (func_0x000107c605b8(0xd000000000000024,0x800000010ef202b0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "LensContentReadinessApiPlugin/SCLensContentReadinessApiPluginEntryPoint.swift"
                                ,0x4d,2,0x32,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1010e8c78);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5295c();
        }
        goto LAB_1010e8a9c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59450();
  }
LAB_1010e8a9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1010e8c78; end: 1010e8d23; -[SCLensContentReadinessApiPluginEntryPoint setValue:forIvarName:] */

void FUN_1010e8c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1010e8a0c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1010e8d24; end: 1010e8dbf; -[SCLensContentReadinessApiPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e8d24(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d5d0e0,0);
  func_0x000107c61614(param_1 + _DAT_112d5d0e8,0);
  func_0x000107c61614(param_1 + _DAT_112d5d0f0,0);
  func_0x000107c61614(param_1 + _DAT_112d5d0f8,0);
  *(undefined8 *)(param_1 + _DAT_112d5d100) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010e8dc0; end: 1010e8df3;  */

void FUN_1010e8dc0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010e8df4; end: 1010e8e5b; -[SCLensContentReadinessApiPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e8df4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d5d0e0);
  func_0x000107c61610(param_1 + _DAT_112d5d0e8);
  func_0x000107c61610(param_1 + _DAT_112d5d0f0);
  func_0x000107c61610(param_1 + _DAT_112d5d0f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5d100));
  return;
}



/* Entry: 1010e8e5c; end: 1010e8e7b;  */

void FUN_1010e8e5c(void)

{
  func_0x000107c61168(&PTR_PTR_1127af4e0);
  return;
}



/* Entry: 1010e8e7c; end: 1010e8eb3;  */

void FUN_1010e8e7c(void)

{
  undefined8 uVar1;
  
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  uVar1 = 0x21;
  func_0x0001044e4b78();
  uRam00000001137ff208 = uVar1;
  return;
}



/* Entry: 1010e8eb4; end: 1010e924b;  */

void FUN_1010e8eb4(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  FUN_100f0c488();
  func_0x000107c61534();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  if (lRam0000000112d5d130 != -1) {
    func_0x000107c61568(0x112d5d130,FUN_1010e8e7c);
  }
  uVar4 = uRam00000001137ff208;
  *(undefined8 *)(param_1 + 0x20) = uRam00000001137ff208;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar3 = 1;
  func_0x000107c602e8();
  func_0x000107c61174(uVar4);
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010e908c);
      (*pcVar2)();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar4 = 0;
    FUN_100f060ac(0,param_1);
  }
  lVar1 = lVar3 + 0x38;
  uVar5 = *(ulong *)(lVar3 + 0x28);
  func_0x000107c60114();
  uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
  uVar6 = uVar5 >> 6;
  uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
  uVar8 = 1L << (uVar5 & 0x3f);
  if ((uVar8 & uVar7) != 0) {
    func_0x0001044e4d64(0);
    do {
      uVar7 = *(ulong *)(*(long *)(lVar3 + 0x30) + uVar5 * 8);
      func_0x000107c61174();
      uVar6 = uVar7;
      func_0x000107c60118();
      func_0x000107c61170(uVar7);
      if ((uVar6 & 1) != 0) {
        func_0x000107c61170(uVar4);
        goto LAB_1010e9020;
      }
      uVar5 = uVar5 + 1 & ~uVar9;
      uVar6 = uVar5 >> 6;
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
      uVar8 = 1L << (uVar5 & 0x3f);
    } while ((uVar8 & uVar7) != 0);
  }
  *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
  *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar5 * 8) = uVar4;
  if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010e9088);
    (*pcVar2)();
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_1010e9020:
  func_0x000107c61588(param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c61408(param_1 + 0x20,uVar10,uVar4);
  lRam00000001137ff210 = lVar3;
  return;
}



/* Entry: 1010e924c; end: 1010e92eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1010e924c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x0001000285a8(0x112d5d1d8,&UNK_10d923a70);
  func_0x000107c4b3ac();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x0001000bda74();
  func_0x000107c61170(param_1);
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fa6468);
  lVar2 = 0;
  FUN_1010eab7c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  func_0x000107c6157c(uVar3);
  return lVar2;
}



/* Entry: 1010e92ec; end: 1010e92f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1010e92ec(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d5d1d8,&UNK_10d923a70);
  func_0x000107c4b3ac();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_112fa6468);
  lVar2 = 0;
  FUN_1010eab7c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  func_0x000107c6157c(uVar3);
  return lVar2;
}



/* Entry: 1010e92f4; end: 1010e932b;  */

void FUN_1010e92f4(long param_1)

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



/* Entry: 1010e932c; end: 1010e9363;  */

void FUN_1010e932c(long param_1,long param_2)

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



/* Entry: 1010e9364; end: 1010e952f;  */

undefined * FUN_1010e9364(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (lRam0000000112d5d138 != -1) {
    func_0x000107c61568(0x112d5d138,FUN_1010e8eb4);
  }
  uVar8 = uRam00000001137ff210;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,2,0);
  uVar3 = *(ulong *)(puVar5 + 0x10);
  uVar10 = *(ulong *)(puVar5 + 0x18);
  uVar11 = uVar10 >> 1;
  lVar1 = uVar3 + 1;
  if (uVar11 <= uVar3) {
    func_0x000100403514(1 < uVar10,lVar1,1);
    uVar10 = *(ulong *)(puVar5 + 0x18);
    uVar11 = uVar10 >> 1;
  }
  *(long *)(puVar5 + 0x10) = lVar1;
  *(undefined8 *)(puVar5 + uVar3 * 0x10 + 0x20) = 0x6b7361745f746567;
  *(undefined8 *)(puVar5 + uVar3 * 0x10 + 0x28) = 0xef7375746174735f;
  lVar2 = uVar3 + 2;
  if ((long)uVar11 < lVar2) {
    func_0x000100403514(1 < uVar10,lVar2,1);
  }
  *(long *)(puVar5 + 0x10) = lVar2;
  *(undefined8 *)(puVar5 + lVar1 * 0x10 + 0x20) = 0x6b7361745f746573;
  *(undefined8 *)(puVar5 + lVar1 * 0x10 + 0x28) = 0xef7375746174735f;
  puVar4 = puVar5;
  func_0x000100403a6c(puVar5);
  func_0x000107c61574(puVar5);
  puVar5 = PTR_PTR_1126b0260;
  func_0x000107c610f8(PTR_PTR_1126b0260);
  uVar6 = 0;
  func_0x0001044e4d64(0);
  uVar7 = uVar6;
  FUN_100f06a9c();
  func_0x000107c5fe08(uVar8,uVar6,uVar7);
  puVar9 = puVar4;
  func_0x000107c5fe08(puVar4,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar4);
  func_0x000107c48360(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar9);
  return puVar5;
}



/* Entry: 1010e9530; end: 1010e954f;  */

void FUN_1010e9530(void)

{
  func_0x000107c61168(&PTR_PTR_112d5d180);
  return;
}



/* Entry: 1010e9550; end: 1010e958b;  */

void FUN_1010e9550(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1010e958c; end: 1010ea36f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1010e958c(undefined *param_1,code *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  code *pcVar13;
  undefined8 *unaff_x20;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar14 = *unaff_x20;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (lRam0000000112d5d130 != -1) {
    param_2 = FUN_1010e8e7c;
    func_0x000107c61568(0x112d5d130);
  }
  puVar3 = (undefined *)(ulong)*(byte *)(lRam00000001137ff208 + _DAT_113080f70);
  func_0x0001044e388c();
  if (param_1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010e9ca0);
    (*pcVar1)();
  }
  puVar6 = param_1;
  pcVar1 = param_2;
  func_0x000107c5b6c0();
  func_0x000107c61180();
  puVar4 = puVar6;
  func_0x000107c5faec();
  pcVar13 = pcVar1;
  func_0x000107c61170(puVar6);
  if (puVar3 == puVar4 && param_2 == pcVar1) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(pcVar1);
LAB_1010e9678:
    puVar3 = param_1;
    func_0x000107c428b4(param_1);
    func_0x000107c61180();
    puVar6 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
    uVar5 = 0x112d3cde0;
    func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
    func_0x000107c61538();
    func_0x000107c604c4();
    func_0x000107c6142c(pcVar13);
    if (1 < uVar5) goto LAB_1010e97ac;
    puVar3 = param_1;
    func_0x000107c403fc();
    if ((((ulong)puVar3 & 1) == 0) && (puVar3 = param_1, func_0x000107c403f4(), (int)puVar3 == 0)) {
      func_0x0001000d224c(&puStack_90);
      puVar3 = puStack_90;
      if (puStack_90 != (undefined *)0x0) {
        puVar4 = param_1;
        func_0x000107c4b678();
        func_0x000107c61180();
        if (puVar4 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar6 = (undefined *)0x0;
          FUN_1010eab3c(0,0x112d550a8,&PTR_PTR_1126b1d00);
          puVar15 = puVar4;
          func_0x000107c5fc54(puVar4,puVar6);
          func_0x000107c61170(puVar4);
        }
        puVar4 = puVar15;
        FUN_1010ea818();
        func_0x000107c6142c(puVar15);
        puVar15 = param_1;
        func_0x000107c5b6c0();
        func_0x000107c61180();
        puVar8 = puVar6;
        if (puVar15 == (undefined *)0x0) {
          func_0x000107c5faec();
          puVar8 = puVar6;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar6);
        }
        puVar7 = param_1;
        func_0x000107c428b4();
        func_0x000107c61180();
        puVar6 = puVar8;
        if (puVar7 == (undefined *)0x0) {
          func_0x000107c5faec();
          puVar6 = puVar8;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar8);
        }
        puVar8 = param_1;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (puVar8 == (undefined *)0x0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar6);
        }
        func_0x000107c4a558();
        puVar9 = param_1;
        func_0x000107c4e33c();
        func_0x000107c61180();
        puVar16 = PTR___sSSSHsWP_11034da90;
        puVar6 = PTR___sSSN_11034da80;
        puVar10 = puVar9;
        func_0x000107c5f9e8();
        func_0x000107c61170(puVar9);
        puVar9 = puVar10;
        func_0x000107c5f9dc(puVar10,puVar6,puVar6,puVar16);
        func_0x000107c6142c(puVar10);
        puVar16 = param_1;
        func_0x000107c3eb80();
        func_0x000107c61180();
        if (puVar16 == (undefined *)0x0) {
          puVar16 = (undefined *)0x0;
          if (puVar4 == (undefined *)0x0) goto LAB_1010e9b8c;
LAB_1010e9b4c:
          uVar11 = 0;
          FUN_1010eab3c(0,0x112d5d238,&PTR_PTR_1126b1cf0);
          puVar6 = puVar4;
          func_0x000107c5fc48(puVar4,uVar11);
          func_0x000107c6142c(puVar4);
        }
        else {
          puVar10 = puVar16;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar16);
          puVar16 = puVar10;
          func_0x000107c5ee20(puVar10,puVar6);
          func_0x00010006c090(puVar10,puVar6);
          if (puVar4 != (undefined *)0x0) goto LAB_1010e9b4c;
LAB_1010e9b8c:
          puVar6 = (undefined *)0x0;
        }
        puVar4 = &UNK_1103838e8;
        func_0x000107c613fc(&UNK_1103838e8,0x30,7);
        *(undefined8 **)(puVar4 + 0x10) = unaff_x20;
        *(undefined **)(puVar4 + 0x18) = param_1;
        *(undefined **)(puVar4 + 0x20) = puVar2;
        *(undefined8 *)(puVar4 + 0x28) = uVar14;
        pcStack_70 = FUN_1010eaaf8;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        uStack_80 = 0x1010ea240;
        puStack_78 = &UNK_110383900;
        ppuVar12 = &puStack_90;
        puStack_68 = puVar4;
        func_0x000107c60bc4();
        puVar4 = puStack_68;
        func_0x000107c6157c(unaff_x20);
        func_0x000107c61174(param_1);
        func_0x000107c61174(puVar2);
        func_0x000107c61574(puVar4);
        func_0x000107c445b8(puVar3);
        func_0x000107c615e8(puVar3);
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c61170(puVar15);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar16);
        goto LAB_1010e9898;
      }
      uVar11 = 0xd00000000000001d;
      func_0x0001007d6c6c(3,0xd00000000000001d,0x800000010ef26150,uVar14,&PTR_DAT_110383928);
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
      func_0x000107c50374();
      func_0x000107c61180();
      if (param_1 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar11);
      }
      puVar6 = PTR_PTR_1126b0278;
      func_0x000107c610f8(PTR_PTR_1126b0278);
      puVar4 = puVar3;
      func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
    }
    else {
      uVar11 = 0xd00000000000004e;
      func_0x0001007d6c6c(3,0xd00000000000004e,0x800000010ef26170,uVar14,&PTR_DAT_110383928);
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
      func_0x000107c50374();
      func_0x000107c61180();
      if (param_1 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar11);
      }
      puVar6 = PTR_PTR_1126b0278;
      func_0x000107c610f8(PTR_PTR_1126b0278);
      puVar4 = puVar3;
      func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
    }
  }
  else {
    pcVar13 = param_2;
    func_0x000107c605b8(puVar3,param_2,puVar4,pcVar1,0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(pcVar1);
    if (((ulong)puVar3 & 1) != 0) goto LAB_1010e9678;
LAB_1010e97ac:
    uVar11 = 0xd000000000000031;
    func_0x0001007d6c6c(3,0xd000000000000031,0x800000010ef260f0,uVar14,&PTR_DAT_110383928);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c50374();
    func_0x000107c61180();
    if (param_1 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar11);
    }
    puVar6 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    puVar4 = puVar3;
    func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c48368(puVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar4);
  func_0x000107c4d664(puVar2);
  func_0x000107c6142c(puVar3);
LAB_1010e9898:
  func_0x000107c61170(puVar6);
  return puVar2;
}



/* Entry: 1010ea370; end: 1010ea3cb; -[_TtC23LensDailyGamesApiPlugin30LensDailyGamesApiPluginHandler handleRequest:] */

void FUN_1010ea370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_1010e958c(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1010ea3cc; end: 1010ea3cf; -[_TtC23LensDailyGamesApiPlugin30LensDailyGamesApiPluginHandler reset] */

void FUN_1010ea3cc(void)

{
  return;
}



/* Entry: 1010ea3d0; end: 1010ea3fb;  */

void FUN_1010ea3d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010ea3fc; end: 1010ea41f;  */

void FUN_1010ea3fc(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001010ea40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1010ea420; end: 1010ea653;  */

void FUN_1010ea420(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1010eab3c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1010ea654; end: 1010ea6cb;  */

void FUN_1010ea654(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1010ea6cc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1010ea6cc; end: 1010ea817;  */

undefined *
FUN_1010ea6cc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010ea818);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_5;
    FUN_1010ea420(param_5,param_6,param_7,param_8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1010eab3c(0,param_5,param_6);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1010ea818; end: 1010eaaf7;  */

undefined * FUN_1010ea818(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lStack_80 = *(long *)(lVar2 + -8);
  lStack_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar2 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    puStack_68 = (undefined *)0x0;
  }
  else {
    uStack_a0 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uStack_a0 + 0x10);
    }
    else {
      uVar7 = param_1;
      if (-1 < (long)param_1) {
        uVar7 = uStack_a0;
      }
      func_0x000107c60480();
    }
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar7 != 0) {
      FUN_1010ea654(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010eaaf8);
        (*pcVar1)();
      }
      uVar10 = 0;
      uStack_88 = param_1 & 0xc000000000000001;
      uStack_98 = uVar7;
      uStack_90 = param_1;
      do {
        puVar5 = puStack_68;
        uVar7 = uStack_90;
        if (uStack_88 == 0) {
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1010eaadc);
            (*pcVar1)();
          }
          if (*(ulong *)(uStack_a0 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1010eaae0);
            (*pcVar1)();
          }
          uVar3 = *(ulong *)(uStack_90 + uVar10 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar10;
          func_0x0001010ea498(uVar10,uStack_90,&PTR_PTR_1126b1d00,0x112d550a8);
        }
        uVar12 = uVar3;
        func_0x000107c5d7e8();
        func_0x000107c61180();
        func_0x000107c5edb4(lVar2);
        func_0x000107c61170(uVar12);
        uVar12 = uVar3;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (uVar12 == 0) {
          uVar11 = 0;
          uVar12 = 0xc000000000000000;
          uVar6 = uVar7;
        }
        else {
          uVar11 = uVar12;
          func_0x000107c5ee30();
          uVar6 = uVar7;
          func_0x000107c61170(uVar12);
          uVar12 = uVar7;
        }
        uVar7 = uVar3;
        func_0x000107c4a804();
        func_0x000107c61180();
        puStack_70 = puVar5;
        if (uVar7 == 0) {
          uVar8 = 0;
          uVar6 = 0xf000000000000000;
        }
        else {
          uVar8 = uVar7;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar7);
        }
        func_0x000107c5ed90();
        uVar4 = uVar11;
        func_0x000107c5ee20(uVar11,uVar12);
        if (uVar6 >> 0x3c < 0xf) {
          uVar9 = uVar8;
          func_0x000107c5ee20(uVar8,uVar6);
          func_0x0001000b44c0(uVar8,uVar6);
        }
        else {
          uVar9 = 0;
        }
        puVar5 = PTR_PTR_1126b1cf0;
        func_0x000107c610f8();
        func_0x000107c49150();
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar9);
        func_0x00010006c090(uVar11,uVar12);
        (**(code **)(lStack_80 + 8))(lVar2,lStack_78);
        func_0x000107c61170(uVar3);
        puStack_68 = puStack_70;
        uVar7 = *(ulong *)(puStack_70 + 0x10);
        if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar7) {
          FUN_1010ea654(1 < *(ulong *)(puStack_70 + 0x18),uVar7 + 1,1);
        }
        uVar10 = uVar10 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        *(undefined **)(puStack_68 + uVar7 * 8 + 0x20) = puVar5;
      } while (uStack_98 != uVar10);
    }
  }
  return puStack_68;
}



/* Entry: 1010eaaf8; end: 1010eab1f;  */

void FUN_1010eaaf8(void)

{
  func_0x0001010e9ca0();
  return;
}



/* Entry: 1010eab20; end: 1010eab3b;  */

void FUN_1010eab20(long param_1,long param_2)

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



/* Entry: 1010eab3c; end: 1010eab7b;  */

void FUN_1010eab3c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1010eab7c; end: 1010eab9b;  */

void FUN_1010eab7c(void)

{
  func_0x000107c61168(&PTR_PTR_112d5d280);
  return;
}



/* Entry: 1010eab9c; end: 1010eae3b;  */

undefined * FUN_1010eab9c(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lStack_78 = *(long *)(lVar3 + -8);
  lStack_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  lVar3 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    puStack_68 = (undefined *)0x0;
  }
  else {
    if (param_1 >> 0x3e == 0) {
      uVar10 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = param_1;
      if (-1 < (long)param_1) {
        uVar10 = param_1 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar10 != 0) {
      func_0x0001010ea690(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010eae3c);
        (*pcVar2)();
      }
      uVar12 = 0;
      uStack_90 = param_1 & 0xc000000000000001;
      uStack_88 = uVar10;
      uStack_80 = param_1;
      do {
        puVar1 = puStack_68;
        uVar10 = uStack_80;
        if (uStack_90 == 0) {
          uVar4 = *(ulong *)(uStack_80 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar12;
          func_0x0001010ea498(uVar12,uStack_80,&PTR_PTR_1126b1cf0,0x112d5d238);
        }
        uVar5 = uVar4;
        func_0x000107c5d7e8();
        func_0x000107c61180();
        func_0x000107c5edb4(lVar3);
        func_0x000107c61170(uVar5);
        uVar5 = uVar4;
        func_0x000107c4a8c4(uVar4);
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x000107c5ee30();
        uVar11 = uVar10;
        func_0x000107c61170(uVar5);
        uVar5 = uVar4;
        func_0x000107c4a804();
        func_0x000107c61180();
        if (uVar5 == 0) {
          uVar9 = 0;
          uVar11 = 0xf000000000000000;
        }
        else {
          uVar9 = uVar5;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar5);
        }
        func_0x000107c5ed90();
        uVar7 = uVar6;
        func_0x000107c5ee20(uVar6,uVar10);
        func_0x00010006c090(uVar6,uVar10);
        if (uVar11 >> 0x3c < 0xf) {
          uVar10 = uVar9;
          func_0x000107c5ee20(uVar9,uVar11);
          func_0x0001000b44c0(uVar9,uVar11);
        }
        else {
          uVar10 = 0;
        }
        puVar8 = PTR_PTR_1126b1d00;
        func_0x000107c610f8();
        func_0x000107c49150();
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar10);
        (**(code **)(lStack_78 + 8))(lVar3,lStack_70);
        uVar10 = *(ulong *)(puVar1 + 0x10);
        puStack_68 = puVar1;
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar10) {
          func_0x0001010ea690(1 < *(ulong *)(puVar1 + 0x18),uVar10 + 1,1);
        }
        uVar12 = uVar12 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar10 + 1;
        *(undefined **)(puStack_68 + uVar10 * 8 + 0x20) = puVar8;
      } while (uStack_88 != uVar12);
    }
  }
  return puStack_68;
}



/* Entry: 1010eae3c; end: 1010eaebb;  */

void FUN_1010eae3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d2f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc36450;
  func_0x000107c61520(&DAT_10dc36450,&UNK_1106bbe20);
  puRam0000000112d5d2f0 = puVar1;
  return;
}



/* Entry: 1010eaebc; end: 1010eaeef;  */

undefined8 FUN_1010eaebc(undefined8 param_1)

{
  (*(code *)&DAT_1039f1ee8)();
  return param_1;
}



/* Entry: 1010eaef0; end: 1010eaefb; -[SCLensDailyGamesApiPluginEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010eaef0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5d308;
  func_0x000107c61428(param_1 + _DAT_112d5d308,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010eaefc; end: 1010eaf07; -[SCLensDailyGamesApiPluginEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010eaefc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5d308;
  func_0x000107c61428(param_1 + _DAT_112d5d308,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010eaf08; end: 1010eaf13; -[SCLensDailyGamesApiPluginEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010eaf08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5d310;
  func_0x000107c61428(param_1 + _DAT_112d5d310,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010eaf14; end: 1010eaf1f; -[SCLensDailyGamesApiPluginEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010eaf14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5d310;
  func_0x000107c61428(param_1 + _DAT_112d5d310,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010eaf20; end: 1010eaf2b; -[SCLensDailyGamesApiPluginEntryPoint remoteApiServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010eaf20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5d318;
  func_0x000107c61428(param_1 + _DAT_112d5d318,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010eaf2c; end: 1010eaf37; -[SCLensDailyGamesApiPluginEntryPoint setRemoteApiServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010eaf2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5d318;
  func_0x000107c61428(param_1 + _DAT_112d5d318,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010eaf38; end: 1010eaf43; -[SCLensDailyGamesApiPluginEntryPoint dailyGameBadgingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010eaf38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5d320;
  func_0x000107c61428(param_1 + _DAT_112d5d320,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010eaf44; end: 1010eaf4f; -[SCLensDailyGamesApiPluginEntryPoint setDailyGameBadgingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010eaf44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5d320;
  func_0x000107c61428(param_1 + _DAT_112d5d320,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010eaf50; end: 1010eaf5b; -[SCLensDailyGamesApiPluginEntryPoint nglStudySettingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010eaf50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5d328;
  func_0x000107c61428(param_1 + _DAT_112d5d328,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010eaf5c; end: 1010eaf9f;  */

void FUN_1010eaf5c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1010eafa0; end: 1010eafab; -[SCLensDailyGamesApiPluginEntryPoint setNglStudySettingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010eafa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5d328;
  func_0x000107c61428(param_1 + _DAT_112d5d328,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010eafac; end: 1010eafff;  */

void FUN_1010eafac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010eb000; end: 1010eb29f;  */

/* WARNING: Possible PIC construction at 0x0001010eb1c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010eb1d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010eb1e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010eb1f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010eb268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010eb278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010eb258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010eb27c) */
/* WARNING: Removing unreachable block (ram,0x0001010eb26c) */
/* WARNING: Removing unreachable block (ram,0x0001010eb1f8) */
/* WARNING: Removing unreachable block (ram,0x0001010eb1e8) */
/* WARNING: Removing unreachable block (ram,0x0001010eb1c8) */
/* WARNING: Removing unreachable block (ram,0x0001010eb25c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010eb000(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  puVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  puVar2 = unaff_x20;
  func_0x000107c3f284();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = unaff_x20;
    func_0x000107c4fe28();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c61170(puVar1);
      puVar1 = puVar2;
    }
    else {
      puVar4 = unaff_x20;
      func_0x000107c411ec();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
        func_0x000107c61170(puVar1);
        puVar1 = puVar2;
      }
      else {
        func_0x000107c4d69c();
        func_0x000107c61180();
        if (unaff_x20 != (undefined *)0x0) {
          FUN_1010e9530(0);
          func_0x000107c613fc();
          uVar5 = *(ulong *)(unaff_x20 + _DAT_1130344b8);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (uVar5 != 0) {
            uVar6 = uVar5;
            func_0x000107c49c0c();
            func_0x000107c615e8(uVar5);
            if ((uVar6 & 1) != 0) {
              puVar7 = PTR_PTR_1126ae720;
              func_0x000107c61168(PTR_PTR_1126ae720);
              puVar2 = &UNK_110383960;
              func_0x000107c613fc(&UNK_110383960,0x20,7);
              *(undefined **)(puVar2 + 0x10) = puVar3;
              *(undefined **)(puVar2 + 0x18) = puVar4;
              pcStack_70 = FUN_1010eb2a0;
              puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_88 = 0x42000000;
              pcStack_80 = FUN_1010e92f4;
              puStack_78 = &UNK_110383978;
              puStack_68 = puVar2;
              func_0x000107c60bc4(&puStack_90);
              puVar2 = puStack_68;
              func_0x000107c61174(puVar3);
              func_0x000107c61174(puVar4);
              func_0x000107c61574(puVar2);
              func_0x000107c3e4fc(puVar7);
              func_0x000107c61180();
              func_0x000107c60bd0(ppuVar8);
              FUN_1010e9364(puVar7);
              func_0x000107c4e9e4(puVar1);
              func_0x000107c61180();
              func_0x000107c4fba8();
              puVar1 = puVar7;
              goto code_r0x000107c61170;
            }
          }
          func_0x000107c61170(unaff_x20);
        }
      }
    }
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1010eb2a0; end: 1010eb2c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1010eb2a0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d5d1d8,&UNK_10d923a70);
  func_0x000107c4b3ac();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_112fa6468);
  lVar2 = 0;
  FUN_1010eab7c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  func_0x000107c6157c(uVar3);
  return lVar2;
}



/* Entry: 1010eb2c4; end: 1010eb2eb; -[SCLensDailyGamesApiPluginEntryPoint begin] */

void FUN_1010eb2c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010eb000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010eb2ec; end: 1010eb32f; -[SCLensDailyGamesApiPluginEntryPoint end] */

void FUN_1010eb2ec(undefined8 param_1)

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



/* Entry: 1010eb330; end: 1010eb613;  */

void FUN_1010eb330(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    uVar2 = 0x49556172656d6163;
    if (((param_2 == 0x49556172656d6163) && (param_3 == -0x12ffff9a8f909cad)) ||
       (func_0x000107c605b8(0x49556172656d6163,0xed000065706f6353,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c530ec();
    }
    else {
      if ((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef10d9dd0)) {
        uVar2 = 0xd000000000000011;
        func_0x000107c605b8(0xd000000000000011,0x800000010ef26230,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10d9db0)) ||
             (func_0x000107c605b8(0xd000000000000018,0x800000010ef26250,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c53de4();
          }
          else {
            uVar2 = 0xd000000000000017;
            if (((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10d9d90)) &&
               (func_0x000107c605b8(0xd000000000000017,0x800000010ef26270,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "LensDailyGamesApiPlugin/SCLensDailyGamesApiPluginEntryPoint.swift"
                                  ,0x41,2,0x37,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1010eb614);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c56a9c();
          }
          goto LAB_1010eb3c0;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57ccc();
    }
  }
LAB_1010eb3c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1010eb614; end: 1010eb6bf; -[SCLensDailyGamesApiPluginEntryPoint setValue:forIvarName:] */

void FUN_1010eb614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1010eb330(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1010eb6c0; end: 1010eb76f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010eb6c0(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d5d308,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5d310,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5d318,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5d320,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5d328,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d5d330) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010eb770; end: 1010eb78f; -[SCLensDailyGamesApiPluginEntryPoint init] */

void FUN_1010eb770(void)

{
  FUN_1010eb6c0();
  return;
}



/* Entry: 1010eb790; end: 1010eb7c3;  */

void FUN_1010eb790(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010eb7c4; end: 1010eb83b; -[SCLensDailyGamesApiPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010eb7c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d5d308);
  func_0x000107c61610(param_1 + _DAT_112d5d310);
  func_0x000107c61610(param_1 + _DAT_112d5d318);
  func_0x000107c61610(param_1 + _DAT_112d5d320);
  func_0x000107c61610(param_1 + _DAT_112d5d328);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5d330));
  return;
}



/* Entry: 1010eb83c; end: 1010eb85b;  */

void FUN_1010eb83c(void)

{
  func_0x000107c61168(&PTR_PTR_1127af5b8);
  return;
}



/* Entry: 1010eb85c; end: 1010eb893;  */

void FUN_1010eb85c(void)

{
  undefined8 uVar1;
  
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  uVar1 = 0x24;
  func_0x0001044e4b78();
  uRam00000001137ff218 = uVar1;
  return;
}



/* Entry: 1010eb894; end: 1010eba6b;  */

void FUN_1010eb894(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  FUN_100f0c488();
  func_0x000107c61534();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  if (lRam0000000112d5d398 != -1) {
    func_0x000107c61568(0x112d5d398,FUN_1010eb85c);
  }
  uVar4 = uRam00000001137ff218;
  *(undefined8 *)(param_1 + 0x20) = uRam00000001137ff218;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar3 = 1;
  func_0x000107c602e8();
  func_0x000107c61174(uVar4);
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010eba6c);
      (*pcVar2)();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar4 = 0;
    FUN_100f060ac(0,param_1);
  }
  lVar1 = lVar3 + 0x38;
  uVar5 = *(ulong *)(lVar3 + 0x28);
  func_0x000107c60114();
  uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
  uVar6 = uVar5 >> 6;
  uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
  uVar8 = 1L << (uVar5 & 0x3f);
  if ((uVar8 & uVar7) != 0) {
    func_0x0001044e4d64(0);
    do {
      uVar7 = *(ulong *)(*(long *)(lVar3 + 0x30) + uVar5 * 8);
      func_0x000107c61174();
      uVar6 = uVar7;
      func_0x000107c60118();
      func_0x000107c61170(uVar7);
      if ((uVar6 & 1) != 0) {
        func_0x000107c61170(uVar4);
        goto LAB_1010eba00;
      }
      uVar5 = uVar5 + 1 & ~uVar9;
      uVar6 = uVar5 >> 6;
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
      uVar8 = 1L << (uVar5 & 0x3f);
    } while ((uVar8 & uVar7) != 0);
  }
  *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
  *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar5 * 8) = uVar4;
  if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010eba68);
    (*pcVar2)();
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_1010eba00:
  func_0x000107c61588(param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c61408(param_1 + 0x20,uVar10,uVar4);
  lRam00000001137ff228 = lVar3;
  return;
}



/* Entry: 1010eba6c; end: 1010ebbc3;  */

void FUN_1010eba6c(void)

{
  long lVar1;
  ulong *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_98 [72];
  
  func_0x0001000285a8(0x112d46b30,&UNK_10d917640);
  lVar7 = 1;
  func_0x000107c602e8();
  puVar5 = PTR_s_nEntryPoint_swift_10ef262b0_0x30_112d5d390;
  uVar4 = uRam0000000112d5d388;
  lVar1 = lVar7 + 0x38;
  func_0x000107c6068c(auStack_98,*(undefined8 *)(lVar7 + 0x28));
  func_0x000107c61434(puVar5);
  puVar8 = auStack_98;
  func_0x000107c5fb58(puVar8,uVar4,puVar5);
  func_0x000107c606a8();
  uVar12 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar13 = (ulong)puVar8 & (uVar12 ^ 0xffffffffffffffff);
  uVar9 = uVar13 >> 6;
  uVar10 = *(ulong *)(lVar1 + uVar9 * 8);
  uVar11 = 1L << (uVar13 & 0x3f);
  if ((uVar11 & uVar10) != 0) {
    do {
      puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar13 * 0x10);
      uVar9 = *puVar2;
      puVar3 = (undefined *)puVar2[1];
      if ((uVar9 == uVar4 && puVar3 == puVar5) ||
         (func_0x000107c605b8(uVar9,puVar3,uVar4,puVar5,0), (uVar9 & 1) != 0)) {
        func_0x000107c6142c(puVar5);
        goto LAB_1010ebb90;
      }
      uVar13 = uVar13 + 1 & ~uVar12;
      uVar9 = uVar13 >> 6;
      uVar10 = *(ulong *)(lVar1 + uVar9 * 8);
      uVar11 = 1L << (uVar13 & 0x3f);
    } while ((uVar11 & uVar10) != 0);
  }
  *(ulong *)(lVar1 + uVar9 * 8) = uVar11 | uVar10;
  puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar13 * 0x10);
  *puVar2 = uVar4;
  puVar2[1] = (ulong)puVar5;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1010ebbc4);
    (*pcVar6)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
LAB_1010ebb90:
  func_0x000100bcb1dc(0x112d5d388);
  lRam00000001137ff220 = lVar7;
  return;
}



/* Entry: 1010ebbc4; end: 1010ebbcb;  */

bool FUN_1010ebbc4(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1010ebbcc; end: 1010ebc2f;  */

void FUN_1010ebbcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return;
}



/* Entry: 1010ebc30; end: 1010ec2ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ebc30(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113082480);
  func_0x000107c61174();
  func_0x000107c3f124();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c5b034();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = uVar15;
  func_0x000107c3dff0();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c40790();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar9 = &UNK_110383a88;
  func_0x000107c613fc(&UNK_110383a88,0x40,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar5;
  *(undefined8 *)(puVar9 + 0x18) = uVar3;
  *(undefined8 *)(puVar9 + 0x20) = uVar7;
  *(undefined8 *)(puVar9 + 0x28) = uVar4;
  *(undefined8 *)(puVar9 + 0x30) = uVar2;
  *(undefined8 *)(puVar9 + 0x38) = uVar6;
  pcStack_70 = FUN_1010ec2f0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1010e92f4;
  puStack_78 = &UNK_110383aa0;
  ppuVar10 = &puStack_90;
  puStack_68 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar9 = puStack_68;
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  func_0x000107c61574(puVar9);
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c4e9e4(uVar15);
  func_0x000107c61180();
  lVar1 = lRam0000000112d5d3a8;
  func_0x000107c61174(puVar8);
  if (lVar1 != -1) {
    func_0x000107c61568(0x112d5d3a8,FUN_1010eb894);
  }
  uVar13 = uRam00000001137ff228;
  if (lRam0000000112d5d3a0 != -1) {
    func_0x000107c61568(0x112d5d3a0,FUN_1010eba6c);
  }
  uVar14 = uRam00000001137ff220;
  puVar9 = PTR_PTR_1126b0260;
  func_0x000107c610f8(PTR_PTR_1126b0260);
  uVar11 = 0;
  func_0x0001044e4d64(0);
  uVar12 = uVar11;
  FUN_100f06a9c();
  func_0x000107c5fe08(uVar13,uVar11,uVar12);
  func_0x000107c5fe08(uVar14,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c48360(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c4fba8(uVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 1010ec2f0; end: 1010ec2ff;  */

void FUN_1010ec2f0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = lVar2;
        func_0x000107c3f2d0();
        func_0x000107c61180();
        lVar5 = lVar4;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar5 != 0) {
          uVar6 = 0x112d5d478;
          func_0x0001000285a8(0x112d5d478,&UNK_10d923b88);
          func_0x0001000bda74(uVar12,uVar6);
          lVar7 = 0;
          func_0x0001010eede0();
          func_0x000107c613fc();
          *(undefined8 *)(lVar7 + 0x10) = uVar12;
          *(long *)(lVar7 + 0x18) = lVar3;
          func_0x000107c615f0(lVar3);
          lVar8 = lVar1;
          func_0x000107c4c18c();
          func_0x000107c61180();
          func_0x0001000285a8(0x112d3b3f8,&UNK_10d904aa0);
          func_0x0001000b637c();
          func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
          func_0x0001000b637c(uVar9);
          uVar12 = 0x112d5d480;
          func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
          pcVar10 = FUN_1010ec300;
          func_0x0001000bfde0(FUN_1010ec300,0,uVar12);
          func_0x000107c61574(uVar9);
          lVar11 = 0;
          FUN_1010edd94();
          func_0x000107c613fc();
          func_0x000107c61614(lVar11 + 0x10,0);
          *(undefined8 *)(lVar11 + 0x38) = 0;
          *(undefined8 *)(lVar11 + 0x40) = 0;
          *(undefined **)(lVar11 + 0x48) = PTR___swiftEmptySetSingleton_11034f1d8;
          *(undefined8 *)(lVar11 + 0x50) = 0;
          uVar12 = 0;
          func_0x00010006a340();
          func_0x000107c613fc();
          func_0x00010006a360();
          *(undefined8 *)(lVar11 + 0x58) = uVar12;
          lVar4 = lVar11 + 0x10;
          func_0x000107c61604(lVar4,lVar5);
          *(long *)(lVar11 + 0x18) = lVar7;
          *(undefined ***)(lVar11 + 0x20) = &PTR_DAT_110383d38;
          *(long *)(lVar11 + 0x28) = lVar3;
          *(long *)(lVar11 + 0x30) = lVar8;
          func_0x0001010ec5e8();
          func_0x000107c615f0(lVar3);
          func_0x000107c6157c(lVar7);
          func_0x000107c615f0(lVar8);
          func_0x0001000c2068(lVar4);
          puVar16 = &UNK_110383af0;
          puVar13 = puVar16;
          func_0x000107c613fc(&UNK_110383af0,0x18,7);
          func_0x000107c61644(puVar13 + 0x10,lVar11);
          puVar14 = &UNK_110383b18;
          func_0x000107c613fc(&UNK_110383b18,0x20,7);
          *(undefined **)(puVar14 + 0x10) = puVar13;
          *(undefined8 *)(puVar14 + 0x18) = uVar17;
          func_0x000107c6157c(lVar11);
          func_0x000107c6157c(uVar17);
          pcVar15 = FUN_1010ec638;
          func_0x000100775358(FUN_1010ec638,puVar14,PTR___sSbN_11034dd40);
          func_0x000107c61574(lVar4);
          func_0x000107c61574(puVar14);
          func_0x000107c613fc(&UNK_110383af0,0x18,7);
          func_0x000107c61644(puVar16 + 0x10,lVar11);
          func_0x000107c61574(lVar11);
          uVar12 = 0x1010ec640;
          puVar14 = puVar16;
          (**(code **)(*(long *)pcVar15 + 0x60))();
          func_0x000107c61574(pcVar15);
          func_0x000107c61574(puVar16);
          func_0x000107c615e8(lVar5);
          func_0x000107c61574(lVar7);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar8);
          func_0x000107c61574(uVar17);
          func_0x000107c61574(pcVar10);
          func_0x000107c615e8(lVar2);
          func_0x000107c615e8(lVar1);
          uVar17 = *(undefined8 *)(lVar11 + 0x38);
          *(undefined8 *)(lVar11 + 0x38) = uVar12;
          *(undefined **)(lVar11 + 0x40) = puVar14;
          func_0x000107c615e8(uVar17);
          return;
        }
        func_0x000107c615e8(lVar1);
        lVar1 = lVar2;
        lVar2 = lVar3;
      }
      func_0x000107c615e8(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c615e8(lVar1);
  }
  FUN_1010ef0f0(0);
  func_0x000107c613fc();
  return;
}



/* Entry: 1010ec300; end: 1010ec51b;  */

void FUN_1010ec300(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined *puStack_68;
  
  uVar13 = *param_2;
  puStack_68 = (undefined *)0x0;
  uVar4 = 0;
  FUN_100c70ba8(0);
  func_0x000107c5fc50(uVar13,&puStack_68,uVar4);
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_68 != (undefined *)0x0) {
    puVar9 = puStack_68;
  }
  if ((ulong)puVar9 >> 0x3e == 0) {
    puVar15 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar9) {
      puVar15 = puVar9;
    }
    func_0x000107c60480();
  }
  if (puVar15 != (undefined *)0x0) {
    puStack_68 = puVar14;
    uVar10 = (ulong)puVar15 & ((long)puVar15 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar10,0);
    if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010ec51c);
      (*pcVar3)();
    }
    if (((ulong)puVar9 & 0xc000000000000001) == 0) {
      puVar17 = (undefined8 *)(puVar9 + 0x20);
      do {
        puVar14 = puStack_68;
        uVar8 = *puVar17;
        func_0x000107c61174();
        func_0x000107c61174();
        uVar4 = uVar8;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar13 = uVar4;
        func_0x000107c5faec();
        uVar12 = uVar10;
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar4);
        uVar2 = *(ulong *)(puVar14 + 0x10);
        uVar1 = uVar2 + 1;
        puStack_68 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar2) {
          uVar12 = uVar1;
          func_0x000100403514(1 < *(ulong *)(puVar14 + 0x18),uVar1,1);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar1;
        *(undefined8 *)(puStack_68 + uVar2 * 0x10 + 0x20) = uVar13;
        *(ulong *)(puStack_68 + uVar2 * 0x10 + 0x28) = uVar10;
        puVar15 = puVar15 + -1;
        uVar10 = uVar12;
        puVar14 = puStack_68;
        puVar17 = puVar17 + 1;
      } while (puVar15 != (undefined *)0x0);
    }
    else {
      puVar16 = (undefined *)0x0;
      do {
        puVar14 = puStack_68;
        puVar5 = puVar16;
        puVar11 = puVar9;
        func_0x000100ff3f88();
        puVar6 = puVar5;
        func_0x000107c615f0();
        func_0x000107c4b1dc();
        func_0x000107c61180();
        puVar7 = puVar6;
        func_0x000107c5faec();
        func_0x000107c615ec(puVar5,2);
        func_0x000107c61170(puVar6);
        uVar10 = *(ulong *)(puVar14 + 0x10);
        puStack_68 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar10) {
          func_0x000100403514(1 < *(ulong *)(puVar14 + 0x18),uVar10 + 1,1);
        }
        puVar16 = puVar16 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar10 + 1;
        *(undefined **)(puStack_68 + uVar10 * 0x10 + 0x20) = puVar7;
        *(undefined **)(puStack_68 + uVar10 * 0x10 + 0x28) = puVar11;
        puVar14 = puStack_68;
      } while (puVar15 != puVar16);
    }
  }
  func_0x000107c6142c(puVar9);
  puVar9 = puVar14;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar14);
  *param_1 = (ulong)puVar9;
  return;
}



/* Entry: 1010ec51c; end: 1010ec543;  */

void FUN_1010ec51c(long param_1,long param_2)

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



/* Entry: 1010ec544; end: 1010ec59f;  */

void FUN_1010ec544(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001010ec59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1010ec5a0; end: 1010ec5bf;  */

void FUN_1010ec5a0(void)

{
  FUN_1010ebc30();
  return;
}



/* Entry: 1010ec5c0; end: 1010ec5c7;  */

undefined8 FUN_1010ec5c0(void)

{
  return 0;
}



/* Entry: 1010ec5c8; end: 1010ec637;  */

void FUN_1010ec5c8(void)

{
  func_0x000107c61168(&PTR_PTR_112d5d3f0);
  return;
}



/* Entry: 1010ec638; end: 1010ec64f;  */

void FUN_1010ec638(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    auStack_70[0] = 0;
    func_0x000100854cb0(auStack_70);
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x58);
    lStack_60 = lVar1;
    uStack_58 = uVar4;
    func_0x000107c6157c(uVar3);
    func_0x000100087bd4(FUN_1010ee1ec,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar3);
    pcVar2 = FUN_1010ec7fc;
    func_0x0001000bfde0(FUN_1010ec7fc,0,PTR___sSbN_11034dd40);
    func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
    func_0x000107c61574(lVar1);
    func_0x000107c61574(pcVar2);
  }
  return;
}



/* Entry: 1010ec650; end: 1010ec6ef;  */

void FUN_1010ec650(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010ec6f0; end: 1010ec6ff;  */

void FUN_1010ec6f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1010ec700; end: 1010ec7fb;  */

void FUN_1010ec700(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    auStack_70[0] = 0;
    func_0x000100854cb0(auStack_70);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x58);
    lStack_60 = param_2;
    uStack_58 = uVar3;
    func_0x000107c6157c(uVar2);
    func_0x000100087bd4(FUN_1010ee1ec,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar2);
    pcVar1 = FUN_1010ec7fc;
    func_0x0001000bfde0(FUN_1010ec7fc,0,PTR___sSbN_11034dd40);
    func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
    func_0x000107c61574(param_2);
    func_0x000107c61574(pcVar1);
  }
  return;
}



/* Entry: 1010ec7fc; end: 1010ec87b;  */

void FUN_1010ec7fc(undefined1 *param_1)

{
  undefined1 auStack_c0 [16];
  undefined1 *puStack_b0;
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined1 auStack_80 [16];
  undefined1 *puStack_70;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  *param_1 = 0;
  puStack_b0 = param_1;
  puStack_90 = param_1;
  puStack_70 = param_1;
  puStack_50 = param_1;
  puStack_30 = param_1;
  func_0x0001008546f4(FUN_1010ee22c,auStack_40,0x1010ee238,auStack_60,FUN_1010ee3c4,auStack_80,
                      0x1010ee244,auStack_a0,0x1010ee3c8,auStack_c0);
  return;
}



/* Entry: 1010ec87c; end: 1010ec90f;  */

void FUN_1010ec87c(char *param_1,long param_2)

{
  char cVar1;
  undefined1 auStack_48 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (cVar1 != '\0') {
      func_0x000107c6157c(*(undefined8 *)(param_2 + 0x58));
      func_0x000100087bd4(FUN_1010ee1c8,param_2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(param_2);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1010ec910; end: 1010ec947;  */

void FUN_1010ec910(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000100b65f90();
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    func_0x000107c3f474();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  }
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1010ec948; end: 1010eca1f;  */

void FUN_1010ec948(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  lVar2 = *(long *)(unaff_x20 + 0x38);
  if (lVar2 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x40);
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar6 = *(code **)(lVar4 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar6)(lVar1,lVar4);
    func_0x000107c615e8(lVar2);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  func_0x000100087bd4(FUN_1010ee3cc);
  func_0x0001010ee1a4(unaff_x20 + 0x10);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  func_0x000107c61574(uVar3);
  func_0x000107c615e8(uVar5);
  return;
}



/* Entry: 1010eca20; end: 1010eca3f;  */

void FUN_1010eca20(void)

{
  FUN_1010ec948();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010eca40; end: 1010ed03f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010eca40(ulong param_1,code *param_2)

{
  char *pcVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  code *pcVar12;
  undefined8 uVar13;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  
  uStack_a8 = *unaff_x20;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  if (lRam0000000112d5d398 != -1) {
    param_2 = FUN_1010eb85c;
    func_0x000107c61568(0x112d5d398);
  }
  uVar4 = (ulong)*(byte *)(lRam00000001137ff218 + _DAT_113080f70);
  func_0x0001044e388c();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010ed040);
    (*pcVar2)();
  }
  uVar5 = param_1;
  pcVar12 = param_2;
  func_0x000107c5b6c0();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5faec();
  pcVar2 = pcVar12;
  func_0x000107c61170(uVar5);
  if (uVar4 == uVar6 && param_2 == pcVar12) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(pcVar12);
LAB_1010ecb54:
    if (lRam0000000112d5d3a0 != -1) {
      pcVar2 = FUN_1010eba6c;
      func_0x000107c61568(0x112d5d3a0,FUN_1010eba6c);
    }
    uVar13 = uRam00000001137ff220;
    uVar4 = param_1;
    func_0x000107c428b4();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    func_0x0001000f66f0(uVar5,pcVar2,uVar13);
    func_0x000107c6142c(pcVar2);
    if ((uVar5 & 1) != 0) {
      uVar4 = param_1;
      func_0x000107c403fc();
      if (((uVar4 & 1) == 0) && (uVar4 = param_1, func_0x000107c403f4(), (int)uVar4 == 0)) {
        uVar4 = param_1;
        func_0x000107c4b678();
        func_0x000107c61180();
        if (uVar4 != 0) {
          uVar13 = 0;
          FUN_1010ee254(0,0x112d550a8,&PTR_PTR_1126b1d00);
          uVar5 = uVar4;
          func_0x000107c5fc54(uVar4,uVar13);
          func_0x000107c61170(uVar4);
          if (uVar5 >> 0x3e == 0) {
            if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 1) {
LAB_1010ecc98:
              if ((uVar5 & 0xc000000000000001) == 0) {
                if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010ed03c);
                  (*pcVar2)();
                }
                uVar13 = *(undefined8 *)(uVar5 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar13 = 0;
                FUN_1010eddd8(0,uVar5,&PTR_PTR_1126b1d00,0x112d550a8);
              }
              func_0x000107c6142c(uVar5);
              func_0x000100087bd4(unaff_x20[0xb],FUN_1010edf94,&puStack_a0,PTR___sytN_11034f1b0 + 8)
              ;
              uVar15 = unaff_x20[5];
              uVar7 = uVar13;
              func_0x000107c5d7e8(uVar13);
              func_0x000107c61180();
              func_0x000107c5edb4(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
              func_0x000107c61170(uVar7);
              func_0x000107c5ed90();
              (**(code **)(lVar14 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
              uVar4 = param_1;
              func_0x000107c4b1dc();
              func_0x000107c61180();
              lVar14 = lVar3;
              if (uVar4 == 0) {
                func_0x000107c5faec();
                lVar14 = lVar3;
                func_0x000107c5fadc();
                func_0x000107c6142c(lVar3);
              }
              func_0x000107c4fc98(uVar15);
              func_0x000107c61170(uVar7);
              func_0x000107c61170(uVar4);
              uVar4 = param_1;
              func_0x000107c50374();
              func_0x000107c61180();
              uVar5 = uVar4;
              func_0x000107c5faec();
              func_0x000107c61170(uVar4);
              puVar8 = PTR_PTR_1126ae6b8;
              func_0x000107c61168(PTR_PTR_1126ae6b8);
              puVar9 = &UNK_110383b68;
              func_0x000107c613fc(&UNK_110383b68,0x18,7);
              func_0x000107c61644(puVar9 + 0x10);
              puVar10 = &UNK_110383b90;
              func_0x000107c613fc(&UNK_110383b90,0x40,7);
              *(undefined **)(puVar10 + 0x10) = puVar9;
              *(undefined8 *)(puVar10 + 0x18) = uVar13;
              *(ulong *)(puVar10 + 0x20) = param_1;
              *(ulong *)(puVar10 + 0x28) = uVar5;
              *(long *)(puVar10 + 0x30) = lVar14;
              *(undefined8 *)(puVar10 + 0x38) = uStack_a8;
              puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_98 = 0x42000000;
              ppuVar11 = &puStack_a0;
              func_0x000107c60bc4(ppuVar11);
              func_0x000107c61174(uVar13);
              func_0x000107c61174(param_1);
              func_0x000107c61574(puVar10);
              func_0x000107c408f0(puVar8);
              func_0x000107c61180();
              func_0x000107c61170(uVar13);
              func_0x000107c60bd0(ppuVar11);
              return;
            }
          }
          else {
            uVar4 = uVar5 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar5) {
              uVar4 = uVar5;
            }
            uVar6 = uVar4;
            func_0x000107c60480();
            if ((uVar6 == 1) && (func_0x000107c60480(), uVar4 != 0)) goto LAB_1010ecc98;
          }
          func_0x000107c6142c(uVar5);
        }
        puStack_a0 = (undefined *)0x0;
        uStack_98 = 0xe000000000000000;
        func_0x000107c602fc(0x2c);
        func_0x000107c6142c(uStack_98);
        puStack_a0 = (undefined *)0xd00000000000002a;
        uStack_98 = 0x800000010ef26320;
        uVar4 = param_1;
        func_0x000107c4b678();
        func_0x000107c61180();
        uVar13 = uStack_a8;
        if (uVar4 != 0) {
          uVar13 = 0;
          FUN_1010ee254(0,0x112d550a8,&PTR_PTR_1126b1d00);
          uVar5 = uVar4;
          func_0x000107c5fc54(uVar4,uVar13);
          func_0x000107c61170(uVar4);
          if (uVar5 >> 0x3e != 0) {
            func_0x000107c60480();
          }
          uVar13 = uStack_a8;
          func_0x000107c6142c(uVar5);
        }
        puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar9);
        uVar7 = uStack_98;
        FUN_1010ed040(3,puStack_a0,uStack_98,param_1,uVar13);
        func_0x000107c6142c(uVar7);
        return;
      }
      pcVar1 = "Linked resource is local, unencrypted, or invalid";
      uVar13 = 0xd000000000000031;
      uVar7 = 3;
      goto LAB_1010ecc0c;
    }
  }
  else {
    pcVar2 = param_2;
    func_0x000107c605b8(uVar4,param_2,uVar6,pcVar12,0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(pcVar12);
    if ((uVar4 & 1) != 0) goto LAB_1010ecb54;
  }
  pcVar1 = "Unsupported spec or endpoint";
  uVar7 = 5;
  uVar13 = 0xd00000000000001c;
LAB_1010ecc0c:
  FUN_1010ed040(uVar7,uVar13,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,param_1,uStack_a8);
  return;
}



/* Entry: 1010ed040; end: 1010ed1df;  */

undefined *
FUN_1010ed040(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (param_1 != 1) {
    func_0x000107c602fc(0x26);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    param_2 = 0xd000000000000024;
    func_0x0001007d6c6c(3,0xd000000000000024,0x800000010ef26510,param_5,&PTR_DAT_110383b38);
    func_0x000107c6142c(0x800000010ef26510);
  }
  if (param_4 != 0) {
    func_0x000107c50374();
    func_0x000107c61180();
    if (param_4 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar4 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    puVar5 = puVar3;
    func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar3);
    func_0x000107c48368(puVar4);
    func_0x000107c61170(param_4);
    func_0x000107c61170(puVar5);
    func_0x000107c4a8a4(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010ed1e0);
  (*pcVar1)();
}



/* Entry: 1010ed1e0; end: 1010ed2c7;  */

void FUN_1010ed1e0(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_70 [48];
  
  puVar5 = auStack_70;
  if (*(long *)(*(long *)(param_1 + 0x48) + 0x10) == 0) {
    lVar2 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61534();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010ed2c8);
      (*pcVar1)();
    }
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar3 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    *(long *)(lVar2 + 0x20) = lVar3;
    *(undefined1 **)(lVar2 + 0x28) = puVar5;
    lVar3 = lVar2;
    func_0x000100111634();
    func_0x000107c61588(lVar2);
    func_0x000100bcb1dc((long *)(lVar2 + 0x20));
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar3;
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c504e8(*(undefined8 *)(param_1 + 0x28));
  FUN_1010ec910();
  return;
}



/* Entry: 1010ed2c8; end: 1010edaa3;  */

/* WARNING: Possible PIC construction at 0x0001010ed378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ed39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ed418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ed56c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010ed41c) */
/* WARNING: Removing unreachable block (ram,0x0001010ed440) */
/* WARNING: Removing unreachable block (ram,0x0001010ed424) */
/* WARNING: Removing unreachable block (ram,0x0001010ed448) */
/* WARNING: Removing unreachable block (ram,0x0001010ed3a0) */
/* WARNING: Removing unreachable block (ram,0x0001010ed3f8) */
/* WARNING: Removing unreachable block (ram,0x0001010ed3a8) */
/* WARNING: Removing unreachable block (ram,0x0001010ed400) */
/* WARNING: Removing unreachable block (ram,0x0001010ed37c) */
/* WARNING: Removing unreachable block (ram,0x0001010ed570) */

void FUN_1010ed2c8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x000107c61168(PTR_PTR_1126b0418);
    func_0x000107c408f0();
  }
  else {
    func_0x000107c5d7e8(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1010edaa4; end: 1010edbdf;  */

void FUN_1010edaa4(long param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar2 = 0x112d5d568;
  puVar4 = &UNK_10d9392e0;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)(&stack0xffffffffffffffa0 + -extraout_x8);
  if (param_2 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    func_0x000107c61434(uVar6);
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar3 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    func_0x0001000f66f0(uVar3,puVar4,uVar6);
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(uVar6);
    if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0x50) == 0)) {
      FUN_1010ec910();
      FUN_1010ee114();
      puVar4 = &UNK_110383ca0;
      func_0x000107c613f8(&UNK_110383ca0,uVar6,0,0);
      *puVar5 = puVar4;
      func_0x000107c6159c(puVar5,lVar2,1);
      FUN_1010ee154(puVar5,param_3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010edbe0);
  (*pcVar1)();
}



/* Entry: 1010edbe0; end: 1010edcdf;  */

/* WARNING: Possible PIC construction at 0x0001010edcc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010edccc) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1010edbe0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  puVar1 = unaff_x20 + 2;
  uVar3 = *unaff_x20;
  func_0x000107c61618();
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x000107c4a33c();
    if (((((ulong)puVar2 & 1) == 0) && (puVar2 = puVar1, func_0x000107c4a718(), (int)puVar2 != 0))
       && (puVar2 = puVar1, func_0x000107c49ef8(), (int)puVar2 == 0)) {
      func_0x000107c5ed90();
      func_0x000107c4efc0(puVar1);
    }
    else {
      func_0x0001007d6c6c(3,0xd000000000000059,0x800000010ef264b0,uVar3,&PTR_DAT_110383b38);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar1);
    return;
  }
  func_0x0001007d6c6c(3,0xd000000000000071,0x800000010ef26430,uVar3,&PTR_DAT_110383b38);
  return;
}



/* Entry: 1010edce0; end: 1010edd3b; -[_TtC26LensSkipRecordingApiPlugin33LensSkipRecordingApiPluginHandler handleRequest:] */

void FUN_1010edce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_1010eca40(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1010edd3c; end: 1010edd93; -[_TtC26LensSkipRecordingApiPlugin33LensSkipRecordingApiPluginHandler reset] */

void FUN_1010edd3c(undefined8 param_1)

{
  func_0x000107c6157c();
  func_0x000100087bd4(0x1010ee3e0,param_1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1010edd94; end: 1010eddb3;  */

void FUN_1010edd94(void)

{
  func_0x000107c61168(&PTR_PTR_112d5d4d0);
  return;
}



/* Entry: 1010eddb4; end: 1010eddd7;  */

void FUN_1010eddb4(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001010eddc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1010eddd8; end: 1010edf93;  */

ulong FUN_1010eddd8(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010edebc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010edec0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1010ee254(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010edf94);
  (*pcVar2)();
}



/* Entry: 1010edf94; end: 1010edfab;  */

void FUN_1010edf94(void)

{
  long unaff_x20;
  
  FUN_1010ed1e0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1010edfac; end: 1010edfe7;  */

/* WARNING: Possible PIC construction at 0x0001010ed378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ed39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ed418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ed56c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010ed41c) */
/* WARNING: Removing unreachable block (ram,0x0001010ed440) */
/* WARNING: Removing unreachable block (ram,0x0001010ed424) */
/* WARNING: Removing unreachable block (ram,0x0001010ed448) */
/* WARNING: Removing unreachable block (ram,0x0001010ed3a0) */
/* WARNING: Removing unreachable block (ram,0x0001010ed3f8) */
/* WARNING: Removing unreachable block (ram,0x0001010ed3a8) */
/* WARNING: Removing unreachable block (ram,0x0001010ed400) */
/* WARNING: Removing unreachable block (ram,0x0001010ed37c) */
/* WARNING: Removing unreachable block (ram,0x0001010ed570) */

void FUN_1010edfac(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    func_0x000107c61168(PTR_PTR_1126b0418);
    func_0x000107c408f0();
  }
  else {
    func_0x000107c5d7e8(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1010edfe8; end: 1010ee01f;  */

void FUN_1010edfe8(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x50);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x50) = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 1010ee020; end: 1010ee06f;  */

undefined8 FUN_1010ee020(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1010ee070; end: 1010ee08b;  */

void FUN_1010ee070(void)

{
  long unaff_x20;
  
  FUN_1010edaa4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1010ee08c; end: 1010ee113;  */

undefined8 FUN_1010ee08c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}


