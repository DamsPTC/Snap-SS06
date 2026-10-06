/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104855f30; end: 104855f7b;  */

void FUN_104855f30(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x130);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x1c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104855f7c,uVar1,0);
  return;
}



/* Entry: 104855f7c; end: 104855fcf;  */

void FUN_104855f7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1b0));
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x160));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000104855fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104855fd0; end: 104856033;  */

void FUN_104855fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_104856034;
                    /* WARNING: Could not recover jumptable at 0x000104856030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,param_1);
  return;
}



/* Entry: 104856034; end: 10485606f;  */

void FUN_104856034(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010485606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104856070; end: 1048560fb;  */

void FUN_104856070(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  lVar3 = *(long *)(param_2 + -8);
  *(long *)(unaff_x22 + 0x18) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x20) = uVar1;
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1048560fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(plVar2,uVar1,param_1,param_2);
  return;
}



/* Entry: 1048560fc; end: 10485618b;  */

void FUN_1048560fc(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x104856144,0,0);
  return;
}



/* Entry: 10485618c; end: 104856217;  */

void FUN_10485618c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  lVar3 = *(long *)(param_2 + -8);
  *(long *)(unaff_x22 + 0x18) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x20) = uVar1;
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_104856218;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(plVar2,uVar1,param_1,param_2);
  return;
}



/* Entry: 104856218; end: 1048562a7;  */

void FUN_104856218(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x104856260,0,0);
  return;
}



/* Entry: 1048562a8; end: 104856303;  */

void FUN_1048562a8(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *(long *)(*unaff_x20 + 0x60);
  lVar1 = 0;
  FUN_1048564ec(0,*(undefined8 *)(*unaff_x20 + 0x50));
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar2,lVar1);
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)));
  _swift_defaultActor_destroy();
  return;
}



/* Entry: 104856304; end: 104856317;  */

void FUN_104856304(void)

{
  FUN_1048562a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 104856318; end: 104856327;  */

void FUN_104856318(void)

{
  return;
}



/* Entry: 104856328; end: 10485638b;  */

long * FUN_104856328(long param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  _swift_allocObject();
  FUN_10485638c(0,*(undefined8 *)(*unaff_x20 + 0x50));
  FUN_104855520(param_1,param_2);
  unaff_x20[2] = param_1;
  return unaff_x20;
}



/* Entry: 10485638c; end: 1048563af;  */

void FUN_10485638c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e81e708);
  return;
}



/* Entry: 1048563b0; end: 104856463;  */

void FUN_1048563b0(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long unaff_x22;
  
  plVar6 = *(long **)(*(long *)(unaff_x22 + 0x18) + 0x10);
  plVar4 = (long *)0x1d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x104856404;
  plVar4[0x25] = *(long *)(unaff_x22 + 0x10);
  plVar4[0x26] = (long)plVar6;
  lVar5 = *plVar6;
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x27] = uVar1;
  plVar4[0x28] = *(long *)(lVar5 + 0x50);
  lVar2 = 0;
  FUN_1048564ec();
  plVar4[0x29] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0x2a] = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x2b] = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0x2c] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104855738,plVar6,0);
  return;
}



/* Entry: 104856464; end: 1048564eb;  */

void FUN_104856464(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = &UNK_10dd383e0;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  FUN_1048564ec();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBoWV_11034d678 + 0x40;
    _swift_initClassMetadata2(param_1,0,3,&puStack_38,param_1 + 0x58);
  }
  return;
}



/* Entry: 1048564ec; end: 1048564f7;  */

void FUN_1048564ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e81e7e0);
  return;
}



/* Entry: 1048564f8; end: 10485653b;  */

void FUN_1048564f8(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x58);
  return;
}



/* Entry: 10485653c; end: 10485654f;  */

void FUN_10485653c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e81e790);
  return;
}



/* Entry: 104856550; end: 1048566ab;  */

void FUN_104856550(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_30 = PTR___sBoWV_11034d678 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&puStack_38);
  }
  return;
}



/* Entry: 1048566ac; end: 10485675f;  */

void FUN_1048566ac(uint *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar5 = *(ulong *)(lVar3 + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar5);
  uVar6 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = (uint)uVar5;
    uVar7 = 4;
    if (uVar4 < 4) {
      uVar7 = uVar4;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_104856738;
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    uVar6 = uVar7 | bVar1 - 3 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_104856738:
  if (uVar6 != 2) {
    if (uVar6 == 1) {
      uVar2 = *(undefined8 *)param_1;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104856754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 104856760; end: 10485685b;  */

undefined8 * FUN_104856760(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1048567fc;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_1048567fc:
  if (uVar5 == 2) {
    (**(code **)(lVar3 + 0x10))(param_1);
    *(undefined1 *)((long)param_1 + uVar4) = 2;
  }
  else {
    if (uVar5 == 1) {
      uVar2 = *(undefined8 *)param_2;
      *param_1 = uVar2;
      *(undefined1 *)((long)param_1 + uVar4) = 1;
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 2);
      uVar8 = *(undefined8 *)param_2;
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar8;
      *(undefined1 *)((long)param_1 + uVar4) = 0;
    }
    _swift_retain(uVar2);
  }
  return param_1;
}



/* Entry: 10485685c; end: 104856a23;  */

uint * FUN_10485685c(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar8 + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar1;
  uVar7 = (uint)uVar3;
  if (2 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10485690c;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_10485690c:
  if (uVar4 == 2) {
    (**(code **)(lVar8 + 8))(param_1,lVar6);
  }
  else {
    if (uVar4 == 1) {
      uVar2 = *(undefined8 *)param_1;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 2);
    }
    _swift_release(uVar2);
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1048569b4;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_1048569b4:
  if (uVar4 == 2) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar6);
    *(byte *)((long)param_1 + uVar3) = 2;
  }
  else {
    if (uVar4 == 1) {
      uVar2 = *(undefined8 *)param_2;
      *(undefined8 *)param_1 = uVar2;
      *(byte *)((long)param_1 + uVar3) = 1;
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 2);
      uVar9 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar9;
      *(byte *)((long)param_1 + uVar3) = 0;
    }
    _swift_retain(uVar2);
  }
  return param_1;
}



/* Entry: 104856a24; end: 104856b0f;  */

void FUN_104856a24(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (2 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_104856abc;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_104856abc:
  if (uVar5 == 2) {
    (**(code **)(lVar3 + 0x20))();
    uVar2 = 2;
  }
  else if (uVar5 == 1) {
    *param_1 = *(undefined8 *)param_2;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    uVar8 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
  }
  *(undefined1 *)((long)param_1 + uVar4) = uVar2;
  return;
}



/* Entry: 104856b10; end: 104856ccb;  */

uint * FUN_104856b10(uint *param_1,uint *param_2,long param_3)

{
  undefined8 uVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar8 + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  bVar2 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar2;
  uVar7 = (uint)uVar3;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_104856bc0;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_104856bc0:
  if (uVar4 == 2) {
    (**(code **)(lVar8 + 8))(param_1,lVar6);
  }
  else {
    if (uVar4 == 1) {
      uVar1 = *(undefined8 *)param_1;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 2);
    }
    _swift_release(uVar1);
  }
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar2;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_104856c68;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_104856c68:
  if (uVar4 == 2) {
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar6);
    bVar2 = 2;
  }
  else if (uVar4 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar1;
  }
  *(byte *)((long)param_1 + uVar3) = bVar2;
  return param_1;
}



/* Entry: 104856ccc; end: 104856dcf;  */

int FUN_104856ccc(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_104856d74;
  uVar6 = uVar5 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfd >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_104856d74;
      goto LAB_104856d00;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_104856d00:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar4 < 4) {
      uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xfe;
  }
LAB_104856d74:
  iVar2 = 0;
  if (2 < *(byte *)((long)param_1 + uVar5)) {
    iVar2 = (*(byte *)((long)param_1 + uVar5) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Entry: 104856dd0; end: 104856f73;  */

void FUN_104856dd0(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  lVar1 = uVar4 + 1;
  uVar5 = (uint)lVar1;
  if (param_3 < 0xfe) {
    bVar6 = 0;
  }
  else if (uVar5 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar5 << 3 & 0x1f)) +
            1;
    bVar6 = 2;
    if (0xffff < uVar2) {
      bVar6 = 4;
    }
    if (uVar2 < 0x100) {
      bVar6 = 1 < uVar2;
    }
  }
  else {
    bVar6 = 1;
  }
  if (param_2 < 0xfe) {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar1);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar7;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar7;
    }
  }
  return;
}



/* Entry: 104856f74; end: 10485700b;  */

uint FUN_104856f74(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar2 = (uint)bVar1;
  if (2 < bVar1) {
    uVar5 = (uint)uVar4;
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) {
        return uVar2;
      }
      uVar3 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar3 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar3 = (uint)(uint3)*param_1;
    }
    else {
      uVar3 = *param_1;
    }
    uVar2 = uVar3 | bVar1 - 3 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 3;
  }
  return uVar2;
}



/* Entry: 10485700c; end: 1048570d3;  */

void FUN_10485700c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  if (param_2 < 3) {
    *(char *)((long)param_1 + uVar3) = (char)param_2;
  }
  else {
    param_2 = param_2 - 3;
    uVar4 = (uint)uVar3;
    if (uVar4 < 4) {
      *(char *)((long)param_1 + uVar3) = (char)(param_2 >> (ulong)(uVar4 << 3 & 0x1f)) + '\x03';
      if (uVar4 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar4 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar4 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar4 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + uVar3) = 3;
      _bzero(param_1,uVar3);
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 1048570d4; end: 104857123;  */

void FUN_1048570d4(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10485735c;
  plVar5[2] = lVar1;
  lVar6 = *(long *)(lVar1 + -8);
  plVar5[3] = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[4] = uVar3;
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  _swift_task_alloc();
  plVar5[5] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_104856218;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(plVar4,uVar3,uVar2,lVar1);
  return;
}



/* Entry: 104857124; end: 10485713b;  */

undefined8 * FUN_104857124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10485713c; end: 1048571bb;  */

void FUN_10485713c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  piVar4 = *(int **)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1048571bc;
  iVar1 = *piVar4;
  plVar5 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc(plVar5,(code *)((long)iVar1 + (long)piVar4),uVar3,piVar4,uVar7,uVar2);
  plVar6[2] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_104856034;
                    /* WARNING: Could not recover jumptable at 0x000104856030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(plVar5,param_1);
  return;
}



/* Entry: 1048571bc; end: 1048571f7;  */

void FUN_1048571bc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001048571f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1048571f8; end: 104857247;  */

void FUN_1048571f8(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_104857248;
  plVar5[2] = lVar1;
  lVar6 = *(long *)(lVar1 + -8);
  plVar5[3] = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[4] = uVar3;
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  _swift_task_alloc();
  plVar5[5] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_1048560fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(plVar4,uVar3,uVar2,lVar1);
  return;
}



/* Entry: 104857248; end: 10485728b;  */

void FUN_104857248(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104857288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 10485728c; end: 104857313;  */

undefined8 FUN_10485728c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104857314; end: 104857353;  */

void FUN_104857314(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104857350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104857354; end: 10485735f;  */

void FUN_104857354(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 104857360; end: 1048573a7;  */

void FUN_104857360(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined2 *)(unaff_x20 + 0x30) = 0x100;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1048573a8; end: 1048573cb;  */

void FUN_1048573a8(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1048573cc; end: 1048573db;  */

void FUN_1048573cc(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1048573dc; end: 10485740b;  */

void FUN_1048573dc(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[2]);
  return;
}



/* Entry: 10485740c; end: 1048574cb;  */

undefined8 * FUN_10485740c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 1048574cc; end: 104857517;  */

undefined8 * FUN_1048574cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104857518; end: 1048575a7;  */

int FUN_104857518(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1048575a8; end: 1048575f7;  */

void FUN_1048575a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined2 *)(unaff_x20 + 0x38) = 0x100;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1048575f8; end: 1048576b7;  */

void FUN_1048575f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x58);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar2,uVar1,&UNK_10e81e58c,&UNK_10e81e594);
  uVar4 = 0;
  __sSaMa(0,uVar3);
  _swift_getAssociatedTypeWitness(0,uVar2,uVar1,&UNK_10e81e58c,&UNK_10e81e59c);
  _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar4);
  __sSTsE10compactMapySayqd__Gqd__Sg7ElementQzKXEKlF(FUN_1048576b8);
  return;
}



/* Entry: 1048576b8; end: 1048576db;  */

void FUN_1048576b8(void)

{
  func_0x0001000a9a8c();
  return;
}



/* Entry: 1048576dc; end: 104857793;  */

void FUN_1048576dc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 104857794; end: 10485779b;  */

undefined1 FUN_104857794(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 uStack_31;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c611ec(uVar1);
  func_0x000100083f1c(&uStack_31);
  func_0x000107c611f0(uVar1);
  return uStack_31;
}



/* Entry: 10485779c; end: 104857857;  */

long * FUN_10485779c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar1 + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  if ((*(uint *)(lVar1 + 0x50) & 0x1000f8) == 0 && uVar3 + 1 < 0x19) {
    uVar2 = (uint)*(byte *)((long)param_2 + uVar3);
    if (1 < *(byte *)((long)param_2 + uVar3)) {
      uVar2 = (int)*param_2 + 2;
    }
    if (uVar2 == 1) {
      (**(code **)(lVar1 + 0x10))(param_1);
      *(undefined1 *)((long)param_1 + uVar3) = 1;
      return param_1;
    }
    lVar1 = param_2[1];
    lVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar4;
    *(undefined1 *)((long)param_1 + uVar3) = 0;
  }
  else {
    uVar2 = *(uint *)(lVar1 + 0x50) & 0xf8;
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)(uVar2 + 0x17 & (uVar2 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain(lVar1);
  return param_1;
}



/* Entry: 104857858; end: 1048579f3;  */

uint * FUN_104857858(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar8 + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar1;
  uVar7 = (uint)uVar3;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_104857908;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_104857908:
  if (uVar4 == 1) {
    (**(code **)(lVar8 + 8))(param_1,lVar6);
  }
  else {
    _swift_release(*(undefined8 *)(param_1 + 2));
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1048579a0;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_1048579a0:
  if (uVar4 == 1) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar6);
    *(byte *)((long)param_1 + uVar3) = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar9;
    *(byte *)((long)param_1 + uVar3) = 0;
    _swift_retain(uVar2);
  }
  return param_1;
}



/* Entry: 1048579f4; end: 104857ac7;  */

void FUN_1048579f4(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar2 + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar6 = (uint)uVar3;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_104857a8c;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_104857a8c:
  if (uVar4 != 1) {
    uVar7 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar7;
  }
  else {
    (**(code **)(lVar2 + 0x20))();
  }
  *(bool *)((long)param_1 + uVar3) = uVar4 == 1;
  return;
}



/* Entry: 104857ac8; end: 104857bcb;  */

int FUN_104857ac8(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xff) goto LAB_104857b70;
  uVar6 = uVar5 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfe >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_104857b70;
      goto LAB_104857afc;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_104857afc:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar4 < 4) {
      uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xff;
  }
LAB_104857b70:
  iVar2 = 0;
  if (1 < *(byte *)((long)param_1 + uVar5)) {
    iVar2 = (*(byte *)((long)param_1 + uVar5) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Entry: 104857bcc; end: 104857d6f;  */

void FUN_104857bcc(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  lVar1 = uVar4 + 1;
  uVar5 = (uint)lVar1;
  if (param_3 < 0xff) {
    bVar6 = 0;
  }
  else if (uVar5 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfe >> (ulong)(uVar5 << 3 & 0x1f)) +
            1;
    bVar6 = 2;
    if (0xffff < uVar2) {
      bVar6 = 4;
    }
    if (uVar2 < 0x100) {
      bVar6 = 1 < uVar2;
    }
  }
  else {
    bVar6 = 1;
  }
  if (param_2 < 0xff) {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xff;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar1);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar7;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar7;
    }
  }
  return;
}



/* Entry: 104857d70; end: 104857e07;  */

uint FUN_104857d70(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)uVar4;
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) {
        return uVar2;
      }
      uVar3 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar3 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar3 = (uint)(uint3)*param_1;
    }
    else {
      uVar3 = *param_1;
    }
    uVar2 = uVar3 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Entry: 104857e08; end: 104857f6f;  */

void FUN_104857e08(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  if (param_2 < 2) {
    *(char *)((long)param_1 + uVar3) = (char)param_2;
  }
  else {
    param_2 = param_2 - 2;
    uVar4 = (uint)uVar3;
    if (uVar4 < 4) {
      *(char *)((long)param_1 + uVar3) = (char)(param_2 >> (ulong)(uVar4 << 3 & 0x1f)) + '\x02';
      if (uVar4 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar4 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar4 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar4 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + uVar3) = 2;
      _bzero(param_1,uVar3);
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 104857f70; end: 104857fa7;  */

void FUN_104857f70(undefined8 param_1)

{
  _swift_allocObject();
  FUN_104857fa8(param_1);
  return;
}



/* Entry: 104857fa8; end: 104858523;  */

void FUN_104857fa8(undefined8 param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long extraout_x8;
  long *unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar5 = *unaff_x20;
  lVar4 = *(long *)(lVar5 + 0x50);
  lVar1 = 0;
  __sSqMa(0,lVar4);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_80 + -extraout_x8;
  unaff_x20[2] = 0;
  unaff_x20[3] = 0;
  lVar7 = *(long *)(lVar4 + -8);
  pcVar8 = *(code **)(lVar7 + 0x38);
  (*pcVar8)((long)unaff_x20 + *(long *)(lVar5 + 0x60),1,1,lVar4);
  lVar9 = *(long *)(*unaff_x20 + 0x68);
  lVar5 = 0;
  func_0x0001002acfc8();
  _swift_allocObject();
  puVar2 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *puVar2 = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined4 **)(lVar5 + 0x10) = puVar2;
  *(undefined2 *)(lVar5 + 0x28) = 0x100;
  *(long *)((long)unaff_x20 + lVar9) = lVar5;
  (**(code **)(lVar7 + 0x20))(puVar3,param_1,lVar4);
  (*pcVar8)(puVar3,0,1,lVar4);
  lVar5 = *(long *)(*unaff_x20 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar5,auStack_78,0x21,0);
  (**(code **)(lVar6 + 0x28))((long)unaff_x20 + lVar5,puVar3,lVar1);
  _swift_endAccess(auStack_78);
  return;
}



/* Entry: 104858524; end: 10485852b;  */

bool FUN_104858524(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long *unaff_x20;
  code *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar5 = *(long *)(*unaff_x20 + 0x50);
  lVar1 = 0;
  __sSqMa(0,lVar5);
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_80 + -extraout_x8;
  lVar8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  pcVar3 = (code *)unaff_x20[2];
  if (pcVar3 != (code *)0x0) {
    lVar2 = unaff_x20[3];
    _swift_retain(lVar2);
    (*pcVar3)(lVar6);
    func_0x0001002acfe8(pcVar3,lVar2);
    (**(code **)(lVar8 + 0x20))(puVar4,lVar6,lVar5);
    (**(code **)(lVar8 + 0x38))(puVar4,0,1,lVar5);
    lVar5 = *(long *)(*unaff_x20 + 0x60);
    _swift_beginAccess((long)unaff_x20 + lVar5,auStack_78,0x21,0);
    (**(code **)(lVar7 + 0x28))((long)unaff_x20 + lVar5,puVar4,lVar1);
    _swift_endAccess(auStack_78);
    lVar1 = unaff_x20[2];
    lVar5 = unaff_x20[3];
    unaff_x20[2] = 0;
    unaff_x20[3] = 0;
    func_0x0001002acfe8(lVar1,lVar5);
  }
  return pcVar3 != (code *)0x0;
}



/* Entry: 10485852c; end: 104858593;  */

void FUN_10485852c(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar2 = *unaff_x20;
  func_0x0001002acfe8(unaff_x20[2],unaff_x20[3]);
  lVar3 = *(long *)(*unaff_x20 + 0x60);
  lVar1 = 0;
  __sSqMa(0,*(undefined8 *)(lVar2 + 0x50));
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar3,lVar1);
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)));
  return;
}



/* Entry: 104858594; end: 1048585b7;  */

void FUN_104858594(void)

{
  FUN_10485852c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1048585b8; end: 1048586eb;  */

void FUN_1048585b8(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedConformanceWitness(param_7,param_6,param_5,&UNK_10e81e638,&UNK_10e81e640);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_7,param_5,&UNK_10e81e564,&UNK_10e81e56c);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (**(code **)(extraout_x8_00 + 0x10))((long)puVar2 - extraout_x12,param_2,uVar1);
  _swift_dynamicCast(puVar2,(long)puVar2 - extraout_x12,uVar1,param_6,7);
  (*param_3)(param_1,puVar2);
  (**(code **)(lVar3 + 8))(puVar2,param_6);
  return;
}



/* Entry: 1048586ec; end: 10485870b;  */

void FUN_1048586ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar3 = *(code **)(unaff_x20 + 0x28);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(undefined8 *)(lVar7 + 0x40),param_2,pcVar3,*(undefined8 *)(unaff_x20 + 0x30),uVar1,
             lVar2,uVar4);
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedConformanceWitness(uVar4,lVar2,uVar1,&UNK_10e81e638,&UNK_10e81e640);
  uVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,uVar1,&UNK_10e81e564,&UNK_10e81e56c);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (**(code **)(extraout_x8_00 + 0x10))((long)puVar6 - extraout_x12,param_2,uVar5);
  _swift_dynamicCast(puVar6,(long)puVar6 - extraout_x12,uVar5,lVar2,7);
  (*pcVar3)(param_1,puVar6);
  (**(code **)(lVar7 + 8))(puVar6,lVar2);
  return;
}



/* Entry: 10485870c; end: 104858767;  */

void FUN_10485870c(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 104858768; end: 1048587c3;  */

undefined8 * FUN_104858768(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1048587c4; end: 1048587ff;  */

undefined8 * FUN_1048587c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104858800; end: 10485888b;  */

int FUN_104858800(ulong *param_1,int param_2)

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



/* Entry: 10485888c; end: 1048588d3;  */

void FUN_10485888c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined2 *)(unaff_x20 + 0x30) = 0x100;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1048588d4; end: 104858bd7;  */

void FUN_1048588d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  code **ppcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *unaff_x20;
  code *pcVar13;
  ulong uVar14;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [24];
  code **appcStack_a8 [3];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  uVar11 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x58);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar11,&UNK_10e81e564,&UNK_10e81e56c);
  lStack_e8 = lVar6;
  func_0x0001000a9d90(&pcStack_100);
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))();
  ppcVar7 = &pcStack_100;
  func_0x000104858cec(ppcVar7,lStack_e8);
  _swift_getDynamicType();
  FUN_104858d38(&pcStack_100);
  uVar14 = unaff_x20[3];
  uVar8 = 0xff;
  appcStack_a8[0] = ppcVar7;
  _swift_getAssociatedTypeWitness(0xff,uVar1,uVar11,&UNK_10e81e564,&UNK_10e81e574);
  uVar9 = 0x4000001;
  _swift_getFunctionTypeMetadata1(0x4000001,lVar6,uVar8);
  __sSDyq_Sgxcig(&pcStack_100,appcStack_a8,uVar14,PTR___sSON_11034d8b8,uVar9,
                 PTR___sSOSHsWP_11034d8c0);
  if (pcStack_100 != (code *)0x0) {
    lVar6 = unaff_x20[2];
    if (*(long *)(lVar6 + 0x10) == 0) {
      func_0x000104858cdc(pcStack_100,uStack_f8);
    }
    else {
      func_0x0001000a7158();
      if ((uVar14 & 1) != 0) {
        puVar12 = (undefined8 *)(*(long *)(lVar6 + 0x38) + (long)ppcVar7 * 0x18);
        uVar9 = *puVar12;
        uVar2 = puVar12[1];
        uVar4 = *(undefined1 *)(puVar12 + 2);
        _swift_beginAccess(unaff_x20 + 4,auStack_80,0,0);
        if (*(char *)((long)unaff_x20 + 0x31) != '\x01') {
          lVar6 = unaff_x20[4];
          lVar3 = unaff_x20[5];
          lVar5 = unaff_x20[6];
          _swift_beginAccess(0x1138153c0,auStack_c0,0,0);
          func_0x00010008a8e8(0x1138153c0,&pcStack_100);
          if (lStack_e8 != 0) {
            FUN_104857124(&pcStack_100,appcStack_a8);
            func_0x000104858cec(appcStack_a8,uStack_90);
            pcStack_e0 = pcStack_100;
            uStack_d8 = uStack_f8;
            pcVar13 = *(code **)(lStack_88 + 0x30);
            lVar10 = 0;
            uStack_f0 = uVar11;
            lStack_e8 = uVar1;
            uStack_d0 = param_2;
            _swift_checkMetadataState(0,uVar8);
            (*pcVar13)(param_1,lVar6,lVar3,(char)lVar5,uVar9,uVar2,uVar4,FUN_104858d10,&pcStack_100,
                       lVar10,uStack_90,lStack_88);
            func_0x000104858cdc(pcStack_100,uStack_f8);
            (**(code **)(*(long *)(lVar10 + -8) + 0x38))(param_1,0,1,lVar10);
            FUN_104858d38(appcStack_a8);
            return;
          }
          func_0x00010008a938(&pcStack_100);
        }
        (*pcStack_100)(param_1,param_2);
        func_0x000104858cdc(pcStack_100,uStack_f8);
        lVar6 = 0;
        _swift_checkMetadataState(0,uVar8);
        pcVar13 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
        uVar11 = 0;
        goto LAB_104858b64;
      }
      func_0x000104858cdc(pcStack_100,uStack_f8);
    }
  }
  lVar6 = 0;
  _swift_checkMetadataState(0,uVar8);
  pcVar13 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  uVar11 = 1;
LAB_104858b64:
  (*pcVar13)(param_1,uVar11,1,lVar6);
  return;
}



/* Entry: 104858bd8; end: 104858caf;  */

bool FUN_104858bd8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar5 = unaff_x20[3];
  uVar4 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x58);
  uVar2 = 0xff;
  uStack_58 = param_1;
  _swift_getAssociatedTypeWitness(0xff,uVar1,uVar4,&UNK_10e81e564,&UNK_10e81e574);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar1,uVar4,&UNK_10e81e564,&UNK_10e81e56c);
  uVar4 = 0x4000001;
  _swift_getFunctionTypeMetadata1(0x4000001,uVar3,uVar2);
  __sSDyq_Sgxcig(&lStack_50,&uStack_58,lVar5,PTR___sSON_11034d8b8,uVar4,PTR___sSOSHsWP_11034d8c0);
  if (lStack_50 != 0) {
    FUN_104858cdc(lStack_50,uStack_48);
  }
  return lStack_50 != 0;
}



/* Entry: 104858cb0; end: 104858cdb;  */

void FUN_104858cb0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104858cdc; end: 104858d0f;  */

void FUN_104858cdc(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 104858d10; end: 104858d37;  */

void FUN_104858d10(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 104858d38; end: 104858d57;  */

void FUN_104858d38(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104858d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 104858d58; end: 104858da3;  */

undefined8 FUN_104858d58(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  func_0x0001008f0b08(param_1,param_2);
  return unaff_x20;
}



/* Entry: 104858da4; end: 104858dc7;  */

void FUN_104858da4(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104858dc8; end: 104858dcf;  */

void FUN_104858dc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 104858dd0; end: 104858dff;  */

void FUN_104858dd0(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[2]);
  return;
}



/* Entry: 104858e00; end: 104858ebf;  */

undefined8 * FUN_104858e00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 104858ec0; end: 104858f0b;  */

undefined8 * FUN_104858ec0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104858f0c; end: 104858fa7;  */

int FUN_104858f0c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104858fa8; end: 104858ffb;  */

undefined8 FUN_104858fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_104858ffc(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 104858ffc; end: 104859073;  */

void FUN_104858ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x0001002acfc8();
  _swift_allocObject();
  puVar2 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *puVar2 = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined4 **)(lVar1 + 0x10) = puVar2;
  *(undefined2 *)(lVar1 + 0x28) = 0x100;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(long *)(unaff_x20 + 0x28) = lVar1;
  return;
}



/* Entry: 104859074; end: 1048590c7;  */

void FUN_104859074(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1048590c8; end: 1048590cb;  */

void FUN_1048590c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1048590cc; end: 10485911f;  */

void FUN_1048590cc(long param_1)

{
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_30 = PTR___sBbWV_11034d660 + 0x40;
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  puStack_28 = puStack_30;
  puStack_20 = puStack_30;
  _swift_initClassMetadata2(param_1,0,4,&puStack_30,param_1 + 0x60);
  return;
}



/* Entry: 104859120; end: 10485912b;  */

void FUN_104859120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e81eb08);
  return;
}



/* Entry: 10485912c; end: 10485925f;  */

void FUN_10485912c(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedConformanceWitness(param_7,param_6,param_5,&UNK_10e81e638,&UNK_10e81e640);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_7,param_5,&UNK_10e81e564,&UNK_10e81e56c);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (**(code **)(extraout_x8_00 + 0x10))((long)puVar2 - extraout_x12,param_2,uVar1);
  _swift_dynamicCast(puVar2,(long)puVar2 - extraout_x12,uVar1,param_6,7);
  (*param_3)(param_1,puVar2);
  (**(code **)(lVar3 + 8))(puVar2,param_6);
  return;
}



/* Entry: 104859260; end: 10485927f;  */

void FUN_104859260(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar3 = *(code **)(unaff_x20 + 0x28);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(undefined8 *)(lVar7 + 0x40),param_2,pcVar3,*(undefined8 *)(unaff_x20 + 0x30),uVar1,
             lVar2,uVar4);
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedConformanceWitness(uVar4,lVar2,uVar1,&UNK_10e81e638,&UNK_10e81e640);
  uVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,uVar1,&UNK_10e81e564,&UNK_10e81e56c);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (**(code **)(extraout_x8_00 + 0x10))((long)puVar6 - extraout_x12,param_2,uVar5);
  _swift_dynamicCast(puVar6,(long)puVar6 - extraout_x12,uVar5,lVar2,7);
  (*pcVar3)(param_1,puVar6);
  (**(code **)(lVar7 + 8))(puVar6,lVar2);
  return;
}



/* Entry: 104859280; end: 1048592db;  */

void FUN_104859280(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 1048592dc; end: 104859337;  */

undefined8 * FUN_1048592dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104859338; end: 104859373;  */

undefined8 * FUN_104859338(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104859374; end: 1048593ff;  */

int FUN_104859374(ulong *param_1,int param_2)

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



/* Entry: 104859400; end: 104859497;  */

undefined8 FUN_104859400(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  _os_unfair_lock_lock(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  _os_unfair_lock_unlock(uVar2);
  return uVar1;
}



/* Entry: 104859498; end: 104859767;  */

void FUN_104859498(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  code **ppcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code ***pppcVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long *unaff_x20;
  code *pcVar13;
  ulong uVar14;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  code **appcStack_90 [3];
  undefined8 uStack_78;
  long lStack_70;
  
  uVar9 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x58);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar9,&UNK_10e81e564,&UNK_10e81e56c);
  lStack_c8 = lVar4;
  func_0x0001000a9d90(&pcStack_e0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))();
  ppcVar5 = &pcStack_e0;
  func_0x00010485989c(ppcVar5,lStack_c8);
  _swift_getDynamicType();
  FUN_1048598e8(&pcStack_e0);
  uVar14 = unaff_x20[3];
  uVar6 = 0xff;
  appcStack_90[0] = ppcVar5;
  _swift_getAssociatedTypeWitness(0xff,uVar1,uVar9,&UNK_10e81e564,&UNK_10e81e574);
  uVar7 = 0x44000001;
  _swift_getFunctionTypeMetadata1(0x44000001,lVar4,uVar6);
  puVar11 = PTR___sSON_11034d8b8;
  __sSDyq_Sgxcig(&pcStack_e0,appcStack_90,uVar14,PTR___sSON_11034d8b8,uVar7,PTR___sSOSHsWP_11034d8c0
                );
  uVar10 = (uint)puVar11;
  if (pcStack_e0 != (code *)0x0) {
    lVar4 = unaff_x20[2];
    if ((*(long *)(lVar4 + 0x10) != 0) && (func_0x0001000a7158(), (uVar14 & 1) != 0)) {
      puVar12 = (undefined8 *)(*(long *)(lVar4 + 0x38) + (long)ppcVar5 * 0x18);
      uVar7 = *puVar12;
      uVar2 = puVar12[1];
      uVar3 = *(undefined1 *)(puVar12 + 2);
      FUN_104859400();
      if ((uVar10 & 0xff00) != 0x100) {
        _swift_beginAccess(0x1138153c0,auStack_a8,0,0);
        func_0x00010008a8e8(0x1138153c0,&pcStack_e0);
        if (lStack_c8 != 0) {
          FUN_104857124(&pcStack_e0,appcStack_90);
          pppcVar8 = appcStack_90;
          func_0x00010485989c(pppcVar8,uStack_78);
          pcStack_c0 = pcStack_e0;
          uStack_b8 = uStack_d8;
          pcVar13 = *(code **)(lStack_70 + 0x38);
          lVar4 = 0;
          uStack_d0 = uVar9;
          lStack_c8 = uVar1;
          uStack_b0 = param_2;
          _swift_checkMetadataState(0,uVar6);
          (*pcVar13)(param_1,ppcVar5,uVar14,uVar10,uVar7,uVar2,uVar3,FUN_1048598c0,&pcStack_e0,lVar4
                     ,uStack_78,lStack_70,pppcVar8);
          func_0x00010485988c(pcStack_e0,uStack_d8);
          (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1,0,1,lVar4);
          FUN_1048598e8(appcStack_90);
          return;
        }
        func_0x00010008a938(&pcStack_e0);
      }
      (*pcStack_e0)(param_1,param_2);
      func_0x00010485988c(pcStack_e0,uStack_d8);
      lVar4 = 0;
      _swift_checkMetadataState(0,uVar6);
      pcVar13 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
      uVar9 = 0;
      goto LAB_1048596f8;
    }
    func_0x00010485988c(pcStack_e0,uStack_d8);
  }
  lVar4 = 0;
  _swift_checkMetadataState(0,uVar6);
  pcVar13 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  uVar9 = 1;
LAB_1048596f8:
  (*pcVar13)(param_1,uVar9,1,lVar4);
  return;
}



/* Entry: 104859768; end: 10485983f;  */

bool FUN_104859768(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar5 = unaff_x20[3];
  uVar4 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x58);
  uVar2 = 0xff;
  uStack_58 = param_1;
  _swift_getAssociatedTypeWitness(0xff,uVar1,uVar4,&UNK_10e81e564,&UNK_10e81e574);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar1,uVar4,&UNK_10e81e564,&UNK_10e81e56c);
  uVar4 = 0x44000001;
  _swift_getFunctionTypeMetadata1(0x44000001,uVar3,uVar2);
  __sSDyq_Sgxcig(&lStack_50,&uStack_58,lVar5,PTR___sSON_11034d8b8,uVar4,PTR___sSOSHsWP_11034d8c0);
  if (lStack_50 != 0) {
    FUN_10485988c(lStack_50,uStack_48);
  }
  return lStack_50 != 0;
}



/* Entry: 104859840; end: 10485988b;  */

void FUN_104859840(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10485988c; end: 1048598bf;  */

void FUN_10485988c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1048598c0; end: 1048598e7;  */

void FUN_1048598c0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1048598e8; end: 104859907;  */

void FUN_1048598e8(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001048598fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}


