/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b971cdc; end: 10b971cef; +[SCValdiBitmap valdiMarshallableObjectDescriptor] */

void FUN_10b971cdc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 3;
  return;
}



/* Entry: 10b971cf0; end: 10b971d8b; -[SCValdiBridgedBitmap bitmapInfo] */

void FUN_10b971cf0(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plStack_40;
  undefined8 uStack_38;
  uint uStack_30;
  int iStack_2c;
  undefined8 uStack_28;
  
  func_0x00010c296d80();
  FUN_10b971d8c(&plStack_40,param_2);
  (**(code **)(*plStack_40 + 0x38))(&uStack_38,plStack_40);
  func_0x0001080cc5cc(plStack_40);
  uVar2 = (ulong)uStack_30;
  func_0x00010b971df4();
  uVar1 = 2;
  if (iStack_2c != 2) {
    uVar1 = (ulong)(iStack_2c == 1);
  }
  *param_1 = uStack_38;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uStack_28;
  return;
}



/* Entry: 10b971d8c; end: 10b971de3;  */

void FUN_10b971d8c(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*(char *)((long)param_2 + 9) == '\x01') {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      ___dynamic_cast(lVar1,&PTR_DAT_1107e3600,&PTR_DAT_110d7d930,0);
    }
    func_0x0001080fde2c();
  }
  else {
    lVar1 = 0;
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10b971de4; end: 10b971e03;  */

void FUN_10b971de4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 2) = param_4;
  *(undefined8 *)(param_1 + 4) = param_5;
  *(undefined8 *)(param_1 + 6) = param_6;
  return;
}



/* Entry: 10b971e04; end: 10b971e4f; -[SCValdiBridgedBitmap lockBytes] */

void FUN_10b971e04(void)

{
  undefined8 uStack_28;
  
  func_0x00010c296d80();
  func_0x00010b972218();
  (**(code **)(*uStack_28 + 0x40))(uStack_28);
  func_0x00010b9721f0();
  return;
}



/* Entry: 10b971e50; end: 10b971e97; -[SCValdiBridgedBitmap unlockBytes] */

void FUN_10b971e50(void)

{
  long *plStack_28;
  
  func_0x00010c296d80();
  func_0x00010b972218();
  (**(code **)(*plStack_28 + 0x48))(plStack_28);
  if (plStack_28 != (long *)0x0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 10b971e98; end: 10b971ea3; -[SCValdiBridgedBitmap pushToValdiMarshaller:] */

long FUN_10b971e98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong unaff_x19;
  int unaff_w20;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined2 uStack_28;
  
  func_0x00010b97ffe0(param_3,param_1);
  uStack_28 = 0;
  uStack_30 = 0;
  _objc_opt_respondsToSelector();
  if ((unaff_x19 & 1) == 0) {
    FUN_10b981514(&uStack_48);
    func_0x00010b9a8f78(auStack_40,&uStack_48);
    func_0x00010b980018();
    FUN_10b9a8d98(auStack_40);
    func_0x000104bddf04(uStack_48);
  }
  else {
    FUN_10b980484(auStack_40);
    func_0x00010b980018();
    FUN_10b9a8d98(auStack_40);
  }
  FUN_10b9a8f04(auStack_58,&uStack_30);
  FUN_10b9a0b80();
  func_0x00010b97ffb8();
  FUN_10b9a8d98(&uStack_30);
  func_0x00010b97ffa8();
  return (long)unaff_w20;
}



/* Entry: 10b971ea4; end: 10b971ffb;  */

void FUN_10b971ea4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  _objc_retain(param_3);
  puVar3 = (undefined8 *)0x60;
  __Znwm();
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  puVar3[8] = param_2[1];
  puVar3[7] = uVar7;
  plVar6 = puVar3 + 1;
  *plVar6 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110d7b660;
  puVar5 = puVar3 + 3;
  *puVar5 = &PTR_DAT_110d7b6b0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = param_1;
  puVar3[10] = uVar9;
  puVar3[9] = uVar8;
  _objc_retainBlock();
  puVar3[0xb] = param_3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_50 = puVar5;
  puStack_48 = puVar3;
  func_0x000107c278e4(puVar3 + 4,&puStack_50);
  func_0x000107c284e8(&puStack_50);
  puVar4 = PTR_PTR_1126e1ba8;
  _objc_alloc(PTR_PTR_1126e1ba8);
  if (puVar3[5] != 0) {
    plVar6 = (long *)(puVar3[5] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puStack_50 = puVar5;
  func_0x00010b9a8f78(auStack_60,&puStack_50);
  func_0x00010c060400(puVar4);
  func_0x00010b97220c();
  func_0x000104bddf04(puVar5);
  func_0x00010b9721e4(puVar5);
  func_0x00010b972204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b971ffc; end: 10b972037;  */

uint FUN_10b971ffc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(param_1 + 8);
  func_0x00010b971df4();
  uVar1 = 2;
  if (*(int *)(param_1 + 0xc) != 2) {
    uVar1 = (ulong)(*(int *)(param_1 + 0xc) == 1);
  }
  if (uVar3 - 4 < 2) {
    return 0x105;
  }
  if (uVar3 == 1) {
    uVar2 = (int)uVar1 << 1 | 0x2000;
    if (2 < uVar1) {
      uVar2 = 7;
    }
    return uVar2;
  }
  if ((uVar3 == 0) && (uVar1 < 3)) {
    return *(uint *)(&UNK_10e5fb6e8 + uVar1 * 4);
  }
  return 7;
}



/* Entry: 10b972038; end: 10b972093;  */

uint FUN_10b972038(long param_1,ulong param_2)

{
  uint uVar1;
  
  if (param_1 - 4U < 2) {
    return 0x105;
  }
  if (param_1 != 1) {
    if ((param_1 == 0) && (param_2 < 3)) {
      return *(uint *)(&UNK_10e5fb6e8 + param_2 * 4);
    }
    return 7;
  }
  uVar1 = (int)param_2 << 1 | 0x2000;
  if (2 < param_2) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Entry: 10b972094; end: 10b9720a7;  */

void FUN_10b972094(void)

{
  FUN_10b9721d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9720a8; end: 10b9720bb;  */

void FUN_10b9720a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b9720b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b9720bc; end: 10b9720cf;  */

void FUN_10b9720bc(void)

{
  FUN_10b972170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9720d0; end: 10b972123;  */

void FUN_10b9720d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x40);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b972124; end: 10b97216f;  */

void FUN_10b972124(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar2 = *(long *)(param_2 + 0x30);
  uVar3 = *(long *)(param_2 + 0x28) - 1;
  iVar1 = (int)uVar3 + 2;
  if (4 < uVar3) {
    iVar1 = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *param_1 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = 2;
  if (lVar2 != 2) {
    uVar5 = (uint)(lVar2 == 1);
  }
  *(int *)(param_1 + 1) = iVar1;
  *(uint *)((long)param_1 + 0xc) = uVar5;
  param_1[2] = uVar4;
  return;
}



/* Entry: 10b972170; end: 10b9721d3;  */

undefined8 * FUN_10b972170(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110d7b6b0;
  uVar1 = 0;
  if (param_1[8] != 0) {
    (**(code **)(param_1[8] + 0x10))();
    uVar1 = param_1[8];
  }
  _objc_release(uVar1);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b9721d4; end: 10b97223f;  */

void FUN_10b9721d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d7b660;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b972240; end: 10b97229f;  */

void FUN_10b972240(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  puStack_30 = &uStack_28;
  lStack_38 = param_2;
  uStack_28 = param_3;
  FUN_10b9722a0(uVar2,param_4,param_2 + 0x30,&lStack_38);
  uVar1 = *(undefined1 *)(param_2 + 0x20);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_10b982a04(param_1);
  return;
}



/* Entry: 10b9722a0; end: 10b972363;  */

void FUN_10b9722a0(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long lVar5;
  long alStack_70 [4];
  long alStack_50 [2];
  
  alStack_50[1] = *(long *)PTR____stack_chk_guard_11034bdc0;
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_1 << 3);
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)alStack_50 + lVar1;
  for (lVar5 = 0; uVar2 = param_1 == lVar5, !(bool)uVar2; lVar5 = lVar5 + 1) {
    lVar3 = param_2;
    func_0x00010b982b84(param_2,*(undefined1 *)(param_3 + lVar5));
    *(long *)(lVar4 + lVar5 * 8) = lVar3;
    param_2 = param_2 + 0x10;
  }
  lVar5 = *(long *)param_4[1];
  (**(code **)(*param_4 + 0x10))(lVar5,lVar4);
  func_0x00010b97286c(alStack_50[1]);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  *(long *)((long)alStack_70 + lVar1) = param_3;
  *(long **)((long)alStack_70 + lVar1 + 8) = param_4;
  *(undefined1 **)((long)alStack_70 + lVar1 + 0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_70 + lVar1 + 0x18) = FUN_10b972364;
  (**(code **)(lVar5 + 0x18))(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b982c24(extraout_x8_00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10b972364; end: 10b9723af;  */

void FUN_10b972364(undefined8 param_1,long param_2,undefined8 param_3)

{
  (**(code **)(param_2 + 0x18))(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b982c24(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9723b0; end: 10b972517;  */

void FUN_10b9723b0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar4 = (ulong)*(byte *)(param_2 + 0x20);
  func_0x00010b96795c();
  uStack_40 = uVar4;
  _strlen();
  uStack_38 = uVar4;
  func_0x00010b972860();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
            (param_1,&UNK_10f7cfeb1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
            (param_1,&UNK_10f7cfeb3);
  for (lVar5 = 0x32; lVar5 - 0x30U < *(ulong *)(param_2 + 0x28); lVar5 = lVar5 + 1) {
    uVar4 = (ulong)*(byte *)(param_2 + lVar5);
    func_0x00010b96795c();
    uStack_40 = uVar4;
    _strlen();
    uStack_38 = uVar4;
    func_0x00010b972860();
  }
  plVar1 = (long *)(param_2 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc6000000;
  pcStack_60 = FUN_10b972518;
  puStack_58 = &UNK_110d7b748;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lStack_50 = param_2;
  uStack_48 = param_3;
  FUN_10b972364(&uStack_40,param_2,&puStack_70);
  FUN_10b982a6c(param_1 + 3,&uStack_40);
  FUN_10b982a50(&uStack_40);
  func_0x000107c30e58(lStack_50);
  func_0x000107c30e58(param_2);
  return;
}



/* Entry: 10b972518; end: 10b97262b;  */

long FUN_10b972518(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long in_stack_00000000;
  long *aplStack_40 [2];
  
  aplStack_40[1] = *(long **)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x28);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar10 << 3);
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar5 = (long *)((long)aplStack_40 + lVar4);
  aplStack_40[0] = (long *)((ulong)&stack0x00000000 | 8);
  lVar7 = in_stack_00000000;
  func_0x000107c30e10();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x000107c30e20();
  lVar6 = *(long *)(lVar6 + *(long *)(param_1 + 0x28) * 8);
  *plVar5 = lVar6;
  *(undefined8 *)((long)aplStack_40 + lVar4 + 8) = 0;
  uVar9 = 2;
  plVar8 = aplStack_40[0];
  while( true ) {
    uVar3 = uVar9 == uVar10;
    if (uVar10 <= uVar9) break;
    aplStack_40[0] = plVar8 + 1;
    plVar5[uVar9] = *plVar8;
    uVar9 = uVar9 + 1;
    plVar8 = plVar8 + 1;
  }
  lVar4 = *(long *)(lVar6 + 0x10);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  FUN_10b972854();
  func_0x00010b97286c(aplStack_40[1]);
  if ((bool)uVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(lVar7);
  __Unwind_Resume();
  lVar7 = plVar5[4];
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(long *)(lVar4 + 0x20) = lVar7;
  return lVar4;
}



/* Entry: 10b97262c; end: 10b972657;  */

void FUN_10b97262c(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x20);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(long *)(param_1 + 0x20) = lVar4;
  return;
}



/* Entry: 10b972658; end: 10b97267f;  */

void FUN_10b972658(long param_1)

{
  FUN_10b982a50(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b972680; end: 10b97281b;  */

ulong * FUN_10b972680(long *param_1,ulong *param_2,ulong param_3,long param_4,undefined1 *param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_78;
  ulong *puStack_70;
  undefined1 *puStack_68;
  
  uVar2 = param_2[2];
  puVar1 = (undefined1 *)(param_2[1] + param_4);
  if ((long)puVar1 - uVar2 <= (uVar2 ^ 0x7fffffffffffffff)) {
    if (uVar2 >> 0x3d == 0) {
      puVar5 = (undefined1 *)((uVar2 << 3) / 5);
    }
    else {
      puVar5 = (undefined1 *)(uVar2 << 3);
      if (4 < uVar2 >> 0x3d) {
        puVar5 = (undefined1 *)0xffffffffffffffff;
      }
    }
    if ((undefined1 *)0x7ffffffffffffffe < puVar5) {
      puVar5 = (undefined1 *)0x7fffffffffffffff;
    }
    if (puVar1 <= puVar5) {
      puVar1 = puVar5;
    }
    if (-1 < (long)puVar1) {
      uVar7 = *param_2;
      puVar3 = puVar1;
      __Znwm();
      uVar2 = *param_2;
      uVar6 = param_2[1];
      puVar5 = puVar3;
      puStack_70 = param_2;
      puStack_68 = puVar1;
      if ((uVar2 != 0) && (uVar2 != param_3)) {
        _memmove(puVar3,uVar2,param_3 - uVar2);
        puVar5 = puVar3 + (param_3 - uVar2);
      }
      *puVar5 = *param_5;
      if ((param_3 != 0) && (param_3 != uVar2 + uVar6)) {
        _memmove(puVar5 + param_4,param_3,(uVar2 + uVar6) - param_3);
      }
      uStack_78 = 0;
      if (uVar2 != 0) {
        func_0x000107c30e50(param_2,param_2,param_2[2]);
        uVar6 = param_2[1];
      }
      *param_2 = (ulong)puVar3;
      param_2[1] = uVar6 + param_4;
      param_2[2] = (ulong)puVar1;
      puVar4 = &uStack_78;
      FUN_10b97281c(puVar4);
      *param_1 = *param_2 + (param_3 - uVar7);
      return puVar4;
    }
  }
  _abort();
  FUN_10b97281c(&uStack_78);
  __Unwind_Resume();
  if ((*param_2 != 0) && (param_2[1] + 0x18 != *param_2)) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 10b97281c; end: 10b972853;  */

long * FUN_10b97281c(long *param_1)

{
  if ((*param_1 != 0) && (param_1[1] + 0x18 != *param_1)) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b972854; end: 10b97287f;  */

void FUN_10b972854(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b972880; end: 10b972937;  */

void FUN_10b972880(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_40;
  long lStack_38;
  
  _objc_retain();
  lStack_38 = param_2;
  func_0x00010bfc8a40();
  if (param_2 == 0) {
    FUN_10b972938(&lStack_40,&lStack_38,param_3);
    func_0x00010c1da060(lStack_38);
    if ((lStack_40 != 0) && (*(long *)(lStack_40 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lStack_40 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = lStack_40;
    func_0x00010b9732c4();
  }
  else {
    *param_1 = param_2;
  }
  func_0x00010b973550();
  return;
}



/* Entry: 10b972938; end: 10b972977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b972938(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x19;
  undefined8 auStack_38 [3];
  
  func_0x00010b9735dc();
  FUN_10b972f60(auStack_38);
  *unaff_x19 = auStack_38[0];
  func_0x00010b9735c4();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b97363c();
  if (param_1 != 0) {
    plVar2 = (long *)(param_1 + _DAT_112795f54);
    if (plVar2 != param_3) {
      lVar5 = *plVar2;
      lVar6 = *param_3;
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
        plVar1 = (long *)(*(long *)(lVar6 + 0x10) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *plVar2 = lVar6;
      func_0x0001052b2c50(lVar5);
    }
    func_0x00010b9735f4((long)_DAT_112795f58);
  }
  return param_1;
}



/* Entry: 10b972978; end: 10b972a1b; -[SCValdiBridgedPromise initWithPromise:valueMarshaller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b972978(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  func_0x00010b97363c(param_1,PTR_s_init_1125d9248);
  if (param_1 != 0) {
    plVar2 = (long *)(param_1 + _DAT_112795f54);
    if (plVar2 != param_3) {
      lVar5 = *plVar2;
      lVar6 = *param_3;
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
        plVar1 = (long *)(*(long *)(lVar6 + 0x10) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *plVar2 = lVar6;
      func_0x0001052b2c50(lVar5);
    }
    func_0x00010b9735f4((long)_DAT_112795f58);
  }
  return param_1;
}



/* Entry: 10b972a1c; end: 10b972a5f;  */

long * FUN_10b972a1c(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010b97362c();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    FUN_10b972f3c();
  }
  return param_1;
}



/* Entry: 10b972a60; end: 10b972b13; -[SCValdiBridgedPromise onCompleteWithCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b972a60(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_38;
  
  func_0x00010b973618();
  plVar6 = *(long **)(param_1 + _DAT_112795f54);
  lVar4 = 0x20;
  __Znwm();
  lVar5 = lVar4;
  FUN_10b9732d0();
  plVar1 = (long *)(lVar5 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lStack_38 = lVar4;
  (**(code **)(*plVar6 + 0x30))(plVar6,&lStack_38);
  func_0x00010b9735bc();
  func_0x00010b973520(lVar4);
  func_0x00010b973558();
  return;
}



/* Entry: 10b972b14; end: 10b972bf7; -[SCValdiBridgedPromise onCompleteWithCallbackBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b972b14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_48;
  
  func_0x00010b973618();
  plVar6 = *(long **)(param_1 + _DAT_112795f54);
  func_0x00010bf51e00(param_3);
  lVar4 = 0x20;
  __Znwm();
  lVar5 = lVar4;
  FUN_10b9732d0();
  plVar1 = (long *)(lVar5 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lStack_48 = lVar4;
  (**(code **)(*plVar6 + 0x30))(plVar6,&lStack_48);
  func_0x00010b9735bc();
  func_0x00010b973520(lVar4);
  func_0x00010b973550();
  func_0x00010b973558();
  return;
}



/* Entry: 10b972bf8; end: 10b972c0f; -[SCValdiBridgedPromise cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b972bf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b972c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + _DAT_112795f54) + 0x38))();
  return;
}



/* Entry: 10b972c10; end: 10b972c27; -[SCValdiBridgedPromise isCancelable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b972c10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b972c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + _DAT_112795f54) + 0x40))();
  return;
}



/* Entry: 10b972c28; end: 10b972c2b; -[SCValdiBridgedPromise setPeer:] */

void FUN_10b972c28(void)

{
  return;
}



/* Entry: 10b972c2c; end: 10b972c63; -[SCValdiBridgedPromise getPeer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10b972c2c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + _DAT_112795f54);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return plVar1;
}



/* Entry: 10b972c64; end: 10b972c93; -[SCValdiBridgedPromise .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b972c64(long param_1)

{
  long lVar1;
  
  func_0x00010b973648();
  lVar1 = (long)_DAT_112795f54;
  func_0x0001052b2c50(*(undefined8 *)(param_1 + lVar1));
  return (undefined8 *)(param_1 + lVar1);
}



/* Entry: 10b972c94; end: 10b972c9f; -[SCValdiBridgedPromise .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b972c94(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112795f54) = 0;
  *(undefined8 *)(param_1 + _DAT_112795f58) = 0;
  return;
}



/* Entry: 10b972ca0; end: 10b972d3b; -[SCValdiBridgedPromiseCallback initWithPromiseCallback:valueMarshaller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b972ca0(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  func_0x00010b97363c(param_1,PTR_s_init_1125d9248);
  if (param_1 != 0) {
    plVar2 = (long *)(param_1 + _DAT_112795f5c);
    if (plVar2 != param_3) {
      lVar5 = *plVar2;
      lVar6 = *param_3;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *plVar2 = lVar6;
      func_0x00010b8e09fc(lVar5);
    }
    func_0x00010b9735f4((long)_DAT_112795f60);
  }
  return param_1;
}



/* Entry: 10b972d3c; end: 10b972e77; -[SCValdiBridgedPromiseCallback onSuccessWithValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b972d3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined **ppuStack_50;
  byte bStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  
  func_0x00010b973618();
  bStack_48 = 1;
  ppuStack_50 = &PTR_FUN_110d7e6e0;
  uStack_40 = 0;
  uStack_38 = 0;
  plVar1 = *(long **)(param_1 + _DAT_112795f60);
  func_0x00010b982c24(auStack_70,param_3);
  func_0x00010b973654();
  (**(code **)(*plVar1 + 0x30))(auStack_60,plVar1,0,auStack_70,auStack_a0,&ppuStack_50);
  func_0x00010b97358c();
  plVar1 = *(long **)(param_1 + _DAT_112795f5c);
  if ((bStack_48 & 1) == 0) {
    FUN_10b9a0084(auStack_a0,&ppuStack_50);
    (**(code **)(*plVar1 + 0x28))(plVar1,auStack_a0);
    func_0x00010b973584();
  }
  else {
    (**(code **)(*plVar1 + 0x20))(plVar1,auStack_60);
  }
  FUN_10b9a8d98(auStack_60);
  FUN_10b9a01e4(&ppuStack_50);
  func_0x00010b973558();
  return;
}



/* Entry: 10b972e78; end: 10b972edb; -[SCValdiBridgedPromiseCallback onFailureWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b972e78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_28;
  
  plVar1 = *(long **)(param_1 + _DAT_112795f5c);
  FUN_10b981d84(&uStack_28,param_3);
  (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_28);
  func_0x000104bda960(uStack_28);
  return;
}



/* Entry: 10b972edc; end: 10b972f0b; -[SCValdiBridgedPromiseCallback .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b972edc(long param_1)

{
  long lVar1;
  
  func_0x00010b973648();
  lVar1 = (long)_DAT_112795f5c;
  func_0x00010b8e09fc(*(undefined8 *)(param_1 + lVar1));
  return (undefined8 *)(param_1 + lVar1);
}



/* Entry: 10b972f0c; end: 10b972f17; -[SCValdiBridgedPromiseCallback .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b972f0c(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112795f5c) = 0;
  *(undefined8 *)(param_1 + _DAT_112795f60) = 0;
  return;
}



/* Entry: 10b972f18; end: 10b972f3b;  */

undefined8 * FUN_10b972f18(undefined8 *param_1)

{
  FUN_10b972f3c(*param_1);
  return param_1;
}



/* Entry: 10b972f3c; end: 10b972f5f;  */

void FUN_10b972f3c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b973608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b972f60; end: 10b972f87;  */

void FUN_10b972f60(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10b972f88(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10b972f88; end: 10b973017;  */

void FUN_10b972f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  puVar5 = auStack_50;
  func_0x00010b9735dc();
  FUN_10b973034(auStack_50,1);
  FUN_10b973078(lStack_40,param_2,param_3);
  lVar6 = lStack_40;
  lStack_40 = 0;
  FUN_10b973018(lVar6 + 0x18);
  FUN_10b9732b4(auStack_50);
  func_0x00010b9735c4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b9732b4();
  func_0x00010b973568();
  *extraout_x8 = puVar5;
  extraout_x8[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_10b973018;
    lStack_68 = extraout_x8[1];
    if (lStack_68 != 0) {
      plVar1 = (long *)(lStack_68 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_70 = puVar5;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000107c278e4(puVar2,&puStack_70);
    func_0x000107c284e8(&puStack_70);
    return;
  }
  return;
}



/* Entry: 10b973018; end: 10b973033;  */

void FUN_10b973018(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x000107c278e4(lVar2,&lStack_20);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b973034; end: 10b97305b;  */

long FUN_10b973034(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b97305c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b97305c; end: 10b973077;  */

undefined8 * FUN_10b97305c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x3a == 0) {
    puVar1 = (undefined8 *)(param_2 << 6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7b7a0;
  func_0x00010b9730dc(param_1 + 3);
  return param_1;
}



/* Entry: 10b973078; end: 10b9730b7;  */

undefined8 * FUN_10b973078(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7b7a0;
  func_0x00010b9730dc(param_1 + 3);
  return param_1;
}



/* Entry: 10b9730b8; end: 10b9730bb;  */

void FUN_10b9730b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7b7a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b9730bc; end: 10b9730cf;  */

void FUN_10b9730bc(void)

{
  FUN_10b973238();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9730d0; end: 10b9730e3;  */

long FUN_10b9730d0(long param_1)

{
  FUN_10b972f18(param_1 + 0x38);
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c278e8(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 10b9730e4; end: 10b97313f;  */

undefined8 * FUN_10b9730e4(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7b7f0;
  _objc_retain(param_2);
  param_1[3] = param_2;
  uVar1 = 0;
  if (*param_3 != 0) {
    do {
      func_0x00010b97362c();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 10b973140; end: 10b973143;  */

long FUN_10b973140(long param_1)

{
  FUN_10b972f18(param_1 + 0x20);
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c278e8(param_1 + 8);
  return param_1;
}



/* Entry: 10b973144; end: 10b973157;  */

void FUN_10b973144(void)

{
  FUN_10b973204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b973158; end: 10b9731bb;  */

void FUN_10b973158(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126e1bb0;
  _objc_alloc(PTR_PTR_1126e1bb0);
  func_0x00010c03b580();
  func_0x00010c0e3020(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9731bc; end: 10b9731fb;  */

void FUN_10b9731bc(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  _objc_opt_respondsToSelector(uVar1,PTR_s_cancel_1125a9090);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_cancel_1125a9090);
    return;
  }
  return;
}



/* Entry: 10b9731fc; end: 10b973203;  */

void FUN_10b9731fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06e0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_isCancelable_1125f9238);
  return;
}



/* Entry: 10b973204; end: 10b973237;  */

long FUN_10b973204(long param_1)

{
  FUN_10b972f18(param_1 + 0x20);
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c278e8(param_1 + 8);
  return param_1;
}



/* Entry: 10b973238; end: 10b973247;  */

void FUN_10b973238(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7b7a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b973248; end: 10b9732b3;  */

void FUN_10b973248(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b9732b4; end: 10b9732cf;  */

void FUN_10b9732b4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9732d0; end: 10b97332b;  */

undefined8 * FUN_10b9732d0(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  
  *param_1 = &PTR_FUN_110d7b860;
  param_1[1] = 1;
  _objc_retain(param_2);
  param_1[2] = param_2;
  uVar1 = 0;
  if (*param_3 != 0) {
    do {
      func_0x00010b97362c();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 10b97332c; end: 10b97332f;  */

long FUN_10b97332c(long param_1)

{
  FUN_10b972f18(param_1 + 0x18);
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 10b973330; end: 10b973343;  */

void FUN_10b973330(void)

{
  FUN_10b9734f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b973344; end: 10b9734a7;  */

void FUN_10b973344(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [8];
  char cStack_48;
  undefined **ppuStack_40;
  byte bStack_38;
  undefined1 uStack_30;
  undefined1 uStack_28;
  
  puVar2 = auStack_80;
  bStack_38 = 1;
  ppuStack_40 = &PTR_FUN_110d7e6e0;
  uStack_30 = 0;
  uStack_28 = 0;
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b973654();
  (**(code **)(*plVar1 + 0x28))(auStack_50);
  if ((bStack_38 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    FUN_10b9a0084(auStack_80,&ppuStack_40);
    FUN_10b981bb0(auStack_80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b968478(uVar3,puVar2);
    func_0x00010b973550();
    func_0x00010b973584();
  }
  else {
    if (cStack_48 == '\0') {
      plVar1 = *(long **)(param_1 + 0x18);
      (**(code **)(*plVar1 + 0x20))();
      if ((int)plVar1 != 0) {
        func_0x00010b968424(*(undefined8 *)(param_1 + 0x10),0);
        goto LAB_10b97344c;
      }
      func_0x00010c27f660(PTR_PTR_1126b15a8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b973620();
    }
    else {
      FUN_10b982b30(auStack_50);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b973620();
    }
    func_0x00010b973550();
  }
LAB_10b97344c:
  func_0x00010b97358c();
  FUN_10b9a01e4(&ppuStack_40);
  return;
}



/* Entry: 10b9734a8; end: 10b9734f3;  */

void FUN_10b9734a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_10b981bb0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b968478(uVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b9734f4; end: 10b97351f;  */

long FUN_10b9734f4(long param_1)

{
  FUN_10b972f18(param_1 + 0x18);
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 10b973520; end: 10b973667;  */

void FUN_10b973520(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b973608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b973668; end: 10b9736df;  */

void FUN_10b973668(void)

{
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c30f2c(&uStack_40);
  FUN_10b98c5cc(auStack_38,&uStack_40);
  func_0x000107c278f8(uStack_40);
  FUN_10b98101c(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b9736e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b9736e0; end: 10b9736eb;  */

/* WARNING: Possible PIC construction at 0x00010b8c2b64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8c2b68) */
/* WARNING: Removing unreachable block (ram,0x00010b8bc430) */

undefined1 * FUN_10b9736e0(void)

{
  func_0x00010007e5d0(&stack0x00000018);
  func_0x0001003a8cb8();
  return &stack0x00000008;
}



/* Entry: 10b9736ec; end: 10b9737fb; -[SCValdiFunctionCompat performWithMarshaller:] */

bool FUN_10b9736ec(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  uVar2 = param_1;
  _objc_opt_respondsToSelector(param_1,PTR_s_performWithParameters__11261bf88);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_3;
    FUN_10b97fe30(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f95a0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_1 != 0;
    if (param_1 != 0) {
      FUN_10b980484(&uStack_40,param_1);
      uStack_50 = uStack_40;
      uStack_48 = uStack_38;
      uStack_40 = 0;
      uStack_38 = 0;
      FUN_10b9a0b80(param_3,&uStack_50);
      FUN_10b9a8d98(&uStack_50);
      FUN_10b9a8d98(&uStack_40);
    }
    _objc_release(param_1);
    _objc_release(uVar3);
  }
  return bVar1;
}



/* Entry: 10b9737fc; end: 10b97387b; -[SCValdiFunctionWithBlock initWithBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b9737fc(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffd0;
  func_0x00010b9738f4();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(puVar1 + _DAT_112795f64);
    *(undefined8 *)(puVar1 + _DAT_112795f64) = unaff_x19;
    _objc_release(uVar2);
  }
  _objc_release();
  return puVar1;
}



/* Entry: 10b97387c; end: 10b9738bb; +[SCValdiFunctionWithBlock functionWithBlock:] */

void FUN_10b97387c(void)

{
  func_0x00010b9738f4();
  _objc_alloc();
  func_0x00010bff8d00();
  func_0x00010b9738e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b9738bc; end: 10b9738d3; -[SCValdiFunctionWithBlock performWithMarshaller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b9738bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010b9738d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + _DAT_112795f64) + 0x10))
            (*(long *)(param_1 + _DAT_112795f64),param_3);
  return;
}



/* Entry: 10b9738d4; end: 10b973903; -[SCValdiFunctionWithBlock .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b9738d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795f64,0);
  return;
}



/* Entry: 10b973904; end: 10b973987; -[SCValdiFunctionWithCPPFunction initWithCPPFunction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b973904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270c110;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001080ecde8((undefined1 *)((long)puVar1 + (long)_DAT_112795f68),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b973988; end: 10b97398f; -[SCValdiFunctionWithCPPFunction performWithMarshaller:] */

void FUN_10b973988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f9570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_performWithMarshaller_flags__11261bf78,param_3,0);
  return;
}



/* Entry: 10b973990; end: 10b97399f; -[SCValdiFunctionWithCPPFunction performSyncWithMarshaller:propagatesError:] */

void FUN_10b973990(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 9;
  if (param_4 == 0) {
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0f9570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_performWithMarshaller_flags__11261bf78,param_3,uVar1);
  return;
}



/* Entry: 10b9739a0; end: 10b9739a7; -[SCValdiFunctionWithCPPFunction performThrottledWithMarshaller:] */

void FUN_10b9739a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f9570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_performWithMarshaller_flags__11261bf78,param_3,4);
  return;
}



/* Entry: 10b9739a8; end: 10b973a3b; -[SCValdiFunctionWithCPPFunction performWithMarshaller:flags:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b9739a8(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  lStack_48 = (long)*(int *)(param_3 + 0x18);
  uStack_40 = *(undefined8 *)(param_3 + 8);
  uStack_50 = *(undefined8 *)(param_3 + 0x10);
  auStack_58[0] = (undefined1)param_4;
  uStack_38 = 0;
  (**(code **)(**(long **)(param_1 + _DAT_112795f68) + 0x20))
            (auStack_30,*(long **)(param_1 + _DAT_112795f68),auStack_58);
  FUN_10b9a0b80(param_3,auStack_30);
  FUN_10b9a8d98(auStack_30);
  if ((param_4 >> 3 & 1) != 0) {
    FUN_10b97f3b0(param_3);
  }
  return 1;
}



/* Entry: 10b973a3c; end: 10b973a4b; -[SCValdiFunctionWithCPPFunction getFunction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b973a3c(long param_1)

{
  return param_1 + _DAT_112795f68;
}



/* Entry: 10b973a4c; end: 10b973a5b; -[SCValdiFunctionWithCPPFunction .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b973a4c(long param_1)

{
  func_0x0001003adc0c(param_1 + _DAT_112795f68);
  func_0x000104bda3ac();
  return;
}



/* Entry: 10b973a5c; end: 10b973a6b; -[SCValdiFunctionWithCPPFunction .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b973a5c(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112795f68) = 0;
  return;
}



/* Entry: 10b973a6c; end: 10b973b1f;  */

long FUN_10b973a6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuStack_50;
  long lStack_48;
  
  lVar3 = param_3;
  _objc_retain();
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    _CGPathCreateMutable();
    ppuStack_50 = &PTR_FUN_110d7b8b8;
    lVar1 = param_3;
    lStack_48 = lVar3;
    _objc_retainAutorelease(param_3);
    func_0x00010bf25f00();
    lVar2 = param_3;
    func_0x00010c08fa60(param_3);
    FUN_10b9a0370(param_1,param_2,lVar1,lVar2,&ppuStack_50);
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b973b20; end: 10b973b63;  */

void FUN_10b973b20(void)

{
  return;
}



/* Entry: 10b973b64; end: 10b973c23;  */

void FUN_10b973b64(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auStack_70 [32];
  double dStack_50;
  double dStack_48;
  
  if (param_3 == param_4) {
    func_0x00010b973c2c(*(undefined8 *)(param_5 + 8),0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGPathAddRelativeArc_1103474a8)();
    return;
  }
  dVar2 = param_4;
  if (param_4 <= param_3) {
    dVar2 = param_3;
  }
  _CGAffineTransformMakeScale(auStack_70,param_3 / dVar2,param_4 / dVar2);
  auVar1 = NEON_fmov(0x3fe0000000000000,8);
  dStack_50 = (dVar2 - param_3) * auVar1._0_8_;
  dStack_48 = (dVar2 - param_4) * auVar1._8_8_;
  func_0x00010b973c2c(*(undefined8 *)(param_5 + 8),auStack_70);
  _CGPathAddRelativeArc();
  return;
}



/* Entry: 10b973c24; end: 10b973c3f;  */

void FUN_10b973c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbb2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGPathCloseSubpath_1103474c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b973c40; end: 10b973ce7;  */

undefined8 FUN_10b973c40(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lStack_28;
  
  if ((bRam0000000113846878 & 1) == 0) {
    iVar4 = 0x13846878;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_10b973ce8(&lStack_28);
      if (lStack_28 == 0) {
        lVar5 = 0;
      }
      else {
        plVar1 = (long *)(lStack_28 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          lVar5 = lStack_28;
        } while (cVar2 != '\0');
      }
      lRam0000000113846870 = lStack_28;
      func_0x00010b974264(lVar5);
      ___cxa_guard_release(0x113846878);
    }
  }
  return 0x113846870;
}



/* Entry: 10b973ce8; end: 10b973d1f;  */

void FUN_10b973ce8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110d7b928;
  puVar1[1] = 1;
  *param_1 = puVar1;
  return;
}



/* Entry: 10b973d20; end: 10b973fcb;  */

void FUN_10b973d20(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  uint uStack_60;
  long lStack_58;
  
  if ((long *)*param_2 == (long *)0x0) {
    FUN_10b99f5f8(&uStack_68,&UNK_10f7cfed9);
    *param_1 = 2;
    param_1[1] = uStack_68;
    uStack_68 = 0;
  }
  else {
    (**(code **)(*(long *)*param_2 + 0x38))(&uStack_68);
    if (0xfffffffd < uStack_60 - 3) {
      plVar2 = (long *)*param_2;
      (**(code **)(*plVar2 + 0x40))();
      if (plVar2 != (long *)0x0) {
        plVar9 = (long *)*param_2;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        plVar3 = plVar9;
        _CGDataProviderCreateWithData(plVar9,plVar2,lStack_58 * uStack_68._4_4_,FUN_10b973fcc);
        if (plVar3 == (long *)0x0) {
          (**(code **)(*(long *)*param_2 + 0x48))();
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x18))(plVar9);
          }
        }
        else {
          plVar2 = plVar3;
          _CGColorSpaceCreateDeviceRGB();
          if (plVar2 == (long *)0x0) {
            _CGDataProviderRelease(plVar3);
          }
          else {
            uVar4 = (ulong)uStack_60;
            FUN_10b98da60(uVar4);
            lVar6 = (long)(int)uStack_68;
            lVar1 = (long)uStack_68._4_4_;
            puVar5 = &uStack_68;
            FUN_10b971ffc(puVar5);
            _CGImageCreate(lVar6,lVar1,8,uVar4 << 3,lStack_58,plVar2,puVar5,plVar3,0,0,0);
            _CGColorSpaceRelease(plVar2);
            _CGDataProviderRelease(plVar3);
            if (lVar6 != 0) {
              puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
              func_0x00010bfe9240();
              _objc_retainAutoreleasedReturnValue();
              _CGImageRelease(lVar6);
              if (puVar7 == (undefined *)0x0) {
                func_0x00010b9742c4();
                func_0x00010b9742a8();
                func_0x00010b9742bc();
              }
              else {
                puVar8 = PTR_PTR_1126b27a8;
                func_0x00010bfe9800();
                _objc_retainAutoreleasedReturnValue();
                if (puVar8 == (undefined *)0x0) {
                  func_0x00010b9742c4();
                  func_0x00010b9742a8();
                  func_0x00010b9742bc();
                }
                else {
                  _objc_retain(puVar8);
                  ppuStack_78 = &PTR_FUN_110d7cc18;
                  *param_1 = 1;
                  puStack_70 = puVar8;
                  FUN_10b98032c(param_1 + 1,&ppuStack_78);
                  FUN_10b980378(&ppuStack_78);
                }
                _objc_release(puVar8);
              }
              _objc_release(puVar7);
              return;
            }
          }
        }
      }
    }
    func_0x00010b9742c4();
    func_0x00010b9742a8();
  }
  func_0x00010b9742bc();
  return;
}



/* Entry: 10b973fcc; end: 10b97400b;  */

void FUN_10b973fcc(long *param_1)

{
  (**(code **)(*param_1 + 0x48))();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10b97400c; end: 10b974013;  */

void FUN_10b97400c(void)

{
  return;
}



/* Entry: 10b974014; end: 10b97417f;  */

void FUN_10b974014(undefined8 *param_1,undefined8 param_2,int param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plStack_60;
  undefined8 *puStack_58;
  
  if ((param_3 >= 1 && param_4 != 0) && (param_3 < 1 || -1 < (int)param_4)) {
    puVar3 = (undefined8 *)0x50;
    __Znwm();
    plVar5 = puVar3 + 1;
    puVar3[2] = 0;
    *plVar5 = 0;
    plVar6 = puVar3 + 3;
    *plVar6 = (long)&PTR_DAT_110d7b9c8;
    *puVar3 = &PTR_FUN_110d7b978;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(int *)(puVar3 + 6) = param_3;
    *(uint *)((long)puVar3 + 0x34) = param_4;
    puVar3[7] = 0x100000002;
    puVar3[8] = (ulong)(uint)(param_3 << 2);
    lVar4 = (ulong)param_4 * (ulong)(uint)(param_3 << 2);
    _malloc();
    puVar3[9] = lVar4;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_60 = plVar6;
    puStack_58 = puVar3;
    func_0x000107c278e4(puVar3 + 4,&plStack_60);
    func_0x000107c284e8(&plStack_60);
    plVar5 = plVar6;
    (**(code **)(*plVar6 + 0x40))();
    if (plVar5 == (long *)0x0) {
      FUN_10b99f5f8(&plStack_60,&UNK_10f7d0009);
      func_0x00010b974290();
    }
    else {
      if (puVar3[5] != 0) {
        plVar5 = (long *)(puVar3[5] + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *param_1 = 1;
      param_1[1] = plVar6;
      func_0x0001080cc5cc(0);
    }
    func_0x00010b974258(plVar6);
  }
  else {
    FUN_10b99f5f8(&plStack_60,&UNK_10f7cfff1);
    func_0x00010b974290();
  }
  return;
}



/* Entry: 10b974180; end: 10b974183;  */

void FUN_10b974180(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7b978;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b974184; end: 10b974197;  */

void FUN_10b974184(void)

{
  FUN_10b974248();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b974198; end: 10b9741ab;  */

void FUN_10b974198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b9741a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


