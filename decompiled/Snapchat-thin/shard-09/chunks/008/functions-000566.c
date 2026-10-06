/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107270648; end: 10727069f;  */

void FUN_107270648(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x000107274d58();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010727511c();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x000107275110();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x00010793823c();
    }
    else {
      func_0x00010793820c();
    }
  }
  return;
}



/* Entry: 1072706a0; end: 1072706b7;  */

void FUN_1072706a0(void)

{
  FUN_1072706b8();
  func_0x000107275218();
  return;
}



/* Entry: 1072706b8; end: 1072706c3;  */

undefined8 FUN_1072706b8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001072748fc(&UNK_1109ed810,param_1,0,param_2);
  FUN_1072706f0();
  return param_1;
}



/* Entry: 1072706c4; end: 1072706ef;  */

undefined8 FUN_1072706c4(undefined8 param_1)

{
  func_0x0001072748fc(&UNK_1109ed810);
  FUN_1072706f0();
  return param_1;
}



/* Entry: 1072706f0; end: 107270747;  */

void FUN_1072706f0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x000107274d58();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010727511c();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x000107275110();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x000107939604();
    }
    else {
      func_0x0001079395d4();
    }
  }
  return;
}



/* Entry: 107270748; end: 10727077f;  */

void FUN_107270748(long param_1)

{
  FUN_1072638b4();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 107270780; end: 1072707a7;  */

void FUN_107270780(long param_1)

{
  func_0x000107274aa0();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_1072707a8();
  return;
}



/* Entry: 1072707a8; end: 1072707bf;  */

void FUN_1072707a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 1072707c0; end: 1072707db;  */

void FUN_1072707c0(long param_1)

{
  FUN_1072707dc();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1072707dc; end: 1072707f3;  */

void FUN_1072707dc(long param_1,long param_2)

{
  func_0x000107274934();
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return;
}



/* Entry: 1072707f4; end: 10727080f;  */

void FUN_1072707f4(long param_1)

{
  FUN_107270810();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 107270810; end: 107270837;  */

void FUN_107270810(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107274918();
  *(undefined4 *)(param_1 + 0x18) = extraout_w8;
  FUN_107270838();
  return;
}



/* Entry: 107270838; end: 10727087f;  */

void FUN_107270838(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747cc();
  FUN_10726ff9c();
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 != 0xffffffff) {
    func_0x000107274690((&PTR_FUN_1109960a8)[uVar1]);
    *(uint *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 107270880; end: 1072708f3;  */

void FUN_107270880(void)

{
  return;
}



/* Entry: 1072708f4; end: 10727090f;  */

void FUN_1072708f4(long param_1)

{
  FUN_107270910();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 107270910; end: 10727091b;  */

undefined8 * FUN_107270910(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_1109ec150;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x12) = 0;
  FUN_10727095c(param_1,param_2);
  return param_1;
}



/* Entry: 10727091c; end: 10727095b;  */

undefined8 * FUN_10727091c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_1109ec150;
  param_1[1] = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x12) = 0;
  FUN_10727095c(param_1,param_3);
  return param_1;
}



/* Entry: 10727095c; end: 1072709b3;  */

void FUN_10727095c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x000107274d58();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010727511c();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x000107275110();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x00010793aba8();
    }
    else {
      func_0x00010793ab78();
    }
  }
  return;
}



/* Entry: 1072709b4; end: 1072709cf;  */

void FUN_1072709b4(long param_1)

{
  FUN_1072709d0();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 1072709d0; end: 107270a17;  */

void FUN_1072709d0(undefined8 param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 *extraout_x9;
  long extraout_x10;
  undefined8 extraout_x10_00;
  ulong extraout_x11;
  ulong uVar1;
  ulong extraout_x12;
  ulong extraout_x13;
  undefined8 unaff_x30;
  
  func_0x0001072744e8();
  if (extraout_x10 != 0) {
    func_0x0001072754dc(param_1,unaff_x30);
    if ((bool)in_ZR) {
      uVar1 = extraout_x13 & extraout_x11;
    }
    else {
      uVar1 = extraout_x11;
      if (extraout_x12 <= extraout_x11) {
        uVar1 = 0;
        if (extraout_x12 != 0) {
          uVar1 = extraout_x11 / extraout_x12;
        }
        uVar1 = extraout_x11 - uVar1 * extraout_x12;
      }
    }
    *(undefined8 *)(extraout_x8 + uVar1 * 8) = extraout_x10_00;
    *extraout_x9 = 0;
    extraout_x9[1] = 0;
  }
  return;
}



/* Entry: 107270a18; end: 107270a2b;  */

void FUN_107270a18(void)

{
  FUN_107270a48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107270a2c; end: 107270a47;  */

void FUN_107270a2c(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x000107275664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20);
  return;
}



/* Entry: 107270a48; end: 107270b5b;  */

undefined8 * FUN_107270a48(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109960d8;
  func_0x000107270a74(param_1 + 4);
  return param_1;
}



/* Entry: 107270b5c; end: 107270b93;  */

void FUN_107270b5c(void)

{
  func_0x000107274368();
  func_0x000107270bc8();
  func_0x00010727550c();
  func_0x000107270b94();
  return;
}



/* Entry: 107270b94; end: 107270c43;  */

void FUN_107270b94(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x000107274670();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    func_0x000107275840();
    func_0x000107270d20();
  }
  return;
}



/* Entry: 107270c44; end: 107270cef;  */

void FUN_107270c44(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  if (param_2 == 0) {
    FUN_107270cf0(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001001685e0();
    FUN_107270d08();
    func_0x0001001686b8();
    FUN_107270cf0();
    func_0x0001001686dc();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x0001001686ec();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072742e0();
      func_0x0001072742f4();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x000107274bf0();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000107274bd8();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x000107274bcc();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x00010727411c();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107270cf0; end: 107270d07;  */

void FUN_107270cf0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107270d08; end: 107270d53;  */

void FUN_107270d08(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107270d38();
  return;
}



/* Entry: 107270d54; end: 107270e9f;  */

undefined1  [16] FUN_107270d54(ulong param_1)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar3;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar4;
  ulong extraout_x10;
  ulong unaff_x20;
  long *unaff_x21;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined1 auVar5 [16];
  
  func_0x000107275128();
  func_0x00010727471c();
  FUN_10726364c();
  func_0x0001072754b8();
  if (unaff_x24 != 0) {
    func_0x0001072757f4();
    if ((bool)in_ZR) {
      unaff_x25 = unaff_x26 & unaff_x20;
    }
    else {
      func_0x000107275464();
      if ((bool)in_CY) {
        func_0x000107274d10();
      }
    }
    func_0x000107275978();
    if (unaff_x21 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*unaff_x21;
          if (unaff_x21 == (long *)0x0) goto LAB_107270de0;
          func_0x000107274fd0();
          if (!(bool)in_ZR) break;
          func_0x0001072755e8();
          if ((param_1 & 1) != 0) {
            uVar2 = 0;
            goto LAB_107270e88;
          }
        }
        if ((unaff_x24 & unaff_x26) == 0) {
          uVar4 = extraout_x8 & unaff_x26;
        }
        else {
          uVar4 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x0001072750f8();
            uVar4 = extraout_x8_00;
          }
        }
        in_NG = (long)(uVar4 - unaff_x25) < 0;
        in_ZR = uVar4 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_107270de0:
  func_0x000107274680();
  FUN_107270ea0();
  func_0x00010727423c();
  if ((unaff_x24 == 0) || (func_0x0001072747bc(), (bool)in_NG)) {
    func_0x0001072743fc();
    uVar1 = unaff_x24 == 3;
    func_0x00010727413c();
    func_0x000107270bc8();
    func_0x000107274aec();
    if ((bool)uVar1) {
      in_ZR = 1;
    }
    else {
      in_ZR = unaff_x20 == unaff_x24;
      if (unaff_x24 <= unaff_x20) {
        func_0x000107274d10();
      }
    }
  }
  func_0x0001072752b4();
  if (extraout_x9 == 0) {
    func_0x0001072742c8();
    func_0x0001072757e8();
    if (extraout_x9_00 != 0) {
      func_0x0001072747ac();
      lVar3 = extraout_x8_01;
      if ((bool)in_ZR) {
        uVar4 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar4 = extraout_x9_01;
        if (unaff_x24 <= extraout_x9_01) {
          func_0x0001072750ec();
          lVar3 = extraout_x8_02;
          uVar4 = extraout_x9_02;
        }
      }
      *(long **)(lVar3 + uVar4 * 8) = unaff_x21;
    }
  }
  else {
    func_0x000107274428();
  }
  func_0x000107274274();
  FUN_107270ee8();
  uVar2 = 1;
LAB_107270e88:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = unaff_x21;
  return auVar5;
}



/* Entry: 107270ea0; end: 107270ee7;  */

long FUN_107270ea0(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  
  func_0x0001072746d4();
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *unaff_x21 = puVar1;
  unaff_x21[1] = unaff_x22;
  unaff_x21[2] = 1;
  *puVar1 = 0;
  puVar1[1] = unaff_x20;
  func_0x0001000d03a8(puVar1 + 2);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 107270ee8; end: 107270f07;  */

void FUN_107270ee8(void)

{
  func_0x000100168718();
  FUN_107270f08();
  return;
}



/* Entry: 107270f08; end: 107270f1f;  */

void FUN_107270f08(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x000107274adc(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x000104c2f714(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107270f20; end: 107270f57;  */

void FUN_107270f20(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000107274adc();
  if ((bool)in_ZR) {
    func_0x000104c2f714(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107270f58; end: 107270f7b;  */

void FUN_107270f58(void)

{
  return;
}



/* Entry: 107270f7c; end: 107270faf;  */

void FUN_107270f7c(void)

{
  func_0x000107270f94();
  return;
}



/* Entry: 107270fb0; end: 107271123;  */

undefined1  [16] FUN_107270fb0(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar6;
  ulong uVar7;
  ulong extraout_x9;
  undefined8 extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x10;
  ulong uVar8;
  long *unaff_x21;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  ulong unaff_x23;
  undefined1 auVar12 [16];
  
  uVar1 = *param_2;
  uVar8 = (ulong)uVar1;
  uVar11 = param_1[1];
  uVar10 = (uint)uVar11;
  if (uVar11 != 0) {
    func_0x000107274c60();
    if ((bool)in_ZR) {
      unaff_x23 = (ulong)(uVar10 - 1 & uVar1);
      in_ZR = true;
    }
    else {
      in_NG = (long)(uVar11 - uVar8) < 0;
      in_ZR = uVar11 == uVar8;
      unaff_x23 = uVar8;
      if (uVar11 <= uVar8) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = uVar1 / uVar10;
        }
        unaff_x23 = (ulong)(uVar1 - uVar2 * uVar10);
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    uVar5 = extraout_x8;
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar9;
          if (unaff_x21 == (long *)0x0) goto LAB_107271058;
          uVar7 = unaff_x21[1];
          plVar9 = unaff_x21;
          if (uVar7 != uVar8) break;
          in_NG = (int)(*(uint *)(unaff_x21 + 2) - uVar1) < 0;
          in_ZR = false;
          if (*(uint *)(unaff_x21 + 2) == uVar1) {
            uVar4 = 0;
            goto LAB_10727110c;
          }
        }
        if ((uVar11 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar11 <= uVar7) {
          func_0x000107274f18();
          uVar5 = extraout_x8_00;
          uVar7 = extraout_x9;
        }
        in_NG = (long)(uVar7 - unaff_x23) < 0;
        in_ZR = uVar7 == unaff_x23;
      } while ((bool)in_ZR);
    }
  }
LAB_107271058:
  func_0x000107274680();
  FUN_107271124();
  func_0x00010727423c();
  if ((uVar11 == 0) || (func_0x0001072748dc(), (bool)in_NG)) {
    func_0x000107274590();
    uVar3 = uVar11 == 3;
    func_0x00010727413c();
    func_0x000107271148(param_1);
    func_0x000107274b04();
    if ((bool)uVar3) {
      in_ZR = 1;
      unaff_x23 = (ulong)(uVar10 - 1 & uVar1);
    }
    else {
      in_ZR = uVar11 == uVar8;
      unaff_x23 = uVar8;
      if (uVar11 <= uVar8) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar8 / uVar11;
        }
        unaff_x23 = uVar8 - uVar5 * uVar11;
      }
    }
  }
  if (*(long *)(*param_1 + unaff_x23 * 8) == 0) {
    func_0x0001072742c8();
    *(undefined8 *)(extraout_x8_01 + unaff_x23 * 8) = extraout_x9_00;
    if (*unaff_x21 != 0) {
      func_0x0001072748ec();
      lVar6 = extraout_x8_02;
      if ((bool)in_ZR) {
        uVar8 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar8 = extraout_x9_01;
        if (uVar11 <= extraout_x9_01) {
          func_0x000107274f18();
          lVar6 = extraout_x8_03;
          uVar8 = extraout_x9_02;
        }
      }
      *(long **)(lVar6 + uVar8 * 8) = unaff_x21;
    }
  }
  else {
    func_0x000107274428();
  }
  func_0x000107274578();
  FUN_1072712a0();
  uVar4 = 1;
LAB_10727110c:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = unaff_x21;
  return auVar12;
}



/* Entry: 107271124; end: 1072711c3;  */

void FUN_107271124(void)

{
  func_0x0001072746d4();
  func_0x000107274cb4();
  func_0x0001072748c0();
  return;
}



/* Entry: 1072711c4; end: 10727126f;  */

void FUN_1072711c4(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  if (param_2 == 0) {
    FUN_107271270(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001001685e0();
    FUN_107271288();
    func_0x0001001686b8();
    FUN_107271270();
    func_0x0001001686dc();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x0001001686ec();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072742e0();
      func_0x0001072742f4();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x000107274bf0();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000107274bd8();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x000107274bcc();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x00010727411c();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107271270; end: 107271287;  */

void FUN_107271270(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107271288; end: 10727129f;  */

void FUN_107271288(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000100168718();
  FUN_1072712c0();
  return;
}



/* Entry: 1072712a0; end: 1072712bf;  */

void FUN_1072712a0(void)

{
  func_0x000100168718();
  FUN_1072712c0();
  return;
}



/* Entry: 1072712c0; end: 1072712d7;  */

void FUN_1072712c0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072712d8; end: 1072712f7;  */

void FUN_1072712d8(void)

{
  func_0x0001072752c0();
  FUN_1072712f8();
  func_0x000107275158();
  return;
}



/* Entry: 1072712f8; end: 10727130f;  */

void FUN_1072712f8(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110996168;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107271310; end: 107271313;  */

void FUN_107271310(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110996168;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107271314; end: 107271327;  */

void FUN_107271314(void)

{
  FUN_107271670();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107271328; end: 10727132f;  */

void FUN_107271328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010727574c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107271330; end: 10727135b;  */

undefined8 * FUN_107271330(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109961b8;
  func_0x00010725b1d4(param_1 + 1);
  return param_1;
}



/* Entry: 10727135c; end: 10727136f;  */

void FUN_10727135c(void)

{
  FUN_107271330();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107271370; end: 107271393;  */

long FUN_107271370(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001072756cc();
  func_0x0001072747d8();
  *param_1 = &PTR_FUN_1109961b8;
  FUN_10726faf8(param_1 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return unaff_x20;
}



/* Entry: 107271394; end: 1072713b7;  */

void FUN_107271394(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001072747d8(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_1109961b8;
  FUN_10726faf8(param_2 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 1072713b8; end: 10727150f;  */

void FUN_1072713b8(void)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 auStack_a8 [6];
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  puVar2 = auStack_d0;
  func_0x0001072747cc();
  func_0x000107274388();
  uStack_38 = extraout_x8;
  func_0x000107275784();
  func_0x000107275688();
  if ((int)puVar2 != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x000107275494((long)puVar2 - *(long *)(unaff_x19 + 0x28));
    puVar3 = *(undefined8 **)(lVar5 + 0xb8);
    auStack_a8[0] = 0x14c;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107274ef4();
    uStack_80 = 0;
    uStack_60 = 0;
    uStack_5c = 1;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_c0 = *puVar3;
    uStack_b8 = 3;
    func_0x000107275064();
    FUN_107262330(auStack_a8);
    lVar1 = unaff_x20[1];
    for (lVar4 = *unaff_x20; in_ZR = lVar4 == lVar1, !(bool)in_ZR; lVar4 = lVar4 + 0x48) {
      FUN_107262e9c(auStack_a8,*(ulong *)(lVar4 + 0x18) & 0xfffffffffffffffc);
      FUN_1072633fc(lVar5 + 0x2b8,auStack_a8);
      func_0x00010793c22c();
      func_0x000104c2f714(auStack_a8);
    }
    FUN_107260494(lVar5 + 0x390,unaff_x19 + 0x3c);
    FUN_1072604ac(*(undefined8 *)(unaff_x19 + 0x30));
  }
  func_0x000107270b00();
  func_0x00010727416c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_107262330(auStack_a8);
  func_0x000107270b00(auStack_d0);
  func_0x00010727477c();
  func_0x000107275910();
  func_0x000107275248();
  func_0x000107274ebc();
  return;
}



/* Entry: 107271510; end: 107271537;  */

void FUN_107271510(undefined8 param_1)

{
  func_0x000107275910();
  func_0x000107275248(param_1,&PTR_DAT_110996228);
  func_0x000107274ebc();
  return;
}



/* Entry: 107271538; end: 107271543;  */

undefined ** FUN_107271538(void)

{
  return &PTR_DAT_110996228;
}



/* Entry: 107271544; end: 10727159b;  */

void FUN_107271544(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001072747d8();
  *param_1 = &PTR_FUN_1109961b8;
  FUN_10726faf8(param_1 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 10727159c; end: 10727159f;  */

void FUN_10727159c(void)

{
  func_0x000107275530();
  FUN_10727163c();
  return;
}



/* Entry: 1072715a0; end: 1072715b3;  */

void FUN_1072715a0(void)

{
  func_0x000107271604();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072715b4; end: 1072715bf;  */

void FUN_1072715b4(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107275728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x0001072753b4();
  if ((bool)in_ZR) {
    uVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    uVar2 = 0x28;
  }
  func_0x000107274e64(uVar2);
  return;
}



/* Entry: 1072715c0; end: 107271623;  */

long FUN_1072715c0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x000107274e38();
  }
  else {
    func_0x00010727572c();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 107271624; end: 10727163b;  */

void FUN_107271624(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107275728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x0001072753b4();
  if ((bool)in_ZR) {
    uVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    uVar2 = 0x28;
  }
  func_0x000107274e64(uVar2);
  return;
}



/* Entry: 10727163c; end: 10727166f;  */

void FUN_10727163c(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001072753b4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107274e64(uVar1);
  return;
}



/* Entry: 107271670; end: 10727168b;  */

void FUN_107271670(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110996168;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10727168c; end: 1072716d3;  */

void FUN_10727168c(long param_1)

{
  func_0x000107274970();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072716d4; end: 10727170b;  */

void FUN_1072716d4(void)

{
  func_0x000107274368();
  func_0x000107271740();
  func_0x00010727550c();
  func_0x00010727170c();
  return;
}



/* Entry: 10727170c; end: 1072717bb;  */

void FUN_10727170c(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x000107274670();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    func_0x000107275840();
    func_0x000107271898();
  }
  return;
}



/* Entry: 1072717bc; end: 107271867;  */

void FUN_1072717bc(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  if (param_2 == 0) {
    FUN_107271868(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001001685e0();
    FUN_107271880();
    func_0x0001001686b8();
    FUN_107271868();
    func_0x0001001686dc();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x0001001686ec();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072742e0();
      func_0x0001072742f4();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x000107274bf0();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000107274bd8();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x000107274bcc();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x00010727411c();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107271868; end: 10727187f;  */

void FUN_107271868(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107271880; end: 1072718cb;  */

void FUN_107271880(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072718b0();
  return;
}



/* Entry: 1072718cc; end: 107271a17;  */

undefined1  [16] FUN_1072718cc(ulong param_1)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar3;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar4;
  ulong extraout_x10;
  ulong unaff_x20;
  long *unaff_x21;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined1 auVar5 [16];
  
  func_0x000107275128();
  func_0x00010727471c();
  FUN_10726364c();
  func_0x0001072754b8();
  if (unaff_x24 != 0) {
    func_0x0001072757f4();
    if ((bool)in_ZR) {
      unaff_x25 = unaff_x26 & unaff_x20;
    }
    else {
      func_0x000107275464();
      if ((bool)in_CY) {
        func_0x000107274d10();
      }
    }
    func_0x000107275978();
    if (unaff_x21 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*unaff_x21;
          if (unaff_x21 == (long *)0x0) goto LAB_107271958;
          func_0x000107274fd0();
          if (!(bool)in_ZR) break;
          func_0x0001072755e8();
          if ((param_1 & 1) != 0) {
            uVar2 = 0;
            goto LAB_107271a00;
          }
        }
        if ((unaff_x24 & unaff_x26) == 0) {
          uVar4 = extraout_x8 & unaff_x26;
        }
        else {
          uVar4 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x0001072750f8();
            uVar4 = extraout_x8_00;
          }
        }
        in_NG = (long)(uVar4 - unaff_x25) < 0;
        in_ZR = uVar4 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_107271958:
  func_0x000107274680();
  FUN_107271a18();
  func_0x00010727423c();
  if ((unaff_x24 == 0) || (func_0x0001072747bc(), (bool)in_NG)) {
    func_0x0001072743fc();
    uVar1 = unaff_x24 == 3;
    func_0x00010727413c();
    func_0x000107271740();
    func_0x000107274aec();
    if ((bool)uVar1) {
      in_ZR = 1;
    }
    else {
      in_ZR = unaff_x20 == unaff_x24;
      if (unaff_x24 <= unaff_x20) {
        func_0x000107274d10();
      }
    }
  }
  func_0x0001072752b4();
  if (extraout_x9 == 0) {
    func_0x0001072742c8();
    func_0x0001072757e8();
    if (extraout_x9_00 != 0) {
      func_0x0001072747ac();
      lVar3 = extraout_x8_01;
      if ((bool)in_ZR) {
        uVar4 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar4 = extraout_x9_01;
        if (unaff_x24 <= extraout_x9_01) {
          func_0x0001072750ec();
          lVar3 = extraout_x8_02;
          uVar4 = extraout_x9_02;
        }
      }
      *(long **)(lVar3 + uVar4 * 8) = unaff_x21;
    }
  }
  else {
    func_0x000107274428();
  }
  func_0x000107274274();
  FUN_107271e8c();
  uVar2 = 1;
LAB_107271a00:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = unaff_x21;
  return auVar5;
}



/* Entry: 107271a18; end: 107271a63;  */

void FUN_107271a18(void)

{
  long extraout_x8;
  
  func_0x00010727498c();
  __Znwm(0x2c0);
  func_0x000107275374();
  FUN_107271a64();
  *(undefined1 *)(extraout_x8 + 0x10) = 1;
  return;
}



/* Entry: 107271a64; end: 107271a93;  */

void FUN_107271a64(void)

{
  func_0x0001072747cc();
  func_0x000104c2fe00();
  func_0x0001072751cc();
  FUN_107271a94();
  return;
}



/* Entry: 107271a94; end: 107271acb;  */

void FUN_107271a94(long param_1)

{
  long unaff_x20;
  
  func_0x0001072747cc();
  FUN_1072639d8();
  FUN_107271acc(param_1 + 0x250,unaff_x20 + 0x250);
  return;
}



/* Entry: 107271acc; end: 107271b03;  */

void FUN_107271acc(void)

{
  func_0x000107274368();
  func_0x000107271b38();
  func_0x00010727550c();
  func_0x000107271b04();
  return;
}



/* Entry: 107271b04; end: 107271bb3;  */

void FUN_107271b04(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x000107274670();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    func_0x000107275840();
    func_0x000107271c90();
  }
  return;
}



/* Entry: 107271bb4; end: 107271c5f;  */

void FUN_107271bb4(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  if (param_2 == 0) {
    FUN_107271c60(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001001685e0();
    FUN_107271c78();
    func_0x0001001686b8();
    FUN_107271c60();
    func_0x0001001686dc();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x0001001686ec();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072742e0();
      func_0x0001072742f4();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x000107274bf0();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000107274bd8();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x000107274bcc();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x00010727411c();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107271c60; end: 107271c77;  */

void FUN_107271c60(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107271c78; end: 107271cc3;  */

void FUN_107271c78(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107271ca8();
  return;
}



/* Entry: 107271cc4; end: 107271e2f;  */

undefined1  [16] FUN_107271cc4(long *param_1,int *param_2)

{
  int iVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar5;
  ulong uVar6;
  ulong extraout_x9;
  undefined8 extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x10;
  ulong uVar7;
  long *unaff_x21;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  
  iVar1 = *param_2;
  uVar7 = (ulong)iVar1;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    func_0x000107274c60();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar7;
      in_ZR = true;
    }
    else {
      in_NG = (long)(uVar9 - uVar7) < 0;
      in_ZR = uVar9 == uVar7;
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar4 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    uVar4 = extraout_x8;
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar8;
          if (unaff_x21 == (long *)0x0) goto LAB_107271d68;
          uVar6 = unaff_x21[1];
          plVar8 = unaff_x21;
          if (uVar6 != uVar7) break;
          in_NG = (int)unaff_x21[2] - iVar1 < 0;
          in_ZR = false;
          if ((int)unaff_x21[2] == iVar1) {
            uVar3 = 0;
            goto LAB_107271e18;
          }
        }
        if ((uVar9 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar9 <= uVar6) {
          func_0x000107274f18();
          uVar4 = extraout_x8_00;
          uVar6 = extraout_x9;
        }
        in_NG = (long)(uVar6 - unaff_x23) < 0;
        in_ZR = uVar6 == unaff_x23;
      } while ((bool)in_ZR);
    }
  }
LAB_107271d68:
  func_0x000107274680();
  FUN_107271e30();
  func_0x00010727423c();
  if ((uVar9 == 0) || (func_0x0001072748dc(), (bool)in_NG)) {
    func_0x000107274590();
    uVar2 = uVar9 == 3;
    func_0x00010727413c();
    func_0x000107271b38(param_1);
    func_0x000107274b04();
    if ((bool)uVar2) {
      in_ZR = 1;
      unaff_x23 = extraout_x8_01 & uVar7;
    }
    else {
      in_ZR = uVar9 == uVar7;
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar4 * uVar9;
      }
    }
  }
  if (*(long *)(*param_1 + unaff_x23 * 8) == 0) {
    func_0x0001072742c8();
    *(undefined8 *)(extraout_x8_02 + unaff_x23 * 8) = extraout_x9_00;
    if (*unaff_x21 != 0) {
      func_0x0001072748ec();
      lVar5 = extraout_x8_03;
      if ((bool)in_ZR) {
        uVar7 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar7 = extraout_x9_01;
        if (uVar9 <= extraout_x9_01) {
          func_0x000107274f18();
          lVar5 = extraout_x8_04;
          uVar7 = extraout_x9_02;
        }
      }
      *(long **)(lVar5 + uVar7 * 8) = unaff_x21;
    }
  }
  else {
    func_0x000107274428();
  }
  func_0x000107274578();
  FUN_107271e54();
  uVar3 = 1;
LAB_107271e18:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = unaff_x21;
  return auVar10;
}



/* Entry: 107271e30; end: 107271e53;  */

void FUN_107271e30(void)

{
  func_0x0001072746d4();
  func_0x000107274cb4();
  func_0x0001072748c0();
  return;
}



/* Entry: 107271e54; end: 107271e73;  */

void FUN_107271e54(void)

{
  func_0x000100168718();
  FUN_107271e74();
  return;
}



/* Entry: 107271e74; end: 107271e8b;  */

void FUN_107271e74(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107271e8c; end: 107271eab;  */

void FUN_107271e8c(void)

{
  func_0x000100168718();
  FUN_107271eac();
  return;
}



/* Entry: 107271eac; end: 107271ec3;  */

void FUN_107271eac(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x000107274adc(param_1 + 1);
  if ((bool)in_ZR) {
    FUN_107264ae8(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107271ec4; end: 107271efb;  */

void FUN_107271ec4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000107274adc();
  if ((bool)in_ZR) {
    FUN_107264ae8(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107271efc; end: 107271fe3;  */

void FUN_107271efc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  func_0x0001072747cc();
  puStack_50 = (ulong *)(param_1 + 0x18);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *unaff_x19;
    uVar4 = unaff_x19[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_10727200c();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_107271fe4(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar4 = unaff_x19[1];
      uVar7 = *unaff_x19;
      uVar8 = unaff_x19[3];
      uVar6 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x000107272064(&uStack_70);
      puVar5 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      unaff_x19[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 107271fe4; end: 10727200b;  */

void FUN_107271fe4(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10727200c; end: 1072720a3;  */

void FUN_10727200c(ulong param_1)

{
  undefined8 *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107274b5c();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1072720a4; end: 107272143;  */

long FUN_1072720a4(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar1 = *param_2;
    uVar7 = (ulong)uVar1;
    uVar8 = uVar6 - 1;
    uVar5 = (uint)uVar6;
    if ((uVar6 & uVar8) == 0) {
      uVar9 = (ulong)(uVar5 - 1 & uVar1);
    }
    else {
      uVar9 = uVar7;
      if (uVar6 <= uVar7) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar1 / uVar5;
        }
        uVar9 = (ulong)(uVar1 - uVar2 * uVar5);
      }
    }
    plVar4 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar10 = plVar4[1];
        if (uVar10 != uVar7) break;
        if (*(uint *)(plVar4 + 2) == uVar1) {
          return (long)plVar4;
        }
      }
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar3 * uVar6;
      }
    } while (uVar10 == uVar9);
  }
  return 0;
}



/* Entry: 107272144; end: 10727216f;  */

void FUN_107272144(long param_1)

{
  FUN_107272170();
  if (param_1 != 0) {
    func_0x000107275500();
    FUN_107272210();
  }
  return;
}



/* Entry: 107272170; end: 10727220f;  */

long FUN_107272170(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar1 = *param_2;
    uVar7 = (ulong)uVar1;
    uVar8 = uVar6 - 1;
    uVar5 = (uint)uVar6;
    if ((uVar6 & uVar8) == 0) {
      uVar9 = (ulong)(uVar5 - 1 & uVar1);
    }
    else {
      uVar9 = uVar7;
      if (uVar6 <= uVar7) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar1 / uVar5;
        }
        uVar9 = (ulong)(uVar1 - uVar2 * uVar5);
      }
    }
    plVar4 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar10 = plVar4[1];
        if (uVar10 != uVar7) break;
        if (*(uint *)(plVar4 + 2) == uVar1) {
          return (long)plVar4;
        }
      }
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar3 * uVar6;
      }
    } while (uVar10 == uVar9);
  }
  return 0;
}



/* Entry: 107272210; end: 10727223f;  */

undefined8 FUN_107272210(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_107272240(auStack_38);
  FUN_1072712a0(auStack_38);
  return uVar1;
}



/* Entry: 107272240; end: 10727235b;  */

void FUN_107272240(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_1072722f4;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_1072722f4;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_1072722f4:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10727235c; end: 1072723f3;  */

void FUN_10727235c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *puVar3;
  undefined1 auStack_70 [64];
  
  puVar2 = auStack_70;
  func_0x000107274dcc();
  func_0x0001003ab96c(auStack_70);
  func_0x0001003abb10();
  lVar1 = *unaff_x21;
  *unaff_x21 = (long)puVar2;
  unaff_x21[1] = unaff_x21[1] + (lVar1 - (long)puVar2);
  puVar3 = (undefined8 *)*unaff_x20;
  if ((undefined8 *)unaff_x20[1] == (undefined8 *)*unaff_x20) {
    puVar2 = (undefined1 *)*param_3;
  }
  else {
    while( true ) {
      puVar2 = auStack_70;
      FUN_1072723f4(auStack_70,*puVar3,puVar3[1],param_3);
      if (puVar3 + 2 == (undefined8 *)unaff_x20[1]) break;
      lVar1 = unaff_x20[2] + unaff_x20[3];
      func_0x0001003a9d20();
      *param_3 = lVar1;
      puVar3 = puVar3 + 2;
    }
  }
  *param_3 = (long)puVar2;
  return;
}



/* Entry: 1072723f4; end: 107272417;  */

void FUN_1072723f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x0001003ac264(param_1,&uStack_20,param_4);
  return;
}



/* Entry: 107272418; end: 107272783;  */

void FUN_107272418(long param_1,long param_2)

{
  undefined1 in_NG;
  bool bVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  ulong extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long *plVar6;
  long *plVar7;
  ulong extraout_x9;
  ulong uVar8;
  ulong extraout_x9_00;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  byte bVar17;
  
  func_0x0001072754a0();
  func_0x0001072747cc();
  uVar9 = param_1 + 0x18;
  FUN_10726364c(uVar9,param_2 + 0x10);
  unaff_x20[1] = uVar9;
  uVar12 = unaff_x19[1];
  uVar8 = uVar9;
  func_0x00010727423c();
  if ((uVar12 != 0) && (func_0x000107274958(), !(bool)in_NG)) goto LAB_1072725e8;
  func_0x000107274ac4();
  bVar1 = 2 < uVar12;
  bVar2 = uVar12 == 3;
  func_0x0001072741d0();
  uVar11 = extraout_x8;
  if (!bVar1 || bVar2) {
    uVar11 = extraout_x9;
  }
  if (uVar11 - 1 == 0) {
    uVar11 = 2;
  }
  else if ((uVar11 & uVar11 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar12 = unaff_x19[1];
    uVar8 = uVar11;
  }
  if (uVar12 < uVar11) {
LAB_1072724a0:
    FUN_10726abe8(uVar11);
    func_0x000107275500();
    FUN_10726abd0();
    uVar8 = 0;
    unaff_x19[1] = uVar11;
    lVar5 = *unaff_x19;
    while (uVar11 != uVar8) {
      func_0x0001001686ec();
      lVar5 = extraout_x8_00;
      uVar8 = extraout_x9_00;
    }
    plVar13 = (long *)unaff_x19[2];
    if (plVar13 != (long *)0x0) {
      uVar8 = plVar13[1];
      uVar12 = uVar11 - 1;
      if ((uVar11 & uVar12) == 0) {
        uVar8 = uVar8 & uVar12;
      }
      else if (uVar11 <= uVar8) {
        uVar16 = 0;
        if (uVar11 != 0) {
          uVar16 = uVar8 / uVar11;
        }
        uVar8 = uVar8 - uVar16 * uVar11;
      }
      *(long **)(lVar5 + uVar8 * 8) = unaff_x19 + 2;
      while (plVar15 = plVar13, plVar13 = (long *)*plVar15, plVar13 != (long *)0x0) {
        uVar16 = plVar13[1];
        if ((uVar11 & uVar12) == 0) {
          uVar16 = uVar16 & uVar12;
        }
        else if (uVar11 <= uVar16) {
          uVar10 = 0;
          if (uVar11 != 0) {
            uVar10 = uVar16 / uVar11;
          }
          uVar16 = uVar16 - uVar10 * uVar11;
        }
        if (uVar16 != uVar8) {
          plVar7 = plVar13;
          if (*(long *)(lVar5 + uVar16 * 8) == 0) {
            *(long **)(lVar5 + uVar16 * 8) = plVar15;
            uVar8 = uVar16;
          }
          else {
            do {
              plVar6 = plVar7;
              plVar7 = (long *)0x0;
              if (*plVar6 == 0) break;
              plVar4 = plVar13 + 2;
              func_0x000104c32db4(plVar4,*plVar6 + 0x10);
              plVar7 = (long *)*plVar6;
            } while (((ulong)plVar4 & 1) != 0);
            *plVar15 = (long)plVar7;
            lVar5 = *unaff_x19;
            *plVar6 = **(long **)(lVar5 + uVar16 * 8);
            **(undefined8 **)(lVar5 + uVar16 * 8) = plVar13;
            plVar13 = plVar15;
          }
        }
      }
    }
  }
  else if (uVar11 < uVar12) {
    func_0x0001072741b8();
    if ((uVar12 < 3) || ((uVar12 & uVar12 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001072740fc();
    }
    if (uVar11 <= uVar8) {
      uVar11 = uVar8;
    }
    if (uVar11 < uVar12) {
      if (uVar11 != 0) goto LAB_1072724a0;
      FUN_10726abd0();
      unaff_x19[1] = 0;
    }
  }
  uVar12 = unaff_x19[1];
LAB_1072725e8:
  uVar8 = uVar12 - 1;
  if ((uVar12 & uVar8) == 0) {
    uVar11 = uVar8 & uVar9;
  }
  else {
    uVar11 = uVar9;
    if (uVar12 <= uVar9) {
      uVar11 = 0;
      if (uVar12 != 0) {
        uVar11 = uVar9 / uVar12;
      }
      uVar11 = uVar9 - uVar11 * uVar12;
    }
  }
  plVar13 = *(long **)(*unaff_x19 + uVar11 * 8);
  if (plVar13 != (long *)0x0) {
    uVar14 = 0;
    bVar17 = 0;
    for (; lVar5 = *plVar13, lVar5 != 0; plVar13 = (long *)*plVar13) {
      uVar16 = *(ulong *)(lVar5 + 8);
      if ((uVar12 & uVar8) == 0) {
        uVar10 = uVar16 & uVar8;
      }
      else {
        uVar10 = uVar16;
        if (uVar12 <= uVar16) {
          uVar10 = 0;
          if (uVar12 != 0) {
            uVar10 = uVar16 / uVar12;
          }
          uVar10 = uVar16 - uVar10 * uVar12;
        }
      }
      if (uVar10 != uVar11) break;
      if (uVar16 == uVar9) {
        lVar5 = lVar5 + 0x10;
        func_0x000104c32db4(lVar5,unaff_x20 + 2);
        uVar3 = (uint)lVar5;
      }
      else {
        uVar3 = 0;
      }
      bVar2 = uVar3 != uVar14;
      if ((bool)(bVar17 & bVar2)) break;
      uVar14 = uVar14 | bVar2;
      bVar17 = bVar17 | bVar2;
    }
    uVar12 = unaff_x19[1];
  }
  bVar17 = POPCOUNT((char)uVar12) + POPCOUNT((char)(uVar12 >> 8)) + POPCOUNT((char)(uVar12 >> 0x10))
           + POPCOUNT((char)(uVar12 >> 0x18)) + POPCOUNT((char)(uVar12 >> 0x20)) +
           POPCOUNT((char)(uVar12 >> 0x28)) + POPCOUNT((char)(uVar12 >> 0x30)) +
           POPCOUNT((char)(uVar12 >> 0x38));
  uVar9 = unaff_x20[1];
  if (bVar17 < 2) {
    uVar9 = uVar12 - 1 & uVar9;
  }
  else if (uVar12 <= uVar9) {
    uVar8 = 0;
    if (uVar12 != 0) {
      uVar8 = uVar9 / uVar12;
    }
    uVar9 = uVar9 - uVar8 * uVar12;
  }
  if (plVar13 == (long *)0x0) {
    plVar13 = unaff_x19 + 2;
    *unaff_x20 = *plVar13;
    *plVar13 = (long)unaff_x20;
    lVar5 = *unaff_x19;
    *(long **)(lVar5 + uVar9 * 8) = plVar13;
    if (*unaff_x20 != 0) {
      uVar9 = *(ulong *)(*unaff_x20 + 8);
      if (bVar17 < 2) {
        uVar9 = uVar9 & uVar12 - 1;
      }
      else if (uVar12 <= uVar9) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = uVar9 / uVar12;
        }
        uVar9 = uVar9 - uVar8 * uVar12;
      }
      *(long **)(lVar5 + uVar9 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *plVar13;
    *plVar13 = (long)unaff_x20;
    if (*unaff_x20 != 0) {
      uVar8 = *(ulong *)(*unaff_x20 + 8);
      if (bVar17 < 2) {
        uVar8 = uVar8 & uVar12 - 1;
      }
      else if (uVar12 <= uVar8) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar8 / uVar12;
        }
        uVar8 = uVar8 - uVar11 * uVar12;
      }
      if (uVar8 != uVar9) {
        *(long **)(*unaff_x19 + uVar8 * 8) = unaff_x20;
      }
    }
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  return;
}



/* Entry: 107272784; end: 1072728df;  */

void FUN_107272784(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1[0x16] == 0) {
    *param_2 = *param_3;
  }
  else {
    FUN_107261ecc(puVar1);
    *puVar1 = *param_3;
    puVar1[0x16] = 0;
  }
  return;
}



/* Entry: 1072728e0; end: 10727291f;  */

ulong FUN_1072728e0(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong unaff_x19;
  
  if (param_2 >> 0x3d == 0) {
    uVar1 = param_1[2] - *param_1 >> 2;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x1fffffffffffffff;
    }
    return uVar1;
  }
  FUN_107269d00();
  func_0x000107274b50();
  func_0x000107272944();
  func_0x000100168718();
  FUN_10727298c();
  return unaff_x19;
}



/* Entry: 107272920; end: 10727298b;  */

undefined8 FUN_107272920(void)

{
  undefined8 unaff_x19;
  
  func_0x000107274b50();
  func_0x000107272944();
  func_0x000100168718();
  FUN_10727298c();
  return unaff_x19;
}



/* Entry: 10727298c; end: 1072729a3;  */

void FUN_10727298c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072729a4; end: 1072729df;  */

undefined8 FUN_1072729a4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_1072729e0(auStack_38);
  func_0x000107274c54();
  FUN_107272b60();
  FUN_10726e43c(auStack_38);
  return param_1;
}


