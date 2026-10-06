/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050ca5cc; end: 1050ca5d3; -[SCCharmsUnifiedProfileLogParametersBuilder withFromTap:] */

void FUN_1050ca5cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 1050ca5d4; end: 1050ca5db; -[SCCharmsUnifiedProfileLogParametersBuilder withFromSwipeLeft:] */

void FUN_1050ca5d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x31) = param_3;
  return;
}



/* Entry: 1050ca5dc; end: 1050ca5e3; -[SCCharmsUnifiedProfileLogParametersBuilder withFromSwipeRight:] */

void FUN_1050ca5dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x32) = param_3;
  return;
}



/* Entry: 1050ca5e4; end: 1050ca5eb; -[SCCharmsUnifiedProfileLogParametersBuilder withActionSucceeded:] */

void FUN_1050ca5e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x33) = param_3;
  return;
}



/* Entry: 1050ca5ec; end: 1050ca5f3; -[SCCharmsUnifiedProfileLogParametersBuilder withActionCancelled:] */

void FUN_1050ca5ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x34) = param_3;
  return;
}



/* Entry: 1050ca5f4; end: 1050ca5fb; -[SCCharmsUnifiedProfileLogParametersBuilder withActionFailed:] */

void FUN_1050ca5f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x35) = param_3;
  return;
}



/* Entry: 1050ca5fc; end: 1050ca607; -[SCCharmsUnifiedProfileLogParametersBuilder .cxx_destruct] */

void FUN_1050ca5fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1050ca608; end: 1050ca67b; -[SCCharmsBlizzardLogger initWithLogger:] */

undefined1 * FUN_1050ca608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e60d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050ca67c; end: 1050ca6e7; -[SCCharmsBlizzardLogger logCharmAttainment:] */

void FUN_1050ca67c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b49b0;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010bea2a20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050ca6e8; end: 1050ca793; -[SCCharmsBlizzardLogger logCharmCardImpression:] */

void FUN_1050ca6e8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_PTR_1126b49b8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010bea2a20(param_1,param_2,puVar1,param_3);
  uVar2 = param_3;
  func_0x00010c06e460(param_3);
  func_0x00010c1b2ca0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c104260(param_3);
  func_0x00010c1dede0(puVar1,param_2,uVar2 & 0xffffffff);
  uVar2 = param_3;
  func_0x00010c0c29e0(param_3);
  _objc_release(param_3);
  func_0x00010c1c3500(puVar1,param_2,uVar2 & 0xffffffff);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050ca794; end: 1050ca897; -[SCCharmsBlizzardLogger logCharmCardDetailImpression:] */

void FUN_1050ca794(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b49c0;
  _objc_alloc_init(PTR_PTR_1126b49c0);
  func_0x00010bea2a20(param_2,param_3,puVar1,param_4);
  uVar2 = param_4;
  func_0x00010c06e460(param_4);
  func_0x00010c1b2ca0(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c104260(param_4);
  func_0x00010c1dede0(puVar1,param_3,uVar2 & 0xffffffff);
  uVar2 = param_4;
  func_0x00010c0c29e0(param_4);
  func_0x00010c1c3500(puVar1,param_3,uVar2 & 0xffffffff);
  func_0x00010c29cc60(param_4);
  func_0x00010c222ce0(puVar1,param_3,(long)(param_1 * 1000.0));
  uVar2 = param_4;
  func_0x00010bfbb080();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_4;
    func_0x00010bfbb040();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_4;
      func_0x00010bfbb060();
      if ((int)uVar2 == 0) goto LAB_1050ca870;
      uVar3 = 3;
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 5;
  }
  func_0x00010c206c40(puVar1,param_3,uVar3);
LAB_1050ca870:
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1050ca898; end: 1050ca99b; -[SCCharmsBlizzardLogger logCharmCardDetailView:] */

void FUN_1050ca898(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b49c8;
  _objc_alloc_init(PTR_PTR_1126b49c8);
  func_0x00010bea2a20(param_2,param_3,puVar1,param_4);
  uVar2 = param_4;
  func_0x00010c06e460(param_4);
  func_0x00010c1b2ca0(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c104260(param_4);
  func_0x00010c1dede0(puVar1,param_3,uVar2 & 0xffffffff);
  uVar2 = param_4;
  func_0x00010c0c29e0(param_4);
  func_0x00010c1c3500(puVar1,param_3,uVar2 & 0xffffffff);
  func_0x00010c29cc60(param_4);
  func_0x00010c222ce0(puVar1,param_3,(long)(param_1 * 1000.0));
  uVar2 = param_4;
  func_0x00010bfbb080();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_4;
    func_0x00010bfbb040();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_4;
      func_0x00010bfbb060();
      if ((int)uVar2 == 0) goto LAB_1050ca974;
      uVar3 = 3;
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 5;
  }
  func_0x00010c206c40(puVar1,param_3,uVar3);
LAB_1050ca974:
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1050ca99c; end: 1050caa43; -[SCCharmsBlizzardLogger logCharmHide:] */

void FUN_1050ca99c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b49d0;
  _objc_alloc_init(PTR_PTR_1126b49d0);
  func_0x00010bea2a20(param_1,param_2,puVar1,param_3);
  uVar2 = param_3;
  func_0x00010beef120();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010beee3a0();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010beee260();
      if ((int)uVar2 == 0) goto LAB_1050caa1c;
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 0;
  }
  func_0x00010c161620(puVar1,param_2,uVar3);
LAB_1050caa1c:
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050caa44; end: 1050caaef; -[SCCharmsBlizzardLogger _setCharmBaseEvent:withParameters:] */

void FUN_1050caa44(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0737c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_4;
    func_0x00010c074960();
    if ((int)uVar1 == 0) goto LAB_1050caa98;
    uVar2 = 1;
  }
  else {
    uVar2 = 4;
  }
  func_0x00010c1e4560(param_3,param_2,uVar2);
LAB_1050caa98:
  uVar1 = param_4;
  func_0x00010c117220(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e44c0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf35b60(param_4);
  func_0x00010c17ad40(param_3,param_2,(long)(int)uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050caaf0; end: 1050caafb; -[SCCharmsBlizzardLogger .cxx_destruct] */

void FUN_1050caaf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050caafc; end: 1050cac17; -[SCCharmsUnifiedProfileLogParameters initWithIsGroupProfile:isFriendProfile:profileSessionID:charmID:isCharmNew:position:maxPosition:viewDuration:fromTap:fromSwipeLeft:fromSwipeRight:actionSucceeded:actionCancelled:actionFailed:] */

undefined8 *
FUN_1050caafc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126e60e0;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    *(undefined4 *)((long)puVar1 + 0x14) = param_7;
    *(undefined4 *)(puVar1 + 3) = param_9;
    *(undefined4 *)((long)puVar1 + 0x1c) = param_10;
    puVar1[5] = param_1;
    *(undefined1 *)((long)puVar1 + 0xb) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 0xc) = param_11._1_1_;
    *(undefined1 *)((long)puVar1 + 0xd) = param_11._2_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_11._3_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = (undefined1)param_12;
    *(undefined1 *)(puVar1 + 2) = param_12._1_1_;
  }
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 1050cac18; end: 1050cac3b; -[SCCharmsUnifiedProfileLogParameters copyWithZone:] */

undefined8 FUN_1050cac18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050cac3c; end: 1050cad27; -[SCCharmsUnifiedProfileLogParameters hash] */

ulong * FUN_1050cac3c(long param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ushort uVar7;
  undefined4 uVar8;
  ulong uVar9;
  double dVar10;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = (ulong)*(byte *)(param_1 + 8);
  uStack_90 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  lStack_80 = (long)*(int *)(param_1 + 0x14);
  uStack_78 = (ulong)*(byte *)(param_1 + 10);
  uStack_70 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
  uStack_68 = *(ulong *)(param_1 + 0x18) >> 0x20;
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_60 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar8 = *(undefined4 *)(param_1 + 0xb);
  uVar5 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar8 >> 0x18),
                                          (uint6)(byte)((uint)uVar8 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar8) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar8 >> 8),(short)uVar5);
  uVar9 = CONCAT44((int)(uVar5 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar5 = CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar5 >> 0x20),(int)uVar9)) &
          0xff01ff01ffffffff;
  uVar7 = (ushort)(uVar5 >> 0x30);
  uStack_58 = (ulong)uVar1 & 0xff;
  uStack_50 = uVar5 >> 0x10 & 0xff;
  uStack_48 = (ulong)CONCAT24(uVar7,(uint)(ushort)(uVar5 >> 0x20)) & 0xffffffff;
  uStack_40 = (ulong)uVar7;
  uStack_38 = (ulong)*(byte *)(param_1 + 0xf);
  uStack_30 = (ulong)*(byte *)(param_1 + 0x10);
  puVar3 = &uStack_98;
  uStack_88 = uVar2;
  func_0x000100505190(puVar3,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1050cae90:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_1050cae94;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((((ulong)puVar4 & 1) != 0) &&
          ((((char)puVar3[1] == (char)param_3[1] &&
            (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
           (*(int *)((long)puVar3 + 0x14) == *(int *)((long)param_3 + 0x14))))) &&
         (((*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10) &&
           ((int)puVar3[3] == (int)param_3[3])) &&
          (*(int *)((long)puVar3 + 0x1c) == *(int *)((long)param_3 + 0x1c))))) &&
        ((*(char *)((long)puVar3 + 0xb) == *(char *)((long)param_3 + 0xb) &&
         (*(char *)((long)puVar3 + 0xc) == *(char *)((long)param_3 + 0xc))))) &&
       ((*(char *)((long)puVar3 + 0xd) == *(char *)((long)param_3 + 0xd) &&
        (((*(char *)((long)puVar3 + 0xe) == *(char *)((long)param_3 + 0xe) &&
          (*(char *)((long)puVar3 + 0xf) == *(char *)((long)param_3 + 0xf))) &&
         ((char)puVar3[2] == (char)param_3[2])))))) {
      dVar10 = ABS((double)puVar3[5] - (double)param_3[5]);
      if ((dVar10 < 2.2250738585072014e-308) ||
         (dVar10 < ABS((double)puVar3[5] + (double)param_3[5]) * 2.220446049250313e-16)) {
        puVar6 = (ulong *)puVar3[4];
        if (puVar6 != (ulong *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_1050cae94;
        }
        goto LAB_1050cae90;
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_1050cae94:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1050cad28; end: 1050caeaf; -[SCCharmsUnifiedProfileLogParameters isEqual:] */

long FUN_1050cad28(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050cae90:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050cae94;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((((uVar2 & 1) != 0) &&
          (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
           (*(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14))))) &&
         (((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
           (*(int *)(param_1 + 0x18) == *(int *)(param_3 + 0x18))) &&
          (*(int *)(param_1 + 0x1c) == *(int *)(param_3 + 0x1c))))) &&
        ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
         (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))) &&
       ((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
        (((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
          (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))) &&
         (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                  2.220446049250313e-16)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_1050cae94;
        }
        goto LAB_1050cae90;
      }
    }
    lVar3 = 0;
  }
LAB_1050cae94:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050caeb0; end: 1050caeb7; -[SCCharmsUnifiedProfileLogParameters isGroupProfile] */

undefined1 FUN_1050caeb0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1050caeb8; end: 1050caebf; -[SCCharmsUnifiedProfileLogParameters isFriendProfile] */

undefined1 FUN_1050caeb8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1050caec0; end: 1050caec7; -[SCCharmsUnifiedProfileLogParameters profileSessionID] */

undefined8 FUN_1050caec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1050caec8; end: 1050caecf; -[SCCharmsUnifiedProfileLogParameters charmID] */

undefined4 FUN_1050caec8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 1050caed0; end: 1050caed7; -[SCCharmsUnifiedProfileLogParameters isCharmNew] */

undefined1 FUN_1050caed0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1050caed8; end: 1050caedf; -[SCCharmsUnifiedProfileLogParameters position] */

undefined4 FUN_1050caed8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 1050caee0; end: 1050caee7; -[SCCharmsUnifiedProfileLogParameters maxPosition] */

undefined4 FUN_1050caee0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 1050caee8; end: 1050caeef; -[SCCharmsUnifiedProfileLogParameters viewDuration] */

undefined8 FUN_1050caee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1050caef0; end: 1050caef7; -[SCCharmsUnifiedProfileLogParameters fromTap] */

undefined1 FUN_1050caef0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1050caef8; end: 1050caeff; -[SCCharmsUnifiedProfileLogParameters fromSwipeLeft] */

undefined1 FUN_1050caef8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 1050caf00; end: 1050caf07; -[SCCharmsUnifiedProfileLogParameters fromSwipeRight] */

undefined1 FUN_1050caf00(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 1050caf08; end: 1050caf0f; -[SCCharmsUnifiedProfileLogParameters actionSucceeded] */

undefined1 FUN_1050caf08(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 1050caf10; end: 1050caf17; -[SCCharmsUnifiedProfileLogParameters actionCancelled] */

undefined1 FUN_1050caf10(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 1050caf18; end: 1050caf1f; -[SCCharmsUnifiedProfileLogParameters actionFailed] */

undefined1 FUN_1050caf18(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1050caf20; end: 1050caf2b; -[SCCharmsUnifiedProfileLogParameters .cxx_destruct] */

void FUN_1050caf20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1050caf2c; end: 1050cc133;  */

undefined8 * FUN_1050caf2c(undefined8 *param_1,undefined *param_2,undefined *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined *puVar13;
  long lVar14;
  undefined *unaff_x21;
  undefined *puVar15;
  undefined *unaff_x22;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *unaff_x23;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *unaff_x24;
  undefined *puVar20;
  undefined *unaff_x25;
  undefined8 uVar21;
  undefined **unaff_x26;
  undefined *unaff_x27;
  undefined4 uStack_72c;
  long lStack_728;
  long lStack_720;
  undefined8 uStack_718;
  undefined **ppuStack_710;
  undefined4 uStack_708;
  undefined4 uStack_6f8;
  undefined4 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  long lStack_6c8;
  long lStack_6c0;
  undefined8 uStack_6b8;
  long *plStack_6b0;
  long *plStack_6a8;
  undefined1 uStack_699;
  undefined **ppuStack_698;
  undefined4 uStack_690;
  undefined2 uStack_680;
  byte bStack_67e;
  byte bStack_67d;
  undefined1 *puStack_660;
  undefined ***pppuStack_658;
  long lStack_650;
  long lStack_648;
  undefined8 uStack_640;
  long *plStack_638;
  long *plStack_630;
  undefined **ppuStack_628;
  undefined4 uStack_620;
  undefined4 uStack_610;
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  long *plStack_5c8;
  long *plStack_5c0;
  undefined1 uStack_5b1;
  undefined **ppuStack_5b0;
  undefined4 uStack_5a8;
  undefined2 uStack_598;
  undefined2 uStack_596;
  undefined1 *puStack_578;
  undefined ***pppuStack_570;
  undefined *puStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long *plStack_550;
  long *plStack_548;
  undefined **ppuStack_540;
  undefined4 uStack_538;
  undefined2 uStack_528;
  byte bStack_526;
  byte bStack_525;
  undefined ***pppuStack_508;
  undefined ***pppuStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_490;
  long lStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_3c8;
  undefined8 *puStack_3b0;
  undefined *puStack_3a8;
  undefined **ppuStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined1 *puStack_360;
  code *pcStack_358;
  undefined *puStack_350;
  undefined1 uStack_348;
  undefined *puStack_340;
  undefined1 uStack_338;
  undefined8 uStack_330;
  undefined1 uStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  long lStack_308;
  undefined *puStack_300;
  undefined8 *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_2;
  puStack_2c0 = param_1;
  _objc_retain();
  _objc_retain(param_2);
  puStack_310 = param_2;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_2;
  func_0x0001091895a4();
  _objc_retainAutoreleasedReturnValue();
  puStack_320 = puVar10;
  _objc_release(param_2);
  puVar13 = (undefined *)0x0;
  puVar10 = puStack_310;
  func_0x00010bfd53c0();
  if ((int)puVar10 != 0) {
    param_2 = puStack_310;
    func_0x00010bf35c20();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_2;
    func_0x00010bfd9ec0();
    _objc_release(param_2);
    if ((int)puVar13 != 0) {
      param_2 = puStack_310;
      func_0x00010bf35c20();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = param_2;
      func_0x00010c0f06c0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = unaff_x21;
      func_0x00010c0f0740();
      _objc_release(unaff_x21);
      _objc_release(param_2);
      puStack_2c8 = (undefined *)0x0;
      iVar12 = (int)puVar13;
      if (iVar12 == 0) {
        puStack_2f8 = (undefined8 *)0x0;
        goto LAB_1050cb088;
      }
      puVar10 = puStack_310;
      if (iVar12 == 1) {
        func_0x00010bf35c20();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar10;
        func_0x00010c0f06c0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x21 = puVar13;
        func_0x00010bfb9120();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = unaff_x21;
        func_0x0001091895a4();
        _objc_retainAutoreleasedReturnValue();
        uStack_2d8 = 1;
        puStack_2c8 = puVar9;
LAB_1050cb128:
        _objc_release(unaff_x21);
        _objc_release(puVar13);
        _objc_release(puVar10);
      }
      else if (iVar12 == 2) {
        func_0x00010bf35c20();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar10;
        func_0x00010c0f06c0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x21 = puVar13;
        func_0x00010bfcef20();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = unaff_x21;
        func_0x0001091895a4();
        _objc_retainAutoreleasedReturnValue();
        uStack_2d8 = 2;
        puStack_2c8 = puVar9;
        goto LAB_1050cb128;
      }
      puVar10 = puStack_2c8;
      puVar13 = puStack_310;
      func_0x00010c0740a0();
      if ((int)puVar13 != 0) {
        FUN_1050d1d08(puStack_2c0,puVar10,1);
        FUN_1050d2218(puStack_2c0,puVar10);
      }
      puVar13 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_2f0 = puVar13;
      for (puVar10 = (undefined *)0x0; puVar9 = puStack_310, func_0x00010c282d80(),
          puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570, puVar10 < puVar9; puVar10 = puVar10 + 1) {
        puVar9 = puStack_310;
        func_0x00010c282d60(puStack_310);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296de0();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puStack_2f0);
        _objc_release(puVar13);
        _objc_release(puVar9);
        unaff_x21 = puVar13;
      }
      puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      lStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      plStack_260 = (long *)0x0;
      puVar10 = puStack_310;
      puStack_2f8 = puVar2;
      func_0x00010bf35c20();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar10;
      func_0x00010bf35c40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puStack_318 = puVar13;
      func_0x00010bf52a60();
      puStack_300 = puVar13;
      if (puVar13 != (undefined *)0x0) {
        lStack_308 = *plStack_260;
        do {
          puStack_2d0 = (undefined *)0x0;
          do {
            if (*plStack_260 != lStack_308) {
              _objc_enumerationMutation(puStack_318);
            }
            puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            puVar13 = *(undefined **)(lStack_268 + (long)puStack_2d0 * 8);
            func_0x00010bfe5ec0(puVar13);
            func_0x00010c0df760(puVar10);
            _objc_retainAutoreleasedReturnValue();
            puStack_2b8 = puVar13;
            func_0x00010befa120(puStack_2f8);
            _objc_release(puVar10);
            puVar10 = puStack_2b8;
            _objc_retain(puStack_2b8);
            puVar13 = puVar10;
            func_0x00010bfd63a0();
            if (((ulong)puVar13 & 1) == 0) {
              puStack_2e0 = (undefined *)0x0;
            }
            else {
              func_0x00010bf6e6e0();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar10;
              func_0x00010c26b1c0();
              _objc_retainAutoreleasedReturnValue();
              puStack_2e8 = puVar13;
              _objc_release(puVar10);
              puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              uStack_208 = 0;
              uStack_210 = 0;
              uStack_1f8 = 0;
              uStack_200 = 0;
              lStack_228 = 0;
              uStack_230 = 0;
              uStack_218 = 0;
              plStack_220 = (long *)0x0;
              puVar13 = puStack_2b8;
              func_0x00010bf6e6e0();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar13;
              func_0x00010c297400();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar13);
              puVar13 = puVar9;
              func_0x00010bf52a60();
              if (puVar13 != (undefined *)0x0) {
                lVar14 = *plStack_220;
                do {
                  puVar11 = (undefined *)0x0;
                  do {
                    if (*plStack_220 != lVar14) {
                      _objc_enumerationMutation(puVar9);
                    }
                    uVar21 = *(undefined8 *)(lStack_228 + (long)puVar11 * 8);
                    uVar19 = uVar21;
                    func_0x00010c0cc5c0();
                    if ((int)uVar19 == 2) {
                      uVar19 = uVar21;
                      func_0x00010bfcf040(uVar21);
                      _objc_retainAutoreleasedReturnValue();
                      uVar16 = uVar19;
                      func_0x0001091895a4();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(uVar19);
                    }
                    else if ((int)uVar19 == 3) {
                      uVar16 = 0;
                      func_0x00010c25c3a0(uVar21);
                    }
                    else {
                      uVar16 = 0;
                    }
                    puVar20 = PTR_PTR_1126b4918;
                    _objc_alloc(PTR_PTR_1126b4918);
                    func_0x00010c296d80(uVar21);
                    func_0x00010c060440(puVar20);
                    func_0x00010befa120(puVar10);
                    _objc_release(puVar20);
                    _objc_release(uVar16);
                    puVar11 = puVar11 + 1;
                  } while (puVar13 != puVar11);
                  puVar13 = puVar9;
                  func_0x00010bf52a60();
                } while (puVar13 != (undefined *)0x0);
              }
              _objc_release(puVar9);
              puVar13 = PTR_PTR_1126b4908;
              _objc_alloc();
              func_0x00010c00b9c0();
              puStack_2e0 = puVar13;
              _objc_release(puVar10);
              _objc_release(puStack_2e8);
              puVar10 = puStack_2b8;
            }
            _objc_release(puVar10);
            puVar10 = puStack_2b8;
            _objc_retain(puStack_2b8);
            puVar13 = puVar10;
            func_0x00010bfd7880();
            if (((ulong)puVar13 & 1) == 0) {
              unaff_x27 = (undefined *)0x0;
            }
            else {
              func_0x00010bfce020();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar10;
              func_0x00010c1117e0();
              _objc_release(puVar10);
              puVar10 = puStack_2b8;
              if ((int)puVar13 == 1) {
                func_0x00010bfce020(puStack_2b8);
                _objc_retainAutoreleasedReturnValue();
                puVar13 = puVar10;
                func_0x00010c111d60();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = (undefined *)0x0;
LAB_1050cb5b8:
                _objc_release(puVar10);
              }
              else {
                if ((int)puVar13 == 4) {
                  func_0x00010bfce020();
                  _objc_retainAutoreleasedReturnValue();
                  puVar13 = puVar10;
                  func_0x00010c110540();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puVar13;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = puVar11;
                  func_0x0001091895a4();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar11);
                  _objc_release(puVar13);
                  puVar13 = (undefined *)0x0;
                  goto LAB_1050cb5b8;
                }
                puVar13 = (undefined *)0x0;
                puVar9 = (undefined *)0x0;
              }
              puVar10 = puStack_2b8;
              func_0x00010bfce020();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar10;
              func_0x00010bf6f5e0();
              _objc_release(puVar10);
              if ((int)puVar11 == 2) {
                puVar10 = puStack_2b8;
                func_0x00010bfce020(puStack_2b8);
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar10;
                func_0x00010bf6f640();
                _objc_retainAutoreleasedReturnValue();
                puVar20 = puVar11;
                func_0x00010c26afc0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar11);
                _objc_release(puVar10);
                puVar10 = puStack_2b8;
                func_0x00010bfce020();
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar10;
                func_0x00010bf6f640();
                _objc_retainAutoreleasedReturnValue();
                puVar3 = puVar11;
                func_0x00010bfde100();
                _objc_release(puVar11);
                _objc_release(puVar10);
                if ((int)puVar3 == 0) goto LAB_1050cb81c;
                puVar10 = puStack_2b8;
                func_0x00010bfce020(puStack_2b8);
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar10;
                func_0x00010bf6f640();
                _objc_retainAutoreleasedReturnValue();
                puVar3 = puVar11;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                puVar15 = puVar3;
                func_0x0001091895a4();
                _objc_retainAutoreleasedReturnValue();
                puVar18 = (undefined *)0x0;
                puVar17 = (undefined *)0x0;
LAB_1050cb8c4:
                _objc_release(puVar3);
                _objc_release(puVar11);
                _objc_release(puVar10);
              }
              else {
                if ((int)puVar11 == 3) {
                  puVar10 = puStack_2b8;
                  func_0x00010bfce020(puStack_2b8);
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puVar10;
                  func_0x00010bf6f560();
                  _objc_retainAutoreleasedReturnValue();
                  puVar18 = puVar11;
                  func_0x00010c26afc0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar11);
                  _objc_release(puVar10);
                  puVar10 = puStack_2b8;
                  func_0x00010bfce020();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puVar10;
                  func_0x00010bf6f560();
                  _objc_retainAutoreleasedReturnValue();
                  puVar20 = puVar11;
                  func_0x00010bfde040();
                  _objc_release(puVar11);
                  _objc_release(puVar10);
                  if ((int)puVar20 == 0) {
                    puVar15 = (undefined *)0x0;
                  }
                  else {
                    puVar10 = puStack_2b8;
                    func_0x00010bfce020(puStack_2b8);
                    _objc_retainAutoreleasedReturnValue();
                    puVar11 = puVar10;
                    func_0x00010bf6f560();
                    _objc_retainAutoreleasedReturnValue();
                    puVar20 = puVar11;
                    func_0x00010c290fc0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar15 = puVar20;
                    func_0x0001091895a4();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar20);
                    _objc_release(puVar11);
                    _objc_release(puVar10);
                  }
                  puVar10 = puStack_2b8;
                  func_0x00010bfce020();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puVar10;
                  func_0x00010bf6f560();
                  _objc_retainAutoreleasedReturnValue();
                  puVar20 = puVar11;
                  func_0x00010bfde060();
                  _objc_release(puVar11);
                  _objc_release(puVar10);
                  if ((int)puVar20 != 0) {
                    puVar10 = puStack_2b8;
                    func_0x00010bfce020(puStack_2b8);
                    _objc_retainAutoreleasedReturnValue();
                    puVar11 = puVar10;
                    func_0x00010bf6f560();
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = puVar11;
                    func_0x00010c290fe0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar17 = puVar3;
                    func_0x0001091895a4();
                    _objc_retainAutoreleasedReturnValue();
                    puVar20 = (undefined *)0x0;
                    goto LAB_1050cb8c4;
                  }
                  puVar20 = (undefined *)0x0;
                }
                else {
                  puVar20 = (undefined *)0x0;
LAB_1050cb81c:
                  puVar18 = (undefined *)0x0;
                  puVar15 = (undefined *)0x0;
                }
                puVar17 = (undefined *)0x0;
              }
              unaff_x27 = PTR_PTR_1126b4920;
              _objc_alloc();
              puStack_350 = puVar9;
              func_0x00010c039c60();
              _objc_release(puVar17);
              _objc_release(puVar15);
              _objc_release(puVar18);
              _objc_release(puVar20);
              _objc_release(puVar9);
              _objc_release(puVar13);
              puVar10 = puStack_2b8;
            }
            _objc_release(puVar10);
            unaff_x22 = PTR_PTR_1126b4910;
            _objc_alloc();
            puVar10 = puStack_2b8;
            unaff_x23 = puStack_2b8;
            func_0x00010bfe5ec0();
            puVar13 = puVar10;
            func_0x00010bf85d80(puVar10);
            _objc_retainAutoreleasedReturnValue();
            unaff_x21 = puVar10;
            func_0x00010bf71d00();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = puVar10;
            func_0x00010bfe2e20();
            unaff_x25 = puVar10;
            func_0x00010bf861c0();
            unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bfe5ec0(puVar10);
            puVar10 = (undefined *)unaff_x26;
            func_0x00010c0df760(unaff_x26);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puStack_2f0;
            func_0x00010bf4b900();
            uStack_328 = 0;
            uStack_330 = 1;
            uStack_338 = SUB81(puVar9,0);
            uStack_348 = SUB81(unaff_x24,0);
            puStack_350 = unaff_x27;
            puStack_340 = unaff_x25;
            func_0x00010c032ae0();
            _objc_release(puVar10);
            _objc_release(unaff_x21);
            _objc_release(puVar13);
            FUN_1050cd5a0(puStack_2c0,unaff_x22);
            _objc_release(unaff_x22);
            _objc_release(unaff_x27);
            _objc_release(puStack_2e0);
            puStack_2d0 = puStack_2d0 + 1;
          } while (puStack_2d0 != puStack_300);
          puVar10 = puStack_318;
          func_0x00010bf52a60();
          puStack_300 = puVar10;
        } while (puVar10 != (undefined *)0x0);
      }
      _objc_release(puStack_318);
      for (puVar10 = (undefined *)0x0; puVar13 = puStack_310, func_0x00010c12f3a0(),
          puVar10 < puVar13; puVar10 = puVar10 + 1) {
        puVar13 = puStack_310;
        func_0x00010c12f380(puStack_310);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar13;
        func_0x00010c296de0();
        FUN_1050ccc74(puStack_2c0,puStack_2c8,puVar9);
        _objc_release(puVar13);
      }
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      lStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      puStack_2a0 = (undefined8 *)0x0;
      puVar10 = puStack_310;
      func_0x00010bf35c20();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar10;
      func_0x00010bfe13a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = puVar13;
      func_0x00010bf52a60();
      if (puVar10 != (undefined *)0x0) {
        unaff_x25 = (undefined *)*puStack_2a0;
        unaff_x26 = &PTR_PTR_1126b4000;
        do {
          unaff_x27 = (undefined *)0x0;
          do {
            if ((undefined *)*puStack_2a0 != unaff_x25) {
              _objc_enumerationMutation(puVar13);
            }
            unaff_x23 = *(undefined **)(lStack_2a8 + (long)unaff_x27 * 8);
            unaff_x22 = PTR_PTR_1126b4938;
            _objc_alloc();
            unaff_x24 = unaff_x23;
            func_0x00010bfe5ec0();
            unaff_x21 = unaff_x23;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe1500(unaff_x23);
            func_0x00010c032b00();
            _objc_release(unaff_x21);
            FUN_1050d1834(puStack_2c0,unaff_x22);
            _objc_release(unaff_x22);
            unaff_x27 = unaff_x27 + 1;
          } while (puVar10 != unaff_x27);
          puVar10 = puVar13;
          func_0x00010bf52a60();
        } while (puVar10 != (undefined *)0x0);
      }
      _objc_release(puVar13);
      param_2 = PTR_PTR_1126b49d8;
      _objc_alloc();
      puVar10 = puStack_310;
      func_0x00010c0d9f60(puStack_310);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c032b40();
      _objc_release(puVar10);
      puVar9 = (undefined *)0x0;
      puVar13 = param_2;
      FUN_1050dc1d0();
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar13;
      func_0x00010c25ed40(puStack_2c0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(param_2);
      _objc_release(puStack_2f0);
      _objc_release(puStack_2c8);
      goto LAB_1050cb088;
    }
  }
  puStack_2f8 = (undefined8 *)0x0;
LAB_1050cb088:
  _objc_release(puStack_320);
  _objc_release(puStack_310);
  puVar2 = puStack_2c0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_2f8);
    return puStack_2f8;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  _objc_release(puVar13);
  _objc_release(param_2);
  _objc_release(puStack_320);
  _objc_release(puStack_310);
  _objc_release(puStack_2c0);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_358 = FUN_1050cc134;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3b0 = puVar2;
  puStack_3a8 = unaff_x27;
  ppuStack_3a0 = unaff_x26;
  puStack_398 = unaff_x25;
  puStack_390 = unaff_x24;
  puStack_388 = unaff_x23;
  puStack_380 = unaff_x22;
  puStack_378 = unaff_x21;
  puStack_370 = puVar13;
  puStack_368 = param_2;
  puStack_360 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(puVar9);
  _objc_retain(param_3);
  lStack_488 = 0;
  uStack_490 = 0;
  uStack_478 = 0;
  plStack_480 = (long *)0x0;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  _objc_retain(param_3);
  puVar10 = param_3;
  func_0x00010bf52a60();
  if (puVar10 != (undefined *)0x0) {
    lVar14 = *plStack_480;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_480 != lVar14) {
          _objc_enumerationMutation(param_3);
        }
        uVar19 = *(undefined8 *)(lStack_488 + (long)puVar13 * 8);
        _objc_opt_class(PTR_PTR_1126b4910);
        if (puVar4 == (undefined8 *)0x0) {
          uStack_4a0 = 0;
          uStack_4b8 = 0;
          uStack_4c0 = 0;
          uStack_4a8 = 0;
          uStack_4b0 = 0;
          uStack_4c8 = 0;
          uStack_4d0 = 0;
        }
        else {
          func_0x00010bfa6be0(&uStack_4d0);
        }
        puVar5 = &uStack_5b1;
        FUN_1050d6f78();
        uStack_620 = 0xf;
        uStack_610 = 0x100;
        _objc_retain(puVar9);
        ppuStack_628 = &PTR_SUB_110862760;
        pppuStack_570 = &ppuStack_628;
        uStack_5e8 = 0;
        uStack_5f0 = 0;
        uStack_5d8 = 0;
        puStack_5e0 = (undefined *)0x0;
        plStack_5c8 = (long *)0x0;
        uStack_5d0 = 0;
        plStack_5c0 = (long *)0x0;
        uStack_596 = *(undefined2 *)(puVar5 + 0x1a);
        uStack_5a8 = 10;
        uStack_598 = 0x100;
        ppuStack_5b0 = &PTR_FUN_110862700;
        uStack_560 = 0;
        puStack_568 = (undefined *)0x0;
        plStack_550 = (long *)0x0;
        uStack_558 = 0;
        plStack_548 = (long *)0x0;
        puVar6 = &uStack_699;
        puStack_5f8 = puVar9;
        puStack_578 = puVar5;
        FUN_1050d70f0();
        uVar1 = (int)uVar19;
        func_0x00010c067ec0();
        uStack_6e0 = uVar1;
        uStack_708 = 0xf;
        uStack_6f8 = 0x100;
        ppuStack_710 = &PTR_FUN_110864c08;
        pppuStack_658 = &ppuStack_710;
        uStack_6d0 = 0;
        uStack_6d8 = 0;
        lStack_6c0 = 0;
        lStack_6c8 = 0;
        plStack_6b0 = (long *)0x0;
        uStack_6b8 = 0;
        plStack_6a8 = (long *)0x0;
        bStack_67e = puVar6[0x1a];
        bStack_67d = puVar6[0x1b];
        uStack_690 = 10;
        uStack_680 = 0x100;
        ppuStack_698 = &PTR_FUN_110866be0;
        pppuStack_500 = &ppuStack_698;
        lStack_648 = 0;
        lStack_650 = 0;
        plStack_638 = (long *)0x0;
        uStack_640 = 0;
        plStack_630 = (long *)0x0;
        bStack_526 = (byte)uStack_596 | bStack_67e;
        bStack_525 = uStack_596._1_1_ & bStack_67d;
        uStack_538 = 4;
        uStack_528 = 0x100;
        ppuStack_540 = &PTR_SUB_1108629c8;
        pppuStack_508 = &ppuStack_5b0;
        plStack_4d8 = (long *)0x0;
        plStack_4e0 = (long *)0x0;
        uStack_4e8 = 0;
        uStack_4f0 = 0;
        lStack_4f8 = 0;
        lStack_728 = 0;
        lStack_720 = 0;
        uStack_718 = 0;
        uStack_72c = 0;
        puVar2 = &uStack_4d0;
        puStack_660 = puVar6;
        func_0x0001000e77a0(puVar2,&ppuStack_540,&lStack_728,&uStack_72c);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        if (lStack_728 != 0) {
          lStack_720 = lStack_728;
          __ZdlPv();
        }
        plVar8 = plStack_4d8;
        ppuStack_540 = &PTR_SUB_1108629c8;
        plStack_4d8 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        plVar8 = plStack_4e0;
        plStack_4e0 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        if (lStack_4f8 != 0) {
          __ZdlPv();
        }
        plVar8 = plStack_630;
        ppuStack_698 = &PTR_FUN_110866be0;
        plStack_630 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        plVar8 = plStack_638;
        plStack_638 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        if (lStack_650 != 0) {
          lStack_648 = lStack_650;
          __ZdlPv();
        }
        plVar8 = plStack_6a8;
        ppuStack_710 = &PTR_FUN_110864c08;
        plStack_6a8 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        plVar8 = plStack_6b0;
        plStack_6b0 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        if (lStack_6c8 != 0) {
          lStack_6c0 = lStack_6c8;
          __ZdlPv();
        }
        plVar8 = plStack_548;
        ppuStack_5b0 = &PTR_FUN_110862700;
        plStack_548 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        plVar8 = plStack_550;
        plStack_550 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        ppuStack_698 = &puStack_568;
        func_0x000100105004(&ppuStack_698);
        plVar8 = plStack_5c0;
        ppuStack_628 = &PTR_SUB_110862760;
        plStack_5c0 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        plVar8 = plStack_5c8;
        plStack_5c8 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        ppuStack_698 = &puStack_5e0;
        func_0x000100105004(&ppuStack_698);
        _objc_release(puStack_5f8);
        func_0x0001000e76e0(&uStack_4a8);
        _objc_release(uStack_4b8);
        _objc_release(uStack_4c0);
        if (puVar7 != (undefined8 *)0x0) {
          puVar11 = PTR_PTR_1126b49e0;
          FUN_1050d82a8(PTR_PTR_1126b49e0,puVar7);
          _objc_retainAutoreleasedReturnValue();
          if (puVar11 != (undefined *)0x0) {
            puVar11[0x15] = 0;
          }
          func_0x00010c25ed40(puVar4);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar11);
        }
        _objc_release(puVar7);
        puVar13 = puVar13 + 1;
      } while (puVar10 != puVar13);
      puVar10 = param_3;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined *)0x0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(puVar9);
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(param_3);
    _objc_release(puVar9);
    _objc_release(puVar4);
    __Unwind_Resume();
    *puVar2 = &PTR_FUN_110866be0;
    plVar8 = (long *)puVar2[0xd];
    puVar2[0xd] = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar8 = (long *)puVar2[0xc];
    puVar2[0xc] = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    if (puVar2[9] != 0) {
      puVar2[10] = puVar2[9];
      __ZdlPv();
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1050cc134; end: 1050cc747;  */

undefined8 * FUN_1050cc134(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 uStack_3dc;
  long lStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined **ppuStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3a8;
  undefined4 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long lStack_370;
  undefined8 uStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined1 uStack_349;
  undefined **ppuStack_348;
  undefined4 uStack_340;
  undefined2 uStack_330;
  byte bStack_32e;
  byte bStack_32d;
  undefined1 *puStack_310;
  undefined ***pppuStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  undefined **ppuStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2c0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long *plStack_278;
  long *plStack_270;
  undefined1 uStack_261;
  undefined **ppuStack_260;
  undefined4 uStack_258;
  undefined2 uStack_248;
  undefined2 uStack_246;
  undefined1 *puStack_228;
  undefined ***pppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined **ppuStack_1f0;
  undefined4 uStack_1e8;
  undefined2 uStack_1d8;
  byte bStack_1d6;
  byte bStack_1d5;
  undefined ***pppuStack_1b8;
  undefined ***pppuStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(undefined8 *)(lStack_138 + lVar10 * 8);
        _objc_opt_class(PTR_PTR_1126b4910);
        if (param_1 == (undefined8 *)0x0) {
          uStack_150 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
        }
        else {
          func_0x00010bfa6be0(&uStack_180);
        }
        puVar3 = &uStack_261;
        FUN_1050d6f78();
        uStack_2d0 = 0xf;
        uStack_2c0 = 0x100;
        _objc_retain(param_2);
        ppuStack_2d8 = &PTR_SUB_110862760;
        pppuStack_220 = &ppuStack_2d8;
        uStack_298 = 0;
        uStack_2a0 = 0;
        uStack_288 = 0;
        puStack_290 = (undefined *)0x0;
        plStack_278 = (long *)0x0;
        uStack_280 = 0;
        plStack_270 = (long *)0x0;
        uStack_246 = *(undefined2 *)(puVar3 + 0x1a);
        uStack_258 = 10;
        uStack_248 = 0x100;
        ppuStack_260 = &PTR_FUN_110862700;
        uStack_210 = 0;
        puStack_218 = (undefined *)0x0;
        plStack_200 = (long *)0x0;
        uStack_208 = 0;
        plStack_1f8 = (long *)0x0;
        puVar4 = &uStack_349;
        uStack_2a8 = param_2;
        puStack_228 = puVar3;
        FUN_1050d70f0();
        uVar1 = (int)uVar11;
        func_0x00010c067ec0();
        uStack_390 = uVar1;
        uStack_3b8 = 0xf;
        uStack_3a8 = 0x100;
        ppuStack_3c0 = &PTR_FUN_110864c08;
        pppuStack_308 = &ppuStack_3c0;
        uStack_380 = 0;
        uStack_388 = 0;
        lStack_370 = 0;
        lStack_378 = 0;
        plStack_360 = (long *)0x0;
        uStack_368 = 0;
        plStack_358 = (long *)0x0;
        bStack_32e = puVar4[0x1a];
        bStack_32d = puVar4[0x1b];
        uStack_340 = 10;
        uStack_330 = 0x100;
        ppuStack_348 = &PTR_FUN_110866be0;
        pppuStack_1b0 = &ppuStack_348;
        lStack_2f8 = 0;
        lStack_300 = 0;
        plStack_2e8 = (long *)0x0;
        uStack_2f0 = 0;
        plStack_2e0 = (long *)0x0;
        bStack_1d6 = (byte)uStack_246 | bStack_32e;
        bStack_1d5 = uStack_246._1_1_ & bStack_32d;
        uStack_1e8 = 4;
        uStack_1d8 = 0x100;
        ppuStack_1f0 = &PTR_SUB_1108629c8;
        pppuStack_1b8 = &ppuStack_260;
        plStack_188 = (long *)0x0;
        plStack_190 = (long *)0x0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        lStack_1a8 = 0;
        lStack_3d8 = 0;
        lStack_3d0 = 0;
        uStack_3c8 = 0;
        uStack_3dc = 0;
        puVar5 = &uStack_180;
        puStack_310 = puVar4;
        func_0x0001000e77a0(puVar5,&ppuStack_1f0,&lStack_3d8,&uStack_3dc);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        if (lStack_3d8 != 0) {
          lStack_3d0 = lStack_3d8;
          __ZdlPv();
        }
        plVar8 = plStack_188;
        ppuStack_1f0 = &PTR_SUB_1108629c8;
        plStack_188 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        plVar8 = plStack_190;
        plStack_190 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        if (lStack_1a8 != 0) {
          __ZdlPv();
        }
        plVar8 = plStack_2e0;
        ppuStack_348 = &PTR_FUN_110866be0;
        plStack_2e0 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        plVar8 = plStack_2e8;
        plStack_2e8 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        if (lStack_300 != 0) {
          lStack_2f8 = lStack_300;
          __ZdlPv();
        }
        plVar8 = plStack_358;
        ppuStack_3c0 = &PTR_FUN_110864c08;
        plStack_358 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        plVar8 = plStack_360;
        plStack_360 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        if (lStack_378 != 0) {
          lStack_370 = lStack_378;
          __ZdlPv();
        }
        plVar8 = plStack_1f8;
        ppuStack_260 = &PTR_FUN_110862700;
        plStack_1f8 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        plVar8 = plStack_200;
        plStack_200 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        ppuStack_348 = &puStack_218;
        func_0x000100105004(&ppuStack_348);
        plVar8 = plStack_270;
        ppuStack_2d8 = &PTR_SUB_110862760;
        plStack_270 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        plVar8 = plStack_278;
        plStack_278 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        ppuStack_348 = &puStack_290;
        func_0x000100105004(&ppuStack_348);
        _objc_release(uStack_2a8);
        func_0x0001000e76e0(&uStack_158);
        _objc_release(uStack_168);
        _objc_release(uStack_170);
        if (puVar6 != (undefined8 *)0x0) {
          puVar7 = PTR_PTR_1126b49e0;
          FUN_1050d82a8(PTR_PTR_1126b49e0,puVar6);
          _objc_retainAutoreleasedReturnValue();
          if (puVar7 != (undefined *)0x0) {
            puVar7[0x15] = 0;
          }
          func_0x00010c25ed40(param_1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar7);
        }
        _objc_release(puVar6);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar5 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  *puVar5 = &PTR_FUN_110866be0;
  plVar8 = (long *)puVar5[0xd];
  puVar5[0xd] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = (long *)puVar5[0xc];
  puVar5[0xc] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (puVar5[9] != 0) {
    puVar5[10] = puVar5[9];
    __ZdlPv();
  }
  return puVar5;
}



/* Entry: 1050cc748; end: 1050cc7b7;  */

undefined8 * FUN_1050cc748(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110866be0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1050cc7b8; end: 1050ccc73;  */

void FUN_1050cc7b8(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined4 uStack_30c;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined4 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b4910);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_191;
  FUN_1050d6f78();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  _objc_retain(param_2);
  ppuStack_208 = &PTR_SUB_110862760;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  puStack_1c0 = (undefined *)0x0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_FUN_110862700;
  uStack_140 = 0;
  puStack_148 = (undefined *)0x0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar3 = &uStack_279;
  uStack_1d8 = param_2;
  puStack_158 = puVar2;
  pppuStack_150 = &ppuStack_208;
  FUN_1050d70f0();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  ppuStack_2f0 = &PTR_FUN_110864c08;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  lStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar3[0x1a];
  bStack_25d = puVar3[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_FUN_110866be0;
  plStack_210 = (long *)0x0;
  lStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  bStack_106 = (byte)uStack_176 | bStack_25e;
  bStack_105 = uStack_176._1_1_ & bStack_25d;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e0 = &ppuStack_278;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_308 = 0;
  lStack_300 = 0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar4 = &uStack_b0;
  uStack_2c0 = param_3;
  puStack_240 = puVar3;
  pppuStack_238 = &ppuStack_2f0;
  pppuStack_e8 = &ppuStack_190;
  func_0x0001000e77a0(puVar4,&ppuStack_120,&lStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_FUN_110866be0;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_FUN_110864c08;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_FUN_110862700;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_278 = &puStack_148;
  func_0x000100105004(&ppuStack_278);
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_SUB_110862760;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_278 = &puStack_1c0;
  func_0x000100105004(&ppuStack_278);
  _objc_release(uStack_1d8);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = PTR_PTR_1126b49e0;
    FUN_1050d82a8(PTR_PTR_1126b49e0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      puVar6[0x16] = 1;
    }
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1050ccc74; end: 1050ccd8b;  */

void FUN_1050ccc74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b4910;
  _objc_alloc(PTR_PTR_1126b4910);
  func_0x00010c032ae0();
  puVar2 = PTR_PTR_1126b49e0;
  FUN_1050d8850(PTR_PTR_1126b49e0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ccd8c; end: 1050cd0e7;  */

void FUN_1050ccd8c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined ***pppuVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 uStack_57c;
  long lStack_578;
  long lStack_570;
  undefined8 uStack_568;
  undefined **ppuStack_560;
  undefined4 uStack_558;
  undefined4 uStack_548;
  undefined4 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long lStack_518;
  long lStack_510;
  undefined8 uStack_508;
  long *plStack_500;
  long *plStack_4f8;
  undefined1 uStack_4e9;
  undefined **ppuStack_4e8;
  undefined4 uStack_4e0;
  undefined2 uStack_4d0;
  byte bStack_4ce;
  byte bStack_4cd;
  undefined1 *puStack_4b0;
  undefined ***pppuStack_4a8;
  long lStack_4a0;
  long lStack_498;
  undefined8 uStack_490;
  long *plStack_488;
  long *plStack_480;
  undefined **ppuStack_478;
  undefined4 uStack_470;
  undefined4 uStack_460;
  undefined ***pppuStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long *plStack_418;
  long *plStack_410;
  undefined1 uStack_401;
  undefined **ppuStack_400;
  undefined4 uStack_3f8;
  undefined2 uStack_3e8;
  undefined2 uStack_3e6;
  undefined1 *puStack_3c8;
  undefined ***pppuStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  undefined **ppuStack_390;
  undefined4 uStack_388;
  undefined2 uStack_378;
  byte bStack_376;
  byte bStack_375;
  undefined ***pppuStack_358;
  undefined ***pppuStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long *plStack_330;
  long *plStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_224;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  uVar8 = SUB84(&uStack_270,0);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b4910);
  if (param_1 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  puVar2 = &uStack_191;
  FUN_1050d6f78();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  _objc_retain(param_2);
  ppuStack_208 = &PTR_SUB_110862760;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_FUN_110862700;
  pppuStack_150 = &ppuStack_208;
  uStack_140 = 0;
  uStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puStack_220 = (undefined8 *)0x0;
  puStack_218 = (undefined8 *)0x0;
  uStack_210 = 0;
  uStack_224 = 0;
  puVar3 = &uStack_120;
  pppuVar7 = &ppuStack_190;
  uStack_1d8 = param_2;
  puStack_158 = puVar2;
  func_0x0001000e77a0(puVar3,pppuVar7,&puStack_220,&uStack_224);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_220 != (undefined8 *)0x0) {
    puStack_218 = puStack_220;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_FUN_110862700;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_220 = &uStack_148;
  func_0x000100105004(&puStack_220);
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_SUB_110862760;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_220 = &uStack_1c0;
  func_0x000100105004(&puStack_220);
  _objc_release(uStack_1d8);
  func_0x0001000e76e0(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar9 = *plStack_260;
    do {
      puVar10 = (undefined8 *)0x0;
      do {
        if (*plStack_260 != lVar9) {
          _objc_enumerationMutation(puVar3);
        }
        pppuVar7 = *(undefined ****)(lStack_268 + (long)puVar10 * 8);
        puVar5 = PTR_PTR_1126b49e0;
        FUN_1050d8850();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar10 = (undefined8 *)((long)puVar10 + 1);
      } while (puVar4 != puVar10);
      puVar4 = puVar3;
      uVar8 = (int)&uStack_270;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  lVar9 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(pppuVar7);
  _objc_opt_class(PTR_PTR_1126b4910);
  if (lVar9 == 0) {
    uStack_2f0 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_320,lVar9);
  }
  puVar2 = &uStack_401;
  FUN_1050d6f78();
  uStack_470 = 0xf;
  uStack_460 = 0x100;
  _objc_retain(pppuVar7);
  ppuStack_478 = &PTR_SUB_110862760;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  puStack_430 = (undefined *)0x0;
  plStack_418 = (long *)0x0;
  uStack_420 = 0;
  plStack_410 = (long *)0x0;
  uStack_3e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_3f8 = 10;
  uStack_3e8 = 0x100;
  ppuStack_400 = &PTR_FUN_110862700;
  uStack_3b0 = 0;
  puStack_3b8 = (undefined *)0x0;
  plStack_3a0 = (long *)0x0;
  uStack_3a8 = 0;
  plStack_398 = (long *)0x0;
  puVar6 = &uStack_4e9;
  pppuStack_448 = pppuVar7;
  puStack_3c8 = puVar2;
  pppuStack_3c0 = &ppuStack_478;
  FUN_1050d70f0();
  uStack_558 = 0xf;
  uStack_548 = 0x100;
  ppuStack_560 = &PTR_FUN_110864c08;
  uStack_520 = 0;
  uStack_528 = 0;
  lStack_510 = 0;
  lStack_518 = 0;
  plStack_500 = (long *)0x0;
  uStack_508 = 0;
  plStack_4f8 = (long *)0x0;
  bStack_4ce = puVar6[0x1a];
  bStack_4cd = puVar6[0x1b];
  uStack_4e0 = 10;
  uStack_4d0 = 0x100;
  ppuStack_4e8 = &PTR_FUN_110866be0;
  plStack_480 = (long *)0x0;
  lStack_498 = 0;
  lStack_4a0 = 0;
  plStack_488 = (long *)0x0;
  uStack_490 = 0;
  bStack_376 = (byte)uStack_3e6 | bStack_4ce;
  bStack_375 = uStack_3e6._1_1_ & bStack_4cd;
  uStack_388 = 4;
  uStack_378 = 0x100;
  ppuStack_390 = &PTR_SUB_1108629c8;
  pppuStack_350 = &ppuStack_4e8;
  uStack_340 = 0;
  lStack_348 = 0;
  plStack_330 = (long *)0x0;
  uStack_338 = 0;
  plStack_328 = (long *)0x0;
  lStack_578 = 0;
  lStack_570 = 0;
  uStack_568 = 0;
  uStack_57c = 0;
  puVar4 = &uStack_320;
  uStack_530 = uVar8;
  puStack_4b0 = puVar6;
  pppuStack_4a8 = &ppuStack_560;
  pppuStack_358 = &ppuStack_400;
  func_0x0001000e77a0(puVar4,&ppuStack_390,&lStack_578,&uStack_57c);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_578 != 0) {
    lStack_570 = lStack_578;
    __ZdlPv();
  }
  plVar1 = plStack_328;
  ppuStack_390 = &PTR_SUB_1108629c8;
  plStack_328 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_330;
  plStack_330 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_348 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_480;
  ppuStack_4e8 = &PTR_FUN_110866be0;
  plStack_480 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_488;
  plStack_488 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_4a0 != 0) {
    lStack_498 = lStack_4a0;
    __ZdlPv();
  }
  plVar1 = plStack_4f8;
  ppuStack_560 = &PTR_FUN_110864c08;
  plStack_4f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_500;
  plStack_500 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_518 != 0) {
    lStack_510 = lStack_518;
    __ZdlPv();
  }
  plVar1 = plStack_398;
  ppuStack_400 = &PTR_FUN_110862700;
  plStack_398 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3a0;
  plStack_3a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_4e8 = &puStack_3b8;
  func_0x000100105004(&ppuStack_4e8);
  plVar1 = plStack_410;
  ppuStack_478 = &PTR_SUB_110862760;
  plStack_410 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_418;
  plStack_418 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_4e8 = &puStack_430;
  func_0x000100105004(&ppuStack_4e8);
  _objc_release(pppuStack_448);
  func_0x0001000e76e0(&uStack_2f8);
  _objc_release(uStack_308);
  _objc_release(uStack_310);
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = PTR_PTR_1126b49e0;
    FUN_1050d82a8(PTR_PTR_1126b49e0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      puVar5[0x16] = 0;
    }
    func_0x00010c25ed40(lVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
  _objc_release(pppuVar7);
  _objc_release(lVar9);
  return;
}



/* Entry: 1050cd0e8; end: 1050cd59f;  */

void FUN_1050cd0e8(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined4 uStack_30c;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined4 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b4910);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_191;
  FUN_1050d6f78();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  _objc_retain(param_2);
  ppuStack_208 = &PTR_SUB_110862760;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  puStack_1c0 = (undefined *)0x0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_FUN_110862700;
  uStack_140 = 0;
  puStack_148 = (undefined *)0x0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar3 = &uStack_279;
  uStack_1d8 = param_2;
  puStack_158 = puVar2;
  pppuStack_150 = &ppuStack_208;
  FUN_1050d70f0();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  ppuStack_2f0 = &PTR_FUN_110864c08;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  lStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar3[0x1a];
  bStack_25d = puVar3[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_FUN_110866be0;
  plStack_210 = (long *)0x0;
  lStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  bStack_106 = (byte)uStack_176 | bStack_25e;
  bStack_105 = uStack_176._1_1_ & bStack_25d;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e0 = &ppuStack_278;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_308 = 0;
  lStack_300 = 0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar4 = &uStack_b0;
  uStack_2c0 = param_3;
  puStack_240 = puVar3;
  pppuStack_238 = &ppuStack_2f0;
  pppuStack_e8 = &ppuStack_190;
  func_0x0001000e77a0(puVar4,&ppuStack_120,&lStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_FUN_110866be0;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_FUN_110864c08;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_FUN_110862700;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_278 = &puStack_148;
  func_0x000100105004(&ppuStack_278);
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_SUB_110862760;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_278 = &puStack_1c0;
  func_0x000100105004(&ppuStack_278);
  _objc_release(uStack_1d8);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = PTR_PTR_1126b49e0;
    FUN_1050d82a8(PTR_PTR_1126b49e0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      puVar6[0x16] = 0;
    }
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1050cd5a0; end: 1050cd627;  */

void FUN_1050cd5a0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_1050d88c4(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050cd628; end: 1050cda13;  */

void FUN_1050cd628(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uStack_30c;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b4910);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar4 = &uStack_191;
  FUN_1050d6f78();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  _objc_retain(param_2);
  ppuStack_208 = &PTR_SUB_110862760;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  puStack_1c0 = (undefined *)0x0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  bVar1 = puVar4[0x1a];
  bVar2 = puVar4[0x1b];
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_FUN_110862700;
  uStack_140 = 0;
  puStack_148 = (undefined *)0x0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar5 = &uStack_279;
  uStack_1d8 = param_2;
  bStack_176 = bVar1;
  bStack_175 = bVar2;
  puStack_158 = puVar4;
  pppuStack_150 = &ppuStack_208;
  FUN_1050d7378();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  uStack_2c0 = 1;
  ppuStack_2f0 = &PTR_SUB_1108629c8;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar5[0x1a];
  bStack_25d = puVar5[0x1b];
  uStack_270 = 0xb;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_SUB_1108629c8;
  plStack_210 = (long *)0x0;
  uStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  bStack_106 = bStack_25e | bVar1;
  bStack_105 = bStack_25d & bVar2;
  uStack_118 = 4;
  uStack_108 = 0x100;
  pppuStack_e8 = &ppuStack_190;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e0 = &ppuStack_278;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_308 = 0;
  lStack_300 = 0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar6 = &uStack_b0;
  puStack_240 = puVar5;
  pppuStack_238 = &ppuStack_2f0;
  func_0x0001000e77a0(puVar6,&ppuStack_120,&lStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
    __ZdlPv();
  }
  plVar3 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_210;
  ppuStack_278 = &PTR_SUB_1108629c8;
  plStack_210 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_230 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_288;
  ppuStack_2f0 = &PTR_SUB_1108629c8;
  plStack_288 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_2a8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_128;
  ppuStack_190 = &PTR_FUN_110862700;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  ppuStack_278 = &puStack_148;
  func_0x000100105004(&ppuStack_278);
  plVar3 = plStack_1a0;
  ppuStack_208 = &PTR_SUB_110862760;
  plStack_1a0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  ppuStack_278 = &puStack_1c0;
  func_0x000100105004(&ppuStack_278);
  _objc_release(uStack_1d8);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  puVar7 = puVar6;
  func_0x00010bf0a540(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1050cda14; end: 1050cdf97;  */

void FUN_1050cda14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_464;
  long lStack_460;
  long lStack_458;
  undefined8 uStack_450;
  undefined **ppuStack_448;
  undefined4 uStack_440;
  undefined4 uStack_430;
  undefined1 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  undefined1 uStack_3d1;
  undefined **ppuStack_3d0;
  undefined4 uStack_3c8;
  undefined2 uStack_3b8;
  byte bStack_3b6;
  byte bStack_3b5;
  undefined1 *puStack_398;
  undefined ***pppuStack_390;
  long lStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined **ppuStack_360;
  undefined4 uStack_358;
  undefined4 uStack_348;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined1 uStack_2e9;
  undefined **ppuStack_2e8;
  undefined4 uStack_2e0;
  undefined2 uStack_2d0;
  byte bStack_2ce;
  byte bStack_2cd;
  undefined1 *puStack_2b0;
  undefined ***pppuStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined4 uStack_260;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 uStack_201;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined2 uStack_1e8;
  undefined2 uStack_1e6;
  undefined1 *puStack_1c8;
  undefined ***pppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b4910);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_201;
  FUN_1050d6f78();
  uStack_270 = 0xf;
  uStack_260 = 0x100;
  _objc_retain(param_2);
  ppuStack_278 = &PTR_SUB_110862760;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  puStack_230 = (undefined *)0x0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  uStack_1e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_1f8 = 10;
  uStack_1e8 = 0x100;
  ppuStack_200 = &PTR_FUN_110862700;
  uStack_1b0 = 0;
  puStack_1b8 = (undefined *)0x0;
  plStack_1a0 = (long *)0x0;
  uStack_1a8 = 0;
  plStack_198 = (long *)0x0;
  puVar3 = &uStack_2e9;
  uStack_248 = param_2;
  puStack_1c8 = puVar2;
  pppuStack_1c0 = &ppuStack_278;
  FUN_1050d7234();
  uStack_358 = 0xf;
  uStack_348 = 0x100;
  ppuStack_360 = &PTR_DAT_110866ca0;
  uStack_320 = 0;
  uStack_328 = 0;
  lStack_310 = 0;
  lStack_318 = 0;
  plStack_300 = (long *)0x0;
  uStack_308 = 0;
  plStack_2f8 = (long *)0x0;
  bStack_2ce = puVar3[0x1a];
  bStack_2cd = puVar3[0x1b];
  uStack_2e0 = 10;
  uStack_2d0 = 0x100;
  ppuStack_2e8 = &PTR_FUN_110866c40;
  plStack_280 = (long *)0x0;
  lStack_298 = 0;
  lStack_2a0 = 0;
  plStack_288 = (long *)0x0;
  uStack_290 = 0;
  bStack_176 = (byte)uStack_1e6 | bStack_2ce;
  bStack_175 = uStack_1e6._1_1_ & bStack_2cd;
  uStack_188 = 4;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_SUB_1108629c8;
  pppuStack_150 = &ppuStack_2e8;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar2 = &uStack_3d1;
  uStack_330 = param_3;
  puStack_2b0 = puVar3;
  pppuStack_2a8 = &ppuStack_360;
  pppuStack_158 = &ppuStack_200;
  FUN_1050d7378();
  uStack_440 = 0xf;
  uStack_430 = 0x100;
  uStack_418 = 1;
  ppuStack_448 = &PTR_SUB_1108629c8;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  lStack_400 = 0;
  plStack_3e8 = (long *)0x0;
  uStack_3f0 = 0;
  plStack_3e0 = (long *)0x0;
  bStack_3b6 = puVar2[0x1a];
  bStack_3b5 = puVar2[0x1b];
  uStack_3c8 = 0xb;
  uStack_3b8 = 0x100;
  ppuStack_3d0 = &PTR_SUB_1108629c8;
  plStack_368 = (long *)0x0;
  uStack_380 = 0;
  lStack_388 = 0;
  plStack_370 = (long *)0x0;
  uStack_378 = 0;
  bStack_106 = bStack_176 | bStack_3b6;
  bStack_105 = bStack_175 & bStack_3b5;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e0 = &ppuStack_3d0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_460 = 0;
  lStack_458 = 0;
  uStack_450 = 0;
  uStack_464 = 0;
  puVar4 = &uStack_b0;
  puStack_398 = puVar2;
  pppuStack_390 = &ppuStack_448;
  pppuStack_e8 = &ppuStack_190;
  func_0x0001000e77a0(puVar4,&ppuStack_120,&lStack_460,&uStack_464);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_460 != 0) {
    lStack_458 = lStack_460;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_368;
  ppuStack_3d0 = &PTR_SUB_1108629c8;
  plStack_368 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_370;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_388 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_3e0;
  ppuStack_448 = &PTR_SUB_1108629c8;
  plStack_3e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3e8;
  plStack_3e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_400 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_SUB_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_280;
  ppuStack_2e8 = &PTR_FUN_110866c40;
  plStack_280 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_288;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a0 != 0) {
    lStack_298 = lStack_2a0;
    __ZdlPv();
  }
  plVar1 = plStack_2f8;
  ppuStack_360 = &PTR_DAT_110866ca0;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_318 != 0) {
    lStack_310 = lStack_318;
    __ZdlPv();
  }
  plVar1 = plStack_198;
  ppuStack_200 = &PTR_FUN_110862700;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_2e8 = &puStack_1b8;
  func_0x000100105004(&ppuStack_2e8);
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_SUB_110862760;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_2e8 = &puStack_230;
  func_0x000100105004(&ppuStack_2e8);
  _objc_release(uStack_248);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  puVar5 = puVar4;
  func_0x00010bf0a540(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1050cdf98; end: 1050ce077;  */

undefined8 * FUN_1050cdf98(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110866c40;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1050ce078; end: 1050ce5fb;  */

void FUN_1050ce078(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_464;
  long lStack_460;
  long lStack_458;
  undefined8 uStack_450;
  undefined **ppuStack_448;
  undefined4 uStack_440;
  undefined4 uStack_430;
  undefined1 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  undefined1 uStack_3d1;
  undefined **ppuStack_3d0;
  undefined4 uStack_3c8;
  undefined2 uStack_3b8;
  byte bStack_3b6;
  byte bStack_3b5;
  undefined1 *puStack_398;
  undefined ***pppuStack_390;
  long lStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined **ppuStack_360;
  undefined4 uStack_358;
  undefined4 uStack_348;
  undefined4 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined1 uStack_2e9;
  undefined **ppuStack_2e8;
  undefined4 uStack_2e0;
  undefined2 uStack_2d0;
  byte bStack_2ce;
  byte bStack_2cd;
  undefined1 *puStack_2b0;
  undefined ***pppuStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined4 uStack_260;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 uStack_201;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined2 uStack_1e8;
  undefined2 uStack_1e6;
  undefined1 *puStack_1c8;
  undefined ***pppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b4910);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_201;
  FUN_1050d6f78();
  uStack_270 = 0xf;
  uStack_260 = 0x100;
  _objc_retain(param_2);
  ppuStack_278 = &PTR_SUB_110862760;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  puStack_230 = (undefined *)0x0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  uStack_1e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_1f8 = 10;
  uStack_1e8 = 0x100;
  ppuStack_200 = &PTR_FUN_110862700;
  uStack_1b0 = 0;
  puStack_1b8 = (undefined *)0x0;
  plStack_1a0 = (long *)0x0;
  uStack_1a8 = 0;
  plStack_198 = (long *)0x0;
  puVar3 = &uStack_2e9;
  uStack_248 = param_2;
  puStack_1c8 = puVar2;
  pppuStack_1c0 = &ppuStack_278;
  FUN_1050d70f0();
  uStack_358 = 0xf;
  uStack_348 = 0x100;
  ppuStack_360 = &PTR_FUN_110864c08;
  uStack_320 = 0;
  uStack_328 = 0;
  lStack_310 = 0;
  lStack_318 = 0;
  plStack_300 = (long *)0x0;
  uStack_308 = 0;
  plStack_2f8 = (long *)0x0;
  bStack_2ce = puVar3[0x1a];
  bStack_2cd = puVar3[0x1b];
  uStack_2e0 = 10;
  uStack_2d0 = 0x100;
  ppuStack_2e8 = &PTR_FUN_110866be0;
  plStack_280 = (long *)0x0;
  lStack_298 = 0;
  lStack_2a0 = 0;
  plStack_288 = (long *)0x0;
  uStack_290 = 0;
  bStack_176 = (byte)uStack_1e6 | bStack_2ce;
  bStack_175 = uStack_1e6._1_1_ & bStack_2cd;
  uStack_188 = 4;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_SUB_1108629c8;
  pppuStack_150 = &ppuStack_2e8;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar2 = &uStack_3d1;
  uStack_330 = param_3;
  puStack_2b0 = puVar3;
  pppuStack_2a8 = &ppuStack_360;
  pppuStack_158 = &ppuStack_200;
  FUN_1050d7378();
  uStack_440 = 0xf;
  uStack_430 = 0x100;
  uStack_418 = 1;
  ppuStack_448 = &PTR_SUB_1108629c8;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  lStack_400 = 0;
  plStack_3e8 = (long *)0x0;
  uStack_3f0 = 0;
  plStack_3e0 = (long *)0x0;
  bStack_3b6 = puVar2[0x1a];
  bStack_3b5 = puVar2[0x1b];
  uStack_3c8 = 0xb;
  uStack_3b8 = 0x100;
  ppuStack_3d0 = &PTR_SUB_1108629c8;
  plStack_368 = (long *)0x0;
  uStack_380 = 0;
  lStack_388 = 0;
  plStack_370 = (long *)0x0;
  uStack_378 = 0;
  bStack_106 = bStack_176 | bStack_3b6;
  bStack_105 = bStack_175 & bStack_3b5;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e0 = &ppuStack_3d0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_460 = 0;
  lStack_458 = 0;
  uStack_450 = 0;
  uStack_464 = 0;
  puVar4 = &uStack_b0;
  puStack_398 = puVar2;
  pppuStack_390 = &ppuStack_448;
  pppuStack_e8 = &ppuStack_190;
  func_0x0001000e77a0(puVar4,&ppuStack_120,&lStack_460,&uStack_464);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_460 != 0) {
    lStack_458 = lStack_460;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_368;
  ppuStack_3d0 = &PTR_SUB_1108629c8;
  plStack_368 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_370;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_388 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_3e0;
  ppuStack_448 = &PTR_SUB_1108629c8;
  plStack_3e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3e8;
  plStack_3e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_400 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_SUB_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_280;
  ppuStack_2e8 = &PTR_FUN_110866be0;
  plStack_280 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_288;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a0 != 0) {
    lStack_298 = lStack_2a0;
    __ZdlPv();
  }
  plVar1 = plStack_2f8;
  ppuStack_360 = &PTR_FUN_110864c08;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_318 != 0) {
    lStack_310 = lStack_318;
    __ZdlPv();
  }
  plVar1 = plStack_198;
  ppuStack_200 = &PTR_FUN_110862700;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_2e8 = &puStack_1b8;
  func_0x000100105004(&ppuStack_2e8);
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_SUB_110862760;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_2e8 = &puStack_230;
  func_0x000100105004(&ppuStack_2e8);
  _objc_release(uStack_248);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  puVar5 = puVar4;
  func_0x00010bfb1920(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1050ce5fc; end: 1050ce66b;  */

void FUN_1050ce5fc(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110866be0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1050ce66c; end: 1050ced27;  */

void FUN_1050ce66c(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001050ceccc;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001050cecec;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001050cecec;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001050cec60:
                    /* WARNING: Could not recover jumptable at 0x0001050cec84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001050cec60;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x0001050cecec;
    }
    goto code_r0x0001050cece0;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001050cece0;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x0001050cecec;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001050cecec;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1050cecfc;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001050ceccc:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001050cece0:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001050cecec:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1050cecfc:
  return;
}



/* Entry: 1050ced28; end: 1050cee5f;  */

void FUN_1050ced28(long param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  int *piVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      piVar1 = *(int **)(param_1 + 0x50);
      for (piVar5 = *(int **)(param_1 + 0x48); piVar5 != piVar1; piVar5 = piVar5 + 1) {
        iVar3 = *piVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,(long)iVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001050cee54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1050cee60; end: 1050cf22b;  */

uint FUN_1050cee60(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  byte bVar10;
  int *piVar11;
  long *plVar12;
  uint uVar13;
  uint uStack_5c;
  uint uStack_58;
  byte bStack_52;
  byte bStack_51;
  
  _objc_retain(param_3);
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 < 0xe) {
    if (iVar4 - 1U < 2) {
      *param_4 = 0;
      uStack_58 = uStack_58 & 0xffffff00;
      (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
                (*(long **)(param_1 + 0x38),param_2,param_3,&uStack_58);
      uVar13 = (uint)(iVar4 != 1 ^ (byte)uStack_58);
      goto LAB_1050cf200;
    }
    if (1 < iVar4 - 0xcU) goto LAB_1050cef94;
    plVar12 = *(long **)(param_1 + 0x38);
    _objc_retain(param_3);
    (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,param_4);
    piVar2 = *(int **)(param_1 + 0x48);
    piVar3 = *(int **)(param_1 + 0x50);
    iVar6 = (int)plVar12;
    if (iVar4 == 0xc) {
      if (piVar2 == piVar3) {
        uVar13 = 0;
      }
      else {
        do {
          piVar11 = piVar2 + 1;
          iVar4 = *piVar2;
          uVar13 = (uint)(iVar6 == iVar4);
          piVar2 = piVar11;
        } while (iVar6 != iVar4 && piVar11 != piVar3);
      }
    }
    else if (piVar2 == piVar3) {
      uVar13 = 1;
    }
    else {
      do {
        piVar11 = piVar2 + 1;
        iVar4 = *piVar2;
        uVar13 = (uint)(iVar6 != iVar4);
        piVar2 = piVar11;
      } while (iVar6 != iVar4 && piVar11 != piVar3);
    }
    goto LAB_1050cf1f8;
  }
  if (iVar4 - 0xfU < 2) {
    *param_4 = 0;
    uVar13 = (uint)*(byte *)(param_1 + 0x30);
    goto LAB_1050cf200;
  }
  if (iVar4 == 0xe) {
    lVar1 = 0x28;
    lVar7 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar7 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar7,param_4);
    uVar13 = (uint)lVar7;
    goto LAB_1050cf200;
  }
LAB_1050cef94:
  plVar12 = *(long **)(param_1 + 0x38);
  plVar9 = *(long **)(param_1 + 0x40);
  _objc_retain(param_3);
  uVar13 = 0;
  if (iVar4 < 5) {
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,param_4);
      uVar13 = (uint)((int)plVar12 == 0);
      goto LAB_1050cf1f8;
    }
    if (iVar4 == 3) {
      (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&uStack_58);
      (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&uStack_5c);
      *param_4 = ((byte)uStack_58 | (byte)uStack_5c) & 1;
      iVar4 = 0;
      iVar6 = (int)plVar9;
      if (iVar6 != 0) {
        iVar4 = (int)plVar12 / iVar6;
      }
      bVar5 = (int)plVar12 == iVar4 * iVar6;
    }
    else {
      if (iVar4 != 4) goto LAB_1050cf1f8;
      (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&uStack_58);
      (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&uStack_5c);
      if (((int)plVar12 == 0) && (bVar10 = (byte)uStack_5c, (uStack_58 & 1) == 0)) {
LAB_1050cf0c0:
        bVar10 = (byte)uStack_58 & bVar10;
      }
      else {
        if (((int)plVar9 == 0) && ((uStack_5c & 1) == 0)) {
          bVar10 = 0;
          goto LAB_1050cf0c0;
        }
        bVar10 = (byte)uStack_58 | (byte)uStack_5c;
      }
      *param_4 = bVar10 & 1;
      bVar5 = (int)plVar12 == 0 || (int)plVar9 == 0;
    }
LAB_1050cf1f4:
    uVar13 = (uint)!bVar5;
  }
  else if (iVar4 - 6U < 6) {
    plVar8 = plVar12;
    (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&bStack_51);
    uStack_58 = (uint)plVar8;
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&bStack_52);
    uStack_5c = (uint)plVar9;
    *param_4 = (bStack_51 | bStack_52) & 1;
    FUN_10507a3d8(plVar12,&uStack_58,&uStack_5c,iVar4,0);
    uVar13 = (uint)plVar12;
  }
  else if (iVar4 == 5) {
    (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&uStack_58);
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&uStack_5c);
    if (((int)plVar12 == 0) || (bVar10 = (byte)uStack_5c, (uStack_58 & 1) != 0)) {
      if (((int)plVar9 != 0) && ((uStack_5c & 1) == 0)) {
        bVar10 = 0;
        goto LAB_1050cf138;
      }
      bVar10 = (byte)uStack_58 | (byte)uStack_5c;
    }
    else {
LAB_1050cf138:
      bVar10 = (byte)uStack_58 & bVar10;
    }
    *param_4 = bVar10 & 1;
    bVar5 = (int)plVar12 == 0 && (int)plVar9 == 0;
    goto LAB_1050cf1f4;
  }
LAB_1050cf1f8:
  _objc_release(param_3);
LAB_1050cf200:
  _objc_release(param_3);
  return uVar13 & 1;
}



/* Entry: 1050cf22c; end: 1050cf2bf;  */

undefined8 * FUN_1050cf22c(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_FUN_110866be0;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1050cf2c0; end: 1050cf357;  */

undefined8 * FUN_1050cf2c0(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_FUN_110866be0;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  func_0x00010069997c(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1050cf358; end: 1050cf3c7;  */

void FUN_1050cf358(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_110866ca0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1050cf3c8; end: 1050cfa83;  */

void FUN_1050cf3c8(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001050cfa28;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001050cfa48;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001050cfa48;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001050cf9bc:
                    /* WARNING: Could not recover jumptable at 0x0001050cf9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001050cf9bc;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001050cfa48;
    }
    goto code_r0x0001050cfa3c;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001050cfa3c;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001050cfa48;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001050cfa48;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1050cfa58;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001050cfa28:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001050cfa3c:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001050cfa48:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1050cfa58:
  return;
}



/* Entry: 1050cfa84; end: 1050cfb0b;  */

void FUN_1050cfa84(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001050cfaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1050cfb0c; end: 1050cfc3f;  */

void FUN_1050cfb0c(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001050cfc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1050cfc40; end: 1050cfcef;  */

long FUN_1050cfc40(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    lVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    lVar3 = *(long *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    lVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar3,param_4);
  }
  else {
    lVar3 = 0;
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050cfcf0; end: 1050cfd2b;  */

undefined8 FUN_1050cfcf0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_1050cfd2c(uVar1,param_1);
  return uVar1;
}



/* Entry: 1050cfd2c; end: 1050cfed7;  */

void FUN_1050cfd2c(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x0001050cff6c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x0001050cfed8(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_1050cfe18:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_1050d006c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_1050cfe18;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      param_1[6] = *(undefined8 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110866ca0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 1050cfed8; end: 1050d006b;  */

undefined8 * FUN_1050cfed8(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_110866ca0;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1050d006c; end: 1050d0103;  */

undefined8 * FUN_1050d006c(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110866ca0;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1050d0104(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1050d0104; end: 1050d017b;  */

void FUN_1050d0104(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1050d017c(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1050d017c; end: 1050d01b7;  */

void FUN_1050d017c(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (param_2 >> 0x3d == 0) {
    plVar2 = param_1 + 2;
    FUN_1050d01cc();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_2);
    return;
  }
  FUN_1050d01b8();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110866c40;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1050d01b8; end: 1050d01cb;  */

void FUN_1050d01b8(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110866c40;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1050d01cc; end: 1050d026f;  */

void FUN_1050d01cc(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110866c40;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1050d0270; end: 1050d092b;  */

void FUN_1050d0270(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001050d08d0;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001050d08f0;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001050d08f0;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001050d0864:
                    /* WARNING: Could not recover jumptable at 0x0001050d0888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001050d0864;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001050d08f0;
    }
    goto code_r0x0001050d08e4;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001050d08e4;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001050d08f0;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001050d08f0;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1050d0900;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001050d08d0:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001050d08e4:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001050d08f0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1050d0900:
  return;
}



/* Entry: 1050d092c; end: 1050d09b3;  */

void FUN_1050d092c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001050d09a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1050d09b4; end: 1050d0ae7;  */

void FUN_1050d09b4(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001050d0adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1050d0ae8; end: 1050d0d03;  */

uint FUN_1050d0ae8(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long *plStack_58;
  long *plStack_50;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_3);
  uVar8 = *(uint *)(param_1 + 8);
  if ((int)uVar8 < 0xe) {
    if (uVar8 - 1 < 2) {
      *param_4 = 0;
      plStack_50 = (long *)((ulong)plStack_50 & 0xffffffffffffff00);
      (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
                (*(long **)(param_1 + 0x38),param_2,param_3,&plStack_50);
      uVar8 = (uint)(uVar8 != 1 ^ (byte)plStack_50);
      goto LAB_1050d0cdc;
    }
    if (uVar8 - 0xc < 2) {
      plVar9 = *(long **)(param_1 + 0x38);
      _objc_retain(param_3);
      (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,param_4);
      puVar2 = *(undefined8 **)(param_1 + 0x48);
      puVar3 = *(undefined8 **)(param_1 + 0x50);
      if (uVar8 == 0xc) {
        if (puVar2 == puVar3) {
          uVar8 = 0;
        }
        else {
          do {
            puVar6 = puVar2 + 1;
            plVar7 = (long *)*puVar2;
            uVar8 = (uint)(plVar9 == plVar7);
            puVar2 = puVar6;
          } while (plVar9 != plVar7 && puVar6 != puVar3);
        }
      }
      else if (puVar2 == puVar3) {
        uVar8 = 1;
      }
      else {
        do {
          puVar6 = puVar2 + 1;
          plVar7 = (long *)*puVar2;
          uVar8 = (uint)(plVar9 != plVar7);
          puVar2 = puVar6;
        } while (plVar9 != plVar7 && puVar6 != puVar3);
      }
      _objc_release(param_3);
      goto LAB_1050d0cdc;
    }
  }
  else {
    if (uVar8 - 0xf < 2) {
      *param_4 = 0;
      uVar8 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_1050d0cdc;
    }
    if (uVar8 == 0xe) {
      lVar1 = 0x28;
      lVar4 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar4 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar4,param_4);
      uVar8 = (uint)lVar4;
      goto LAB_1050d0cdc;
    }
  }
  if ((uVar8 & 0xfffffffe) == 10) {
    plVar9 = *(long **)(param_1 + 0x38);
    plVar7 = *(long **)(param_1 + 0x40);
    plVar5 = plVar9;
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&bStack_41);
    plStack_50 = plVar5;
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    plStack_58 = plVar7;
    FUN_1050d0d40(plVar9,&plStack_50,&plStack_58,uVar8,0);
    uVar8 = (uint)plVar9;
  }
  else {
    uVar8 = 0;
  }
LAB_1050d0cdc:
  _objc_release(param_3);
  return uVar8 & 1;
}



/* Entry: 1050d0d04; end: 1050d0d3f;  */

undefined8 FUN_1050d0d04(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_1050d0df4(uVar1,param_1);
  return uVar1;
}



/* Entry: 1050d0d40; end: 1050d0df3;  */

bool FUN_1050d0d40(undefined8 param_1,long *param_2,long *param_3,int param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_4 < 9) {
    if (param_4 == 6) {
      return *param_2 < *param_3;
    }
    if (param_4 == 7) {
      return *param_2 <= *param_3;
    }
    if (param_4 == 8) {
      return *param_3 < *param_2;
    }
  }
  else {
    if (param_4 == 9) {
      return *param_3 <= *param_2;
    }
    if (param_4 == 10) {
      bVar1 = *param_2 == *param_3;
    }
    else if (param_4 == 0xb) {
      return *param_2 != *param_3;
    }
  }
  return bVar1;
}



/* Entry: 1050d0df4; end: 1050d0f9f;  */

void FUN_1050d0df4(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x0001050d1034(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x0001050d0fa0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_1050d0ee0:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_1050d1134(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_1050d0ee0;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_FUN_110866c40;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 1050d0fa0; end: 1050d1133;  */

undefined8 * FUN_1050d0fa0(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_FUN_110866c40;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1050d1134; end: 1050d11cb;  */

undefined8 * FUN_1050d1134(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_FUN_110866c40;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1050d0104(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1050d11cc; end: 1050d1427;  */

void FUN_1050d11cc(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b4938);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_1050da67c();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_FUN_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_FUN_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  puVar4 = puVar3;
  func_0x00010bf0a540(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1050d1428; end: 1050d1833;  */

void FUN_1050d1428(long param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uStack_30c;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined4 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b4938);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar4 = &uStack_191;
  FUN_1050da67c();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  _objc_retain(param_2);
  ppuStack_208 = &PTR_SUB_110862760;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  puStack_1c0 = (undefined *)0x0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  bVar1 = puVar4[0x1a];
  bVar2 = puVar4[0x1b];
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_FUN_110862700;
  uStack_140 = 0;
  puStack_148 = (undefined *)0x0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar5 = &uStack_279;
  uStack_1d8 = param_2;
  bStack_176 = bVar1;
  bStack_175 = bVar2;
  puStack_158 = puVar4;
  pppuStack_150 = &ppuStack_208;
  FUN_1050da7f4();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  ppuStack_2f0 = &PTR_FUN_110864c08;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  lStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar5[0x1a];
  bStack_25d = puVar5[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_FUN_110866be0;
  plStack_210 = (long *)0x0;
  lStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  bStack_106 = bStack_25e | bVar1;
  bStack_105 = bStack_25d & bVar2;
  uStack_118 = 4;
  uStack_108 = 0x100;
  pppuStack_e8 = &ppuStack_190;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e0 = &ppuStack_278;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_308 = 0;
  lStack_300 = 0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar6 = &uStack_b0;
  uStack_2c0 = param_3;
  puStack_240 = puVar5;
  pppuStack_238 = &ppuStack_2f0;
  func_0x0001000e77a0(puVar6,&ppuStack_120,&lStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
    __ZdlPv();
  }
  plVar3 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_210;
  ppuStack_278 = &PTR_FUN_110866be0;
  plStack_210 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar3 = plStack_288;
  ppuStack_2f0 = &PTR_FUN_110864c08;
  plStack_288 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  plVar3 = plStack_128;
  ppuStack_190 = &PTR_FUN_110862700;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  ppuStack_278 = &puStack_148;
  func_0x000100105004(&ppuStack_278);
  plVar3 = plStack_1a0;
  ppuStack_208 = &PTR_SUB_110862760;
  plStack_1a0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  ppuStack_278 = &puStack_1c0;
  func_0x000100105004(&ppuStack_278);
  _objc_release(uStack_1d8);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  puVar7 = puVar6;
  func_0x00010bfb1920(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1050d1834; end: 1050d18bb;  */

void FUN_1050d1834(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_1050db054(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050d18bc; end: 1050d19a7;  */

void FUN_1050d18bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b4938;
  _objc_alloc(PTR_PTR_1126b4938);
  func_0x00010c032b00();
  puVar2 = PTR_PTR_1126b49e8;
  FUN_1050dafe0(PTR_PTR_1126b49e8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050d19a8; end: 1050d1c2b;  */

void FUN_1050d19a8(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b49d8);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_1050dba5c();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_FUN_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_FUN_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1050d1c2c; end: 1050d1d07;  */

void FUN_1050d1c2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b49d8;
  _objc_alloc(PTR_PTR_1126b49d8);
  func_0x00010c032b40();
  puVar2 = PTR_PTR_1126b49f0;
  FUN_1050dc15c(PTR_PTR_1126b49f0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050d1d08; end: 1050d2217;  */

void FUN_1050d1d08(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  undefined ***pppuVar19;
  undefined ***pppuVar20;
  undefined ***pppuVar21;
  undefined ***pppuVar22;
  undefined ***pppuVar23;
  undefined ***pppuVar24;
  undefined ***pppuVar25;
  undefined ***pppuVar26;
  undefined ***pppuVar27;
  undefined *puVar28;
  long lVar29;
  undefined **ppuVar30;
  undefined ***pppuVar31;
  undefined8 *puVar32;
  undefined4 uStack_5f4;
  undefined8 *puStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 uStack_5e0;
  undefined **ppuStack_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5c0;
  undefined ***pppuStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  long *plStack_578;
  long *plStack_570;
  undefined1 uStack_561;
  undefined **ppuStack_560;
  undefined4 uStack_558;
  undefined2 uStack_548;
  undefined2 uStack_546;
  undefined1 *puStack_528;
  undefined ***pppuStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long *plStack_500;
  long *plStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_438;
  undefined **ppuStack_430;
  undefined *puStack_428;
  undefined ***pppuStack_420;
  undefined **ppuStack_418;
  long lStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined ***pppuStack_3f8;
  undefined8 uStack_3f0;
  undefined *puStack_3e8;
  undefined1 *puStack_3e0;
  code *pcStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined4 uStack_38c;
  long lStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined **ppuStack_370;
  undefined4 uStack_368;
  undefined4 uStack_358;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined1 uStack_2f9;
  undefined **ppuStack_2f8;
  undefined4 uStack_2f0;
  undefined2 uStack_2e0;
  byte bStack_2de;
  byte bStack_2dd;
  undefined1 *puStack_2c0;
  undefined ***pppuStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  long *plStack_290;
  undefined **ppuStack_288;
  undefined4 uStack_280;
  undefined4 uStack_270;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined1 uStack_211;
  undefined **ppuStack_210;
  undefined4 uStack_208;
  undefined2 uStack_1f8;
  undefined2 uStack_1f6;
  undefined1 *puStack_1d8;
  undefined ***pppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined2 uStack_188;
  byte bStack_186;
  byte bStack_185;
  undefined ***pppuStack_168;
  undefined ***pppuStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b4910);
  if (param_1 == (undefined *)0x0) {
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    ppuStack_130 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_130,param_1);
  }
  pppuVar31 = &ppuStack_1a0;
  puVar2 = &uStack_211;
  FUN_1050d6f78();
  uStack_280 = 0xf;
  uStack_270 = 0x100;
  _objc_retain(param_2);
  ppuStack_288 = &PTR_SUB_110862760;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  puStack_240 = (undefined *)0x0;
  plStack_228 = (long *)0x0;
  uStack_230 = 0;
  plStack_220 = (long *)0x0;
  uStack_1f6 = *(undefined2 *)(puVar2 + 0x1a);
  puVar28 = (undefined *)0xa;
  uStack_208 = 10;
  lVar29 = 0x100;
  uStack_1f8 = 0x100;
  ppuStack_210 = &PTR_FUN_110862700;
  pppuStack_1d0 = &ppuStack_288;
  uStack_1c0 = 0;
  puStack_1c8 = (undefined *)0x0;
  plStack_1b0 = (long *)0x0;
  uStack_1b8 = 0;
  plStack_1a8 = (long *)0x0;
  puVar3 = &uStack_2f9;
  uStack_258 = param_2;
  puStack_1d8 = puVar2;
  FUN_1050d7234();
  uStack_368 = 0xf;
  uStack_358 = 0x100;
  ppuVar30 = (undefined **)&UNK_110866c90;
  ppuStack_370 = &PTR_DAT_110866ca0;
  uStack_330 = 0;
  uStack_338 = 0;
  lStack_320 = 0;
  lStack_328 = 0;
  plStack_310 = (long *)0x0;
  uStack_318 = 0;
  plStack_308 = (long *)0x0;
  bStack_2de = puVar3[0x1a];
  bStack_2dd = puVar3[0x1b];
  uStack_2f0 = 10;
  uStack_2e0 = 0x100;
  ppuStack_2f8 = &PTR_FUN_110866c40;
  pppuStack_2b8 = &ppuStack_370;
  plStack_290 = (long *)0x0;
  lStack_2a8 = 0;
  lStack_2b0 = 0;
  plStack_298 = (long *)0x0;
  uStack_2a0 = 0;
  bStack_186 = (byte)uStack_1f6 | bStack_2de;
  bStack_185 = uStack_1f6._1_1_ & bStack_2dd;
  uStack_198 = 4;
  uStack_188 = 0x100;
  ppuStack_1a0 = &PTR_SUB_1108629c8;
  pppuStack_160 = &ppuStack_2f8;
  uStack_150 = 0;
  lStack_158 = 0;
  plStack_140 = (long *)0x0;
  uStack_148 = 0;
  plStack_138 = (long *)0x0;
  lStack_388 = 0;
  lStack_380 = 0;
  uStack_378 = 0;
  uStack_38c = 0;
  pppuVar4 = &ppuStack_130;
  pppuVar27 = &ppuStack_1a0;
  uStack_340 = param_3;
  puStack_2c0 = puVar3;
  pppuStack_168 = &ppuStack_210;
  func_0x0001000e77a0(pppuVar4,pppuVar27,&lStack_388,&uStack_38c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_388 != 0) {
    lStack_380 = lStack_388;
    __ZdlPv();
  }
  plVar1 = plStack_138;
  ppuStack_1a0 = &PTR_SUB_1108629c8;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_158 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_290;
  ppuStack_2f8 = &PTR_FUN_110866c40;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_298;
  plStack_298 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2b0 != 0) {
    lStack_2a8 = lStack_2b0;
    __ZdlPv();
  }
  plVar1 = plStack_308;
  ppuStack_370 = &PTR_DAT_110866ca0;
  plStack_308 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_310;
  plStack_310 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_328 != 0) {
    lStack_320 = lStack_328;
    __ZdlPv();
  }
  plVar1 = plStack_1a8;
  ppuStack_210 = &PTR_FUN_110862700;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b0;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_2f8 = &puStack_1c8;
  func_0x000100105004(&ppuStack_2f8);
  plVar1 = plStack_220;
  ppuStack_288 = &PTR_SUB_110862760;
  plStack_220 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_228;
  plStack_228 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_2f8 = &puStack_240;
  func_0x000100105004(&ppuStack_2f8);
  _objc_release(uStack_258);
  func_0x0001000e76e0(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  lStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  _objc_retain(pppuVar4);
  pppuVar5 = pppuVar4;
  func_0x00010bf52a60();
  if (pppuVar5 != (undefined ***)0x0) {
    lVar29 = *plStack_3c0;
    ppuVar30 = &PTR_PTR_1126b4000;
    do {
      pppuVar31 = (undefined ***)0x0;
      do {
        if (*plStack_3c0 != lVar29) {
          _objc_enumerationMutation(pppuVar4);
        }
        pppuVar27 = *(undefined ****)(lStack_3c8 + (long)pppuVar31 * 8);
        puVar28 = PTR_PTR_1126b49e0;
        FUN_1050d8850();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar28);
        pppuVar31 = (undefined ***)((long)pppuVar31 + 1);
      } while (pppuVar5 != pppuVar31);
      pppuVar5 = pppuVar4;
      func_0x00010bf52a60();
    } while (pppuVar5 != (undefined ***)0x0);
  }
  _objc_release(pppuVar4);
  _objc_release(pppuVar4);
  _objc_release(param_2);
  puVar6 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pppuVar4);
  _objc_release(pppuVar4);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar7 = puVar6;
  __Unwind_Resume();
  ppuStack_430 = &PTR_SUB_1108629c8;
  puStack_428 = &UNK_110866c30;
  pcStack_3d8 = FUN_1050d2218;
  lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_420 = pppuVar31;
  ppuStack_418 = ppuVar30;
  lStack_410 = lVar29;
  puStack_408 = puVar28;
  puStack_400 = puVar6;
  pppuStack_3f8 = pppuVar4;
  uStack_3f0 = param_2;
  puStack_3e8 = param_1;
  puStack_3e0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(pppuVar27);
  _objc_opt_class(PTR_PTR_1126b4938);
  if (puVar7 == (undefined *)0x0) {
    uStack_4c0 = 0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_4f0,puVar7);
  }
  puVar2 = &uStack_561;
  FUN_1050da67c();
  uStack_5d0 = 0xf;
  uStack_5c0 = 0x100;
  _objc_retain(pppuVar27);
  ppuStack_5d8 = &PTR_SUB_110862760;
  uStack_598 = 0;
  uStack_5a0 = 0;
  uStack_588 = 0;
  uStack_590 = 0;
  plStack_578 = (long *)0x0;
  uStack_580 = 0;
  plStack_570 = (long *)0x0;
  uStack_546 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_558 = 10;
  uStack_548 = 0x100;
  ppuStack_560 = &PTR_FUN_110862700;
  pppuStack_520 = &ppuStack_5d8;
  uStack_510 = 0;
  uStack_518 = 0;
  plStack_500 = (long *)0x0;
  uStack_508 = 0;
  plStack_4f8 = (long *)0x0;
  puStack_5f0 = (undefined8 *)0x0;
  puStack_5e8 = (undefined8 *)0x0;
  uStack_5e0 = 0;
  uStack_5f4 = 0;
  puVar8 = &uStack_4f0;
  pppuVar31 = &ppuStack_560;
  pppuStack_5a8 = pppuVar27;
  puStack_528 = puVar2;
  func_0x0001000e77a0(puVar8,pppuVar31,&puStack_5f0,&uStack_5f4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_5f0 != (undefined8 *)0x0) {
    puStack_5e8 = puStack_5f0;
    __ZdlPv();
  }
  plVar1 = plStack_4f8;
  ppuStack_560 = &PTR_FUN_110862700;
  plStack_4f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_500;
  plStack_500 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_5f0 = &uStack_518;
  func_0x000100105004(&puStack_5f0);
  plVar1 = plStack_570;
  ppuStack_5d8 = &PTR_SUB_110862760;
  plStack_570 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_578;
  plStack_578 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_5f0 = &uStack_590;
  func_0x000100105004(&puStack_5f0);
  _objc_release(pppuStack_5a8);
  func_0x0001000e76e0(&uStack_4c8);
  _objc_release(uStack_4d8);
  _objc_release(uStack_4e0);
  _objc_retain(puVar8);
  puVar9 = puVar8;
  func_0x00010bf52a60();
  lVar29 = lRam0000000000000000;
  while (puVar9 != (undefined8 *)0x0) {
    puVar32 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar29) {
        _objc_enumerationMutation(puVar8);
      }
      pppuVar31 = *(undefined ****)((long)puVar32 * 8);
      puVar28 = PTR_PTR_1126b49e8;
      FUN_1050dafe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar28);
      puVar32 = (undefined8 *)((long)puVar32 + 1);
    } while (puVar9 != puVar32);
    puVar9 = puVar8;
    func_0x00010bf52a60();
  }
  _objc_release(puVar8);
  _objc_release(puVar8);
  _objc_release(pppuVar27);
  puVar28 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_438) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  _objc_release(pppuVar27);
  _objc_release(puVar7);
  __Unwind_Resume();
  _objc_retain(pppuVar31);
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar4 = pppuVar31;
  func_0x00010bf529e0();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  pppuVar27 = pppuVar31;
  pppuVar5 = pppuVar31;
  pppuVar10 = pppuVar31;
  pppuVar11 = pppuVar31;
  pppuVar12 = pppuVar31;
  pppuVar13 = pppuVar31;
  switch(pppuVar4) {
  default:
    _objc_retain(puVar28);
    puVar6 = puVar28;
    goto LAB_1050d476c;
  case (undefined ***)0x1:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined ***)0x2:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar4);
    break;
  case (undefined ***)0x3:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar4);
    goto code_r0x0001050d4438;
  case (undefined ***)0x4:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001050d4428;
  case (undefined ***)0x5:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar4);
    goto code_r0x0001050d4428;
  case (undefined ***)0x6:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar4);
    goto code_r0x0001050d4420;
  case (undefined ***)0x7:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar4);
    goto code_r0x0001050d4418;
  case (undefined ***)0x8:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar14);
    _objc_release(pppuVar4);
code_r0x0001050d4418:
    _objc_release(pppuVar13);
code_r0x0001050d4420:
    _objc_release(pppuVar12);
code_r0x0001050d4428:
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
code_r0x0001050d4438:
    _objc_release(pppuVar5);
    break;
  case (undefined ***)0x9:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar4);
    goto code_r0x0001050d3078;
  case (undefined ***)0xa:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar4);
    goto code_r0x0001050d4304;
  case (undefined ***)0xb:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar4);
    goto code_r0x0001050d417c;
  case (undefined ***)0xc:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar4);
    goto code_r0x0001050d4760;
  case (undefined ***)0xd:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar19);
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar4);
    goto code_r0x0001050d3dbc;
  case (undefined ***)0xe:
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar20);
    _objc_release(pppuVar19);
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar5);
    _objc_release(pppuVar27);
    _objc_release(pppuVar4);
    goto LAB_1050d476c;
  case (undefined ***)0xf:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar21 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar21);
    _objc_release(pppuVar20);
    _objc_release(pppuVar19);
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar4);
    goto code_r0x0001050d4438;
  case (undefined ***)0x10:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar21 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar22 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar22);
    _objc_release(pppuVar21);
    _objc_release(pppuVar20);
    _objc_release(pppuVar19);
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar4);
code_r0x0001050d3078:
    _objc_release(pppuVar10);
    _objc_release(pppuVar5);
    break;
  case (undefined ***)0x11:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar21 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar22 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar23 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar23);
    _objc_release(pppuVar22);
    _objc_release(pppuVar21);
    _objc_release(pppuVar20);
    _objc_release(pppuVar19);
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar4);
code_r0x0001050d4304:
    _objc_release(pppuVar5);
    break;
  case (undefined ***)0x12:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar21 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar22 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar23 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar24 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar24);
    _objc_release(pppuVar23);
    _objc_release(pppuVar22);
    _objc_release(pppuVar21);
    _objc_release(pppuVar20);
    _objc_release(pppuVar19);
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar4);
code_r0x0001050d417c:
    _objc_release(pppuVar5);
    break;
  case (undefined ***)0x13:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar21 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar22 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar23 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar24 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar25);
    _objc_release(pppuVar24);
    _objc_release(pppuVar23);
    _objc_release(pppuVar22);
    _objc_release(pppuVar21);
    _objc_release(pppuVar20);
    _objc_release(pppuVar19);
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar4);
code_r0x0001050d4760:
    _objc_release(pppuVar5);
    break;
  case (undefined ***)0x14:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar21 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar22 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar23 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar24 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar26 = pppuVar31;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar26);
    _objc_release(pppuVar25);
    _objc_release(pppuVar24);
    _objc_release(pppuVar23);
    _objc_release(pppuVar22);
    _objc_release(pppuVar21);
    _objc_release(pppuVar20);
    _objc_release(pppuVar19);
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar4);
code_r0x0001050d3dbc:
    _objc_release(pppuVar5);
  }
  _objc_release(pppuVar27);
LAB_1050d476c:
  _objc_release(puVar28);
  _objc_release(pppuVar31);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1050d2218; end: 1050d2577;  */

void FUN_1050d2218(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  undefined ***pppuVar19;
  undefined ***pppuVar20;
  undefined ***pppuVar21;
  undefined ***pppuVar22;
  undefined ***pppuVar23;
  undefined ***pppuVar24;
  undefined ***pppuVar25;
  undefined ***pppuVar26;
  undefined *puVar27;
  undefined ***pppuVar28;
  undefined8 *puVar29;
  undefined4 uStack_224;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b4938);
  if (param_1 == (undefined *)0x0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  puVar3 = &uStack_191;
  FUN_1050da67c();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  _objc_retain(param_2);
  ppuStack_208 = &PTR_SUB_110862760;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_FUN_110862700;
  pppuStack_150 = &ppuStack_208;
  uStack_140 = 0;
  uStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puStack_220 = (undefined8 *)0x0;
  puStack_218 = (undefined8 *)0x0;
  uStack_210 = 0;
  uStack_224 = 0;
  puVar4 = &uStack_120;
  pppuVar28 = &ppuStack_190;
  uStack_1d8 = param_2;
  puStack_158 = puVar3;
  func_0x0001000e77a0(puVar4,pppuVar28,&puStack_220,&uStack_224);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_220 != (undefined8 *)0x0) {
    puStack_218 = puStack_220;
    __ZdlPv();
  }
  plVar2 = plStack_128;
  ppuStack_190 = &PTR_FUN_110862700;
  plStack_128 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puStack_220 = &uStack_148;
  func_0x000100105004(&puStack_220);
  plVar2 = plStack_1a0;
  ppuStack_208 = &PTR_SUB_110862760;
  plStack_1a0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puStack_220 = &uStack_1c0;
  func_0x000100105004(&puStack_220);
  _objc_release(uStack_1d8);
  func_0x0001000e76e0(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined8 *)0x0) {
    puVar29 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      pppuVar28 = *(undefined ****)((long)puVar29 * 8);
      puVar6 = PTR_PTR_1126b49e8;
      FUN_1050dafe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar29 = (undefined8 *)((long)puVar29 + 1);
    } while (puVar5 != puVar29);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(param_2);
  puVar6 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain(pppuVar28);
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar7 = pppuVar28;
  func_0x00010bf529e0();
  puVar27 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  pppuVar8 = pppuVar28;
  pppuVar9 = pppuVar28;
  pppuVar10 = pppuVar28;
  pppuVar11 = pppuVar28;
  pppuVar12 = pppuVar28;
  pppuVar13 = pppuVar28;
  switch(pppuVar7) {
  default:
    _objc_retain(puVar6);
    puVar27 = puVar6;
    goto LAB_1050d476c;
  case (undefined ***)0x1:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined ***)0x2:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar7);
    break;
  case (undefined ***)0x3:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar7);
    goto code_r0x0001050d4438;
  case (undefined ***)0x4:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001050d4428;
  case (undefined ***)0x5:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar7);
    goto code_r0x0001050d4428;
  case (undefined ***)0x6:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar7);
    goto code_r0x0001050d4420;
  case (undefined ***)0x7:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar7);
    goto code_r0x0001050d4418;
  case (undefined ***)0x8:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar14);
    _objc_release(pppuVar7);
code_r0x0001050d4418:
    _objc_release(pppuVar13);
code_r0x0001050d4420:
    _objc_release(pppuVar12);
code_r0x0001050d4428:
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
code_r0x0001050d4438:
    _objc_release(pppuVar9);
    break;
  case (undefined ***)0x9:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar7);
    goto code_r0x0001050d3078;
  case (undefined ***)0xa:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar7);
    goto code_r0x0001050d4304;
  case (undefined ***)0xb:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar7);
    goto code_r0x0001050d417c;
  case (undefined ***)0xc:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar7);
    goto code_r0x0001050d4760;
  case (undefined ***)0xd:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar19);
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar7);
    goto code_r0x0001050d3dbc;
  case (undefined ***)0xe:
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar20);
    _objc_release(pppuVar19);
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar9);
    _objc_release(pppuVar8);
    _objc_release(pppuVar7);
    goto LAB_1050d476c;
  case (undefined ***)0xf:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar21 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar21);
    _objc_release(pppuVar20);
    _objc_release(pppuVar19);
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar7);
    goto code_r0x0001050d4438;
  case (undefined ***)0x10:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar21 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar22 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar22);
    _objc_release(pppuVar21);
    _objc_release(pppuVar20);
    _objc_release(pppuVar19);
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar7);
code_r0x0001050d3078:
    _objc_release(pppuVar10);
    _objc_release(pppuVar9);
    break;
  case (undefined ***)0x11:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar21 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar22 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar23 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar23);
    _objc_release(pppuVar22);
    _objc_release(pppuVar21);
    _objc_release(pppuVar20);
    _objc_release(pppuVar19);
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar7);
code_r0x0001050d4304:
    _objc_release(pppuVar9);
    break;
  case (undefined ***)0x12:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar21 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar22 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar23 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar24 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar24);
    _objc_release(pppuVar23);
    _objc_release(pppuVar22);
    _objc_release(pppuVar21);
    _objc_release(pppuVar20);
    _objc_release(pppuVar19);
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar7);
code_r0x0001050d417c:
    _objc_release(pppuVar9);
    break;
  case (undefined ***)0x13:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar21 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar22 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar23 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar24 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar25);
    _objc_release(pppuVar24);
    _objc_release(pppuVar23);
    _objc_release(pppuVar22);
    _objc_release(pppuVar21);
    _objc_release(pppuVar20);
    _objc_release(pppuVar19);
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar7);
code_r0x0001050d4760:
    _objc_release(pppuVar9);
    break;
  case (undefined ***)0x14:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar21 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar22 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar23 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar24 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar25 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar26 = pppuVar28;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar26);
    _objc_release(pppuVar25);
    _objc_release(pppuVar24);
    _objc_release(pppuVar23);
    _objc_release(pppuVar22);
    _objc_release(pppuVar21);
    _objc_release(pppuVar20);
    _objc_release(pppuVar19);
    _objc_release(pppuVar18);
    _objc_release(pppuVar17);
    _objc_release(pppuVar16);
    _objc_release(pppuVar15);
    _objc_release(pppuVar14);
    _objc_release(pppuVar13);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar7);
code_r0x0001050d3dbc:
    _objc_release(pppuVar9);
  }
  _objc_release(pppuVar8);
LAB_1050d476c:
  _objc_release(puVar6);
  _objc_release(pppuVar28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
  return;
}



/* Entry: 1050d2578; end: 1050d589f;  */

void FUN_1050d2578(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  
  _objc_retain(param_2);
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf529e0();
  puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_2;
  uVar3 = param_2;
  uVar4 = param_2;
  uVar5 = param_2;
  uVar6 = param_2;
  uVar7 = param_2;
  switch(uVar1) {
  default:
    _objc_retain(param_1);
    puVar21 = param_1;
    goto LAB_1050d476c;
  case 1:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 2:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    break;
  case 3:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    goto code_r0x0001050d4438;
  case 4:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001050d4428;
  case 5:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    goto code_r0x0001050d4428;
  case 6:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    goto code_r0x0001050d4420;
  case 7:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    goto code_r0x0001050d4418;
  case 8:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar1);
code_r0x0001050d4418:
    _objc_release(uVar7);
code_r0x0001050d4420:
    _objc_release(uVar6);
code_r0x0001050d4428:
    _objc_release(uVar5);
    _objc_release(uVar4);
code_r0x0001050d4438:
    _objc_release(uVar3);
    break;
  case 9:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar1);
    goto code_r0x0001050d3078;
  case 10:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
    goto code_r0x0001050d4304;
  case 0xb:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
    goto code_r0x0001050d417c;
  case 0xc:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
    goto code_r0x0001050d4760;
  case 0xd:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
    goto code_r0x0001050d3dbc;
  case 0xe:
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    goto LAB_1050d476c;
  case 0xf:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
    goto code_r0x0001050d4438;
  case 0x10:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar1);
code_r0x0001050d3078:
    _objc_release(uVar4);
    _objc_release(uVar3);
    break;
  case 0x11:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
code_r0x0001050d4304:
    _objc_release(uVar3);
    break;
  case 0x12:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
code_r0x0001050d417c:
    _objc_release(uVar3);
    break;
  case 0x13:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
code_r0x0001050d4760:
    _objc_release(uVar3);
    break;
  case 0x14:
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
code_r0x0001050d3dbc:
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
LAB_1050d476c:
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 1050d58a0; end: 1050d5947;  */

ulong FUN_1050d58a0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf861c0();
  lVar2 = param_3;
  func_0x00010bf861c0();
  if (lVar1 < lVar2) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf861c0(param_3);
    lVar2 = param_2;
    func_0x00010bf861c0(param_2);
    uVar3 = (ulong)(lVar1 < lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1050d5948; end: 1050d5b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *****
FUN_1050d5948(undefined8 *****param_1,long param_2,undefined8 *****param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *****pppppuVar1;
  long lVar2;
  undefined8 *****pppppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *****unaff_x21;
  undefined8 *****unaff_x22;
  undefined8 *****pppppuVar7;
  undefined8 ****ppppuStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    _objc_retain(param_1);
    pppppuVar3 = param_1;
  }
  else {
    unaff_x21 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    unaff_x22 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(param_1);
    param_4 = SUB84(auStack_e8,0);
    param_5 = 0x10;
    pppppuVar3 = param_1;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (pppppuVar3 != (undefined8 *****)0x0) {
      pppppuVar7 = (undefined8 *****)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_1);
        }
        lVar4 = param_2;
        (**(code **)(param_2 + 0x10))(param_2,*(undefined8 *)((long)pppppuVar7 * 8));
        pppppuVar1 = unaff_x21;
        if ((int)lVar4 == 0) {
          pppppuVar1 = unaff_x22;
        }
        func_0x00010befa120(pppppuVar1);
        pppppuVar7 = (undefined8 *****)((long)pppppuVar7 + 1);
      } while (pppppuVar3 != pppppuVar7);
      param_4 = SUB84(auStack_e8,0);
      param_5 = 0x10;
      pppppuVar3 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    func_0x00010c246ba0(unaff_x21);
    func_0x00010c246ba0(unaff_x22);
    pppppuVar3 = unaff_x21;
    param_3 = unaff_x22;
    func_0x00010bf09f80(unaff_x21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
  }
  _objc_release(param_2);
  pppppuVar7 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppppuVar3);
    return pppppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  _objc_release(unaff_x22);
  _objc_release(unaff_x21);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(uStack_130);
  puStack_198 = PTR_PTR_1126e60e8;
  pppppuVar3 = &ppppuStack_1a0;
  ppppuStack_1a0 = pppppuVar7;
  _objc_msgSendSuper2(pppppuVar3,PTR_s_init_1125d9248);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    pppppuVar7 = param_3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)pppppuVar3 + (long)_DAT_11271bcbc);
    *(undefined8 ******)((long)pppppuVar3 + (long)_DAT_11271bcbc) = pppppuVar7;
    _objc_release(uVar5);
    *(undefined4 *)((long)pppppuVar3 + (long)_DAT_11271bcc0) = param_4;
    *(undefined8 *)((long)pppppuVar3 + (long)_DAT_11271bcc4) = param_5;
    uVar5 = param_6;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)pppppuVar3 + (long)_DAT_11271bcc8);
    *(undefined8 *)((long)pppppuVar3 + (long)_DAT_11271bcc8) = uVar5;
    _objc_release(uVar6);
    uVar5 = param_7;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)pppppuVar3 + (long)_DAT_11271bccc);
    *(undefined8 *)((long)pppppuVar3 + (long)_DAT_11271bccc) = uVar5;
    _objc_release(uVar6);
    uVar5 = param_8;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)pppppuVar3 + (long)_DAT_11271bcd0);
    *(undefined8 *)((long)pppppuVar3 + (long)_DAT_11271bcd0) = uVar5;
    _objc_release(uVar6);
    uVar5 = uStack_130;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)pppppuVar3 + (long)_DAT_11271bcd4);
    *(undefined8 *)((long)pppppuVar3 + (long)_DAT_11271bcd4) = uVar5;
    _objc_release(uVar6);
    *(undefined1 *)((long)pppppuVar3 + (long)_DAT_11271bcd8) = uStack_128;
    *(undefined8 *)((long)pppppuVar3 + (long)_DAT_11271bcdc) = uStack_120;
    *(undefined1 *)((long)pppppuVar3 + (long)_DAT_11271bce0) = uStack_118;
    *(undefined8 *)((long)pppppuVar3 + (long)_DAT_11271bce4) = uStack_110;
    *(undefined1 *)((long)pppppuVar3 + (long)_DAT_11271bce8) = uStack_108;
  }
  _objc_release(uStack_130);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return pppppuVar3;
}



/* Entry: 1050d5b5c; end: 1050d5d33; -[SCCharmsCharm initWithOwnerIdentifier:charmIdentifier:ownerType:displayName:descriptionData:dialogButtonText:graphic:hideable:displayOrder:unviewed:source:deleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1050d5b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined1 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e60e8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271bcbc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271bcbc) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11271bcc0) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271bcc4) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271bcc8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271bcc8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271bccc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271bccc) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271bcd0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271bcd0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271bcd4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271bcd4) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271bcd8) = param_10;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271bcdc) = param_12;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271bce0) = param_13;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271bce4) = param_15;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271bce8) = param_16;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1050d5d34; end: 1050d5d57; -[SCCharmsCharm copyWithZone:] */

undefined8 FUN_1050d5d34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050d5d58; end: 1050d5e5b; -[SCCharmsCharm hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1050d5d58(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  ulong uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271bcbc);
  func_0x00010bfde980();
  lStack_80 = (long)*(int *)(param_1 + _DAT_11271bcc0);
  lVar5 = *(long *)(param_1 + _DAT_11271bcc4);
  lStack_78 = -lVar5;
  if (-1 < lVar5) {
    lStack_78 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271bcc8);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271bccc);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271bcd0);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271bcd4);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + _DAT_11271bcd8);
  lVar5 = *(long *)(param_1 + _DAT_11271bcdc);
  uStack_40 = (ulong)*(byte *)(param_1 + _DAT_11271bce0);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  lVar5 = *(long *)(param_1 + _DAT_11271bce4);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_30 = (ulong)*(byte *)(param_1 + _DAT_11271bce8);
  puVar3 = &uStack_88;
  uStack_58 = uVar1;
  func_0x000100505190(puVar3,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1050d5ff4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1050d6000;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(int *)((long)puVar3 + (long)_DAT_11271bcc0) ==
             *(int *)((long)param_3 + (long)_DAT_11271bcc0) &&
            (*(long *)((long)puVar3 + (long)_DAT_11271bcc4) ==
             *(long *)((long)param_3 + (long)_DAT_11271bcc4))) &&
           (*(char *)((long)puVar3 + (long)_DAT_11271bcd8) ==
            *(char *)((long)param_3 + (long)_DAT_11271bcd8))) &&
          ((*(long *)((long)puVar3 + (long)_DAT_11271bcdc) ==
            *(long *)((long)param_3 + (long)_DAT_11271bcdc) &&
           (*(char *)((long)puVar3 + (long)_DAT_11271bce0) ==
            *(char *)((long)param_3 + (long)_DAT_11271bce0))))))) &&
        (*(long *)((long)puVar3 + (long)_DAT_11271bce4) ==
         *(long *)((long)param_3 + (long)_DAT_11271bce4))) &&
       (*(char *)((long)puVar3 + (long)_DAT_11271bce8) ==
        *(char *)((long)param_3 + (long)_DAT_11271bce8))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271bcbc);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271bcbc)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271bcc8);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271bcc8)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271bccc);
          if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271bccc)) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271bcd0);
            if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271bcd0)) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11271bcd4);
              if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11271bcd4)) {
                func_0x00010c071ae0();
                goto LAB_1050d6000;
              }
              goto LAB_1050d5ff4;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1050d6000:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1050d5e5c; end: 1050d601b; -[SCCharmsCharm isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1050d5e5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050d5ff4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050d6000;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(int *)(param_1 + (long)_DAT_11271bcc0) == *(int *)(param_3 + (long)_DAT_11271bcc0) &&
            (*(long *)(param_1 + (long)_DAT_11271bcc4) == *(long *)(param_3 + (long)_DAT_11271bcc4))
            ) && (*(char *)(param_1 + (long)_DAT_11271bcd8) ==
                  *(char *)(param_3 + (long)_DAT_11271bcd8))) &&
          ((*(long *)(param_1 + (long)_DAT_11271bcdc) == *(long *)(param_3 + (long)_DAT_11271bcdc)
           && (*(char *)(param_1 + (long)_DAT_11271bce0) ==
               *(char *)(param_3 + (long)_DAT_11271bce0))))))) &&
        (*(long *)(param_1 + (long)_DAT_11271bce4) == *(long *)(param_3 + (long)_DAT_11271bce4))) &&
       (*(char *)(param_1 + (long)_DAT_11271bce8) == *(char *)(param_3 + (long)_DAT_11271bce8))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11271bcbc);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271bcbc)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11271bcc8);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271bcc8)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11271bccc);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271bccc)) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_11271bcd0);
            if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271bcd0)) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + (long)_DAT_11271bcd4);
              if (lVar3 != *(long *)(param_3 + (long)_DAT_11271bcd4)) {
                func_0x00010c071ae0();
                goto LAB_1050d6000;
              }
              goto LAB_1050d5ff4;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1050d6000:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050d601c; end: 1050d602b; -[SCCharmsCharm ownerIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050d601c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bcbc);
}



/* Entry: 1050d602c; end: 1050d603b; -[SCCharmsCharm charmIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1050d602c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11271bcc0);
}



/* Entry: 1050d603c; end: 1050d604b; -[SCCharmsCharm ownerType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050d603c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bcc4);
}



/* Entry: 1050d604c; end: 1050d605b; -[SCCharmsCharm displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050d604c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bcc8);
}



/* Entry: 1050d605c; end: 1050d606b; -[SCCharmsCharm descriptionData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050d605c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bccc);
}



/* Entry: 1050d606c; end: 1050d607b; -[SCCharmsCharm dialogButtonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050d606c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bcd0);
}



/* Entry: 1050d607c; end: 1050d608b; -[SCCharmsCharm graphic] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050d607c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bcd4);
}



/* Entry: 1050d608c; end: 1050d609b; -[SCCharmsCharm hideable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1050d608c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271bcd8);
}



/* Entry: 1050d609c; end: 1050d60ab; -[SCCharmsCharm displayOrder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050d609c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bcdc);
}



/* Entry: 1050d60ac; end: 1050d60bb; -[SCCharmsCharm unviewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1050d60ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271bce0);
}



/* Entry: 1050d60bc; end: 1050d60cb; -[SCCharmsCharm source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050d60bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bce4);
}


