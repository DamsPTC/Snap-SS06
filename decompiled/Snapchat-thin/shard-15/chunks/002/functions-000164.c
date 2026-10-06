/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b96d54c; end: 10b96d747;  */

void FUN_10b96d54c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c25cfc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fd2a0 != -1) {
    func_0x000107c27d9c(0x1137fd2a0,&PTR___NSConcreteGlobalBlock_110d7abf0);
  }
  puVar1 = puRam00000001137fd2a8;
  _objc_retain(puRam00000001137fd2a8);
  uVar2 = param_4;
  func_0x00010bf51e00(param_4);
  _objc_retain(puVar1);
  _objc_sync_enter(puVar1);
  puVar3 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf24b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf24ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (puVar5 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      goto LAB_10b96d6c4;
    }
    func_0x00010c1d0560(puVar1);
    puVar3 = puVar5;
  }
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8240(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
LAB_10b96d6c4:
  _objc_sync_exit(puVar1);
  func_0x00010b96d77c();
  _objc_release(uVar2);
  func_0x00010b96d77c();
  _objc_release(param_3);
  _objc_release(param_4);
  func_0x00010b96d774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b96d748; end: 10b96d773;  */

void FUN_10b96d748(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  uVar1 = puRam00000001137fd2a8;
  puRam00000001137fd2a8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b96d774; end: 10b96d7a7;  */

void FUN_10b96d774(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b96d7a8; end: 10b96d7f7;  */

void FUN_10b96d7a8(undefined8 param_1,undefined8 param_2,int param_3)

{
  func_0x00010c1cbe20();
  if (param_3 != 0) {
    func_0x00010c2954e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b96d7f8; end: 10b96d7fb;  */

void FUN_10b96d7f8(void)

{
  return;
}



/* Entry: 10b96d7fc; end: 10b96d82f;  */

bool FUN_10b96d7fc(undefined *param_1)

{
  undefined *puVar1;
  
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
  return param_1 == puVar1;
}



/* Entry: 10b96d830; end: 10b96d8e3;  */

void FUN_10b96d830(long param_1)

{
  long lVar1;
  undefined1 auStack_b0 [128];
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf03d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010b96dd50();
  func_0x00010b96dce8();
  if (lVar1 == 0) {
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    func_0x00010b96dce8();
  }
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_b0,PTR__CATransform3DIdentity_110346c58,0x80);
  func_0x00010c219960(param_1);
  func_0x00010b96dd58();
  return;
}



/* Entry: 10b96d8e4; end: 10b96d8eb;  */

undefined8 FUN_10b96d8e4(void)

{
  return 1;
}



/* Entry: 10b96d8ec; end: 10b96d973;  */

bool FUN_10b96d8ec(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010c295200();
  iVar2 = (int)lVar3;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8f0c0();
  FUN_10b96dce8();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf03d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    bVar1 = param_1 != 0;
    func_0x00010b96dd50();
    FUN_10b96dce8();
  }
  return bVar1;
}



/* Entry: 10b96d974; end: 10b96db23;  */

undefined1  [16] FUN_10b96d974(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  int unaff_w21;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar1 [16];
  
  func_0x00010b96dcf0();
  func_0x00010b96dd60();
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b96dd68();
  if (unaff_w21 != 0) {
    func_0x00010c10f4e0();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x20 != 0) {
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10f4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b96dd44(unaff_x20);
      func_0x00010bf511e0();
      func_0x00010b96dd34();
      func_0x00010b96dd2c();
      param_1 = unaff_d8;
      param_2 = unaff_d9;
      goto LAB_10b96da30;
    }
  }
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b96dd44();
  func_0x00010bf511e0();
LAB_10b96da30:
  func_0x00010b96dd50();
  func_0x00010b96dce8();
  func_0x00010b96dd58();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 10b96db24; end: 10b96db3f;  */

void FUN_10b96db24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getAssociatedObject_11034d240)(param_1,PTR_s_valdiHitTest_112682f10);
  return;
}



/* Entry: 10b96db40; end: 10b96dce7;  */

/* WARNING: Possible PIC construction at 0x00010b96dc8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b96dc90) */
/* WARNING: Removing unreachable block (ram,0x00010b96dce4) */
/* WARNING: Removing unreachable block (ram,0x00010b96dcac) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */

void FUN_10b96db40(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 in_x3;
  ulong unaff_x21;
  ulong uVar6;
  ulong uVar7;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined8 uVar5;
  
  func_0x00010b96dcf0();
  func_0x00010b96dd60();
  _objc_retain(in_x3);
  uVar4 = unaff_x21;
  func_0x00010c082800();
  if (((int)uVar4 != 0) && (uVar4 = unaff_x21, func_0x00010c074c20(), (uVar4 & 1) == 0)) {
    func_0x00010bf01b40();
    bVar2 = false;
    if (!NAN((double)CONCAT17(in_register_00005007,
                              CONCAT16(in_register_00005006,
                                       CONCAT15(in_register_00005005,
                                                CONCAT14(in_register_00005004,
                                                         CONCAT13(in_register_00005003,
                                                                  CONCAT12(in_register_00005002,
                                                                           CONCAT11(
                                                  in_register_00005001,in_b0))))))))) {
      bVar2 = (double)CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))) == 0.0;
    }
    if (!bVar2) {
      uVar5 = in_x3;
      func_0x00010b96dd44();
      iVar3 = (int)uVar5;
      FUN_10b9889a4();
      if (iVar3 != 0) {
        func_0x00010c261580();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = unaff_x21;
        func_0x00010c140180();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        func_0x00010b96dd18();
        lVar1 = lRam0000000000000000;
        while (unaff_x21 != 0) {
          uVar7 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(uVar4);
            }
            uVar6 = *(ulong *)(uVar7 * 8);
            func_0x00010b96dd44(uVar6);
            func_0x00010bf51200();
            func_0x00010bfe3a40();
            _objc_retainAutoreleasedReturnValue();
            if (uVar6 != 0) {
              func_0x00010b96dd2c();
              goto LAB_10b96dc8c;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < unaff_x21);
          func_0x00010b96dd18();
          unaff_x21 = uVar6;
        }
        func_0x00010b96dd2c();
        _objc_retain();
      }
    }
  }
LAB_10b96dc8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 10b96dce8; end: 10b96ddab;  */

void FUN_10b96dce8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b96ddac; end: 10b96de63;  */

void FUN_10b96ddac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110d7ac58;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10b96debc);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c30e30(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10b96e184(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10b96de64; end: 10b96debb;  */

void FUN_10b96de64(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    ___dynamic_cast(param_1,&PTR_DAT_110a20098,&PTR_DAT_110d7ac10,0);
    if (param_1 == (long *)0x0) {
      ___cxa_bad_cast();
      puVar8 = (undefined8 *)*param_1;
      puVar4 = (undefined8 *)0x38;
      __Znwm();
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_FUN_110d7ac98;
      puVar4[3] = &PTR_FUN_110d7ad18;
      puVar5 = puVar8;
      _objc_retain();
      _objc_autoreleasePoolPush();
      puVar6 = puVar5;
      func_0x000107c316f8();
      lVar7 = puVar6[1];
      uVar9 = *puVar6;
      puVar4[5] = puVar6[1];
      puVar4[4] = uVar9;
      if (lVar7 != 0) {
        plVar1 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      _objc_retain(puVar8);
      puVar4[6] = puVar8;
      _objc_autoreleasePoolPop(puVar5);
      _objc_release(puVar8);
      puVar4[3] = &PTR_FUN_110d7ace8;
      *extraout_x8 = puVar4 + 3;
      extraout_x8[1] = puVar4;
      uStack_70 = 0;
      uStack_68 = 0;
      extraout_x8[2] = *param_1;
      FUN_10b96e184(&uStack_70);
      return;
    }
    lVar7 = param_1[3];
    _objc_retain(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 10b96debc; end: 10b96dfbb;  */

void FUN_10b96debc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110d7ac98;
  puVar4[3] = &PTR_FUN_110d7ad18;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110d7ace8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b96e184(&uStack_50);
  return;
}



/* Entry: 10b96dfbc; end: 10b96dfbf;  */

void FUN_10b96dfbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7ac98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b96dfc0; end: 10b96dfd3;  */

void FUN_10b96dfc0(void)

{
  FUN_10b96e174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b96dfd4; end: 10b96dfdf;  */

long FUN_10b96dfd4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuStack_28;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110d7ac58;
    func_0x000107c316fc(lVar1,&ppuStack_28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_10b96e14c(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b96dfe0; end: 10b96e01b;  */

void FUN_10b96dfe0(void)

{
  FUN_10b96e1ac();
  return;
}



/* Entry: 10b96e01c; end: 10b96e08f;  */

void FUN_10b96e01c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10b980ac4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2fc0(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b96e090; end: 10b96e0bf;  */

void FUN_10b96e090(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b96e0c0; end: 10b96e14b;  */

long FUN_10b96e0c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuStack_28;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110d7ac58;
    func_0x000107c316fc(param_1,&ppuStack_28);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_10b96e14c(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b96e14c; end: 10b96e173;  */

long FUN_10b96e14c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b96e174; end: 10b96e183;  */

void FUN_10b96e174(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7ac98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b96e184; end: 10b96e1ab;  */

long FUN_10b96e184(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b96e1ac; end: 10b96e1b7;  */

long FUN_10b96e1ac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuStack_28;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110d7ac58;
    func_0x000107c316fc(lVar1,&ppuStack_28);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  FUN_10b96e14c(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b96e1b8; end: 10b96e22f; -[SCNValdiCoreAsset initWithCpp:] */

undefined1 * FUN_10b96e1b8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_11270c0b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b96e630();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001080d58f0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b96e230; end: 10b96e283; -[SCNValdiCoreAsset getIdentifier] */

void FUN_10b96e230(long param_1)

{
  undefined1 auStack_28 [8];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_28);
  FUN_10b98101c(auStack_28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b96e660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b96e284; end: 10b96e293; -[SCNValdiCoreAsset measureWidth:maxHeight:] */

void FUN_10b96e284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b96e290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10b96e294; end: 10b96e2a3; -[SCNValdiCoreAsset measureHeight:maxHeight:] */

void FUN_10b96e294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b96e2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}



/* Entry: 10b96e2a4; end: 10b96e37f; -[SCNValdiCoreAsset addLoadObserver:outputType:preferredWidth:preferredHeight:filter:] */

void FUN_10b96e2a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  _objc_retain(param_7);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b96e690(auStack_50,param_3);
  FUN_10b980484(auStack_60,param_7);
  (**(code **)(*plVar1 + 0x28))(plVar1,auStack_50,param_4,param_5,param_6,auStack_60);
  FUN_10b9a8d98(auStack_60);
  func_0x00010b8d1018(auStack_50);
  _objc_release(param_7);
  return;
}



/* Entry: 10b96e380; end: 10b96e3c3; -[SCNValdiCoreAsset removeLoadObserver:] */

void FUN_10b96e380(long param_1)

{
  long *plVar1;
  undefined1 auStack_30 [16];
  
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b96e678();
  (**(code **)(*plVar1 + 0x30))(plVar1,auStack_30);
  func_0x00010b96e658();
  return;
}



/* Entry: 10b96e3c4; end: 10b96e41b; -[SCNValdiCoreAsset updateLoadObserverPreferredSize:preferredWidth:preferredHeight:] */

void FUN_10b96e3c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b96e678();
  (**(code **)(*plVar1 + 0x38))(plVar1,auStack_40,param_4,param_5);
  func_0x00010b96e658();
  return;
}



/* Entry: 10b96e41c; end: 10b96e46b;  */

void FUN_10b96e41c(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        FUN_10b96e630();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b96e46c; end: 10b96e497;  */

void FUN_10b96e46c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b96e54c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b96e498; end: 10b96e507; -[SCNValdiCoreAsset .cxx_destruct] */

void FUN_10b96e498(long param_1)

{
  undefined **ppuStack_38;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_38 = &PTR_DAT_110d7ad38;
    func_0x000107c31708(param_1 + 8,&ppuStack_38);
  }
  func_0x0001080d58f0((long *)(param_1 + 0x18));
  func_0x000107c30e34(param_1 + 8);
  return;
}



/* Entry: 10b96e508; end: 10b96e54b; -[SCNValdiCoreAsset .cxx_construct] */

undefined8 * FUN_10b96e508(undefined8 *param_1)

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
      FUN_10b96e630();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b96e54c; end: 10b96e5bf;  */

void FUN_10b96e54c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110d7ad38;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b96e630();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b96e5c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b96e66c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b96e5c0; end: 10b96e62f;  */

void FUN_10b96e5c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e1b70;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b96e630();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001080d58f0(&uStack_30);
  return;
}



/* Entry: 10b96e630; end: 10b96e68f;  */

void FUN_10b96e630(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b96e690; end: 10b96e73b;  */

void FUN_10b96e690(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110d7ad90;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10b96e73c);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c30e30(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10b96ea24(&uStack_50);
  }
  FUN_10b96ea50();
  return;
}



/* Entry: 10b96e73c; end: 10b96e83b;  */

void FUN_10b96e73c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110d7add0;
  puVar4[3] = &PTR_DAT_110d7ae48;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110d7ae20;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b96ea24(&uStack_50);
  return;
}



/* Entry: 10b96e83c; end: 10b96e83f;  */

void FUN_10b96e83c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7add0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b96e840; end: 10b96e853;  */

void FUN_10b96e840(void)

{
  FUN_10b96ea14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b96e854; end: 10b96e85f;  */

long FUN_10b96e854(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuStack_28;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110d7ad90;
    func_0x000107c316fc(lVar1,&ppuStack_28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_10b96e14c(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b96e860; end: 10b96e89f;  */

void FUN_10b96e860(void)

{
  func_0x00010b96ea60();
  return;
}



/* Entry: 10b96e8a0; end: 10b96e98b;  */

void FUN_10b96e8a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10b96e46c(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b980ac4(param_3);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_4 + 8) == '\x01') {
    FUN_10b98101c(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_4 = 0;
  }
  func_0x00010c0e4e60(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  FUN_10b96ea50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b96e98c; end: 10b96ea13;  */

long FUN_10b96e98c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuStack_28;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110d7ad90;
    func_0x000107c316fc(param_1,&ppuStack_28);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_10b96e14c(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b96ea14; end: 10b96ea23;  */

void FUN_10b96ea14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7add0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b96ea24; end: 10b96ea4f;  */

long FUN_10b96ea24(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b96ea50; end: 10b96ea6b;  */

void FUN_10b96ea50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b96ea6c; end: 10b96eb23;  */

void FUN_10b96ea6c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110d7aea8;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10b96eb24);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c30e30(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10b96ed54(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10b96eb24; end: 10b96ec23;  */

void FUN_10b96eb24(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110d7aee8;
  puVar4[3] = &PTR_DAT_110d7af60;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110d7af38;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b96ed54(&uStack_50);
  return;
}



/* Entry: 10b96ec24; end: 10b96ec27;  */

void FUN_10b96ec24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7aee8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b96ec28; end: 10b96ec3b;  */

void FUN_10b96ec28(void)

{
  FUN_10b96ed44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b96ec3c; end: 10b96ec47;  */

long FUN_10b96ec3c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuStack_28;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110d7aea8;
    func_0x000107c316fc(lVar1,&ppuStack_28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_10b96e14c(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b96ec48; end: 10b96ecb7;  */

void FUN_10b96ec48(void)

{
  FUN_10b96ed80();
  return;
}



/* Entry: 10b96ecb8; end: 10b96ed43;  */

long FUN_10b96ecb8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuStack_28;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110d7aea8;
    func_0x000107c316fc(param_1,&ppuStack_28);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_10b96e14c(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b96ed44; end: 10b96ed53;  */

void FUN_10b96ed44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7aee8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b96ed54; end: 10b96ed7f;  */

long FUN_10b96ed54(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b96ed80; end: 10b96ed8b;  */

long FUN_10b96ed80(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuStack_28;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110d7aea8;
    func_0x000107c316fc(lVar1,&ppuStack_28);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  FUN_10b96e14c(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b96ed8c; end: 10b96ee67;  */

void FUN_10b96ed8c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf0ddc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c30f2c(&uStack_48);
  uVar2 = param_2;
  func_0x00010c27dd80();
  uVar3 = param_2;
  func_0x00010c0ec5e0();
  uVar4 = param_2;
  func_0x00010c06a060();
  *param_1 = uStack_48;
  uStack_48 = 0;
  *(int *)(param_1 + 1) = (int)uVar2;
  *(char *)((long)param_1 + 0xc) = (char)uVar3;
  *(char *)((long)param_1 + 0xd) = (char)uVar4;
  func_0x000107c278f8(0);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b96ee68; end: 10b96ef17; -[SCNValdiCoreCompositeAttributePart initWithAttribute:type:optional:invalidateLayoutOnChange:] */

undefined1 *
FUN_10b96ee68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_11270c0b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b96ef18; end: 10b96ef1f; -[SCNValdiCoreCompositeAttributePart attribute] */

undefined8 FUN_10b96ef18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b96ef20; end: 10b96ef27; -[SCNValdiCoreCompositeAttributePart type] */

undefined8 FUN_10b96ef20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b96ef28; end: 10b96ef2f; -[SCNValdiCoreCompositeAttributePart optional] */

undefined1 FUN_10b96ef28(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b96ef30; end: 10b96ef37; -[SCNValdiCoreCompositeAttributePart invalidateLayoutOnChange] */

undefined1 FUN_10b96ef30(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b96ef38; end: 10b96ef43; -[SCNValdiCoreCompositeAttributePart .cxx_destruct] */

void FUN_10b96ef38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b96ef44; end: 10b96efb7;  */

void FUN_10b96ef44(undefined8 *param_1,long param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    FUN_10b9813b8(&uStack_38,param_2);
    *param_1 = uStack_38;
    param_1[2] = uStack_28;
    param_1[1] = uStack_30;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  FUN_10b96f0e4();
  return;
}



/* Entry: 10b96efb8; end: 10b96f0b3;  */

void FUN_10b96efb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126e1b78;
  _objc_alloc(PTR_PTR_1126e1b78);
  lVar2 = param_1;
  FUN_10b98101c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 8;
  FUN_10b98101c(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x10;
  FUN_10b980ac4(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x20;
  FUN_10b96f0b4(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a1a0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,*(undefined4 *)(param_1 + 0x40));
  func_0x00010b96f0ec();
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010b96f0e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b96f0b4; end: 10b96f0e3;  */

void FUN_10b96f0b4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b981730();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b96f0e4; end: 10b96f0f7;  */

void FUN_10b96f0e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b96f0f8; end: 10b96f227; -[SCNValdiCoreHTTPRequest initWithUrl:method:headers:body:priority:] */

undefined1 *
FUN_10b96f0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_11270c0c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b96f228; end: 10b96f22f; -[SCNValdiCoreHTTPRequest url] */

undefined8 FUN_10b96f228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b96f230; end: 10b96f237; -[SCNValdiCoreHTTPRequest method] */

undefined8 FUN_10b96f230(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b96f238; end: 10b96f23f; -[SCNValdiCoreHTTPRequest headers] */

undefined8 FUN_10b96f238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b96f240; end: 10b96f247; -[SCNValdiCoreHTTPRequest body] */

undefined8 FUN_10b96f240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b96f248; end: 10b96f24f; -[SCNValdiCoreHTTPRequest priority] */

undefined4 FUN_10b96f248(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b96f250; end: 10b96f28b; -[SCNValdiCoreHTTPRequest .cxx_destruct] */

void FUN_10b96f250(long param_1)

{
  FUN_10b96f28c(param_1 + 0x28);
  FUN_10b96f28c(param_1 + 0x20);
  FUN_10b96f28c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b96f28c; end: 10b96f293;  */

void FUN_10b96f28c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10b96f294; end: 10b96f33f;  */

void FUN_10b96f294(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110d7afd0;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10b96f340);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c30e30(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10b96f604(&uStack_50);
  }
  FUN_10b96f630();
  return;
}



/* Entry: 10b96f340; end: 10b96f437;  */

void FUN_10b96f340(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110d7b010;
  puVar4[3] = &PTR_DAT_110d7b088;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  func_0x00010b96f64c();
  puVar4[3] = &PTR_FUN_110d7b060;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b96f604(&uStack_50);
  return;
}



/* Entry: 10b96f438; end: 10b96f43b;  */

void FUN_10b96f438(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7b010;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b96f43c; end: 10b96f44f;  */

void FUN_10b96f43c(void)

{
  FUN_10b96f5f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b96f450; end: 10b96f45b;  */

long FUN_10b96f450(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuStack_28;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110d7afd0;
    func_0x000107c316fc(lVar1,&ppuStack_28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_10b96e14c(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b96f45c; end: 10b96f49b;  */

void FUN_10b96f45c(void)

{
  func_0x00010b96f640();
  return;
}



/* Entry: 10b96f49c; end: 10b96f56b;  */

void FUN_10b96f49c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  FUN_10b96efb8(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b96f774(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  FUN_10b96f630();
  FUN_10b96ea6c(param_1,uVar2);
  func_0x00010b96f64c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b96f56c; end: 10b96f5f3;  */

long FUN_10b96f56c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuStack_28;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110d7afd0;
    func_0x000107c316fc(param_1,&ppuStack_28);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_10b96e14c(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b96f5f4; end: 10b96f603;  */

void FUN_10b96f5f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7b010;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b96f604; end: 10b96f62f;  */

long FUN_10b96f604(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b96f630; end: 10b96f653;  */

void FUN_10b96f630(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b96f654; end: 10b96f6cb; -[SCNValdiCoreHTTPRequestManagerCompletion initWithCpp:] */

undefined1 * FUN_10b96f654(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_11270c0c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b96f94c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b936fec(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b96f6cc; end: 10b96f71f; -[SCNValdiCoreHTTPRequestManagerCompletion onComplete:] */

void FUN_10b96f6cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_58 [56];
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b96f97c(auStack_58,param_3);
  func_0x00010b96f964(*(undefined8 *)(*plVar1 + 0x10));
  FUN_10b936394(auStack_58);
  return;
}



/* Entry: 10b96f720; end: 10b96f773; -[SCNValdiCoreHTTPRequestManagerCompletion onFail:] */

void FUN_10b96f720(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_38 [24];
  
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c27f20(auStack_38,param_3);
  func_0x00010b96f964(*(undefined8 *)(*plVar1 + 0x18));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10b96f774; end: 10b96f79f;  */

void FUN_10b96f774(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b96f860();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b96f7a0; end: 10b96f81b; -[SCNValdiCoreHTTPRequestManagerCompletion .cxx_destruct] */

void FUN_10b96f7a0(long param_1)

{
  undefined **ppuStack_38;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_38 = &PTR_DAT_110d7b0a0;
    func_0x000107c31708(param_1 + 8,&ppuStack_38);
  }
  FUN_10b936fec((long *)(param_1 + 0x18));
  func_0x000107c30e34(param_1 + 8);
  return;
}



/* Entry: 10b96f81c; end: 10b96f85f; -[SCNValdiCoreHTTPRequestManagerCompletion .cxx_construct] */

undefined8 * FUN_10b96f81c(undefined8 *param_1)

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
      FUN_10b96f94c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b96f860; end: 10b96f8d3;  */

void FUN_10b96f860(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110d7b0a0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b96f94c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b96f8d4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b96f970();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b96f8d4; end: 10b96f94b;  */

void FUN_10b96f8d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e1b80;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b96f94c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10b936fec(&uStack_30);
  return;
}


