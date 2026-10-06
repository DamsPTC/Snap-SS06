/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100104b58; end: 100104b8b; -[SCDocObjectFetchedResult .cxx_construct] */

void FUN_100104b58(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  return;
}



/* Entry: 100104b8c; end: 100104cfb; -[SCDocObjectFetchedResult initWithArray:objectClass:error:changesTimestamp:fetchedResultId:expressionPtr:orderBy:limit:] */

undefined1 *
FUN_100104b8c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
             undefined1 *param_9,undefined4 *param_10)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar4 = &uStack_60;
  puStack_58 = PTR_PTR_11270c188;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    if ((undefined1 *)((long)puVar4 + 8) != param_3) {
      FUN_100104d5c();
    }
    *(undefined8 *)((long)puVar4 + 0x20) = param_4;
    uVar5 = *param_5;
    *(undefined4 *)((long)puVar4 + 0x30) = *(undefined4 *)(param_5 + 1);
    *(undefined8 *)((long)puVar4 + 0x28) = uVar5;
    func_0x000107c60ca4((undefined1 *)((long)puVar4 + 0x38),param_5 + 2);
    func_0x000107c60ca4((undefined1 *)((long)puVar4 + 0x50),param_5 + 5);
    *(undefined4 *)((long)puVar4 + 0x68) = *(undefined4 *)(param_5 + 8);
    *(undefined8 *)((long)puVar4 + 0x70) = param_6;
    *(undefined8 *)((long)puVar4 + 0x78) = param_7;
    uVar8 = param_8[1];
    uVar5 = *param_8;
    if (param_8[1] != 0) {
      plVar7 = (long *)(param_8[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar7 = *(long **)((long)puVar4 + 0x88);
    *(undefined8 *)((long)puVar4 + 0x88) = uVar8;
    *(undefined8 *)((long)puVar4 + 0x80) = uVar5;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x000107c60d68(plVar7);
      }
    }
    if ((undefined1 *)((long)puVar4 + 0x90) != param_9) {
      FUN_100104edc();
    }
    *(undefined4 *)((long)puVar4 + 0xa8) = *param_10;
  }
  return (undefined1 *)puVar4;
}



/* Entry: 100104cfc; end: 100104d5b;  */

void FUN_100104cfc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[1];
    puVar1 = puVar2;
    if (puVar2 != puVar3) {
      do {
        puVar3 = puVar3 + -1;
        func_0x000107c61170(*puVar3);
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
    func_0x000107c60e14(puVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 100104d5c; end: 100104e9f;  */

/* WARNING: Possible PIC construction at 0x000100104f20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100104f24) */

void FUN_100104d5c(ulong *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  uVar6 = *param_1;
  if ((ulong)((long)(param_1[2] - uVar6) >> 3) < param_4) {
    puVar4 = param_1;
    puVar8 = param_2;
    puVar9 = param_3;
    FUN_100104cfc();
    if (param_4 >> 0x3d != 0) {
      func_0x000107c306a0();
      if ((ulong)puVar8 >> 0x3d == 0) {
        puVar5 = puVar4 + 2;
        FUN_100104040();
        *puVar4 = (ulong)puVar5;
        puVar4[1] = (ulong)puVar5;
        puVar4[2] = (ulong)(puVar5 + (long)puVar8);
        return;
      }
      func_0x000107c306a0();
      uVar7 = puVar4[2];
      puVar12 = (undefined8 *)*puVar4;
      if ((ulong)((long)(uVar7 - (long)puVar12) >> 5) < uVar6) {
        if (puVar12 == (undefined8 *)0x0) {
          if (uVar6 >> 0x3b == 0) {
            uVar1 = (long)uVar7 >> 4;
            if ((ulong)((long)uVar7 >> 4) <= uVar6) {
              uVar1 = uVar6;
            }
            if (0x7fffffffffffffdf < uVar7) {
              uVar1 = 0x7ffffffffffffff;
            }
            func_0x000100c43594(puVar4,uVar1);
            uVar6 = puVar4[1];
            lVar2 = (long)puVar9 - (long)puVar8;
            if (lVar2 != 0) {
              func_0x000107c610b8(uVar6,puVar8,lVar2);
            }
            uVar6 = uVar6 + lVar2;
            goto LAB_100104fe8;
          }
          func_0x0001053b832c();
          puVar8 = (undefined8 *)*puVar4;
          puVar9 = (undefined8 *)*puVar8;
          if (puVar9 == (undefined8 *)0x0) {
            return;
          }
          puVar11 = (undefined8 *)puVar8[1];
          puVar12 = puVar9;
          if (puVar9 != puVar11) {
            do {
              puVar11 = puVar11 + -1;
              func_0x000107c61170(*puVar11);
            } while (puVar11 != puVar9);
            puVar12 = *(undefined8 **)*puVar4;
          }
          puVar8[1] = puVar9;
        }
        else {
          puVar4[1] = (ulong)puVar12;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar12);
        return;
      }
      puVar11 = (undefined8 *)puVar4[1];
      if ((ulong)((long)puVar11 - (long)puVar12 >> 5) < uVar6) {
        lVar2 = (long)puVar8 + ((long)puVar11 - (long)puVar12);
        if (puVar11 != puVar12) {
          func_0x000107c610b8(puVar12,puVar8);
          puVar11 = (undefined8 *)puVar4[1];
        }
        lVar3 = (long)puVar9 - lVar2;
        if (lVar3 != 0) {
          func_0x000107c610b8(puVar11,lVar2,lVar3);
        }
        uVar6 = (long)puVar11 + lVar3;
      }
      else {
        lVar2 = (long)puVar9 - (long)puVar8;
        if (lVar2 != 0) {
          func_0x000107c610b8(puVar12,puVar8,lVar2);
        }
        uVar6 = (long)puVar12 + lVar2;
      }
LAB_100104fe8:
      puVar4[1] = uVar6;
      return;
    }
    uVar6 = (long)(param_1[2] - *param_1) >> 2;
    if (uVar6 <= param_4) {
      uVar6 = param_4;
    }
    if (0x7ffffffffffffff7 < param_1[2] - *param_1) {
      uVar6 = 0x1fffffffffffffff;
    }
    FUN_100104ea0(param_1,uVar6);
    puVar8 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      uVar10 = *param_2;
      func_0x000107c61174(uVar10);
      *puVar8 = uVar10;
      puVar8 = puVar8 + 1;
    }
  }
  else {
    if (param_4 <= (ulong)((long)(param_1[1] - uVar6) >> 3)) {
      FUN_100553b54(&uStack_41,param_2,param_3);
      puVar8 = (undefined8 *)param_1[1];
      while (puVar8 != param_2) {
        puVar8 = puVar8 + -1;
        func_0x000107c61170(*puVar8);
      }
      param_1[1] = (ulong)param_2;
      return;
    }
    puVar9 = (undefined8 *)((long)param_2 + (param_1[1] - uVar6));
    FUN_100553b54(&uStack_42,param_2,puVar9);
    puVar8 = (undefined8 *)param_1[1];
    puVar12 = puVar8;
    for (; puVar9 != param_3; puVar9 = puVar9 + 1) {
      uVar10 = *puVar9;
      func_0x000107c61174(uVar10);
      *puVar12 = uVar10;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  param_1[1] = (ulong)puVar8;
  return;
}



/* Entry: 100104ea0; end: 100104edb;  */

/* WARNING: Possible PIC construction at 0x000100104f20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100104f24) */

void FUN_100104ea0(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_2 >> 0x3d == 0) {
    plVar2 = param_1 + 2;
    FUN_100104040();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_2);
    return;
  }
  func_0x000107c306a0();
  uVar3 = param_1[2];
  puVar8 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar3 - (long)puVar8) >> 5) < param_4) {
    if (puVar8 == (undefined8 *)0x0) {
      if (param_4 >> 0x3b == 0) {
        uVar1 = (long)uVar3 >> 4;
        if ((ulong)((long)uVar3 >> 4) <= param_4) {
          uVar1 = param_4;
        }
        if (0x7fffffffffffffdf < uVar3) {
          uVar1 = 0x7ffffffffffffff;
        }
        func_0x000100c43594(param_1,uVar1);
        lVar6 = param_1[1];
        param_3 = param_3 - param_2;
        if (param_3 != 0) {
          func_0x000107c610b8(lVar6,param_2,param_3);
        }
        lVar6 = lVar6 + param_3;
        goto LAB_100104fe8;
      }
      func_0x0001053b832c();
      puVar4 = (undefined8 *)*param_1;
      puVar5 = (undefined8 *)*puVar4;
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      puVar7 = (undefined8 *)puVar4[1];
      puVar8 = puVar5;
      if (puVar5 != puVar7) {
        do {
          puVar7 = puVar7 + -1;
          func_0x000107c61170(*puVar7);
        } while (puVar7 != puVar5);
        puVar8 = *(undefined8 **)*param_1;
      }
      puVar4[1] = puVar5;
    }
    else {
      param_1[1] = (long)puVar8;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar8);
    return;
  }
  puVar4 = (undefined8 *)param_1[1];
  if ((ulong)((long)puVar4 - (long)puVar8 >> 5) < param_4) {
    lVar6 = param_2 + ((long)puVar4 - (long)puVar8);
    if (puVar4 != puVar8) {
      func_0x000107c610b8(puVar8,param_2);
      puVar4 = (undefined8 *)param_1[1];
    }
    param_3 = param_3 - lVar6;
    if (param_3 != 0) {
      func_0x000107c610b8(puVar4,lVar6,param_3);
    }
    lVar6 = (long)puVar4 + param_3;
  }
  else {
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      func_0x000107c610b8(puVar8,param_2,param_3);
    }
    lVar6 = (long)puVar8 + param_3;
  }
LAB_100104fe8:
  param_1[1] = lVar6;
  return;
}



/* Entry: 100104edc; end: 100105003;  */

/* WARNING: Possible PIC construction at 0x000100104f20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100104f24) */

void FUN_100104edc(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar2 = param_1[2];
  puVar7 = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((long)(uVar2 - (long)puVar7) >> 5)) {
    puVar3 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar3 - (long)puVar7 >> 5) < param_4) {
      lVar5 = param_2 + ((long)puVar3 - (long)puVar7);
      if (puVar3 != puVar7) {
        func_0x000107c610b8(puVar7,param_2);
        puVar3 = (undefined8 *)param_1[1];
      }
      param_3 = param_3 - lVar5;
      if (param_3 != 0) {
        func_0x000107c610b8(puVar3,lVar5,param_3);
      }
      lVar5 = (long)puVar3 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        func_0x000107c610b8(puVar7,param_2,param_3);
      }
      lVar5 = (long)puVar7 + param_3;
    }
LAB_100104fe8:
    param_1[1] = lVar5;
    return;
  }
  if (puVar7 == (undefined8 *)0x0) {
    if (param_4 >> 0x3b == 0) {
      uVar1 = (long)uVar2 >> 4;
      if ((ulong)((long)uVar2 >> 4) <= param_4) {
        uVar1 = param_4;
      }
      if (0x7fffffffffffffdf < uVar2) {
        uVar1 = 0x7ffffffffffffff;
      }
      func_0x000100c43594(param_1,uVar1);
      lVar5 = param_1[1];
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        func_0x000107c610b8(lVar5,param_2,param_3);
      }
      lVar5 = lVar5 + param_3;
      goto LAB_100104fe8;
    }
    func_0x0001053b832c();
    puVar3 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)*puVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    puVar6 = (undefined8 *)puVar3[1];
    puVar7 = puVar4;
    if (puVar4 != puVar6) {
      do {
        puVar6 = puVar6 + -1;
        func_0x000107c61170(*puVar6);
      } while (puVar6 != puVar4);
      puVar7 = *(undefined8 **)*param_1;
    }
    puVar3[1] = puVar4;
  }
  else {
    param_1[1] = puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar7);
  return;
}



/* Entry: 100105004; end: 10010506f;  */

void FUN_100105004(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)*puVar2;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar2[1];
    puVar1 = puVar3;
    if (puVar3 != puVar4) {
      do {
        puVar4 = puVar4 + -1;
        func_0x000107c61170(*puVar4);
      } while (puVar4 != puVar3);
      puVar1 = *(undefined8 **)*param_1;
    }
    puVar2[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 100105070; end: 1001050c3;  */

void FUN_100105070(long param_1,undefined8 param_2)

{
  func_0x000107c60d88(param_1 + 0x28);
  FUN_1001050c4(param_1,param_2);
  func_0x000107c60f3c(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 1001050c4; end: 1001051a7;  */

ulong * FUN_1001050c4(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  puVar2 = param_1 + 2;
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < (undefined8 *)*puVar2) {
    uVar3 = *param_2;
    *param_2 = 0;
    puVar8 = puVar6 + 1;
    *puVar6 = uVar3;
  }
  else {
    lVar7 = (long)puVar6 - *param_1;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      func_0x000104d9725c();
      return (ulong *)((long)(puVar2[2] - puVar2[1]) >> 3);
    }
    uVar4 = (long)*puVar2 - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    puStack_38 = puVar2;
    func_0x000104d97270();
    uVar1 = *param_1;
    uVar4 = param_1[1];
    puVar6 = (undefined8 *)((long)puVar2 + lVar7);
    uVar3 = *param_2;
    *param_2 = 0;
    uVar4 = (long)puVar6 - (uVar4 - uVar1);
    puVar8 = puVar6 + 1;
    *puVar6 = uVar3;
    func_0x000107c610b4(uVar4,uVar1);
    uStack_58 = *param_1;
    *param_1 = uVar4;
    param_1[1] = (ulong)puVar8;
    uStack_40 = param_1[2];
    param_1[2] = (ulong)(puVar2 + uVar5);
    puVar2 = &uStack_58;
    uStack_50 = uStack_58;
    uStack_48 = uStack_58;
    FUN_1000c54b8(puVar2);
  }
  param_1[1] = (ulong)puVar8;
  return puVar2;
}



/* Entry: 1001051a8; end: 1001051b7; -[SCDocObjectFetchedResult count] */

long FUN_1001051a8(long param_1)

{
  return *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3;
}



/* Entry: 1001051b8; end: 1001051f3; -[SCDocObjectFetchedResult firstObject] */

void FUN_1001051b8(long param_1)

{
  undefined8 uVar1;
  
  if (*(undefined8 **)(param_1 + 0x10) == *(undefined8 **)(param_1 + 8)) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined8 **)(param_1 + 8);
    func_0x000107c61174(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1001051f4; end: 10010528f; -[SCDocObjectFetchedResult .cxx_destruct] */

void FUN_1001051f4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
    func_0x000107c60e14();
  }
  plVar5 = *(long **)(param_1 + 0x88);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x000107c60d68(plVar5);
    }
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    func_0x000107c60e14(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    func_0x000107c60e14(*(undefined8 *)(param_1 + 0x38));
  }
  lStack_28 = param_1 + 8;
  FUN_100104170(&lStack_28);
  return;
}



/* Entry: 100105290; end: 100105317; -[SCCrashLastPageViewListener _didChangeCurrentPageEvent:] */

void FUN_100105290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100105318;
  puStack_20 = &UNK_110872390;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_1052666d0;
  puStack_48 = &UNK_110872400;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x000107c4c730(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_1108723e0,&puStack_60
                      ,&PTR___NSConcreteGlobalBlock_110872450);
  return;
}



/* Entry: 100105318; end: 1001053af;  */

/* WARNING: Possible PIC construction at 0x000100105390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100105394) */

void FUN_100105318(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c441b4(PTR_PTR_1126afdd8);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b6c18;
  func_0x000107c4aa30(PTR_PTR_1126b6c18);
  func_0x000107c61180();
  func_0x000107c56be8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1001053b0; end: 1001053db; +[_TtC24SCCrashServicesImplSwift17MetadataConstants lastPageViewKey] */

void FUN_1001053b0(void)

{
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef86540);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1001053dc; end: 1001053f3;  */

void FUN_1001053dc(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001001053ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1001053f4; end: 1001054f3;  */

void FUN_1001053f4(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110862760;
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
  puStack_28 = param_1 + 9;
  FUN_100105004(&puStack_28);
  func_0x000107c61170(param_1[6]);
  func_0x000107c60e14(param_1);
  return;
}



/* Entry: 1001054f4; end: 1001054f7;  */

void FUN_1001054f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1001054f8; end: 100105507; -[SCDocPrefItem valType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1001054f8(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_11278ea40);
}



/* Entry: 100105508; end: 100105517; -[SCDocPrefItem valFastCoded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100105508(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ea58);
}



/* Entry: 100105518; end: 100105553;  */

void FUN_100105518(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  return;
}



/* Entry: 100105554; end: 100105647;  */

/* WARNING: Possible PIC construction at 0x00010010559c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001055dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001055a0) */
/* WARNING: Removing unreachable block (ram,0x0001001055c8) */
/* WARNING: Removing unreachable block (ram,0x0001001055a8) */
/* WARNING: Removing unreachable block (ram,0x0001001055f8) */
/* WARNING: Removing unreachable block (ram,0x000100105610) */
/* WARNING: Removing unreachable block (ram,0x000100105600) */
/* WARNING: Removing unreachable block (ram,0x0001001055e0) */
/* WARNING: Removing unreachable block (ram,0x0001001055b4) */
/* WARNING: Removing unreachable block (ram,0x0001001055d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100105554(long param_1,undefined8 param_2)

{
  func_0x000107c4d9e8(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e9f8),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  func_0x000107c61180();
  FUN_1000e3c80();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100105648; end: 10010567b;  */

/* WARNING: Possible PIC construction at 0x000100105668: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010010566c) */

void FUN_100105648(long param_1)

{
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10010567c; end: 1001056cb; -[SCDocPrefItem .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001001056a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001056a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010567c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278ea58,0);
  return;
}



/* Entry: 1001056cc; end: 1001056d3;  */

void FUN_1001056cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1001056d4; end: 100105737; -[SCPreferences username] */

void FUN_1001056d4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c4d9e8(param_1,param_2,&PTR____CFConstantStringClassReference_110ee4d38);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100105738; end: 1001057a7;  */

bool FUN_100105738(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  bVar4 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_3 + 0x17);
  uVar2 = param_3[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*param_2;
    if (-1 < (char)bVar4) {
      plVar6 = param_2;
    }
    plVar3 = (long *)*param_3;
    if (-1 < (char)bVar5) {
      plVar3 = param_3;
    }
    func_0x000107c610b0(plVar6,plVar3,uVar1);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 1001057a8; end: 10010580b; -[SCPreferences lagunaId] */

void FUN_1001057a8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c4d9e8(param_1,param_2,&PTR____CFConstantStringClassReference_110ee4d58);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10010580c; end: 10010586f; -[SCAuthTokenManager authToken] */

void FUN_10010580c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c41028();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4adac();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x000107c41028(param_1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100105870; end: 10010587b; -[SCAuthTokenManager currentToken] */

void FUN_100105870(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 10010587c; end: 100105987;  */

void FUN_10010587c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b65b0;
  func_0x000107c610fc(PTR_PTR_1126b65b0);
  puVar2 = PTR_PTR_1126b65b8;
  func_0x000107c610f4(PTR_PTR_1126b65b8);
  func_0x000107c492b8();
  puVar3 = PTR_PTR_1126b65c8;
  func_0x000107c610f4(PTR_PTR_1126b65c8);
  func_0x000107c474f8();
  puVar4 = PTR_PTR_1126decb0;
  func_0x000107c610fc(PTR_PTR_1126decb0);
  puVar5 = PTR_PTR_1126decb8;
  func_0x000107c610f4(PTR_PTR_1126decb8);
  func_0x000107c47508();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100105988; end: 1001059fb; -[SCGrapheneSnaptokenMetric2 init] */

undefined1 * FUN_100105988(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112702f48;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1001059fc; end: 100105aeb; -[SCSnapTokenMainAppLogger initWithUserNotTrackedLogger:grapheneRegistry:applicationLifecycleEvents:] */

undefined1 *
FUN_1001059fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112702f38;
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
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100105aec; end: 100105b87; -[SCSnapTokenKeychainBackedByArchiveDiskStorage initWithLogger:] */

undefined1 * FUN_100105aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702f58;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126decf0;
    func_0x000107c610f4();
    func_0x000107c47514();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100105b88; end: 100105c2f; -[SCSnapTokenKeychainDiskStorage initWithLogger:isKeychainPerformerEnabled:] */

undefined1 *
FUN_100105b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112702f60;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c3c6f4();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined1 **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100105c30; end: 100105d03; +[SCSnapTokenKeychainDiskStorage _sharedKeychainPerformer] */

void FUN_100105c30(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f0e68 != -1) {
    FUN_10002a2fc(0x1137f0e68,&PTR___NSConcreteGlobalBlock_110c9af00);
  }
  uVar1 = uRam00000001137f0e60;
  func_0x000107c61174(uRam00000001137f0e60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100105d04; end: 100105d1b; -[SCSnapTokenStorage .cxx_construct] */

void FUN_100105d04(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  return;
}



/* Entry: 100105d1c; end: 100105e3f; -[SCSnapTokenStorage initWithLogger:diskStorage:validator:useInMemoryRefreshTokenForValidityCheck:] */

undefined1 *
FUN_100105d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_112702f90;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x59) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = 0;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x58) = param_6;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100105e40; end: 100105e67;  */

/* WARNING: Possible PIC construction at 0x000100105e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100105e58) */

void FUN_100105e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100105e68; end: 100105f57; -[SCSnapTokenStorage hasValidSnapTokenSession:] */

bool FUN_100105e68(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  lVar2 = param_1;
  func_0x000107c49920();
  if ((int)lVar2 == 0) {
    lVar2 = param_3;
    func_0x000107c4adac();
    if (lVar2 != 0) {
      if (*(char *)(param_1 + 0x58) == '\x01') {
        func_0x000107c3bda4(param_1,param_2,param_3);
        func_0x000107c61180();
        lVar2 = param_1;
        func_0x000107c4adac();
      }
      else {
        func_0x000107c3c21c(param_1,param_2,param_3);
        func_0x000107c61180();
        lVar2 = param_1;
        func_0x000107c4adac();
      }
      bVar1 = lVar2 != 0;
      func_0x000107c61170(param_1);
      goto LAB_100105f14;
    }
  }
  else {
    func_0x000107c4be88(*(undefined8 *)(param_1 + 0x40),param_2,
                        &PTR____CFConstantStringClassReference_110f3e398);
  }
  bVar1 = false;
LAB_100105f14:
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 100105f58; end: 100105f5f; -[SCSnapTokenStorage invalidated] */

undefined1 FUN_100105f58(long param_1)

{
  return *(undefined1 *)(param_1 + 0x59);
}



/* Entry: 100105f60; end: 100106087; -[SCSnapTokenStorage _readRefreshTokenFromDiskForUserId:] */

void FUN_100105f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f6ee306;
  FUN_1000ba800(&UNK_10f6ee306);
  lVar2 = *(long *)(param_1 + 0x48);
  func_0x000107c4fb88(lVar2,param_2,param_3);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4adac();
  if (lVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c610f4();
    func_0x000107c46368();
    puVar5 = puVar4;
    func_0x000107c4adac();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      func_0x000107c61174(puVar4);
      puVar5 = puVar4;
    }
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(lVar2);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100106088; end: 10010614b; -[SCSnapTokenKeychainBackedByArchiveDiskStorage refreshTokenDataWithUserId:] */

void FUN_100106088(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f6ed564;
  FUN_1000ba800(&UNK_10f6ed564);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x000107c4fb88(lVar2,param_2,param_3);
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = param_1;
    func_0x000107c3add4(param_1,param_2,param_3);
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4be94(*(undefined8 *)(param_1 + 8),param_2,
                          &PTR____CFConstantStringClassReference_110df35d8);
    }
    func_0x0001000e2a84(puVar1);
  }
  else {
    func_0x0001000e2a84(puVar1);
    func_0x000107c61174(lVar2);
    lVar3 = lVar2;
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10010614c; end: 1001061bf; -[SCSnapTokenKeychainDiskStorage refreshTokenDataWithUserId:] */

void FUN_10010614c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c3c258();
  func_0x000107c61180();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c3b8e0();
    func_0x000107c61180();
  }
  else {
    func_0x000107c3b410(param_1,param_2,lVar1,&PTR____CFConstantStringClassReference_110e18ed8);
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1001061c0; end: 1001061f7; -[SCSnapTokenKeychainDiskStorage _refreshTokenKeyForUserId:] */

void FUN_1001061c0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 1001061f8; end: 1001062af; -[SCSnapTokenKeychainDiskStorage _dataForKey:tokenType:] */

void FUN_1001061f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  int iStack_34;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar1 = param_3;
  func_0x000107c4adac();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    iStack_34 = 0;
    puVar2 = PTR_PTR_1126aef90;
    func_0x000107c4123c(PTR_PTR_1126aef90,param_2,param_3,&iStack_34);
    func_0x000107c61180();
    if (iStack_34 != -0x62d4 && iStack_34 != 0) {
      func_0x000107c4be8c(*(undefined8 *)(param_1 + 8),param_2,0,(long)iStack_34,param_4);
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1001062b0; end: 1001062fb; +[SCKeychainManager dataForKey:status:] */

void FUN_1001062b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4f75c();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x00010010641c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1001062fc; end: 1001064cf; +[SCKeychainManager queryForKey:] */

void FUN_1001062fc(undefined8 param_1,int *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_c8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c412d4(param_3,param_2,4);
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c419ac();
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c4d2d4();
  func_0x000107c61170(puVar1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    func_0x000107c60e78();
    func_0x000107c61174();
    func_0x000107c56bcc(param_3);
    func_0x000107c56bcc(param_3);
    puStack_c8 = (undefined *)0x0;
    uVar2 = param_3;
    func_0x000107c60b5c(param_3,&puStack_c8);
    func_0x000107c61170(param_3);
    if (param_2 != (int *)0x0) {
      *param_2 = (int)uVar2;
    }
    puVar3 = puStack_c8;
    if (((int)uVar2 != 0) && (puStack_c8 != (undefined *)0x0)) {
      func_0x000107c607f0();
      puVar3 = (undefined *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1001064d0; end: 1001064d7;  */

void FUN_1001064d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1001064d8; end: 100106617;  */

void FUN_1001064d8(double param_1,long *param_2,undefined1 *param_3,undefined1 *param_4)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar5 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  puVar4 = param_4;
  if (param_2 != (long *)0x0) {
    ppuVar2 = (undefined1 **)param_2[1];
    (**(code **)(*ppuVar2 + 0x28))(ppuVar2,&UNK_110879458);
    unaff_x20 = param_2;
    unaff_x21 = (undefined8 *)param_3;
    if ((int)ppuVar2 != 0) {
      unaff_x20 = (long *)param_2[1];
      pcVar1 = "true";
      if ((int)param_3 == 0) {
        pcVar1 = "false";
      }
      FUN_10002b838(appuStack_50,pcVar1);
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      FUN_10007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
      (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_110879458,&uStack_70,(long)param_4 * 10);
      ppuVar2 = &puStack_58;
      puStack_58 = (undefined1 *)&uStack_70;
      FUN_10007e5dc();
      puVar4 = (undefined1 *)puVar5;
      unaff_x21 = &uStack_70;
      if (cStack_39 < '\0') {
        ppuVar2 = appuStack_50[0];
        func_0x000107c60e14();
        puVar4 = (undefined1 *)puVar5;
        unaff_x21 = &uStack_70;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  puStack_58 = (undefined1 *)unaff_x21;
  FUN_10007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    func_0x000107c60e14(appuStack_50[0]);
  }
  func_0x000107c60bd8();
  FUN_1001064d8(ppuVar2[1],puVar4,1);
  plVar3 = (long *)ppuVar2[1];
  if (plVar3 == (long *)0x0) {
    return;
  }
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (plVar3 != (long *)0x0) {
    ppuVar2 = (undefined1 **)plVar3[1];
    (**(code **)(*ppuVar2 + 0x28))(ppuVar2,&UNK_1108794a8);
    unaff_x20 = plVar3;
    unaff_x21 = (undefined8 *)puVar4;
    if ((int)ppuVar2 != 0) {
      unaff_x20 = (long *)plVar3[1];
      pcVar1 = "true";
      if ((int)puVar4 == 0) {
        pcVar1 = "false";
      }
      FUN_10002b838(appuStack_c0,pcVar1);
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      FUN_10007e1e8(&uStack_e0,appuStack_c0,&lStack_a8,1);
      (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108794a8,&uStack_e0,(long)(param_1 * 1000.0))
      ;
      ppuVar2 = &puStack_c8;
      puStack_c8 = (undefined1 *)&uStack_e0;
      FUN_10007e5dc(ppuVar2);
      unaff_x21 = &uStack_e0;
      if (cStack_a9 < '\0') {
        ppuVar2 = appuStack_c0[0];
        func_0x000107c60e14(appuStack_c0[0]);
        unaff_x21 = &uStack_e0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  func_0x000107c60e78();
  puStack_c8 = (undefined1 *)unaff_x21;
  FUN_10007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    func_0x000107c60e14(appuStack_c0[0]);
  }
  func_0x000107c60bd8(ppuVar2);
  func_0x000107c61574(unaff_x20[2]);
  func_0x000107c61574(unaff_x20[3]);
  func_0x000107c61574(unaff_x20[4]);
  func_0x000107c61574(unaff_x20[5]);
  func_0x000107c61574(unaff_x20[6]);
  func_0x000107c61574(unaff_x20[7]);
  func_0x000107c61574(unaff_x20[8]);
  func_0x000107c61574(unaff_x20[9]);
  func_0x000107c61574(unaff_x20[10]);
  func_0x000107c61574(unaff_x20[0xb]);
  func_0x000107c61574(unaff_x20[0xc]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)(unaff_x20,0x68,7);
  return;
}



/* Entry: 100106618; end: 10010667f; -[SCConfigMetricGraphene2 cofInitCircumstanceEngine:duration:] */

void FUN_100106618(double param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined1 **ppuVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  FUN_1001064d8(*(undefined8 *)(param_2 + 8),param_4,1);
  plVar2 = *(long **)(param_2 + 8);
  if (plVar2 == (long *)0x0) {
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  if (plVar2 != (long *)0x0) {
    ppuVar3 = (undefined1 **)plVar2[1];
    (**(code **)(*ppuVar3 + 0x28))(ppuVar3,&UNK_1108794a8);
    unaff_x20 = plVar2;
    unaff_x21 = (undefined8 *)param_4;
    if ((int)ppuVar3 != 0) {
      unaff_x20 = (long *)plVar2[1];
      pcVar1 = "true";
      if ((int)param_4 == 0) {
        pcVar1 = "false";
      }
      FUN_10002b838(appuStack_50,pcVar1);
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      FUN_10007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
      (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108794a8,&uStack_70,(long)(param_1 * 1000.0))
      ;
      ppuVar3 = &puStack_58;
      puStack_58 = (undefined1 *)&uStack_70;
      FUN_10007e5dc(ppuVar3);
      unaff_x21 = &uStack_70;
      if (cStack_39 < '\0') {
        ppuVar3 = appuStack_50[0];
        func_0x000107c60e14(appuStack_50[0]);
        unaff_x21 = &uStack_70;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  puStack_58 = (undefined1 *)unaff_x21;
  FUN_10007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    func_0x000107c60e14(appuStack_50[0]);
  }
  func_0x000107c60bd8(ppuVar3);
  func_0x000107c61574(unaff_x20[2]);
  func_0x000107c61574(unaff_x20[3]);
  func_0x000107c61574(unaff_x20[4]);
  func_0x000107c61574(unaff_x20[5]);
  func_0x000107c61574(unaff_x20[6]);
  func_0x000107c61574(unaff_x20[7]);
  func_0x000107c61574(unaff_x20[8]);
  func_0x000107c61574(unaff_x20[9]);
  func_0x000107c61574(unaff_x20[10]);
  func_0x000107c61574(unaff_x20[0xb]);
  func_0x000107c61574(unaff_x20[0xc]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)(unaff_x20,0x68,7);
  return;
}



/* Entry: 100106680; end: 1001067bb;  */

void FUN_100106680(long *param_1,undefined1 *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != (long *)0x0) {
    ppuVar2 = (undefined1 **)param_1[1];
    (**(code **)(*ppuVar2 + 0x28))(ppuVar2,&UNK_1108794a8);
    unaff_x20 = param_1;
    unaff_x21 = (undefined8 *)param_2;
    if ((int)ppuVar2 != 0) {
      unaff_x20 = (long *)param_1[1];
      pcVar1 = "true";
      if ((int)param_2 == 0) {
        pcVar1 = "false";
      }
      FUN_10002b838(appuStack_50,pcVar1);
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      FUN_10007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
      (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108794a8,&uStack_70,param_3);
      ppuVar2 = &puStack_58;
      puStack_58 = (undefined1 *)&uStack_70;
      FUN_10007e5dc(ppuVar2);
      unaff_x21 = &uStack_70;
      if (cStack_39 < '\0') {
        ppuVar2 = appuStack_50[0];
        func_0x000107c60e14(appuStack_50[0]);
        unaff_x21 = &uStack_70;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  puStack_58 = (undefined1 *)unaff_x21;
  FUN_10007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    func_0x000107c60e14(appuStack_50[0]);
  }
  func_0x000107c60bd8(ppuVar2);
  func_0x000107c61574(unaff_x20[2]);
  func_0x000107c61574(unaff_x20[3]);
  func_0x000107c61574(unaff_x20[4]);
  func_0x000107c61574(unaff_x20[5]);
  func_0x000107c61574(unaff_x20[6]);
  func_0x000107c61574(unaff_x20[7]);
  func_0x000107c61574(unaff_x20[8]);
  func_0x000107c61574(unaff_x20[9]);
  func_0x000107c61574(unaff_x20[10]);
  func_0x000107c61574(unaff_x20[0xb]);
  func_0x000107c61574(unaff_x20[0xc]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)(unaff_x20,0x68,7);
  return;
}



/* Entry: 1001067bc; end: 10010682f;  */

void FUN_1001067bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100106830; end: 1001068ab; -[SCCircumstanceEngine stringValueForConfigKeySync:featureProvidedSignals:] */

void FUN_100106830(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3ade8(param_1,param_2,param_3,5);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x000107c5c1e0(uVar1,param_2,param_3,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1001068ac; end: 1001068af; -[SCCircumstanceEngine _assertNotConfigReadOnMainThreadDuringStartup:expectedValueType:] */

void FUN_1001068ac(void)

{
  return;
}



/* Entry: 1001068b0; end: 10010691f; -[SCCircumstanceEngineConfigProvider stringValueForConfigKeySync:featureProvidedSignals:] */

void FUN_1001068b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c3c078();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100106920; end: 100106993; -[SCCameraCaptureFormatSelectionFrameworkConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_100106920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e7660;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100106994; end: 100106ab3; -[SCCameraCaptureFormatSelectionFrameworkConfigurationImpl startupDeviceSettingsMap] */

void FUN_100106994(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x000107c3e66c();
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c41960(param_1,param_2,&PTR____CFConstantStringClassReference_110dd0fd8,uVar1);
  func_0x000107c61180();
  func_0x000107c41960(param_1,param_2,&PTR____CFConstantStringClassReference_110dd0ff8,uVar1);
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_58 = uVar2;
  uStack_50 = param_1;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_58,2);
  func_0x000107c61180();
  func_0x000107c419a8(puVar4,param_2,puVar3,&PTR__OBJC_CLASS___NSConstantArray_11117e640);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    func_0x000107c4154c();
    puVar3 = PTR_PTR_1126b70f0;
    func_0x000107c610f4(PTR_PTR_1126b70f0);
    func_0x000107c47614();
    puVar5 = PTR_PTR_1126b70f8;
    func_0x000107c610f4(PTR_PTR_1126b70f8);
    func_0x000107c47808();
    puVar6 = PTR_PTR_1126b7100;
    func_0x000107c610f4(PTR_PTR_1126b7100);
    func_0x000107c4780c();
    puVar7 = PTR_PTR_1126b7108;
    func_0x000107c610f4(PTR_PTR_1126b7108);
    func_0x000107c476b4();
    puVar8 = PTR_PTR_1126b7110;
    func_0x000107c610f4(PTR_PTR_1126b7110);
    func_0x000107c486ac();
    puVar9 = PTR_PTR_1126b7118;
    func_0x000107c610f4(PTR_PTR_1126b7118);
    func_0x000107c47810(0,0x7f7fffff);
    puVar4 = PTR_PTR_1126b7120;
    func_0x000107c610f4(PTR_PTR_1126b7120);
    func_0x000107c469e8();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100106ab4; end: 100106c2f; -[SCCameraCaptureFormatSelectionFrameworkConfigurationImpl bareboneDeviceSettings] */

void FUN_100106ab4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  func_0x000107c4154c();
  puVar1 = PTR_PTR_1126b70f0;
  func_0x000107c610f4(PTR_PTR_1126b70f0);
  func_0x000107c47614();
  puVar2 = PTR_PTR_1126b70f8;
  func_0x000107c610f4(PTR_PTR_1126b70f8);
  func_0x000107c47808();
  puVar3 = PTR_PTR_1126b7100;
  func_0x000107c610f4(PTR_PTR_1126b7100);
  func_0x000107c4780c();
  puVar4 = PTR_PTR_1126b7108;
  func_0x000107c610f4(PTR_PTR_1126b7108);
  func_0x000107c476b4();
  puVar5 = PTR_PTR_1126b7110;
  func_0x000107c610f4(PTR_PTR_1126b7110);
  func_0x000107c486ac();
  puVar6 = PTR_PTR_1126b7118;
  func_0x000107c610f4(PTR_PTR_1126b7118);
  func_0x000107c47810(0,0x7f7fffff);
  puVar7 = PTR_PTR_1126b7120;
  func_0x000107c610f4(PTR_PTR_1126b7120);
  func_0x000107c469e8();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100106c30; end: 100106c6b; -[SCCameraCaptureFormatSelectionFrameworkConfigurationImpl defaultActiveFormatResolution] */

void FUN_100106c30(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7130;
  func_0x000107c5acbc();
  if ((int)puVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf314d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126b7130,PTR_s_captureVideoActiveFormatSize1080_1125a9ed8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf31510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b7130,PTR_s_captureVideoActiveFormatSize720p_1125a9ee8);
  return;
}



/* Entry: 100106c6c; end: 100106ddf; -[SCCircumstanceEngineConfigProvider _optionalConfigResultForConfigKeySync:expectedValueType:featureProvidedSignals:exposeExperiment:] */

void FUN_100106c6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c43548();
  func_0x000107c61180();
  if ((lVar2 != 0) && (lVar3 = lVar2, func_0x000107c40808(), lVar3 != 0)) {
    uVar4 = param_1 + 0x28;
    func_0x000107c61148();
    lVar3 = lVar2;
    func_0x000107c43638(lVar2);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5adfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    if ((uVar5 & 1) == 0) {
      lVar3 = param_1 + 0x30;
      func_0x000107c61148(lVar3);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x000107c5c734(uVar6);
      func_0x000107c61180();
      if (param_6 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = (undefined4)*(undefined8 *)(param_1 + 8);
      func_0x000107c4edac();
      uVar7 = param_3;
      FUN_10010f694(param_3,param_4,param_5,lVar3,uVar6,lVar2,uVar8,uVar9,uVar1);
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(lVar3);
      goto LAB_100106d20;
    }
  }
  uVar7 = 0;
LAB_100106d20:
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 100106de0; end: 100106ec7; -[SCCDNSelectionManager init] */

undefined1 * FUN_100106de0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706060;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b7800;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c539f8(*(undefined8 *)((long)puVar1 + 8));
    puVar2 = PTR_PTR_1126b7f68;
    func_0x000107c5a9bc();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c4d5c0();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c4f7e8();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c610fc();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar5);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100106ec8; end: 100106f3f; -[SCConfigManagerImpl findConfigResultsWithConfigKeySync:] */

void FUN_100106ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c43550(param_1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c3c87c(param_1,param_2,param_3,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100106f40; end: 1001071d3; -[SCConfigManagerImpl findConfigsWithConfigKeySyncInternal:] */

void FUN_100106f40(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61174(param_4);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_10532f228;
  puStack_70 = &UNK_110847450;
  func_0x000107c61174(param_4);
  ppuVar1 = &puStack_88;
  uStack_68 = param_4;
  FUN_1001071d4(ppuVar1);
  func_0x000107c61170(uStack_68);
  func_0x000107c6071c();
  lVar2 = *(long *)(param_2 + 0x80);
  dVar6 = param_1;
  func_0x000107c400e8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61144(auStack_90,param_2);
    lVar5 = *(long *)(param_2 + 0x30);
    func_0x000107c6111c(auStack_98,auStack_90);
    func_0x000107c43f98();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    func_0x000107c61174();
    func_0x000107c61174(param_4);
    func_0x000107c4e524(uVar3);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    func_0x000107c6071c();
    func_0x000107c4be7c((dVar6 - param_1) * 1000.0,uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61174(lVar5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    func_0x000107c6071c();
    func_0x000107c4be7c((dVar6 - param_1) * 1000.0,uVar3);
    func_0x000107c61170(uVar3);
    lVar4 = lVar2;
    func_0x000107c40808();
    lVar5 = 0;
    if (lVar4 != 0) {
      lVar5 = lVar2;
    }
    func_0x000107c61174(lVar5);
  }
  func_0x000107c61170(lVar2);
  func_0x0001000e2a84(ppuVar1);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1001071d4; end: 100107237;  */

undefined * FUN_1001071d4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c61174();
  func_0x000107c5a9bc(puVar1);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3e818();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 100107238; end: 1001072bf; -[SCConfigLRUCache configRulesForConfigKey:] */

void FUN_100107238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4d9c0(uVar1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1001072c0; end: 1001072c7; -[SCLRUCache objectForKey:] */

void FUN_1001072c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_objectForKey_markRecentlyUsed__112615a20,param_3,1);
  return;
}



/* Entry: 1001072c8; end: 100107337; -[SCLRUCache objectForKey:markRecentlyUsed:] */

void FUN_1001072c8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  if ((param_4 != 0) && (lVar1 != 0)) {
    func_0x000107c3bf58(param_1,param_2,lVar1);
  }
  lVar2 = lVar1;
  func_0x000107c5dc0c(lVar1);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100107338; end: 1001073c7; -[SCConfigRepository getConfigsFromDBForConfigKey:waitForRecovery:] */

void FUN_100107338(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  (**(code **)(param_4 + 0x10))(param_4);
  func_0x000107c43f94(param_1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1001073c8; end: 1001073fb;  */

void FUN_1001073c8(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c5e060(*(undefined8 *)(param_1 + 0xd0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1001073fc; end: 100107417; -[SCConfigRepository getConfigsFromDBForConfigKey:] */

void FUN_1001073fc(void)

{
  func_0x000107c3b80c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100107418; end: 1001077f7; -[SCConfigRepository _getConfigsFromFileSystemForConfigKey:] */

void FUN_100107418(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined *unaff_x22;
  bool bVar9;
  undefined8 auStack_78 [2];
  char cStack_61;
  long *plStack_60;
  long *plStack_58;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    plVar8 = *(long **)(param_1 + 0x38);
    if (plVar8 == (long *)0x0) {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x000107c5c734(uVar6);
      func_0x000107c61180();
      func_0x000107c3fcfc();
      func_0x000107c61170(uVar6);
    }
    else {
      lVar7 = param_3;
      func_0x000107c61178(param_3);
      func_0x000107c3ac4c();
      FUN_10002b838(auStack_78,lVar7);
      (**(code **)(*plVar8 + 0x88))(&plStack_60,plVar8,auStack_78);
      if (cStack_61 < '\0') {
        func_0x000107c60e14(auStack_78[0]);
      }
      if ((plStack_60 == (long *)0x0) || (plStack_60[1] == *plStack_60)) {
        bVar9 = true;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x000107c412e8(PTR__OBJC_CLASS___NSData_1126ae778);
        func_0x000107c61180();
        puVar4 = PTR_PTR_1126b7818;
        func_0x000107c4e380();
        func_0x000107c61180();
        func_0x000107c61174(0);
        if (puVar4 == (undefined *)0x0) {
LAB_100107568:
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          func_0x000107c5c734(uVar6);
          func_0x000107c61180();
          unaff_x22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
          func_0x000107c61180();
          func_0x000107c3fd1c(uVar6);
          func_0x000107c61170(unaff_x22);
          func_0x000107c61170(uVar6);
          bVar9 = true;
        }
        else {
          puVar5 = puVar4;
          func_0x000107c400dc();
          func_0x000107c61180();
          func_0x000107c61170();
          if (puVar5 == (undefined *)0x0) goto LAB_100107568;
          unaff_x22 = puVar4;
          func_0x000107c400dc(puVar4);
          func_0x000107c61180();
          bVar9 = false;
        }
        func_0x000107c61170(puVar4);
        func_0x000107c61170(0);
        func_0x000107c61170(puVar3);
      }
      if (plStack_58 != (long *)0x0) {
        plVar8 = plStack_58 + 1;
        do {
          lVar7 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          func_0x000107c60d68(plStack_58);
        }
      }
      if (!bVar9) goto LAB_10010761c;
    }
  }
  unaff_x22 = PTR____NSArray0__struct_11034ab48;
LAB_10010761c:
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 1001077f8; end: 100107833;  */

int FUN_1001077f8(byte *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = *(ulong *)(param_1 + 8);
  pbVar2 = *(byte **)param_1;
  if (-1 < (char)param_1[0x17]) {
    uVar1 = (ulong)param_1[0x17];
    pbVar2 = param_1;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    iVar3 = (uint)*pbVar2 + iVar3 * 0x1f;
    pbVar2 = pbVar2 + 1;
  }
  return iVar3;
}



/* Entry: 100107834; end: 1001078e3;  */

void FUN_100107834(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w11;
  undefined8 uVar2;
  
  FUN_1001077f8(param_3);
  func_0x000107c61288();
  lVar1 = *(long *)(param_2 + 0x140);
  if (*(long *)(param_2 + 0x148) != 0) {
    do {
      FUN_1001078e4();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_2 + 0x48);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    param_1[1] = *(undefined8 *)(param_2 + 0x48);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x0001001d7934();
      } while (extraout_w10 != 0);
    }
  }
  else {
    FUN_100107990(param_1,param_2,*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x38),
                  param_3,*(undefined8 *)(lVar1 + 0x20));
  }
  func_0x000100107b68();
  func_0x000100107b70();
  return;
}



/* Entry: 1001078e4; end: 10010798f;  */

void FUN_1001078e4(void)

{
  bool bVar1;
  long *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100107990; end: 100107aff;  */

void FUN_100107990(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,
                  undefined4 param_5,ulong param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined1 uStack_48;
  
  uStack_54 = param_5;
  if ((param_4 == 0) || (*(long *)(param_4 + 0x18) == 0)) {
    FUN_1001d7924();
    if (extraout_x8_00 != 0) {
      do {
        func_0x0001001d7934();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x0001001078f4(param_4,&uStack_54);
    if (param_4 == 0) {
      FUN_1001d7924();
      if (extraout_x8_01 != 0) {
        do {
          func_0x0001001d7934();
        } while (extraout_w10_01 != 0);
      }
    }
    else {
      if (-1 < *(int *)(param_4 + 0x14)) {
        uVar2 = *(uint *)(param_4 + 0x18);
        uVar5 = (ulong)uVar2;
        if (uVar2 < 0x77359401) {
          if (uVar2 + *(int *)(param_4 + 0x14) <= param_6) {
            lVar4 = param_4;
            func_0x0001000cbe6c();
            *(undefined8 *)(lVar4 + 8) = 0;
            *(undefined8 *)(lVar4 + 0x10) = 0;
            puVar6 = (undefined8 *)(lVar4 + 0x18);
            *puVar6 = 0;
            func_0x0001000cbe74();
            uStack_48 = 0;
            puStack_50 = puVar6;
            if (uVar2 != 0) {
              FUN_100107b00(puVar6,uVar5);
              puVar1 = *(undefined1 **)(lVar4 + 0x20) + uVar5;
              puVar3 = *(undefined1 **)(lVar4 + 0x20);
              for (; uVar5 != 0; uVar5 = uVar5 - 1) {
                *puVar3 = 0;
                puVar3 = puVar3 + 1;
              }
              *(undefined1 **)(lVar4 + 0x20) = puVar1;
            }
            uStack_48 = 1;
            func_0x000100107b34(&puStack_50);
            *param_1 = puVar6;
            param_1[1] = lVar4;
            func_0x000107c610b4(*(undefined8 *)(lVar4 + 0x18),param_3 + *(int *)(param_4 + 0x14),
                                (long)*(int *)(param_4 + 0x18));
            return;
          }
          FUN_1001d7924();
          if (extraout_x8_02 == 0) {
            return;
          }
          do {
            func_0x0001001d7934();
          } while (extraout_w10_02 != 0);
          return;
        }
      }
      FUN_1001d7924();
      if (extraout_x8 != 0) {
        do {
          func_0x0001001d7934();
        } while (extraout_w10 != 0);
      }
    }
  }
  return;
}



/* Entry: 100107b00; end: 100107b5f;  */

undefined8 * FUN_100107b00(undefined8 *param_1,undefined8 *param_2)

{
  long *unaff_x19;
  long unaff_x20;
  
  if (-1 < (long)param_2) {
    func_0x0001000da72c();
    func_0x000107c60e20();
    *unaff_x19 = (long)param_2;
    unaff_x19[1] = (long)param_2;
    unaff_x19[2] = (long)param_2 + unaff_x20;
    return param_2;
  }
  func_0x00010533bba8();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    func_0x00010010e1c8(*param_1);
  }
  return param_1;
}



/* Entry: 100107b60; end: 100107b83;  */

void FUN_100107b60(void)

{
  return;
}



/* Entry: 100107b84; end: 100107ba7;  */

void FUN_100107b84(void)

{
  func_0x000100107b78();
  func_0x000107c6128c();
  return;
}



/* Entry: 100107ba8; end: 100107baf;  */

void FUN_100107ba8(void)

{
  return;
}



/* Entry: 100107bb0; end: 100107d3f;  */

uint FUN_100107bb0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x000107c61168();
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c446b4();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
  func_0x000107c5faec();
  func_0x000107c61170(puVar2);
  if ((((puVar1 == (undefined *)0x3031656e6f685069 && param_2 == -0x15ffffffffffccd4) ||
       (puVar2 = puVar1, func_0x000107c605b8(puVar1,param_2,0x3031656e6f685069,0xea0000000000332c,0)
       , ((ulong)puVar2 & 1) != 0)) ||
      (puVar1 == (undefined *)0x3031656e6f685069 && param_2 == -0x15ffffffffffc9d4)) ||
     ((puVar2 = puVar1, func_0x000107c605b8(puVar1,param_2,0x3031656e6f685069,0xea0000000000362c,0),
      ((ulong)puVar2 & 1) != 0 ||
      (puVar1 == (undefined *)0x3131656e6f685069 && param_2 == -0x15ffffffffffcdd4)))) {
    uVar3 = 1;
  }
  else {
    puVar2 = puVar1;
    func_0x000107c605b8(puVar1,param_2,0x3131656e6f685069,0xea0000000000322c,0);
    uVar3 = 1;
    if ((((ulong)puVar2 & 1) == 0) &&
       (puVar1 != (undefined *)0x3131656e6f685069 || param_2 != -0x15ffffffffffcbd4)) {
      puVar2 = puVar1;
      func_0x000107c605b8(puVar1,param_2,0x3131656e6f685069,0xea0000000000342c,0);
      if ((((ulong)puVar2 & 1) == 0) &&
         (puVar1 != (undefined *)0x3131656e6f685069 || param_2 != -0x15ffffffffffc9d4)) {
        func_0x000107c605b8(puVar1,param_2,0x3131656e6f685069,0xea0000000000362c,0);
        uVar3 = (uint)puVar1;
      }
    }
  }
  func_0x000107c6142c(param_2);
  return uVar3 & 1;
}



/* Entry: 100107d40; end: 100107d57; +[SCManagedCaptureDeviceCapabilities shouldRenderAt1080p] */

uint FUN_100107d40(uint param_1)

{
  FUN_100107bb0();
  return param_1 & 1;
}



/* Entry: 100107d58; end: 100107d7f; -[SCRequestManager networkManager] */

void FUN_100107d58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100107d80; end: 100107df7; +[GPBMessage initialize] */

/* WARNING: Possible PIC construction at 0x000100107d98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100107dd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100107d9c) */
/* WARNING: Removing unreachable block (ram,0x000100107dcc) */
/* WARNING: Removing unreachable block (ram,0x000100107db0) */
/* WARNING: Removing unreachable block (ram,0x000100107de8) */
/* WARNING: Removing unreachable block (ram,0x000107c41800) */
/* WARNING: Removing unreachable block (ram,0x00010bf6e760) */
/* WARNING: Removing unreachable block (ram,0x000100107dc0) */
/* WARNING: Removing unreachable block (ram,0x000100107dd4) */

void FUN_100107d80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126be598);
  return;
}



/* Entry: 100107df8; end: 100107f37; -[SCCDNSelectionManager setCofInstance:] */

void FUN_100107df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x000107c4dab4(param_3);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4da88();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c61174(param_3);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3d65c(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100107f38; end: 100107f3f; -[SCCircumstanceEngine observeUpdates] */

void FUN_100107f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e1190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_observeUpdates_112615e78);
  return;
}



/* Entry: 100107f40; end: 100107f67; -[SCConfigManagerImpl observeUpdates] */

void FUN_100107f40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100107f68; end: 10010804f; +[SCDevice currentDevice] */

void FUN_100107f68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x100107ff0;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137fc2a8 != -1) {
    FUN_10002a2fc(0x1137fc2a8,&puStack_48);
  }
  uVar1 = uRam00000001137fc2a0;
  func_0x000107c61174(uRam00000001137fc2a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100108050; end: 1001080e3; +[GPBMessage descriptor] */

void FUN_100108050(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (puRam00000001137fe878 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126e30b8;
  func_0x000107c610f4();
  func_0x000107c47cfc();
  puVar3 = PTR_PTR_1126ae978;
  puVar2 = PTR_PTR_1126be598;
  puRam00000001137fe880 = puVar1;
  func_0x000107c61158(PTR_PTR_1126be598);
  func_0x000107c3dbd0(puVar3,param_2,puVar2,0,puRam00000001137fe880,0,0,0,0);
  puRam00000001137fe878 = puVar3;
  return;
}



/* Entry: 1001080e4; end: 100108337; -[SCDevice initWithUIDevice:] */

undefined8 FUN_1001080e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  if (lRam00000001137fc2b0 != -1) {
    FUN_10002a2fc(0x1137fc2b0,&PTR___NSConcreteGlobalBlock_110d66dd0);
  }
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f4();
  func_0x000107c613d0(0x1137fc6b8);
  func_0x000107c45aec();
  ppuVar3 = ppuVar2;
  func_0x000107c4adac();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db54d8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  func_0x000107c61174(ppuVar1);
  func_0x000107c61170(ppuVar2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f0 = 0x80;
  uStack_e8 = 0x4100000001;
  func_0x000107c61660(&uStack_e8,2,&uStack_e0,&uStack_f0,0,0);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  if (lRam00000001137fc2b0 != -1) {
    FUN_10002a2fc(0x1137fc2b0,&PTR___NSConcreteGlobalBlock_110d66dd0);
  }
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c613d0(0x1137fc5b8);
  func_0x000107c45aec(puVar5);
  uVar6 = param_3;
  func_0x000107c4d07c(param_3);
  func_0x000107c61180();
  uVar7 = param_3;
  func_0x000107c5c620(param_3);
  func_0x000107c61180();
  uVar8 = param_3;
  func_0x000107c5c650(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c46550(param_1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  func_0x000107c60e78();
  uVar6 = 0x1137fc2b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc07fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__uname_11034cd50)(0x1137fc2b8);
  return uVar6;
}



/* Entry: 100108338; end: 100108343;  */

void FUN_100108338(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc07fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__uname_11034cd50)(0x1137fc2b8);
  return;
}



/* Entry: 100108344; end: 1001083ab; -[GPBFileDescriptor initWithPackage:syntax:] */

undefined1 *
FUN_100108344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270e7e8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c40794();
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1001083ac; end: 1001083c7; +[GPBDescriptor allocDescriptorForClass:rootClass:file:fields:fieldCount:storageSize:flags:] */

void FUN_1001083ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_allocDescriptorForClass_file_fie_11259dd10,param_3,param_5,param_6,
             param_7,param_8,param_9);
  return;
}



/* Entry: 1001083c8; end: 100108537; +[GPBDescriptor allocDescriptorForClass:file:fields:fieldCount:storageSize:flags:] */

undefined8
FUN_1001083c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5,
             uint param_6,undefined8 param_7,uint param_8)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((((param_8 ^ 0xffffffff) & 0x1c) != 0) && (func_0x000107c5c5dc(), param_6 != 0)) {
    uVar4 = (ulong)param_6;
    lVar3 = param_5 + 8;
    do {
      lVar1 = param_5;
      if ((param_8 & 1) != 0) {
        lVar1 = lVar3;
      }
      if (((param_8 >> 2 & 1) == 0) && (*(byte *)(lVar1 + 0x1e) - 0xf < 2)) {
        uVar2 = *(undefined8 *)(lVar1 + 8);
        func_0x000107c61138();
        *(undefined8 *)(lVar1 + 8) = uVar2;
      }
      if (((((param_8 & 8) == 0 && (param_4 & 0xff) == 3) &&
           ((*(ushort *)(lVar1 + 0x1c) & 0xf02) == 0)) && (-1 < *(int *)(lVar1 + 0x14))) &&
         (*(byte *)(lVar1 + 0x1e) - 0x11 < 0xfffffffe)) {
        *(ushort *)(lVar1 + 0x1c) = *(ushort *)(lVar1 + 0x1c) | 0x20;
      }
      if (((param_8 >> 4 & 1) == 0) && (*(char *)(lVar1 + 0x1e) == '\x11' && param_4 == 2)) {
        *(ushort *)(lVar1 + 0x1c) = *(ushort *)(lVar1 + 0x1c) | 0x1000;
      }
      param_5 = param_5 + 0x20;
      lVar3 = lVar3 + 0x28;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  func_0x000107c3dbcc(param_1);
  func_0x000107c61188();
  return param_1;
}



/* Entry: 100108538; end: 10010853f; -[GPBFileDescriptor syntax] */

undefined1 FUN_100108538(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 100108540; end: 10010868b; +[GPBDescriptor allocDescriptorForClass:messageName:fileDescription:fields:fieldCount:storageSize:flags:] */

undefined8 FUN_100108540(undefined8 param_1,undefined8 param_2)

{
  ushort *puVar1;
  undefined *puVar2;
  long in_x5;
  uint in_w6;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  uint in_stack_00000000;
  
  if (0x1f < in_stack_00000000) {
    func_0x000107c318a0();
  }
  if (in_w6 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar6 = (ulong)in_w6;
    func_0x000107c45cd4();
    uVar3 = 0;
    lVar5 = in_x5;
    do {
      puVar1 = (ushort *)(lVar5 + 0x1c);
      if ((in_stack_00000000 & 1) != 0) {
        puVar1 = (ushort *)(in_x5 + 0x24);
      }
      uVar3 = *puVar1 | uVar3;
      puVar2 = PTR_PTR_1126e30a8;
      func_0x000107c610f4(PTR_PTR_1126e30a8);
      func_0x000107c468fc();
      func_0x000107c3d798(puVar4,param_2,puVar2);
      func_0x000107c61170(puVar2);
      lVar5 = lVar5 + 0x20;
      in_x5 = in_x5 + 0x28;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    if (0x1fff < uVar3) {
      func_0x000107c318a0();
    }
  }
  func_0x000107c610f4(param_1);
  func_0x000107c45e3c();
  func_0x000107c61170(puVar4);
  return param_1;
}



/* Entry: 10010868c; end: 100108727; -[GPBDescriptor initWithClass:messageName:fileDescription:fields:storageSize:wireFormat:] */

undefined1 *
FUN_10010868c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e7e0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    func_0x000107c40794();
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    func_0x000107c61174();
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    *(undefined4 *)((long)puVar1 + 0x18) = param_7;
    *(undefined1 *)((long)puVar1 + 0x38) = param_8;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100108728; end: 1001087d3; +[GPBRootObject initialize] */

void FUN_100108728(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (lRam00000001137fe890 == 0) {
    puStack_48 = &DAT_10bd81a34;
    uStack_50 = 0;
    puStack_38 = &DAT_10bd81a40;
    puStack_40 = &DAT_10bd81a3c;
    puStack_28 = &DAT_10bd81a78;
    puStack_30 = &DAT_10bd81a5c;
    lVar1 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
    func_0x000107c6078c(lVar1,0,&uStack_50,PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
    puVar2 = PTR_PTR_1126e1498;
    lRam00000001137fe890 = lVar1;
    func_0x000107c610fc();
    puRam00000001137fe898 = puVar2;
  }
  puVar2 = param_1;
  func_0x000107c5c428();
  puVar3 = PTR_PTR_1126e3220;
  func_0x000107c61158();
  if (puVar2 == puVar3) {
    func_0x000107c42c6c(param_1);
  }
  return;
}



/* Entry: 1001087d4; end: 10010883f; -[GPBExtensionRegistry init] */

undefined1 * FUN_1001087d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e9c0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    func_0x000107c6078c(uVar2,0,0,PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100108840; end: 1001088a7; +[ConfigResultBundle descriptor] */

void FUN_100108840(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fd5c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cf5868,
                        &PTR____CFConstantStringClassReference_110f9f5f8,
                        &PTR_s_snapchat_cdp_cof_1133fd308,&PTR_s_etag_1133fd360,2,0x18,0x1c);
    puRam00000001137fd5c8 = puVar1;
  }
  return;
}


