/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109094ff0; end: 10909501b;  */

void FUN_109094ff0(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000109095014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10909501c; end: 109095047;  */

long FUN_10909501c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 109095048; end: 1090950af;  */

void FUN_109095048(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090950b0; end: 10909517f;  */

long FUN_1090950b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar5 = param_1;
  func_0x00010bf529e0();
  lVar3 = 0;
  lVar5 = lVar5 + -1;
  do {
    lVar4 = lVar3;
    if (lVar5 < lVar3) {
LAB_109095158:
      _objc_release(param_2);
      _objc_release(param_1);
      return lVar4;
    }
    lVar4 = lVar3 + ((ulong)(lVar5 - lVar3) >> 1);
    lVar1 = param_1;
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    (**(code **)(param_2 + 0x10))(param_2,lVar1);
    if (lVar2 == -1) {
      lVar5 = lVar4 + -1;
    }
    else if (lVar2 == 1) {
      lVar3 = lVar4 + 1;
    }
    else if (lVar2 == 0) {
      _objc_release(lVar1);
      goto LAB_109095158;
    }
    _objc_release(lVar1);
  } while( true );
}



/* Entry: 109095180; end: 109095187; -[SCNeoByteRange start] */

undefined8 FUN_109095180(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109095188; end: 10909518f; -[SCNeoByteRange length] */

undefined8 FUN_109095188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109095190; end: 10909556b;  */

void FUN_109095190(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar3 = param_6;
  func_0x00010c0f48a0();
  uVar4 = param_2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  FUN_109095bd4(param_1);
  lVar5 = param_6;
  func_0x00010bf903c0();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar10 = param_3;
  if (param_3 == (undefined *)0x0) {
    func_0x00010c072e60();
    if ((int)param_2 != 0) {
      FUN_10909556c(&puStack_68);
      *(char *)(puStack_68 + 5) = (char)lVar5;
      FUN_109095798(&lStack_78);
      lVar5 = 0;
      if (lStack_78 != 0) {
        lVar5 = lStack_78 + 0x18;
      }
      *(long *)(param_1 + 8) = lVar5;
      *(undefined8 *)(param_1 + 0x10) = uStack_70;
      lStack_78 = 0;
      uStack_70 = 0;
      func_0x000109095838(&lStack_78);
      FUN_109095860(&puStack_68);
      puVar10 = (undefined *)0x0;
      goto LAB_1090952c4;
    }
    puVar10 = PTR_PTR_1126dd378;
    func_0x00010c22ba80(PTR_PTR_1126dd378);
    _objc_retainAutoreleasedReturnValue();
  }
  FUN_10910225c(param_1 + 8,puVar10);
LAB_1090952c4:
  _objc_release(puVar10);
  func_0x0001090959ac();
  uVar6 = param_4;
  func_0x00010c067b40();
  func_0x0001090958b8();
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar6 = param_7;
  func_0x00010c11de00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b999da0(&lStack_78);
  if ((lStack_78 != 0) && (*(long *)(lStack_78 + 0x10) != 0)) {
    plVar9 = (long *)(*(long *)(lStack_78 + 0x10) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(long *)(param_1 + 0x20) = lStack_78;
  lVar5 = param_6;
  func_0x00010bf51f20();
  puVar7 = (undefined8 *)0x70;
  __Znwm();
  plVar9 = puVar7 + 1;
  *plVar9 = 1;
  *(char *)(puVar7 + 2) = (char)lVar5;
  puVar7[3] = 0x32aaaba7;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  *puVar7 = &PTR_DAT_110ad91b0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = *plVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(undefined8 **)(param_1 + 0x28) = puVar7;
  puStack_68 = puVar7;
  _objc_retain(param_5);
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  func_0x00010c0ce340(param_5);
  *(undefined8 *)(param_1 + 0x30) =
       CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,CONCAT12(
                                                  uVar13,CONCAT11(uVar12,uVar11)))))));
  func_0x00010c0c3360(param_5);
  *(ulong *)(param_1 + 0x38) =
       CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,CONCAT12(
                                                  uVar13,CONCAT11(uVar12,uVar11)))))));
  func_0x00010bf21c60(param_5);
  *(ulong *)(param_1 + 0x40) =
       CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,CONCAT12(
                                                  uVar13,CONCAT11(uVar12,uVar11)))))));
  uVar8 = param_5;
  func_0x00010bf394a0();
  *(undefined8 *)(param_1 + 0x50) = uVar8;
  uVar8 = param_5;
  func_0x00010c0c1e80();
  *(undefined8 *)(param_1 + 0x58) = uVar8;
  uVar8 = param_5;
  func_0x00010bfb0f40();
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  func_0x00010bf7fc20();
  *(char *)(param_1 + 0x70) = (char)param_5;
  func_0x0001090959b4();
  *(uint *)(param_1 + 0x78) = (uint)(lVar3 == 2);
  lVar3 = param_6;
  func_0x00010c24ca00();
  *(byte *)(param_1 + 0x7c) = (byte)((ulong)lVar3 >> 0x3f) ^ 1;
  FUN_109095918(&puStack_68);
  func_0x000107c2ab04(&lStack_78);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_7);
  _objc_release(param_6);
  func_0x0001090959b4();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x0001090959ac();
  return;
}



/* Entry: 10909556c; end: 1090955a3;  */

void FUN_10909556c(void)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 auStack_38 [3];
  
  func_0x0001090959d4();
  FUN_1090955a4(auStack_38);
  *unaff_x19 = auStack_38[0];
  func_0x0001090959bc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_1090955a4;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1090955c4(&uStack_51);
  return;
}



/* Entry: 1090955a4; end: 1090955c3;  */

void FUN_1090955a4(void)

{
  undefined1 uStack_11;
  
  FUN_1090955c4(&uStack_11);
  return;
}



/* Entry: 1090955c4; end: 109095637;  */

void FUN_1090955c4(void)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  puVar5 = auStack_40;
  func_0x0001090959d4();
  FUN_109095654(auStack_40,1);
  FUN_1090956ac(lStack_30);
  lVar6 = lStack_30;
  lStack_30 = 0;
  FUN_109095638(lVar6 + 0x18);
  FUN_109095788();
  func_0x0001090959bc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_109095788(auStack_40);
  __Unwind_Resume();
  *extraout_x8 = puVar5;
  extraout_x8[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_109095638;
    lStack_58 = extraout_x8[1];
    if (lStack_58 != 0) {
      plVar1 = (long *)(lStack_58 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_60 = puVar5;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x000107c278e4(puVar2,&puStack_60);
    func_0x000107c278ec(&puStack_60);
    return;
  }
  return;
}



/* Entry: 109095638; end: 109095653;  */

void FUN_109095638(long *param_1,long param_2,long param_3)

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
    func_0x000107c278ec(&lStack_20);
    return;
  }
  return;
}



/* Entry: 109095654; end: 10909567b;  */

long FUN_109095654(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10909567c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10909567c; end: 1090956ab;  */

undefined8 * FUN_10909567c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x38e38e38e38e38f) {
    puVar1 = (undefined8 *)(param_2 * 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ad7528;
  param_1[1] = 0;
  func_0x0001090e3e94(param_1 + 3);
  return param_1;
}



/* Entry: 1090956ac; end: 1090956df;  */

undefined8 * FUN_1090956ac(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ad7528;
  param_1[1] = 0;
  func_0x0001090e3e94(param_1 + 3);
  return param_1;
}



/* Entry: 1090956e0; end: 1090956e3;  */

void FUN_1090956e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad7528;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090956e4; end: 1090956f7;  */

void FUN_1090956e4(void)

{
  func_0x000109095708();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090956f8; end: 10909571b;  */

void FUN_1090956f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109095700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10909571c; end: 109095787;  */

void FUN_10909571c(long param_1,long param_2,undefined8 param_3)

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
    func_0x000107c278ec(&uStack_20);
    return;
  }
  return;
}



/* Entry: 109095788; end: 109095797;  */

void FUN_109095788(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109095798; end: 10909585f;  */

void FUN_109095798(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar4 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar4;
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
  }
  else {
    func_0x000107c278f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        plVar1 = (long *)(lStack_28 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    func_0x000107c278ec(&lStack_30);
  }
  return;
}



/* Entry: 109095860; end: 109095883;  */

void FUN_109095860(void)

{
  func_0x000107c34edc();
  FUN_109095884();
  return;
}



/* Entry: 109095884; end: 10909588f;  */

void FUN_109095884(long param_1)

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



/* Entry: 109095890; end: 1090958e7;  */

long FUN_109095890(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1090958e8; end: 10909590b;  */

void FUN_1090958e8(void)

{
  func_0x000107c34edc();
  FUN_10909590c();
  return;
}



/* Entry: 10909590c; end: 109095917;  */

void FUN_10909590c(long param_1)

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



/* Entry: 109095918; end: 10909595b;  */

void FUN_109095918(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x000107c34edc();
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
      (**(code **)(*param_1 + 8))();
    }
  }
  return;
}



/* Entry: 10909595c; end: 10909597f;  */

void FUN_10909595c(void)

{
  func_0x000107c34edc();
  FUN_109095980();
  return;
}



/* Entry: 109095980; end: 1090959f7;  */

void FUN_109095980(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090959a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090959f8; end: 109095a7b;  */

void FUN_1090959f8(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  func_0x00010bffa1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109095a7c; end: 109095a93;  */

void FUN_109095a7c(long param_1)

{
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109095a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    return;
  }
  return;
}



/* Entry: 109095a94; end: 109095acf;  */

void FUN_109095a94(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010bffa180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109095ad0; end: 109095b5b;  */

void FUN_109095ad0(void)

{
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  func_0x00010b99f8ac(&ppuStack_38);
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    ppuStack_38 = &ppuStack_38;
  }
  FUN_109095a94(ppuStack_38,uStack_30);
  _objc_retainAutoreleasedReturnValue();
  FUN_109096480();
  _objc_retainAutoreleasedReturnValue();
  FUN_109095c40();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109095b5c; end: 109095bd3;  */

void FUN_109095b5c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_109095bd4(auStack_28);
  func_0x00010b99f560(param_1,auStack_28);
  func_0x000107c278f4(auStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 109095bd4; end: 109095c3f;  */

void FUN_109095bd4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  _objc_retainAutorelease(param_2);
  func_0x00010bdc3520();
  func_0x00010c08fac0(param_2);
  func_0x000107c31084();
  func_0x000107c3107c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109095c40; end: 109095c53;  */

void FUN_109095c40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 109095c54; end: 109095d6f; +[SCNeoCodecCache loadVideoIfValid:] */

void FUN_109095c54(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x22;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  
  func_0x000109096264();
  func_0x000109096258();
  uVar2 = 0;
  func_0x0001090c4a34();
  if ((uVar2 & 1) == 0) {
    puVar5 = (undefined *)0x0;
    goto LAB_109095d24;
  }
  func_0x0001090961d0();
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  plVar3 = &lStack_68;
  FUN_1090c4b3c(plVar3,auStack_50);
  lVar1 = lStack_68;
  if ((int)plVar3 == 0) {
LAB_109095cf0:
    puVar5 = (undefined *)0x0;
  }
  else {
    if (lStack_68 == lStack_60) goto LAB_109095cf0;
    func_0x000109096240();
    puVar5 = (undefined *)0x0;
    if (plVar3 != (long *)0x0) {
      for (lVar4 = 0; unaff_x22 >> 2 != lVar4; lVar4 = lVar4 + 1) {
        *(undefined4 *)((long)plVar3 + lVar4 * 4) = *(undefined4 *)(lVar1 + lVar4 * 4);
      }
      puVar5 = PTR_PTR_1126dd368;
      _objc_alloc(PTR_PTR_1126dd368);
      func_0x00010bfff520();
    }
  }
  func_0x00010909624c();
  func_0x0001090961f8();
LAB_109095d24:
  func_0x0001090961f0();
  func_0x000109096188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109095d70; end: 109095e8b; +[SCNeoCodecCache loadAudioIfValid:] */

void FUN_109095d70(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x22;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  
  func_0x000109096264();
  func_0x000109096258();
  uVar2 = 0;
  FUN_1090c4b30();
  if ((uVar2 & 1) == 0) {
    puVar5 = (undefined *)0x0;
    goto LAB_109095e40;
  }
  func_0x0001090961d0();
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  plVar3 = &lStack_68;
  FUN_1090c5080(plVar3,auStack_50);
  lVar1 = lStack_68;
  if ((int)plVar3 == 0) {
LAB_109095e0c:
    puVar5 = (undefined *)0x0;
  }
  else {
    if (lStack_68 == lStack_60) goto LAB_109095e0c;
    func_0x000109096240();
    puVar5 = (undefined *)0x0;
    if (plVar3 != (long *)0x0) {
      for (lVar4 = 0; unaff_x22 >> 2 != lVar4; lVar4 = lVar4 + 1) {
        *(undefined4 *)((long)plVar3 + lVar4 * 4) = *(undefined4 *)(lVar1 + lVar4 * 4);
      }
      puVar5 = PTR_PTR_1126dd368;
      _objc_alloc(PTR_PTR_1126dd368);
      func_0x00010bfff520();
    }
  }
  func_0x00010909624c();
  func_0x0001090961f8();
LAB_109095e40:
  func_0x0001090961f0();
  func_0x000109096188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109095e8c; end: 109095feb; +[SCNeoCodecCache saveVideo:tracer:] */

/* WARNING: Possible PIC construction at 0x000109095efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109095f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010909605c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001090960b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109096060) */
/* WARNING: Removing unreachable block (ram,0x000109096068) */
/* WARNING: Removing unreachable block (ram,0x000109095f54) */
/* WARNING: Removing unreachable block (ram,0x000109095f00) */
/* WARNING: Removing unreachable block (ram,0x000109095f5c) */
/* WARNING: Removing unreachable block (ram,0x000109095f08) */
/* WARNING: Removing unreachable block (ram,0x000109095f10) */
/* WARNING: Removing unreachable block (ram,0x000109095f14) */
/* WARNING: Removing unreachable block (ram,0x000109095f24) */
/* WARNING: Removing unreachable block (ram,0x000109095f2c) */
/* WARNING: Removing unreachable block (ram,0x000109095f40) */
/* WARNING: Removing unreachable block (ram,0x000109095f44) */
/* WARNING: Removing unreachable block (ram,0x000109095f50) */
/* WARNING: Removing unreachable block (ram,0x0001090960b4) */
/* WARNING: Removing unreachable block (ram,0x000109096070) */
/* WARNING: Removing unreachable block (ram,0x000109096074) */
/* WARNING: Removing unreachable block (ram,0x000109096084) */
/* WARNING: Removing unreachable block (ram,0x00010909608c) */
/* WARNING: Removing unreachable block (ram,0x0001090960a0) */
/* WARNING: Removing unreachable block (ram,0x0001090960a4) */
/* WARNING: Removing unreachable block (ram,0x0001090960b0) */
/* WARNING: Removing unreachable block (ram,0x0001090960bc) */
/* WARNING: Removing unreachable block (ram,0x000109096018) */

void FUN_109095e8c(void)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined1 auStack_2a0 [256];
  undefined1 auStack_150 [80];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  
  puVar1 = auStack_150;
  func_0x000109096168();
  uVar2 = unaff_x20;
  _objc_retain();
  if (unaff_x19 != 0) {
    func_0x0001090961d0();
    func_0x000109096200();
    func_0x00010bf00b40();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    lVar3 = unaff_x19;
    func_0x00010bf529e0();
    func_0x0001056c5718(&uStack_100,lVar3);
    func_0x0001090961a8();
    unaff_x21 = unaff_x19;
FUN_10909614c:
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (unaff_x21,PTR_s_countByEnumeratingWithState_obje_1125b2440,puVar1 + 0x10,
               puVar1 + 0x78,0x10);
    return;
  }
  func_0x0001090961d8();
  func_0x000109096188();
  func_0x000109096210();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000109096160();
    func_0x0001090961e0();
    func_0x000109096160();
    func_0x0001090961e8();
    func_0x0001090961d8();
    func_0x000109096188();
    __Unwind_Resume(uVar2);
    puVar1 = auStack_2a0;
    func_0x000109096168();
    _objc_retain();
    func_0x0001090961d8();
    func_0x000109096188();
    func_0x000109096210();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000109096160();
      func_0x0001090961e0();
      func_0x000109096160();
      func_0x0001090961e8();
      func_0x0001090961d8();
      func_0x000109096188();
      __Unwind_Resume(unaff_x20);
      goto FUN_10909614c;
    }
  }
  return;
}



/* Entry: 109095fec; end: 10909614b; +[SCNeoCodecCache saveAudio:tracer:] */

/* WARNING: Possible PIC construction at 0x00010909605c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001090960b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109096060) */
/* WARNING: Removing unreachable block (ram,0x000109096068) */
/* WARNING: Removing unreachable block (ram,0x0001090960b4) */
/* WARNING: Removing unreachable block (ram,0x000109096070) */
/* WARNING: Removing unreachable block (ram,0x000109096074) */
/* WARNING: Removing unreachable block (ram,0x000109096084) */
/* WARNING: Removing unreachable block (ram,0x00010909608c) */
/* WARNING: Removing unreachable block (ram,0x0001090960a0) */
/* WARNING: Removing unreachable block (ram,0x0001090960a4) */
/* WARNING: Removing unreachable block (ram,0x0001090960b0) */
/* WARNING: Removing unreachable block (ram,0x0001090960bc) */

void FUN_109095fec(void)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined1 auStack_140 [64];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_d8 [136];
  
  func_0x000109096168();
  _objc_retain();
  if (unaff_x19 == 0) {
    func_0x0001090961d8();
    func_0x000109096188();
    func_0x000109096210();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000109096160();
    func_0x0001090961e0();
    func_0x000109096160();
    func_0x0001090961e8();
    func_0x0001090961d8();
    func_0x000109096188();
    __Unwind_Resume(unaff_x20);
  }
  else {
    func_0x0001090961d0();
    func_0x000109096200();
    func_0x00010bf00b40();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    lVar1 = unaff_x19;
    func_0x00010bf529e0();
    func_0x0001056c5718(&uStack_100,lVar1);
    func_0x0001090961a8();
    unaff_x21 = unaff_x19;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (unaff_x21,PTR_s_countByEnumeratingWithState_obje_1125b2440,auStack_140,auStack_d8,0x10)
  ;
  return;
}



/* Entry: 10909614c; end: 10909626f;  */

void FUN_10909614c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 109096270; end: 1090962bf;  */

ulong FUN_109096270(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  uStack_20 = param_1[2];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
  puVar1 = &uStack_30;
  _CMTimeCompare(puVar1,&uStack_50);
  uVar2 = (ulong)(0 < (int)puVar1);
  if ((int)puVar1 < 0) {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



/* Entry: 1090962c0; end: 10909636f;  */

ulong FUN_1090962c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  iVar1 = (int)&uStack_70;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  _CMTimeCompare(&uStack_70,&uStack_40);
  if (iVar1 < 1) {
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uStack_68 = param_1[1];
      uStack_70 = *param_1;
      uStack_58 = param_1[3];
      uStack_60 = param_1[2];
      uStack_48 = param_1[5];
      uStack_50 = param_1[4];
      _CMTimeRangeGetEnd(&uStack_40,&uStack_70);
      uStack_68 = param_2[1];
      uStack_70 = *param_2;
      uStack_60 = param_2[2];
      puVar3 = &uStack_40;
      _CMTimeCompare(puVar3,&uStack_70);
      uVar2 = (ulong)((int)puVar3 < 1);
    }
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



/* Entry: 109096370; end: 1090963c3;  */

void FUN_109096370(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010bffa3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090963c4; end: 109096453;  */

ulong FUN_1090963c4(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if (((uVar3 & 1) != 0) && (uVar3 = param_1, func_0x00010c08fa60(), 3 < uVar3)) {
    uVar3 = param_1;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    if (uVar3 == 0) goto LAB_10909642c;
    uVar2 = uVar3;
    _strlen();
    if (3 < uVar2) {
      func_0x0001090cbf58(uVar3);
      goto LAB_10909642c;
    }
  }
  uVar3 = 0;
LAB_10909642c:
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 109096454; end: 10909647f;  */

void FUN_109096454(long param_1)

{
  _CMSampleBufferGetFormatDescription();
  if (param_1 != 0) {
    _CMFormatDescriptionGetMediaType();
  }
  return;
}



/* Entry: 109096480; end: 109096543;  */

void FUN_109096480(void)

{
  undefined *puVar1;
  
  func_0x000109096b3c();
  func_0x000109096b44();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  func_0x000109096b4c();
  func_0x00010c1d0640(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  func_0x000109096b1c();
  func_0x000109096b14();
  func_0x000109096b0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109096544; end: 10909663f;  */

void FUN_109096544(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  func_0x000109096b3c();
  func_0x000109096b44();
  func_0x000109096b5c();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  func_0x000109096b4c();
  func_0x00010c1d0640(puVar1);
  func_0x00010bf529e0();
  if (param_3 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  func_0x000109096b24();
  func_0x000109096b1c();
  func_0x000109096b14();
  func_0x000109096b0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109096640; end: 1090966bf;  */

void FUN_109096640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1090966c0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_109096480();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109096b14();
  func_0x000109096b0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1090966c0; end: 1090966fb;  */

void FUN_1090966c0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f1fd18);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090966fc; end: 10909673f;  */

void FUN_1090966fc(void)

{
  FUN_1090966c0();
  _objc_retainAutoreleasedReturnValue();
  FUN_109096480();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109096b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109096740; end: 1090967af;  */

void FUN_109096740(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50;
  FUN_1090966c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f020(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110dc4658);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090967b0; end: 1090967f7;  */

undefined8 FUN_1090967b0(undefined8 param_1)

{
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  func_0x000109096b0c();
  return param_1;
}



/* Entry: 1090967f8; end: 10909689b;  */

void FUN_1090967f8(void)

{
  undefined **unaff_x19;
  undefined **ppuVar1;
  
  func_0x000109096b3c();
  ppuVar1 = unaff_x19;
  FUN_1090967b0();
  if (((ulong)ppuVar1 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  else {
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110f1fc58;
    if (unaff_x19 != (undefined **)0x0) {
      ppuVar1 = unaff_x19;
    }
    func_0x000109096b5c();
    _objc_release(unaff_x19);
    func_0x000109096b14();
  }
  func_0x000109096b0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10909689c; end: 1090969ff;  */

void FUN_10909689c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **unaff_x19;
  long lStack_48;
  
  func_0x000109096b3c();
  ppuVar2 = unaff_x19;
  FUN_1090967b0();
  if (((ulong)ppuVar2 & 1) == 0) {
    unaff_x19 = (undefined **)0x0;
  }
  else {
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = unaff_x19;
    func_0x000109096b1c();
    func_0x000109096b4c();
    if (ppuVar2 == (undefined **)0x0) {
      unaff_x19 = &PTR____CFConstantStringClassReference_110f1fcb8;
    }
    else {
      lStack_48 = 0;
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
      func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                          &PTR____CFConstantStringClassReference_110f1fc78,0,&lStack_48);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lStack_48;
      ppuVar3 = ppuVar2;
      func_0x000109096b5c();
      func_0x000109096b4c();
      ppuVar4 = ppuVar2;
      func_0x00010c25cfa0(ppuVar2,param_2,unaff_x19,0,0,ppuVar3,
                          &PTR____CFConstantStringClassReference_110f1fc98);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0 && ppuVar4 != (undefined **)0x0) {
        unaff_x19 = ppuVar4;
      }
      _objc_retain(unaff_x19);
      _objc_release(ppuVar4);
      _objc_release(ppuVar2);
      func_0x000109096b1c();
    }
    func_0x000109096b14();
  }
  func_0x000109096b0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 109096a00; end: 109096a47;  */

void FUN_109096a00(void)

{
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109096b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109096a48; end: 109096a7f; -[SCNeoErrorHolder error] */

void FUN_109096a48(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x000109096b3c();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000109096b44();
  _objc_sync_exit();
  func_0x000109096b0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109096a80; end: 109096af3; -[SCNeoErrorHolder onError:] */

bool FUN_109096a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x000109096b44();
  _objc_sync_enter(param_1);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _objc_sync_exit(param_1);
  func_0x000109096b14();
  func_0x000109096b0c();
  return lVar2 == 0;
}



/* Entry: 109096af4; end: 109096b6b; -[SCNeoErrorHolder .cxx_destruct] */

void FUN_109096af4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109096b6c; end: 109096c03; +[SCNeoFileMediaDataProviderFactory sharedInstance] */

void FUN_109096b6c(void)

{
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001090e40ec(&uStack_28);
  FUN_109095798(&lStack_48,uStack_28);
  lStack_38 = 0;
  if (lStack_48 != 0) {
    lStack_38 = lStack_48 + 0x18;
  }
  uStack_30 = uStack_40;
  lStack_48 = 0;
  uStack_40 = 0;
  FUN_109102350(&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  FUN_109096c04();
  func_0x000109095838(&lStack_48);
  FUN_109095860(&uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109096c04; end: 109096c0f;  */

undefined1 * FUN_109096c04(void)

{
  long in_stack_00000020;
  
  if (in_stack_00000020 != 0) {
    func_0x000107c278a0();
  }
  return &stack0x00000018;
}



/* Entry: 109096c10; end: 10909704f; -[SCNeoInstruments initWithConfiguration:url:videoRendererPerformanceMetricsProvider:isDataProviderFactoryExistent:] */

/* WARNING: Removing unreachable block (ram,0x000109096cd4) */

undefined8 *
FUN_109096c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,int param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 auStack_98 [8];
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR_PTR_112700400;
  puVar6 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar6,PTR_s_init_1125d9248);
  if (puVar6 != (undefined8 *)0x0) {
    uVar7 = param_3;
    func_0x00010bf53a00();
    ppuVar1 = &PTR____CFConstantStringClassReference_110f1fd38;
    if ((int)uVar7 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    _objc_retain(ppuVar1);
    if (param_4 != 0) {
      func_0x00010beec820(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      func_0x0001090971f4();
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110f1fd58;
    if (param_6 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e704b8;
    }
    _objc_retain(ppuVar2);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _arc4random_uniform();
    func_0x00010c25d9e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090971f4();
    _objc_retain(puVar5);
    uVar7 = puVar6[2];
    puVar6[2] = puVar5;
    _objc_release(uVar7);
    puVar8 = PTR_PTR_1126dd380;
    _objc_alloc();
    func_0x00010c0cd8c0(param_3);
    func_0x00010c02c0c0();
    uVar7 = puVar6[5];
    puVar6[5] = puVar8;
    func_0x000109097200(uVar7);
    lVar9 = puVar6[5];
    func_0x00010c067b40();
    if (lVar9 != 0) {
      plVar13 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_88 = lVar9;
    FUN_109095bd4(auStack_98,puVar5);
    FUN_109104a74(&puStack_b0,param_5);
    puVar10 = (undefined8 *)0x60;
    __Znwm();
    plVar13 = puVar10 + 1;
    *plVar13 = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_FUN_110ad7598;
    puVar12 = puVar10 + 3;
    puStack_68 = puStack_a8;
    puStack_70 = puStack_b0;
    puStack_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    FUN_1090fdeec(puVar12,auStack_98,&lStack_88,&puStack_70);
    FUN_109097164(&puStack_70);
    if ((puVar10[5] == 0) || (*(long *)(puVar10[5] + 8) == -1)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puStack_70 = puVar12;
      puStack_68 = puVar10;
      func_0x000107c278e4(puVar10 + 4,&puStack_70);
      func_0x000107c278ec(&puStack_70);
    }
    ppuVar11 = (undefined8 **)(puVar6 + 1);
    puStack_90 = puVar12;
    if (ppuVar11 != &puStack_90) {
      puStack_90 = (undefined8 *)0x0;
      puVar10 = *ppuVar11;
      *ppuVar11 = puVar12;
      FUN_10909590c(puVar10);
    }
    FUN_1090958e8(&puStack_90);
    FUN_109097164(&puStack_b0);
    func_0x000107c278f4(auStack_98);
    puVar12 = *ppuVar11;
    puStack_68 = (undefined8 *)puVar12[6];
    puStack_70 = (undefined8 *)puVar12[5];
    if (puVar12[6] != 0) {
      plVar13 = (long *)(puVar12[6] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuVar11 = &puStack_70;
    FUN_109102b98();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar6[4];
    puVar6[4] = ppuVar11;
    func_0x000109097200(uVar7);
    FUN_1090971c4(&puStack_70);
    lVar9 = puVar6[1];
    puStack_68 = *(undefined8 **)(lVar9 + 0x20);
    puStack_70 = *(undefined8 **)(lVar9 + 0x18);
    if (*(long *)(lVar9 + 0x20) != 0) {
      plVar13 = (long *)(*(long *)(lVar9 + 0x20) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuVar11 = &puStack_70;
    FUN_109103b04();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar6[3];
    puVar6[3] = ppuVar11;
    func_0x000109097200(uVar7);
    FUN_10909501c(&puStack_70);
    FUN_109097110(&lStack_88);
    _objc_release(ppuVar1);
    _objc_release(puVar5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 109097050; end: 10909709f; -[SCNeoInstruments dealloc] */

void FUN_109097050(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    func_0x000107c3105c();
  }
  puStack_28 = PTR_PTR_112700400;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090970a0; end: 1090970a7; -[SCNeoInstruments instance] */

undefined8 FUN_1090970a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1090970a8; end: 1090970af; -[SCNeoInstruments identifier] */

undefined8 FUN_1090970a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1090970b0; end: 1090970b7; -[SCNeoInstruments tracer] */

undefined8 FUN_1090970b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1090970b8; end: 1090970bf; -[SCNeoInstruments playbackStatisticsTracker] */

undefined8 FUN_1090970b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1090970c0; end: 1090970c7; -[SCNeoInstruments eventLogger] */

undefined8 FUN_1090970c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1090970c8; end: 109097107; -[SCNeoInstruments .cxx_destruct] */

undefined8 FUN_1090970c8(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1090971ec(param_1 + 0x28);
  FUN_1090971ec(param_1 + 0x20);
  FUN_1090971ec(param_1 + 0x18);
  FUN_1090971ec(param_1 + 0x10);
  func_0x000107c34edc(param_1 + 8);
  FUN_10909590c();
  return unaff_x19;
}



/* Entry: 109097108; end: 10909710f; -[SCNeoInstruments .cxx_construct] */

void FUN_109097108(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 109097110; end: 109097137;  */

undefined8 * FUN_109097110(undefined8 *param_1)

{
  FUN_109097138(*param_1);
  return param_1;
}



/* Entry: 109097138; end: 109097163;  */

void FUN_109097138(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010909715c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 109097164; end: 10909718b;  */

long FUN_109097164(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10909718c; end: 10909718f;  */

void FUN_10909718c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad7598;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109097190; end: 1090971a3;  */

void FUN_109097190(void)

{
  func_0x0001090971b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090971a4; end: 1090971c3;  */

void FUN_1090971a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090971ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090971c4; end: 1090971eb;  */

long FUN_1090971c4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1090971ec; end: 10909720f;  */

void FUN_1090971ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 109097210; end: 109097293; -[SCNeoIntKeyDictionary init] */

undefined1 * FUN_109097210(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700408;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109097294; end: 10909729b; -[SCNeoIntKeyDictionary count] */

void FUN_109097294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10909729c; end: 1090972a3; -[SCNeoIntKeyDictionary allValues] */

void FUN_10909729c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_allValues_11259dcf0);
  return;
}



/* Entry: 1090972a4; end: 1090972fb; -[SCNeoIntKeyDictionary objectForKey:] */

void FUN_1090972a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090974e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1090972fc; end: 10909737b; -[SCNeoIntKeyDictionary setObject:forKey:] */

void FUN_1090972fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_3,puVar1);
  func_0x0001090974f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10909737c; end: 1090973c7; -[SCNeoIntKeyDictionary removeObjectForKey:] */

void FUN_10909737c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1090973c8; end: 1090973cf; -[SCNeoIntKeyDictionary removeAllObjects] */

void FUN_1090973c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 1090973d0; end: 109097467; -[SCNeoIntKeyDictionary enumerateEntriesWithBlock:] */

void FUN_1090973d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_109097468;
  puStack_30 = &UNK_110ad75d8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97ce0(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109097468; end: 1090974d7;  */

void FUN_109097468(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c067fc0(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1,param_3);
  func_0x0001090974f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1090974d8; end: 10909759b; -[SCNeoIntKeyDictionary .cxx_destruct] */

void FUN_1090974d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10909759c; end: 10909776f;  */

undefined8 FUN_10909759c(long param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  uVar5 = param_4;
  func_0x00010c2778c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b80();
  _objc_release(uVar5);
  uVar4 = *(ushort *)(param_1 + 0x48);
  uVar7 = *(uint *)(param_1 + 0x4c);
  func_0x000109097514();
  uStack_58 = 0;
  uStack_78 = NEON_ucvtf((ulong)uVar7);
  uStack_5c = (uint)uVar4;
  uStack_60 = 0;
  uStack_68 = 0;
  if (param_2 == 0x6d703461) {
    uStack_70 = 0x61616320;
    uStack_64 = 0x400;
    uVar3 = *(ulong *)(param_1 + 8);
    lVar1 = 4;
    uVar2 = uVar3 - 4;
    if (uVar3 < 4 || uVar3 - 4 == 0) {
      lVar1 = 0;
      uVar2 = uVar3;
    }
    uStack_8c = 0;
    uStack_94 = 0;
    uStack_7c = 0;
    uStack_84 = 0;
    if (uStack_5c == 1) {
      uStack_98 = 0x640001;
    }
    else {
      if (uVar4 != 2) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110f1fdd8;
        goto LAB_109097718;
      }
      uStack_98 = 0x650002;
    }
    uStack_a0 = 0;
    uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CMAudioFormatDescriptionCreate
              (uVar5,&uStack_78,0x20,&uStack_98,uVar2,*(long *)(param_1 + 0x10) + lVar1,0,&uStack_a0
              );
    if ((int)uVar5 != 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110f1fdf8;
      FUN_1090966fc(&PTR____CFConstantStringClassReference_110f1fdf8,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_3 = ppuVar6;
    }
    func_0x00010c2778c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000109097e14();
    func_0x000109097dfc();
    uVar5 = uStack_a0;
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110f1fdb8;
LAB_109097718:
    FUN_109096480(ppuVar6,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = ppuVar6;
    func_0x00010c2778c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000109097e14();
    func_0x000109097dfc();
    uVar5 = 0;
  }
  func_0x000109097df4();
  return uVar5;
}



/* Entry: 109097770; end: 109097d0b;  */

ulong FUN_109097770(long param_1,undefined8 param_2,ulong *param_3,undefined8 *param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  uint *puVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined **ppuStack_c0;
  uint *puStack_b8;
  undefined **ppuStack_b0;
  uint *puStack_a8;
  undefined **ppuStack_a0;
  uint *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined2 *)(param_1 + 0x48);
  uVar2 = *(undefined2 *)(param_1 + 0x4a);
  func_0x000109097514();
  iVar6 = (int)param_2;
  if (iVar6 == 0x68763120 || iVar6 == 0x68657631) {
    param_2 = 0x68766331;
  }
  else if (iVar6 == 0x61766333) {
    param_2 = 0x61766331;
  }
  puVar8 = (uint *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  if (*(int *)(param_1 + 0x50) != 0) {
    uStack_90 = *(undefined8 *)PTR__kCVImageBufferPixelAspectRatioHorizontalSpacingKey_11034a2f0;
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df820();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = *(undefined8 *)PTR__kCVImageBufferPixelAspectRatioVerticalSpacingKey_11034a300;
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_80 = puVar9;
    func_0x00010c0df820();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = puVar10;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x000109097e20();
    func_0x000109097df4();
    func_0x00010c1d0640();
    func_0x000109097dfc();
  }
  puVar28 = *(uint **)(param_1 + 0x40);
  if ((puVar28 != (uint *)0x0) && (uVar29 = *(ulong *)(param_1 + 0x38), 7 < uVar29)) {
    lVar15 = *(long *)PTR__kCMFormatDescriptionColorPrimaries_ITU_R_2020_110348570;
    lVar25 = *(long *)PTR__kCMFormatDescriptionColorPrimaries_P3_D65_110348578;
    lVar16 = *(long *)PTR__kCMFormatDescriptionColorPrimaries_DCI_P3_110348568;
    lVar26 = *(long *)PTR__kCVImageBufferColorPrimaries_SMPTE_C_11034a2e0;
    lVar17 = *(long *)PTR__kCVImageBufferColorPrimaries_ITU_R_709_2_11034a2d0;
    lVar18 = *(long *)PTR__kCMFormatDescriptionTransferFunction_ITU_R_2100_HLG_110348590;
    lVar19 = *(long *)PTR__kCMFormatDescriptionTransferFunction_SMPTE_ST_2084_PQ_110348598;
    lVar20 = *(long *)PTR__kCMFormatDescriptionTransferFunction_sRGB_1103485a0;
    lVar21 = *(long *)PTR__kCVImageBufferTransferFunction_UseGamma_11034a340;
    lVar22 = *(long *)PTR__kCVImageBufferTransferFunction_ITU_R_709_2_11034a328;
    lVar23 = *(long *)PTR__kCMFormatDescriptionYCbCrMatrix_ITU_R_2020_1103485a8;
    lVar24 = *(long *)PTR__kCVImageBufferYCbCrMatrix_ITU_R_709_2_11034a368;
    while (7 < uVar29) {
      puVar11 = puVar28;
      FUN_109097d0c();
      uVar7 = (uint)puVar11;
      if (uVar7 == 0) break;
      uVar30 = (ulong)puVar11 & 0xffffffff;
      bVar5 = uVar29 < uVar30;
      uVar29 = uVar29 - uVar30;
      if (bVar5) break;
      puVar11 = puVar28 + 1;
      FUN_109097d0c();
      if (0xb < uVar7 && (int)puVar11 == 0x636f6c72) {
        puVar11 = puVar28 + 2;
        FUN_109097d0c();
        if ((int)puVar11 == 0x6e636c78 && uVar30 - 0x13 < 0xfffffffffffffff5) {
          lVar14 = 0;
          switch((ushort)puVar28[3] >> 8 | (ushort)puVar28[3] << 8) {
          case 1:
            lVar14 = lVar17;
            break;
          case 4:
            lVar14 = lVar26;
            break;
          case 5:
            lVar14 = lVar16;
            break;
          case 6:
            lVar14 = lVar25;
            break;
          case 9:
            lVar14 = lVar15;
          }
          uVar7 = (uint)(*(ushort *)((long)puVar28 + 0xe) >> 8) |
                  (*(ushort *)((long)puVar28 + 0xe) & 0xff00ff) << 8;
          lVar27 = lVar21;
          if ((((1 < uVar7 - 4) && (lVar27 = lVar18, uVar7 != 0x12)) &&
              (lVar27 = lVar20, uVar7 != 0xd)) &&
             ((lVar27 = lVar19, uVar7 != 0x10 && (lVar27 = lVar22, uVar7 != 1)))) {
            lVar27 = 0;
          }
          uVar3 = (ushort)puVar28[4] >> 8 | (ushort)puVar28[4] << 8;
          lVar4 = lVar23;
          if ((uVar3 != 9) && (lVar4 = lVar24, uVar3 != 1)) {
            lVar4 = 0;
          }
          if (lVar14 != 0) {
            puVar11 = puVar8;
            func_0x00010c1d0640();
          }
          if (lVar27 != 0) {
            puVar11 = puVar8;
            func_0x00010c1d0640();
          }
          if (lVar4 != 0) {
            puVar11 = puVar8;
            func_0x00010c1d0640();
          }
        }
      }
      puVar28 = (uint *)((long)puVar28 + uVar30);
    }
  }
  if (*(int *)(param_1 + 0x7c) == 0) {
    if (*(int *)(param_1 + 0x80) == 0) {
      if (*(int *)(param_1 + 0x90) == 0) goto LAB_109097c34;
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110f1fe58;
      func_0x000109097e04();
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = puVar11;
    }
    else {
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110f1fe38;
      func_0x000109097e04();
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = puVar11;
    }
  }
  else {
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110f1fe18;
    func_0x000109097e04();
    func_0x00010bf64a00();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = puVar11;
  }
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar8);
  func_0x000109097e20();
  func_0x000109097df4();
LAB_109097c34:
  uStack_e8 = param_3[1];
  uStack_f0 = *param_3;
  uStack_d8 = param_3[3];
  uStack_e0 = param_3[2];
  uStack_c8 = param_3[5];
  uStack_d0 = param_3[4];
  FUN_1090c1a80(&uStack_f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar8);
  func_0x000109097df4();
  uStack_f0 = 0;
  uVar12 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CMVideoFormatDescriptionCreate(uVar12,param_2,uVar1,uVar2,puVar8,&uStack_f0);
  if ((int)uVar12 != 0) {
    ppuVar13 = &PTR____CFConstantStringClassReference_110f1fe78;
    FUN_1090966fc(&PTR____CFConstantStringClassReference_110f1fe78,uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = ppuVar13;
  }
  uVar29 = uStack_f0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar29;
  }
  ___stack_chk_fail();
  uVar7 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
  return (ulong)(uVar7 >> 0x10 | uVar7 << 0x10);
}



/* Entry: 109097d0c; end: 109097d0f;  */

uint FUN_109097d0c(uint *param_1)

{
  uint uVar1;
  
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}



/* Entry: 109097d10; end: 109097df3;  */

void FUN_109097d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000109097e20();
  puVar3 = puVar2;
  FUN_109096544(puVar2,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000109097df4();
  _objc_release(puVar2);
  func_0x000109097dfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109097df4; end: 109097e33;  */

void FUN_109097df4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 109097e34; end: 109098057;  */

void FUN_109097e34(byte *param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  byte bVar1;
  uint uVar2;
  byte **ppbVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  uint uVar7;
  byte **ppbVar8;
  undefined *puVar9;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  byte *pbStack_78;
  long lStack_70;
  byte *pbStack_68;
  
  pbStack_68 = param_1;
  if (1 < param_2 + 1U) {
    pbStack_78 = param_1 + 1;
    bVar1 = *param_1;
    lStack_70 = param_2 + -1;
    if (bVar1 < 2) {
      ppbVar8 = &pbStack_78;
      func_0x0001091067dc();
      FUN_109098058();
      ppbVar3 = ppbVar8;
      FUN_109098058();
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = (int)ppbVar8;
      }
      ppbVar8 = &pbStack_78;
      if (bVar1 == 0) {
        func_0x000109106814(ppbVar8);
        ppbVar8 = (byte **)((ulong)ppbVar8 & 0xffffffff);
        FUN_109098058();
      }
      else {
        func_0x00010910685c();
        func_0x00010910685c(&pbStack_78);
      }
      func_0x000109106790(&pbStack_78);
      uVar2 = (uint)&pbStack_78;
      func_0x000109106790();
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar9;
      for (uVar7 = 0; uVar7 < uVar2; uVar7 = uVar7 + 1) {
        FUN_109098058();
        puVar5 = puVar4;
        FUN_109098058();
        FUN_109098058();
        if ((int)puVar4 < 0) {
          FUN_109096480(&PTR____CFConstantStringClassReference_110f1fed8,0);
          _objc_unsafeClaimAutoreleasedReturnValue();
          goto LAB_109098048;
        }
        puVar4 = PTR_PTR_1126dd388;
        _objc_alloc();
        _CMTimeMake(auStack_90,ppbVar8,ppbVar3);
        _CMTimeMake(auStack_a8,(ulong)puVar5 & 0xffffffff,ppbVar3);
        func_0x00010c0389a0();
        func_0x00010befa120(puVar9);
        ppbVar8 = (byte **)((long)ppbVar8 + ((ulong)puVar5 & 0xffffffff));
        _objc_release();
      }
      if (lStack_70 == -1) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110f1fef8;
        FUN_109096480(&PTR____CFConstantStringClassReference_110f1fef8,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_5 = ppuVar6;
LAB_109098048:
        _objc_release(puVar9);
        puVar9 = (undefined *)0x0;
      }
      goto LAB_109097ea4;
    }
  }
  ppuVar6 = &PTR____CFConstantStringClassReference_110f1feb8;
  FUN_109096480(&PTR____CFConstantStringClassReference_110f1feb8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  puVar9 = (undefined *)0x0;
  *param_5 = ppuVar6;
LAB_109097ea4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 109098058; end: 10909805f;  */

uint FUN_109098058(void)

{
  byte bVar1;
  long *plVar2;
  uint uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x9;
  uint extraout_w10;
  long in_stack_00000040;
  
  plVar2 = (long *)&stack0x00000038;
  if (in_stack_00000040 + 1U < 5) {
    uVar3 = 0xffffffff;
    lVar4 = -1;
  }
  else {
    func_0x0001091069d4();
    bVar1 = *(byte *)(extraout_x8 + 2);
    *plVar2 = extraout_x8 + 4;
    uVar3 = (uint)*(byte *)(extraout_x8 + 3) | (extraout_w10 | bVar1) << 8;
    lVar4 = extraout_x9 + -4;
  }
  plVar2[1] = lVar4;
  return uVar3;
}



/* Entry: 109098060; end: 109098143; -[SCNeoMP4StreamParser init] */

undefined1 * FUN_109098060(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112700410;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000109099ca4(uVar5);
    *(undefined8 *)((long)puVar1 + 0x50) = 0x140;
    *(undefined8 *)((long)puVar1 + 0x48) = 0x198;
    lVar3 = 0x198;
    FUN_1090947b0();
    *(long *)((long)puVar1 + 0x38) = lVar3;
    lVar4 = *(long *)((long)puVar1 + 0x50);
    if (lVar4 == 0) {
      lVar4 = *(long *)((long)puVar1 + 0x40);
    }
    else {
      FUN_1090947b0();
      *(long *)((long)puVar1 + 0x40) = lVar4;
      lVar3 = *(long *)((long)puVar1 + 0x38);
    }
    _bzero(lVar3,0x198);
    *(undefined ***)(lVar3 + 0x168) = &PTR_DAT_110adc8c0;
    *(long *)(lVar3 + 0x170) = lVar4;
    *(undefined ***)(lVar3 + 0x178) = &PTR_DAT_110adc960;
    *(undefined ***)(lVar3 + 0x180) = &PTR_DAT_110adc8a0;
    *(long *)(lVar3 + 0x188) = lVar3;
    *(undefined8 *)(lVar3 + 400) = 0x8000000000;
    *(long *)((long)puVar1 + 0x20) = lVar3;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109098144; end: 109098193; -[SCNeoMP4StreamParser dealloc] */

void FUN_109098144(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x38));
  _free(*(undefined8 *)(param_1 + 0x40));
  puStack_28 = PTR_PTR_112700410;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109098194; end: 109098223; -[SCNeoMP4StreamParser mutableCopy] */

undefined * FUN_109098194(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dd390;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar2);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(puVar1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(puVar1 + 0x28) = uVar2;
  puVar1[0x58] = *(undefined1 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c0d3c80();
  uVar3 = *(undefined8 *)(puVar1 + 0x60);
  *(undefined8 *)(puVar1 + 0x60) = uVar2;
  func_0x000109099ca4(uVar3);
  puVar1[0x59] = *(undefined1 *)(param_1 + 0x59);
  func_0x00010c200b00(puVar1,param_2,*(undefined1 *)(param_1 + 0x68));
  return puVar1;
}



/* Entry: 109098224; end: 109098323; +[SCNeoMP4StreamParser canParseBuffer:] */

ulong FUN_109098224(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *in_x7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined1 *puStack_2f0;
  ulong auStack_2d0 [3];
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [32];
  uint uStack_260;
  int iStack_1c8;
  int iStack_1c4;
  undefined1 auStack_1b0 [18];
  byte bStack_19e;
  uint uStack_190;
  long lStack_100;
  uint uStack_f4;
  uint uStack_ec;
  undefined8 uStack_e0;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  puVar6 = (undefined1 *)param_3;
  func_0x000109099c1c();
  uStack_58 = extraout_x8;
  _objc_retain(puVar6);
  lVar11 = (long)&uStack_68 + 4;
  uVar10 = 0;
  func_0x00010bf51ee0();
  if ((int)param_3 == 0) {
    uVar13 = 0;
  }
  else {
    lVar18 = 0;
    while( true ) {
      uVar13 = (ulong)(lVar18 != 0x50);
      in_ZR = 1;
      if (lVar18 == 0x50) break;
      uVar17 = *(ulong *)((long)&PTR_DAT_110ad76e0 + lVar18);
      uVar3 = uVar17;
      _strlen();
      uVar10 = uVar3;
      if (7 < uVar3) {
        uVar10 = 8;
      }
      param_3 = &uStack_70;
      ___memcpy_chk(&uStack_70,uVar17,uVar10,8);
      in_ZR = uVar3 == 7;
      if (uVar3 < 8) {
        if ((uStack_70 ^ uStack_60) << (uVar3 * -8 & 0x3f) == 0) break;
      }
      else {
        in_ZR = 1;
        if (uStack_60 == uStack_70) break;
      }
      lVar18 = lVar18 + 8;
    }
  }
  func_0x000109099c14();
  func_0x000109099bf0(uStack_58);
  if ((bool)in_ZR) {
    return uVar13;
  }
  ___stack_chk_fail();
  func_0x000109099c1c();
  uStack_e0 = extraout_x8_00;
  _objc_retain(uStack_70);
  lVar18 = 0x570;
  FUN_1090947b0();
  uVar4 = 0;
  FUN_1090947b0();
  if (lVar18 != 0) {
    _bzero(lVar18,0x570);
  }
  puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b0 = 0xc0000000;
  pcStack_2a8 = FUN_1090988bc;
  puStack_2a0 = &UNK_110ad7730;
  lStack_298 = lVar18;
  lStack_290 = lVar18;
  uStack_288 = uVar4;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)((long)param_3 + 0x20);
  func_0x000109097514();
  uVar1 = (int)uVar4 == 0x6d6f6f66;
  puVar6 = (undefined1 *)param_3;
  if ((bool)uVar1) {
    puVar5 = *(undefined1 **)((long)param_3 + 0x10);
    uVar4 = 0;
    if (puVar5 == (undefined1 *)0x0) goto LAB_1090984bc;
    func_0x00010bf25f00();
    uVar4 = *(undefined8 *)((long)param_3 + 0x10);
    func_0x00010c08fa60();
    func_0x000109099ccc();
    FUN_109106c0c();
    func_0x000109099cb4();
    func_0x00010910a448();
    if ((int)uVar4 == 0) {
      puVar6 = *(undefined1 **)(puVar5 + 8);
      func_0x00010c0d3c60();
      uVar4 = *(undefined8 *)((long)param_3 + 8);
      func_0x00010c08fa60();
      func_0x000109099ccc();
      FUN_109106c0c();
      goto LAB_1090984bc;
    }
    func_0x000109099cf8();
    func_0x00010bdf85e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR____CFConstantStringClassReference_110f1ff18;
    FUN_109097d10(&PTR____CFConstantStringClassReference_110f1ff18,uVar4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *uStack_68 = ppuVar9;
  }
  else {
LAB_1090984bc:
    puVar5 = puVar6;
    func_0x000109099cb4();
    func_0x00010910a448();
    if ((int)uVar4 == 0) {
      lVar14 = *(long *)(lVar18 + 0x1a0);
      if (lVar14 == 0) {
        puVar21 = (undefined *)0x0;
      }
      else {
        uVar12 = *(uint *)(lVar18 + 0x19c);
        puVar21 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
        _objc_opt_new();
        for (uVar13 = (ulong)uVar12; uVar13 != 0; uVar13 = uVar13 - 1) {
          func_0x00010bef92c0(puVar21);
        }
      }
      puStack_2f0 = (undefined1 *)0x0;
      lVar19 = 0;
LAB_10909858c:
      _bzero(auStack_1b0,0xd0);
      lVar7 = lVar18;
      FUN_109109b9c(lVar18,auStack_1b0);
      iVar2 = (int)lVar7;
      if (iVar2 == 0) goto LAB_1090985bc;
      if (iVar2 == 0x14) goto code_r0x0001090985b4;
      uVar1 = iVar2 == 0x11;
      if ((bool)uVar1) {
        if ((in_x7 == (undefined8 *)0x0) || ((lVar14 == 0 && (lVar19 == 0)))) {
          uVar10 = 0;
        }
        else {
          puVar21 = PTR_PTR_1126dd388;
          _objc_alloc();
          _CMTimeMake(auStack_280,0,*(undefined4 *)(uVar10 + 8));
          _CMTimeMake(auStack_2d0,*(undefined8 *)(uVar10 + 0x10),*(undefined4 *)(uVar10 + 8));
          func_0x00010bf21d60(puStack_2f0);
          func_0x00010c0389a0();
          _objc_autorelease();
          uVar10 = 0;
          *in_x7 = puVar21;
        }
      }
      else {
        func_0x00010bdf85e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = &PTR____CFConstantStringClassReference_110f1ff38;
        FUN_109097d10(&PTR____CFConstantStringClassReference_110f1ff38,lVar7,param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *uStack_68 = ppuVar9;
        func_0x000109099c2c();
        uVar10 = 3;
      }
      func_0x000109099d18();
LAB_109098880:
      _objc_release(puStack_2f0);
      func_0x000109099cac();
      goto LAB_109098890;
    }
    func_0x000109099cf8();
    func_0x00010bdf85e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR____CFConstantStringClassReference_110f1ff18;
    FUN_109097d10(&PTR____CFConstantStringClassReference_110f1ff18,uVar4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *uStack_68 = ppuVar9;
  }
  _objc_release(puVar5);
  uVar10 = 3;
LAB_109098890:
  func_0x000109099c84();
  _objc_release();
  func_0x000109099bf0(uStack_e0);
  if ((bool)uVar1) {
    return uVar10;
  }
  uVar10 = uStack_70;
  ___stack_chk_fail();
  func_0x00010910a50c(*(undefined8 *)(uVar10 + 0x20));
  _free(*(undefined8 *)(uVar10 + 0x28));
  uVar10 = *(ulong *)(uVar10 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar10);
  return uVar10;
code_r0x0001090985b4:
  if (lVar11 != 1) {
LAB_1090985bc:
    func_0x000109099d24();
    func_0x00010c04e940();
    func_0x00010bf96660();
    auStack_2d0[0] = (ulong)uStack_190;
    func_0x000109099d04();
    lVar19 = lVar19 + 1;
    if (puVar21 == (undefined *)0x0) {
      if (lVar11 == 1) {
        puVar15 = (undefined *)0x1;
      }
      else {
        puVar15 = (undefined *)(ulong)((bStack_19e & 1) == 0);
      }
    }
    else {
      puVar15 = puVar21;
      func_0x00010bf4b800();
    }
    uVar12 = uStack_190;
    lVar20 = lStack_100 + (ulong)uStack_f4;
    if (lVar11 == 2) {
      puVar6 = auStack_1b0;
      FUN_1090988ec(puVar6,*(undefined4 *)(uVar10 + 8),lVar20,uStack_190,1,puVar15,lVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _bzero(auStack_280,0xd0);
      iVar2 = 0;
      for (uVar16 = 1; uVar16 < uStack_ec; uVar16 = uVar16 + 1) {
        lVar8 = lVar18;
        FUN_109109b9c(lVar18,auStack_280);
        if ((int)lVar8 == 0) {
          lVar19 = lVar19 + 1;
          auStack_2d0[0] = (ulong)uStack_260;
          uVar12 = uStack_260 + uVar12;
          lVar20 = lVar20 + (ulong)(uint)(iStack_1c4 + iStack_1c8);
          func_0x000109099d04();
        }
        else {
          uVar1 = (int)lVar8 == 0x14;
          if (!(bool)uVar1) {
            func_0x000109099d18();
            func_0x00010bdf85e0(param_3);
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = &PTR____CFConstantStringClassReference_110f1ff38;
            FUN_109097d10(&PTR____CFConstantStringClassReference_110f1ff38,lVar8,param_3);
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *uStack_68 = ppuVar9;
            func_0x000109099c14();
            func_0x000109099cf0();
            uVar10 = 3;
            goto LAB_109098880;
          }
          iVar2 = iVar2 + 1;
        }
      }
      puVar6 = auStack_1b0;
      FUN_1090988ec(puVar6,*(undefined4 *)(uVar10 + 8),lVar20,uVar12,uStack_ec - iVar2,puVar15,lVar7
                   );
      _objc_retainAutoreleasedReturnValue();
    }
    if (puStack_2f0 == (undefined1 *)0x0) {
      func_0x000109099d10();
      puStack_2f0 = puVar6;
    }
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6a20();
    func_0x000109099c14();
    func_0x000109099c2c();
    func_0x000109099cf0();
  }
  goto LAB_10909858c;
}



/* Entry: 109098324; end: 1090988bb; -[SCNeoMP4StreamParser _parseSamplesOfStream:movieInfo:streamInfoType:trackInfo:overallBufferOffset:singleSegmentInfo:buffer:error:] */

undefined8
FUN_109098324(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 *param_8,long param_9,
             undefined8 *param_10)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined8 extraout_x8;
  uint uVar11;
  ulong uVar12;
  undefined *puVar13;
  uint uVar14;
  long lVar15;
  undefined *puVar16;
  undefined1 *puStack_280;
  ulong auStack_260 [3];
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [32];
  uint uStack_1f0;
  int iStack_158;
  int iStack_154;
  undefined1 auStack_140 [18];
  byte bStack_12e;
  uint uStack_120;
  long lStack_90;
  uint uStack_84;
  uint uStack_7c;
  undefined8 uStack_70;
  
  func_0x000109099c1c();
  uStack_70 = extraout_x8;
  _objc_retain(param_9);
  lVar3 = 0x570;
  FUN_1090947b0();
  uVar4 = 0;
  FUN_1090947b0();
  if (lVar3 != 0) {
    _bzero(lVar3,0x570);
  }
  puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_240 = 0xc0000000;
  pcStack_238 = FUN_1090988bc;
  puStack_230 = &UNK_110ad7730;
  lStack_228 = lVar3;
  lStack_220 = lVar3;
  uStack_218 = uVar4;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000109097514();
  uVar1 = (int)uVar4 == 0x6d6f6f66;
  lVar6 = param_1;
  if ((bool)uVar1) {
    lVar5 = *(long *)(param_1 + 0x10);
    uVar4 = 0;
    if (lVar5 == 0) goto LAB_1090984bc;
    func_0x00010bf25f00();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c08fa60();
    func_0x000109099ccc();
    FUN_109106c0c();
    func_0x000109099cb4();
    func_0x00010910a448();
    if ((int)uVar4 == 0) {
      lVar6 = *(long *)(lVar5 + 8);
      func_0x00010c0d3c60();
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c08fa60();
      func_0x000109099ccc();
      FUN_109106c0c();
      goto LAB_1090984bc;
    }
    func_0x000109099cf8();
    func_0x00010bdf85e0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = &PTR____CFConstantStringClassReference_110f1ff18;
    FUN_109097d10(&PTR____CFConstantStringClassReference_110f1ff18,uVar4,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_10 = ppuVar10;
  }
  else {
LAB_1090984bc:
    lVar5 = lVar6;
    func_0x000109099cb4();
    func_0x00010910a448();
    if ((int)uVar4 == 0) {
      lVar6 = *(long *)(lVar3 + 0x1a0);
      if (lVar6 == 0) {
        puVar16 = (undefined *)0x0;
      }
      else {
        uVar11 = *(uint *)(lVar3 + 0x19c);
        puVar16 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
        _objc_opt_new();
        for (uVar12 = (ulong)uVar11; uVar12 != 0; uVar12 = uVar12 - 1) {
          func_0x00010bef92c0(puVar16);
        }
      }
      puStack_280 = (undefined1 *)0x0;
      lVar5 = 0;
LAB_10909858c:
      _bzero(auStack_140,0xd0);
      lVar7 = lVar3;
      FUN_109109b9c(lVar3,auStack_140);
      iVar2 = (int)lVar7;
      if (iVar2 == 0) goto LAB_1090985bc;
      if (iVar2 == 0x14) goto code_r0x0001090985b4;
      uVar1 = iVar2 == 0x11;
      if ((bool)uVar1) {
        if ((param_8 == (undefined8 *)0x0) || ((lVar6 == 0 && (lVar5 == 0)))) {
          uVar4 = 0;
        }
        else {
          puVar16 = PTR_PTR_1126dd388;
          _objc_alloc();
          _CMTimeMake(auStack_210,0,*(undefined4 *)(param_3 + 8));
          _CMTimeMake(auStack_260,*(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 8));
          func_0x00010bf21d60(puStack_280);
          func_0x00010c0389a0();
          _objc_autorelease();
          uVar4 = 0;
          *param_8 = puVar16;
        }
      }
      else {
        func_0x00010bdf85e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = &PTR____CFConstantStringClassReference_110f1ff38;
        FUN_109097d10(&PTR____CFConstantStringClassReference_110f1ff38,lVar7,param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_10 = ppuVar10;
        func_0x000109099c2c();
        uVar4 = 3;
      }
      func_0x000109099d18();
LAB_109098880:
      _objc_release(puStack_280);
      func_0x000109099cac();
      goto LAB_109098890;
    }
    func_0x000109099cf8();
    func_0x00010bdf85e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = &PTR____CFConstantStringClassReference_110f1ff18;
    FUN_109097d10(&PTR____CFConstantStringClassReference_110f1ff18,uVar4,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_10 = ppuVar10;
  }
  _objc_release(lVar5);
  uVar4 = 3;
LAB_109098890:
  func_0x000109099c84();
  _objc_release();
  func_0x000109099bf0(uStack_70);
  if ((bool)uVar1) {
    return uVar4;
  }
  ___stack_chk_fail();
  func_0x00010910a50c(*(undefined8 *)(param_9 + 0x20));
  _free(*(undefined8 *)(param_9 + 0x28));
  uVar4 = *(undefined8 *)(param_9 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar4);
  return uVar4;
code_r0x0001090985b4:
  if (param_5 != 1) {
LAB_1090985bc:
    func_0x000109099d24();
    func_0x00010c04e940();
    func_0x00010bf96660();
    auStack_260[0] = (ulong)uStack_120;
    func_0x000109099d04();
    lVar5 = lVar5 + 1;
    if (puVar16 == (undefined *)0x0) {
      if (param_5 == 1) {
        puVar13 = (undefined *)0x1;
      }
      else {
        puVar13 = (undefined *)(ulong)((bStack_12e & 1) == 0);
      }
    }
    else {
      puVar13 = puVar16;
      func_0x00010bf4b800();
    }
    uVar11 = uStack_120;
    lVar15 = lStack_90 + (ulong)uStack_84;
    if (param_5 == 2) {
      puVar9 = auStack_140;
      FUN_1090988ec(puVar9,*(undefined4 *)(param_3 + 8),lVar15,uStack_120,1,puVar13,lVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _bzero(auStack_210,0xd0);
      iVar2 = 0;
      for (uVar14 = 1; uVar14 < uStack_7c; uVar14 = uVar14 + 1) {
        lVar8 = lVar3;
        FUN_109109b9c(lVar3,auStack_210);
        if ((int)lVar8 == 0) {
          lVar5 = lVar5 + 1;
          auStack_260[0] = (ulong)uStack_1f0;
          uVar11 = uStack_1f0 + uVar11;
          lVar15 = lVar15 + (ulong)(uint)(iStack_154 + iStack_158);
          func_0x000109099d04();
        }
        else {
          uVar1 = (int)lVar8 == 0x14;
          if (!(bool)uVar1) {
            func_0x000109099d18();
            func_0x00010bdf85e0(param_1);
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = &PTR____CFConstantStringClassReference_110f1ff38;
            FUN_109097d10(&PTR____CFConstantStringClassReference_110f1ff38,lVar8,param_1);
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *param_10 = ppuVar10;
            func_0x000109099c14();
            func_0x000109099cf0();
            uVar4 = 3;
            goto LAB_109098880;
          }
          iVar2 = iVar2 + 1;
        }
      }
      puVar9 = auStack_140;
      FUN_1090988ec(puVar9,*(undefined4 *)(param_3 + 8),lVar15,uVar11,uStack_7c - iVar2,puVar13,
                    lVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    if (puStack_280 == (undefined1 *)0x0) {
      func_0x000109099d10();
      puStack_280 = puVar9;
    }
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6a20();
    func_0x000109099c14();
    func_0x000109099c2c();
    func_0x000109099cf0();
  }
  goto LAB_10909858c;
}



/* Entry: 1090988bc; end: 1090988eb;  */

void FUN_1090988bc(long param_1)

{
  func_0x00010910a50c(*(undefined8 *)(param_1 + 0x20));
  _free(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_1 + 0x30));
  return;
}


