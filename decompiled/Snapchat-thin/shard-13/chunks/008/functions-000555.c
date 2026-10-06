/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10adabf34; end: 10adabf3f; -[LSALensInfo allowReloadingForRestarting] */

byte FUN_10adabf34(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 10adabf40; end: 10adabf47; -[LSALensInfo setAllowReloadingForRestarting:] */

void FUN_10adabf40(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10adabf48; end: 10adabf53; -[LSALensInfo contentPath] */

void FUN_10adabf48(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 10adabf54; end: 10adabf5b; -[LSALensInfo apiLevel] */

undefined8 FUN_10adabf54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10adabf5c; end: 10adabf63; -[LSALensInfo publicApiUserDataAccess] */

undefined8 FUN_10adabf5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10adabf64; end: 10adabf6f; -[LSALensInfo launchMetadata] */

void FUN_10adabf64(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 10adabf70; end: 10adabf77; -[LSALensInfo renderOrder] */

undefined8 FUN_10adabf70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10adabf78; end: 10adabf7f; -[LSALensInfo chainGroup] */

undefined8 FUN_10adabf78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10adabf80; end: 10adabf87; -[LSALensInfo randomSeed] */

undefined8 FUN_10adabf80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10adabf88; end: 10adabf8f; -[LSALensInfo lensStudioDevFlags] */

undefined8 FUN_10adabf88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10adabf90; end: 10adabf9b; -[LSALensInfo isWarmup] */

byte FUN_10adabf90(long param_1)

{
  return *(byte *)(param_1 + 9) & 1;
}



/* Entry: 10adabf9c; end: 10adabfd7; -[LSALensInfo .cxx_destruct] */

void FUN_10adabf9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10adabfd8; end: 10adac4bb;  */

void FUN_10adabfd8(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  char cVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  code *pcVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 ***pppuVar14;
  ulong uVar15;
  undefined4 uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 uStack_80;
  char cStack_71;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  
  _objc_retain();
  puVar10 = (undefined8 *)0xc0;
  __Znwm();
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_FUN_110c73b80;
  puVar18 = puVar10 + 3;
  puVar10[4] = 0;
  *puVar18 = 0;
  puVar10[0xe] = 0;
  puVar10[0xd] = 0;
  puVar10[6] = 0;
  puVar10[5] = 0;
  puVar10[8] = 0;
  puVar10[7] = 0;
  puVar10[10] = 0;
  puVar10[9] = 0;
  puVar10[0xc] = 0;
  puVar10[0xb] = 0;
  puVar10[0x10] = 0;
  puVar10[0xf] = 0;
  puVar10[0x12] = 0;
  puVar10[0x11] = 0;
  puVar10[0xe] = 0xffffffffffffffff;
  plVar20 = puVar10 + 0x13;
  puVar10[0x14] = 0;
  *plVar20 = 0;
  puVar10[0x16] = 0;
  puVar10[0x15] = 0;
  puVar10[0x17] = 0;
  *param_1 = puVar18;
  param_1[1] = puVar10;
  uVar11 = param_2;
  func_0x00010bf01440();
  *(char *)((long)puVar10 + 0x79) = (char)uVar11;
  uVar11 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar11 != 0) {
    uVar11 = param_2;
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar11;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    func_0x000107c2c4dc(puVar18,uVar19);
    _objc_release(uVar11);
  }
  uVar11 = param_2;
  func_0x00010bf4cf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar11 != 0) {
    uVar11 = param_2;
    func_0x00010bf4cf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar11;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    func_0x000107c31940(&ppuStack_70,uVar19);
    _objc_release(uVar11);
    cStack_71 = '\0';
    puVar12 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010bf4cf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bfacc00();
    _objc_release(uVar11);
    _objc_release(puVar12);
    if ((int)puVar13 == 0) {
      func_0x00010c094540(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      FUN_10adac5b4();
LAB_10adac3ec:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10adac3f0);
      (*pcVar9)();
    }
    pppuVar2 = (undefined8 ***)ppuStack_68;
    pppuVar6 = (undefined8 ***)ppuStack_70;
    if (-1 < (long)uStack_60) {
      pppuVar2 = (undefined8 ***)(uStack_60 >> 0x38);
      pppuVar6 = &ppuStack_70;
    }
    if (cStack_71 == '\0') {
      FUN_10a151324(&ppuStack_90,pppuVar6,pppuVar2);
    }
    else {
      if ((undefined8 ***)0x7ffffffffffffff7 < pppuVar2) {
        func_0x000104c4f6b8();
        goto LAB_10adac3ec;
      }
      if (pppuVar2 < (undefined8 ***)0x17) {
        uStack_80 = CONCAT17((char)pppuVar2,(undefined7)uStack_80);
        pppuVar14 = &ppuStack_90;
        if (pppuVar2 != (undefined8 ***)0x0) goto LAB_10adac1e0;
      }
      else {
        pppuVar3 = (undefined8 ***)0x19;
        if (((ulong)pppuVar2 | 7) != 0x17) {
          pppuVar3 = (undefined8 ***)(((ulong)pppuVar2 | 7) + 1);
        }
        pppuVar14 = pppuVar3;
        __Znwm();
        uStack_80 = (ulong)pppuVar3 | 0x8000000000000000;
        ppuStack_90 = pppuVar14;
        ppuStack_88 = pppuVar2;
LAB_10adac1e0:
        _memmove(pppuVar14,pppuVar6,pppuVar2);
      }
      *(undefined1 *)((long)pppuVar14 + (long)pppuVar2) = 0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (puVar10 + 6,&ppuStack_90);
    if ((long)uStack_80 < 0) {
      __ZdlPv(ppuStack_90);
    }
    if ((long)uStack_60 < 0) {
      __ZdlPv(ppuStack_70);
    }
  }
  uVar11 = param_2;
  func_0x00010bf04b60();
  if (uVar11 < 3) {
    *(undefined4 *)((long)puVar10 + 0x4c) = *(undefined4 *)(&UNK_10e513748 + uVar11 * 4);
  }
  uVar11 = param_2;
  func_0x00010c11a260();
  if (uVar11 == 0) {
    uVar16 = 0;
  }
  else {
    if (uVar11 != 1) goto LAB_10adac264;
    uVar16 = 1;
  }
  *(undefined4 *)(puVar10 + 10) = uVar16;
LAB_10adac264:
  uVar11 = param_2;
  func_0x00010c12fde0();
  *(int *)(puVar10 + 0xe) = (int)uVar11;
  uVar11 = param_2;
  func_0x00010bf34b80();
  *(int *)((long)puVar10 + 0x74) = (int)uVar11;
  uVar11 = param_2;
  func_0x00010c11f1e0();
  if (uVar11 != 0xffffffffffffffff) {
    uVar11 = param_2;
    func_0x00010c11f1e0();
    *(int *)((long)puVar10 + 0x54) = (int)uVar11;
    *(undefined1 *)(puVar10 + 0xb) = 1;
  }
  uVar11 = param_2;
  func_0x00010c08ba80();
  _objc_retainAutoreleasedReturnValue();
  if (uVar11 != 0) {
    ppuStack_70 = (undefined8 **)0x0;
    ppuStack_68 = (undefined8 **)0x0;
    uStack_60 = 0;
    uVar19 = uVar11;
    func_0x00010c08fa60(uVar11);
    uVar19 = uVar19 & 0xffffffff;
    func_0x000107c31950(&ppuStack_70,uVar19);
    uVar15 = uVar11;
    _objc_retainAutorelease(uVar11);
    func_0x00010bf25f00();
    func_0x0001092a2dc0(&ppuStack_70,uVar15,uVar15 + uVar19,uVar19);
    uVar19 = uStack_60;
    ppuVar8 = ppuStack_68;
    ppuVar7 = ppuStack_70;
    ppuStack_68 = (undefined8 ***)0x0;
    uStack_60 = 0;
    ppuStack_70 = (undefined8 ***)0x0;
    if (*plVar20 != 0) {
      puVar10[0x14] = *plVar20;
      __ZdlPv();
      *plVar20 = 0;
      puVar10[0x14] = 0;
      puVar10[0x15] = 0;
    }
    puVar10[0x14] = ppuVar8;
    puVar10[0x13] = ppuVar7;
    plVar20 = (long *)puVar10[0x17];
    puVar10[0x15] = uVar19;
    puVar10[0x16] = 0;
    puVar10[0x17] = 0;
    if (plVar20 != (long *)0x0) {
      plVar1 = plVar20 + 1;
      do {
        lVar17 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    if ((undefined8 ***)ppuStack_70 != (undefined8 ***)0x0) {
      ppuStack_68 = ppuStack_70;
      __ZdlPv();
    }
  }
  uVar19 = param_2;
  func_0x00010c096fe0();
  puVar10[0x10] = uVar19;
  uVar19 = param_2;
  func_0x00010c0839c0();
  *(char *)(puVar10 + 0xf) = (char)uVar19;
  _objc_release(uVar11);
  _objc_release(param_2);
  return;
}



/* Entry: 10adac4bc; end: 10adac4cb;  */

void FUN_10adac4bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73b80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10adac4cc; end: 10adac4eb;  */

void FUN_10adac4cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73b80;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adac4ec; end: 10adac5af;  */

void FUN_10adac4ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0xb8);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
    __ZdlPv();
  }
  plVar5 = *(long **)(param_1 + 0x68);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  if (-1 < *(char *)(param_1 + 0x2f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10adac5b0; end: 10adac5b3;  */

void FUN_10adac5b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adac5b4; end: 10adac7ef;  */

void FUN_10adac5b4(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_2f0 [264];
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [264];
  char cStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c31940(auStack_1b8,param_1);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_1d0,*param_2,param_2[1]);
  }
  else {
    uStack_1c8 = param_2[1];
    uStack_1d0 = *param_2;
    lStack_1c0 = param_2[2];
  }
  func_0x000107c31940(auStack_1e8,&UNK_10f6ad524);
  FUN_10a1b95dc(auStack_1a0,auStack_1b8,0,&uStack_1d0,auStack_1e8);
  if (cStack_1d1 < '\0') {
    __ZdlPv(auStack_1e8[0]);
  }
  if (lStack_1c0 < 0) {
    __ZdlPv(uStack_1d0);
  }
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  func_0x00010a0ec6dc(auStack_2f0,1);
  if (cStack_88 == '\x01') {
    _memcpy(auStack_190,auStack_2f0,0x104);
  }
  else {
    _memcpy(auStack_190,auStack_2f0,0x108);
    cStack_88 = '\x01';
  }
  puVar2 = (undefined8 *)0x170;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_190,0x110);
  *puVar2 = &PTR_FUN_110bacb58;
  puVar2[0x26] = uStack_70;
  puVar2[0x25] = uStack_78;
  puVar2[0x24] = uStack_80;
  uStack_78 = 0;
  uStack_80 = 0;
  *(undefined4 *)(puVar2 + 0x27) = uStack_68;
  puVar2[0x2a] = uStack_50;
  puVar2[0x29] = uStack_58;
  puVar2[0x28] = uStack_60;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  puVar2[0x2d] = uStack_38;
  puVar2[0x2c] = uStack_40;
  puVar2[0x2b] = uStack_48;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  ___cxa_throw(puVar2,&PTR_DAT_110bacb30,FUN_10a1b9580);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10adac754);
  (*pcVar1)();
}



/* Entry: 10adac7f0; end: 10adac97b; -[LSASetCompositeLensOperation initWithEffects:] */

undefined8 * FUN_10adac7f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127013c8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
      func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd11c0();
      _objc_release(puVar5);
    }
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar5 = PTR_s_lensId_112602b60;
    _NSStringFromSelector(PTR_s_lensId_112602b60);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c296f80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = lVar4;
    _objc_release(uVar2);
    _objc_release(lVar3);
    _objc_release(puVar5);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10adac97c; end: 10adace8b; -[LSASetCompositeLensOperation performWithCoreManager:lensComponent:async:keepActiveLensesUntilLoaded:] */

long ** FUN_10adac97c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 ****param_4,
                     int param_5,int param_6)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  code *pcVar7;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 **ppuVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long ***ppplVar18;
  long lVar19;
  long **pplStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long **pplStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long **pplStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 ****ppppuStack_200;
  long **pplStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  long ***ppplStack_1a8;
  long ***ppplStack_1a0;
  long ***ppplStack_198;
  undefined8 ***pppuStack_190;
  undefined8 ***pppuStack_188;
  long ***ppplStack_180;
  long ***ppplStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c15d9a0(param_4);
  pppuStack_1b0 = (long ***)0x0;
  ppplStack_1a8 = (long ***)0x0;
  ppplStack_1a0 = (long ***)0x0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lVar14 = *(long *)(param_1 + 8);
  _objc_retain(lVar14);
  lVar8 = lVar14;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar19 = *plStack_1e0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1e0 != lVar19) {
          _objc_enumerationMutation(lVar14);
        }
        uVar16 = *(undefined8 *)(lStack_1e8 + lVar13 * 8);
        ppppuVar9 = param_4;
        func_0x00010bf04760(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf44360();
        _objc_release(ppppuVar9);
        uVar15 = uVar16;
        func_0x00010c094540(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a7160(param_4);
        _objc_release(uVar15);
        FUN_10adabfd8(&ppppuStack_200,uVar16);
        if (ppplStack_1a8 < ppplStack_1a0) {
          ppplStack_1a8[1] = pplStack_1f8;
          *ppplStack_1a8 = (long **)ppppuStack_200;
          ppplStack_1a8 = ppplStack_1a8 + 2;
        }
        else {
          lVar17 = (long)ppplStack_1a8 - (long)pppuStack_1b0;
          uVar1 = (lVar17 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            FUN_10adacec4();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10adacda8);
            (*pcVar7)();
          }
          uVar12 = (long)ppplStack_1a0 - (long)pppuStack_1b0 >> 3;
          if (uVar12 <= uVar1) {
            uVar12 = uVar1;
          }
          if (0x7fffffffffffffef < (ulong)((long)ppplStack_1a0 - (long)pppuStack_1b0)) {
            uVar12 = 0xfffffffffffffff;
          }
          ppppuVar9 = &pppuStack_1b0;
          ppplStack_178 = (long ***)&pppuStack_1b0;
          FUN_10adaced8();
          puVar3 = (undefined8 *)((long)ppppuVar9 + lVar17);
          ppppuVar10 = (undefined8 ****)(puVar3 + 2);
          puVar3[1] = pplStack_1f8;
          *puVar3 = ppppuStack_200;
          ppppuStack_200 = (undefined8 ****)0x0;
          pplStack_1f8 = (long **)0x0;
          ppplVar18 = (long ***)((long)puVar3 - ((long)ppplStack_1a8 - (long)pppuStack_1b0));
          _memcpy(ppplVar18);
          ppplStack_198 = pppuStack_1b0;
          pppuStack_188 = pppuStack_1b0;
          ppplStack_180 = ppplStack_1a0;
          pppuStack_190 = pppuStack_1b0;
          pppuStack_1b0 = ppplVar18;
          ppplStack_1a8 = (long ***)ppppuVar10;
          ppplStack_1a0 = (long ***)(ppppuVar9 + uVar12 * 2);
          FUN_10ad45818(&ppplStack_198);
          pplVar6 = pplStack_1f8;
          ppplStack_1a8 = (long ***)ppppuVar10;
          if ((undefined8 ***)pplStack_1f8 != (undefined8 ***)0x0) {
            pppuVar2 = (undefined8 ***)(pplStack_1f8 + 1);
            do {
              ppuVar11 = *pppuVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
              if (bVar5) {
                *pppuVar2 = (undefined8 **)((long)ppuVar11 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppuVar11 == (undefined8 **)0x0) {
              (*(code *)(*pplStack_1f8)[2])(pplStack_1f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar6);
            }
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar8);
      lVar8 = lVar14;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar14);
  ppplStack_198 = (long ***)0x0;
  pppuStack_190 = (undefined8 ***)0x0;
  pppuStack_188 = (undefined8 ***)0x0;
  FUN_10adacf0c(&ppplStack_198,pppuStack_1b0,ppplStack_1a8,
                (long)ppplStack_1a8 - (long)pppuStack_1b0 >> 4);
  uVar15 = *param_3;
  if (param_5 == 0) {
    pplStack_248 = (long **)0x0;
    uStack_240 = 0;
    uStack_238 = 0;
    FUN_10adacf0c(&pplStack_248,ppplStack_198,pppuStack_190,
                  (long)pppuStack_190 - (long)ppplStack_198 >> 4);
    ppppuVar9 = (undefined8 ****)&pplStack_248;
    FUN_10a21cc60(uVar15,&pplStack_248);
  }
  else if (param_6 == 0) {
    pplStack_230 = (long **)0x0;
    uStack_228 = 0;
    uStack_220 = 0;
    FUN_10adacf0c(&pplStack_230,ppplStack_198,pppuStack_190,
                  (long)pppuStack_190 - (long)ppplStack_198 >> 4);
    ppppuVar9 = (undefined8 ****)&pplStack_230;
    FUN_10a21d1bc(uVar15,&pplStack_230);
  }
  else {
    pplStack_218 = (long **)0x0;
    uStack_210 = 0;
    uStack_208 = 0;
    FUN_10adacf0c(&pplStack_218,ppplStack_198,pppuStack_190,
                  (long)pppuStack_190 - (long)ppplStack_198 >> 4);
    ppppuVar9 = (undefined8 ****)&pplStack_218;
    FUN_10a21d230(uVar15,&pplStack_218);
  }
  ppppuStack_200 = ppppuVar9;
  FUN_10adacfe0(&ppppuStack_200);
  lVar19 = *(long *)(param_1 + 8);
  _objc_retain(lVar19);
  lVar8 = lVar19;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(lVar19);
      }
      ppppuVar9 = param_4;
      func_0x00010bf04760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf44320();
      _objc_release(ppppuVar9);
      lVar13 = lVar13 + 1;
    } while (lVar8 != lVar13);
    lVar8 = lVar19;
    func_0x00010bf52a60();
  }
  _objc_release(lVar19);
  ppppuStack_200 = &ppplStack_198;
  FUN_10adacfe0(&ppppuStack_200);
  ppplStack_198 = (long ***)&pppuStack_1b0;
  FUN_10adacfe0(&ppplStack_198);
  ppppuVar10 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (long **)0x0;
  }
  ___stack_chk_fail();
  ppppuStack_200 = ppppuVar9;
  FUN_10adacfe0(&ppppuStack_200);
  ppppuStack_200 = &ppplStack_198;
  FUN_10adacfe0(&ppppuStack_200);
  ppppuStack_200 = &pppuStack_1b0;
  FUN_10adacfe0(&ppppuStack_200);
  _objc_release(param_4);
  __Unwind_Resume();
  return (long **)ppppuVar10[2];
}



/* Entry: 10adace8c; end: 10adace93; -[LSASetCompositeLensOperation effectKey] */

undefined8 FUN_10adace8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10adace94; end: 10adacec3; -[LSASetCompositeLensOperation .cxx_destruct] */

void FUN_10adace94(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10adacec4; end: 10adaced7;  */

void FUN_10adacec4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3c == 0) {
    __Znwm((long)param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_10adacfa8();
    puVar5 = *(undefined8 **)(puVar4 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar6 = param_2[1];
      uVar7 = *param_2;
      puVar5[1] = param_2[1];
      *puVar5 = uVar7;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar5 = puVar5 + 2;
    }
    *(undefined8 **)(puVar4 + 8) = puVar5;
  }
  return;
}



/* Entry: 10adaced8; end: 10adacf0b;  */

void FUN_10adaced8(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    __Znwm((long)param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_10adacfa8();
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
      if (lVar5 != 0) {
        plVar1 = (long *)(lVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 10adacf0c; end: 10adacfa7;  */

void FUN_10adacf0c(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10adacfa8(param_1,param_4);
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
      if (lVar5 != 0) {
        plVar1 = (long *)(lVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 10adacfa8; end: 10adacfdf;  */

void FUN_10adacfa8(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 >> 0x3c == 0) {
    plVar3 = param_1;
    FUN_10adaced8();
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(plVar3 + param_2 * 2);
    return;
  }
  FUN_10adacec4();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10ada1fb0();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10adacfe0; end: 10adad04f;  */

void FUN_10adacfe0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10ada1fb0();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10adad050; end: 10adad0ab; -[LSASetLensOperationFactory operationWithLensInfo:] */

void FUN_10adad050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126de160;
  _objc_alloc(PTR_PTR_1126de160);
  func_0x00010c024a60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10adad0ac; end: 10adad107; -[LSASetLensOperationFactory compositeOperationWithLensInfos:] */

void FUN_10adad0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126de168;
  _objc_alloc(PTR_PTR_1126de168);
  func_0x00010c00f0e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10adad108; end: 10adad18f; -[LSASetSingleLensOperation initWithLensInfo:] */

undefined1 * FUN_10adad108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127013d0;
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



/* Entry: 10adad190; end: 10adad1df; -[LSASetSingleLensOperation effectKey] */

void FUN_10adad190(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = *(undefined ***)(param_1 + 8);
  func_0x00010bf4cf00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10adad1e0; end: 10adad4db; -[LSASetSingleLensOperation performWithCoreManager:lensComponent:async:keepActiveLensesUntilLoaded:] */

undefined8
FUN_10adad1e0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,int param_5,
             int param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long *plStack_50;
  undefined1 *puStack_48;
  
  _objc_retain(param_4);
  FUN_10adabfd8(&uStack_58,*(undefined8 *)(param_1 + 8));
  uVar5 = param_4;
  func_0x00010bf04760(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44360();
  _objc_release(uVar5);
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010bf4cf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    func_0x00010c15d9a0(param_4);
    FUN_10a21dfec(*param_3);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c094540(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a7160(param_4);
    _objc_release(uVar5);
    if (((*(long *)(*(long *)(*(long *)*param_3 + 0x180) + 0xb8) != 0) &&
        (lVar4 = *(long *)(*(long *)(*(long *)(*(long *)*param_3 + 0x180) + 0xa8) + 0x28),
        lVar4 != 0)) && (FUN_10a5ad8fc(lVar4,uStack_58), (int)lVar4 != 0)) {
      uVar5 = *param_3;
      if (param_5 == 0) {
        FUN_10a21cc00(uVar5,&uStack_58);
      }
      else if (param_6 == 0) {
        FUN_10a21d144(uVar5,&uStack_58,0,0);
      }
      else {
        FUN_10a22b034(auStack_70,&uStack_58);
        FUN_10a21d230(uVar5,auStack_70);
        puStack_48 = auStack_70;
        FUN_10adacfe0(&puStack_48);
      }
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c094540(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dda0(param_4);
      _objc_release(uVar5);
      uVar5 = 1;
      goto LAB_10adad36c;
    }
    func_0x00010c15d9a0(param_4);
    uVar5 = *param_3;
    if (param_5 == 0) {
      FUN_10a21cc00(uVar5,&uStack_58);
    }
    else if (param_6 == 0) {
      FUN_10a21d144(uVar5,&uStack_58,0,0);
    }
    else {
      FUN_10a22b034(auStack_88,&uStack_58);
      FUN_10a21d230(uVar5,auStack_88);
      puStack_48 = auStack_88;
      FUN_10adacfe0(&puStack_48);
    }
  }
  uVar5 = 0;
LAB_10adad36c:
  uVar6 = param_4;
  func_0x00010bf04760(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44320();
  _objc_release(uVar6);
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
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
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
    }
  }
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 10adad4dc; end: 10adad4e7; -[LSASetSingleLensOperation .cxx_destruct] */

void FUN_10adad4dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10adad4e8; end: 10adad6cb; -[LSALocationComponent setCoreManager:announcer:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adad4e8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  plStack_48 = (long *)param_3[1];
  uStack_50 = *param_3;
  if (param_3[1] != 0) {
    plVar8 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_58 = PTR_PTR_1127013d8;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_setCoreManager_announcer_configu_11263ea88,&uStack_50,param_4
                      ,param_5);
  plVar8 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  puVar5 = (undefined8 *)0x28;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110c73bd0;
  puStack_70 = puVar5 + 3;
  *puStack_70 = &PTR_FUN_110c73c20;
  puVar5[4] = 0;
  puVar2 = (undefined8 *)(param_1 + _DAT_112784480);
  plVar8 = (long *)puVar2[1];
  *puVar2 = puStack_70;
  puVar2[1] = puVar5;
  if (plVar8 == (long *)0x0) {
    uVar6 = *param_3;
    puStack_68 = puVar5;
  }
  else {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    uVar6 = *param_3;
    puVar5 = (undefined8 *)puVar2[1];
    puStack_68 = (undefined8 *)puVar2[1];
    puStack_70 = (undefined8 *)*puVar2;
    if (puVar5 == (undefined8 *)0x0) goto LAB_10adad64c;
  }
  plVar8 = puVar5 + 2;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = *plVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_10adad64c:
  FUN_10a226d14(uVar6,&puStack_70);
  if (puStack_68 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10adad6cc; end: 10adad7a3; -[LSALocationComponent setDataProvider:] */

void FUN_10adad6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10adad7a4;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f92c0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10adad7a4; end: 10adad7db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adad7a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784480);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(lVar3 + 8);
  *(undefined8 *)(lVar3 + 8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10adad7dc; end: 10adad8b3; -[LSALocationComponent removeDataProvider:] */

void FUN_10adad7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10adad8b4;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f92c0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10adad8b4; end: 10adad8db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adad8b4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784480);
  if (*(long *)(lVar1 + 8) != *(long *)(param_1 + 0x28)) {
    return;
  }
  *(undefined8 *)(lVar1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10adad8dc; end: 10adad93f; -[LSALocationComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adad8dc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + _DAT_112784480 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10adad940; end: 10adad963; -[LSALocationComponent .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adad940(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112784480;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  return;
}



/* Entry: 10adad964; end: 10adad983;  */

void FUN_10adad964(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c73bd0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adad984; end: 10adad993;  */

void FUN_10adad984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adad98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10adad994; end: 10adad9ef; -[LSALocationParams initWithIntervalMillis:distanceFilterMeters:desiredAccuracy:] */

void FUN_10adad994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127013e0;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
  }
  return;
}



/* Entry: 10adad9f0; end: 10adad9f7; -[LSALocationParams intervalMillis] */

undefined4 FUN_10adad9f0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10adad9f8; end: 10adad9ff; -[LSALocationParams distanceFilterMeters] */

undefined8 FUN_10adad9f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10adada00; end: 10adada07; -[LSALocationParams desiredAccuracy] */

undefined8 FUN_10adada00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10adada08; end: 10adada7f;  */

undefined8 * FUN_10adada08(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_1 = &PTR_FUN_110c73c20;
  param_1[1] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[1]);
  return param_1;
}



/* Entry: 10adada80; end: 10adadb67;  */

void FUN_10adada80(long param_1,double *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 unaff_d8;
  double dVar4;
  
  bVar1 = *(byte *)(param_2 + 2);
  if (bVar1 < 2) {
    puVar3 = (undefined8 *)PTR__kCLLocationAccuracyHundredMeters_110349b80;
    if ((bVar1 != 0) &&
       (puVar3 = (undefined8 *)PTR__kCLLocationAccuracyBestForNavigation_110349b78, bVar1 != 1))
    goto LAB_10adadafc;
  }
  else {
    puVar3 = (undefined8 *)PTR__kCLLocationAccuracyBest_110349b70;
    if ((bVar1 != 2) &&
       ((puVar3 = (undefined8 *)PTR__kCLLocationAccuracyNearestTenMeters_110349b88, bVar1 != 3 &&
        (puVar3 = (undefined8 *)PTR__kCLLocationAccuracyHundredMeters_110349b80, bVar1 != 4))))
    goto LAB_10adadafc;
  }
  unaff_d8 = *puVar3;
LAB_10adadafc:
  dVar4 = *param_2;
  if (*param_2 <= 0.0) {
    dVar4 = *(double *)PTR__kCLDistanceFilterNone_110349b68;
  }
  puVar2 = PTR_PTR_1126de170;
  _objc_alloc(PTR_PTR_1126de170);
  func_0x00010c01e9a0(dVar4,unaff_d8);
  func_0x00010c24f220(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10adadb68; end: 10adadb6f;  */

void FUN_10adadb68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stopLocationUpdates_112673288);
  return;
}



/* Entry: 10adadb70; end: 10adadcb7;  */

void FUN_10adadb70(double *param_1,double param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar1 = *(long *)(param_4 + 8);
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    func_0x00010bf51c80(lVar1);
    dVar3 = param_2;
    func_0x00010bf51c80(lVar1);
    func_0x00010bf01f00(lVar1);
    dVar4 = dVar3;
    func_0x00010bfe4080(lVar1);
    dVar5 = dVar4;
    func_0x00010c298e00(lVar1);
    dVar6 = dVar5;
    func_0x00010c249ca0(lVar1);
    dVar7 = dVar6;
    func_0x00010bf537c0(lVar1);
    lVar2 = lVar1;
    dVar8 = dVar7;
    func_0x00010c2709c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(lVar2);
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = dVar3;
    param_1[3] = dVar4;
    param_1[4] = dVar5;
    param_1[5] = dVar6;
    param_1[6] = dVar7;
    param_1[7] = (double)(long)(dVar8 * 1000000000.0);
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    *(undefined4 *)(param_1 + 0xb) = 3;
  }
  *(bool *)(param_1 + 0xc) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10adadcb8; end: 10adadd0f;  */

void FUN_10adadcb8(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10ad00a7c(&uStack_38,param_1 + 8);
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  *(undefined8 *)(param_1 + 0x20) = uStack_38;
  *(undefined8 *)(param_1 + 0x30) = uStack_28;
  *(undefined8 *)(param_1 + 0x28) = uStack_30;
  return;
}



/* Entry: 10adadd10; end: 10adadd1b;  */

void FUN_10adadd10(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  return;
}



/* Entry: 10adadd1c; end: 10adaddb3;  */

undefined8 * FUN_10adadd1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73c80;
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10adaddb4; end: 10adade8b; -[LSAMetadataRecordingComponent startRecording:] */

void FUN_10adaddb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10adade8c;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10adade8c; end: 10adae10f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adade8c(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined7 uStack_50;
  char cStack_49;
  
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retainAutorelease(uVar6);
  func_0x00010bdc3520();
  puVar7 = (undefined8 *)0x38;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_110c73cc8;
  func_0x000107c31940(&uStack_60,uVar6);
  puVar7[3] = &PTR_FUN_110c73d68;
  if (cStack_49 < '\0') {
    func_0x000107c3192c(puVar7 + 4,uStack_60,lStack_58);
    if (cStack_49 < '\0') {
      __ZdlPv(uStack_60);
    }
  }
  else {
    puVar7[5] = lStack_58;
    puVar7[4] = uStack_60;
    puVar7[6] = CONCAT17(cStack_49,uStack_50);
  }
  lVar10 = (long)_DAT_112784490;
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar10);
  plVar9 = (long *)puVar3[1];
  *puVar3 = puVar7 + 3;
  puVar3[1] = puVar7;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    lStack_90 = 0;
    plStack_88 = (long *)0x0;
    lStack_70 = 0;
    plStack_68 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&lStack_90);
    lStack_70 = 0;
    plStack_68 = (long *)0x0;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88;
      __ZNSt3__119__shared_weak_count4lockEv();
      lVar8 = lStack_90;
      plStack_68 = plVar9;
      if (plVar9 != (long *)0x0) {
        lStack_70 = lStack_90;
        if (lStack_90 != 0) {
          lStack_80 = lStack_90;
          plVar1 = plVar9 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          func_0x00010a227590(lStack_90,1);
          puVar7 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar10);
          lStack_58 = puVar7[1];
          uStack_60 = *puVar7;
          if (puVar7[1] != 0) {
            plVar2 = (long *)(puVar7[1] + 0x10);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = *plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          func_0x00010a2274c0(lVar8,&uStack_60);
          if (lStack_58 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          do {
            lVar10 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
      }
    }
  }
  plVar9 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (plStack_88 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10adae110; end: 10adae197; -[LSAMetadataRecordingComponent stopRecording] */

void FUN_10adae110(undefined8 param_1)

{
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 10adae198; end: 10adae2b3;  */

void FUN_10adae198(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_30;
  long *plStack_28;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lStack_50 = 0;
    plStack_48 = (long *)0x0;
    lStack_30 = 0;
    plStack_28 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&lStack_50);
    lStack_30 = 0;
    plStack_28 = (long *)0x0;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48;
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_28 = plVar4;
      if (plVar4 != (long *)0x0) {
        lStack_30 = lStack_50;
        if (lStack_50 != 0) {
          lStack_40 = lStack_50;
          plVar1 = plVar4 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          func_0x00010a227590(lStack_50,0);
          do {
            lVar5 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
    }
  }
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (plStack_48 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10adae2b4; end: 10adae38b; -[LSAMetadataRecordingComponent startPlayback:] */

void FUN_10adae2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10adae38c;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10adae38c; end: 10adae627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adae38c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined7 uStack_50;
  char cStack_49;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lStack_90 = 0;
    plStack_88 = (long *)0x0;
    lStack_70 = 0;
    plStack_68 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&lStack_90);
    lStack_70 = 0;
    plStack_68 = (long *)0x0;
    if (plStack_88 != (long *)0x0) {
      plVar8 = plStack_88;
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_68 = plVar8;
      if (plVar8 != (long *)0x0) {
        lStack_70 = lStack_90;
        if (lStack_90 != 0) {
          lStack_80 = lStack_90;
          plVar1 = plVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plStack_78 = plVar8;
          func_0x00010a22766c(lStack_90,1);
          uVar5 = *(undefined8 *)(param_1 + 0x28);
          _objc_retainAutorelease(uVar5);
          func_0x00010bdc3520();
          puVar6 = (undefined8 *)0x50;
          __Znwm();
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = &PTR_DAT_110c73d18;
          func_0x000107c31940(&uStack_60,uVar5);
          puVar6[3] = &PTR_FUN_110c73c80;
          if (cStack_49 < '\0') {
            func_0x000107c3192c(puVar6 + 4,uStack_60,lStack_58);
            puVar6[8] = 0;
            puVar6[9] = 0;
            puVar6[7] = 0;
            if (cStack_49 < '\0') {
              __ZdlPv(uStack_60);
            }
          }
          else {
            puVar6[5] = lStack_58;
            puVar6[4] = uStack_60;
            puVar6[6] = CONCAT17(cStack_49,uStack_50);
            puVar6[8] = 0;
            puVar6[9] = 0;
            puVar6[7] = 0;
          }
          lVar9 = (long)_DAT_112784494;
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar9);
          plVar8 = (long *)puVar2[1];
          *puVar2 = puVar6 + 3;
          puVar2[1] = puVar6;
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 1;
            do {
              lVar7 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar7 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          puVar6 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar9);
          lStack_58 = puVar6[1];
          uStack_60 = *puVar6;
          if (puVar6[1] != 0) {
            plVar8 = (long *)(puVar6[1] + 0x10);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = *plVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          func_0x00010a227528(lStack_80,&uStack_60);
          if (lStack_58 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (plStack_78 != (long *)0x0) {
            plVar8 = plStack_78 + 1;
            do {
              lVar9 = *plVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_78 + 0x10))(plStack_78);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
            }
          }
        }
      }
    }
  }
  plVar8 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (plStack_88 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10adae628; end: 10adae6af; -[LSAMetadataRecordingComponent stopPlayback] */

void FUN_10adae628(undefined8 param_1)

{
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 10adae6b0; end: 10adae823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adae6b0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_40;
  long *plStack_38;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&lStack_60);
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58;
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_38 = plVar6;
      if (plVar6 != (long *)0x0) {
        lStack_40 = lStack_60;
        if (lStack_60 != 0) {
          lStack_50 = lStack_60;
          plVar1 = plVar6 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          func_0x00010a22766c(lStack_60,0);
          do {
            lVar5 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
    }
  }
  plVar6 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784494);
  plVar6 = (long *)puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10adae824; end: 10adae8cf; -[LSAMetadataRecordingComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adae824(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + _DAT_112784494 + 8);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = *(long **)(param_1 + _DAT_112784490 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10adae8d0; end: 10adae903; -[LSAMetadataRecordingComponent .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adae8d0(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112784490;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  lVar1 = (long)_DAT_112784494;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  return;
}



/* Entry: 10adae904; end: 10adae923;  */

void FUN_10adae904(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c73cc8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adae924; end: 10adae943;  */

void FUN_10adae924(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adae92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10adae944; end: 10adae963;  */

void FUN_10adae944(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c73d18;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adae964; end: 10adae987;  */

void FUN_10adae964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adae96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10adae988; end: 10adae9ff;  */

undefined8 * FUN_10adae988(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73d68;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10adaea00; end: 10adaead3; -[LSAMetricsComponent initWithPerformer:announcerQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10adaea00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127013e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithPerformer_announcerQueue_1125eac68,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126de178;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112784498);
    *(undefined **)((long)puVar1 + (long)_DAT_112784498) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10adaead4; end: 10adaecc7; -[LSAMetricsComponent setCoreManager:announcer:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adaead4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  plStack_58 = (long *)param_3[1];
  uStack_60 = *param_3;
  if (param_3[1] != 0) {
    plVar7 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_68 = PTR_PTR_1127013e8;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_setCoreManager_announcer_configu_11263ea88,&uStack_60,param_4
                      ,param_5);
  plVar7 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  puVar4 = (undefined8 *)0x28;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110c73dd8;
  puVar8 = puVar4 + 3;
  *puVar8 = &PTR_FUN_110c73e28;
  _objc_initWeak(puVar4 + 4,param_1);
  puStack_80 = (undefined8 *)(param_1 + _DAT_11278449c);
  plVar7 = (long *)puStack_80[1];
  *puStack_80 = puVar8;
  puStack_80[1] = puVar4;
  if (plVar7 == (long *)0x0) {
    uVar5 = *param_3;
    puStack_80 = puVar8;
    puStack_78 = puVar4;
  }
  else {
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    uVar5 = *param_3;
    puVar4 = (undefined8 *)puStack_80[1];
    puStack_78 = (undefined8 *)puStack_80[1];
    puStack_80 = (undefined8 *)*puStack_80;
    if (puVar4 == (undefined8 *)0x0) goto LAB_10adaec48;
  }
  plVar7 = puVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_10adaec48:
  FUN_10a226bbc(uVar5,&puStack_80);
  if (puStack_78 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10adaecc8; end: 10adaecd7; -[LSAMetricsComponent addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adaecc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112784498),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10adaecd8; end: 10adaece7; -[LSAMetricsComponent removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adaecd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112784498),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10adaece8; end: 10adaee0b; -[LSAMetricsComponent didReceiveMetrics:forLensId:] */

void FUN_10adaece8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf047a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10adaee0c;
  puStack_f0 = &UNK_110c73d98;
  uStack_70 = param_3[0xd];
  uStack_78 = param_3[0xc];
  uStack_60 = param_3[0xf];
  uStack_68 = param_3[0xe];
  uStack_50 = param_3[0x11];
  uStack_58 = param_3[0x10];
  uStack_48 = param_3[0x12];
  uStack_b0 = param_3[5];
  uStack_b8 = param_3[4];
  uStack_a0 = param_3[7];
  uStack_a8 = param_3[6];
  uStack_90 = param_3[9];
  uStack_98 = param_3[8];
  uStack_80 = param_3[0xb];
  uStack_88 = param_3[10];
  uStack_d0 = param_3[1];
  uStack_d8 = *param_3;
  uStack_c0 = param_3[3];
  uStack_c8 = param_3[2];
  uStack_e8 = param_1;
  _objc_retain(param_4);
  uStack_e0 = param_4;
  func_0x00010c0f88c0(uVar1,param_2,&puStack_108);
  _objc_release(uVar1);
  _objc_release(uStack_e0);
  _objc_release(param_4);
  return;
}



/* Entry: 10adaee0c; end: 10adaee6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adaee0c(long param_1,undefined8 param_2)

{
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = *(undefined8 *)(param_1 + 0xc0);
  uStack_48 = *(undefined8 *)(param_1 + 0x98);
  uStack_50 = *(undefined8 *)(param_1 + 0x90);
  uStack_38 = *(undefined8 *)(param_1 + 0xa8);
  uStack_40 = *(undefined8 *)(param_1 + 0xa0);
  uStack_28 = *(undefined8 *)(param_1 + 0xb8);
  uStack_30 = *(undefined8 *)(param_1 + 0xb0);
  uStack_88 = *(undefined8 *)(param_1 + 0x58);
  uStack_90 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = *(undefined8 *)(param_1 + 0x68);
  uStack_80 = *(undefined8 *)(param_1 + 0x60);
  uStack_68 = *(undefined8 *)(param_1 + 0x78);
  uStack_70 = *(undefined8 *)(param_1 + 0x70);
  uStack_58 = *(undefined8 *)(param_1 + 0x88);
  uStack_60 = *(undefined8 *)(param_1 + 0x80);
  uStack_a8 = *(undefined8 *)(param_1 + 0x38);
  uStack_b0 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = *(undefined8 *)(param_1 + 0x48);
  uStack_a0 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0ccc80(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784498),param_2,
                      *(long *)(param_1 + 0x20),&uStack_b0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10adaee70; end: 10adaeeeb; -[LSAMetricsComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adaee70(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  _objc_storeStrong(param_1 + _DAT_112784498,0);
  plVar5 = *(long **)(param_1 + _DAT_11278449c + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10adaeeec; end: 10adaef0f; -[LSAMetricsComponent .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adaeeec(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11278449c;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  return;
}



/* Entry: 10adaef10; end: 10adaef2f;  */

void FUN_10adaef10(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c73dd8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adaef30; end: 10adaef3f;  */

void FUN_10adaef30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adaef38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10adaef40; end: 10adaefc7;  */

undefined8 * FUN_10adaef40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73e28;
  _objc_storeWeak(param_1 + 1,0);
  _objc_destroyWeak(param_1 + 1);
  return param_1;
}



/* Entry: 10adaefc8; end: 10adaf167;  */

void FUN_10adaefc8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf79240(uVar1);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 10adaf168; end: 10adaf2e7; -[LSAMetricsListenerAnnouncer description] */

void FUN_10adaf168(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plStack_60;
  long *plStack_58;
  
  FUN_10adaf2e8(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar6 = *plStack_60;
  if (plStack_60[1] != lVar6) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      lVar6 = lVar6 + lVar7;
      _objc_loadWeakRetained();
      func_0x00010bf06ba0(puVar4);
      _objc_release(lVar6);
      lVar6 = *plStack_60;
      uVar5 = plStack_60[1] - lVar6 >> 3;
      if (uVar8 != uVar5 - 1) {
        func_0x00010bf070e0(puVar4);
        lVar6 = *plStack_60;
        uVar5 = plStack_60[1] - lVar6 >> 3;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar8 < uVar5);
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10adaf2e8; end: 10adaf347;  */

void FUN_10adaf2e8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 10adaf348; end: 10adaf5e3; -[LSAMetricsListenerAnnouncer addListener:] */

void FUN_10adaf348(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar10 = plVar3 + 1;
  *plVar10 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110c73e78;
  plVar8 = plVar3 + 3;
  *plVar8 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar7 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar7;
  plStack_70 = plVar8;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_10adaf5e4(plVar8,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar8;
    plStack_98 = plVar3;
    FUN_10adaf724(puVar7,&plStack_a0);
    if (plStack_98 == (long *)0x0) goto LAB_10adaf510;
    plVar3 = plStack_98 + 1;
    do {
      lVar9 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_98;
    } while (cVar1 != '\0');
  }
  else {
    lVar5 = *plVar6;
    lVar11 = plVar6[1];
    lVar9 = lVar5;
    if (lVar5 != lVar11) {
      do {
        lVar4 = lVar9;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar9;
        if (lVar4 == param_3) break;
        lVar9 = lVar9 + 8;
        lVar5 = lVar11;
      } while (lVar9 != lVar11);
      plVar6 = (long *)*puVar7;
      lVar11 = plVar6[1];
    }
    if (lVar5 != lVar11) goto LAB_10adaf510;
    for (lVar9 = *plVar6; lVar9 != lVar11; lVar9 = lVar9 + 8) {
      lVar5 = lVar9;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10adaf5e4(plVar8,lVar9);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10adaf5e4(plVar8,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar8;
    plStack_80 = plVar3;
    FUN_10adaf724(puVar7,&plStack_88);
    if (plStack_80 == (long *)0x0) goto LAB_10adaf510;
    plVar3 = plStack_80 + 1;
    do {
      lVar9 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_80;
    } while (cVar1 != '\0');
  }
  if (lVar9 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10adaf510:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return;
}



/* Entry: 10adaf5e4; end: 10adaf723;  */

void FUN_10adaf5e4(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_10adafb60();
LAB_10adaf720:
      func_0x000104c4f740();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_1;
      *param_1 = *param_2;
      *param_2 = lVar9;
      lVar9 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10adaf720;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar10 = lVar8;
    lVar11 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar11,lVar10);
        lVar10 = lVar10 + 8;
        lVar11 = lVar11 + 8;
      } while (lVar10 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10adaf724; end: 10adaf77b;  */

void FUN_10adaf724(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10adaf77c; end: 10adaf9ab; -[LSAMetricsListenerAnnouncer removeListener:] */

void FUN_10adaf77c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_10adaf930;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10adaf7e4;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10adaf724(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10adaf930;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_10adaf7e4:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110c73e78;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_10adaf5e4(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_10adaf724(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10adaf930;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10adaf930:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adaf9ac; end: 10adafb17; -[LSAMetricsListenerAnnouncer metricsComponent:didReceiveMetrics:forLensId:] */

void FUN_10adaf9ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_60;
  long *plStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  FUN_10adaf2e8(&puStack_60,param_1 + 0x48);
  if (puStack_60 != (ulong *)0x0) {
    uVar3 = puStack_60[1];
    for (uVar2 = *puStack_60; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0ccc80(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10adafb18; end: 10adafb3f; -[LSAMetricsListenerAnnouncer .cxx_destruct] */

void FUN_10adafb18(long param_1)

{
  FUN_10adafb74(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10adafb40; end: 10adafb5f; -[LSAMetricsListenerAnnouncer .cxx_construct] */

void FUN_10adafb40(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 10adafb60; end: 10adafb73;  */

undefined * FUN_10adafb60(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 10adafb74; end: 10adafbcb;  */

long FUN_10adafb74(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10adafbcc; end: 10adafbdb;  */

void FUN_10adafbcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73e78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10adafbdc; end: 10adafbfb;  */

void FUN_10adafbdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73e78;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adafbfc; end: 10adafc63;  */

void FUN_10adafbfc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10adafc64; end: 10adafc67;  */

void FUN_10adafc64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adafc68; end: 10adafc7b; -[LSAPresetsComponent getPresetsPreviewsWithCompletion:] */

void FUN_10adafc68(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010adafc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3,0,0);
  return;
}



/* Entry: 10adafc7c; end: 10adafc8b; -[LSAPresetsComponent setActivePresetIndex:completion:] */

void FUN_10adafc7c(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010adafc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x3 + 0x10))(in_x3,0);
  return;
}



/* Entry: 10adafc8c; end: 10adafc9f; -[LSAPresetsComponent getPresetDataByFilePath:completion:] */

void FUN_10adafc8c(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010adafc9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x3 + 0x10))(in_x3,0,0);
  return;
}



/* Entry: 10adafca0; end: 10adafdff; -[LSAGlobalRemoteAssetsPrefetchProvider initWithConfigurationProvider:] */

undefined8 * FUN_10adafca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127013f0;
  puVar5 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x48;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_110c73ec8;
    puVar1 = puVar6 + 3;
    FUN_10ad91fc0(puVar1,0,param_3);
    puStack_50 = puVar1;
    plStack_48 = puVar6;
    FUN_10adb00a4(&puStack_50,puVar6 + 4,puVar1);
    plVar2 = plStack_48;
    puVar1 = puStack_50;
    puStack_50 = (undefined8 *)0x0;
    plStack_48 = (long *)0x0;
    plVar8 = (long *)puVar5[2];
    puVar5[2] = plVar2;
    puVar5[1] = puVar1;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar2 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar8 = plStack_48 + 1;
      do {
        lVar7 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10adafe00; end: 10adaff9f; -[LSAGlobalRemoteAssetsPrefetchProvider assetsToPrefetchWithCurrentAssets:] */

void FUN_10adafe00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 auStack_80 [40];
  long lStack_58;
  long lStack_50;
  
  _objc_retain(param_3);
  FUN_10adde924(auStack_80,param_3);
  plStack_88 = *(long **)(param_1 + 0x10);
  uStack_90 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a227c24(&lStack_58,auStack_80,&uStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  func_0x000104c4f944(auStack_80);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar6 = PTR_PTR_1126de180;
  for (; PTR_PTR_1126de180 = puVar6, lStack_58 != lStack_50; lStack_58 = lStack_58 + 0xb0) {
    func_0x00010c129e00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126de180;
  }
  puVar6 = puVar5;
  func_0x00010bf51e00(puVar5);
  _objc_release(puVar5);
  FUN_10adaffb0(&lStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}


