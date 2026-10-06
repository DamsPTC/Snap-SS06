/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ade2a18; end: 10ade2abb;  */

void FUN_10ade2a18(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  return;
}



/* Entry: 10ade2abc; end: 10ade2bdf; -[LSATexture textureId] */

void FUN_10ade2abc(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(lVar3 + 8);
  if (lVar5 == 0) {
    plVar4 = (long *)(*(long *)(lVar3 + 0x10) + 0x10);
  }
  else {
    plVar4 = (long *)(lVar5 + 8);
  }
  if (*plVar4 != 0) {
    plVar6 = (long *)(param_1 + 0x18);
    plVar4 = (long *)*plVar6;
    if (plVar4 == (long *)0x0) {
      FUN_10a0997e4(auStack_30,(long *)(param_1 + 8),1,0);
      func_0x00010ade2b7c(plVar6,auStack_30);
      if (plStack_28 != (long *)0x0) {
        plVar4 = plStack_28 + 1;
        do {
          lVar3 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar3 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar3 == 0) {
          (**(code **)(*plStack_28 + 0x10))(plStack_28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
        }
      }
      plVar4 = (long *)*plVar6;
    }
    (**(code **)(*plVar4 + 0x48))(plVar4);
  }
  return;
}



/* Entry: 10ade2be0; end: 10ade2c07; -[LSATexture metalTextureId] */

void FUN_10ade2be0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ade2c08; end: 10ade2c5b; -[LSATexture textureTransform] */

void FUN_10ade2c08(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 8) + 8);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x10);
    if (*(long *)(lVar2 + 0x10) == 0) goto LAB_10ade2c44;
    puVar3 = (undefined8 *)(lVar2 + 0x30);
  }
  else {
    if (*(long *)(lVar2 + 8) == 0) {
LAB_10ade2c44:
      param_1[1] = 0;
      *param_1 = 0x3f800000;
      param_1[3] = 0;
      param_1[2] = 0x3f800000;
      uVar1 = 0x3f800000;
      goto LAB_10ade2c54;
    }
    puVar3 = (undefined8 *)(lVar2 + 0x38);
  }
  uVar4 = *puVar3;
  uVar6 = puVar3[3];
  uVar5 = puVar3[2];
  param_1[1] = puVar3[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  uVar1 = *(undefined4 *)(puVar3 + 4);
LAB_10ade2c54:
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}



/* Entry: 10ade2c5c; end: 10ade2caf; -[LSATexture size] */

undefined1  [16] FUN_10ade2c5c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  plVar1 = (long *)(param_1 + 8);
  lVar3 = *(long *)(*plVar1 + 8);
  if (lVar3 == 0) {
    plVar2 = (long *)(*(long *)(*plVar1 + 0x10) + 0x10);
  }
  else {
    plVar2 = (long *)(lVar3 + 8);
  }
  if (*plVar2 != 0) {
    FUN_10a099004();
    auVar4._0_8_ = (double)(int)plVar1;
    auVar4._8_8_ = (double)(int)((ulong)plVar1 >> 0x20);
    return auVar4;
  }
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 10ade2cb0; end: 10ade2cd7; -[LSATexture texture] */

void FUN_10ade2cb0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar5;
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
  return;
}



/* Entry: 10ade2cd8; end: 10ade2cff; -[LSATexture mtlCommandQueue] */

void FUN_10ade2cd8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ade2d00; end: 10ade2dbf; -[LSATexture normalizedTexture] */

void FUN_10ade2d00(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if ((*(long *)(param_2 + 8) != 0) && (*(long *)(param_2 + 0x18) == 0)) {
    FUN_10a0997e4(auStack_40,(long *)(param_2 + 8),1,0);
    func_0x00010ade2b7c((long *)(param_2 + 0x18),auStack_40);
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
  }
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar5;
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
  return;
}



/* Entry: 10ade2dc0; end: 10ade2de7; -[LSATexture context] */

void FUN_10ade2dc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ade2de8; end: 10ade2e47; -[LSATexture .cxx_destruct] */

long FUN_10ade2de8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  _objc_storeStrong(param_1 + 0x50,0);
  func_0x0001092318b0(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  func_0x00010addae58(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10ade2e48; end: 10ade2e5b; -[LSATexture .cxx_construct] */

void FUN_10ade2e48(long param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10ade2e5c; end: 10ade2f17; -[LSATextureConverter initWithYUVFormat:openGLPerformer:] */

undefined1 *
FUN_10ade2e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127014f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = *(long *)((long)puVar1 + 8);
    *(long *)((long)puVar1 + 8) = 0;
    if (lVar3 != 0) {
      func_0x00010addb36c();
    }
    lVar3 = *(long *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    if (lVar3 != 0) {
      FUN_10ade34d4();
    }
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10ade2f18; end: 10ade301f; -[LSATextureConverter prepareConvertorsForInputSize:] */

void FUN_10ade2f18(double param_1,double param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  bVar1 = false;
  if ((*(double *)(param_3 + 0x18) == param_1) &&
     (bVar1 = false, !NAN(*(double *)(param_3 + 0x20)) && !NAN(param_2))) {
    bVar1 = *(double *)(param_3 + 0x20) == param_2;
  }
  if (!bVar1) {
    plVar5 = (long *)(param_3 + 8);
    if (*plVar5 == 0) {
      lVar2 = 0x10;
      __Znwm();
      FUN_10a19eb18();
      lVar4 = *plVar5;
      *plVar5 = lVar2;
      if (lVar4 != 0) {
        func_0x00010addb36c(plVar5);
      }
    }
    if (*(long *)(param_3 + 0x10) == 0) {
      uVar3 = 0x18;
      __Znwm();
      FUN_10a19d288();
      lVar2 = *(long *)(param_3 + 0x10);
      *(undefined8 *)(param_3 + 0x10) = uVar3;
      if (lVar2 != 0) {
        FUN_10ade34d4();
      }
    }
    FUN_10a19ecbc(*(undefined8 *)(param_3 + 8),(int)param_1,(int)param_2,1);
    lVar2 = *(long *)(*(long *)(param_3 + 0x10) + 8);
    if (lVar2 == 0) {
      FUN_10a19d398(*(undefined8 *)(*(long *)(param_3 + 0x10) + 0x10));
    }
    else {
      *(ulong *)(lVar2 + 0x2c) = CONCAT44((int)param_2,(int)param_1);
    }
    *(double *)(param_3 + 0x18) = param_1;
    *(double *)(param_3 + 0x20) = param_2;
  }
  return;
}



/* Entry: 10ade3020; end: 10ade316b; -[LSATextureConverter getRGBTextureFromYTexture:UVTexture:size:context:] */

void FUN_10ade3020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  func_0x00010c109180();
  lVar5 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar5 + 8) == 0) {
    *(undefined4 *)(*(long *)(lVar5 + 0x10) + 0x5f0) = 4;
  }
  else {
    *(undefined4 *)(*(long *)(lVar5 + 8) + 0x34) = 4;
  }
  FUN_10a19d4a0(auStack_40,lVar5,param_3,param_4);
  plVar2 = plStack_38;
  puVar6 = PTR_PTR_1126de200;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x00010c26cf60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10ade316c; end: 10ade3477; -[LSATextureConverter getYUVTextureFromRgbTexture:size:context:] */

void FUN_10ade316c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  func_0x00010c109180();
  FUN_10a30f97c();
  uStack_a0 = CONCAT44((int)param_2,(int)param_1);
  FUN_10a30fb38(auStack_60);
  FUN_10a30f97c();
  uStack_a0 = CONCAT44((int)param_2 / 2,(int)param_1 / 2);
  FUN_10a30fb38(auStack_70);
  FUN_10a19ec08(*(undefined8 *)(param_3 + 8),0);
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  FUN_10a1a0aac(*(undefined8 *)(param_3 + 8),param_5,auStack_60,auStack_70,&uStack_a0);
  FUN_10a08f69c();
  plVar2 = plStack_58;
  puVar5 = PTR_PTR_1126de200;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x00010c26cf60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_68;
  puVar6 = PTR_PTR_1126de200;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x00010c26cf60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  puVar7 = PTR_PTR_1126de258;
  _objc_alloc(PTR_PTR_1126de258);
  func_0x00010c0636c0();
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10ade3478; end: 10ade34cb; -[LSATextureConverter .cxx_destruct] */

long * FUN_10ade3478(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  _objc_storeStrong(param_1 + 0x30,0);
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    FUN_10ade34d4();
  }
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  *plVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if (plVar2 != (long *)0x0) {
      FUN_10addb3ac(plVar2 + 1,0);
      func_0x00010addb3d4(plVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar2);
      return plVar2;
    }
    return plVar3;
  }
  return plVar1;
}



/* Entry: 10ade34cc; end: 10ade34d3; -[LSATextureConverter .cxx_construct] */

void FUN_10ade34cc(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10ade34d4; end: 10ade3527;  */

void FUN_10ade34d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    FUN_10a30206c(lVar1 + 0x1a0);
    FUN_10a301168(lVar1);
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    func_0x00010a1aef6c();
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ade3528; end: 10ade35cb; -[LSAYUVTexture initWithYTexture:UVTexture:] */

undefined1 *
FUN_10ade3528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701500;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ade35cc; end: 10ade35d3; -[LSAYUVTexture yTexture] */

undefined8 FUN_10ade35cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10ade35d4; end: 10ade35db; -[LSAYUVTexture uvTexture] */

undefined8 FUN_10ade35d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10ade35dc; end: 10ade360b; -[LSAYUVTexture .cxx_destruct] */

void FUN_10ade35dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ade360c; end: 10ade3693;  */

void FUN_10ade360c(long param_1,long param_2)

{
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 != 0) {
    func_0x00010c187140(PTR__OBJC_CLASS___EAGLContext_1126d34e8);
    (**(code **)(param_2 + 0x10))(param_2);
    func_0x00010c187140(PTR__OBJC_CLASS___EAGLContext_1126d34e8);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ade3694; end: 10ade374b; -[LSAGLLayer renderInContext:] */

void FUN_10ade3694(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112701508;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_renderInContext__112629938);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf481c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12fc60();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10ade374c; end: 10ade3757; +[LSAGLView layerClass] */

void FUN_10ade374c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126de260);
  return;
}



/* Entry: 10ade3758; end: 10ade37bb; -[LSAGLView renderInContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade3758(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10ade37bc;
  puStack_28 = &UNK_1108a8598;
  lStack_20 = param_1;
  uStack_18 = param_3;
  FUN_10ade360c(*(undefined8 *)(param_1 + _DAT_112784720),&puStack_40);
  return;
}



/* Entry: 10ade37bc; end: 10ade391b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade37bc(long param_1)

{
  double *pdVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  double dVar8;
  
  pdVar1 = (double *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784724);
  dVar8 = *pdVar1;
  iVar7 = (int)dVar8;
  iVar5 = (int)pdVar1[1];
  lVar6 = (long)(iVar7 * 4 * iVar5);
  lVar2 = lVar6;
  _malloc(lVar6);
  _glPixelStorei(0xd05,4);
  _glReadPixels(0,0,iVar7,iVar5,0x1908,0x1401,lVar2);
  uVar3 = 0;
  _CGDataProviderCreateWithData(0,lVar2,lVar6,0);
  uVar4 = uVar3;
  _CGColorSpaceCreateDeviceRGB();
  lVar6 = (long)iVar7;
  _CGImageCreate(lVar6,(long)iVar5,8,0x20,(long)(iVar7 * 4),uVar4,0x4001,uVar3,0,1,0);
  func_0x00010bf4d460(*(undefined8 *)(param_1 + 0x20));
  _CGContextSetBlendMode(*(undefined8 *)(param_1 + 0x28),0x11);
  _CGContextDrawImage(0,0,(double)(long)((double)iVar7 / dVar8),
                      (double)(long)((double)iVar5 / dVar8),*(undefined8 *)(param_1 + 0x28),lVar6);
  _CGImageRelease(lVar6);
  _CGColorSpaceRelease(uVar4);
  _CGDataProviderRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 10ade391c; end: 10ade3987; -[LSAGLView initWithFrame:] */

undefined1 * FUN_10ade391c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701510;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf42980(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10ade3988; end: 10ade3a1f; -[LSAGLView initWithCoder:] */

undefined1 * FUN_10ade3988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112701510;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithCoder__1125dd730,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf42980(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ade3a20; end: 10ade3ae3; -[LSAGLView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade3a20(long param_1)

{
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(char *)(param_1 + _DAT_112784728) == '\x01') {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10ade3ae4;
    puStack_30 = &UNK_11087bb00;
    lStack_28 = param_1;
    FUN_10ade360c(*(undefined8 *)(param_1 + _DAT_112784720),&puStack_48);
  }
  puStack_50 = PTR_PTR_112701510;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10ade3ae4; end: 10ade3b0b;  */

void FUN_10ade3ae4(long param_1)

{
  func_0x00010bdf9f00(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdfa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__deleteGLBuffers_11255c1e8);
  return;
}



/* Entry: 10ade3b0c; end: 10ade3caf; -[LSAGLView commonInit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade3b0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = 1;
  _dispatch_semaphore_create();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11278472c);
  *(undefined8 *)(param_1 + _DAT_11278472c) = uVar1;
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf07b60();
  *(bool *)(param_1 + _DAT_112784728) = puVar3 == (undefined *)0x0;
  _objc_release(puVar2);
  func_0x00010c19bc40(param_1,param_2,2);
  func_0x00010c1ee880(param_1,param_2,0);
  func_0x00010c1d4c20(param_1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c1826c0(param_1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10ade3cb0; end: 10ade3d27; -[LSAGLView didEnterBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade3cb0(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10ade3d28;
  puStack_30 = &UNK_11087bb00;
  lStack_28 = param_1;
  FUN_10ade360c(*(undefined8 *)(param_1 + _DAT_112784720),&puStack_48);
  *(undefined1 *)(param_1 + _DAT_112784728) = 0;
  return;
}



/* Entry: 10ade3d28; end: 10ade3d53;  */

void FUN_10ade3d28(long param_1)

{
  func_0x00010bdf9f00(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bdfa120(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glFinish_11034b588)();
  return;
}



/* Entry: 10ade3d54; end: 10ade3d67; -[LSAGLView willEnterForeground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade3d54(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112784728) = 1;
  return;
}



/* Entry: 10ade3d68; end: 10ade3d7b; -[LSAGLView didBecomeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade3d68(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112784728) = 1;
  return;
}



/* Entry: 10ade3d7c; end: 10ade3e63; -[LSAGLView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade3d7c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  double dVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112701510;
  lStack_30 = param_5;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  dVar2 = ((double *)(param_5 + _DAT_112784730))[1];
  bVar1 = false;
  if ((param_3 == *(double *)(param_5 + _DAT_112784730)) &&
     (bVar1 = false, !NAN(param_4) && !NAN(dVar2))) {
    bVar1 = param_4 == dVar2;
  }
  if (!bVar1) {
    func_0x00010bf20c00(param_5);
    bVar1 = false;
    if ((param_3 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar1 = false, !NAN(param_4) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = param_4 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (!bVar1) {
      if (*(char *)(param_5 + _DAT_112784728) == '\x01') {
        puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_50 = 0xc2000000;
        pcStack_48 = FUN_10ade3e64;
        puStack_40 = &UNK_11087bb00;
        lStack_38 = param_5;
        FUN_10ade360c(*(undefined8 *)(param_5 + _DAT_112784720),&puStack_58);
      }
      func_0x00010be86c20(param_5);
    }
  }
  return;
}



/* Entry: 10ade3e64; end: 10ade3e6b;  */

void FUN_10ade3e64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__deleteGLBuffers_11255c1e8);
  return;
}



/* Entry: 10ade3e6c; end: 10ade405b; -[LSAGLView _createGLBuffers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade3e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  int iStack_38;
  int iStack_34;
  
  puVar3 = PTR__OBJC_CLASS___EAGLContext_1126d34e8;
  func_0x00010bf5e500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 == (undefined *)0x0) {
    FUN_10a00946c(&UNK_10f6aea7d);
  }
  else {
    lVar4 = (long)_DAT_112784734;
    _glGenFramebuffers(1,param_5 + lVar4);
    _glBindFramebuffer(0x8d40,*(undefined4 *)(param_5 + lVar4));
    lVar6 = (long)_DAT_112784738;
    _glGenRenderbuffers(1,param_5 + lVar6);
    _glBindRenderbuffer(0x8d41,*(undefined4 *)(param_5 + lVar6));
    uVar5 = *(undefined8 *)(param_5 + _DAT_112784720);
    lVar4 = param_5;
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130440(uVar5);
    _objc_release(lVar4);
    _glGetRenderbufferParameteriv(0x8d41,0x8d42,&iStack_34);
    _glGetRenderbufferParameteriv(0x8d41,0x8d43,&iStack_38);
    if ((iStack_34 != 0) && (iStack_38 != 0)) {
      _glFramebufferRenderbuffer(0x8d40,0x8ce0,0x8d41,*(undefined4 *)(param_5 + lVar6));
      iVar2 = 0x8d40;
      _glCheckFramebufferStatus();
      if (iVar2 == 0x8cd5) {
        _glBindFramebuffer(0x8d40,0);
        _glBindRenderbuffer(0x8d41,0);
        lVar4 = (long)_DAT_112784724;
        *(double *)(param_5 + lVar4) = (double)iStack_34;
        ((double *)(param_5 + lVar4))[1] = (double)iStack_38;
        func_0x00010bf20c00(param_5);
        lVar4 = (long)_DAT_112784730;
        *(undefined8 *)(param_5 + lVar4) = param_3;
        ((undefined8 *)(param_5 + lVar4))[1] = param_4;
        return;
      }
      goto LAB_10ade3ff0;
    }
  }
  func_0x00010bdfa120(param_5);
  FUN_10a00946c(&UNK_10f6aeaa3);
LAB_10ade3ff0:
  __ZNSt3__19to_stringEj(auStack_68);
  func_0x00010928a5e0(auStack_50,&UNK_10f6aeac7,auStack_68);
  FUN_10a0029c0(auStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ade4018);
  (*pcVar1)();
}



/* Entry: 10ade405c; end: 10ade40cf; -[LSAGLView _deleteGLBuffers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade405c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (long)_DAT_112784734;
  if (*(int *)(param_1 + lVar1) != 0) {
    _glDeleteFramebuffers(1,param_1 + lVar1);
    *(undefined4 *)(param_1 + lVar1) = 0;
  }
  lVar1 = (long)_DAT_112784738;
  if (*(int *)(param_1 + lVar1) != 0) {
    _glDeleteRenderbuffers(1,param_1 + lVar1);
    *(undefined4 *)(param_1 + lVar1) = 0;
  }
  lVar1 = (long)_DAT_112784730;
  uVar2 = *(undefined8 *)PTR__CGSizeZero_110347620;
  ((undefined8 *)(param_1 + lVar1))[1] = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  return;
}



/* Entry: 10ade40d0; end: 10ade425b; -[LSAGLView _createDrawTexture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade40d0(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iStack_48;
  int iStack_44;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uVar5;
  
  puVar2 = (undefined4 *)0x10;
  __Znwm();
  *puVar2 = 0;
  puStack_40 = &UNK_10f6aed66;
  puStack_38 = &UNK_10f6aec8e;
  iStack_44 = 0;
  uVar3 = 0x8b31;
  _glCreateShader(0x8b31);
  _glShaderSource();
  _glCompileShader(uVar3);
  _glGetShaderiv(uVar3,0x8b81,&iStack_44);
  uVar4 = uVar3;
  if (iStack_44 != 0) {
    iStack_44 = 0;
    uVar4 = 0x8b30;
    _glCreateShader();
    _glShaderSource();
    _glCompileShader(uVar4);
    uVar5 = uVar4;
    _glGetShaderiv(uVar4,0x8b81,&iStack_44);
    uVar1 = (undefined4)uVar5;
    if (iStack_44 != 0) {
      _glCreateProgram();
      *puVar2 = uVar1;
      _glAttachShader();
      _glAttachShader(*puVar2,uVar4);
      _glLinkProgram(*puVar2);
      _glDeleteShader(uVar3);
      _glDeleteShader(uVar4);
      iStack_48 = 0;
      _glGetProgramiv(*puVar2,0x8b82,&iStack_48);
      if (iStack_48 != 0) {
        uVar1 = *puVar2;
        _glGetUniformLocation(uVar1,&UNK_10f641f26);
        puVar2[1] = uVar1;
        uVar1 = *puVar2;
        _glGetAttribLocation(uVar1,&UNK_10f64cf1a);
        puVar2[2] = uVar1;
        uVar1 = *puVar2;
        _glGetAttribLocation(uVar1,&UNK_10f64cf0a);
        puVar2[3] = uVar1;
      }
      goto LAB_10ade4228;
    }
  }
  _glDeleteShader(uVar4);
LAB_10ade4228:
  *(undefined4 **)(param_1 + _DAT_11278473c) = puVar2;
  return;
}



/* Entry: 10ade425c; end: 10ade42ab; -[LSAGLView _deleteDrawTexture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade425c(long param_1)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278473c;
  piVar1 = *(int **)(param_1 + lVar2);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      _glDeleteProgram();
    }
    __ZdlPv(piVar1);
    *(undefined8 *)(param_1 + lVar2) = 0;
  }
  return;
}



/* Entry: 10ade42ac; end: 10ade431b; -[LSAGLView _prepareFramebuffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade42ac(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112784734;
  iVar1 = *(int *)(param_1 + lVar2);
  if ((iVar1 == 0) || (*(int *)(param_1 + _DAT_112784738) == 0)) {
    func_0x00010bdee0e0(param_1);
    iVar1 = *(int *)(param_1 + lVar2);
  }
  _glBindFramebuffer(0x8d40,iVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbed20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glViewport_11034b910)
            (0,0,(int)*(double *)(param_1 + _DAT_112784724),
             (int)((double *)(param_1 + _DAT_112784724))[1]);
  return;
}



/* Entry: 10ade431c; end: 10ade435b; -[LSAGLView _presentFramebuffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade431c(long param_1)

{
  _glBindRenderbuffer(0x8d41,*(undefined4 *)(param_1 + _DAT_112784738));
                    /* WARNING: Could not recover jumptable at 0x00010c10df30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112784720),PTR_s_presentRenderbuffer__1126211e8,0x8d41);
  return;
}



/* Entry: 10ade435c; end: 10ade46b3; -[LSAGLView _drawRawTexture:withTextureTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade435c(long param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  float *pfVar3;
  int *piVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_120 [64];
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar3 = param_4;
  func_0x00010be78540();
  _glClearColor(0,0,0,0x3f800000);
  _glClear(0x4000);
  _glActiveTexture(0x84c0);
  _glBindTexture(0xde1,param_3);
  _glTexParameterf(0x46180400,0xde1,0x2801);
  _glTexParameterf(0x46180400,0xde1,0x2800);
  _glTexParameterf(0x47012f00,0xde1,0x2802);
  _glTexParameterf(0x47012f00,0xde1,0x2803);
  _glBindTexture(0xde1,0);
  puVar1 = (undefined8 *)(param_1 + _DAT_112784740);
  uStack_68 = puVar1[1];
  uStack_70 = *puVar1;
  uStack_58 = puVar1[3];
  uStack_60 = puVar1[2];
  fVar15 = param_4[8] + (param_4[6] * 0.0 - param_4[7]);
  fVar6 = param_4[6] + param_4[7] * 0.0 + param_4[8] * 0.0;
  fVar17 = param_4[5] + (param_4[3] * 0.0 - param_4[4]);
  fVar9 = param_4[3] + param_4[4] * 0.0 + param_4[5] * 0.0;
  fVar14 = *param_4 + param_4[1] * 0.0 + param_4[2] * 0.0;
  fVar16 = param_4[2] + (*param_4 * 0.0 - param_4[1]);
  fVar10 = fVar6 + fVar9 * 1.0 + fVar14 * 0.0;
  fVar11 = fVar15 + fVar17 * 1.0 + fVar16 * 0.0;
  fVar12 = fVar6 + fVar9 * 1.0 + fVar14 * 1.0;
  fVar13 = fVar15 + fVar17 * 1.0 + fVar16 * 1.0;
  fVar7 = fVar6 + fVar9 * 0.0 + fVar14 * 0.0;
  fVar8 = fVar15 + fVar17 * 0.0 + fVar16 * 0.0;
  fVar6 = fVar6 + fVar9 * 0.0 + fVar14 * 1.0;
  fVar15 = fVar15 + fVar17 * 0.0 + fVar16 * 1.0;
  uVar2 = CONCAT44(fVar8,fVar7) ^
          (CONCAT44(fVar8,fVar7) ^ CONCAT44(fVar15,fVar6)) &
          ~CONCAT44(-(uint)(fVar8 < fVar15),-(uint)(fVar7 < fVar6));
  uVar2 = uVar2 ^ (uVar2 ^ CONCAT44(fVar11,fVar10)) &
                  ~CONCAT44(-(uint)((float)(uVar2 >> 0x20) < fVar11),-(uint)((float)uVar2 < fVar10))
  ;
  uVar2 = uVar2 ^ (uVar2 ^ CONCAT44(fVar13,fVar12)) &
                  ~CONCAT44(-(uint)((float)(uVar2 >> 0x20) < fVar13),-(uint)((float)uVar2 < fVar12))
  ;
  fVar9 = (float)uVar2;
  fVar14 = (float)(uVar2 >> 0x20);
  uStack_90 = CONCAT44(fVar8 - fVar14,fVar7 - fVar9);
  uStack_88 = CONCAT44(fVar15 - fVar14,fVar6 - fVar9);
  uStack_78 = CONCAT44(fVar13 - fVar14,fVar12 - fVar9);
  uStack_80 = CONCAT44(fVar11 - fVar14,fVar10 - fVar9);
  func_0x00010bde9e20(param_1);
  lVar5 = (long)_DAT_11278473c;
  piVar4 = *(int **)(param_1 + lVar5);
  if (piVar4 == (int *)0x0) {
    func_0x00010bded440(param_1);
    piVar4 = *(int **)(param_1 + lVar5);
    if (piVar4 == (int *)0x0) goto LAB_10ade463c;
  }
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  func_0x0001092cc0dc(&lStack_a8,&uStack_90,&uStack_70,8);
  lStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  pfVar3 = (float *)0x8;
  func_0x0001092cc0dc(&lStack_c0,&uStack_70,auStack_50,8);
  if (*piVar4 != 0) {
    _glUseProgram();
    _glActiveTexture(0x84c0);
    _glBindTexture(0xde1,param_3);
    _glUniform1i(piVar4[1],0);
    _glEnableVertexAttribArray(piVar4[2]);
    _glEnableVertexAttribArray(piVar4[3]);
    _glVertexAttribPointer(piVar4[2],2,0x1406,0,0,lStack_c0);
    pfVar3 = (float *)0x0;
    _glVertexAttribPointer(piVar4[3],2,0x1406,0,0,lStack_a8);
    _glDrawArrays(5,0,(int)((ulong)(lStack_a0 - lStack_a8) >> 2) / 2);
    _glDisableVertexAttribArray(piVar4[2]);
    _glDisableVertexAttribArray(piVar4[3]);
    _glUseProgram(0);
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
LAB_10ade463c:
  func_0x00010be7b6a0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  lVar5 = param_1;
  __Unwind_Resume(param_1);
  pcStack_c8 = FUN_10ade46b4;
  uStack_e0 = param_3;
  lStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_10a19e730(auStack_120,pfVar3,0,1);
  func_0x00010be06760(lVar5);
  return;
}



/* Entry: 10ade46b4; end: 10ade472b; -[LSAGLView _drawRawTexture:withTransformArray:] */

void FUN_10ade46b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [64];
  
  FUN_10a19e730(auStack_60,param_4,0,1);
  func_0x00010be06760(param_1);
  return;
}



/* Entry: 10ade472c; end: 10ade4873; -[LSAGLView drawTexture:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade472c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = (long)_DAT_11278472c;
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + lVar5),0xffffffffffffffff);
  lVar4 = (long)_DAT_112784744;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + lVar5));
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10ade4874;
  puStack_58 = &UNK_1107d0af0;
  lStack_50 = param_1;
  _objc_retain(param_4);
  uStack_48 = param_4;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar3 == 0) {
    func_0x000107c27da4(PTR___dispatch_main_q_11034be20,ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ade4874; end: 10ade4b8f;  */

void FUN_10ade4874(long param_1,undefined *param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  int iVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be06860(*(undefined8 *)(param_1 + 0x20));
  puVar7 = (undefined *)0x0;
  ppuVar1 = (undefined **)0x0;
  while( true ) {
    if (*(long *)(param_1 + 0x28) != 0) {
      param_2 = puVar7;
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
    _objc_release(puVar7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) break;
    ___stack_chk_fail();
    iVar6 = (int)param_2;
    if (iVar6 == 0) {
      __Unwind_Resume(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf89c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    ___cxa_begin_catch();
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (iVar6 == 2) {
      (**(code **)(*ppuVar1 + 0x10))();
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010c187140(PTR__OBJC_CLASS___EAGLContext_1126d34e8);
      ___cxa_end_catch();
      ppuVar4 = &PTR____CFConstantStringClassReference_110f2ed58;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010c187140(PTR__OBJC_CLASS___EAGLContext_1126d34e8);
      ppuVar2 = &PTR____CFConstantStringClassReference_110f2ed38;
      ___cxa_end_catch();
      ppuVar4 = &PTR____CFConstantStringClassReference_110f2ed18;
    }
    ppuVar1 = ppuVar2;
    if ((puVar7 != (undefined *)0x0) && ((bRam000000011330a9e8 & 1) != 0)) {
      func_0x00010bdc3520();
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
      param_2 = (undefined *)0x1;
      func_0x00010ae06f08(0,1,&UNK_10f6aeb33,&UNK_10f6aebbe,0x198,&UNK_10f6aebf0,in_x6,in_x7,ppuVar4
                          ,ppuVar2);
    }
  }
  return;
}



/* Entry: 10ade4b90; end: 10ade4b97; -[LSAGLView drawTexture:] */

void FUN_10ade4b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_drawTexture_completion__1125c00b8,param_3,0);
  return;
}



/* Entry: 10ade4b98; end: 10ade4cb3; -[LSAGLView clearWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade4b98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11278472c;
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + lVar4),0xffffffffffffffff);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112784744);
  *(undefined8 *)(param_1 + _DAT_112784744) = 0;
  _objc_release(uVar1);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + lVar4));
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10ade4cb4;
  puStack_48 = &UNK_1107d0af0;
  lStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar3 == 0) {
    func_0x000107c27da4(PTR___dispatch_main_q_11034be20,ppuVar2);
  }
  else {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10ade4cb4; end: 10ade5023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade4cb4(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar3;
  undefined **unaff_x19;
  int iVar4;
  undefined **ppuVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1[4];
  if (puVar3[_DAT_112784728] != '\x01') goto LAB_10ade4d68;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10ade5024;
  puStack_98 = &UNK_11087bb00;
  param_2 = &puStack_b0;
  puStack_90 = puVar3;
  FUN_10ade360c(*(undefined8 *)(puVar3 + _DAT_112784720));
  ppuVar5 = (undefined **)0x0;
  unaff_x19 = param_1;
  param_1 = (undefined **)0x0;
  while( true ) {
    if (unaff_x19[5] != (undefined *)0x0) {
      param_2 = ppuVar5;
      (**(code **)(unaff_x19[5] + 0x10))();
    }
    _objc_release(ppuVar5);
    _objc_release();
LAB_10ade4d68:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) break;
    ___stack_chk_fail();
    iVar4 = (int)param_2;
    if (iVar4 == 0) {
      __Unwind_Resume();
      func_0x00010be78540(param_1[4]);
      _glClearColor(0,0,0,0x3f800000);
      _glClear(0x4000);
                    /* WARNING: Could not recover jumptable at 0x00010be7b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1[4],PTR_s__presentFramebuffer_11257c748);
      return;
    }
    ___cxa_begin_catch();
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (iVar4 == 2) {
      (**(code **)(*param_1 + 0x10))();
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      uStack_80 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
      ppuStack_78 = &PTR____CFConstantStringClassReference_110f2ed98;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_70 = ppuVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010c187140(PTR__OBJC_CLASS___EAGLContext_1126d34e8);
      ___cxa_end_catch();
      ppuVar2 = &PTR____CFConstantStringClassReference_110f2ed98;
    }
    else {
      uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      uStack_60 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
      ppuStack_58 = &PTR____CFConstantStringClassReference_110f2ed78;
      ppuStack_50 = &PTR____CFConstantStringClassReference_110f2ed38;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010c187140(PTR__OBJC_CLASS___EAGLContext_1126d34e8);
      ppuVar1 = &PTR____CFConstantStringClassReference_110f2ed38;
      ___cxa_end_catch();
      ppuVar2 = &PTR____CFConstantStringClassReference_110f2ed78;
    }
    param_1 = ppuVar1;
    if ((ppuVar5 != (undefined **)0x0) && ((bRam000000011330a9e8 & 1) != 0)) {
      func_0x00010bdc3520();
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
      param_2 = (undefined **)0x1;
      func_0x00010ae06f08(0,1,&UNK_10f6aeb33,&UNK_10f6aec33,0x1d8,&UNK_10f6aebf0,in_x6,in_x7,ppuVar2
                          ,ppuVar1);
    }
  }
  return;
}



/* Entry: 10ade5024; end: 10ade5067;  */

void FUN_10ade5024(long param_1)

{
  func_0x00010be78540(*(undefined8 *)(param_1 + 0x20));
  _glClearColor(0,0,0,0x3f800000);
  _glClear(0x4000);
                    /* WARNING: Could not recover jumptable at 0x00010be7b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentFramebuffer_11257c748);
  return;
}



/* Entry: 10ade5068; end: 10ade5077; -[LSAGLView setFillMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade5068(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112784718) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be86c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__recalculateViewGeometry_11257f4a8);
  return;
}



/* Entry: 10ade5078; end: 10ade52ab; -[LSAGLView _drawTexture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade5078(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar7 = (long)_DAT_11278472c;
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + lVar7),0xffffffffffffffff);
  lVar8 = (long)_DAT_112784744;
  lVar6 = *(long *)(param_1 + lVar8);
  _objc_retain(lVar6);
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = 0;
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + lVar7));
  if (*(char *)(param_1 + _DAT_112784728) == '\x01' && lVar6 != 0) {
    lVar7 = lVar6;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar7 == 0) {
      lVar8 = (long)_DAT_112784720;
    }
    else {
      lVar3 = lVar7;
      func_0x00010c22c520();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)_DAT_112784720;
      lVar4 = *(long *)(param_1 + lVar8);
      func_0x00010c22c520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      if (lVar3 != lVar4) {
        puStack_88 = puVar1;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_10ade52ac;
        puStack_70 = &UNK_11087bb00;
        lStack_68 = param_1;
        FUN_10ade360c(*(undefined8 *)(param_1 + lVar8),&puStack_88);
        puVar5 = PTR__OBJC_CLASS___EAGLContext_1126d34e8;
        _objc_alloc();
        func_0x00010bdc0d20(lVar7);
        lVar3 = lVar7;
        func_0x00010c22c520(lVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfefba0();
        uVar2 = *(undefined8 *)(param_1 + lVar8);
        *(undefined **)(param_1 + lVar8) = puVar5;
        _objc_release(uVar2);
        _objc_release(lVar3);
      }
    }
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10ade52d4;
    puStack_a0 = &UNK_110883780;
    lStack_98 = param_1;
    _objc_retain(lVar6);
    lStack_90 = lVar6;
    FUN_10ade360c(uVar2,&puStack_b8);
    _objc_release(lStack_90);
    _objc_release(lVar7);
  }
  _objc_release(lVar6);
  return;
}



/* Entry: 10ade52ac; end: 10ade52d3;  */

void FUN_10ade52ac(long param_1)

{
  func_0x00010bdf9f00(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdfa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__deleteGLBuffers_11255c1e8);
  return;
}



/* Entry: 10ade52d4; end: 10ade5423;  */

void FUN_10ade52d4(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  long lStack_50;
  long *plStack_48;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x28));
  dVar8 = param_1;
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x28));
  func_0x00010bea4b80(param_1,param_2,uVar2,param_4,(long)(dVar8 * 4.0));
  if (*(long *)(param_3 + 0x28) == 0) {
    lStack_50 = 0;
    plStack_48 = (long *)0x0;
  }
  else {
    func_0x00010c26ce20(&lStack_50);
  }
  lVar7 = lStack_50;
  FUN_10a0988c8(lStack_50);
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  if (*(long *)(param_3 + 0x28) == 0) {
    lStack_50 = 0;
    plStack_48 = (long *)0x0;
  }
  else {
    func_0x00010c26ce20(&lStack_50);
  }
  if (*(long *)(lStack_50 + 8) == 0) {
    lVar6 = *(long *)(lStack_50 + 0x10) + 0x30;
  }
  else {
    lVar6 = *(long *)(lStack_50 + 8) + 0x38;
  }
  func_0x00010be06760(uVar2,param_4,lVar7,lVar6);
  plVar5 = plStack_48;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10ade5424; end: 10ade54bb; -[LSAGLView _correctTextureCoordsForBytesPerRow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade5424(long param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  
  lVar3 = *(long *)(param_1 + _DAT_112784748);
  lVar1 = lVar3 + 3;
  if (-1 < lVar3) {
    lVar1 = lVar3;
  }
  lVar2 = param_1;
  func_0x00010c141c80();
  lVar3 = 8;
  if ((lVar2 - 1U & 0xfffffffffffffffa) != 0) {
    lVar3 = 0;
  }
  dVar5 = *(double *)(param_1 + _DAT_11278474c + lVar3);
  uVar4 = 0xfffffffffffffffe;
  do {
    *param_3 = *param_3 * (float)(dVar5 / (double)(lVar1 >> 2));
    uVar4 = uVar4 + 2;
    param_3 = param_3 + 2;
  } while (uVar4 < 6);
  return;
}



/* Entry: 10ade54bc; end: 10ade5603; -[LSAGLView _recalculateViewGeometry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade54bc(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00010bf20c00();
  uVar7 = *(undefined8 *)(param_5 + _DAT_11278474c);
  uVar8 = ((undefined8 *)(param_5 + _DAT_11278474c))[1];
  dVar4 = param_3;
  dVar6 = param_4;
  func_0x00010bf20c00(param_5);
  _AVMakeRectWithAspectRatioInsideRect(uVar7,uVar8,param_1,param_2,dVar4,dVar6);
  lVar2 = param_5;
  func_0x00010bfad580();
  dVar4 = 1.0;
  if (lVar2 < 3) {
    if (lVar2 == 2) {
      dVar4 = param_1 / param_3;
      param_1 = param_2 / param_4;
      goto LAB_10ade55b0;
    }
    param_1 = 1.0;
    if (lVar2 != 0) goto LAB_10ade55b0;
    param_5 = 0x120;
    ___cxa_allocate_exception();
    FUN_10a2e1840();
    ___cxa_throw(param_5,&PTR_DAT_110b99e48,FUN_10a002a90);
  }
  else {
    if (lVar2 == 3) {
      dVar4 = param_4 / param_2;
      param_1 = param_3 / param_1;
      goto LAB_10ade55b0;
    }
    if (lVar2 == 4) {
      param_1 = param_1 / param_3;
      goto LAB_10ade55b0;
    }
  }
  param_1 = 1.0;
LAB_10ade55b0:
  fVar3 = (float)dVar4;
  pfVar1 = (float *)(param_5 + _DAT_112784740);
  fVar5 = (float)param_1;
  *pfVar1 = -fVar3;
  pfVar1[1] = -fVar5;
  pfVar1[2] = fVar3;
  pfVar1[3] = -fVar5;
  pfVar1[4] = -fVar3;
  pfVar1[5] = fVar5;
  pfVar1[6] = fVar3;
  pfVar1[7] = fVar5;
  return;
}



/* Entry: 10ade5604; end: 10ade568b; -[LSAGLView _setInputSize:bytesPerRow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade5604(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = param_3;
  func_0x00010c141c80();
  dVar4 = param_1;
  if ((lVar3 - 1U & 0xfffffffffffffffa) != 0) {
    dVar4 = param_2;
    param_2 = param_1;
  }
  *(undefined8 *)(param_3 + _DAT_112784748) = param_5;
  pdVar1 = (double *)(param_3 + _DAT_11278474c);
  bVar2 = false;
  if ((*pdVar1 == param_2) && (bVar2 = false, !NAN(pdVar1[1]) && !NAN(dVar4))) {
    bVar2 = pdVar1[1] == dVar4;
  }
  if (bVar2) {
    return;
  }
  *pdVar1 = param_2;
  pdVar1[1] = dVar4;
                    /* WARNING: Could not recover jumptable at 0x00010be86c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__recalculateViewGeometry_11257f4a8);
  return;
}



/* Entry: 10ade568c; end: 10ade5737; -[LSAGLView displayHDRPixelBuffer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade568c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  if ((param_3 != 0) && (*(char *)(param_1 + _DAT_112784728) == '\x01')) {
    lVar1 = (long)_DAT_11278472c;
    _dispatch_semaphore_wait(*(undefined8 *)(param_1 + lVar1),0xffffffffffffffff);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10ade5738;
    puStack_48 = &UNK_1108a8598;
    lStack_40 = param_1;
    lStack_38 = param_3;
    FUN_10ade360c(*(undefined8 *)(param_1 + _DAT_112784720),&puStack_60);
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + lVar1));
  }
  return;
}



/* Entry: 10ade5738; end: 10ade5a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10ade5738(double param_1,double param_2,double param_3,double param_4,long param_5,
                    undefined8 param_6)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *unaff_x23;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_c8 [48];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar3 = PTR__OBJC_CLASS___CIContext_1126b3120;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = (long)_DAT_112784750;
  if (*(long *)(*(long *)(param_5 + 0x20) + lVar6) == 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_5 + 0x20) + (long)_DAT_112784720);
    uStack_98 = *(undefined8 *)PTR__kCIContextWorkingColorSpace_11034ad28;
    uVar2 = *(undefined8 *)PTR__kCGColorSpaceITUR_2020_110347630;
    _CGColorSpaceCreateWithName();
    uStack_90 = *(undefined8 *)PTR__kCIContextWorkingFormat_11034ad30;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uStack_80 = uVar2;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_6,
                        *(undefined4 *)PTR__kCIFormatRGBAh_11034ad50);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = *(undefined8 *)PTR__kCIContextUseSoftwareRenderer_11034ad20;
    puStack_70 = PTR____kCFBooleanFalse_11034ab60;
    unaff_x23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&uStack_80,&uStack_98,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4f600(puVar3,param_6,uVar5,unaff_x23);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar6);
    *(undefined **)(*(long *)(param_5 + 0x20) + lVar6) = puVar3;
    _objc_release(uVar2);
    _objc_release(unaff_x23);
    _objc_release(puVar4);
  }
  puVar3 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x00010bfe9300(PTR__OBJC_CLASS___CIImage_1126b3128,param_6,*(undefined8 *)(param_5 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    _dispatch_semaphore_signal(*(undefined8 *)(*(long *)(param_5 + 0x20) + (long)_DAT_11278472c));
    puVar4 = (undefined *)0x0;
  }
  else {
    _CGAffineTransformMakeRotation(auStack_c8,0xbff921fb54442d18);
    puVar4 = puVar3;
    func_0x00010bfe6dc0(puVar3,param_6,auStack_c8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)(param_5 + 0x20);
    param_1 = param_3;
    param_2 = param_4;
    func_0x00010bf9de20(puVar4);
    pdVar1 = (double *)(*(long *)(param_5 + 0x20) + (long)_DAT_112784724);
    param_3 = *pdVar1;
    param_4 = pdVar1[1];
    func_0x00010bdcf420(uVar2);
    func_0x00010be78540(*(undefined8 *)(param_5 + 0x20));
    _glClearColor(0,0,0,0x3f800000);
    _glClear(0x4000);
    uVar2 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar6);
    func_0x00010bf9de20(puVar4);
    func_0x00010bf898e0(uVar2,param_6,puVar4);
    func_0x00010be7b6a0(*(undefined8 *)(param_5 + 0x20));
  }
  puVar3 = puVar4;
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(puVar4);
  __Unwind_Resume(puVar3);
  fVar7 = (float)param_1;
  fVar8 = (float)param_3;
  fVar9 = fVar8;
  if (fVar7 * (float)param_4 <= (float)param_2 * fVar8) {
    fVar9 = (fVar7 * (float)param_4) / (float)param_2;
  }
  return (double)((fVar8 - (fVar9 / fVar7) * fVar7) * 0.5);
}



/* Entry: 10ade5a08; end: 10ade5a5f; -[LSAGLView _aspectFitRect:inSize:] */

double FUN_10ade5a08(double param_1,double param_2,double param_3,double param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)param_1;
  fVar2 = (float)param_3;
  fVar3 = fVar2;
  if (fVar1 * (float)param_4 <= (float)param_2 * fVar2) {
    fVar3 = (fVar1 * (float)param_4) / (float)param_2;
  }
  return (double)((fVar2 - (fVar3 / fVar1) * fVar1) * 0.5);
}



/* Entry: 10ade5a60; end: 10ade5a6f; -[LSAGLView fillMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10ade5a60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112784718);
}



/* Entry: 10ade5a70; end: 10ade5a7f; -[LSAGLView rotationMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10ade5a70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278471c);
}



/* Entry: 10ade5a80; end: 10ade5a8f; -[LSAGLView setRotationMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade5a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278471c) = param_3;
  return;
}



/* Entry: 10ade5a90; end: 10ade5aef; -[LSAGLView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ade5a90(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112784750,0);
  _objc_storeStrong(param_1 + _DAT_11278472c,0);
  _objc_storeStrong(param_1 + _DAT_112784720,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112784744,0);
  return;
}



/* Entry: 10ade5af0; end: 10ade5be3;  */

undefined8 * FUN_10ade5af0(void)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *unaff_x19;
  undefined8 *puVar7;
  undefined **appuStack_e8 [3];
  undefined ***pppuStack_d0;
  undefined **appuStack_c8 [3];
  undefined ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined **appuStack_68 [3];
  undefined ***pppuStack_50;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001137ed3c8 & 1) == 0) {
    iVar3 = 0x137ed3c8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      unaff_x19 = (undefined8 *)0x110;
      __Znwm();
      pppuStack_30 = appuStack_48;
      pppuStack_50 = appuStack_68;
      appuStack_68[0] = &PTR_FUN_110c75a70;
      appuStack_48[0] = &PTR_FUN_110c759e0;
      FUN_10ade5e68();
      func_0x00010ade61fc();
      func_0x00010ade61f4();
      puRam00000001137ed3c0 = unaff_x19;
      ___cxa_guard_release(0x1137ed3c8);
    }
  }
  puVar4 = puRam00000001137ed3c0;
  func_0x00010ade6240(uStack_28);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010ade61fc();
  func_0x00010ade61f4();
  __ZdlPv(unaff_x19);
  ___cxa_guard_abort(0x1137ed3c8);
  func_0x00010ade622c();
  puVar1 = PTR___tlv_bootstrap_11340e008;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340e008;
  ppuVar5 = ppuVar6;
  (*(code *)PTR___tlv_bootstrap_11340e008)();
  uVar2 = *(char *)ppuVar5 == '\x01';
  if ((bool)uVar2) {
    func_0x00010ade6204();
    puVar7 = (undefined8 *)*ppuVar5;
  }
  else {
    puVar7 = (undefined8 *)0x110;
    __Znwm();
    pppuStack_b0 = appuStack_c8;
    pppuStack_d0 = appuStack_e8;
    appuStack_e8[0] = &PTR_DAT_110c75b80;
    appuStack_c8[0] = &PTR_DAT_110c75b00;
    puVar4 = puVar7;
    FUN_10ade5e68();
    func_0x00010ade61fc();
    func_0x00010ade61f4();
    func_0x00010ade6204();
    *puVar4 = puVar7;
    (*(code *)puVar1)();
    *(undefined1 *)ppuVar6 = 1;
  }
  func_0x00010ade6240(uStack_a8);
  if ((bool)uVar2) {
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x00010ade61fc();
  func_0x00010ade61f4();
  __ZdlPv(puVar7);
  func_0x00010ade622c();
  return puVar7;
}



/* Entry: 10ade5be4; end: 10ade5cd7;  */

undefined8 * FUN_10ade5be4(void)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined **appuStack_78 [3];
  undefined ***pppuStack_60;
  undefined **appuStack_58 [3];
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR___tlv_bootstrap_11340e008;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = &PTR___tlv_bootstrap_11340e008;
  ppuVar3 = ppuVar5;
  (*(code *)PTR___tlv_bootstrap_11340e008)();
  uVar2 = *(char *)ppuVar3 == '\x01';
  if ((bool)uVar2) {
    func_0x00010ade6204();
    puVar6 = (undefined8 *)*ppuVar3;
  }
  else {
    puVar6 = (undefined8 *)0x110;
    __Znwm();
    pppuStack_40 = appuStack_58;
    pppuStack_60 = appuStack_78;
    appuStack_78[0] = &PTR_DAT_110c75b80;
    appuStack_58[0] = &PTR_DAT_110c75b00;
    puVar4 = puVar6;
    FUN_10ade5e68();
    func_0x00010ade61fc();
    func_0x00010ade61f4();
    func_0x00010ade6204();
    *puVar4 = puVar6;
    (*(code *)puVar1)();
    *(undefined1 *)ppuVar5 = 1;
  }
  func_0x00010ade6240(uStack_38);
  if ((bool)uVar2) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00010ade61fc();
  func_0x00010ade61f4();
  __ZdlPv(puVar6);
  func_0x00010ade622c();
  return puVar6;
}



/* Entry: 10ade5cd8; end: 10ade5cdf;  */

void FUN_10ade5cd8(void)

{
  return;
}



/* Entry: 10ade5ce0; end: 10ade5cff;  */

void FUN_10ade5ce0(undefined8 *param_1)

{
  func_0x00010ade61ec();
  *param_1 = &PTR_FUN_110c759e0;
  return;
}



/* Entry: 10ade5d00; end: 10ade5d1b;  */

void FUN_10ade5d00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110c759e0;
  return;
}



/* Entry: 10ade5d1c; end: 10ade5d3b;  */

void FUN_10ade5d1c(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)0x54;
  __Znwm();
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



/* Entry: 10ade5d3c; end: 10ade5d63;  */

void FUN_10ade5d3c(undefined8 param_1)

{
  func_0x00010ade6234();
  func_0x00010ade61e4(param_1,&PTR_DAT_110c75a50);
  func_0x00010ade61b4();
  return;
}



/* Entry: 10ade5d64; end: 10ade5d6f;  */

undefined ** FUN_10ade5d64(void)

{
  return &PTR_DAT_110c75a50;
}



/* Entry: 10ade5d70; end: 10ade5dab;  */

long FUN_10ade5d70(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010ade6214(uVar1);
  return param_1;
}



/* Entry: 10ade5dac; end: 10ade5db3;  */

void FUN_10ade5dac(void)

{
  return;
}



/* Entry: 10ade5db4; end: 10ade5dd3;  */

void FUN_10ade5db4(undefined8 *param_1)

{
  func_0x00010ade61ec();
  *param_1 = &PTR_FUN_110c75a70;
  return;
}



/* Entry: 10ade5dd4; end: 10ade5df7;  */

void FUN_10ade5dd4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110c75a70;
  return;
}



/* Entry: 10ade5df8; end: 10ade5e1f;  */

void FUN_10ade5df8(undefined8 param_1)

{
  func_0x00010ade6234();
  func_0x00010ade61e4(param_1,&PTR_DAT_110c75ae0);
  func_0x00010ade61b4();
  return;
}



/* Entry: 10ade5e20; end: 10ade5e2b;  */

undefined ** FUN_10ade5e20(void)

{
  return &PTR_DAT_110c75ae0;
}



/* Entry: 10ade5e2c; end: 10ade5e67;  */

long FUN_10ade5e2c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010ade6214(uVar1);
  return param_1;
}



/* Entry: 10ade5e68; end: 10ade5f17;  */

long FUN_10ade5e68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  *(undefined8 *)(lVar1 + 0xa8) = param_2;
  *(undefined8 *)(lVar1 + 0xb0) = param_3;
  FUN_10ade5fa4(lVar1 + 0xb8,param_4);
  func_0x00010ade5fe8(param_1 + 0xd8,param_5);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  FUN_10ade5f18((undefined8 *)(param_1 + 0xf8),param_2);
  return param_1;
}



/* Entry: 10ade5f18; end: 10ade5fa3;  */

long **** FUN_10ade5f18(long *param_1,long ***param_2)

{
  long ****pppplVar1;
  long ***ppplVar2;
  long lVar3;
  long lVar4;
  long ***ppplStack_48;
  long lStack_40;
  long lStack_38;
  long ***ppplStack_30;
  long ***ppplStack_28;
  
  pppplVar1 = (long ****)(param_1 + 2);
  lVar3 = *param_1;
  if ((long ***)((long)*pppplVar1 - lVar3 >> 3) < param_2) {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c304ec();
      func_0x000104c30530(&ppplStack_48);
      __Unwind_Resume();
      ppplVar2 = (long ***)param_2[3];
      if (ppplVar2 == (long ***)0x0) {
        pppplVar1[3] = (long ***)0x0;
      }
      else if (ppplVar2 == param_2) {
        func_0x00010ade61c4();
      }
      else {
        func_0x00010ade6220();
        pppplVar1[3] = ppplVar2;
      }
      return pppplVar1;
    }
    lVar4 = param_1[1];
    ppplStack_28 = (long ***)pppplVar1;
    func_0x000104c304f8();
    lStack_40 = (long)pppplVar1 + (lVar4 - lVar3);
    ppplStack_30 = (long ***)(pppplVar1 + (long)param_2);
    ppplStack_48 = (long ***)pppplVar1;
    lStack_38 = lStack_40;
    func_0x000104c304cc(param_1,&ppplStack_48);
    pppplVar1 = &ppplStack_48;
    func_0x000104c30530(pppplVar1);
  }
  return pppplVar1;
}



/* Entry: 10ade5fa4; end: 10ade605f;  */

long FUN_10ade5fa4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x00010ade61c4();
  }
  else {
    func_0x00010ade6220();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 10ade6060; end: 10ade607f;  */

void FUN_10ade6060(undefined8 *param_1)

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



/* Entry: 10ade6080; end: 10ade609f;  */

void FUN_10ade6080(undefined8 *param_1)

{
  func_0x00010ade61ec();
  *param_1 = &PTR_DAT_110c75b00;
  return;
}



/* Entry: 10ade60a0; end: 10ade60bb;  */

void FUN_10ade60a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110c75b00;
  return;
}



/* Entry: 10ade60bc; end: 10ade60cf;  */

long FUN_10ade60bc(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lStack_48;
  long alStack_40 [2];
  
  FUN_10ade5af0();
  alStack_40[0] = param_1;
  func_0x000104c347d4();
  __ZNSt3__119__shared_mutex_base4lockEv();
  if (*(long *)(param_1 + 0xf8) == *(long *)(param_1 + 0x100)) {
    uVar4 = 0;
    while( true ) {
      uVar1 = 0;
      if (*(long *)(param_1 + 0xb0) != 0) {
        uVar1 = *(long *)(param_1 + 0xb0) - 1;
      }
      if (uVar1 <= uVar4) break;
      lVar3 = param_1 + 0xb8;
      func_0x000104c30580();
      lStack_48 = lVar3;
      func_0x000104c303f4((long *)(param_1 + 0xf8),&lStack_48);
      uVar4 = uVar4 + 1;
    }
    lVar3 = param_1 + 0xb8;
    func_0x000104c30580(lVar3);
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x100) + -8);
    lVar3 = *plVar2;
    *(long **)(param_1 + 0x100) = plVar2;
  }
  func_0x000104c305a0(alStack_40);
  return lVar3;
}



/* Entry: 10ade60d0; end: 10ade60f7;  */

void FUN_10ade60d0(undefined8 param_1)

{
  func_0x00010ade6234();
  func_0x00010ade61e4(param_1,&PTR_DAT_110c75b60);
  func_0x00010ade61b4();
  return;
}



/* Entry: 10ade60f8; end: 10ade610b;  */

undefined ** FUN_10ade60f8(void)

{
  return &PTR_DAT_110c75b60;
}



/* Entry: 10ade610c; end: 10ade612b;  */

void FUN_10ade610c(undefined8 *param_1)

{
  func_0x00010ade61ec();
  *param_1 = &PTR_DAT_110c75b80;
  return;
}



/* Entry: 10ade612c; end: 10ade6147;  */

void FUN_10ade612c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110c75b80;
  return;
}



/* Entry: 10ade6148; end: 10ade6193;  */

void FUN_10ade6148(undefined8 param_1)

{
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_10ade5af0();
  func_0x000104c342bc();
  uStack_28 = 1;
  uStack_30 = param_1;
  __ZNSt3__119__shared_mutex_base4lockEv();
  if ((ulong)(*(long *)(unaff_x20 + 0x100) - *(long *)(unaff_x20 + 0xf8) >> 3) <
      *(ulong *)(unaff_x20 + 0xa8)) {
    func_0x000104c303f4((long *)(unaff_x20 + 0xf8),unaff_x19);
  }
  else {
    func_0x000104c30740(unaff_x20 + 0xd8,unaff_x19);
  }
  func_0x000104c305a0(&uStack_30);
  return;
}



/* Entry: 10ade6194; end: 10ade6253;  */

undefined ** FUN_10ade6194(void)

{
  return &PTR_DAT_110c75be0;
}



/* Entry: 10ade6254; end: 10ade664f;  */

void FUN_10ade6254(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_1a8;
  long *aplStack_1a0 [2];
  char cStack_189;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
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
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = 0;
  func_0x000107c2ba5c(&uStack_170,param_2,&lStack_48,&uStack_1a8);
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  if (lStack_158 < 0) {
    __ZdlPv(uStack_168);
  }
  if ((int)uStack_170 == 0) {
    uVar9 = *(undefined8 *)(param_1 + 8);
    uStack_160 = CONCAT17(10,(undefined7)uStack_160);
    uStack_170 = 0x414c4d6563696f56;
    uVar5 = (ulong)uStack_168 >> 0x18;
    uStack_168 = CONCAT53((int5)uVar5,0x5253);
    plVar7 = (long *)0x30;
    __Znwm();
    lVar8 = *param_4;
    plVar2 = (long *)param_4[1];
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110c75c30;
    uStack_1a8 = plVar7 + 3;
    if (plVar2 == (long *)0x0) {
      plVar7[4] = lVar8;
      plVar7[5] = 0;
    }
    else {
      plVar1 = plVar2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7[3] = (long)&PTR_DAT_110ccd3e0;
      plVar7[4] = lVar8;
      plVar7[5] = (long)plVar2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar7[3] = (long)&PTR_FUN_110c75c80;
    uStack_58 = 0;
    plStack_50 = (long *)0x0;
    uStack_68 = 0;
    plStack_60 = (long *)0x0;
    aplStack_1a0[0] = plVar7;
    func_0x000107c280c0(uVar9,&UNK_10f6aee7c,&lStack_48,&uStack_170,param_3,&uStack_1a8,&uStack_68);
    plVar2 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      plVar7 = plStack_60 + 1;
      do {
        lVar8 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = aplStack_1a0[0];
    if (aplStack_1a0[0] != (long *)0x0) {
      plVar7 = aplStack_1a0[0] + 1;
      do {
        lVar8 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*aplStack_1a0[0] + 0x10))(aplStack_1a0[0]);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar7 = plStack_50 + 1;
      do {
        lVar8 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (uStack_160 < 0) {
      __ZdlPv(uStack_170);
    }
  }
  else {
    param_4 = (long *)*param_4;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    lStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_108 = 0x3f800000;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_a0 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    pcVar6 = (char *)0x20;
    __Znwm();
    builtin_strncpy(pcVar6,"Failed to serialize message",0x1c);
    uStack_1a8 = (long *)CONCAT44(uStack_1a8._4_4_,0xd);
    func_0x000107c3192c(aplStack_1a0,pcVar6,0x1b);
    uStack_188 = 0;
    uStack_180 = 0;
    lStack_178 = 0;
    (**(code **)(*param_4 + 0x30))(param_4,&uStack_170,&uStack_1a8,1);
    if (lStack_178 < 0) {
      __ZdlPv(uStack_188);
    }
    if (cStack_189 < '\0') {
      __ZdlPv(aplStack_1a0[0]);
    }
    __ZdlPv(pcVar6);
    func_0x000107c27c44(&uStack_170);
  }
  if (lStack_48 != 0) {
    (**(code **)(*plRam0000000113815c70 + 0xc0))();
  }
  return;
}



/* Entry: 10ade6650; end: 10ade677b;  */

long FUN_10ade6650(long param_1)

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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10ade677c; end: 10ade67c3;  */

long * FUN_10ade677c(long *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(*plRam0000000113815c70 + 0xc0))(plRam0000000113815c70);
  }
  return param_1;
}



/* Entry: 10ade67c4; end: 10ade6a7b;  */

void FUN_10ade67c4(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  char cStack_71;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar5 = (long *)0x30;
  __Znwm();
  plVar10 = plVar5 + 1;
  *plVar10 = 0;
  lVar8 = *param_4;
  plVar2 = (long *)param_4[1];
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c75ce8;
  plStack_98 = plVar5 + 3;
  if (plVar2 == (long *)0x0) {
    plVar5[4] = lVar8;
    plVar5[5] = 0;
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[3] = (long)&PTR_DAT_110ccd430;
    plVar5[4] = lVar8;
    plVar5[5] = (long)plVar2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar5[3] = (long)&PTR_FUN_110c75d38;
  cStack_71 = '\n';
  uStack_80 = 0x5253;
  uVar9 = *(undefined8 *)(param_2 + 8);
  uStack_88 = 0x414c4d6563696f56;
  uStack_7e = 0;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = *plVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plStack_90 = plVar5;
  plStack_60 = plStack_98;
  plStack_58 = plVar5;
  func_0x0001073a9120(&uStack_70,uVar9,&UNK_10f6aeeab,&uStack_88,param_3,&plStack_98);
  plVar2 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar5 = plStack_90 + 1;
    do {
      lVar8 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (cStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  puVar6 = (undefined8 *)0x30;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c75db0;
  puVar7 = puVar6 + 3;
  *puVar7 = &PTR_FUN_110c75e00;
  puVar6[5] = plStack_68;
  puVar6[4] = uStack_70;
  if (plStack_68 == (long *)0x0) {
    *param_1 = puVar7;
    param_1[1] = puVar6;
  }
  else {
    plVar2 = plStack_68 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *param_1 = puVar7;
    param_1[1] = puVar6;
    if (plStack_68 != (long *)0x0) {
      plVar2 = plStack_68 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
  }
  plVar2 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar8 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return;
}



/* Entry: 10ade6a7c; end: 10ade6c6f;  */

long FUN_10ade6a7c(long param_1)

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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10ade6c70; end: 10ade6c7f;  */

void FUN_10ade6c70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75c30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


