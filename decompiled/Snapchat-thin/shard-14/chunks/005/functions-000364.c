/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b49b08c; end: 10b49b093;  */

void FUN_10b49b08c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b49b094; end: 10b49b1eb;  */

void FUN_10b49b094(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [32];
  
  _objc_retain();
  func_0x00010c11fca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c2ffd8(auStack_60);
  func_0x00010c27ef40(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b49b6b4(auStack_78);
  func_0x00010c278ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_98);
  func_0x00010c265580(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_b8);
  func_0x0001052be99c(param_1,auStack_60,auStack_78,auStack_98,auStack_b8);
  func_0x000107c279a4(auStack_b8);
  _objc_release(param_2);
  func_0x000107c279a4(auStack_98);
  FUN_10b49b2dc();
  func_0x000107c278a8(auStack_78);
  func_0x00010b49b2f4();
  func_0x00010b49b2ec();
  func_0x00010b49b2e4();
  return;
}



/* Entry: 10b49b1ec; end: 10b49b2db;  */

void FUN_10b49b1ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b1378;
  _objc_alloc(PTR_PTR_1126b1378);
  lVar2 = param_1;
  FUN_10b49b004(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x20;
  FUN_10b49b724(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x38;
  func_0x000107c27f68(lVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x58;
  func_0x000107c27f68(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03cd40(puVar1,param_2,lVar2,lVar3,lVar4,param_1);
  FUN_10b49b2dc();
  func_0x00010b49b2f4();
  func_0x00010b49b2ec();
  func_0x00010b49b2e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b49b2dc; end: 10b49b2fb;  */

void FUN_10b49b2dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b49b2fc; end: 10b49b373; -[SCNMdpCommonRequestHandleCppProxy initWithCpp:] */

undefined1 * FUN_10b49b2fc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706470;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b49b674();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010539eeb0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b49b374; end: 10b49b3cf; -[SCNMdpCommonRequestHandleCppProxy cancel] */

void FUN_10b49b374(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10b49b3d0; end: 10b49b48b; -[SCNMdpCommonRequestHandleCppProxy updateRequestContext:] */

void FUN_10b49b3d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_a8 [120];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b49b094(auStack_a8,param_3);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_a8);
  func_0x00010529fe04(auStack_a8);
  func_0x00010b49b68c();
  return;
}



/* Entry: 10b49b48c; end: 10b49b4fb;  */

void FUN_10b49b48c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110cbe038,&PTR_DAT_110ced538,0);
    if (lVar1 == 0) {
      FUN_10b49b590(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b49b4fc; end: 10b49b54f; -[SCNMdpCommonRequestHandleCppProxy .cxx_destruct] */

void FUN_10b49b4fc(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ced580;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010539eeb0((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b49b550; end: 10b49b58f; -[SCNMdpCommonRequestHandleCppProxy .cxx_construct] */

undefined8 * FUN_10b49b550(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b49b674();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b49b590; end: 10b49b603;  */

void FUN_10b49b590(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ced580;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b49b674();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b49b604);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b49b694();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b49b604; end: 10b49b673;  */

void FUN_10b49b604(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e02c8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b49b674();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010539eeb0(&uStack_30);
  return;
}



/* Entry: 10b49b674; end: 10b49b6b3;  */

void FUN_10b49b674(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b49b6b4; end: 10b49b723;  */

void FUN_10b49b6b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c0f1260();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c281ac(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000107c278a8(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 10b49b724; end: 10b49b783;  */

void FUN_10b49b724(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x000107c2824c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032f60(puVar1,param_2,param_1);
  FUN_10b49b784();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b49b784; end: 10b49b833;  */

void FUN_10b49b784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b49b834; end: 10b49b84f;  */

bool FUN_10b49b834(long param_1)

{
  FUN_10b49bef4();
  return param_1 != 0;
}



/* Entry: 10b49b850; end: 10b49ba13;  */

/* WARNING: Removing unreachable block (ram,0x00010b49b9c8) */

void FUN_10b49b850(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if (*(char *)(param_1 + 0xac) == '\x01') {
    uVar2 = (uint)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20) & 1;
    uVar1 = (ulong)(int)*(undefined8 *)(param_1 + 0xa8);
  }
  else {
    uVar2 = 1;
    uVar1 = 10;
  }
  plVar10 = *(long **)(param_1 + 0x10);
  if ((uVar2 != 0) && ((ulong)(((long)plVar10 - (long)*(long **)(param_1 + 8)) / 0x30) < uVar1)) {
LAB_10b49b9f0:
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
    return;
  }
  plVar6 = plVar10 + -6;
  dVar11 = (double)plVar10[-4];
  dVar13 = 0.0;
  dVar12 = dVar11;
  if ((char)plVar10[-3] == '\0') {
    dVar12 = 0.0;
  }
  lVar3 = 0x7fffffffffffffff;
  lVar5 = -0x8000000000000000;
  lVar7 = plVar10[-5];
  do {
    lVar8 = *plVar6;
    lVar4 = lVar3;
    plVar6 = plVar10 + -0xc;
    while( true ) {
      lVar9 = lVar8;
      if (plVar6 + 6 == *(long **)(param_1 + 8)) {
        dVar13 = dVar13 + (double)((lVar7 - lVar9) / 1000000);
        if (0.0 < dVar13) {
          dVar12 = (dVar12 * 8.0) / dVar13;
          if ((0.0 < *(float *)(param_1 + 0xf0)) &&
             ((double)((lVar5 - lVar4) / 1000000) / dVar13 < (double)*(float *)(param_1 + 0xf0))) {
            dVar12 = -1.0;
          }
          dVar13 = (dVar11 * 8.0) / dVar13;
          if (((0.0 < dVar13) &&
              (FUN_10b4b3310(dVar13,*(undefined8 *)(param_1 + 0x100)),
              *(long *)(param_1 + 0x108) != 0)) && (0.0 < dVar12)) {
            FUN_10b4b3310(dVar12 / dVar13);
          }
        }
        goto LAB_10b49b9f0;
      }
      if ((*(byte *)(plVar6 + 3) & 1) == 0) {
        lVar8 = plVar6[1];
        lVar3 = lVar4;
      }
      else {
        dVar12 = dVar12 + (double)plVar6[2];
        lVar8 = plVar6[1];
        lVar3 = *plVar6;
        if (lVar4 <= *plVar6) {
          lVar3 = lVar4;
        }
        if (lVar5 <= lVar8) {
          lVar5 = lVar8;
        }
      }
      dVar11 = dVar11 + (double)plVar6[2];
      if (lVar8 < lVar9) break;
      plVar10 = plVar6 + -6;
      lVar8 = *plVar6;
      lVar4 = lVar3;
      plVar6 = plVar10;
      if (lVar9 <= lVar8) {
        lVar8 = lVar9;
      }
    }
    dVar13 = dVar13 + (double)((lVar7 - lVar9) / 1000000);
    plVar10 = plVar6 + 6;
    lVar7 = lVar8;
  } while( true );
}



/* Entry: 10b49ba14; end: 10b49ba17;  */

undefined8 * FUN_10b49ba14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ced5a0;
  func_0x00010b49bec8(param_1 + 0x21);
  func_0x00010b49bec8(param_1 + 0x20);
  func_0x000107c30004(param_1 + 4);
  FUN_10b49be1c(param_1 + 1);
  return param_1;
}



/* Entry: 10b49ba18; end: 10b49ba2b;  */

void FUN_10b49ba18(void)

{
  FUN_10b49be7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b49ba2c; end: 10b49bb2b;  */

void FUN_10b49ba2c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10b49bb2c(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10b49bb44(plVar3);
    FUN_10b49bb2c(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b49bb2c; end: 10b49bb43;  */

void FUN_10b49bb2c(long *param_1,long param_2)

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



/* Entry: 10b49bb44; end: 10b49bb93;  */

void FUN_10b49bb44(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b49bb78();
  return;
}



/* Entry: 10b49bb94; end: 10b49bd97;  */

undefined1  [16] FUN_10b49bb94(long *param_1,int *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  long *aplStack_58 [3];
  
  uVar7 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar5 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10b49bc40;
          uVar5 = plVar8[1];
          if (uVar5 != uVar7) break;
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_10b49bd6c;
          }
        }
        if ((uVar9 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar9 <= uVar5) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar5 / uVar9;
          }
          uVar5 = uVar5 - uVar1 * uVar9;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_10b49bc40:
  FUN_10b49bd98(aplStack_58,param_1,uVar7);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    func_0x000107c2fff0(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar3 * uVar9;
      }
    }
  }
  plVar8 = aplStack_58[0];
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
    *(long **)(lVar4 + unaff_x23 * 8) = plVar6;
    if (*aplStack_58[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        uVar7 = uVar7 - uVar3 * uVar9;
      }
      *(long **)(lVar4 + uVar7 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10b49bde0(aplStack_58);
  uVar2 = 1;
LAB_10b49bd6c:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = plVar8;
  return auVar10;
}



/* Entry: 10b49bd98; end: 10b49bddf;  */

void FUN_10b49bd98(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = *param_4;
  return;
}



/* Entry: 10b49bde0; end: 10b49be03;  */

undefined8 FUN_10b49bde0(undefined8 param_1)

{
  FUN_10b49be04(param_1,0);
  return param_1;
}



/* Entry: 10b49be04; end: 10b49be1b;  */

void FUN_10b49be04(long *param_1,long param_2)

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



/* Entry: 10b49be1c; end: 10b49be4f;  */

undefined8 FUN_10b49be1c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10b49be50(&uStack_28);
  return param_1;
}



/* Entry: 10b49be50; end: 10b49be67;  */

void FUN_10b49be50(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b49be68; end: 10b49be7b;  */

undefined8 * FUN_10b49be68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f770652;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_110ced5a0;
  func_0x00010b49bec8(puVar1 + 0x21);
  func_0x00010b49bec8(puVar1 + 0x20);
  func_0x000107c30004(puVar1 + 4);
  FUN_10b49be1c(puVar1 + 1);
  return puVar1;
}



/* Entry: 10b49be7c; end: 10b49bef3;  */

undefined8 * FUN_10b49be7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ced5a0;
  func_0x00010b49bec8(param_1 + 0x21);
  func_0x00010b49bec8(param_1 + 0x20);
  func_0x000107c30004(param_1 + 4);
  FUN_10b49be1c(param_1 + 1);
  return param_1;
}



/* Entry: 10b49bef4; end: 10b49bfa3;  */

long FUN_10b49bef4(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10b49bfa4; end: 10b49bfcb;  */

void FUN_10b49bfa4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  FUN_10b49bfcc();
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x58) = param_3[1];
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 10b49bfcc; end: 10b49bfd7;  */

undefined8 * FUN_10b49bfcc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110cfaae8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b519898(param_1 + 2,0,param_2 + 0x10);
  FUN_10b519898(param_1 + 5,0,param_2 + 0x28);
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x48);
  param_1[8] = uVar1;
  return param_1;
}



/* Entry: 10b49bfd8; end: 10b49c12f;  */

void FUN_10b49bfd8(undefined1 *param_1,double param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7)

{
  ulong uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  byte bStack_41;
  
  if ((*param_7 == param_7[1]) || (uVar1 = param_3, FUN_10b49c130(), uVar1 >> 0x20 == 0)) {
    *param_1 = 0;
    param_1[0x20] = 0;
  }
  else {
    FUN_10b4b33b0(auStack_58,param_6);
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
    }
    if ((uStack_50 == 0) ||
       (FUN_10b49d87c(*(undefined8 *)(param_3 + 0x50),auStack_58,0),
       param_2 < *(double *)(param_3 + 0x40))) {
      *param_1 = 0;
      param_1[0x20] = 0;
    }
    else {
      FUN_10b49c1b4(&lStack_70,param_3,param_7);
      if (lStack_70 == lStack_68) {
        *param_1 = 0;
        param_1[0x20] = 0;
      }
      else {
        func_0x000107c2795c(&uStack_b0,&lStack_70);
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        uStack_80 = uStack_a0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b0 = 0;
        uStack_78 = (undefined4)uVar1;
        func_0x0001052b902c(param_1,&uStack_90);
        func_0x000107c278a8(&uStack_90);
        func_0x000107c278a8(&uStack_b0);
      }
      func_0x000107c278a8(&lStack_70);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  }
  return;
}



/* Entry: 10b49c130; end: 10b49c1b3;  */

ulong FUN_10b49c130(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (((param_3 >> 0x20 & 1) == 0) || (FUN_10b49c4bc(param_3,param_1 + 0x28), (param_3 & 1) == 0)) {
    uVar3 = param_2;
    FUN_10b49c4bc(param_2,param_1 + 0x10);
    uVar4 = 3;
    if (99 < (int)param_2 - 400U) {
      uVar4 = 1;
    }
    uVar1 = 2;
    if (99 < (int)param_2 - 500U) {
      uVar1 = uVar4;
    }
    bVar2 = (int)uVar3 != 0;
    uVar4 = 0;
    if (bVar2) {
      uVar4 = 0x100000000;
    }
    uVar5 = 0;
    if (bVar2) {
      uVar5 = uVar1;
    }
  }
  else {
    uVar4 = 0x100000000;
    uVar5 = 1;
  }
  return uVar5 | uVar4;
}



/* Entry: 10b49c1b4; end: 10b49c4bb;  */

void FUN_10b49c1b4(undefined8 *param_1,double param_2,long param_3,long *param_4)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  lVar1 = param_4[1];
  dVar10 = param_2;
  for (lVar5 = *param_4; uVar6 = uStack_a8, uVar4 = uStack_b0, puVar2 = PTR___ZSt7nothrow_1103469d8,
      lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
    FUN_10b4b33b0(&uStack_c8,lVar5);
    uVar4 = uStack_c0;
    if (-1 < (char)bStack_b1) {
      uVar4 = (ulong)bStack_b1;
    }
    dVar11 = dVar10;
    if ((uVar4 != 0) &&
       (FUN_10b49d87c(*(undefined8 *)(param_3 + 0x50),&uStack_c8,0), uVar4 = uStack_a8,
       dVar11 = dVar10, dVar10 < param_2)) {
      if (uStack_a8 < uStack_a0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(uStack_a8,lVar5);
        *(double *)(uVar4 + 0x18) = dVar10;
        uStack_a8 = uVar4 + 0x20;
      }
      else {
        lVar7 = uStack_a8 - uStack_b0;
        uVar4 = (lVar7 >> 5) + 1;
        if (uVar4 >> 0x3b != 0) {
          FUN_10b49c534();
LAB_10b49c440:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10b49c444);
          (*pcVar3)();
        }
        uVar6 = (long)(uStack_a0 - uStack_b0) >> 4;
        if (uVar6 <= uVar4) {
          uVar6 = uVar4;
        }
        if (0x7fffffffffffffdf < uStack_a0 - uStack_b0) {
          uVar6 = 0x7ffffffffffffff;
        }
        puStack_78 = &uStack_a0;
        if (uVar6 == 0) {
          uVar4 = 0;
        }
        else {
          if (uVar6 >> 0x3b != 0) {
            func_0x000104bd35f4();
            goto LAB_10b49c440;
          }
          uVar4 = uVar6 << 5;
          __Znwm();
        }
        lVar7 = uVar4 + lVar7;
        uVar6 = uVar4 + uVar6 * 0x20;
        uStack_98 = uVar4;
        uStack_90 = lVar7;
        uStack_88 = lVar7;
        uStack_80 = uVar6;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar7,lVar5);
        uVar4 = uStack_b0;
        *(double *)(lVar7 + 0x18) = dVar10;
        uVar9 = lVar7 - (uStack_a8 - uStack_b0);
        _memcpy(uVar9,uStack_b0);
        uStack_98 = uVar4;
        uStack_88 = uVar4;
        uStack_80 = uStack_a0;
        uStack_90 = uVar4;
        uStack_b0 = uVar9;
        uStack_a8 = lVar7 + 0x20U;
        uStack_a0 = uVar6;
        FUN_10b49c548(&uStack_98);
        uStack_a8 = lVar7 + 0x20U;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c8);
    dVar10 = dVar11;
  }
  uVar8 = (long)(uStack_a8 - uStack_b0) >> 5;
  uStack_98 = 0;
  uStack_90 = 0;
  uVar9 = uVar8;
  if ((long)uVar8 < 1) {
    uVar9 = 0;
  }
  else {
    for (; uVar9 != 0; uVar9 = uVar9 >> 1) {
      lVar5 = uVar9 << 5;
      __ZnwmRKSt9nothrow_t(lVar5,puVar2);
      if (lVar5 != 0) goto LAB_10b49c380;
    }
    lVar5 = 0;
LAB_10b49c380:
    uStack_c8 = 0;
    uStack_c0 = uVar9;
    FUN_10b49c868(&uStack_98,lVar5);
    uStack_90 = uVar9;
    FUN_10b49c880(&uStack_c8);
  }
  FUN_10b49c5d8(uVar4,uVar6,uVar8,uStack_98,uVar9);
  FUN_10b49c880(&uStack_98);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c31930(param_1,(long)(uStack_a8 - uStack_b0) >> 5);
  uVar6 = uStack_a8;
  for (uVar4 = uStack_b0; uVar4 != uVar6; uVar4 = uVar4 + 0x20) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_98,uVar4);
    func_0x000107c27940(param_1,&uStack_98);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_98);
  }
  func_0x00010b49c590(&uStack_b0);
  return;
}



/* Entry: 10b49c4bc; end: 10b49c533;  */

bool FUN_10b49c4bc(int param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar1 = (ulong *)(*param_2 + 7);
  }
  for (lVar2 = (long)(int)param_2[1] << 3; lVar2 != 0; lVar2 = lVar2 + -8) {
    uVar3 = *puVar1;
    if (*(int *)(uVar3 + 0x1c) == 2) {
      if ((*(int *)(*(long *)(uVar3 + 0x10) + 0x10) <= param_1) &&
         (param_1 <= *(int *)(*(long *)(uVar3 + 0x10) + 0x14))) break;
    }
    else if ((*(int *)(uVar3 + 0x1c) == 1) && (*(int *)(uVar3 + 0x10) == param_1)) break;
    puVar1 = puVar1 + 1;
  }
  return lVar2 != 0;
}



/* Entry: 10b49c534; end: 10b49c547;  */

long * FUN_10b49c534(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = plVar1[1];
  while (lVar2 != plVar1[2]) {
    plVar1[2] = plVar1[2] + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10b49c548; end: 10b49c5d7;  */

long * FUN_10b49c548(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b49c5d8; end: 10b49c867;  */

void FUN_10b49c5d8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long extraout_x8_01;
  undefined8 uVar4;
  long lVar5;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined8 *puVar6;
  long lVar7;
  long extraout_x10;
  long lVar8;
  long extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  undefined8 *puVar9;
  undefined8 *extraout_x12;
  undefined8 *extraout_x12_00;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  
  if (param_3 < (undefined8 *)0x2) {
    return;
  }
  if (param_3 == (undefined8 *)0x2) {
    if ((double)param_1[3] <= (double)param_2[-1]) {
      return;
    }
    uVar2 = param_1[2];
    uVar17 = param_1[1];
    uVar15 = *param_1;
    uVar4 = param_2[-2];
    uVar18 = param_2[-4];
    param_1[1] = param_2[-3];
    *param_1 = uVar18;
    param_1[2] = uVar4;
    param_2[-3] = uVar17;
    param_2[-4] = uVar15;
    param_2[-2] = uVar2;
    uVar2 = param_1[3];
    param_1[3] = param_2[-1];
    param_2[-1] = uVar2;
    return;
  }
  if ((long)param_3 < 1) {
    if (param_1 == param_2) {
      return;
    }
    lVar3 = 0;
    puVar1 = param_1;
    do {
      puVar12 = puVar1 + 4;
      if (puVar12 == param_2) {
        return;
      }
      dVar19 = (double)puVar1[7];
      if (dVar19 < (double)puVar1[3]) {
        ppuStack_68 = (undefined8 **)puVar1[5];
        puStack_70 = (undefined8 *)*puVar12;
        puVar1[5] = 0;
        puVar1[6] = 0;
        *puVar12 = 0;
        lVar13 = lVar3;
        do {
          lVar5 = lVar13;
          func_0x00010b49d0cc((long)param_1 + lVar5 + 0x20);
          puVar1 = param_1;
          if (lVar5 == 0) goto LAB_10b49c768;
          lVar13 = lVar5 + -0x20;
        } while (dVar19 < *(double *)((long)param_1 + lVar5 + -8));
        puVar1 = (undefined8 *)((long)param_1 + lVar5);
LAB_10b49c768:
        FUN_10b49d008(puVar1,&puStack_70);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_70);
      }
      lVar3 = lVar3 + 0x20;
      puVar1 = puVar12;
    } while( true );
  }
  puVar12 = (undefined8 *)((ulong)param_3 >> 1);
  puVar1 = param_1 + (long)puVar12 * 4;
  if (param_5 < (long)param_3) {
    func_0x00010b49d0d4(param_1,puVar1,puVar12);
    func_0x00010b49d0d4(puVar1,param_2,(long)param_3 - (long)puVar12);
    lVar3 = (long)param_3 - (long)puVar12;
    puVar11 = param_4;
    while( true ) {
      if (lVar3 == 0) {
        return;
      }
      puStack_90 = puVar11;
      if (lVar3 <= param_5 || (long)puVar12 <= param_5) break;
      lVar13 = 0;
      lVar5 = -(long)puVar12;
      while( true ) {
        if (lVar5 == 0) {
          return;
        }
        puVar11 = (undefined8 *)((long)param_1 + lVar13);
        dVar19 = (double)puVar11[3];
        if ((double)puVar1[3] < dVar19) break;
        lVar13 = lVar13 + 0x20;
        lVar5 = lVar5 + 1;
      }
      puStack_98 = param_2;
      if (-lVar5 < lVar3) {
        lVar8 = lVar3 / 2;
        puVar14 = puVar1 + lVar8 * 4;
        lVar7 = (long)puVar1 + (-lVar13 - (long)param_1) >> 5;
        dVar16 = (double)puVar14[3];
        while (lVar7 != 0) {
          func_0x00010b49d0f4();
          lVar3 = extraout_x8;
          lVar5 = extraout_x9;
          lVar7 = extraout_x11;
          if (dVar19 <= dVar16) {
            puVar11 = extraout_x12;
            lVar7 = extraout_x10;
          }
        }
        puVar12 = (undefined8 *)((long)puVar11 + (-lVar13 - (long)param_1) >> 5);
      }
      else {
        if (lVar5 == -1) {
          param_1 = (undefined8 *)((long)param_1 + lVar13);
          uVar17 = param_1[1];
          uVar4 = *param_1;
          uVar2 = param_1[2];
          uVar18 = puVar1[1];
          uVar15 = *puVar1;
          param_1[2] = puVar1[2];
          param_1[1] = uVar18;
          *param_1 = uVar15;
          puVar1[2] = uVar2;
          puVar1[1] = uVar17;
          *puVar1 = uVar4;
          uVar2 = param_1[3];
          param_1[3] = puVar1[3];
          puVar1[3] = uVar2;
          return;
        }
        puVar12 = (undefined8 *)(-lVar5 / 2);
        puVar11 = (undefined8 *)((long)param_1 + lVar13 + (long)puVar12 * 0x20);
        lVar8 = (long)param_2 - (long)puVar1 >> 5;
        dVar16 = (double)puVar11[3];
        puVar10 = puVar1;
        while (puVar14 = puVar10, lVar8 != 0) {
          func_0x00010b49d0f4();
          lVar3 = extraout_x8_00;
          lVar5 = extraout_x9_00;
          puVar10 = extraout_x12_00;
          lVar8 = extraout_x10_00;
          if (dVar16 <= dVar19) {
            puVar10 = puVar14;
            lVar8 = extraout_x11_00;
          }
        }
        lVar8 = (long)puVar14 - (long)puVar1 >> 5;
      }
      param_2 = puVar14;
      if ((puVar11 != puVar1) &&
         (puVar6 = puVar1, param_2 = puVar11, puVar10 = puVar11, puVar1 != puVar14)) {
        while( true ) {
          puVar9 = puVar6;
          param_2 = puVar10 + 4;
          plStack_78 = (long *)puVar10[1];
          puStack_80 = (undefined8 *)*puVar10;
          puStack_70 = (undefined8 *)puVar10[2];
          uVar4 = puVar1[1];
          uVar2 = *puVar1;
          puVar10[2] = puVar1[2];
          puVar10[1] = uVar4;
          *puVar10 = uVar2;
          puVar1[2] = puStack_70;
          puVar1[1] = plStack_78;
          *puVar1 = puStack_80;
          uVar2 = puVar10[3];
          puVar10[3] = puVar1[3];
          puVar1[3] = uVar2;
          puVar1 = puVar1 + 4;
          if (puVar1 == puVar14) break;
          puVar6 = puVar1;
          puVar10 = param_2;
          if (param_2 != puVar9) {
            puVar6 = puVar9;
          }
        }
        puVar1 = param_2;
        puVar10 = puVar9;
        if (param_2 != puVar9) {
          do {
            while( true ) {
              puVar6 = puVar10;
              plStack_78 = (long *)puVar1[1];
              puStack_80 = (undefined8 *)*puVar1;
              puStack_70 = (undefined8 *)puVar1[2];
              uVar4 = puVar9[1];
              uVar2 = *puVar9;
              puVar1[2] = puVar9[2];
              puVar1[1] = uVar4;
              *puVar1 = uVar2;
              puVar9[2] = puStack_70;
              puVar9[1] = plStack_78;
              *puVar9 = puStack_80;
              uVar2 = puVar1[3];
              puVar1[3] = puVar9[3];
              puVar9[3] = uVar2;
              puVar1 = puVar1 + 4;
              puVar9 = puVar9 + 4;
              if (puVar9 == puVar14) break;
              puVar10 = puVar9;
              if (puVar1 != puVar6) {
                puVar10 = puVar6;
              }
            }
            puVar9 = puVar6;
            puVar10 = puVar6;
          } while (puVar1 != puVar6);
        }
      }
      if ((long)puVar12 + lVar8 < (lVar3 - ((long)puVar12 + lVar8)) - lVar5) {
        puVar12 = (undefined8 *)-((long)puVar12 + lVar5);
        FUN_10b49cb9c();
        lVar3 = lVar3 - lVar8;
        param_1 = param_2;
        puVar1 = puVar14;
        param_2 = puStack_98;
        puVar11 = puStack_90;
      }
      else {
        FUN_10b49cb9c(param_2,puVar14,puStack_98,-((long)puVar12 + lVar5),lVar3 - lVar8,puStack_90);
        param_1 = (undefined8 *)((long)param_1 + lVar13);
        lVar3 = lVar8;
        puVar1 = puVar11;
        puVar11 = puStack_90;
      }
    }
    plStack_78 = &lStack_88;
    lStack_88 = 0;
    puStack_80 = puVar11;
    if (lVar3 < (long)puVar12) {
      lVar3 = 0;
      lVar13 = 1;
      while( true ) {
        lVar5 = lVar13;
        puVar12 = (undefined8 *)((long)puVar1 + lVar3);
        puVar10 = (undefined8 *)((long)puVar11 + lVar3);
        if (puVar12 == param_2) break;
        uVar4 = puVar12[1];
        uVar2 = *puVar12;
        puVar10[2] = puVar12[2];
        puVar10[1] = uVar4;
        *puVar10 = uVar2;
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = 0;
        puVar10[3] = puVar12[3];
        lVar3 = lVar3 + 0x20;
        lVar13 = lVar5 + 1;
        lStack_88 = lVar5;
      }
      while (param_2 = param_2 + -4, puVar10 != puVar11) {
        if (puVar1 == param_1) goto LAB_10b49cf90;
        puVar6 = puVar10 + -4;
        puVar14 = puVar1 + -4;
        puVar12 = puVar1 + -4;
        if ((double)puVar1[-1] <= (double)puVar10[-1]) {
          puVar10 = puVar6;
          puVar14 = puVar1;
          puVar12 = puVar6;
        }
        puVar1 = puVar14;
        FUN_10b49d008(param_2,puVar12);
      }
    }
    else {
      lVar3 = 1;
      puVar12 = param_1;
      puVar10 = puVar11;
      while (puVar12 != puVar1) {
        func_0x00010b49d0a8(lVar3);
        puVar10 = puVar10 + 4;
        lVar3 = extraout_x8_01 + 1;
        lStack_88 = extraout_x8_01;
        puVar12 = (undefined8 *)(extraout_x9_01 + 0x20);
      }
      while (puVar10 != puVar11) {
        if (puVar1 == param_2) goto LAB_10b49cf34;
        if ((double)puVar11[3] <= (double)puVar1[3]) {
          func_0x00010b49d0cc(param_1);
          puVar11 = puVar11 + 4;
        }
        else {
          FUN_10b49d008(param_1,puVar1);
          puVar1 = puVar1 + 4;
        }
        param_1 = param_1 + 4;
      }
    }
    goto LAB_10b49cf98;
  }
  puStack_98 = (undefined8 *)0x0;
  ppuStack_68 = &puStack_98;
  puStack_70 = param_4;
  FUN_10b49c8a4(param_1,puVar1,puVar12,param_4);
  puVar11 = param_4 + (long)puVar12 * 4;
  puStack_98 = puVar12;
  FUN_10b49c8a4(puVar1,param_2,(long)param_3 - (long)puVar12,puVar11);
  puVar12 = param_4 + (long)param_3 * 4;
  puVar1 = puVar11;
  puStack_98 = param_3;
  while (param_4 != puVar11) {
    if (puVar1 == puVar12) goto LAB_10b49c840;
    if ((double)param_4[3] <= (double)puVar1[3]) {
      func_0x00010b49d0cc(param_1);
      param_4 = param_4 + 4;
    }
    else {
      FUN_10b49d008(param_1,puVar1);
      puVar1 = puVar1 + 4;
    }
    param_1 = param_1 + 4;
  }
  for (; puVar1 != puVar12; puVar1 = puVar1 + 4) {
    FUN_10b49d008(param_1,puVar1);
    param_1 = param_1 + 4;
  }
LAB_10b49c848:
  FUN_10b49d034(&puStack_70);
  return;
LAB_10b49cf34:
  for (; puVar10 != puVar11; puVar11 = puVar11 + 4) {
    func_0x00010b49d0cc(param_1);
    param_1 = param_1 + 4;
  }
  goto LAB_10b49cf98;
LAB_10b49c840:
  for (; param_4 != puVar11; param_4 = param_4 + 4) {
    func_0x00010b49d0cc(param_1);
    param_1 = param_1 + 4;
  }
  goto LAB_10b49c848;
LAB_10b49cf90:
  while (puVar10 != puVar11) {
    puVar10 = puVar10 + -4;
    FUN_10b49d008(param_2,puVar10);
    param_2 = param_2 + -4;
  }
LAB_10b49cf98:
  FUN_10b49d034(&puStack_80);
  return;
}



/* Entry: 10b49c868; end: 10b49c87f;  */

void FUN_10b49c868(long *param_1,long param_2)

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



/* Entry: 10b49c880; end: 10b49c8a3;  */

undefined8 FUN_10b49c880(undefined8 param_1)

{
  FUN_10b49c868(param_1,0);
  return param_1;
}



/* Entry: 10b49c8a4; end: 10b49cb9b;  */

void FUN_10b49c8a4(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  double *pdVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  double *pdVar7;
  double *pdVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puStack_68;
  long *plStack_60;
  long lStack_58;
  
  if (param_3 == 0) {
    return;
  }
  if (param_3 == 2) {
    plStack_60 = &lStack_58;
    pdVar8 = (double *)(param_2 + -1);
    pdVar7 = (double *)(param_1 + 3);
    bVar4 = *pdVar7 <= *pdVar8;
    puVar5 = param_1;
    puVar3 = param_2 + -4;
    if (bVar4) {
      puVar5 = param_2 + -4;
      puVar3 = param_1;
    }
    uVar13 = puVar3[1];
    uVar6 = *puVar3;
    param_4[2] = puVar3[2];
    param_4[1] = uVar13;
    *param_4 = uVar6;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    pdVar2 = pdVar8;
    if (bVar4) {
      pdVar2 = pdVar7;
    }
    param_4[3] = *pdVar2;
    uVar13 = puVar5[1];
    uVar6 = *puVar5;
    param_4[6] = puVar5[2];
    param_4[5] = uVar13;
    param_4[4] = uVar6;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if (bVar4) {
      pdVar7 = pdVar8;
    }
    lStack_58 = 1;
    param_4[7] = *pdVar7;
    lVar12 = lStack_58;
  }
  else {
    if (param_3 == 1) {
      uVar13 = param_1[1];
      uVar6 = *param_1;
      param_4[2] = param_1[2];
      param_4[1] = uVar13;
      *param_4 = uVar6;
      FUN_10b49d08c();
      return;
    }
    if ((long)param_3 < 9) {
      if (param_1 == param_2) {
        return;
      }
      lVar10 = 0;
      plStack_60 = &lStack_58;
      uVar6 = param_1[2];
      uVar13 = *param_1;
      param_4[1] = param_1[1];
      *param_4 = uVar13;
      param_4[2] = uVar6;
      puStack_68 = param_4;
      FUN_10b49d08c();
      lStack_58 = 1;
      puVar5 = param_4;
      while (puVar3 = param_1 + 4, lVar12 = lStack_58, puVar3 != param_2) {
        puVar9 = puVar5 + 4;
        if ((double)puVar5[3] <= (double)param_1[7]) {
          uVar13 = param_1[5];
          uVar6 = *puVar3;
          puVar5[6] = param_1[6];
          puVar5[5] = uVar13;
          *puVar9 = uVar6;
          param_1[5] = 0;
          param_1[6] = 0;
          *puVar3 = 0;
          func_0x00010b49d0e0(param_1[7]);
        }
        else {
          puVar5[5] = puVar5[1];
          *puVar9 = *puVar5;
          puVar5[6] = puVar5[2];
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          func_0x00010b49d0e0();
          lVar12 = lVar10;
          while (puVar5 = param_4, lVar12 != 0) {
            lVar1 = (long)param_4 + lVar12;
            if (*(double *)(lVar1 + -8) <= (double)param_1[7]) {
              puVar5 = (undefined8 *)((long)param_4 + lVar12);
              break;
            }
            lVar12 = lVar12 + -0x20;
            FUN_10b49d008(lVar1,lVar12 + (long)param_4);
          }
          FUN_10b49d008(puVar5,puVar3);
        }
        lVar10 = lVar10 + 0x20;
        puVar5 = puVar9;
        param_1 = puVar3;
      }
    }
    else {
      uVar11 = param_3 >> 1;
      puVar3 = param_1 + uVar11 * 4;
      FUN_10b49c5d8(param_1,puVar3,uVar11,param_4,uVar11);
      lVar12 = param_3 - (param_3 >> 1);
      FUN_10b49c5d8(puVar3,param_2,lVar12,param_4 + uVar11 * 4,lVar12);
      plStack_60 = &lStack_58;
      lStack_58 = 0;
      lVar12 = 1;
      puVar5 = puVar3;
      while (lVar10 = lVar12, param_1 != puVar3) {
        if (puVar5 == param_2) {
          lVar12 = lVar10 + -1;
          for (; param_1 != puVar3; param_1 = param_1 + 4) {
            uVar13 = param_1[1];
            uVar6 = *param_1;
            param_4[2] = param_1[2];
            param_4[1] = uVar13;
            *param_4 = uVar6;
            FUN_10b49d08c();
            param_4 = param_4 + 4;
            lVar12 = extraout_x8_00 + 1;
          }
          goto LAB_10b49cb74;
        }
        pdVar8 = (double *)(puVar5 + 3);
        pdVar7 = (double *)(param_1 + 3);
        if (*pdVar7 <= *pdVar8) {
          uVar13 = param_1[1];
          uVar6 = *param_1;
          param_4[2] = param_1[2];
          param_4[1] = uVar13;
          *param_4 = uVar6;
          param_1[1] = 0;
          param_1[2] = 0;
          puVar9 = param_1 + 4;
          *param_1 = 0;
        }
        else {
          uVar13 = puVar5[1];
          uVar6 = *puVar5;
          param_4[2] = puVar5[2];
          param_4[1] = uVar13;
          *param_4 = uVar6;
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          puVar5 = puVar5 + 4;
          pdVar7 = pdVar8;
          puVar9 = param_1;
        }
        param_4[3] = *pdVar7;
        param_4 = param_4 + 4;
        lVar12 = lVar10 + 1;
        param_1 = puVar9;
        lStack_58 = lVar10;
      }
      while (lVar12 = lStack_58, puVar5 != param_2) {
        func_0x00010b49d0a8(lVar10);
        lVar10 = extraout_x8 + 1;
        lStack_58 = extraout_x8;
        puVar5 = (undefined8 *)(extraout_x9 + 0x20);
      }
    }
  }
LAB_10b49cb74:
  lStack_58 = lVar12;
  puStack_68 = (undefined8 *)0x0;
  FUN_10b49d034(&puStack_68);
  return;
}



/* Entry: 10b49cb9c; end: 10b49d007;  */

void FUN_10b49cb9c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  long param_5,undefined8 *param_6,long param_7)

{
  undefined8 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *puVar3;
  long extraout_x9_01;
  long lVar4;
  long extraout_x10;
  long lVar5;
  long extraout_x10_00;
  undefined8 *puVar6;
  long extraout_x11;
  long extraout_x11_00;
  undefined8 *puVar7;
  undefined8 *extraout_x12;
  undefined8 *extraout_x12_00;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  long lStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  while( true ) {
    if (param_5 == 0) {
      return;
    }
    if (param_5 <= param_7 || param_4 <= param_7) break;
    lVar10 = 0;
    lVar2 = -param_4;
    while( true ) {
      if (lVar2 == 0) {
        return;
      }
      puVar3 = (undefined8 *)((long)param_1 + lVar10);
      dVar18 = (double)puVar3[3];
      if ((double)param_2[3] < dVar18) break;
      lVar10 = lVar10 + 0x20;
      lVar2 = lVar2 + 1;
    }
    if (-lVar2 < param_5) {
      lVar5 = param_5 / 2;
      puVar11 = param_2 + lVar5 * 4;
      lVar4 = (long)param_2 + (-lVar10 - (long)param_1) >> 5;
      dVar12 = (double)puVar11[3];
      while (lVar4 != 0) {
        func_0x00010b49d0f4();
        param_5 = extraout_x8;
        lVar2 = extraout_x9;
        lVar4 = extraout_x11;
        if (dVar18 <= dVar12) {
          puVar3 = extraout_x12;
          lVar4 = extraout_x10;
        }
      }
      param_4 = (long)puVar3 + (-lVar10 - (long)param_1) >> 5;
    }
    else {
      if (lVar2 == -1) {
        param_1 = (undefined8 *)((long)param_1 + lVar10);
        uVar16 = param_1[1];
        uVar15 = *param_1;
        uVar13 = param_1[2];
        uVar17 = param_2[1];
        uVar14 = *param_2;
        param_1[2] = param_2[2];
        param_1[1] = uVar17;
        *param_1 = uVar14;
        param_2[2] = uVar13;
        param_2[1] = uVar16;
        *param_2 = uVar15;
        uVar13 = param_1[3];
        param_1[3] = param_2[3];
        param_2[3] = uVar13;
        return;
      }
      param_4 = -lVar2 / 2;
      puVar3 = (undefined8 *)((long)param_1 + lVar10 + param_4 * 0x20);
      lVar5 = (long)param_3 - (long)param_2 >> 5;
      dVar12 = (double)puVar3[3];
      puVar8 = param_2;
      while (puVar11 = puVar8, lVar5 != 0) {
        func_0x00010b49d0f4();
        param_5 = extraout_x8_00;
        lVar2 = extraout_x9_00;
        puVar8 = extraout_x12_00;
        lVar5 = extraout_x10_00;
        if (dVar12 <= dVar18) {
          puVar8 = puVar11;
          lVar5 = extraout_x11_00;
        }
      }
      lVar5 = (long)puVar11 - (long)param_2 >> 5;
    }
    puVar8 = puVar11;
    if ((puVar3 != param_2) &&
       (puVar1 = param_2, puVar8 = puVar3, puVar6 = puVar3, param_2 != puVar11)) {
      while( true ) {
        puVar7 = puVar1;
        puVar8 = puVar6 + 4;
        plStack_78 = (long *)puVar6[1];
        puStack_80 = (undefined8 *)*puVar6;
        uStack_70 = puVar6[2];
        uVar15 = param_2[1];
        uVar13 = *param_2;
        puVar6[2] = param_2[2];
        puVar6[1] = uVar15;
        *puVar6 = uVar13;
        param_2[2] = uStack_70;
        param_2[1] = plStack_78;
        *param_2 = puStack_80;
        uVar13 = puVar6[3];
        puVar6[3] = param_2[3];
        param_2[3] = uVar13;
        param_2 = param_2 + 4;
        if (param_2 == puVar11) break;
        puVar1 = param_2;
        puVar6 = puVar8;
        if (puVar8 != puVar7) {
          puVar1 = puVar7;
        }
      }
      puVar6 = puVar8;
      puVar1 = puVar7;
      if (puVar8 != puVar7) {
        do {
          while( true ) {
            puVar9 = puVar1;
            plStack_78 = (long *)puVar6[1];
            puStack_80 = (undefined8 *)*puVar6;
            uStack_70 = puVar6[2];
            uVar15 = puVar7[1];
            uVar13 = *puVar7;
            puVar6[2] = puVar7[2];
            puVar6[1] = uVar15;
            *puVar6 = uVar13;
            puVar7[2] = uStack_70;
            puVar7[1] = plStack_78;
            *puVar7 = puStack_80;
            uVar13 = puVar6[3];
            puVar6[3] = puVar7[3];
            puVar7[3] = uVar13;
            puVar6 = puVar6 + 4;
            puVar7 = puVar7 + 4;
            if (puVar7 == puVar11) break;
            puVar1 = puVar7;
            if (puVar6 != puVar9) {
              puVar1 = puVar9;
            }
          }
          puVar7 = puVar9;
          puVar1 = puVar9;
        } while (puVar6 != puVar9);
      }
    }
    if (param_4 + lVar5 < (param_5 - (param_4 + lVar5)) - lVar2) {
      param_4 = -(param_4 + lVar2);
      FUN_10b49cb9c();
      param_5 = param_5 - lVar5;
      param_1 = puVar8;
      param_2 = puVar11;
    }
    else {
      FUN_10b49cb9c(puVar8,puVar11,param_3,-(param_4 + lVar2),param_5 - lVar5,param_6);
      param_1 = (undefined8 *)((long)param_1 + lVar10);
      param_5 = lVar5;
      param_2 = puVar3;
      param_3 = puVar8;
    }
  }
  plStack_78 = &lStack_88;
  lStack_88 = 0;
  puStack_80 = param_6;
  if (param_5 < param_4) {
    lVar10 = 0;
    lVar2 = 1;
    while( true ) {
      lVar5 = lVar2;
      puVar3 = (undefined8 *)((long)param_2 + lVar10);
      puVar8 = (undefined8 *)((long)param_6 + lVar10);
      if (puVar3 == param_3) break;
      uVar15 = puVar3[1];
      uVar13 = *puVar3;
      puVar8[2] = puVar3[2];
      puVar8[1] = uVar15;
      *puVar8 = uVar13;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      puVar8[3] = puVar3[3];
      lVar10 = lVar10 + 0x20;
      lVar2 = lVar5 + 1;
      lStack_88 = lVar5;
    }
    while (param_3 = param_3 + -4, puVar8 != param_6) {
      if (param_2 == param_1) goto LAB_10b49cf90;
      puVar6 = puVar8 + -4;
      puVar11 = param_2 + -4;
      puVar3 = param_2 + -4;
      if ((double)param_2[-1] <= (double)puVar8[-1]) {
        puVar8 = puVar6;
        puVar11 = param_2;
        puVar3 = puVar6;
      }
      param_2 = puVar11;
      FUN_10b49d008(param_3,puVar3);
    }
  }
  else {
    lVar10 = 1;
    puVar3 = param_1;
    puVar8 = param_6;
    while (puVar3 != param_2) {
      func_0x00010b49d0a8(lVar10);
      puVar8 = puVar8 + 4;
      lVar10 = extraout_x8_01 + 1;
      lStack_88 = extraout_x8_01;
      puVar3 = (undefined8 *)(extraout_x9_01 + 0x20);
    }
    while (puVar8 != param_6) {
      if (param_2 == param_3) goto LAB_10b49cf34;
      if ((double)param_6[3] <= (double)param_2[3]) {
        func_0x00010b49d0cc(param_1);
        param_6 = param_6 + 4;
      }
      else {
        FUN_10b49d008(param_1,param_2);
        param_2 = param_2 + 4;
      }
      param_1 = param_1 + 4;
    }
  }
LAB_10b49cf98:
  FUN_10b49d034(&puStack_80);
  return;
LAB_10b49cf34:
  for (; puVar8 != param_6; param_6 = param_6 + 4) {
    func_0x00010b49d0cc(param_1);
    param_1 = param_1 + 4;
  }
  goto LAB_10b49cf98;
LAB_10b49cf90:
  while (puVar8 != param_6) {
    puVar8 = puVar8 + -4;
    FUN_10b49d008(param_3,puVar8);
    param_3 = param_3 + -4;
  }
  goto LAB_10b49cf98;
}



/* Entry: 10b49d008; end: 10b49d033;  */

long FUN_10b49d008(long param_1,long param_2)

{
  func_0x000107c27b9c();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



/* Entry: 10b49d034; end: 10b49d08b;  */

long * FUN_10b49d034(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    puVar3 = (ulong *)param_1[1];
    for (uVar2 = 0; uVar2 < *puVar3; uVar2 = uVar2 + 1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1);
      lVar1 = lVar1 + 0x20;
    }
  }
  return param_1;
}



/* Entry: 10b49d08c; end: 10b49d107;  */

void FUN_10b49d08c(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  
  unaff_x21[1] = 0;
  unaff_x21[2] = 0;
  *unaff_x21 = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x21[3];
  return;
}



/* Entry: 10b49d108; end: 10b49d233;  */

char FUN_10b49d108(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 auStack_90 [32];
  char cStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((*(byte *)(param_3 + 0x208) & 1) == 0) {
    cVar3 = *(char *)(param_3 + 0x178);
    uVar2 = *(undefined4 *)(param_3 + 0xf8);
    bVar4 = *(byte *)(param_4 + 0x30);
    uVar6 = (ulong)*(uint *)(param_4 + 0x20);
    lVar1 = 0xc0;
    if (*(char *)(*param_2 + 0x120) == '\0') {
      lVar1 = 0x60;
    }
    lVar1 = *param_2 + lVar1;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    plVar5 = *(long **)(lVar1 + 0x50);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x10))(auStack_90);
      func_0x000107c2797c(&uStack_68,auStack_90);
      func_0x000107c278a8(auStack_90);
    }
    if (cVar3 == '\0') {
      uVar2 = 0;
    }
    if (bVar4 == 0) {
      uVar6 = 0;
    }
    FUN_10b49bfd8(auStack_90,*(undefined8 *)(param_1 + 8),uVar2,uVar6 | (ulong)bVar4 << 0x20,
                  lVar1 + 8,&uStack_68);
    if (cStack_70 == '\x01') {
      FUN_10b1a7394(param_3 + 0x1e8,auStack_90);
    }
    func_0x000107c27f14(auStack_90);
    func_0x000107c278a8(&uStack_68);
  }
  else {
    cStack_70 = '\0';
  }
  return cStack_70;
}



/* Entry: 10b49d234; end: 10b49d23b;  */

void FUN_10b49d234(void)

{
  return;
}



/* Entry: 10b49d23c; end: 10b49d24f;  */

void FUN_10b49d23c(void)

{
  FUN_10b49d250();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b49d250; end: 10b49d27f;  */

undefined8 * FUN_10b49d250(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ced610;
  FUN_10b2d71f0(param_1 + 1);
  return param_1;
}



/* Entry: 10b49d280; end: 10b49d37f;  */

void FUN_10b49d280(undefined8 *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x00010b49e80c();
  *param_1 = extraout_x8;
  param_1[1] = extraout_x9;
  FUN_10b49d380(param_1 + 2);
  *(undefined8 *)(unaff_x19 + 0x48) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined4 *)(unaff_x19 + 0xa8) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  puStack_50 = &UNK_10f770659;
  if (param_4 != 0) {
    puStack_50 = param_3;
  }
  lStack_48 = 0x15;
  if (param_4 != 0) {
    lStack_48 = param_4;
  }
  FUN_10b49d38c(&uStack_58,&puStack_50);
  uVar1 = uStack_58;
  uStack_58 = 0;
  FUN_10b49e1fc((undefined8 *)(unaff_x19 + 0xb0),uVar1);
  FUN_10b49e1d8(&uStack_58);
  if (*(char *)(unaff_x19 + 0x2c) == '\x01') {
    FUN_10b49d3d4();
  }
  return;
}



/* Entry: 10b49d380; end: 10b49d38b;  */

undefined8 FUN_10b49d380(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b51a5ac(param_1,0,param_2);
  func_0x00010b51a1c8();
  return param_1;
}



/* Entry: 10b49d38c; end: 10b49d3d3;  */

void FUN_10b49d38c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xc0;
  __Znwm();
  FUN_10b49e820();
  *param_1 = uVar1;
  return;
}



/* Entry: 10b49d3d4; end: 10b49d45f;  */

void FUN_10b49d3d4(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  
  FUN_10b49e974(&lStack_38,*(undefined8 *)(param_1 + 0xb0));
  func_0x00010b49e7ec(auStack_50);
  for (lVar1 = lStack_38; lVar1 != lStack_30; lVar1 = lVar1 + 0x30) {
    FUN_10b49d960(uStack_40,*(ulong *)(lVar1 + 0x10) & 0xfffffffffffffffc);
    FUN_10b49dbbc();
  }
  func_0x000107c2798c(auStack_50);
  FUN_10b49dd9c(&lStack_38);
  return;
}



/* Entry: 10b49d460; end: 10b49d4af;  */

void FUN_10b49d460(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long unaff_x19;
  
  func_0x00010b49e80c();
  *param_1 = extraout_x8;
  param_1[1] = extraout_x9;
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    FUN_10b49d4b0();
  }
  FUN_10b49e1d8(unaff_x19 + 0xb0);
  FUN_10b49dcb0(unaff_x19 + 0x48);
  FUN_10b51a248(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b49d4b0; end: 10b49d603;  */

void FUN_10b49d4b0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auStack_98 [16];
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_10b49d938(auStack_98,param_1 + 0x48);
  FUN_10b49dc20(&lStack_80,*(undefined8 *)(lStack_88 + 0x18));
  plVar3 = (long *)(lStack_88 + 0x10);
  while (uVar1 = uStack_78, plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    if (uStack_78 < uStack_70) {
      FUN_10b49e17c(uStack_78,plVar3 + 5);
      uStack_78 = uVar1 + 0x30;
    }
    else {
      plVar2 = &lStack_80;
      FUN_10b49e188(plVar2,(long)(uStack_78 - lStack_80) / 0x30 + 1);
      FUN_10b49dedc(auStack_68,plVar2,(long)(uStack_78 - lStack_80) / 0x30,&uStack_70);
      FUN_10b49e17c(lStack_58,plVar3 + 5);
      lStack_58 = lStack_58 + 0x30;
      FUN_10b49de5c(&lStack_80,auStack_68);
      uVar1 = uStack_78;
      func_0x00010b49e114(auStack_68);
      uStack_78 = uVar1;
    }
  }
  func_0x00010b49e7e4();
  FUN_10b49ec84(*(undefined8 *)(param_1 + 0xb0),&lStack_80);
  FUN_10b49dd9c(&lStack_80);
  return;
}



/* Entry: 10b49d604; end: 10b49d60f;  */

void FUN_10b49d604(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long unaff_x19;
  
  func_0x00010b49e80c();
  *param_1 = extraout_x8;
  param_1[1] = extraout_x9;
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    FUN_10b49d4b0();
  }
  FUN_10b49e1d8(unaff_x19 + 0xb0);
  FUN_10b49dcb0(unaff_x19 + 0x48);
  FUN_10b51a248(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b49d610; end: 10b49d623;  */

void FUN_10b49d610(void)

{
  FUN_10b49d460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b49d624; end: 10b49d62b;  */

void FUN_10b49d624(long param_1)

{
  FUN_10b49d460(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b49d62c; end: 10b49d807;  */

void FUN_10b49d62c(long param_1,long param_2,int *param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  bool bVar8;
  double dVar9;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [16];
  long lStack_38;
  
  if (*(char *)(param_1 + 0x2c) != '\x01') {
    return;
  }
  uVar7 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar7 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar7 == 0) {
    return;
  }
  if ((param_4 & 1) == 0) {
    if ((char)param_3[0x10] == '\x01') {
      if (param_3[4] == 0x3ea) {
        return;
      }
      if (param_3[4] == 0x4b0) {
        return;
      }
    }
LAB_10b49d6bc:
    bVar8 = false;
  }
  else {
    if (((char)param_3[1] == '\x01') && (piVar4 = param_3, func_0x000107886748(), 399 < *piVar4))
    goto LAB_10b49d6bc;
    bVar8 = true;
  }
  iVar1 = param_3[2];
  func_0x00010b49e7ec(auStack_48);
  FUN_10b49d808(auStack_60,param_2,iVar1);
  lVar5 = lStack_38;
  FUN_10b49d960(lStack_38,auStack_60);
  puVar6 = (ulong *)(lVar5 + 0x10);
  cVar2 = *(char *)((*puVar6 & 0xfffffffffffffffc) + 0x17);
  if (cVar2 < '\0') {
    if (*(long *)((*puVar6 & 0xfffffffffffffffc) + 8) != 0) goto LAB_10b49d724;
  }
  else if (cVar2 != '\0') goto LAB_10b49d724;
  uVar7 = *(ulong *)(lVar5 + 8);
  if ((uVar7 & 1) != 0) {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(puVar6,auStack_60,uVar7);
LAB_10b49d724:
  if ((*(char *)(param_1 + 0x2d) == '\x01') && (0 < *(int *)(lVar5 + 0x18))) {
    __ZNSt3__16chrono12system_clock3nowEv();
    if (0.1 < (double)(long)(puVar6 + *(long *)(lVar5 + 0x20) * -0x7d) / 1000000.0) {
      dVar9 = -(*(double *)(param_1 + 0x38) *
               ((double)(long)(puVar6 + *(long *)(lVar5 + 0x20) * -0x7d) / 1000000.0));
      _exp();
      *(int *)(lVar5 + 0x1c) = (int)(dVar9 * (double)*(int *)(lVar5 + 0x1c));
    }
  }
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  if (!bVar8) {
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  }
  __ZNSt3__16chrono12system_clock3nowEv();
  *(long *)(lVar5 + 0x20) = (long)puVar6 / 1000;
  iVar1 = *(int *)(param_1 + 0x34);
  if (0 < iVar1) {
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = *(int *)(lVar5 + 0x18) / iVar1;
    }
    if (*(int *)(lVar5 + 0x18) == iVar3 * iVar1) {
      FUN_10b49d994(param_1,auStack_48);
    }
  }
  func_0x00010b49e7bc();
  func_0x00010b49e7d4();
  return;
}



/* Entry: 10b49d808; end: 10b49d87b;  */

void FUN_10b49d808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c27d14(auStack_38,param_2,&UNK_10f77066f);
  __ZNSt3__19to_stringEi(auStack_50,param_3);
  func_0x00010533a9c0(param_1,auStack_38,auStack_50);
  func_0x00010b49e7bc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10b49d87c; end: 10b49d937;  */

double FUN_10b49d87c(long param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [16];
  long lStack_48;
  
  dVar1 = 0.0;
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    FUN_10b49d938(auStack_58,param_1 + 0x48);
    FUN_10b49d808(auStack_70,param_2,param_3);
    FUN_10b49e288(lStack_48,auStack_70);
    if ((lStack_48 != 0) && (*(int *)(param_1 + 0x28) <= *(int *)(lStack_48 + 0x40))) {
      dVar1 = (double)*(int *)(lStack_48 + 0x44) / (double)*(int *)(lStack_48 + 0x40);
    }
    func_0x00010b49e7bc();
    func_0x00010b49e7d4();
  }
  return dVar1;
}



/* Entry: 10b49d938; end: 10b49d95f;  */

void FUN_10b49d938(long param_1,long param_2)

{
  func_0x000107c27f4c();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10b49d960; end: 10b49d993;  */

long FUN_10b49d960(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b49e35c(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 10b49d994; end: 10b49db47;  */

void FUN_10b49d994(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x00010b49e800();
    __ZNSt3__16chrono12system_clock3nowEv();
    iVar1 = *(int *)(unaff_x20 + 0x30);
    plVar3 = *(long **)(*(long *)(unaff_x19 + 0x10) + 0x10);
    while (plVar3 != (long *)0x0) {
      if (plVar3[9] < (param_1 + (long)iVar1 * -1000000) / 1000) {
        plVar4 = *(long **)(unaff_x19 + 0x10);
        uVar6 = plVar4[1];
        uVar5 = plVar3[1];
        uVar8 = uVar6 - 1;
        if ((uVar6 & uVar8) == 0) {
          uVar5 = uVar8 & uVar5;
        }
        else if (uVar6 <= uVar5) {
          uVar10 = 0;
          if (uVar6 != 0) {
            uVar10 = uVar5 / uVar6;
          }
          uVar5 = uVar5 - uVar10 * uVar6;
        }
        plVar12 = (long *)*plVar3;
        lVar9 = *plVar4;
        plVar11 = *(long **)(lVar9 + uVar5 * 8);
        do {
          plVar7 = plVar11;
          plVar11 = (long *)*plVar7;
        } while ((long *)*plVar7 != plVar3);
        plVar11 = plVar12;
        if (plVar7 == plVar4 + 2) {
LAB_10b49da88:
          if (plVar12 == (long *)0x0) {
LAB_10b49dac0:
            *(undefined8 *)(lVar9 + uVar5 * 8) = 0;
            plVar11 = (long *)*plVar3;
            goto LAB_10b49dac8;
          }
          uVar10 = plVar12[1];
          if ((uVar6 & uVar8) == 0) {
            uVar2 = uVar10 & uVar8;
          }
          else {
            uVar2 = uVar10;
            if (uVar6 <= uVar10) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar10 / uVar6;
              }
              uVar2 = uVar10 - uVar2 * uVar6;
            }
          }
          if (uVar2 != uVar5) goto LAB_10b49dac0;
LAB_10b49dad0:
          if ((uVar6 & uVar8) == 0) {
            uVar10 = uVar10 & uVar8;
          }
          else if (uVar6 <= uVar10) {
            uVar8 = 0;
            if (uVar6 != 0) {
              uVar8 = uVar10 / uVar6;
            }
            uVar10 = uVar10 - uVar8 * uVar6;
          }
          if (uVar10 != uVar5) {
            *(long **)(lVar9 + uVar10 * 8) = plVar7;
            plVar11 = (long *)*plVar3;
          }
        }
        else {
          uVar10 = plVar7[1];
          if ((uVar6 & uVar8) == 0) {
            uVar10 = uVar10 & uVar8;
          }
          else if (uVar6 <= uVar10) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar10 / uVar6;
            }
            uVar10 = uVar10 - uVar2 * uVar6;
          }
          if (uVar10 != uVar5) goto LAB_10b49da88;
LAB_10b49dac8:
          if (plVar11 != (long *)0x0) {
            uVar10 = plVar11[1];
            goto LAB_10b49dad0;
          }
        }
        *plVar7 = (long)plVar11;
        *plVar3 = 0;
        plVar4[3] = plVar4[3] + -1;
        func_0x00010b49e7dc();
        plVar3 = plVar12;
      }
      else {
        plVar3 = (long *)*plVar3;
      }
    }
  }
  return;
}



/* Entry: 10b49db48; end: 10b49dbb3;  */

void FUN_10b49db48(long param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auStack_98 [16];
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    if (param_2 == 2) {
      lStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_10b49d938(auStack_98,param_1 + 0x48);
      FUN_10b49dc20(&lStack_80,*(undefined8 *)(lStack_88 + 0x18));
      plVar3 = (long *)(lStack_88 + 0x10);
      while (uVar1 = uStack_78, plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
        if (uStack_78 < uStack_70) {
          FUN_10b49e17c(uStack_78,plVar3 + 5);
          uStack_78 = uVar1 + 0x30;
        }
        else {
          plVar2 = &lStack_80;
          FUN_10b49e188(plVar2,(long)(uStack_78 - lStack_80) / 0x30 + 1);
          FUN_10b49dedc(auStack_68,plVar2,(long)(uStack_78 - lStack_80) / 0x30,&uStack_70);
          FUN_10b49e17c(lStack_58,plVar3 + 5);
          lStack_58 = lStack_58 + 0x30;
          FUN_10b49de5c(&lStack_80,auStack_68);
          uVar1 = uStack_78;
          func_0x00010b49e114(auStack_68);
          uStack_78 = uVar1;
        }
      }
      func_0x00010b49e7e4();
      FUN_10b49ec84(*(undefined8 *)(param_1 + 0xb0),&lStack_80);
      FUN_10b49dd9c(&lStack_80);
      return;
    }
    if (param_2 == 1) {
      func_0x00010b49e7ec(&stack0xffffffffffffffc8);
      FUN_10b49d994(param_1,&stack0xffffffffffffffc8);
      func_0x00010b49e7e4();
    }
  }
  return;
}



/* Entry: 10b49dbb4; end: 10b49dbbb;  */

void FUN_10b49dbb4(long param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auStack_98 [16];
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  if (*(char *)(param_1 + 0x24) == '\x01') {
    if (param_2 == 2) {
      lStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_10b49d938(auStack_98,param_1 + 0x40);
      FUN_10b49dc20(&lStack_80,*(undefined8 *)(lStack_88 + 0x18));
      plVar3 = (long *)(lStack_88 + 0x10);
      while (uVar1 = uStack_78, plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
        if (uStack_78 < uStack_70) {
          FUN_10b49e17c(uStack_78,plVar3 + 5);
          uStack_78 = uVar1 + 0x30;
        }
        else {
          plVar2 = &lStack_80;
          FUN_10b49e188(plVar2,(long)(uStack_78 - lStack_80) / 0x30 + 1);
          FUN_10b49dedc(auStack_68,plVar2,(long)(uStack_78 - lStack_80) / 0x30,&uStack_70);
          FUN_10b49e17c(lStack_58,plVar3 + 5);
          lStack_58 = lStack_58 + 0x30;
          FUN_10b49de5c(&lStack_80,auStack_68);
          uVar1 = uStack_78;
          func_0x00010b49e114(auStack_68);
          uStack_78 = uVar1;
        }
      }
      func_0x00010b49e7e4();
      FUN_10b49ec84(*(undefined8 *)(param_1 + 0xa8),&lStack_80);
      FUN_10b49dd9c(&lStack_80);
      return;
    }
    if (param_2 == 1) {
      func_0x00010b49e7ec(&stack0xffffffffffffffc8);
      FUN_10b49d994(param_1 + -8,&stack0xffffffffffffffc8);
      func_0x00010b49e7e4();
    }
  }
  return;
}



/* Entry: 10b49dbbc; end: 10b49dc1f;  */

long FUN_10b49dbbc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10b519e68(param_1);
    }
    else {
      func_0x00010b519e30(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b49dc20; end: 10b49dcaf;  */

void FUN_10b49dc20(long *param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x30) < param_2) {
    if (0x555555555555555 < param_2) {
      FUN_10b49de48();
      puVar1 = auStack_48;
      func_0x00010b49e114(puVar1);
      FUN_10b49e798();
      func_0x00010b49dcd8(puVar1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(puVar1);
      return;
    }
    FUN_10b49dedc(auStack_48,param_2,(param_1[1] - *param_1) / 0x30);
    FUN_10b49de5c(param_1,auStack_48);
    func_0x00010b49e114(auStack_48);
  }
  return;
}



/* Entry: 10b49dcb0; end: 10b49dd83;  */

void FUN_10b49dcb0(long param_1)

{
  func_0x00010b49dcd8(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10b49dd84; end: 10b49dd9b;  */

void FUN_10b49dd84(long *param_1)

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



/* Entry: 10b49dd9c; end: 10b49de0b;  */

undefined8 FUN_10b49dd9c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b49ddd0(&uStack_28);
  return param_1;
}



/* Entry: 10b49de0c; end: 10b49de13;  */

void FUN_10b49de0c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b49e800(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    FUN_10b519b74();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b49de14; end: 10b49de47;  */

void FUN_10b49de14(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b49e800();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    FUN_10b519b74();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b49de48; end: 10b49de5b;  */

void FUN_10b49de48(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x00010b49e800();
  lVar3 = *(long *)(param_2 + 8) + ((plVar1[1] - *plVar1) / -0x30) * 0x30;
  FUN_10b49df78(plVar1 + 2,*plVar1,plVar1[1],lVar3);
  unaff_x19[1] = lVar3;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b49de5c; end: 10b49dedb;  */

void FUN_10b49de5c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010b49e800();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_10b49df78(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b49dedc; end: 10b49df4b;  */

long * FUN_10b49dedc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b49df28();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 10b49df4c; end: 10b49df77;  */

void FUN_10b49df4c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x30) {
    FUN_10b49e040(param_4,uVar1);
    param_4 = lStack_48 + 0x30;
  }
  uStack_58 = 1;
  FUN_10b49e010(param_1,param_2,param_3);
  FUN_10b49e094(&uStack_70);
  return;
}



/* Entry: 10b49df78; end: 10b49e00f;  */

void FUN_10b49df78(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x30) {
    FUN_10b49e040(param_4,lVar1);
    param_4 = lStack_38 + 0x30;
  }
  uStack_48 = 1;
  FUN_10b49e010(param_1,param_2,param_3);
  FUN_10b49e094(&uStack_60);
  return;
}



/* Entry: 10b49e010; end: 10b49e03f;  */

void FUN_10b49e010(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    FUN_10b519b74();
  }
  return;
}



/* Entry: 10b49e040; end: 10b49e04b;  */

undefined8 * FUN_10b49e040(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110cfac80;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_10b49dbbc(param_1,param_2);
  return param_1;
}



/* Entry: 10b49e04c; end: 10b49e093;  */

undefined8 * FUN_10b49e04c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cfac80;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_10b49dbbc(param_1,param_3);
  return param_1;
}



/* Entry: 10b49e094; end: 10b49e0c3;  */

long FUN_10b49e094(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10b49e0c4(param_1);
  }
  return param_1;
}



/* Entry: 10b49e0c4; end: 10b49e0e3;  */

void FUN_10b49e0c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    FUN_10b519b74();
  }
  return;
}



/* Entry: 10b49e0e4; end: 10b49e13f;  */

void FUN_10b49e0e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x30;
    FUN_10b519b74();
  }
  return;
}



/* Entry: 10b49e140; end: 10b49e147;  */

void FUN_10b49e140(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b49e800(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x30;
    FUN_10b519b74();
  }
  return;
}



/* Entry: 10b49e148; end: 10b49e17b;  */

void FUN_10b49e148(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b49e800();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x30;
    FUN_10b519b74();
  }
  return;
}



/* Entry: 10b49e17c; end: 10b49e187;  */

undefined8 * FUN_10b49e17c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110cfac80;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_2 + 0x10;
  func_0x000107c2809c(lVar1,0);
  param_1[2] = lVar1;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 10b49e188; end: 10b49e1d7;  */

long * FUN_10b49e188(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x555555555555555 < param_2) {
    FUN_10b49de48();
    FUN_10b49e1fc();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x30;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x2aaaaaaaaaaaaa9 < uVar1) {
    plVar2 = (long *)0x555555555555555;
  }
  return plVar2;
}



/* Entry: 10b49e1d8; end: 10b49e1fb;  */

undefined8 FUN_10b49e1d8(undefined8 param_1)

{
  FUN_10b49e1fc(param_1,0);
  return param_1;
}



/* Entry: 10b49e1fc; end: 10b49e213;  */

void FUN_10b49e1fc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10b49e230(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b49e214; end: 10b49e22f;  */

void FUN_10b49e214(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10b49e230(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b49e230; end: 10b49e287;  */

void FUN_10b49e230(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xa8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  FUN_10b49dd9c(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10b49e288; end: 10b49e35b;  */

long FUN_10b49e288(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000107c278c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000107c278d0(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10b49e35c; end: 10b49e73b;  */

undefined1  [16]
FUN_10b49e35c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  undefined1 auVar15 [16];
  
  plVar7 = param_1 + 3;
  func_0x000107c278c4();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar13 <= plVar7) {
        uVar6 = 0;
        if (plVar13 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar6 * (long)plVar13);
      }
    }
    plVar12 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10b49e420;
          plVar4 = (long *)plVar12[1];
          if (plVar4 != plVar7) break;
          plVar4 = plVar12 + 2;
          func_0x000107c278d0(plVar4,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            uVar3 = 0;
            goto LAB_10b49e704;
          }
        }
        if (((ulong)plVar13 & uVar14) == 0) {
          plVar4 = (long *)((ulong)plVar4 & uVar14);
        }
        else if (plVar13 <= plVar4) {
          uVar6 = 0;
          if (plVar13 != (long *)0x0) {
            uVar6 = (ulong)plVar4 / (ulong)plVar13;
          }
          plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar13);
        }
      } while (plVar4 == unaff_x25);
    }
  }
LAB_10b49e420:
  uVar3 = *param_4;
  plVar4 = param_1 + 2;
  plVar12 = (long *)0x58;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = (long)plVar7;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar12 + 2,uVar3);
  plVar12[5] = (long)&PTR_FUN_110cfac80;
  plVar12[6] = 0;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[7] = (long)&DAT_11383d918;
  *(undefined4 *)(plVar12 + 10) = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_10b49e68c;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar5 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar5 <= plVar13) {
    plVar5 = plVar13;
  }
  if ((long)plVar5 - 1U == 0) {
    plVar5 = (long *)0x2;
  }
  else if (((ulong)plVar5 & (long)plVar5 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar5) {
LAB_10b49e4f8:
    if ((ulong)plVar5 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10b49e72c);
      (*pcVar1)();
    }
    lVar2 = (long)plVar5 << 3;
    __Znwm(lVar2);
    FUN_10b49e73c(param_1,lVar2);
    param_1[1] = (long)plVar5;
    lVar2 = *param_1;
    for (plVar13 = (long *)0x0; plVar5 != plVar13; plVar13 = (long *)((long)plVar13 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar13 * 8) = 0;
    }
    plVar8 = (long *)*plVar4;
    plVar13 = plVar5;
    if (plVar8 != (long *)0x0) {
      plVar9 = (long *)plVar8[1];
      uVar6 = (long)plVar5 - 1;
      uVar14 = 0;
      if (plVar5 != (long *)0x0) {
        uVar14 = (ulong)plVar9 / (ulong)plVar5;
      }
      plVar10 = plVar9;
      if (plVar5 <= plVar9) {
        plVar10 = (long *)((long)plVar9 - uVar14 * (long)plVar5);
      }
      if (((ulong)plVar5 & uVar6) == 0) {
        plVar10 = (long *)((ulong)plVar9 & uVar6);
      }
      *(long **)(lVar2 + (long)plVar10 * 8) = plVar4;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        plVar11 = (long *)plVar8[1];
        if (((ulong)plVar5 & uVar6) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar6);
        }
        else if (plVar5 <= plVar11) {
          uVar14 = 0;
          if (plVar5 != (long *)0x0) {
            uVar14 = (ulong)plVar11 / (ulong)plVar5;
          }
          plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar5);
        }
        if (plVar11 != plVar10) {
          if (*(long *)(lVar2 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar11 * 8) = plVar9;
            plVar10 = plVar11;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar2 + (long)plVar11 * 8);
            **(long **)(lVar2 + (long)plVar11 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (plVar5 < plVar13) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 - 1) & 0x3fU));
    }
    if (plVar5 <= plVar8) {
      plVar5 = plVar8;
    }
    if (plVar5 < plVar13) {
      if (plVar5 != (long *)0x0) goto LAB_10b49e4f8;
      FUN_10b49e73c(param_1,0);
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar7);
  }
  else {
    unaff_x25 = plVar7;
    if (plVar13 <= plVar7) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar7 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar7 - uVar14 * (long)plVar13);
    }
  }
LAB_10b49e68c:
  lVar2 = *param_1;
  plVar7 = *(long **)(lVar2 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar12 = *plVar4;
    *plVar4 = (long)plVar12;
    *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar4;
    if (*plVar12 != 0) {
      plVar7 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar7) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar7 / (ulong)plVar13;
        }
        plVar7 = (long *)((long)plVar7 - uVar14 * (long)plVar13);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar7;
    *plVar7 = (long)plVar12;
  }
  param_1[3] = param_1[3] + 1;
  func_0x00010b49e7dc();
  uVar3 = 1;
LAB_10b49e704:
  auVar15._8_8_ = uVar3;
  auVar15._0_8_ = plVar12;
  return auVar15;
}



/* Entry: 10b49e73c; end: 10b49e753;  */

void FUN_10b49e73c(long *param_1,long param_2)

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



/* Entry: 10b49e754; end: 10b49e797;  */

long * FUN_10b49e754(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b49dd38(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b49e798; end: 10b49e81f;  */

void FUN_10b49e798(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}


