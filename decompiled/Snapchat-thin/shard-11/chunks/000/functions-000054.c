/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080cf028; end: 1080cf05f;  */

void FUN_1080cf028(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x21;
  
  func_0x0001080cfe84();
  func_0x00010b9a9518();
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x21 + 0x10);
  func_0x0001080d0128();
                    /* WARNING: Could not recover jumptable at 0x0001080cf05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1080cf060; end: 1080cf087;  */

void FUN_1080cf060(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001080cfe20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080cf088; end: 1080cf09b;  */

void FUN_1080cf088(void)

{
  FUN_1080cee34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080cf09c; end: 1080cf0d3;  */

void FUN_1080cf09c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x21;
  
  func_0x0001080cfe84();
  func_0x00010b9a9608();
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x21 + 0x10);
  func_0x0001080d0128();
                    /* WARNING: Could not recover jumptable at 0x0001080cf0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1080cf0d4; end: 1080cf0fb;  */

void FUN_1080cf0d4(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001080cfe20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080cf0fc; end: 1080cf10f;  */

void FUN_1080cf0fc(void)

{
  FUN_1080cee34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080cf110; end: 1080cf163;  */

undefined8 FUN_1080cf110(undefined8 param_1)

{
  long unaff_x22;
  
  func_0x0001080d014c();
  func_0x00010b9a9588();
  func_0x00010b988f18();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080d006c(*(undefined8 *)(unaff_x22 + 0x10));
  func_0x0001080cfea8();
  return param_1;
}



/* Entry: 1080cf164; end: 1080cf18b;  */

void FUN_1080cf164(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001080cfe20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080cf18c; end: 1080cf19f;  */

void FUN_1080cf18c(void)

{
  FUN_1080cee34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080cf1a0; end: 1080cf277;  */

long * FUN_1080cf1a0(long *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long unaff_x21;
  undefined8 unaff_x22;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001080cfe84();
  func_0x0001080cfeb8();
  uStack_38 = extraout_x8;
  func_0x00010b8b245c(&lStack_48);
  uVar1 = uStack_40;
  uVar2 = lStack_48 == 1;
  if ((bool)uVar2) {
    uStack_40 = 0;
    func_0x0001080d0128(*(undefined8 *)(unaff_x21 + 0x10));
    func_0x0001080d015c();
    func_0x0001003a916c(uVar1);
    unaff_x22 = uVar1;
  }
  else {
    param_1 = (long *)0x0;
  }
  func_0x0001080cf2a8();
  func_0x0001080cfe24(uStack_38);
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001003a916c(unaff_x22);
  plVar3 = &lStack_48;
  func_0x0001080cf2a8();
  func_0x0001080cffa4();
  func_0x0001080cf29c(*plVar3);
  return plVar3;
}



/* Entry: 1080cf278; end: 1080cf29b;  */

undefined8 * FUN_1080cf278(undefined8 *param_1)

{
  FUN_1080cf29c(*param_1);
  return param_1;
}



/* Entry: 1080cf29c; end: 1080cf2f3;  */

void FUN_1080cf29c(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080cf2f4; end: 1080cf307;  */

void FUN_1080cf2f4(void)

{
  FUN_1080cee34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080cf308; end: 1080cf3a3;  */

long * FUN_1080cf308(long *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  code *extraout_x9;
  long alStack_50 [3];
  undefined8 uStack_38;
  
  plVar2 = alStack_50;
  plVar3 = alStack_50;
  func_0x0001080cfe84();
  func_0x0001080cfeb8();
  uStack_38 = extraout_x8;
  func_0x00010b8b2370(alStack_50);
  uVar1 = alStack_50[0] == 1;
  if ((bool)uVar1) {
    func_0x0001080d0128();
    (*extraout_x9)();
  }
  else {
    param_1 = (long *)0x0;
  }
  FUN_1080cf3a4();
  func_0x0001080cfe24(uStack_38);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_1080cf3a4();
  func_0x0001080cffa4();
  if (*plVar3 == 2) {
    func_0x0001003adc0c(plVar3 + 1);
    func_0x000104bda960();
    return plVar2;
  }
  return plVar3;
}



/* Entry: 1080cf3a4; end: 1080cf3db;  */

void FUN_1080cf3a4(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  return;
}



/* Entry: 1080cf3dc; end: 1080cf4a3;  */

void FUN_1080cf3dc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_40 [16];
  
  func_0x00010b980ac4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_3 + 0x10);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d9410;
  _objc_opt_class();
  func_0x0001080d0094();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x00010b980484(auStack_40,lVar1);
    func_0x000104bf351c(param_1,auStack_40);
    func_0x0001080d009c();
  }
  else if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x00010c0fe320(param_1,lVar1);
  }
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  return;
}



/* Entry: 1080cf4a4; end: 1080cf4c3;  */

void FUN_1080cf4a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1080cf4c4; end: 1080cf4f3;  */

void FUN_1080cf4c4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110a1ec70;
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_retainBlock();
  param_1[1] = uVar1;
  return;
}



/* Entry: 1080cf4f4; end: 1080cf4f7;  */

undefined8 * FUN_1080cf4f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a1e918;
  func_0x00010b980378(param_1 + 4);
  func_0x00010b980378(param_1 + 2);
  return param_1;
}



/* Entry: 1080cf4f8; end: 1080cf50b;  */

void FUN_1080cf4f8(void)

{
  FUN_1080cee34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080cf50c; end: 1080cf62b;  */

undefined8 *** FUN_1080cf50c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_48;
  
  if ((*(byte *)(param_4 + 8) & 0xfe) == 2) {
    func_0x00010b9a9358(&ppuStack_48,param_4);
    pppuVar2 = &ppuStack_48;
    func_0x00010b98101c(pppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080cff0c();
  }
  else {
    if (*(byte *)(param_4 + 8) != 0xf) {
      pppuVar2 = (undefined8 ***)0x0;
      goto LAB_1080cf5d4;
    }
    FUN_1080cf62c(&ppuStack_48,param_4);
    ppuVar1 = ppuStack_48;
    if ((undefined8 ***)ppuStack_48 == (undefined8 ***)0x0) {
      pppuVar2 = (undefined8 ***)0x0;
    }
    else {
      _objc_alloc(PTR_PTR_1126d9220);
      func_0x00010c0063e0();
      pppuVar2 = (undefined8 ***)ppuStack_48;
    }
    FUN_1080cf6b0(pppuVar2);
    if ((undefined8 ***)ppuVar1 == (undefined8 ***)0x0) {
      pppuVar2 = (undefined8 ***)0x0;
      goto LAB_1080cf5d4;
    }
  }
  func_0x0001080d0128(*(undefined8 *)(param_2 + 0x10));
  func_0x0001080d015c();
LAB_1080cf5d4:
  func_0x0001080cff1c();
  return pppuVar2;
}



/* Entry: 1080cf62c; end: 1080cf6af;  */

void FUN_1080cf62c(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*(char *)((long)param_2 + 9) == '\x01') {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      ___dynamic_cast(lVar1,&PTR_DAT_1107e3600,&PTR_DAT_110d7d878,0);
    }
    func_0x0001080cf680();
  }
  else {
    lVar1 = 0;
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 1080cf6b0; end: 1080cf6e3;  */

void FUN_1080cf6b0(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080cf6e4; end: 1080cf6f7;  */

void FUN_1080cf6e4(void)

{
  FUN_1080cf8a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080cf6f8; end: 1080cf7a3;  */

code ** FUN_1080cf6f8(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  code **ppcVar4;
  code **ppcVar5;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  long lStack_d8;
  code **ppcStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  long *plStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_98;
  code **ppcStack_90;
  code **ppcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_28;
  
  func_0x0001080cfeb8();
  uStack_60 = 0;
  pcStack_58 = FUN_1080cf8d4;
  ppuStack_50 = &PTR_FUN_110a1ed60;
  uStack_70 = param_6;
  uStack_6c = param_2;
  uStack_68 = param_5;
  uStack_64 = param_1;
  uStack_28 = extraout_x8;
  func_0x0001080cff54();
  *param_3 = param_4;
  param_3[1] = &uStack_68;
  param_3[2] = &uStack_64;
  param_3[3] = &uStack_70;
  param_3[4] = &uStack_6c;
  param_3[5] = &uStack_60;
  ppcVar4 = &pcStack_58;
  puStack_48 = param_3;
  FUN_1080c5ffc();
  func_0x0001080cfe74();
  func_0x0001080cfe24(uStack_28,(undefined4)uStack_60,uStack_60._4_4_);
  if ((bool)in_ZR) {
    return ppcVar4;
  }
  ___stack_chk_fail();
  ppcVar5 = ppcVar4;
  func_0x0001080cfe74();
  func_0x0001080cffa4();
  pcStack_78 = FUN_1080cf7a4;
  ppcStack_90 = &pcStack_58;
  ppcStack_88 = ppcVar4;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x0001080cfeb8();
  ppcVar5 = ppcVar5 + 0xd;
  uStack_98 = extraout_x8_01;
  func_0x00010b9803d0();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = 0;
  lStack_c8 = 0x1080cf9dc;
  ppuStack_c0 = &PTR_FUN_110a1ed80;
  plStack_b8 = &lStack_d8;
  ppuStack_b0 = &ppcStack_d0;
  ppcStack_d0 = ppcVar5;
  FUN_1080c5ffc(&lStack_c8);
  func_0x0001080cfe74();
  if (lStack_d8 == 0) {
    *extraout_x8_00 = 0;
  }
  else {
    FUN_1080c6098(&lStack_c8);
    if ((lStack_c8 != 0) && (*(long *)(lStack_c8 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lStack_c8 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *extraout_x8_00 = lStack_c8;
    func_0x0001080c69c4();
    _objc_release(lStack_d8);
  }
  ppcVar4 = ppcStack_d0;
  _objc_release();
  func_0x0001080cfe24(uStack_98);
  if ((bool)in_ZR) {
    return ppcVar4;
  }
  ___stack_chk_fail();
  _objc_release(lStack_d8);
  ppcVar4 = ppcStack_d0;
  _objc_release();
  func_0x0001080cffa4();
  *ppcVar4 = (code *)&PTR_DAT_110a1ed10;
  func_0x00010b980378(ppcVar4 + 0xd);
  *ppcVar4 = (code *)&PTR_DAT_110d78df0;
  func_0x0001080c5c5c(ppcVar4 + 0xb);
  func_0x00010b9a1f08(ppcVar4 + 2);
  return ppcVar4;
}



/* Entry: 1080cf7a4; end: 1080cf8a3;  */

undefined8 * FUN_1080cf7a4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long lStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined **ppuStack_50;
  long *plStack_48;
  undefined8 **ppuStack_40;
  undefined8 uStack_28;
  
  func_0x0001080cfeb8();
  puVar4 = (undefined8 *)(param_2 + 0x68);
  uStack_28 = extraout_x8;
  func_0x00010b9803d0();
  _objc_retainAutoreleasedReturnValue();
  lStack_68 = 0;
  lStack_58 = 0x1080cf9dc;
  ppuStack_50 = &PTR_FUN_110a1ed80;
  plStack_48 = &lStack_68;
  ppuStack_40 = &puStack_60;
  puStack_60 = puVar4;
  FUN_1080c5ffc(&lStack_58);
  func_0x0001080cfe74();
  if (lStack_68 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_1080c6098(&lStack_58);
    if ((lStack_58 != 0) && (*(long *)(lStack_58 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lStack_58 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = lStack_58;
    func_0x0001080c69c4();
    _objc_release(lStack_68);
  }
  puVar4 = puStack_60;
  _objc_release();
  func_0x0001080cfe24(uStack_28);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(lStack_68);
  puVar4 = puStack_60;
  _objc_release();
  func_0x0001080cffa4();
  *puVar4 = &PTR_DAT_110a1ed10;
  func_0x00010b980378(puVar4 + 0xd);
  *puVar4 = &PTR_DAT_110d78df0;
  func_0x0001080c5c5c(puVar4 + 0xb);
  func_0x00010b9a1f08(puVar4 + 2);
  return puVar4;
}



/* Entry: 1080cf8a4; end: 1080cf8d3;  */

undefined8 * FUN_1080cf8a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a1ed10;
  func_0x00010b980378(param_1 + 0xd);
  *param_1 = &PTR_DAT_110d78df0;
  func_0x0001080c5c5c(param_1 + 0xb);
  func_0x00010b9a1f08(param_1 + 2);
  return param_1;
}



/* Entry: 1080cf8d4; end: 1080cf973;  */

void FUN_1080cf8d4(long param_1)

{
  undefined8 uVar1;
  float *pfVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  uVar1 = *puVar3;
  FUN_1080c617c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (*(int *)puVar3[1] == 0) {
    dVar4 = 1.79769313486232e+308;
  }
  else {
    dVar4 = (double)*(float *)puVar3[2];
  }
  if (*(int *)puVar3[3] == 0) {
    dVar5 = 1.79769313486232e+308;
  }
  else {
    dVar5 = (double)*(float *)puVar3[4];
  }
  func_0x00010c23d5a0(uVar1);
  pfVar2 = (float *)puVar3[5];
  *pfVar2 = (float)dVar4;
  pfVar2[1] = (float)dVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080cf974; end: 1080cf99b;  */

void FUN_1080cf974(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080cf99c; end: 1080cfa1f;  */

void FUN_1080cf99c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110a1ed60;
  puVar1 = param_1;
  func_0x0001080cff54();
  uVar6 = puVar2[3];
  uVar5 = puVar2[2];
  uVar4 = puVar2[5];
  uVar3 = puVar2[4];
  uVar7 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar7;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  puVar1[5] = uVar4;
  puVar1[4] = uVar3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1080cfa20; end: 1080cfa77;  */

void FUN_1080cfa20(void)

{
  return;
}



/* Entry: 1080cfa78; end: 1080cfa8b;  */

void FUN_1080cfa78(void)

{
  FUN_1080cfc44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080cfa8c; end: 1080cfc43;  */

long * FUN_1080cfa8c(float param_1,float param_2,long param_3,long param_4,int param_5,long param_6)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 extraout_x8;
  double dVar6;
  double dVar7;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = param_4;
  func_0x0001080cfeb8();
  uStack_58 = extraout_x8;
  func_0x00010b8b4ed8(&lStack_68,lVar3 + 0x90);
  uVar2 = 0;
  lVar3 = param_6;
  if (lStack_68 == 1) {
    param_3 = param_3 + 0x10;
    func_0x00010b9803d0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_4 + 0x1d0) + 0x20;
    FUN_1080dd62c();
    _objc_retainAutoreleasedReturnValue();
    dVar6 = 1.79769313486232e+308;
    if (param_5 != 0) {
      dVar6 = (double)param_1;
    }
    uVar2 = (int)param_6 == 0;
    dVar7 = 1.79769313486232e+308;
    if (!(bool)uVar2) {
      dVar7 = (double)param_2;
    }
    puVar4 = PTR_PTR_1126d9418;
    _objc_alloc(PTR_PTR_1126d9418);
    uVar1 = uStack_60;
    uStack_60 = 0;
    func_0x00010bff4fc0();
    func_0x000104bd4e64(uVar1);
    func_0x00010c279540(lVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(dVar6,dVar7,param_3,puVar4,lVar3);
    func_0x0001080cff04();
    func_0x0001080cff1c();
    func_0x0001080cfeb0();
    func_0x0001080cfea8();
  }
  plVar5 = &lStack_68;
  FUN_1080cfc70(plVar5);
  func_0x0001080cfe24(uStack_58);
  if ((bool)uVar2) {
    return plVar5;
  }
  ___stack_chk_fail();
  _objc_release(lVar3);
  func_0x0001080cff1c();
  func_0x0001080cfeb0();
  func_0x0001080cfea8();
  plVar5 = &lStack_68;
  FUN_1080cfc70();
  func_0x0001080cff64();
  *plVar5 = (long)&PTR_DAT_110a1edb0;
  func_0x00010b980378(plVar5 + 2);
  return plVar5;
}



/* Entry: 1080cfc44; end: 1080cfc6f;  */

undefined8 * FUN_1080cfc44(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a1edb0;
  func_0x00010b980378(param_1 + 2);
  return param_1;
}



/* Entry: 1080cfc70; end: 1080cfcb7;  */

void FUN_1080cfc70(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  if (*param_1 == 1) {
    func_0x00010007e5d0(param_1 + 1);
    func_0x000104bd4e64();
    return;
  }
  return;
}



/* Entry: 1080cfcb8; end: 1080cfd0b;  */

long FUN_1080cfcb8(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_1080cfd0c();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 1080cfd0c; end: 1080cfe43;  */

bool FUN_1080cfd0c(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar2 = 0;
  uVar5 = param_3 >> 7;
  uVar3 = param_1[3];
  lVar4 = *param_1;
  while( true ) {
    uVar5 = uVar5 & uVar3;
    uVar7 = *(ulong *)(lVar4 + uVar5);
    uVar6 = uVar7 ^ (param_3 & 0x7f) * 0x101010101010101;
    lVar8 = *param_2;
    for (uVar6 = uVar6 + 0xfefefefefefefeff & (uVar6 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar1 = uVar5 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar3;
      *param_4 = uVar1;
      if (*(long *)(param_1[1] + uVar1 * 0x18) == lVar8) goto LAB_1080cfda4;
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar2 = lVar2 + 8;
    uVar5 = lVar2 + uVar5;
  }
LAB_1080cfda4:
  return uVar6 != 0;
}



/* Entry: 1080cfe44; end: 1080cfe5b;  */

void FUN_1080cfe44(void)

{
  undefined8 in_stack_00000000;
  
  func_0x0001080ceeb8(in_stack_00000000);
  return;
}



/* Entry: 1080cfe5c; end: 1080d018b;  */

void FUN_1080cfe5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainBlock_11034d2f8)();
  return;
}



/* Entry: 1080d018c; end: 1080d01a3;  */

void FUN_1080d018c(void)

{
  undefined8 in_stack_00000008;
  
  func_0x0001080cfa50(in_stack_00000008);
  return;
}



/* Entry: 1080d01a4; end: 1080d01ff;  */

void FUN_1080d01a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ed770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setRetainedObject_forKey__112659000);
  return;
}



/* Entry: 1080d0200; end: 1080d04a3; -[SCValdiContext initWithContext:enableReferenceTracking:enableGesturePrewarm:] */

undefined8 *
FUN_1080d0200(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined8 ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ****ppppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 ***pppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fc6c8;
  puVar4 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1080d04a4(puVar4 + 1,param_3);
    puVar4[0xd] = 0x3ff0000000000000;
    if (param_4 != 0) {
      ppppuVar5 = (undefined8 ****)0x150;
      __Znwm();
      func_0x00010b986c58();
      lVar10 = puVar4[1];
      pppuVar6 = (undefined8 ***)0x148;
      __Znwm();
      func_0x00010b986ac0();
      pppuVar1 = pppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar3) {
          *pppuVar1 = (undefined8 **)((long)*pppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuStack_78 = pppuVar6;
      func_0x0001003ae7fc(lVar10 + 0x58,&pppuStack_78);
      if (pppuStack_78 != (undefined8 ***)0x0) {
        func_0x0001080d2950();
      }
      func_0x0001080d26b4(pppuVar6);
      lVar10 = puVar4[1];
      ppppuVar7 = ppppuVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppuVar7,0x10);
        if (bVar3) {
          *ppppuVar7 = (undefined8 ***)((long)*ppppuVar7 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuStack_78 = ppppuVar5;
      func_0x0001003ae7fc(lVar10 + 0x60,&pppuStack_78);
      if ((undefined8 ****)pppuStack_78 != (undefined8 ****)0x0) {
        func_0x0001080d2950();
      }
      ppppuVar7 = ppppuVar5;
      func_0x00010b986dfc();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = puVar4[5];
      puVar4[5] = ppppuVar7;
      func_0x0001080d2984(uVar9);
      uVar9 = puVar4[2];
      puVar4[2] = ppppuVar5;
      func_0x0001080d2690(uVar9);
      func_0x0001080d2690(0);
    }
    puVar8 = PTR_PTR_1126d9420;
    _objc_opt_new();
    uVar9 = puVar4[6];
    puVar4[6] = puVar8;
    func_0x0001080d2984(uVar9);
    puVar8 = PTR_PTR_1126d5d98;
    _objc_alloc();
    func_0x00010bff00a0();
    uVar9 = puVar4[0x12];
    puVar4[0x12] = puVar8;
    func_0x0001080d2984(uVar9);
    func_0x00010b98c7b8(&pppuStack_78,puVar4[1] + 0x38);
    uStack_58 = uStack_70;
    pppuStack_60 = pppuStack_78;
    if (-1 < (char)bStack_61) {
      uStack_58 = (ulong)bStack_61;
      pppuStack_60 = &pppuStack_78;
    }
    ppppuVar5 = &pppuStack_60;
    func_0x00010b9812a4();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar4[0xb];
    puVar4[0xb] = ppppuVar5;
    func_0x0001080d2984(uVar9);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_78);
    lVar10 = puVar4[1] + 0x28;
    func_0x00010b98101c();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar4[0x13];
    puVar4[0x13] = lVar10;
    func_0x0001080d2984(uVar9);
    lVar10 = puVar4[1] + 0x20;
    func_0x00010b98101c();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar4[0x14];
    puVar4[0x14] = lVar10;
    func_0x0001080d2984(uVar9);
    if (param_5 != 0) {
      func_0x0001080c6abc();
    }
  }
  return puVar4;
}



/* Entry: 1080d04a4; end: 1080d04db;  */

undefined8 * FUN_1080d04a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x000105276914(uVar1);
  }
  return param_1;
}



/* Entry: 1080d04dc; end: 1080d0513; -[SCValdiContext contextId] */

undefined4 FUN_1080d04dc(void)

{
  undefined4 uVar1;
  undefined8 uStack_28;
  
  func_0x0001080d29e4();
  if (uStack_28 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(uStack_28 + 0x18);
  }
  func_0x000105276914();
  return uVar1;
}



/* Entry: 1080d0514; end: 1080d051b; -[SCValdiContext setEnableAccessibility:] */

void FUN_1080d0514(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 1080d051c; end: 1080d0577; -[SCValdiContext cppContext] */

void FUN_1080d051c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  _objc_retain();
  _objc_sync_enter(param_2);
  lVar4 = *(long *)(param_2 + 8);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  _objc_sync_exit(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080d0578; end: 1080d05b3; -[SCValdiContext cppRuntime] */

void FUN_1080d0578(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x0001080d29e4();
  FUN_1080d05b4(param_1,uStack_28);
  func_0x0001080d29bc();
  return;
}



/* Entry: 1080d05b4; end: 1080d05fb;  */

void FUN_1080d05b4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1080d25e0(&uStack_30,*(undefined8 *)(param_2 + 0x118));
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001080d2668(&uStack_30);
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1080d05fc; end: 1080d0663; -[SCValdiContext viewNodeTree] */

void FUN_1080d05fc(undefined8 *param_1)

{
  long lStack_30;
  long lStack_28;
  
  func_0x0001080d29e4();
  FUN_1080d05b4(&lStack_30,lStack_28);
  if ((lStack_28 == 0) || (lStack_30 == 0)) {
    *param_1 = 0;
  }
  else {
    func_0x00010b9419d4(param_1,lStack_30,*(undefined4 *)(lStack_28 + 0x18));
  }
  func_0x000104c62570(lStack_30);
  func_0x0001080d29bc();
  return;
}



/* Entry: 1080d0664; end: 1080d0687; -[SCValdiContext trackedObjCReferences] */

void FUN_1080d0664(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010b986e24();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080d0688; end: 1080d06df; -[SCValdiContext destroy] */

void FUN_1080d0688(void)

{
  long lStack_30;
  long lStack_28;
  
  func_0x0001080d29e4();
  FUN_1080d05b4(&lStack_30,lStack_28);
  if ((lStack_28 != 0) && (lStack_30 != 0)) {
    func_0x00010b941a68(lStack_30,&lStack_28);
  }
  func_0x000104c62570(lStack_30);
  func_0x0001080d29bc();
  return;
}



/* Entry: 1080d06e0; end: 1080d0777; -[SCValdiContext awakeIfNeeded] */

void FUN_1080d06e0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x48) = 1;
  uVar1 = param_1 + 0x88;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010c141780(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72780(uVar1);
    func_0x0001080d292c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080d0778; end: 1080d08ef; -[SCValdiContext notifyDidRender] */

void FUN_1080d0778(ulong param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar7 = param_1;
  func_0x0001080d2904();
  *(long *)(uVar7 + 0x50) = *(long *)(uVar7 + 0x50) + 1;
  func_0x00010c0f06c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) != 0) {
    func_0x00010c141780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf79cc0();
    func_0x0001080d292c();
    uVar1 = uVar7;
  }
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = param_1, func_0x00010bfd5840(), (int)uVar1 != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x0001080d2968();
    uVar1 = *(ulong *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release();
    func_0x0001080d2968();
    func_0x0001080d2970();
    lVar3 = lRam0000000000000000;
    while (uVar1 != 0) {
      uVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(uVar6);
        }
        uVar2 = *(ulong *)(uVar7 * 8);
        (**(code **)(uVar2 + 0x10))();
        uVar7 = uVar7 + 1;
        in_ZR = uVar7 == uVar1;
      } while (uVar7 < uVar1);
      func_0x0001080d2970();
      uVar1 = uVar2;
    }
    uVar1 = 0;
    func_0x0001080d292c();
    func_0x0001080d292c();
  }
  func_0x0001080d2924();
  func_0x0001080d28b8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080d292c();
  func_0x0001080d292c();
  func_0x0001080d2924();
  func_0x0001080d29ac();
  func_0x0001080d2904();
  uVar6 = *(undefined8 *)(uVar1 + 0x20);
  func_0x0001080d2994();
  func_0x0001080d28f0();
  lVar3 = lRam0000000000000000;
  while (uVar1 != 0) {
    uVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        func_0x0001080d2a84();
      }
      uVar2 = *(ulong *)(uVar7 * 8);
      (**(code **)(uVar2 + 0x10))();
      uVar7 = uVar7 + 1;
      in_ZR = uVar7 == uVar1;
    } while (uVar7 < uVar1);
    func_0x0001080d28f0();
    uVar1 = uVar2;
  }
  lVar3 = 0;
  func_0x0001080d2924();
  func_0x0001080d28b8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080d2924();
  func_0x0001080d297c();
  func_0x0001080d28a8();
  if (*(long *)(lVar3 + 0x20) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    *(undefined **)(lVar3 + 0x20) = puVar4;
    func_0x0001080d2984(uVar5);
  }
  func_0x0001080d2a8c();
  func_0x0001080d2a9c();
  func_0x0001080d292c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1080d08f0; end: 1080d09a7; -[SCValdiContext notifyLayoutDidBecomeDirty] */

void FUN_1080d08f0(ulong param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  func_0x0001080d2904();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001080d2994();
  func_0x0001080d28f0();
  lVar2 = lRam0000000000000000;
  while (param_1 != 0) {
    uVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        func_0x0001080d2a84();
      }
      uVar1 = *(ulong *)(uVar6 * 8);
      (**(code **)(uVar1 + 0x10))();
      uVar6 = uVar6 + 1;
      in_ZR = uVar6 == param_1;
    } while (uVar6 < param_1);
    func_0x0001080d28f0();
    param_1 = uVar1;
  }
  lVar2 = 0;
  func_0x0001080d2924();
  func_0x0001080d28b8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080d2924();
  func_0x0001080d297c();
  func_0x0001080d28a8();
  if (*(long *)(lVar2 + 0x20) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined **)(lVar2 + 0x20) = puVar3;
    func_0x0001080d2984(uVar4);
  }
  func_0x0001080d2a8c();
  func_0x0001080d2a9c();
  func_0x0001080d292c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1080d09a8; end: 1080d0a17; -[SCValdiContext onLayoutDirty:] */

void FUN_1080d09a8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x0001080d28a8();
  if (*(long *)(unaff_x20 + 0x20) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined **)(unaff_x20 + 0x20) = puVar1;
    func_0x0001080d2984(uVar2);
  }
  func_0x0001080d2a8c();
  func_0x0001080d2a9c();
  func_0x0001080d292c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080d0a18; end: 1080d0a27; -[SCValdiContext hasCompletedInitialRender] */

bool FUN_1080d0a18(long param_1)

{
  return 0 < *(long *)(param_1 + 0x50);
}



/* Entry: 1080d0a28; end: 1080d0a2b; -[SCValdiContext hasCompletedInitialRenderIncludingChildComponents] */

void FUN_1080d0a28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd5850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hasCompletedInitialRender_1125d2fb8);
  return;
}



/* Entry: 1080d0a2c; end: 1080d0acb; -[SCValdiContext setViewModel:] */

void FUN_1080d0a2c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  func_0x0001080d28a8();
  if (*(long *)(unaff_x20 + 0x80) != unaff_x19) {
    func_0x0001080d2994();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
    *(long *)(unaff_x20 + 0x80) = unaff_x19;
    _objc_release(uVar2);
    func_0x00010bf539a0(&lStack_28);
    lVar1 = lStack_28;
    if (lStack_28 == 0) {
      lStack_28 = 0;
    }
    else {
      func_0x00010b981938(auStack_38);
      func_0x00010b8c1f7c(lVar1,auStack_38);
      FUN_1080d26e4(auStack_38);
    }
    func_0x000105276914(lStack_28);
  }
  func_0x0001080d2924();
  return;
}



/* Entry: 1080d0acc; end: 1080d0b0b; -[SCValdiContext _rootValdiView] */

void FUN_1080d0acc(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x0001080d29a4();
  if (uStack_28 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x00010b8d2d9c(param_1);
  }
  func_0x0001080d26d8(uStack_28);
  return;
}



/* Entry: 1080d0b0c; end: 1080d0b53; -[SCValdiContext rootValdiView] */

void FUN_1080d0b0c(void)

{
  undefined1 auStack_28 [8];
  
  func_0x00010be976c0(auStack_28);
  FUN_1080c617c(auStack_28);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080d2a10();
  FUN_1080c5c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080d0b54; end: 1080d0e43; -[SCValdiContext setRootValdiView:] */

/* WARNING: Possible PIC construction at 0x0001080d0d30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080d0d34) */

void FUN_1080d0b54(undefined *param_1,long *param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  int extraout_w10;
  undefined1 *puVar8;
  undefined *puStack_110;
  long *plStack_108;
  long lStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_80;
  long lStack_78;
  long alStack_70 [2];
  long alStack_60 [2];
  undefined8 *puStack_50;
  
  puVar4 = param_1;
  puVar7 = param_3;
  func_0x0001080d2904();
  func_0x0001080d2940();
  func_0x0001080d2a94(&lStack_78);
  if (lStack_78 == 0) {
    func_0x00010b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined *)0x4;
    puVar5 = puVar4;
    func_0x00010c076f00();
    if ((int)puVar5 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eeea0(puVar4);
      func_0x0001080d299c();
    }
  }
  else {
    func_0x00010c141780();
    _objc_retainAutoreleasedReturnValue();
    in_ZR = param_1 == param_3;
    if (!(bool)in_ZR) {
      if (param_3 == (undefined *)0x0) {
        alStack_60[0] = 0;
        param_2 = alStack_60;
        func_0x00010b8d2ef4(lStack_78);
        FUN_1080c5c80(alStack_60[0]);
      }
      else {
        puVar4 = PTR_PTR_1126caff0;
        _objc_alloc(PTR_PTR_1126caff0);
        func_0x00010c01e460();
        lVar6 = lStack_78;
        FUN_1080c68b8(alStack_60,1);
        puStack_50[2] = 0;
        *puStack_50 = &PTR_FUN_110a1e0a8;
        puStack_50[1] = 0;
        FUN_1080c5da4(puStack_50 + 3,puVar4);
        puVar1 = puStack_50;
        puStack_50 = (undefined8 *)0x0;
        FUN_1080c689c(alStack_70,puVar1 + 3);
        FUN_1080c69b4(alStack_60);
        if ((alStack_70[0] != 0) && (*(long *)(alStack_70[0] + 0x10) != 0)) {
          do {
            func_0x0001080d2a1c();
          } while (extraout_w10 != 0);
        }
        lStack_80 = alStack_70[0];
        param_2 = &lStack_80;
        func_0x00010b8d2ef4(lVar6);
        FUN_1080c5c80(lStack_80);
        func_0x0001080c69c4(alStack_70[0]);
        func_0x0001080d299c();
      }
      func_0x00010c220000(param_1);
      puVar7 = (undefined *)0x0;
      func_0x00010c21fea0(param_1);
    }
    if (param_3 != (undefined *)0x0) {
      puVar4 = param_3;
      func_0x00010c295200();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = puVar4 == (undefined *)0x0;
      in_ZR = bVar2;
      _objc_release();
      iVar3 = (int)puVar4;
      if (bVar2) {
        func_0x00010b96bf1c();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = (undefined *)0x4;
        func_0x00010c076f00();
        if (iVar3 != 0) goto code_r0x00010bf4e8a0;
        func_0x0001080d299c();
      }
    }
    func_0x00010c28b480(param_3);
    puVar4 = param_1;
  }
  func_0x0001080d292c();
  func_0x0001080d26d8(lStack_78);
  func_0x0001080d2924();
  func_0x0001080d28b8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080d29ec();
  func_0x0001080d299c();
  func_0x0001080d292c();
  func_0x0001080d26d8(lStack_78);
  func_0x0001080d2924();
  lVar6 = lStack_78;
  func_0x0001080d29ac();
  pcStack_b8 = FUN_1080d0e44;
  uStack_d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = puVar4;
  puStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x0001080d2940();
  func_0x00010c29df80(&lStack_100,lVar6);
  if (lStack_100 == 0) {
    lVar6 = 0;
    puVar8 = (undefined1 *)0x0;
  }
  else {
    func_0x0001003ad940();
    puVar8 = auStack_f8;
    puStack_110 = puVar7;
    plStack_108 = param_2;
    func_0x00010b8d1974(auStack_f8,&puStack_110);
    func_0x00010b8d2c48(&puStack_110,lStack_100,auStack_f0);
    FUN_1080c617c(&puStack_110);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080d2ad0();
    FUN_1080d270c(auStack_f8);
    lVar6 = lStack_100;
  }
  func_0x0001080d26d8(lVar6);
  func_0x0001080d2924();
  func_0x0001080d28d0(uStack_d8);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  func_0x0001080d2ad0();
  FUN_1080d270c(auStack_f8);
  func_0x0001080d26d8(lStack_100);
  func_0x0001080d2924();
  func_0x0001080d297c();
code_r0x00010bf4e8a0:
                    /* WARNING: Could not recover jumptable at 0x00010bf4e8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080d0e44; end: 1080d0f3b; -[SCValdiContext viewForNodeId:] */

void FUN_1080d0e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001080d2940();
  func_0x00010c29df80(&lStack_50,param_1);
  if (lStack_50 == 0) {
    lVar1 = 0;
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001003ad940();
    puVar2 = auStack_48;
    uStack_60 = param_3;
    uStack_58 = param_2;
    func_0x00010b8d1974(auStack_48,&uStack_60);
    func_0x00010b8d2c48(&uStack_60,lStack_50,auStack_40);
    FUN_1080c617c(&uStack_60);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080d2ad0();
    FUN_1080d270c(auStack_48);
    lVar1 = lStack_50;
  }
  func_0x0001080d26d8(lVar1);
  func_0x0001080d2924();
  func_0x0001080d28d0(uStack_28);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x0001080d2ad0();
  FUN_1080d270c(auStack_48);
  func_0x0001080d26d8(lStack_50);
  func_0x0001080d2924();
  func_0x0001080d297c();
                    /* WARNING: Could not recover jumptable at 0x00010bf4e8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080d0f3c; end: 1080d0f3f; -[SCValdiContext objectID] */

void FUN_1080d0f3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4e8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contextId_1125b13d0);
  return;
}



/* Entry: 1080d0f40; end: 1080d10c7; -[SCValdiContext _scheduleReapplyAttributesRecursive:invalidateMeasure:] */

void FUN_1080d0f40(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plStack_188;
  long lStack_180;
  long lStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *aplStack_d0 [18];
  
  func_0x0001080d2904();
  func_0x0001080d2940();
  func_0x0001080d2a94(aplStack_d0);
  if (aplStack_d0[0] == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uVar1 = param_3;
    func_0x00010bf529e0(param_3);
    puVar2 = &uStack_e8;
    FUN_1080d10c8(puVar2,uVar1);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x0001080d2994();
    func_0x0001080d2918();
    if (puVar2 != (undefined8 *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar10 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            func_0x0001080d2a84();
          }
          func_0x0001003ad8f8(&puStack_138,*(undefined8 *)(lStack_128 + (long)puVar10 * 8));
          func_0x000104bdd2f0(&uStack_e8,&puStack_138);
          puVar3 = puStack_138;
          func_0x0001003a8cb8();
          puVar10 = (undefined8 *)((long)puVar10 + 1);
          in_ZR = puVar10 == puVar2;
        } while (puVar10 < puVar2);
        func_0x0001080d2918();
        puVar2 = puVar3;
      } while (puVar3 != (undefined8 *)0x0);
    }
    func_0x0001080d2924();
    param_2 = &uStack_e8;
    func_0x00010b8d3a40(aplStack_d0[0],param_2,param_4);
    func_0x000104bfe1e0(&uStack_e8);
    plVar8 = aplStack_d0[0];
  }
  func_0x0001080d26d8();
  func_0x0001080d2924();
  func_0x0001080d28b8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080d2924();
  func_0x000104bfe1e0(&uStack_e8);
  func_0x0001080d26d8();
  func_0x0001080d2924();
  plVar4 = aplStack_d0[0];
  func_0x0001080d297c();
  pcStack_148 = FUN_1080d10c8;
  plVar5 = plVar4 + 2;
  lVar9 = *plVar4;
  if ((undefined8 *)(*plVar5 - lVar9 >> 3) < param_2) {
    plStack_160 = plVar8;
    uStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104bfe13c();
      pplVar6 = &plStack_188;
      func_0x000104bdd4f0();
      func_0x0001080d29b4();
      plVar8 = pplVar6[0xc];
      func_0x0001080d2994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar8);
      return;
    }
    lVar7 = plVar4[1];
    plStack_168 = plVar5;
    func_0x000104bfe148();
    lStack_180 = (long)plVar5 + (lVar7 - lVar9);
    plStack_170 = plVar5 + (long)param_2;
    plStack_188 = plVar5;
    lStack_178 = lStack_180;
    func_0x000104bdd41c(plVar4,&plStack_188);
    func_0x000104bdd4f0(&plStack_188);
  }
  return;
}



/* Entry: 1080d10c8; end: 1080d114f;  */

void FUN_1080d10c8(long *param_1,ulong param_2)

{
  long **pplVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar4 = param_1 + 2;
  lVar2 = *param_1;
  if ((ulong)(*plVar4 - lVar2 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      func_0x000104bfe13c();
      pplVar1 = &plStack_48;
      func_0x000104bdd4f0();
      func_0x0001080d29b4();
      plVar4 = pplVar1[0xc];
      func_0x0001080d2994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
      return;
    }
    lVar3 = param_1[1];
    plStack_28 = plVar4;
    func_0x000104bfe148();
    lStack_40 = (long)plVar4 + (lVar3 - lVar2);
    plStack_30 = plVar4 + param_2;
    plStack_48 = plVar4;
    lStack_38 = lStack_40;
    func_0x000104bdd41c(param_1,&plStack_48);
    func_0x000104bdd4f0(&plStack_48);
  }
  return;
}



/* Entry: 1080d1150; end: 1080d1173; -[SCValdiContext traitCollection] */

void FUN_1080d1150(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x0001080d2994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080d1174; end: 1080d117b; -[SCValdiContext dynamicTypeScale] */

undefined8 FUN_1080d1174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1080d117c; end: 1080d12bf; -[SCValdiContext setTraitCollection:] */

void FUN_1080d117c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x0001080d2940();
  lVar6 = *(long *)(param_1 + 0x60);
  func_0x0001080d2968();
  func_0x0001080d2994();
  func_0x0001080d2994();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIFontMetrics_1126d9278;
  func_0x00010c0ccd40(PTR__OBJC_CLASS___UIFontMetrics_1126d9278,param_2,
                      *(undefined8 *)PTR__UIFontTextStyleBody_110345bd8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar1 = 0x3ff0000000000000;
  }
  else {
    uVar1 = 0x3ff0000000000000;
    func_0x00010c14e780(puVar2,param_2,param_3);
  }
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  lVar3 = lVar6;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0001080d29ec();
  func_0x00010c08f9e0();
  lVar5 = param_3;
  func_0x00010c08f9e0();
  if (lVar3 != lVar4 || lVar6 != lVar5) {
    func_0x00010be9b5c0(param_1,param_2,&PTR__OBJC_CLASS___NSConstantArray_111182e28,1);
  }
  func_0x0001080d298c();
  func_0x0001080d2924();
  func_0x0001080d292c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080d12c0; end: 1080d134b; -[SCValdiContext setLayoutSize:direction:] */

void FUN_1080d12c0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  long lStack_38;
  
  func_0x0001080d29a4();
  if (lStack_38 != 0) {
    bVar3 = true;
    if ((ABS(param_1) < 3.4028234663852886e+38) && (bVar3 = true, !NAN(param_1))) {
      bVar3 = false;
    }
    fVar1 = fRam00000001133fad88;
    if (!bVar3) {
      fVar1 = (float)param_1;
    }
    bVar3 = true;
    if ((ABS(param_2) < 3.4028234663852886e+38) && (bVar3 = true, !NAN(param_2))) {
      bVar3 = false;
    }
    fVar2 = fRam00000001133fad88;
    if (!bVar3) {
      fVar2 = (float)param_2;
    }
    func_0x00010b8d36cc(fVar1,fVar2,lStack_38,param_5 == 1);
  }
  func_0x0001080d26d8(lStack_38);
  return;
}



/* Entry: 1080d134c; end: 1080d13ef; -[SCValdiContext setVisibleViewportWithFrame:] */

void FUN_1080d134c(double param_1,double param_2)

{
  double dVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  float fVar4;
  double dVar5;
  undefined1 auVar6 [16];
  long lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_b1;
  undefined1 in_register_00005021;
  undefined1 in_register_00005022;
  undefined1 in_register_00005023;
  undefined1 in_register_00005024;
  undefined1 in_register_00005025;
  undefined1 uVar13;
  undefined1 in_register_00005026;
  undefined1 uVar14;
  undefined1 in_register_00005027;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 in_b2;
  undefined1 uVar22;
  undefined1 in_register_00005041;
  undefined1 uVar23;
  undefined1 in_register_00005042;
  undefined1 uVar24;
  undefined1 in_register_00005043;
  undefined1 uVar25;
  undefined1 in_register_00005044;
  undefined1 in_register_00005045;
  undefined1 in_register_00005046;
  undefined1 in_register_00005047;
  ulong uVar26;
  long lVar27;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  long lStack_18;
  
  dVar1 = (double)CONCAT17(in_register_00005027,
                           CONCAT16(in_register_00005026,
                                    CONCAT15(in_register_00005025,
                                             CONCAT14(in_register_00005024,
                                                      CONCAT13(in_register_00005023,
                                                               CONCAT12(in_register_00005022,
                                                                        CONCAT11(
                                                  in_register_00005021,in_b1)))))));
  dVar5 = (double)CONCAT17(in_register_00005047,
                           CONCAT16(in_register_00005046,
                                    CONCAT15(in_register_00005045,
                                             CONCAT14(in_register_00005044,
                                                      CONCAT13(in_register_00005043,
                                                               CONCAT12(in_register_00005042,
                                                                        CONCAT11(
                                                  in_register_00005041,in_b2)))))));
  func_0x00010c29df80(&lStack_18);
  if (lStack_18 != 0) {
    uVar26 = -(ulong)(3.4028234663852886e+38 <= ABS(dVar5));
    lVar27 = -(ulong)(3.4028234663852886e+38 <= ABS(param_2));
    lVar7 = -(ulong)(3.4028234663852886e+38 <= ABS(dVar1));
    auVar10[8] = (char)lVar27;
    auVar10._0_8_ = uVar26 & 0xff00000000000000;
    auVar10[9] = (char)((ulong)lVar27 >> 8);
    auVar10[10] = (char)((ulong)lVar27 >> 0x10);
    auVar10[0xb] = (char)((ulong)lVar27 >> 0x18);
    auVar2[8] = (char)lVar7;
    auVar2._0_8_ = -(ulong)(3.4028234663852886e+38 <= ABS(param_1)) & 0xff00000000000000;
    auVar2[9] = (char)((ulong)lVar7 >> 8);
    auVar2[10] = (char)((ulong)lVar7 >> 0x10);
    auVar2[0xb] = (char)((ulong)lVar7 >> 0x18);
    auVar11._4_4_ = auVar2._8_4_;
    auVar11._0_4_ = (int)-(ulong)(3.4028234663852886e+38 <= ABS(param_1));
    auVar11._8_4_ = (int)uVar26;
    auVar11._12_4_ = auVar10._8_4_;
    fVar4 = (float)dVar1;
    uVar13 = (undefined1)((uint)fVar4 >> 8);
    uVar14 = (undefined1)((uint)fVar4 >> 0x10);
    uVar15 = (undefined1)((uint)fVar4 >> 0x18);
    fVar8 = (float)dVar5;
    fVar9 = (float)param_2;
    uVar16 = (undefined1)((uint)fVar8 >> 8);
    uVar17 = (undefined1)((uint)fVar8 >> 0x10);
    uVar18 = (undefined1)((uint)fVar8 >> 0x18);
    uVar19 = (undefined1)((uint)fVar9 >> 8);
    uVar20 = (undefined1)((uint)fVar9 >> 0x10);
    uVar21 = (undefined1)((uint)fVar9 >> 0x18);
    uVar22 = (undefined1)uRam00000001133fad88;
    uVar23 = (undefined1)((uint)uRam00000001133fad88 >> 8);
    uVar24 = (undefined1)((uint)uRam00000001133fad88 >> 0x10);
    uVar25 = (undefined1)((uint)uRam00000001133fad88 >> 0x18);
    auVar3[4] = SUB41(fVar4,0);
    auVar3._0_4_ = (float)param_1;
    auVar3[5] = uVar13;
    auVar3[6] = uVar14;
    auVar3[7] = uVar15;
    auVar3[8] = SUB41(fVar8,0);
    auVar3[9] = uVar16;
    auVar3[10] = uVar17;
    auVar3[0xb] = uVar18;
    auVar3[0xc] = SUB41(fVar9,0);
    auVar3[0xd] = uVar19;
    auVar3[0xe] = uVar20;
    auVar3[0xf] = uVar21;
    auVar6[4] = uVar22;
    auVar6._0_4_ = uRam00000001133fad88;
    auVar6[5] = uVar23;
    auVar6[6] = uVar24;
    auVar6[7] = uVar25;
    auVar6[8] = uVar22;
    auVar6[9] = uVar23;
    auVar6[10] = uVar24;
    auVar6[0xb] = uVar25;
    auVar6[0xc] = uVar22;
    auVar6[0xd] = uVar23;
    auVar6[0xe] = uVar24;
    auVar6[0xf] = uVar25;
    auVar12[4] = SUB41(fVar4,0);
    auVar12._0_4_ = (float)param_1;
    auVar12[5] = uVar13;
    auVar12[6] = uVar14;
    auVar12[7] = uVar15;
    auVar12[8] = SUB41(fVar8,0);
    auVar12[9] = uVar16;
    auVar12[10] = uVar17;
    auVar12[0xb] = uVar18;
    auVar12[0xc] = SUB41(fVar9,0);
    auVar12[0xd] = uVar19;
    auVar12[0xe] = uVar20;
    auVar12[0xf] = uVar21;
    auVar12 = auVar12 ^ (auVar3 ^ auVar6) & auVar11;
    uStack_28 = auVar12._8_8_;
    uStack_30 = auVar12._0_8_;
    uStack_20 = 1;
    func_0x00010b8d3884(lStack_18,&uStack_30);
  }
  func_0x0001080d26d8(lStack_18);
  return;
}



/* Entry: 1080d13f0; end: 1080d142f; -[SCValdiContext unsetVisibleViewport] */

void FUN_1080d13f0(void)

{
  undefined1 auStack_2c [16];
  undefined1 uStack_1c;
  long lStack_18;
  
  func_0x00010c29df80(&lStack_18);
  if (lStack_18 != 0) {
    auStack_2c[0] = 0;
    uStack_1c = 0;
    func_0x00010b8d3884(lStack_18,auStack_2c);
  }
  func_0x0001080d26d8(lStack_18);
  return;
}



/* Entry: 1080d1430; end: 1080d1543; -[SCValdiContext measureLayoutWithMaxSize:direction:] */

undefined1  [16]
FUN_1080d1430(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  func_0x00010c29df80(&lStack_38);
  if (lStack_38 == 0) {
    lStack_38 = 0;
    uVar5 = *(ulong *)PTR__CGSizeZero_110347620;
    uVar6 = *(ulong *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    func_0x00010b9a8974(auStack_50,lStack_38 + 0x140);
    uVar4 = 1;
    if (*(char *)(param_3 + 0x72) == '\0') {
      uVar4 = 2;
    }
    fVar3 = fRam00000001133fad88;
    if (ABS(param_1) < 3.4028234663852886e+38 && !NAN(param_1)) {
      fVar3 = (float)param_1;
    }
    uVar5 = (ulong)(uint)fVar3;
    uVar1 = 0;
    if (ABS(param_1) < 3.4028234663852886e+38 && !NAN(param_1)) {
      uVar1 = uVar4;
    }
    fVar3 = fRam00000001133fad88;
    if (ABS(param_2) < 3.4028234663852886e+38 && !NAN(param_2)) {
      fVar3 = (float)param_2;
    }
    uVar6 = (ulong)(uint)fVar3;
    uVar2 = 0;
    if (ABS(param_2) < 3.4028234663852886e+38 && !NAN(param_2)) {
      uVar2 = uVar4;
    }
    func_0x00010b8d35b8(uVar5,uVar6,lStack_38,uVar1,uVar2,param_5 == 1);
    func_0x00010b9685a0();
    func_0x00010b9685a0(uVar6);
    func_0x00010b9a8a24(auStack_50);
  }
  func_0x0001080d26d8(lStack_38);
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Entry: 1080d1544; end: 1080d1623; -[SCValdiContext didChangeValue:forValdiAttribute:inViewNode:] */

void FUN_1080d1544(void)

{
  long lVar1;
  undefined8 in_x3;
  long in_x4;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001080d2940();
  func_0x0001080d2968();
  _objc_retain(in_x4);
  func_0x0001080d2abc();
  lVar1 = in_x4;
  func_0x00010bf53a60();
  if (((in_x4 != 0) && (lStack_38 != 0)) && (lVar1 != 0)) {
    func_0x0001003ad8f8(&uStack_40,in_x3);
    func_0x0001080d2adc();
    func_0x00010b980484();
    func_0x00010b941ce8(lStack_38,lVar1,&uStack_40,auStack_50);
    func_0x00010b9a8d98(auStack_50);
    func_0x0001003a8cb8(uStack_40);
  }
  func_0x000104c62570(lStack_38);
  func_0x0001080d298c();
  func_0x0001080d292c();
  func_0x0001080d2924();
  return;
}



/* Entry: 1080d1624; end: 1080d16d3; -[SCValdiContext didChangeValue:forInternedValdiAttribute:inViewNode:] */

void FUN_1080d1624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x0001080d2940();
  func_0x0001080d2968();
  func_0x0001080d2abc();
  lVar1 = param_5;
  func_0x00010bf53a60();
  if (((param_5 != 0) && (lStack_38 != 0)) && (lVar1 != 0)) {
    func_0x00010b980484(auStack_48,param_3);
    func_0x00010b941ce8(lStack_38,lVar1,param_4,auStack_48);
    func_0x00010b9a8d98(auStack_48);
  }
  func_0x000104c62570(lStack_38);
  func_0x0001080d292c();
  func_0x0001080d2924();
  return;
}



/* Entry: 1080d16d4; end: 1080d1727; -[SCValdiContext runtime] */

void FUN_1080d16d4(void)

{
  undefined8 unaff_x19;
  long lStack_28;
  
  func_0x00010bf53a20(&lStack_28);
  if (lStack_28 == 0) {
    unaff_x19 = 0;
  }
  else {
    FUN_1080c2f18();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080d2a10();
  }
  func_0x000104c62570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1080d1728; end: 1080d1747; -[SCValdiContext setViewModelNoUpdate:] */

void FUN_1080d1728(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001080d28a8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x80) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080d1748; end: 1080d17d3; -[SCValdiContext waitUntilInitialRenderWithCompletion:] */

void FUN_1080d1748(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080d28a8();
  lVar1 = unaff_x20;
  func_0x00010bfd5840();
  if ((int)lVar1 == 0) {
    if (*(long *)(unaff_x20 + 0x18) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      func_0x00010bffc4a0();
      uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
      *(undefined **)(unaff_x20 + 0x18) = puVar2;
      func_0x0001080d2984(uVar3);
    }
    func_0x0001080d2a8c();
    func_0x0001080d2a9c();
    func_0x0001080d292c();
  }
  else {
    (**(code **)(unaff_x19 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080d17d4; end: 1080d17db; -[SCValdiContext waitUntilRenderCompletedSync] */

void FUN_1080d17d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a1590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_waitUntilRenderCompletedSyncWith_112685f88,0)
  ;
  return;
}



/* Entry: 1080d17dc; end: 1080d1813; -[SCValdiContext waitUntilRenderCompletedSyncWithFlush:] */

void FUN_1080d17dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  func_0x0001080d29e4();
  if (uStack_28 != 0) {
    func_0x00010b8c2674(uStack_28,param_3);
  }
  func_0x000105276914(uStack_28);
  return;
}



/* Entry: 1080d1814; end: 1080d1963; -[SCValdiContext waitUntilRenderCompletedWithCompletion:] */

void FUN_1080d1814(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 in_ZR;
  long *plVar5;
  long *plStack_88;
  long alStack_80 [2];
  undefined **ppuStack_70;
  undefined8 uStack_68;
  
  func_0x0001080d2904();
  func_0x0001080d2940();
  func_0x00010bf539a0(alStack_80);
  lVar4 = alStack_80[0];
  if (alStack_80[0] == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    func_0x0001080d2a8c();
    plVar5 = (long *)0x40;
    __Znwm();
    alStack_80[1] = 0x1080d27e4;
    ppuStack_70 = &PTR_FUN_110a1ee20;
    uStack_68 = param_1;
    func_0x00010b9ac22c();
    func_0x0001080d2a44();
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_88 = plVar5;
    func_0x00010b8c2598(lVar4,&plStack_88);
    func_0x000104bda3ac(plStack_88);
    do {
      in_ZR = *plVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)in_ZR) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  func_0x000105276914(alStack_80[0]);
  func_0x0001080d2924();
  func_0x0001080d28b8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105276914();
  func_0x0001080d2924();
  func_0x0001080d29ac();
                    /* WARNING: Could not recover jumptable at 0x00010c161990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(alStack_80[0] + 0x30),PTR_s_setActionHandler__112636080);
  return;
}



/* Entry: 1080d1964; end: 1080d196b; -[SCValdiContext setActionHandler:] */

void FUN_1080d1964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c161990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setActionHandler__112636080);
  return;
}



/* Entry: 1080d196c; end: 1080d1973; -[SCValdiContext actionHandler] */

void FUN_1080d196c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beee470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_actionHandler_1125992c0);
  return;
}



/* Entry: 1080d1974; end: 1080d1977; -[SCValdiContext rootContext] */

void FUN_1080d1974(void)

{
  return;
}



/* Entry: 1080d1978; end: 1080d1b73; -[SCValdiContext performJsAction:parameters:] */

void FUN_1080d1978(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined1 *unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 auStack_150 [2];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long alStack_f0 [17];
  undefined8 uStack_68;
  
  func_0x0001080d2a74();
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001080d2940();
  func_0x0001080d2968();
  func_0x00010bf539a0(alStack_f0);
  FUN_1080d05b4(&lStack_f8,alStack_f0[0]);
  if ((lStack_f8 != 0) && (alStack_f0[0] != 0)) {
    func_0x00010bf529e0();
    func_0x00010b9abe10(&lStack_100);
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    func_0x0001080d2968();
    func_0x0001080d2970();
    if (unaff_x20 != (undefined1 *)0x0) {
      lVar5 = 0;
      lVar6 = *plStack_130;
      do {
        puVar7 = (undefined1 *)0x0;
        lVar8 = lVar5 * 0x10 + 0x18;
        do {
          if (*plStack_130 != lVar6) {
            _objc_enumerationMutation();
          }
          lVar2 = lStack_100;
          func_0x00010b980484(auStack_150,*(undefined8 *)(lStack_138 + (long)puVar7 * 8));
          lVar5 = lVar5 + 1;
          func_0x00010b9a9020(lVar2 + lVar8,auStack_150);
          puVar3 = auStack_150;
          func_0x00010b9a8d98();
          puVar7 = puVar7 + 1;
          lVar8 = lVar8 + 0x10;
          in_ZR = puVar7 == unaff_x20;
        } while (puVar7 < unaff_x20);
        func_0x0001080d2970();
        unaff_x20 = (undefined1 *)puVar3;
      } while (puVar3 != (undefined8 *)0x0);
    }
    func_0x0001080d292c();
    uVar4 = *(undefined8 *)(lStack_f8 + 0x148);
    uVar1 = *(undefined4 *)(alStack_f0[0] + 0x18);
    func_0x0001080d2adc();
    func_0x0001003ad8f8();
    func_0x00010b8f2244(uVar4,uVar1,auStack_150,&lStack_100);
    func_0x0001003a8cb8(auStack_150[0]);
    func_0x000104bddf60(lStack_100);
  }
  func_0x000104c62570(lStack_f8);
  func_0x000105276914(alStack_f0[0]);
  func_0x0001080d292c();
  func_0x0001080d2924();
  func_0x0001080d28d0(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104bddf60(lStack_100);
  func_0x000104c62570(lStack_f8);
  func_0x000105276914(alStack_f0[0]);
  func_0x0001080d292c();
  func_0x0001080d2924();
  func_0x0001080d2a2c();
                    /* WARNING: Could not recover jumptable at 0x00010c127590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080d1b74; end: 1080d1b7f; -[SCValdiContext registerViewFactory:forClass:] */

void FUN_1080d1b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c127590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_registerViewFactory_attributesBi_112627780,param_3,0,param_4);
  return;
}



/* Entry: 1080d1b80; end: 1080d1cc7; -[SCValdiContext registerViewFactory:attributesBinder:forClass:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_1080d1b80(void)

{
  long unaff_x21;
  undefined8 uStack_68;
  long alStack_60 [2];
  undefined2 uStack_50;
  long lStack_48;
  
  func_0x0001080d2a74();
  func_0x0001080d2940();
  func_0x0001080d2968();
  func_0x0001080d2a94(&lStack_48);
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  if ((lStack_48 != 0) && (unaff_x21 != 0)) {
    func_0x00010c0b7ac0(unaff_x21);
    _objc_retainAutoreleasedReturnValue();
    uStack_50 = 0;
    alStack_60[1] = 0;
    func_0x00010c296580();
    func_0x00010b9a94ec(&uStack_68,alStack_60 + 1);
    FUN_1080d1cc8(alStack_60,&uStack_68);
    func_0x000104bddf04(uStack_68);
    func_0x00010b8d2ff4(lStack_48,alStack_60[0] + 0x18,alStack_60);
    func_0x0001080d2890(alStack_60[0]);
    func_0x00010b9a8d98(alStack_60 + 1);
    func_0x0001080d299c();
  }
  func_0x0001080d298c();
  func_0x0001080d26d8(lStack_48);
  func_0x0001080d292c();
  func_0x0001080d2924();
  return;
}



/* Entry: 1080d1cc8; end: 1080d1d07;  */

void FUN_1080d1cc8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    ___dynamic_cast(lVar1,&PTR_DAT_110d7ebe8,&PTR_DAT_110d78f78,0);
  }
  func_0x0001080d2860();
  *param_1 = lVar1;
  return;
}



/* Entry: 1080d1d08; end: 1080d1db7; -[SCValdiContext setAttachedObject:forKey:] */

void FUN_1080d1d08(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001080d2a74();
  func_0x0001080d2940();
  func_0x0001080d2968();
  _objc_retain();
  _objc_sync_enter();
  lVar1 = *(long *)(unaff_x21 + 0x40);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(unaff_x21 + 0x40);
    *(undefined **)(unaff_x21 + 0x40) = puVar2;
    func_0x0001080d2984(uVar3);
    lVar1 = *(long *)(unaff_x21 + 0x40);
  }
  if (unaff_x19 == 0) {
    func_0x00010c12d3e0(lVar1);
  }
  else {
    func_0x00010c1d0640();
  }
  _objc_sync_exit();
  func_0x0001080d298c();
  func_0x0001080d292c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080d1db8; end: 1080d1e17; -[SCValdiContext attachedObjectForKey:] */

void FUN_1080d1db8(void)

{
  long unaff_x20;
  
  func_0x0001080d28a8();
  func_0x0001080d2968();
  func_0x0001080d2ac8();
  func_0x00010c0e00e0(*(undefined8 *)(unaff_x20 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080d29c4();
  func_0x0001080d292c();
  func_0x0001080d2924();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080d1e18; end: 1080d1eaf; -[SCValdiContext addDisposable:] */

void FUN_1080d1e18(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x0001080d28a8();
  func_0x0001080d2968();
  func_0x0001080d2ac8();
  if ((*(byte *)(unaff_x20 + 0x4a) & 1) == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x38);
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
      *(undefined **)(unaff_x20 + 0x38) = puVar2;
      func_0x0001080d2984(uVar3);
      lVar1 = *(long *)(unaff_x20 + 0x38);
    }
    func_0x00010befa120(lVar1);
    func_0x0001080d29dc();
    func_0x0001080d292c();
  }
  else {
    func_0x0001080d29dc();
    func_0x0001080d292c();
    func_0x00010bf86d40();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080d1eb0; end: 1080d1fc7; -[SCValdiContext onDestroyed] */

void FUN_1080d1eb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lStack_138;
  undefined8 auStack_d0 [18];
  
  puVar3 = param_1;
  func_0x0001080d2904();
  auStack_d0[0] = 0;
  _objc_retain();
  func_0x0001080d2ac8();
  bVar1 = *(byte *)((long)param_1 + 0x4a);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)((long)param_1 + 0x4a) = 1;
    func_0x0001080d2994();
    uVar4 = param_1[7];
    param_1[7] = 0;
    _objc_release(uVar4);
    puVar3 = auStack_d0;
    FUN_1080d04a4(puVar3,param_1 + 1);
  }
  func_0x0001080d29dc();
  func_0x0001080d292c();
  if ((bVar1 & 1) == 0) {
    func_0x0001080d2994();
    func_0x0001080d28f0();
    lVar2 = lRam0000000000000000;
    while (puVar3 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          func_0x0001080d2a84();
        }
        puVar5 = *(undefined8 **)((long)puVar6 * 8);
        func_0x00010bf86d40();
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        in_ZR = puVar6 == puVar3;
      } while (puVar6 < puVar3);
      func_0x0001080d28f0();
      puVar3 = puVar5;
    }
    func_0x0001080d2924();
  }
  func_0x000105276914();
  func_0x0001080d2924();
  func_0x0001080d28b8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080d2924();
  func_0x000105276914(auStack_d0[0]);
  func_0x0001080d2924();
  func_0x0001080d297c();
  func_0x0001080d29a4();
  if (lStack_138 != 0) {
    func_0x00010b8d4700(lStack_138,param_3);
  }
  func_0x0001080d26d8(lStack_138);
  return;
}



/* Entry: 1080d1fc8; end: 1080d1fff; -[SCValdiContext setViewInflationEnabled:] */

void FUN_1080d1fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  func_0x0001080d29a4();
  if (uStack_28 != 0) {
    func_0x00010b8d4700(uStack_28,param_3);
  }
  func_0x0001080d26d8(uStack_28);
  return;
}



/* Entry: 1080d2000; end: 1080d2037; -[SCValdiContext setRetainsLayoutSpecsOnInvalidateLayout:] */

void FUN_1080d2000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  func_0x0001080d29a4();
  if (uStack_28 != 0) {
    func_0x00010b8d366c(uStack_28,param_3);
  }
  func_0x0001080d26d8(uStack_28);
  return;
}



/* Entry: 1080d2038; end: 1080d203f; -[SCValdiContext enableAccurateTouchGesturesInAnimations] */

undefined1 FUN_1080d2038(long param_1)

{
  return *(undefined1 *)(param_1 + 0x49);
}



/* Entry: 1080d2040; end: 1080d2047; -[SCValdiContext setEnableAccurateTouchGesturesInAnimations:] */

void FUN_1080d2040(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x49) = param_3;
  return;
}



/* Entry: 1080d2048; end: 1080d2087; -[SCValdiContext retainsLayoutSpecsOnInvalidateLayout] */

long FUN_1080d2048(void)

{
  long lVar1;
  undefined8 uStack_28;
  
  func_0x0001080d29a4();
  if (uStack_28 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = uStack_28;
    func_0x00010b8d3698();
  }
  func_0x0001080d26d8(uStack_28);
  return lVar1;
}



/* Entry: 1080d2088; end: 1080d20d3; -[SCValdiContext viewInflationEnabled] */

bool FUN_1080d2088(void)

{
  bool bVar1;
  undefined8 uStack_28;
  
  func_0x0001080d29a4();
  if ((uStack_28 == 0) || (*(char *)(uStack_28 + 0x1e0) != '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(uStack_28 + 200) != 0;
  }
  func_0x0001080d26d8();
  return bVar1;
}



/* Entry: 1080d20d4; end: 1080d21bb; -[SCValdiContext setParentContext:] */

void FUN_1080d20d4(void)

{
  long lVar1;
  ulong uVar2;
  ulong unaff_x19;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001080d28a8();
  func_0x00010c29df80(&lStack_38);
  if ((unaff_x19 != 0) && (lStack_38 != 0)) {
    func_0x00010bf8f080();
    func_0x00010c194900();
    func_0x0001080d2994();
    _objc_opt_class(PTR_PTR_1126bce48);
    uVar2 = unaff_x19;
    _objc_opt_isKindOfClass();
    if ((uVar2 & 1) == 0) {
      unaff_x19 = 0;
    }
    func_0x0001080d2968();
    func_0x0001080d2924();
    lVar1 = lStack_38;
    if (unaff_x19 == 0) {
      uStack_40 = 0;
    }
    else {
      func_0x0001080d2adc();
      func_0x00010c29df80();
    }
    func_0x00010b8d47b0(lVar1,&uStack_40);
    func_0x0001080d26d8(uStack_40);
    func_0x0001080d292c();
  }
  func_0x0001080d26d8(lStack_38);
  func_0x0001080d2924();
  return;
}



/* Entry: 1080d21bc; end: 1080d2253; -[SCValdiContext rootViewNode] */

void FUN_1080d21bc(void)

{
  int extraout_w10;
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  func_0x0001080d29a4();
  if (uStack_28 == 0) {
    uStack_28 = 0;
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = *(long *)(uStack_28 + 0xa0);
    if (lVar1 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      if (*(long *)(lVar1 + 0x10) != 0) {
        do {
          func_0x0001080d2a1c();
        } while (extraout_w10 != 0);
      }
      puVar2 = PTR_PTR_1126d9408;
      _objc_alloc(PTR_PTR_1126d9408);
      func_0x00010c062040();
    }
    func_0x0001080d289c(lVar1);
  }
  func_0x0001080d26d8(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1080d2254; end: 1080d228f; -[SCValdiContext destroyed] */

undefined1 FUN_1080d2254(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined1 *)(param_1 + 0x4a);
  _objc_sync_exit(param_1);
  func_0x0001080d2924();
  return uVar1;
}


