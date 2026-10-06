/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001537a4; end: 001537bb;  */

void FUN_001537a4(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *param_1;
  uVar7 = *(undefined8 *)(lVar5 + 0x48);
  uVar1 = *(undefined8 *)(lVar5 + 0x50);
  lVar4 = *(long *)(lVar5 + 0x58);
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar8 = *(long *)(lVar5 + 0x58);
      FUN_00186b5c(0);
      _swift_allocObject();
      FUN_00186b7c();
      _swift_release(lVar6);
      *(long *)(lVar8 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x10,lVar5 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar8 = *(long *)(lVar5 + 0x58);
      FUN_00186b5c(0);
      _swift_allocObject();
      FUN_00186b7c();
      _swift_release(lVar6);
      *(long *)(lVar8 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x10,lVar5 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar5 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar5);
  return;
}



/* Entry: 001537bc; end: 001538ef;  */

void FUN_001537bc(long *param_1,ulong param_2,code *param_3,undefined8 param_4,code *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *param_1;
  uVar7 = *(undefined8 *)(lVar5 + 0x48);
  uVar1 = *(undefined8 *)(lVar5 + 0x50);
  lVar4 = *(long *)(lVar5 + 0x58);
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar8 = *(long *)(lVar5 + 0x58);
      (*param_3)(0);
      _swift_allocObject();
      (*param_5)();
      _swift_release(lVar6);
      *(long *)(lVar8 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x10,lVar5 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar8 = *(long *)(lVar5 + 0x58);
      (*param_3)(0);
      _swift_allocObject();
      (*param_5)();
      _swift_release(lVar6);
      *(long *)(lVar8 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x10,lVar5 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar5 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar5);
  return;
}



/* Entry: 001538f0; end: 00153907;  */

void FUN_001538f0(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_00186b5c(0);
    _swift_allocObject();
    FUN_00186b7c();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x10,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 00153908; end: 001539ab;  */

void FUN_00153908(code *param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    (*param_1)(0);
    _swift_allocObject();
    (*param_3)();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x10,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 001539ac; end: 001539eb;  */

void FUN_001539ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x20,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 001539ec; end: 00153a03;  */

void FUN_001539ec(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_68 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_00186b5c(0);
    _swift_allocObject();
    FUN_00186b7c();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x20,auStack_68,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 00153a04; end: 00153ab3;  */

void FUN_00153a04(undefined8 param_1,code *param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_68 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    (*param_2)(0);
    _swift_allocObject();
    (*param_4)();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x20,auStack_68,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 00153ab4; end: 00153b37;  */

undefined1  [16] FUN_00153ab4(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = 0x58;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x58,&UNK_0000446d);
  }
  *param_1 = lVar1;
  *(long *)(lVar1 + 0x50) = unaff_x20;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar2 + 0x20,lVar1,0,0);
  *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar2 + 0x20);
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = (undefined8 *)(lVar1 + 0x48);
  auVar3._0_8_ = FUN_00153b38;
  return auVar3;
}



/* Entry: 00153b38; end: 00153b4f;  */

void FUN_00153b38(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar4 = *(undefined8 *)(lVar3 + 0x48);
  lVar5 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186b5c(0);
      _swift_allocObject();
      FUN_00186b7c();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x20,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    uVar1 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186b5c(0);
      _swift_allocObject();
      FUN_00186b7c();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x20,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 00153b50; end: 00153c83;  */

void FUN_00153b50(long *param_1,ulong param_2,code *param_3,undefined8 param_4,code *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar4 = *(undefined8 *)(lVar3 + 0x48);
  lVar5 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      (*param_3)(0);
      _swift_allocObject();
      (*param_5)();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x20,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    uVar1 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      (*param_3)(0);
      _swift_allocObject();
      (*param_5)();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x20,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 00153c84; end: 00153d9b;  */

void FUN_00153c84(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [72];
  undefined1 auStack_c8 [24];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _swift_beginAccess(param_4 + 0x28,auStack_c8,0,0);
  uStack_a8 = *(undefined8 *)(param_4 + 0x30);
  puStack_b0 = *(undefined **)(param_4 + 0x28);
  puStack_98 = *(undefined **)(param_4 + 0x40);
  uStack_a0 = *(undefined8 *)(param_4 + 0x38);
  uStack_88 = *(undefined8 *)(param_4 + 0x50);
  uVar8 = *(undefined8 *)(param_4 + 0x48);
  uStack_78 = *(undefined8 *)(param_4 + 0x60);
  uStack_80 = *(undefined8 *)(param_4 + 0x58);
  uStack_70 = *(undefined8 *)(param_4 + 0x68);
  if (puStack_b0 == (undefined *)0x0) {
    uVar1 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uVar3 = 2;
    uVar5 = 0xc000000000000000;
    uVar6 = 2;
    uVar7 = 2;
    uStack_128 = 0;
    uStack_130 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  }
  else {
    uStack_90._0_1_ = (undefined1)uVar8;
    uStack_90._1_1_ = (undefined1)((ulong)uVar8 >> 8);
    uStack_90._2_1_ = (undefined1)((ulong)uVar8 >> 0x10);
    uVar1 = uStack_a8;
    puVar2 = puStack_b0;
    puVar4 = puStack_98;
    uVar5 = uStack_a0;
    uVar3 = (undefined1)uStack_90;
    uVar6 = uStack_90._1_1_;
    uVar7 = uStack_90._2_1_;
    uStack_130 = uStack_78;
    uStack_128 = uStack_70;
    uStack_120 = uStack_88;
    uStack_118 = uStack_80;
  }
  uStack_90 = uVar8;
  func_0x00187028(&puStack_b0,auStack_110,0xaefe50,&UNK_007dafc0);
  *param_1 = puVar2;
  param_1[1] = uVar1;
  param_1[2] = uVar5;
  param_1[3] = puVar4;
  *(undefined1 *)(param_1 + 4) = uVar3;
  *(undefined1 *)((long)param_1 + 0x21) = uVar6;
  *(undefined1 *)((long)param_1 + 0x22) = uVar7;
  param_1[8] = uStack_128;
  param_1[7] = uStack_130;
  param_1[6] = uStack_118;
  param_1[5] = uStack_120;
  return;
}



/* Entry: 00153d9c; end: 00153ddf;  */

void FUN_00153d9c(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  *(undefined2 *)(param_1 + 4) = 0x202;
  *(undefined1 *)((long)param_1 + 0x22) = 2;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 00153de0; end: 00153ee3;  */

void FUN_00153de0(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_00186b5c(0);
    _swift_allocObject();
    FUN_00186b7c();
    _swift_release(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_a0 = param_1[8];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  _swift_beginAccess(lVar2 + 0x28,auStack_f8,1,0);
  uStack_78 = *(undefined8 *)(lVar2 + 0x40);
  uStack_80 = *(undefined8 *)(lVar2 + 0x38);
  uStack_58 = *(undefined8 *)(lVar2 + 0x60);
  uStack_60 = *(undefined8 *)(lVar2 + 0x58);
  uStack_50 = *(undefined8 *)(lVar2 + 0x68);
  uStack_68 = *(undefined8 *)(lVar2 + 0x50);
  uStack_70 = *(undefined8 *)(lVar2 + 0x48);
  uStack_88 = *(undefined8 *)(lVar2 + 0x30);
  uStack_90 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x50) = uStack_b8;
  *(undefined8 *)(lVar2 + 0x48) = uStack_c0;
  *(undefined8 *)(lVar2 + 0x60) = uStack_a8;
  *(undefined8 *)(lVar2 + 0x58) = uStack_b0;
  *(undefined8 *)(lVar2 + 0x68) = uStack_a0;
  *(undefined8 *)(lVar2 + 0x40) = uStack_c8;
  *(undefined8 *)(lVar2 + 0x38) = uStack_d0;
  *(undefined8 *)(lVar2 + 0x30) = uStack_d8;
  *(undefined8 *)(lVar2 + 0x28) = uStack_e0;
  func_0x00191ff4(&uStack_90,0xaefe50,&UNK_007dafc0);
  return;
}



/* Entry: 00153ee4; end: 00154007;  */

undefined1  [16] FUN_00153ee4(undefined8 *param_1)

{
  section *psVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  qword qVar11;
  qword qVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  psVar1 = &section_00000158;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x158,&UNK_000047f3);
  }
  *param_1 = psVar1;
  *(long *)psVar1[4].segname = unaff_x20;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar8 + 0x28,&psVar1[3].offset,0,0);
  uVar2 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(psVar1->sectname + 8) = *(undefined8 *)(lVar8 + 0x30);
  *(undefined8 *)psVar1->sectname = uVar2;
  uVar10 = *(undefined8 *)(lVar8 + 0x40);
  uVar9 = *(undefined8 *)(lVar8 + 0x38);
  qVar12 = *(qword *)(lVar8 + 0x50);
  qVar11 = *(qword *)(lVar8 + 0x48);
  uVar14 = *(undefined8 *)(lVar8 + 0x60);
  uVar13 = *(undefined8 *)(lVar8 + 0x58);
  uVar2 = *(undefined8 *)(lVar8 + 0x68);
  psVar1->flags = (int)uVar2;
  psVar1->reserved1 = (int)((ulong)uVar2 >> 0x20);
  psVar1->size = qVar12;
  psVar1->addr = qVar11;
  psVar1->reloff = (int)uVar14;
  psVar1->nrelocs = (int)((ulong)uVar14 >> 0x20);
  psVar1->offset = (int)uVar13;
  psVar1->align = (int)((ulong)uVar13 >> 0x20);
  *(undefined8 *)(psVar1->segname + 8) = uVar10;
  *(undefined8 *)psVar1->segname = uVar9;
  if (*(undefined **)psVar1->sectname == (undefined *)0x0) {
    uVar9 = 0xc000000000000000;
    uVar2 = 0;
    qVar11 = 0;
    qVar12 = 0;
    cVar5 = '\x02';
    cVar6 = '\x02';
    cVar7 = '\x02';
    uVar10 = 0;
    uVar13 = 0;
    puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  }
  else {
    uVar9 = *(undefined8 *)psVar1->segname;
    uVar2 = *(undefined8 *)(psVar1->sectname + 8);
    cVar5 = (char)psVar1->addr;
    cVar6 = *(char *)((long)&psVar1->addr + 1);
    cVar7 = *(char *)((long)&psVar1->addr + 2);
    qVar12._0_4_ = psVar1->offset;
    qVar12._4_4_ = psVar1->align;
    qVar11 = psVar1->size;
    uVar13._0_4_ = psVar1->flags;
    uVar13._4_4_ = psVar1->reserved1;
    uVar10._0_4_ = psVar1->reloff;
    uVar10._4_4_ = psVar1->nrelocs;
    puVar3 = *(undefined **)psVar1->sectname;
    puVar4 = *(undefined **)(psVar1->segname + 8);
  }
  *(undefined **)&psVar1->reserved2 = puVar3;
  *(undefined8 *)(psVar1[1].sectname + 8) = uVar9;
  *(undefined8 *)psVar1[1].sectname = uVar2;
  *(undefined **)psVar1[1].segname = puVar4;
  psVar1[1].segname[8] = cVar5;
  psVar1[1].segname[9] = cVar6;
  psVar1[1].segname[10] = cVar7;
  psVar1[1].size = qVar12;
  psVar1[1].addr = qVar11;
  psVar1[1].reloff = (int)uVar13;
  psVar1[1].nrelocs = (int)((ulong)uVar13 >> 0x20);
  psVar1[1].offset = (int)uVar10;
  psVar1[1].align = (int)((ulong)uVar10 >> 0x20);
  func_0x00187028(psVar1,&psVar1[1].flags,0xaefe50,&UNK_007dafc0);
  auVar15._8_8_ = &psVar1->reserved2;
  auVar15._0_8_ = FUN_00154008;
  return auVar15;
}



/* Entry: 00154008; end: 0015422b;  */

void FUN_00154008(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + 0xd8);
  lVar5 = *(long *)(lVar4 + 0x150);
  if ((param_2 & 1) == 0) {
    uVar9 = *(undefined8 *)(lVar4 + 0x60);
    uVar8 = *(undefined8 *)(lVar4 + 0x58);
    uVar13 = *(undefined8 *)(lVar4 + 0x70);
    uVar10 = *(undefined8 *)(lVar4 + 0x68);
    uVar17 = *(undefined8 *)(lVar4 + 0x80);
    uVar16 = *(undefined8 *)(lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x88);
    uVar14 = *(undefined8 *)(lVar4 + 0x50);
    uVar12 = *(undefined8 *)(lVar4 + 0x48);
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x150);
      FUN_00186b5c(0);
      _swift_allocObject();
      FUN_00186b7c();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x28,puVar1,1,0);
    uVar11 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 *)(lVar4 + 0x90) = uVar11;
    uVar15 = *(undefined8 *)(lVar5 + 0x40);
    uVar11 = *(undefined8 *)(lVar5 + 0x38);
    uVar19 = *(undefined8 *)(lVar5 + 0x50);
    uVar18 = *(undefined8 *)(lVar5 + 0x48);
    uVar21 = *(undefined8 *)(lVar5 + 0x60);
    uVar20 = *(undefined8 *)(lVar5 + 0x58);
    *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar5 + 0x68);
    *(undefined8 *)(lVar4 + 0xb8) = uVar19;
    *(undefined8 *)(lVar4 + 0xb0) = uVar18;
    *(undefined8 *)(lVar4 + 200) = uVar21;
    *(undefined8 *)(lVar4 + 0xc0) = uVar20;
    *(undefined8 *)(lVar4 + 0xa8) = uVar15;
    *(undefined8 *)(lVar4 + 0xa0) = uVar11;
    *(undefined8 *)(lVar5 + 0x40) = uVar9;
    *(undefined8 *)(lVar5 + 0x38) = uVar8;
    *(undefined8 *)(lVar5 + 0x50) = uVar13;
    *(undefined8 *)(lVar5 + 0x48) = uVar10;
    *(undefined8 *)(lVar5 + 0x60) = uVar17;
    *(undefined8 *)(lVar5 + 0x58) = uVar16;
    *(undefined8 *)(lVar5 + 0x68) = uVar3;
    *(undefined8 *)(lVar5 + 0x30) = uVar14;
    *(undefined8 *)(lVar5 + 0x28) = uVar12;
    func_0x00191ff4(lVar4 + 0x90,0xaefe50,&UNK_007dafc0);
  }
  else {
    *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(lVar4 + 0x70);
    *(undefined8 *)(lVar4 + 0xb0) = *(undefined8 *)(lVar4 + 0x68);
    *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(lVar4 + 0x80);
    *(undefined8 *)(lVar4 + 0xc0) = *(undefined8 *)(lVar4 + 0x78);
    *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar4 + 0x88);
    *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(lVar4 + 0x50);
    *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(lVar4 + 0xa8) = *(undefined8 *)(lVar4 + 0x60);
    *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(lVar4 + 0x58);
    FUN_00186e00(lVar4 + 0x90,puVar1);
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x150);
      FUN_00186b5c(0);
      _swift_allocObject();
      FUN_00186b7c();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    uVar12 = *(undefined8 *)(lVar4 + 0xb8);
    uVar8 = *(undefined8 *)(lVar4 + 0xb0);
    uVar15 = *(undefined8 *)(lVar4 + 200);
    uVar16 = *(undefined8 *)(lVar4 + 0xc0);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    uVar18 = *(undefined8 *)(lVar4 + 0x98);
    uVar17 = *(undefined8 *)(lVar4 + 0x90);
    uVar13 = *(undefined8 *)(lVar4 + 0xa8);
    uVar9 = *(undefined8 *)(lVar4 + 0xa0);
    _swift_beginAccess(lVar5 + 0x28,lVar4 + 0x138,1,0);
    uVar10 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(lVar5 + 0x30);
    *puVar1 = uVar10;
    uVar14 = *(undefined8 *)(lVar5 + 0x40);
    uVar10 = *(undefined8 *)(lVar5 + 0x38);
    uVar19 = *(undefined8 *)(lVar5 + 0x50);
    uVar11 = *(undefined8 *)(lVar5 + 0x48);
    uVar21 = *(undefined8 *)(lVar5 + 0x60);
    uVar20 = *(undefined8 *)(lVar5 + 0x58);
    *(undefined8 *)(lVar4 + 0x118) = *(undefined8 *)(lVar5 + 0x68);
    *(undefined8 *)(lVar4 + 0x100) = uVar19;
    *(undefined8 *)(lVar4 + 0xf8) = uVar11;
    *(undefined8 *)(lVar4 + 0x110) = uVar21;
    *(undefined8 *)(lVar4 + 0x108) = uVar20;
    *(undefined8 *)(lVar4 + 0xf0) = uVar14;
    *(undefined8 *)(lVar4 + 0xe8) = uVar10;
    *(undefined8 *)(lVar5 + 0x40) = uVar13;
    *(undefined8 *)(lVar5 + 0x38) = uVar9;
    *(undefined8 *)(lVar5 + 0x50) = uVar12;
    *(undefined8 *)(lVar5 + 0x48) = uVar8;
    *(undefined8 *)(lVar5 + 0x60) = uVar15;
    *(undefined8 *)(lVar5 + 0x58) = uVar16;
    *(undefined8 *)(lVar5 + 0x68) = uVar3;
    *(undefined8 *)(lVar5 + 0x30) = uVar18;
    *(undefined8 *)(lVar5 + 0x28) = uVar17;
    func_0x00191ff4(puVar1,0xaefe50,&UNK_007dafc0);
    func_0x00186e34(lVar4 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0015422c; end: 00154423;  */

bool FUN_0015422c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_170 [72];
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _swift_beginAccess(param_3 + 0x28,auStack_98,0,0);
  uStack_78 = *(undefined8 *)(param_3 + 0x30);
  lVar3 = *(long *)(param_3 + 0x28);
  uStack_68 = *(undefined8 *)(param_3 + 0x40);
  uStack_70 = *(undefined8 *)(param_3 + 0x38);
  uStack_58 = *(undefined8 *)(param_3 + 0x50);
  uStack_60 = *(undefined8 *)(param_3 + 0x48);
  uStack_48 = *(undefined8 *)(param_3 + 0x60);
  uStack_50 = *(undefined8 *)(param_3 + 0x58);
  uStack_40 = *(undefined8 *)(param_3 + 0x68);
  lStack_80 = lVar3;
  if (lVar3 == 0) {
    lStack_128 = 0;
    uStack_118 = *(undefined8 *)(param_3 + 0x38);
    uStack_120 = *(undefined8 *)(param_3 + 0x30);
    uStack_108 = *(undefined8 *)(param_3 + 0x48);
    uStack_110 = *(undefined8 *)(param_3 + 0x40);
    uStack_f8 = *(undefined8 *)(param_3 + 0x58);
    uStack_100 = *(undefined8 *)(param_3 + 0x50);
    uStack_e8 = *(undefined8 *)(param_3 + 0x68);
    uStack_f0 = *(undefined8 *)(param_3 + 0x60);
    uVar1 = 0xaefe50;
    puVar2 = &UNK_007dafc0;
    func_0x00187028(&lStack_80,auStack_170,0xaefe50,&UNK_007dafc0);
  }
  else {
    uStack_118 = *(undefined8 *)(param_3 + 0x38);
    uStack_120 = *(undefined8 *)(param_3 + 0x30);
    uStack_108 = *(undefined8 *)(param_3 + 0x48);
    uStack_110 = *(undefined8 *)(param_3 + 0x40);
    uStack_f8 = *(undefined8 *)(param_3 + 0x58);
    uStack_100 = *(undefined8 *)(param_3 + 0x50);
    uStack_e8 = *(undefined8 *)(param_3 + 0x68);
    uStack_f0 = *(undefined8 *)(param_3 + 0x60);
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    lStack_128 = lVar3;
    func_0x00187028(&lStack_80,auStack_170,0xaefe50,&UNK_007dafc0);
    uVar1 = 0xaf08a8;
    puVar2 = &UNK_007dafc8;
  }
  func_0x00191ff4(&lStack_128,uVar1,puVar2);
  return lVar3 != 0;
}



/* Entry: 00154424; end: 00154463;  */

void FUN_00154424(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x70,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x70));
  return;
}



/* Entry: 00154464; end: 0015457b;  */

void FUN_00154464(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_00186b5c(0);
    _swift_allocObject();
    FUN_00186b7c();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x70,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x70);
  *(undefined8 *)(lVar2 + 0x70) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 0015457c; end: 0015469b;  */

void FUN_0015457c(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186b5c(0);
      _swift_allocObject();
      FUN_00186b7c();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x70,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x70);
    *(undefined8 *)(lVar4 + 0x70) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186b5c(0);
      _swift_allocObject();
      FUN_00186b7c();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x70,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x70);
    *(undefined8 *)(lVar4 + 0x70) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 0015469c; end: 001546db;  */

void FUN_0015469c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x78,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_3 + 0x78));
  return;
}



/* Entry: 001546dc; end: 001547f3;  */

void FUN_001546dc(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_00186b5c(0);
    _swift_allocObject();
    FUN_00186b7c();
    _swift_release(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x78,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x78);
  *(undefined8 *)(lVar2 + 0x78) = param_1;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 001547f4; end: 00154913;  */

void FUN_001547f4(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186b5c(0);
      _swift_allocObject();
      FUN_00186b7c();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x78,lVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    *(undefined8 *)(lVar4 + 0x78) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      FUN_00186b5c(0);
      _swift_allocObject();
      FUN_00186b7c();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x78,lVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    *(undefined8 *)(lVar4 + 0x78) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 00154914; end: 00154957;  */

char FUN_00154914(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x80,auStack_38,0,0);
  cVar1 = '\0';
  if (*(char *)(param_3 + 0x80) != '\x03') {
    cVar1 = *(char *)(param_3 + 0x80);
  }
  return cVar1;
}



/* Entry: 00154958; end: 00154a67;  */

void FUN_00154958(undefined1 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_00186b5c(0);
    _swift_allocObject();
    FUN_00186b7c();
    _swift_release(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x80,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x80) = param_1;
  return;
}



/* Entry: 00154a68; end: 00154b17;  */

void FUN_00154a68(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *param_1;
  uVar1 = *(undefined1 *)(lVar3 + 0x50);
  lVar4 = *(long *)(lVar3 + 0x48);
  uVar2 = *(ulong *)(lVar4 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar4 + 0x10);
  lVar4 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar3 + 0x48);
    FUN_00186b5c(0);
    _swift_allocObject();
    FUN_00186b7c();
    _swift_release(lVar5);
    *(long *)(lVar6 + 0x10) = lVar4;
  }
  lVar5 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar5 = 0x30;
  }
  _swift_beginAccess(lVar4 + 0x80,lVar3 + lVar5,1,0);
  *(undefined1 *)(lVar4 + 0x80) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 00154b18; end: 00154b5b;  */

bool FUN_00154b18(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x80,auStack_38,0,0);
  return *(char *)(param_3 + 0x80) != '\x03';
}



/* Entry: 00154b5c; end: 00154be7;  */

void FUN_00154b5c(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_00186b5c(0);
    _swift_allocObject();
    FUN_00186b7c();
    _swift_release(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x80,auStack_48,1,0);
  *(undefined1 *)(lVar2 + 0x80) = 3;
  return;
}



/* Entry: 00154be8; end: 00154c8f;  */

undefined8 FUN_00154be8(void)

{
  return 0x154bf8;
}



/* Entry: 00154c90; end: 00154d3f;  */

undefined8 FUN_00154c90(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  if (*param_1 != -1) {
    _swift_once(param_1,param_3);
  }
  _swift_retain(*param_2);
  return 0;
}



/* Entry: 00154d40; end: 00154e6b;  */

void FUN_00154d40(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_00186e60(0);
    _swift_allocObject();
    FUN_0016cc84(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x10) = param_1;
  *(undefined8 *)(lVar3 + 0x18) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 00154e6c; end: 00154f7b;  */

void FUN_00154e6c(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *param_1;
  uVar6 = *(undefined8 *)(lVar4 + 0x48);
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  lVar5 = *(long *)(lVar4 + 0x58);
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_00186e60(0);
      _swift_allocObject();
      FUN_0016cc84(lVar5,uVar3);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x10,lVar4 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    *(undefined8 *)(lVar5 + 0x18) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_00186e60(0);
      _swift_allocObject();
      FUN_0016cc84(lVar5,uVar3);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x10,lVar4 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    *(undefined8 *)(lVar5 + 0x18) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 00154f7c; end: 00154fff;  */

void FUN_00154f7c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_00186e60(0);
    _swift_allocObject();
    FUN_0016cc84();
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 00155000; end: 00155047;  */

undefined4 FUN_00155000(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x20,auStack_38,0,0);
  uVar1 = 0;
  if (*(char *)(param_3 + 0x24) != '\x01') {
    uVar1 = *(undefined4 *)(param_3 + 0x20);
  }
  return uVar1;
}



/* Entry: 00155048; end: 00155157;  */

void FUN_00155048(undefined4 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_00186e60(0);
    _swift_allocObject();
    FUN_0016cc84(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x20,auStack_48,1,0);
  *(undefined4 *)(lVar3 + 0x20) = param_1;
  *(undefined1 *)(lVar3 + 0x24) = 0;
  return;
}



/* Entry: 00155158; end: 00155203;  */

void FUN_00155158(long *param_1,ulong param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  uVar1 = *(undefined4 *)(lVar4 + 0x50);
  lVar5 = *(long *)(lVar4 + 0x48);
  uVar2 = *(ulong *)(lVar5 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar3 = 0;
    FUN_00186e60(0);
    _swift_allocObject();
    FUN_0016cc84(lVar5,uVar3);
    *(long *)(lVar6 + 0x10) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x20,lVar4 + lVar6,1,0);
  *(undefined4 *)(lVar5 + 0x20) = uVar1;
  *(undefined1 *)(lVar5 + 0x24) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 00155204; end: 00155247;  */

bool FUN_00155204(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x20,auStack_38,0,0);
  return *(char *)(param_3 + 0x24) != '\x01';
}



/* Entry: 00155248; end: 001552cb;  */

void FUN_00155248(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_00186e60(0);
    _swift_allocObject();
    FUN_0016cc84();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x20,auStack_48,1,0);
  *(undefined4 *)(lVar2 + 0x20) = 0;
  *(undefined1 *)(lVar2 + 0x24) = 1;
  return;
}



/* Entry: 001552cc; end: 0015541f;  */

void FUN_001552cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_178 [128];
  undefined1 auStack_f8 [24];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  
  _swift_beginAccess(param_4 + 0x28,auStack_f8,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0x70);
  uStack_a0 = *(undefined8 *)(param_4 + 0x68);
  uStack_88 = *(undefined8 *)(param_4 + 0x80);
  uStack_90 = *(undefined8 *)(param_4 + 0x78);
  uStack_80 = *(undefined8 *)(param_4 + 0x88);
  uStack_78 = (undefined1)*(undefined8 *)(param_4 + 0x90);
  uStack_6f = (undefined7)*(undefined8 *)(param_4 + 0x99);
  uStack_68 = (undefined1)((ulong)*(undefined8 *)(param_4 + 0x99) >> 0x38);
  uStack_77 = (undefined7)*(undefined8 *)(param_4 + 0x91);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)(param_4 + 0x91) >> 0x38);
  uStack_d8 = *(undefined8 *)(param_4 + 0x30);
  puStack_e0 = *(undefined **)(param_4 + 0x28);
  puStack_c8 = *(undefined **)(param_4 + 0x40);
  uStack_d0 = *(undefined8 *)(param_4 + 0x38);
  uStack_b8 = *(undefined8 *)(param_4 + 0x50);
  uStack_c0 = *(undefined8 *)(param_4 + 0x48);
  uStack_a8 = *(undefined8 *)(param_4 + 0x60);
  uStack_b0 = *(undefined8 *)(param_4 + 0x58);
  iVar1 = (int)&puStack_e0;
  FUN_00186e80();
  if (iVar1 == 1) {
    uStack_188 = 0;
    uStack_190 = 0;
    uVar8 = 1;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uVar2 = 0;
    puVar5 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
    puVar6 = PTR___swiftEmptyArrayStorage_0099b8f0;
    uVar7 = 0xc000000000000000;
    uVar4 = 2;
    uVar9 = 2;
    uVar3 = 0;
  }
  else {
    uStack_198 = uStack_a0;
    uStack_1a0 = uStack_a8;
    uStack_188 = uStack_b0;
    uStack_190 = uStack_b8;
    uStack_1b8 = CONCAT71(uStack_77,uStack_78);
    uStack_1c0 = uStack_80;
    uStack_1a8 = uStack_88;
    uStack_1b0 = uStack_90;
    uVar8 = CONCAT71(uStack_6f,uStack_70);
    uVar2 = uStack_d8;
    puVar5 = puStack_c8;
    puVar6 = puStack_e0;
    uVar7 = uStack_d0;
    uVar4 = (undefined1)uStack_c0;
    uVar9 = (undefined1)uStack_98;
    uVar3 = uStack_68;
  }
  func_0x00187028(&puStack_e0,auStack_178,0xaefe48,&UNK_007d9c20);
  *param_1 = puVar6;
  param_1[1] = uVar2;
  param_1[2] = uVar7;
  param_1[3] = puVar5;
  *(undefined1 *)(param_1 + 4) = uVar4;
  param_1[8] = uStack_198;
  param_1[7] = uStack_1a0;
  param_1[6] = uStack_188;
  param_1[5] = uStack_190;
  *(undefined1 *)(param_1 + 9) = uVar9;
  param_1[0xb] = uStack_1a8;
  param_1[10] = uStack_1b0;
  param_1[0xd] = uStack_1b8;
  param_1[0xc] = uStack_1c0;
  param_1[0xe] = uVar8;
  *(undefined1 *)(param_1 + 0xf) = uVar3;
  return;
}



/* Entry: 00155420; end: 0015546f;  */

void FUN_00155420(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  *(undefined1 *)(param_1 + 4) = 2;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 2;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return;
}



/* Entry: 00155470; end: 001555ab;  */

void FUN_00155470(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  undefined8 uStack_c0;
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
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_00186e60(0);
    _swift_allocObject();
    FUN_0016cc84();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_e0 = param_1[0xc];
  uStack_d8 = (undefined1)param_1[0xd];
  uStack_cf = *(undefined8 *)((long)param_1 + 0x71);
  uStack_d7 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
  uStack_d0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  func_0x0011630c(&uStack_140);
  _swift_beginAccess(lVar2 + 0x28,auStack_158,1,0);
  uStack_78 = *(undefined8 *)(lVar2 + 0x70);
  uStack_80 = *(undefined8 *)(lVar2 + 0x68);
  uStack_68 = *(undefined8 *)(lVar2 + 0x80);
  uStack_70 = *(undefined8 *)(lVar2 + 0x78);
  uStack_4f = *(undefined8 *)(lVar2 + 0x99);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)(lVar2 + 0x91) >> 0x38);
  uStack_60 = *(undefined8 *)(lVar2 + 0x88);
  uStack_58 = (undefined1)*(undefined8 *)(lVar2 + 0x90);
  uStack_57 = (undefined7)((ulong)*(undefined8 *)(lVar2 + 0x90) >> 8);
  uStack_a8 = *(undefined8 *)(lVar2 + 0x40);
  uStack_b0 = *(undefined8 *)(lVar2 + 0x38);
  uStack_b8 = *(undefined8 *)(lVar2 + 0x30);
  uStack_c0 = *(undefined8 *)(lVar2 + 0x28);
  uStack_88 = *(undefined8 *)(lVar2 + 0x60);
  uStack_90 = *(undefined8 *)(lVar2 + 0x58);
  uStack_98 = *(undefined8 *)(lVar2 + 0x50);
  uStack_a0 = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar2 + 0x80) = uStack_e8;
  *(undefined8 *)(lVar2 + 0x78) = uStack_f0;
  *(undefined8 *)(lVar2 + 0x60) = uStack_108;
  *(undefined8 *)(lVar2 + 0x58) = uStack_110;
  *(undefined8 *)(lVar2 + 0x30) = uStack_138;
  *(undefined8 *)(lVar2 + 0x28) = uStack_140;
  *(undefined8 *)(lVar2 + 0x40) = uStack_128;
  *(undefined8 *)(lVar2 + 0x38) = uStack_130;
  *(undefined8 *)(lVar2 + 0x50) = uStack_118;
  *(undefined8 *)(lVar2 + 0x48) = uStack_120;
  *(undefined8 *)(lVar2 + 0x70) = uStack_f8;
  *(undefined8 *)(lVar2 + 0x68) = uStack_100;
  *(undefined8 *)(lVar2 + 0x99) = uStack_cf;
  *(ulong *)(lVar2 + 0x91) = CONCAT17(uStack_d0,uStack_d7);
  *(ulong *)(lVar2 + 0x90) = CONCAT71(uStack_d7,uStack_d8);
  *(undefined8 *)(lVar2 + 0x88) = uStack_e0;
  func_0x00191ff4(&uStack_c0,0xaefe48,&UNK_007d9c20);
  return;
}



/* Entry: 001555ac; end: 0015570b;  */

undefined1  [16] FUN_001555ac(undefined8 *param_1)

{
  qword *pqVar1;
  qword *pqVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long unaff_x20;
  long lVar9;
  qword qVar10;
  qword qVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  
  pqVar1 = &section_00000298.addr;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x2b8,&UNK_000065f4);
  }
  *param_1 = pqVar1;
  pqVar1[0x56] = unaff_x20;
  lVar9 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar9 + 0x28,pqVar1 + 0x50,0,0);
  qVar11 = *(qword *)(lVar9 + 0x30);
  qVar10 = *(qword *)(lVar9 + 0x28);
  uVar12 = *(undefined8 *)(lVar9 + 0x40);
  uVar7 = *(undefined8 *)(lVar9 + 0x38);
  uVar13 = *(undefined8 *)(lVar9 + 0x48);
  uVar15 = *(undefined8 *)(lVar9 + 0x60);
  uVar14 = *(undefined8 *)(lVar9 + 0x58);
  pqVar1[5] = *(undefined8 *)(lVar9 + 0x50);
  pqVar1[4] = uVar13;
  pqVar1[7] = uVar15;
  pqVar1[6] = uVar14;
  pqVar1[1] = qVar11;
  *pqVar1 = qVar10;
  pqVar1[3] = uVar12;
  pqVar1[2] = uVar7;
  uVar12 = *(undefined8 *)(lVar9 + 0x70);
  uVar7 = *(undefined8 *)(lVar9 + 0x68);
  uVar14 = *(undefined8 *)(lVar9 + 0x80);
  uVar13 = *(undefined8 *)(lVar9 + 0x78);
  uVar16 = *(undefined8 *)(lVar9 + 0x90);
  uVar15 = *(undefined8 *)(lVar9 + 0x88);
  uVar17 = *(undefined8 *)(lVar9 + 0x91);
  *(undefined8 *)((long)pqVar1 + 0x71) = *(undefined8 *)(lVar9 + 0x99);
  *(undefined8 *)((long)pqVar1 + 0x69) = uVar17;
  pqVar1[0xb] = uVar14;
  pqVar1[10] = uVar13;
  pqVar1[0xd] = uVar16;
  pqVar1[0xc] = uVar15;
  pqVar1[9] = uVar12;
  pqVar1[8] = uVar7;
  pqVar2 = pqVar1;
  FUN_00186e80();
  if ((int)pqVar2 == 1) {
    uVar3 = 0;
    uVar12 = 0xc000000000000000;
    qVar10 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar6 = 2;
    uVar7 = 1;
    uVar8 = 2;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
    puVar5 = PTR___swiftEmptyArrayStorage_0099b8f0;
  }
  else {
    puVar5 = (undefined *)*pqVar1;
    uVar12 = pqVar1[2];
    qVar10 = pqVar1[1];
    puVar4 = (undefined *)pqVar1[3];
    uVar6 = (undefined1)*(dword *)(pqVar1 + 4);
    uVar14 = pqVar1[6];
    uVar13 = pqVar1[5];
    uVar16 = pqVar1[8];
    uVar15 = pqVar1[7];
    uVar8 = *(undefined1 *)(pqVar1 + 9);
    uVar18 = pqVar1[0xb];
    uVar17 = pqVar1[10];
    uVar20 = pqVar1[0xd];
    uVar19 = pqVar1[0xc];
    uVar7 = pqVar1[0xe];
    uVar3 = *(undefined1 *)(pqVar1 + 0xf);
  }
  pqVar1[0x10] = (qword)puVar5;
  pqVar1[0x12] = uVar12;
  pqVar1[0x11] = qVar10;
  pqVar1[0x13] = (qword)puVar4;
  *(undefined1 *)(pqVar1 + 0x14) = uVar6;
  pqVar1[0x16] = uVar14;
  pqVar1[0x15] = uVar13;
  pqVar1[0x18] = uVar16;
  pqVar1[0x17] = uVar15;
  *(undefined1 *)(pqVar1 + 0x19) = uVar8;
  pqVar1[0x1b] = uVar18;
  pqVar1[0x1a] = uVar17;
  pqVar1[0x1d] = uVar20;
  pqVar1[0x1c] = uVar19;
  pqVar1[0x1e] = uVar7;
  *(undefined1 *)(pqVar1 + 0x1f) = uVar3;
  func_0x00187028(pqVar1,pqVar1 + 0x20,0xaefe48,&UNK_007d9c20);
  auVar21._8_8_ = pqVar1 + 0x10;
  auVar21._0_8_ = FUN_0015570c;
  return auVar21;
}



/* Entry: 0015570c; end: 001559c7;  */

void FUN_0015570c(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 uStack_58;
  undefined7 uStack_57;
  
  lVar7 = *param_1;
  puVar1 = (undefined8 *)(lVar7 + 0x100);
  puVar2 = (undefined8 *)(lVar7 + 0x180);
  puVar3 = (undefined8 *)(lVar7 + 0x200);
  lVar8 = *(long *)(lVar7 + 0x2b0);
  if ((param_2 & 1) == 0) {
    uVar14 = *(undefined8 *)(lVar7 + 200);
    uVar5 = *(undefined8 *)(lVar7 + 0xc0);
    uVar21 = *(undefined8 *)(lVar7 + 0xd8);
    uVar18 = *(undefined8 *)(lVar7 + 0xd0);
    uVar13 = *(undefined8 *)(lVar7 + 0xe0);
    uStack_58 = (undefined1)*(undefined8 *)(lVar7 + 0xe8);
    uVar15 = *(undefined8 *)(lVar7 + 0xf1);
    uVar10 = *(undefined8 *)(lVar7 + 0xe9);
    uStack_57 = (undefined7)uVar10;
    uVar16 = *(undefined8 *)(lVar7 + 0x88);
    uVar11 = *(undefined8 *)(lVar7 + 0x80);
    uVar22 = *(undefined8 *)(lVar7 + 0x98);
    uVar19 = *(undefined8 *)(lVar7 + 0x90);
    uVar17 = *(undefined8 *)(lVar7 + 0xa8);
    uVar12 = *(undefined8 *)(lVar7 + 0xa0);
    uVar23 = *(undefined8 *)(lVar7 + 0xb8);
    uVar20 = *(undefined8 *)(lVar7 + 0xb0);
    uVar4 = *(ulong *)(lVar8 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((uVar4 & 1) == 0) {
      lVar9 = *(long *)(lVar7 + 0x2b0);
      uVar6 = 0;
      FUN_00186e60(0);
      _swift_allocObject();
      FUN_0016cc84(lVar8,uVar6);
      *(long *)(lVar9 + 0x10) = lVar8;
    }
    *(undefined8 *)(lVar7 + 0x1c8) = uVar14;
    *(undefined8 *)(lVar7 + 0x1c0) = uVar5;
    *(undefined8 *)(lVar7 + 0x1d8) = uVar21;
    *(undefined8 *)(lVar7 + 0x1d0) = uVar18;
    *(ulong *)(lVar7 + 0x1e8) = CONCAT71(uStack_57,uStack_58);
    *(undefined8 *)(lVar7 + 0x1e0) = uVar13;
    *(undefined8 *)(lVar7 + 0x1f1) = uVar15;
    *(undefined8 *)(lVar7 + 0x1e9) = uVar10;
    *(undefined8 *)(lVar7 + 0x188) = uVar16;
    *puVar2 = uVar11;
    *(undefined8 *)(lVar7 + 0x198) = uVar22;
    *(undefined8 *)(lVar7 + 400) = uVar19;
    *(undefined8 *)(lVar7 + 0x1a8) = uVar17;
    *(undefined8 *)(lVar7 + 0x1a0) = uVar12;
    *(undefined8 *)(lVar7 + 0x1b8) = uVar23;
    *(undefined8 *)(lVar7 + 0x1b0) = uVar20;
    func_0x0011630c(puVar2);
    _swift_beginAccess(lVar8 + 0x28,puVar3,1,0);
    uVar13 = *(undefined8 *)(lVar8 + 0x30);
    uVar5 = *(undefined8 *)(lVar8 + 0x28);
    uVar11 = *(undefined8 *)(lVar8 + 0x40);
    uVar10 = *(undefined8 *)(lVar8 + 0x38);
    uVar12 = *(undefined8 *)(lVar8 + 0x48);
    uVar15 = *(undefined8 *)(lVar8 + 0x60);
    uVar14 = *(undefined8 *)(lVar8 + 0x58);
    *(undefined8 *)(lVar7 + 0x128) = *(undefined8 *)(lVar8 + 0x50);
    *(undefined8 *)(lVar7 + 0x120) = uVar12;
    *(undefined8 *)(lVar7 + 0x138) = uVar15;
    *(undefined8 *)(lVar7 + 0x130) = uVar14;
    *(undefined8 *)(lVar7 + 0x108) = uVar13;
    *puVar1 = uVar5;
    *(undefined8 *)(lVar7 + 0x118) = uVar11;
    *(undefined8 *)(lVar7 + 0x110) = uVar10;
    uVar13 = *(undefined8 *)(lVar8 + 0x70);
    uVar5 = *(undefined8 *)(lVar8 + 0x68);
    uVar11 = *(undefined8 *)(lVar8 + 0x80);
    uVar10 = *(undefined8 *)(lVar8 + 0x78);
    uVar14 = *(undefined8 *)(lVar8 + 0x90);
    uVar12 = *(undefined8 *)(lVar8 + 0x88);
    uVar15 = *(undefined8 *)(lVar8 + 0x91);
    *(undefined8 *)(lVar7 + 0x171) = *(undefined8 *)(lVar8 + 0x99);
    *(undefined8 *)(lVar7 + 0x169) = uVar15;
    *(undefined8 *)(lVar7 + 0x158) = uVar11;
    *(undefined8 *)(lVar7 + 0x150) = uVar10;
    *(undefined8 *)(lVar7 + 0x168) = uVar14;
    *(undefined8 *)(lVar7 + 0x160) = uVar12;
    *(undefined8 *)(lVar7 + 0x148) = uVar13;
    *(undefined8 *)(lVar7 + 0x140) = uVar5;
    uVar14 = *(undefined8 *)(lVar7 + 0x1d8);
    uVar12 = *(undefined8 *)(lVar7 + 0x1d0);
    uVar13 = *(undefined8 *)(lVar7 + 0x1e8);
    uVar5 = *(undefined8 *)(lVar7 + 0x1e0);
    uVar11 = *(undefined8 *)(lVar7 + 0x1f1);
    uVar10 = *(undefined8 *)(lVar7 + 0x1e9);
    uVar15 = *(undefined8 *)(lVar7 + 0x1c0);
    *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(lVar7 + 0x1c8);
    *(undefined8 *)(lVar8 + 0x68) = uVar15;
    *(undefined8 *)(lVar8 + 0x99) = uVar11;
    *(undefined8 *)(lVar8 + 0x91) = uVar10;
    *(undefined8 *)(lVar8 + 0x90) = uVar13;
    *(undefined8 *)(lVar8 + 0x88) = uVar5;
    *(undefined8 *)(lVar8 + 0x80) = uVar14;
    *(undefined8 *)(lVar8 + 0x78) = uVar12;
    uVar13 = *(undefined8 *)(lVar7 + 0x188);
    uVar5 = *puVar2;
    uVar11 = *(undefined8 *)(lVar7 + 0x198);
    uVar10 = *(undefined8 *)(lVar7 + 400);
    uVar14 = *(undefined8 *)(lVar7 + 0x1a8);
    uVar12 = *(undefined8 *)(lVar7 + 0x1a0);
    uVar15 = *(undefined8 *)(lVar7 + 0x1b0);
    *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)(lVar7 + 0x1b8);
    *(undefined8 *)(lVar8 + 0x58) = uVar15;
    *(undefined8 *)(lVar8 + 0x50) = uVar14;
    *(undefined8 *)(lVar8 + 0x48) = uVar12;
    *(undefined8 *)(lVar8 + 0x40) = uVar11;
    *(undefined8 *)(lVar8 + 0x38) = uVar10;
    *(undefined8 *)(lVar8 + 0x30) = uVar13;
    *(undefined8 *)(lVar8 + 0x28) = uVar5;
    func_0x00191ff4(puVar1,0xaefe48,&UNK_007d9c20);
  }
  else {
    *(undefined8 *)(lVar7 + 0x148) = *(undefined8 *)(lVar7 + 200);
    *(undefined8 *)(lVar7 + 0x140) = *(undefined8 *)(lVar7 + 0xc0);
    *(undefined8 *)(lVar7 + 0x158) = *(undefined8 *)(lVar7 + 0xd8);
    *(undefined8 *)(lVar7 + 0x150) = *(undefined8 *)(lVar7 + 0xd0);
    *(undefined8 *)(lVar7 + 0x168) = *(undefined8 *)(lVar7 + 0xe8);
    *(undefined8 *)(lVar7 + 0x160) = *(undefined8 *)(lVar7 + 0xe0);
    *(undefined8 *)(lVar7 + 0x171) = *(undefined8 *)(lVar7 + 0xf1);
    *(undefined8 *)(lVar7 + 0x169) = *(undefined8 *)(lVar7 + 0xe9);
    *(undefined8 *)(lVar7 + 0x108) = *(undefined8 *)(lVar7 + 0x88);
    *puVar1 = *(undefined8 *)(lVar7 + 0x80);
    *(undefined8 *)(lVar7 + 0x118) = *(undefined8 *)(lVar7 + 0x98);
    *(undefined8 *)(lVar7 + 0x110) = *(undefined8 *)(lVar7 + 0x90);
    *(undefined8 *)(lVar7 + 0x128) = *(undefined8 *)(lVar7 + 0xa8);
    *(undefined8 *)(lVar7 + 0x120) = *(undefined8 *)(lVar7 + 0xa0);
    *(undefined8 *)(lVar7 + 0x138) = *(undefined8 *)(lVar7 + 0xb8);
    *(undefined8 *)(lVar7 + 0x130) = *(undefined8 *)(lVar7 + 0xb0);
    FUN_00186e98(puVar1,puVar2);
    uVar4 = *(ulong *)(lVar8 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((uVar4 & 1) == 0) {
      lVar9 = *(long *)(lVar7 + 0x2b0);
      uVar5 = 0;
      FUN_00186e60(0);
      _swift_allocObject();
      FUN_0016cc84(lVar8,uVar5);
      *(long *)(lVar9 + 0x10) = lVar8;
    }
    *(undefined8 *)(lVar7 + 0x248) = *(undefined8 *)(lVar7 + 0x148);
    *(undefined8 *)(lVar7 + 0x240) = *(undefined8 *)(lVar7 + 0x140);
    *(undefined8 *)(lVar7 + 600) = *(undefined8 *)(lVar7 + 0x158);
    *(undefined8 *)(lVar7 + 0x250) = *(undefined8 *)(lVar7 + 0x150);
    *(undefined8 *)(lVar7 + 0x268) = *(undefined8 *)(lVar7 + 0x168);
    *(undefined8 *)(lVar7 + 0x260) = *(undefined8 *)(lVar7 + 0x160);
    *(undefined8 *)(lVar7 + 0x271) = *(undefined8 *)(lVar7 + 0x171);
    *(undefined8 *)(lVar7 + 0x269) = *(undefined8 *)(lVar7 + 0x169);
    *(undefined8 *)(lVar7 + 0x208) = *(undefined8 *)(lVar7 + 0x108);
    *puVar3 = *puVar1;
    *(undefined8 *)(lVar7 + 0x218) = *(undefined8 *)(lVar7 + 0x118);
    *(undefined8 *)(lVar7 + 0x210) = *(undefined8 *)(lVar7 + 0x110);
    *(undefined8 *)(lVar7 + 0x228) = *(undefined8 *)(lVar7 + 0x128);
    *(undefined8 *)(lVar7 + 0x220) = *(undefined8 *)(lVar7 + 0x120);
    *(undefined8 *)(lVar7 + 0x238) = *(undefined8 *)(lVar7 + 0x138);
    *(undefined8 *)(lVar7 + 0x230) = *(undefined8 *)(lVar7 + 0x130);
    func_0x0011630c(puVar3);
    _swift_beginAccess(lVar8 + 0x28,lVar7 + 0x298,1,0);
    uVar13 = *(undefined8 *)(lVar8 + 0x30);
    uVar5 = *(undefined8 *)(lVar8 + 0x28);
    uVar11 = *(undefined8 *)(lVar8 + 0x40);
    uVar10 = *(undefined8 *)(lVar8 + 0x38);
    uVar12 = *(undefined8 *)(lVar8 + 0x48);
    uVar15 = *(undefined8 *)(lVar8 + 0x60);
    uVar14 = *(undefined8 *)(lVar8 + 0x58);
    *(undefined8 *)(lVar7 + 0x1a8) = *(undefined8 *)(lVar8 + 0x50);
    *(undefined8 *)(lVar7 + 0x1a0) = uVar12;
    *(undefined8 *)(lVar7 + 0x1b8) = uVar15;
    *(undefined8 *)(lVar7 + 0x1b0) = uVar14;
    *(undefined8 *)(lVar7 + 0x188) = uVar13;
    *puVar2 = uVar5;
    *(undefined8 *)(lVar7 + 0x198) = uVar11;
    *(undefined8 *)(lVar7 + 400) = uVar10;
    uVar13 = *(undefined8 *)(lVar8 + 0x70);
    uVar5 = *(undefined8 *)(lVar8 + 0x68);
    uVar11 = *(undefined8 *)(lVar8 + 0x80);
    uVar10 = *(undefined8 *)(lVar8 + 0x78);
    uVar14 = *(undefined8 *)(lVar8 + 0x90);
    uVar12 = *(undefined8 *)(lVar8 + 0x88);
    uVar15 = *(undefined8 *)(lVar8 + 0x91);
    *(undefined8 *)(lVar7 + 0x1f1) = *(undefined8 *)(lVar8 + 0x99);
    *(undefined8 *)(lVar7 + 0x1e9) = uVar15;
    *(undefined8 *)(lVar7 + 0x1d8) = uVar11;
    *(undefined8 *)(lVar7 + 0x1d0) = uVar10;
    *(undefined8 *)(lVar7 + 0x1e8) = uVar14;
    *(undefined8 *)(lVar7 + 0x1e0) = uVar12;
    *(undefined8 *)(lVar7 + 0x1c8) = uVar13;
    *(undefined8 *)(lVar7 + 0x1c0) = uVar5;
    uVar14 = *(undefined8 *)(lVar7 + 600);
    uVar12 = *(undefined8 *)(lVar7 + 0x250);
    uVar13 = *(undefined8 *)(lVar7 + 0x268);
    uVar5 = *(undefined8 *)(lVar7 + 0x260);
    uVar11 = *(undefined8 *)(lVar7 + 0x271);
    uVar10 = *(undefined8 *)(lVar7 + 0x269);
    uVar15 = *(undefined8 *)(lVar7 + 0x240);
    *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(lVar7 + 0x248);
    *(undefined8 *)(lVar8 + 0x68) = uVar15;
    *(undefined8 *)(lVar8 + 0x99) = uVar11;
    *(undefined8 *)(lVar8 + 0x91) = uVar10;
    *(undefined8 *)(lVar8 + 0x90) = uVar13;
    *(undefined8 *)(lVar8 + 0x88) = uVar5;
    *(undefined8 *)(lVar8 + 0x80) = uVar14;
    *(undefined8 *)(lVar8 + 0x78) = uVar12;
    uVar13 = *(undefined8 *)(lVar7 + 0x208);
    uVar5 = *puVar3;
    uVar11 = *(undefined8 *)(lVar7 + 0x218);
    uVar10 = *(undefined8 *)(lVar7 + 0x210);
    uVar14 = *(undefined8 *)(lVar7 + 0x228);
    uVar12 = *(undefined8 *)(lVar7 + 0x220);
    uVar15 = *(undefined8 *)(lVar7 + 0x230);
    *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)(lVar7 + 0x238);
    *(undefined8 *)(lVar8 + 0x58) = uVar15;
    *(undefined8 *)(lVar8 + 0x50) = uVar14;
    *(undefined8 *)(lVar8 + 0x48) = uVar12;
    *(undefined8 *)(lVar8 + 0x40) = uVar11;
    *(undefined8 *)(lVar8 + 0x38) = uVar10;
    *(undefined8 *)(lVar8 + 0x30) = uVar13;
    *(undefined8 *)(lVar8 + 0x28) = uVar5;
    func_0x00191ff4(puVar2,0xaefe48,&UNK_007d9c20);
    func_0x00186ecc(lVar7 + 0x80);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar7);
  return;
}



/* Entry: 001559c8; end: 00155df7;  */

uint FUN_001559c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 auStack_560 [128];
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_46f;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined7 uStack_3f7;
  undefined1 uStack_3f0;
  undefined8 uStack_3ef;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 uStack_378;
  undefined7 uStack_377;
  undefined1 uStack_370;
  undefined7 uStack_36f;
  undefined1 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2ef;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1ef;
  undefined1 auStack_1d8 [24];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  undefined8 uStack_c0;
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
  undefined8 uStack_4f;
  
  _swift_beginAccess(param_3 + 0x28,auStack_1d8,0,0);
  uStack_f8 = *(undefined8 *)(param_3 + 0x70);
  uStack_100 = *(undefined8 *)(param_3 + 0x68);
  uStack_e8 = *(undefined8 *)(param_3 + 0x80);
  uStack_f0 = *(undefined8 *)(param_3 + 0x78);
  uStack_e0 = *(undefined8 *)(param_3 + 0x88);
  uStack_d8 = (undefined1)*(undefined8 *)(param_3 + 0x90);
  uStack_cf = *(undefined8 *)(param_3 + 0x99);
  uStack_d7 = (undefined7)*(undefined8 *)(param_3 + 0x91);
  uStack_d0 = (undefined1)((ulong)*(undefined8 *)(param_3 + 0x91) >> 0x38);
  uStack_138 = *(undefined8 *)(param_3 + 0x30);
  uStack_140 = *(undefined8 *)(param_3 + 0x28);
  uStack_128 = *(undefined8 *)(param_3 + 0x40);
  uStack_130 = *(undefined8 *)(param_3 + 0x38);
  uStack_118 = *(undefined8 *)(param_3 + 0x50);
  uStack_120 = *(undefined8 *)(param_3 + 0x48);
  uStack_108 = *(undefined8 *)(param_3 + 0x60);
  uStack_110 = *(undefined8 *)(param_3 + 0x58);
  FUN_001162f0(&uStack_c0);
  uStack_298 = uStack_f8;
  uStack_2a0 = uStack_100;
  uStack_288 = uStack_e8;
  uStack_290 = uStack_f0;
  uStack_278 = uStack_d8;
  uStack_280 = uStack_e0;
  uStack_26f = (undefined7)uStack_cf;
  uStack_268 = (undefined1)((ulong)uStack_cf >> 0x38);
  uStack_277 = uStack_d7;
  uStack_270 = uStack_d0;
  uStack_2d8 = uStack_138;
  uStack_2e0 = uStack_140;
  uStack_2c8 = uStack_128;
  uStack_2d0 = uStack_130;
  uStack_2b8 = uStack_118;
  uStack_2c0 = uStack_120;
  uStack_2a8 = uStack_108;
  uStack_2b0 = uStack_110;
  uStack_248 = uStack_a8;
  uStack_250 = uStack_b0;
  uStack_238 = uStack_98;
  uStack_240 = uStack_a0;
  uStack_258 = uStack_b8;
  uStack_260 = uStack_c0;
  uStack_1ef = uStack_4f;
  uStack_208 = uStack_68;
  uStack_210 = uStack_70;
  uStack_200 = uStack_60;
  uStack_228 = uStack_88;
  uStack_230 = uStack_90;
  uStack_218 = uStack_78;
  uStack_220 = uStack_80;
  iVar1 = (int)&uStack_2e0;
  FUN_00186e80();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_260;
    FUN_00186e80();
    if (iVar1 == 1) {
      uStack_398 = uStack_298;
      uStack_3a0 = uStack_2a0;
      uStack_388 = uStack_288;
      uStack_390 = uStack_290;
      uStack_378 = uStack_278;
      uStack_380 = uStack_280;
      uStack_36f = uStack_26f;
      uStack_368 = uStack_268;
      uStack_377 = uStack_277;
      uStack_370 = uStack_270;
      uStack_3d8 = uStack_2d8;
      uStack_3e0 = uStack_2e0;
      uStack_3c8 = uStack_2c8;
      uStack_3d0 = uStack_2d0;
      uStack_3b8 = uStack_2b8;
      uStack_3c0 = uStack_2c0;
      uStack_3a8 = uStack_2a8;
      uStack_3b0 = uStack_2b0;
      func_0x00187028(&uStack_140,&uStack_1c0,0xaefe48,&UNK_007d9c20);
      func_0x00191ff4(&uStack_3e0,0xaefe48,&UNK_007d9c20);
      uVar3 = 0;
      goto LAB_00155ccc;
    }
  }
  else {
    uStack_418 = uStack_298;
    uStack_420 = uStack_2a0;
    uStack_408 = uStack_288;
    uStack_410 = uStack_290;
    uStack_3f8 = uStack_278;
    uStack_400 = uStack_280;
    uStack_3ef = CONCAT17(uStack_268,uStack_26f);
    uStack_3f7 = uStack_277;
    uStack_3f0 = uStack_270;
    uStack_458 = uStack_2d8;
    uStack_460 = uStack_2e0;
    uStack_448 = uStack_2c8;
    uStack_450 = uStack_2d0;
    uStack_438 = uStack_2b8;
    uStack_440 = uStack_2c0;
    uStack_428 = uStack_2a8;
    uStack_430 = uStack_2b0;
    iVar1 = (int)&uStack_260;
    FUN_00186e80();
    if (iVar1 != 1) {
      uStack_498 = uStack_218;
      uStack_4a0 = uStack_220;
      uStack_488 = uStack_208;
      uStack_490 = uStack_210;
      uStack_480 = uStack_200;
      uStack_46f = uStack_1ef;
      uStack_4d8 = uStack_258;
      uStack_4e0 = uStack_260;
      uStack_4c8 = uStack_248;
      uStack_4d0 = uStack_250;
      uStack_4b8 = uStack_238;
      uStack_4c0 = uStack_240;
      uStack_4a8 = uStack_228;
      uStack_4b0 = uStack_230;
      uStack_36f = (undefined7)uStack_1ef;
      uStack_368 = (undefined1)((ulong)uStack_1ef >> 0x38);
      uStack_388 = uStack_208;
      uStack_390 = uStack_210;
      uStack_380 = uStack_200;
      uStack_3a8 = uStack_228;
      uStack_3b0 = uStack_230;
      uStack_398 = uStack_218;
      uStack_3a0 = uStack_220;
      uStack_3c8 = uStack_248;
      uStack_3d0 = uStack_250;
      uStack_3b8 = uStack_238;
      uStack_3c0 = uStack_240;
      uStack_3d8 = uStack_258;
      uStack_3e0 = uStack_260;
      uStack_178 = uStack_418;
      uStack_180 = uStack_420;
      uStack_168 = uStack_408;
      uStack_170 = uStack_410;
      uStack_158 = uStack_3f8;
      uStack_160 = uStack_400;
      uStack_14f = uStack_3ef;
      uStack_157 = uStack_3f7;
      uStack_150 = uStack_3f0;
      uStack_1b8 = uStack_458;
      uStack_1c0 = uStack_460;
      uStack_1a8 = uStack_448;
      uStack_1b0 = uStack_450;
      uStack_198 = uStack_438;
      uStack_1a0 = uStack_440;
      uStack_188 = uStack_428;
      uStack_190 = uStack_430;
      func_0x00187028(&uStack_140,auStack_560,0xaefe48,&UNK_007d9c20);
      func_0x00187028(&uStack_140,auStack_560,0xaefe48,&UNK_007d9c20);
      puVar2 = &uStack_1c0;
      func_0x00184624(puVar2,&uStack_3e0);
      func_0x00191ff4(&uStack_140,0xaefe48,&UNK_007d9c20);
      func_0x00191ff4(&uStack_4e0,0xaefe48,&UNK_007d9c20);
      func_0x00191ff4(&uStack_2e0,0xaefe48,&UNK_007d9c20);
      uVar3 = (uint)puVar2 ^ 1;
      goto LAB_00155ccc;
    }
  }
  uStack_318 = uStack_218;
  uStack_320 = uStack_220;
  uStack_308 = uStack_208;
  uStack_310 = uStack_210;
  uStack_300 = uStack_200;
  uStack_2ef = uStack_1ef;
  uStack_358 = uStack_258;
  uStack_360 = uStack_260;
  uStack_348 = uStack_248;
  uStack_350 = uStack_250;
  uStack_338 = uStack_238;
  uStack_340 = uStack_240;
  uStack_328 = uStack_228;
  uStack_330 = uStack_230;
  uStack_398 = uStack_298;
  uStack_3a0 = uStack_2a0;
  uStack_388 = uStack_288;
  uStack_390 = uStack_290;
  uStack_378 = uStack_278;
  uStack_377 = uStack_277;
  uStack_380 = uStack_280;
  uStack_368 = uStack_268;
  uStack_370 = uStack_270;
  uStack_36f = uStack_26f;
  uStack_3d8 = uStack_2d8;
  uStack_3e0 = uStack_2e0;
  uStack_3c8 = uStack_2c8;
  uStack_3d0 = uStack_2d0;
  uStack_3b8 = uStack_2b8;
  uStack_3c0 = uStack_2c0;
  uStack_3a8 = uStack_2a8;
  uStack_3b0 = uStack_2b0;
  func_0x00187028(&uStack_140,&uStack_1c0,0xaefe48,&UNK_007d9c20);
  func_0x00191ff4(&uStack_3e0,0xaf08c0,&UNK_007dafd8);
  uVar3 = 1;
LAB_00155ccc:
  return uVar3 & 1;
}



/* Entry: 00155df8; end: 00155e0b;  */

undefined8 FUN_00155df8(void)

{
  return 0x155e08;
}



/* Entry: 00155e0c; end: 00155e3b;  */

undefined8 FUN_00155e0c(void)

{
  FUN_00186e60(0);
  _swift_initStaticObject();
  return 0;
}



/* Entry: 00155e3c; end: 00155e7b;  */

undefined1  [16] FUN_00155e3c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 00155e7c; end: 00155eaf;  */

void FUN_00155e7c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 00155eb0; end: 00155f07;  */

undefined1  [16] FUN_00155eb0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = 0x1930d8;
  return auVar4;
}



/* Entry: 00155f08; end: 00155f17;  */

bool FUN_00155f08(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x20) != 0;
}



/* Entry: 00155f18; end: 00155f33;  */

void FUN_00155f18(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 00155f34; end: 00155f3b;  */

void FUN_00155f34(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(*unaff_x20);
  return;
}



/* Entry: 00155f3c; end: 00155f63;  */

void FUN_00155f3c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 00155f64; end: 00155f77;  */

undefined8 FUN_00155f64(void)

{
  return 0x155f74;
}



/* Entry: 00155f78; end: 0015604b;  */

void FUN_00155f78(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [72];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x30);
  puStack_a0 = *(undefined **)(unaff_x20 + 0x28);
  puStack_88 = *(undefined **)(unaff_x20 + 0x40);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_60 = *(undefined1 *)(unaff_x20 + 0x68);
  uVar1 = uStack_98;
  puVar3 = puStack_88;
  puVar4 = puStack_a0;
  uVar5 = uStack_90;
  uVar2 = uStack_60;
  uStack_110 = uStack_70;
  uStack_108 = uStack_68;
  uStack_100 = uStack_80;
  uStack_f8 = uStack_78;
  if (puStack_a0 == (undefined *)0x0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uVar1 = 0;
    puVar3 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
    puVar4 = PTR___swiftEmptyArrayStorage_0099b8f0;
    uVar5 = 0xc000000000000000;
    uVar2 = 2;
  }
  func_0x00187028(&puStack_a0,auStack_e8,0xaefe40,&UNK_007dafe0);
  *param_1 = puVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar5;
  param_1[3] = puVar3;
  param_1[5] = uStack_f8;
  param_1[4] = uStack_100;
  param_1[7] = uStack_108;
  param_1[6] = uStack_110;
  *(undefined1 *)(param_1 + 8) = uVar2;
  return;
}



/* Entry: 0015604c; end: 00156083;  */

void FUN_0015604c(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 2;
  return;
}



/* Entry: 00156084; end: 001560d7;  */

void FUN_00156084(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00191ff4(unaff_x20 + 0x28,0xaefe40,&UNK_007dafe0);
  uVar3 = param_1[1];
  uVar2 = *param_1;
  uVar1 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x40) = param_1[3];
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  uVar1 = param_1[4];
  uVar5 = param_1[7];
  uVar4 = param_1[6];
  *(undefined8 *)(unaff_x20 + 0x50) = param_1[5];
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar4;
  *(undefined1 *)(unaff_x20 + 0x68) = *(undefined1 *)(param_1 + 8);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 001560d8; end: 001561cb;  */

undefined1  [16] FUN_001560d8(undefined8 *param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  qword qVar6;
  undefined8 uVar7;
  qword qVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  pcVar1 = section_00000158.segname + 8;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x170,&UNK_00002801);
  }
  *param_1 = pcVar1;
  *(long *)(pcVar1 + 0x168) = unaff_x20;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  *(qword *)(pcVar1 + 8) = *(qword *)(unaff_x20 + 0x30);
  *(undefined8 *)pcVar1 = uVar5;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  qVar6 = *(qword *)(unaff_x20 + 0x38);
  pcVar1[0x40] = *(undefined1 *)(unaff_x20 + 0x68);
  *(undefined8 *)(pcVar1 + 0x28) = uVar7;
  *(undefined8 *)(pcVar1 + 0x20) = uVar5;
  *(undefined8 *)(pcVar1 + 0x38) = uVar10;
  *(undefined8 *)(pcVar1 + 0x30) = uVar9;
  *(undefined8 *)(pcVar1 + 0x18) = uVar11;
  *(qword *)(pcVar1 + 0x10) = qVar6;
  if (*(undefined **)pcVar1 == (undefined *)0x0) {
    qVar8 = 0xc000000000000000;
    qVar6 = 0;
    uVar5 = 0;
    uVar7 = 0;
    uVar3 = 2;
    uVar9 = 0;
    uVar10 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  }
  else {
    qVar8 = *(qword *)(pcVar1 + 0x10);
    qVar6 = *(qword *)(pcVar1 + 8);
    uVar7 = *(undefined8 *)(pcVar1 + 0x28);
    uVar5 = *(undefined8 *)(pcVar1 + 0x20);
    uVar10 = *(undefined8 *)(pcVar1 + 0x38);
    uVar9 = *(undefined8 *)(pcVar1 + 0x30);
    uVar3 = pcVar1[0x40];
    puVar2 = *(undefined **)pcVar1;
    puVar4 = *(undefined **)(pcVar1 + 0x18);
  }
  *(undefined **)(pcVar1 + 0x48) = puVar2;
  *(qword *)(pcVar1 + 0x58) = qVar8;
  *(qword *)(pcVar1 + 0x50) = qVar6;
  *(undefined **)(pcVar1 + 0x60) = puVar4;
  *(undefined8 *)(pcVar1 + 0x70) = uVar7;
  *(undefined8 *)(pcVar1 + 0x68) = uVar5;
  *(undefined8 *)(pcVar1 + 0x80) = uVar10;
  *(undefined8 *)(pcVar1 + 0x78) = uVar9;
  pcVar1[0x88] = uVar3;
  func_0x00187028(pcVar1,(long)pcVar1 + 0x90,0xaefe40,&UNK_007dafe0);
  auVar12._8_8_ = (long)pcVar1 + 0x48;
  auVar12._0_8_ = FUN_001561cc;
  return auVar12;
}



/* Entry: 001561cc; end: 001562ff;  */

void FUN_001561cc(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar2 = *param_1;
  if ((param_2 & 1) == 0) {
    lVar3 = *(long *)(lVar2 + 0x168);
    uVar5 = *(undefined8 *)(lVar2 + 0x60);
    uVar4 = *(undefined8 *)(lVar2 + 0x58);
    uVar8 = *(undefined8 *)(lVar2 + 0x70);
    uVar6 = *(undefined8 *)(lVar2 + 0x68);
    uVar11 = *(undefined8 *)(lVar2 + 0x80);
    uVar10 = *(undefined8 *)(lVar2 + 0x78);
    uVar1 = *(undefined1 *)(lVar2 + 0x88);
    uVar9 = *(undefined8 *)(lVar2 + 0x50);
    uVar7 = *(undefined8 *)(lVar2 + 0x48);
    func_0x00191ff4(lVar3 + 0x28,0xaefe40,&UNK_007dafe0);
    *(undefined8 *)(lVar3 + 0x40) = uVar5;
    *(undefined8 *)(lVar3 + 0x38) = uVar4;
    *(undefined8 *)(lVar3 + 0x50) = uVar8;
    *(undefined8 *)(lVar3 + 0x48) = uVar6;
    *(undefined8 *)(lVar3 + 0x60) = uVar11;
    *(undefined8 *)(lVar3 + 0x58) = uVar10;
    *(undefined1 *)(lVar3 + 0x68) = uVar1;
    *(undefined8 *)(lVar3 + 0x30) = uVar9;
    *(undefined8 *)(lVar3 + 0x28) = uVar7;
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x168);
    uVar6 = *(undefined8 *)(lVar2 + 0x50);
    uVar4 = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(lVar2 + 0xe0) = uVar6;
    *(undefined8 *)(lVar2 + 0xd8) = uVar4;
    uVar1 = *(undefined1 *)(lVar2 + 0x88);
    *(undefined1 *)(lVar2 + 0x118) = uVar1;
    uVar10 = *(undefined8 *)(lVar2 + 0x80);
    uVar8 = *(undefined8 *)(lVar2 + 0x78);
    *(undefined8 *)(lVar2 + 0x110) = uVar10;
    *(undefined8 *)(lVar2 + 0x108) = uVar8;
    uVar14 = *(undefined8 *)(lVar2 + 0x70);
    uVar12 = *(undefined8 *)(lVar2 + 0x68);
    *(undefined8 *)(lVar2 + 0x100) = uVar14;
    *(undefined8 *)(lVar2 + 0xf8) = uVar12;
    uVar17 = *(undefined8 *)(lVar2 + 0x60);
    uVar16 = *(undefined8 *)(lVar2 + 0x58);
    *(undefined8 *)(lVar2 + 0xf0) = uVar17;
    *(undefined8 *)(lVar2 + 0xe8) = uVar16;
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar2 + 0x90) = uVar5;
    uVar7 = *(undefined8 *)(lVar3 + 0x40);
    uVar5 = *(undefined8 *)(lVar3 + 0x38);
    uVar11 = *(undefined8 *)(lVar3 + 0x50);
    uVar9 = *(undefined8 *)(lVar3 + 0x48);
    uVar15 = *(undefined8 *)(lVar3 + 0x60);
    uVar13 = *(undefined8 *)(lVar3 + 0x58);
    *(undefined1 *)(lVar2 + 0xd0) = *(undefined1 *)(lVar3 + 0x68);
    *(undefined8 *)(lVar2 + 0xb8) = uVar11;
    *(undefined8 *)(lVar2 + 0xb0) = uVar9;
    *(undefined8 *)(lVar2 + 200) = uVar15;
    *(undefined8 *)(lVar2 + 0xc0) = uVar13;
    *(undefined8 *)(lVar2 + 0xa8) = uVar7;
    *(undefined8 *)(lVar2 + 0xa0) = uVar5;
    func_0x00186ef8(lVar2 + 0xd8,lVar2 + 0x120);
    func_0x00191ff4(lVar2 + 0x90,0xaefe40,&UNK_007dafe0);
    *(undefined8 *)(lVar3 + 0x40) = uVar17;
    *(undefined8 *)(lVar3 + 0x38) = uVar16;
    *(undefined8 *)(lVar3 + 0x50) = uVar14;
    *(undefined8 *)(lVar3 + 0x48) = uVar12;
    *(undefined8 *)(lVar3 + 0x60) = uVar10;
    *(undefined8 *)(lVar3 + 0x58) = uVar8;
    *(undefined1 *)(lVar3 + 0x68) = uVar1;
    *(undefined8 *)(lVar3 + 0x30) = uVar6;
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    func_0x00186f2c(lVar2 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar2);
  return;
}



/* Entry: 00156300; end: 0015641b;  */

bool FUN_00156300(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_158 [72];
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined8 uStack_d7;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_40 = *(undefined1 *)(unaff_x20 + 0x68);
  lStack_80 = lVar3;
  if (lVar3 == 0) {
    lStack_110 = 0;
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_e0 = (undefined1)*(undefined8 *)(unaff_x20 + 0x58);
    uStack_d7 = *(undefined8 *)(unaff_x20 + 0x61);
    uStack_df = (undefined7)*(undefined8 *)(unaff_x20 + 0x59);
    uStack_d8 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x59) >> 0x38);
    uVar1 = 0xaefe40;
    puVar2 = &UNK_007dafe0;
    func_0x00187028(&lStack_80,auStack_158,0xaefe40,&UNK_007dafe0);
  }
  else {
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_e0 = (undefined1)*(undefined8 *)(unaff_x20 + 0x58);
    uStack_d7 = *(undefined8 *)(unaff_x20 + 0x61);
    uStack_df = (undefined7)*(undefined8 *)(unaff_x20 + 0x59);
    uStack_d8 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x59) >> 0x38);
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    lStack_110 = lVar3;
    func_0x00187028(&lStack_80,auStack_158,0xaefe40,&UNK_007dafe0);
    uVar1 = 0xaf0978;
    puVar2 = &UNK_007dafe8;
  }
  func_0x00191ff4(&lStack_110,uVar1,puVar2);
  return lVar3 != 0;
}



/* Entry: 0015641c; end: 0015645b;  */

void FUN_0015641c(void)

{
  long unaff_x20;
  
  func_0x00191ff4(unaff_x20 + 0x28,0xaefe40,&UNK_007dafe0);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x68) = 0;
  return;
}



/* Entry: 0015645c; end: 0015648b;  */

undefined1  [16] FUN_0015645c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 0015648c; end: 001564bf;  */

void FUN_0015648c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 001564c0; end: 0015650b;  */

undefined1  [16] FUN_001564c0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1564d0;
  return auVar1;
}



/* Entry: 0015650c; end: 0015654b;  */

undefined1  [16] FUN_0015650c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 0015654c; end: 0015657f;  */

void FUN_0015654c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 00156580; end: 001565d7;  */

undefined1  [16] FUN_00156580(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = 0x1930dc;
  return auVar4;
}



/* Entry: 001565d8; end: 001565e7;  */

bool FUN_001565d8(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x18) != 0;
}



/* Entry: 001565e8; end: 00156603;  */

void FUN_001565e8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 00156604; end: 00156643;  */

undefined1  [16] FUN_00156604(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 00156644; end: 00156677;  */

void FUN_00156644(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 00156678; end: 001566cf;  */

undefined1  [16] FUN_00156678(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x28);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_001566d0;
  return auVar4;
}



/* Entry: 001566d0; end: 0015672f;  */

void FUN_001566d0(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar2 = param_1[2];
  uVar4 = param_1[3];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRelease(uVar4);
    *(undefined8 *)(lVar2 + 0x20) = uVar1;
    *(undefined8 *)(lVar2 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  return;
}



/* Entry: 00156730; end: 0015673f;  */

bool FUN_00156730(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x28) != 0;
}



/* Entry: 00156740; end: 0015675b;  */

void FUN_00156740(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 0015675c; end: 0015679b;  */

undefined1  [16] FUN_0015675c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 0015679c; end: 001567cf;  */

void FUN_0015679c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 001567d0; end: 00156827;  */

undefined1  [16] FUN_001567d0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[2] = unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar3 = lVar1;
  }
  param_1[3] = lVar1;
  *param_1 = uVar2;
  param_1[1] = lVar3;
  _swift_bridgeObjectRetain();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_00156828;
  return auVar4;
}



/* Entry: 00156828; end: 00156887;  */

void FUN_00156828(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar2 = param_1[2];
  uVar4 = param_1[3];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRelease(uVar4);
    *(undefined8 *)(lVar2 + 0x30) = uVar1;
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x30) = uVar1;
  *(undefined8 *)(lVar2 + 0x38) = uVar3;
  return;
}



/* Entry: 00156888; end: 00156897;  */

bool FUN_00156888(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x38) != 0;
}



/* Entry: 00156898; end: 001568b3;  */

void FUN_00156898(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  return;
}



/* Entry: 001568b4; end: 00156993;  */

void FUN_001568b4(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [72];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x48);
  puStack_a0 = *(undefined **)(unaff_x20 + 0x40);
  puStack_88 = *(undefined **)(unaff_x20 + 0x58);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x80);
  if (puStack_a0 == (undefined *)0x0) {
    uVar1 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uVar2 = 3;
    uVar3 = 2;
    uVar6 = 0xc000000000000000;
    uStack_108 = 0;
    uStack_110 = 0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
    puVar5 = PTR___swiftEmptyArrayStorage_0099b8f0;
  }
  else {
    uStack_80._0_1_ = (undefined1)uVar7;
    uStack_80._1_1_ = (undefined1)((ulong)uVar7 >> 8);
    uVar1 = uStack_98;
    puVar4 = puStack_88;
    puVar5 = puStack_a0;
    uVar6 = uStack_90;
    uVar3 = (undefined1)uStack_80;
    uVar2 = uStack_80._1_1_;
    uStack_110 = uStack_68;
    uStack_108 = uStack_60;
    uStack_100 = uStack_78;
    uStack_f8 = uStack_70;
  }
  uStack_80 = uVar7;
  func_0x00187028(&puStack_a0,auStack_e8,0xaefe38,&UNK_007d9c10);
  *param_1 = puVar5;
  param_1[1] = uVar1;
  param_1[2] = uVar6;
  param_1[3] = puVar4;
  *(undefined1 *)(param_1 + 4) = uVar3;
  *(undefined1 *)((long)param_1 + 0x21) = uVar2;
  param_1[8] = uStack_108;
  param_1[7] = uStack_110;
  param_1[6] = uStack_f8;
  param_1[5] = uStack_100;
  return;
}



/* Entry: 00156994; end: 001569cf;  */

void FUN_00156994(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  *(undefined2 *)(param_1 + 4) = 0x302;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 001569d0; end: 00156a1b;  */

void FUN_001569d0(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00191ff4(unaff_x20 + 0x40,0xaefe38,&UNK_007d9c10);
  uVar1 = param_1[4];
  uVar3 = param_1[7];
  uVar2 = param_1[6];
  *(undefined8 *)(unaff_x20 + 0x68) = param_1[5];
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x80) = param_1[8];
  uVar3 = *param_1;
  uVar2 = param_1[3];
  uVar1 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x48) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  return;
}



/* Entry: 00156a1c; end: 00156b17;  */

undefined1  [16] FUN_00156a1c(undefined8 *param_1)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  qword qVar7;
  undefined8 uVar8;
  qword qVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  pcVar1 = section_00000158.segname + 8;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x170,&UNK_00008601);
  }
  *param_1 = pcVar1;
  *(long *)(pcVar1 + 0x168) = unaff_x20;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  *(qword *)(pcVar1 + 8) = *(qword *)(unaff_x20 + 0x48);
  *(undefined8 *)pcVar1 = uVar6;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
  qVar7 = *(qword *)(unaff_x20 + 0x50);
  *(undefined8 *)(pcVar1 + 0x40) = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(pcVar1 + 0x28) = uVar11;
  *(undefined8 *)(pcVar1 + 0x20) = uVar10;
  *(undefined8 *)(pcVar1 + 0x38) = uVar8;
  *(undefined8 *)(pcVar1 + 0x30) = uVar6;
  *(undefined8 *)(pcVar1 + 0x18) = uVar12;
  *(qword *)(pcVar1 + 0x10) = qVar7;
  if (*(undefined **)pcVar1 == (undefined *)0x0) {
    qVar9 = 0xc000000000000000;
    qVar7 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar2 = 3;
    uVar4 = 2;
    uVar10 = 0;
    uVar11 = 0;
    puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
    puVar5 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  }
  else {
    qVar9 = *(qword *)(pcVar1 + 0x10);
    qVar7 = *(qword *)(pcVar1 + 8);
    uVar4 = (undefined1)*(dword *)(pcVar1 + 0x20);
    uVar2 = pcVar1[0x21];
    uVar8 = *(undefined8 *)(pcVar1 + 0x30);
    uVar6 = *(undefined8 *)(pcVar1 + 0x28);
    uVar11 = *(undefined8 *)(pcVar1 + 0x40);
    uVar10 = *(undefined8 *)(pcVar1 + 0x38);
    puVar3 = *(undefined **)pcVar1;
    puVar5 = *(undefined **)(pcVar1 + 0x18);
  }
  *(undefined **)(pcVar1 + 0x48) = puVar3;
  *(qword *)(pcVar1 + 0x58) = qVar9;
  *(qword *)(pcVar1 + 0x50) = qVar7;
  *(undefined **)(pcVar1 + 0x60) = puVar5;
  pcVar1[0x68] = uVar4;
  pcVar1[0x69] = uVar2;
  *(undefined8 *)(pcVar1 + 0x78) = uVar8;
  *(undefined8 *)(pcVar1 + 0x70) = uVar6;
  *(undefined8 *)(pcVar1 + 0x88) = uVar11;
  *(undefined8 *)(pcVar1 + 0x80) = uVar10;
  func_0x00187028(pcVar1,(long)pcVar1 + 0x90,0xaefe38,&UNK_007d9c10);
  auVar13._8_8_ = (long)pcVar1 + 0x48;
  auVar13._0_8_ = FUN_00156b18;
  return auVar13;
}



/* Entry: 00156b18; end: 00156c37;  */

void FUN_00156b18(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar2 = *param_1;
  if ((param_2 & 1) == 0) {
    lVar3 = *(long *)(lVar2 + 0x168);
    uVar5 = *(undefined8 *)(lVar2 + 0x60);
    uVar4 = *(undefined8 *)(lVar2 + 0x58);
    uVar8 = *(undefined8 *)(lVar2 + 0x70);
    uVar6 = *(undefined8 *)(lVar2 + 0x68);
    uVar11 = *(undefined8 *)(lVar2 + 0x80);
    uVar10 = *(undefined8 *)(lVar2 + 0x78);
    uVar1 = *(undefined8 *)(lVar2 + 0x88);
    uVar9 = *(undefined8 *)(lVar2 + 0x50);
    uVar7 = *(undefined8 *)(lVar2 + 0x48);
    func_0x00191ff4(lVar3 + 0x40,0xaefe38,&UNK_007d9c10);
    *(undefined8 *)(lVar3 + 0x68) = uVar8;
    *(undefined8 *)(lVar3 + 0x60) = uVar6;
    *(undefined8 *)(lVar3 + 0x78) = uVar11;
    *(undefined8 *)(lVar3 + 0x70) = uVar10;
    *(undefined8 *)(lVar3 + 0x80) = uVar1;
    *(undefined8 *)(lVar3 + 0x48) = uVar9;
    *(undefined8 *)(lVar3 + 0x40) = uVar7;
    *(undefined8 *)(lVar3 + 0x58) = uVar5;
    *(undefined8 *)(lVar3 + 0x50) = uVar4;
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x168);
    uVar6 = *(undefined8 *)(lVar2 + 0x50);
    uVar4 = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(lVar2 + 0xe0) = uVar6;
    *(undefined8 *)(lVar2 + 0xd8) = uVar4;
    uVar1 = *(undefined8 *)(lVar2 + 0x88);
    *(undefined8 *)(lVar2 + 0x118) = uVar1;
    uVar10 = *(undefined8 *)(lVar2 + 0x80);
    uVar8 = *(undefined8 *)(lVar2 + 0x78);
    *(undefined8 *)(lVar2 + 0x110) = uVar10;
    *(undefined8 *)(lVar2 + 0x108) = uVar8;
    uVar14 = *(undefined8 *)(lVar2 + 0x70);
    uVar12 = *(undefined8 *)(lVar2 + 0x68);
    *(undefined8 *)(lVar2 + 0x100) = uVar14;
    *(undefined8 *)(lVar2 + 0xf8) = uVar12;
    uVar17 = *(undefined8 *)(lVar2 + 0x60);
    uVar16 = *(undefined8 *)(lVar2 + 0x58);
    *(undefined8 *)(lVar2 + 0xf0) = uVar17;
    *(undefined8 *)(lVar2 + 0xe8) = uVar16;
    uVar5 = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(lVar3 + 0x48);
    *(undefined8 *)(lVar2 + 0x90) = uVar5;
    uVar7 = *(undefined8 *)(lVar3 + 0x58);
    uVar5 = *(undefined8 *)(lVar3 + 0x50);
    uVar11 = *(undefined8 *)(lVar3 + 0x68);
    uVar9 = *(undefined8 *)(lVar3 + 0x60);
    uVar15 = *(undefined8 *)(lVar3 + 0x78);
    uVar13 = *(undefined8 *)(lVar3 + 0x70);
    *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)(lVar3 + 0x80);
    *(undefined8 *)(lVar2 + 0xb8) = uVar11;
    *(undefined8 *)(lVar2 + 0xb0) = uVar9;
    *(undefined8 *)(lVar2 + 200) = uVar15;
    *(undefined8 *)(lVar2 + 0xc0) = uVar13;
    *(undefined8 *)(lVar2 + 0xa8) = uVar7;
    *(undefined8 *)(lVar2 + 0xa0) = uVar5;
    func_0x00186f58(lVar2 + 0xd8,lVar2 + 0x120);
    func_0x00191ff4(lVar2 + 0x90,0xaefe38,&UNK_007d9c10);
    *(undefined8 *)(lVar3 + 0x68) = uVar14;
    *(undefined8 *)(lVar3 + 0x60) = uVar12;
    *(undefined8 *)(lVar3 + 0x78) = uVar10;
    *(undefined8 *)(lVar3 + 0x70) = uVar8;
    *(undefined8 *)(lVar3 + 0x80) = uVar1;
    *(undefined8 *)(lVar3 + 0x48) = uVar6;
    *(undefined8 *)(lVar3 + 0x40) = uVar4;
    *(undefined8 *)(lVar3 + 0x58) = uVar17;
    *(undefined8 *)(lVar3 + 0x50) = uVar16;
    func_0x00186f8c(lVar2 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar2);
  return;
}



/* Entry: 00156c38; end: 00156d53;  */

bool FUN_00156c38(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_158 [72];
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x80);
  lStack_80 = lVar3;
  if (lVar3 == 0) {
    lStack_110 = 0;
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar1 = 0xaefe38;
    puVar2 = &UNK_007d9c10;
    func_0x00187028(&lStack_80,auStack_158,0xaefe38,&UNK_007d9c10);
  }
  else {
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    lStack_110 = lVar3;
    func_0x00187028(&lStack_80,auStack_158,0xaefe38,&UNK_007d9c10);
    uVar1 = 0xaf0980;
    puVar2 = &UNK_007daff8;
  }
  func_0x00191ff4(&lStack_110,uVar1,puVar2);
  return lVar3 != 0;
}



/* Entry: 00156d54; end: 00156d8b;  */

void FUN_00156d54(void)

{
  long unaff_x20;
  
  func_0x00191ff4(unaff_x20 + 0x40,0xaefe38,&UNK_007d9c10);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  return;
}



/* Entry: 00156d8c; end: 00156e4b;  */

byte FUN_00156d8c(void)

{
  long unaff_x20;
  
  return *(byte *)(unaff_x20 + 0x88) & 1;
}



/* Entry: 00156e4c; end: 00156e7b;  */

undefined1  [16] FUN_00156e4c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 00156e7c; end: 00156eaf;  */

void FUN_00156e7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00156eb0; end: 00156eef;  */

undefined8 FUN_00156eb0(void)

{
  return 0x156ec0;
}



/* Entry: 00156ef0; end: 00156f4f;  */

undefined1  [16] FUN_00156ef0(void)

{
  long lVar1;
  long in_x3;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x10,auStack_38,0,0);
  lVar1 = *(long *)(in_x3 + 0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(in_x3 + 0x10);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 00156f50; end: 0015707b;  */

void FUN_00156f50(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x10) = param_1;
  *(undefined8 *)(lVar3 + 0x18) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 0015707c; end: 0015718b;  */

void FUN_0015707c(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *param_1;
  uVar6 = *(undefined8 *)(lVar4 + 0x48);
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  lVar5 = *(long *)(lVar4 + 0x58);
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x10,lVar4 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    *(undefined8 *)(lVar5 + 0x18) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x10,lVar4 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    *(undefined8 *)(lVar5 + 0x18) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 0015718c; end: 001571cf;  */

bool FUN_0015718c(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x10,auStack_38,0,0);
  return *(long *)(in_x3 + 0x18) != 0;
}



/* Entry: 001571d0; end: 00157253;  */

void FUN_001571d0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8();
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 00157254; end: 001572b3;  */

undefined1  [16] FUN_00157254(void)

{
  long lVar1;
  long in_x3;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x20,auStack_38,0,0);
  lVar1 = *(long *)(in_x3 + 0x28);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(in_x3 + 0x20);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 001572b4; end: 001573df;  */

void FUN_001572b4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_00186fb8(0);
    _swift_allocObject();
    FUN_0016f8e8(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 001573e0; end: 001574ef;  */

void FUN_001573e0(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *param_1;
  uVar6 = *(undefined8 *)(lVar4 + 0x48);
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  lVar5 = *(long *)(lVar4 + 0x58);
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x20,lVar4 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    *(undefined8 *)(lVar5 + 0x28) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar5 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(lVar4 + 0x58);
      uVar3 = 0;
      FUN_00186fb8(0);
      _swift_allocObject();
      FUN_0016f8e8(lVar5,uVar3);
      *(long *)(lVar7 + 0x18) = lVar5;
    }
    _swift_beginAccess(lVar5 + 0x20,lVar4 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    *(undefined8 *)(lVar5 + 0x28) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar4);
  return;
}



/* Entry: 001574f0; end: 00157533;  */

bool FUN_001574f0(void)

{
  long in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3 + 0x20,auStack_38,0,0);
  return *(long *)(in_x3 + 0x28) != 0;
}


