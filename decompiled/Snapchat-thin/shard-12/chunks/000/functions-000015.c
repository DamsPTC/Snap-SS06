/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c3e478; end: 108c3e4ef;  */

void FUN_108c3e478(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c3e4f0; end: 108c3e567; -[SCNAtlasAtlasFriendsDataCallbackCppProxy initWithCpp:] */

undefined1 * FUN_108c3e4f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fde70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108c3f4f8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000108c3eb90(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108c3e568; end: 108c3e6f3; -[SCNAtlasAtlasFriendsDataCallbackCppProxy onCacheStatesUpdate:] */

void FUN_108c3e568(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined1 auStack_d8 [40];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  float fStack_38;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  func_0x000108c3f56c();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x5812000000;
  pcStack_70 = FUN_108c3ebb8;
  uStack_68 = 0x108c3ebc4;
  pcStack_60 = "";
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  fStack_38 = 1.0;
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  FUN_108c3eea0(&uStack_58,(long)((float)uVar1 / fStack_38));
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_108c3ebcc;
  puStack_98 = &UNK_110ab9258;
  puStack_90 = &uStack_88;
  func_0x00010bf97ce0(param_3);
  FUN_108c3f118(auStack_d8,puStack_80 + 6);
  func_0x000108c3f574();
  func_0x000108c3f498(&uStack_58);
  func_0x000108c3f508();
  (**(code **)(*plVar2 + 0x10))(plVar2,auStack_d8);
  func_0x000108c3f498(auStack_d8);
  func_0x000108c3f508();
  return;
}



/* Entry: 108c3e6f4; end: 108c3e7df;  */

void FUN_108c3e6f4(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126db360;
    _objc_opt_class(PTR_PTR_1126db360);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x000108c3f56c();
      ppuStack_38 = &PTR_DAT_110ab9178;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_108c3e874);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_108c3eb68(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_108c3f4f8();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000108c3f508();
  return;
}



/* Entry: 108c3e7e0; end: 108c3e833; -[SCNAtlasAtlasFriendsDataCallbackCppProxy .cxx_destruct] */

void FUN_108c3e7e0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ab9248;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000108c3eb90((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108c3e834; end: 108c3e873; -[SCNAtlasAtlasFriendsDataCallbackCppProxy .cxx_construct] */

undefined8 * FUN_108c3e834(undefined8 *param_1)

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
      FUN_108c3f4f8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108c3e874; end: 108c3e95b;  */

void FUN_108c3e874(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int extraout_w10;
  long lVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = *param_2;
  plVar1 = param_2;
  func_0x000108c3f580();
  plVar1[1] = 0;
  plVar1[2] = 0;
  *plVar1 = (long)&PTR_FUN_110ab91b8;
  plVar1[3] = (long)&PTR_DAT_110ab9230;
  lVar2 = lVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  plVar3 = (long *)lVar2;
  func_0x000107c316f8();
  lVar4 = plVar3[1];
  lVar6 = *plVar3;
  plVar1[5] = plVar3[1];
  plVar1[4] = lVar6;
  if (lVar4 != 0) {
    do {
      func_0x000108c3f4f8();
    } while (extraout_w10 != 0);
  }
  _objc_retain(lVar5);
  plVar1[6] = lVar5;
  _objc_autoreleasePoolPop(lVar2);
  func_0x000108c3f52c();
  plVar1[3] = (long)&PTR_FUN_110ab9208;
  *param_1 = plVar1 + 3;
  param_1[1] = plVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108c3eb68(&uStack_50);
  return;
}



/* Entry: 108c3e95c; end: 108c3e95f;  */

void FUN_108c3e95c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab91b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c3e960; end: 108c3e973;  */

void FUN_108c3e960(void)

{
  FUN_108c3eb58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c3e974; end: 108c3e97f;  */

long FUN_108c3e974(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110ab9178;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108c3e980; end: 108c3e9bb;  */

void FUN_108c3e980(void)

{
  func_0x000108c3f588();
  return;
}



/* Entry: 108c3e9bc; end: 108c3eac3;  */

void FUN_108c3e9bc(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  plVar5 = (long *)(param_2 + 0x10);
  while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
    FUN_108c47748(plVar5 + 5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = (long)(plVar5 + 2);
    func_0x000107c27f28(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar2);
    _objc_release(lVar3);
    func_0x000108c3f52c();
  }
  func_0x00010bf51e00(puVar2);
  func_0x000108c3f508();
  func_0x00010c0e2bc0(uVar4);
  func_0x000108c3f52c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108c3eac4; end: 108c3eb57;  */

long FUN_108c3eac4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110ab9178;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108c3eb58; end: 108c3eb67;  */

void FUN_108c3eb58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab91b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c3eb68; end: 108c3ebb7;  */

long FUN_108c3eb68(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108c3ebb8; end: 108c3ebcb;  */

void FUN_108c3ebb8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_2 + 0x30);
  *(long *)(param_2 + 0x30) = 0;
  *(long *)(param_1 + 0x30) = lVar2;
  lVar4 = *(long *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar3 = *(long *)(param_2 + 0x48);
  *(long *)(param_1 + 0x48) = lVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = *(ulong *)(param_1 + 0x38);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long *)(lVar2 + uVar5 * 8) = param_1 + 0x40;
    *(long *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}



/* Entry: 108c3ebcc; end: 108c3ee2f;  */

void FUN_108c3ebcc(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  long *plVar10;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  lVar5 = param_2;
  _objc_retain(param_3);
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c27f20(&lStack_90,param_2);
  FUN_108c476e4();
  plVar6 = (long *)(lVar7 + 0x48);
  func_0x000107c278c4(plVar6,&lStack_90);
  plVar8 = *(long **)(lVar7 + 0x38);
  plVar3 = plVar6;
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        func_0x000108c3f5a8();
      }
    }
    plVar10 = *(long **)(*(long *)(lVar7 + 0x30) + (long)unaff_x25 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_108c3ecc0;
          plVar4 = (long *)plVar10[1];
          if (plVar4 != plVar6) break;
          plVar3 = plVar10 + 2;
          func_0x000107c278d0(plVar3,&lStack_90);
          if (((ulong)plVar3 & 1) != 0) goto LAB_108c3edd8;
        }
        if (((ulong)plVar8 & uVar9) == 0) {
          plVar4 = (long *)((ulong)plVar4 & uVar9);
        }
        else if (plVar8 <= plVar4) {
          uVar1 = 0;
          if (plVar8 != (long *)0x0) {
            uVar1 = (ulong)plVar4 / (ulong)plVar8;
          }
          plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar8);
        }
      } while (plVar4 == unaff_x25);
    }
  }
LAB_108c3ecc0:
  func_0x000108c3f580();
  lVar2 = lStack_80;
  plVar10 = (long *)(lVar7 + 0x40);
  uStack_68 = 1;
  *plVar3 = 0;
  plVar3[1] = (long)plVar6;
  plVar3[3] = lStack_88;
  plVar3[2] = lStack_90;
  lStack_90 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  plVar3[4] = lVar2;
  plVar3[5] = param_3;
  plVar3[6] = lVar5;
  plStack_78 = plVar3;
  plStack_70 = plVar10;
  if ((plVar8 == (long *)0x0) ||
     (plVar3 = unaff_x25,
     *(float *)(lVar7 + 0x50) * (float)plVar8 < (float)(*(long *)(lVar7 + 0x48) + 1))) {
    func_0x000108c3f554();
    func_0x000108c3f53c();
    FUN_108c3eea0(lVar7 + 0x30);
    plVar8 = *(long **)(lVar7 + 0x38);
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      plVar3 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      plVar3 = plVar6;
      if (plVar8 <= plVar6) {
        func_0x000108c3f5a8();
        plVar3 = unaff_x25;
      }
    }
  }
  lVar5 = *(long *)(lVar7 + 0x30);
  plVar6 = *(long **)(lVar5 + (long)plVar3 * 8);
  if (plVar6 == (long *)0x0) {
    *plStack_78 = *plVar10;
    *plVar10 = (long)plStack_78;
    *(long **)(lVar5 + (long)plVar3 * 8) = plVar10;
    if (*plStack_78 != 0) {
      plVar6 = *(long **)(*plStack_78 + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(lVar5 + (long)plVar6 * 8) = plStack_78;
    }
  }
  else {
    *plStack_78 = *plVar6;
    *plVar6 = (long)plStack_78;
  }
  plStack_78 = (long *)0x0;
  *(long *)(lVar7 + 0x48) = *(long *)(lVar7 + 0x48) + 1;
  FUN_108c3f098(&plStack_78);
LAB_108c3edd8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_90);
  func_0x000108c3f508();
  return;
}



/* Entry: 108c3ee30; end: 108c3ee9f;  */

void FUN_108c3ee30(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 108c3eea0; end: 108c3ef67;  */

void FUN_108c3eea0(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_108c3eee8;
    }
    return;
  }
LAB_108c3eee8:
  if (param_2 == 0) {
    FUN_108c3f064(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_108c3f07c(plVar2);
    FUN_108c3f064(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 108c3ef68; end: 108c3f063;  */

void FUN_108c3ef68(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_108c3f064(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_108c3f07c(plVar3);
    FUN_108c3f064(param_1,plVar3);
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



/* Entry: 108c3f064; end: 108c3f07b;  */

void FUN_108c3f064(long *param_1,long param_2)

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



/* Entry: 108c3f07c; end: 108c3f097;  */

long FUN_108c3f07c(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_108c3f0bc();
  return param_1;
}



/* Entry: 108c3f098; end: 108c3f0bb;  */

undefined8 FUN_108c3f098(undefined8 param_1)

{
  FUN_108c3f0bc(param_1,0);
  return param_1;
}



/* Entry: 108c3f0bc; end: 108c3f0d3;  */

void FUN_108c3f0bc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 108c3f0d4; end: 108c3f117;  */

void FUN_108c3f0d4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 108c3f118; end: 108c3f16f;  */

undefined8 * FUN_108c3f118(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_108c3eea0(param_1,*(undefined8 *)(param_2 + 8));
  FUN_108c3f170(param_1,*(undefined8 *)(param_2 + 0x10),0);
  return param_1;
}



/* Entry: 108c3f170; end: 108c3f1af;  */

void FUN_108c3f170(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    FUN_108c3f1ec(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 108c3f1b0; end: 108c3f1d3;  */

undefined8 FUN_108c3f1b0(undefined8 param_1)

{
  FUN_108c3f1d4(param_1,0);
  return param_1;
}



/* Entry: 108c3f1d4; end: 108c3f1eb;  */

void FUN_108c3f1d4(long *param_1)

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



/* Entry: 108c3f1ec; end: 108c3f21f;  */

void FUN_108c3f1ec(void)

{
  func_0x000108c3f204();
  return;
}



/* Entry: 108c3f220; end: 108c3f41b;  */

undefined1  [16] FUN_108c3f220(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x25;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_68 [3];
  
  plVar5 = param_1 + 3;
  func_0x000107c278c4();
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x25 = (long *)(uVar8 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar7 <= plVar5) {
        func_0x000108c3f5a8();
      }
    }
    plVar6 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_108c3f2e0;
          plVar3 = (long *)plVar6[1];
          if (plVar3 != plVar5) break;
          plVar3 = plVar6 + 2;
          func_0x000107c278d0(plVar3,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar2 = 0;
            goto LAB_108c3f3ec;
          }
        }
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar8);
        }
        else if (plVar7 <= plVar3) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar3 / (ulong)plVar7;
          }
          plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar7);
        }
      } while (plVar3 == unaff_x25);
    }
  }
LAB_108c3f2e0:
  FUN_108c3f41c(aplStack_68,param_1,plVar5,param_3);
  if ((plVar7 == (long *)0x0) ||
     (plVar3 = unaff_x25, *(float *)(param_1 + 4) * (float)plVar7 < (float)(param_1[3] + 1))) {
    func_0x000108c3f554();
    func_0x000108c3f53c();
    FUN_108c3eea0(param_1);
    plVar7 = (long *)param_1[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      plVar3 = (long *)((long)plVar7 - 1U & (ulong)plVar5);
    }
    else {
      plVar3 = plVar5;
      if (plVar7 <= plVar5) {
        func_0x000108c3f5a8();
        plVar3 = unaff_x25;
      }
    }
  }
  plVar6 = aplStack_68[0];
  lVar4 = *param_1;
  plVar5 = *(long **)(lVar4 + (long)plVar3 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *aplStack_68[0] = *plVar5;
    *plVar5 = (long)aplStack_68[0];
    *(long **)(lVar4 + (long)plVar3 * 8) = plVar5;
    if (*aplStack_68[0] != 0) {
      plVar5 = *(long **)(*aplStack_68[0] + 8);
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar7 - 1U);
      }
      else if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
      *(long **)(lVar4 + (long)plVar5 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar5;
    *plVar5 = (long)aplStack_68[0];
  }
  aplStack_68[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_108c3f098(aplStack_68);
  uVar2 = 1;
LAB_108c3f3ec:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 108c3f41c; end: 108c3f473;  */

void FUN_108c3f41c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 2;
  func_0x000108c3f580();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 0;
  *param_2 = 0;
  param_2[1] = param_3;
  FUN_108c3f474(param_2 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 108c3f474; end: 108c3f4f7;  */

void FUN_108c3f474(long param_1,long param_2)

{
  undefined8 uVar1;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 108c3f4f8; end: 108c3f5b3;  */

void FUN_108c3f4f8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108c3f5b4; end: 108c3f62b; -[SCNAtlasAtlasFriendsDataProviderCppProxy initWithCpp:] */

undefined1 * FUN_108c3f5b4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fde78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000108c43b9c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000108c3e40c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108c3f62c; end: 108c3f6db; -[SCNAtlasAtlasFriendsDataProviderCppProxy getFriendCurrentCalendarEvent:] */

void FUN_108c3f62c(void)

{
  undefined1 *puVar1;
  undefined1 auStack_70 [64];
  
  puVar1 = auStack_70;
  func_0x000108c43d08();
  func_0x000108c43f68();
  func_0x000108c43cf8();
  func_0x000108c43ea0();
  func_0x000108c43f58();
  FUN_108c3f6dc(auStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c43e44();
  func_0x000108c44264();
  func_0x000108c43d54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c3f6dc; end: 108c3f757;  */

void FUN_108c3f6dc(void)

{
  undefined1 auStack_40 [16];
  
  func_0x000108c44114();
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c43fbc();
  _objc_retain();
  FUN_108c42750(auStack_40);
  func_0x000107c27b58(auStack_40);
  func_0x000108c4410c();
  func_0x000108c43d54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c3f758; end: 108c3f807; -[SCNAtlasAtlasFriendsDataProviderCppProxy getFriendAllCalendarEvents:] */

void FUN_108c3f758(void)

{
  undefined1 *puVar1;
  undefined1 auStack_70 [64];
  
  puVar1 = auStack_70;
  func_0x000108c43d08();
  func_0x000108c43f68();
  func_0x000108c43cf8();
  func_0x000108c43ea0();
  func_0x000108c43f58();
  FUN_108c3f808(auStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c43e3c();
  func_0x000108c4425c();
  func_0x000108c43d54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c3f808; end: 108c3f883;  */

void FUN_108c3f808(void)

{
  undefined1 auStack_40 [16];
  
  func_0x000108c44114();
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c43fbc();
  _objc_retain();
  FUN_108c42d28(auStack_40);
  func_0x000107c27b58(auStack_40);
  func_0x000108c4410c();
  func_0x000108c43d54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c3f884; end: 108c3faeb; -[SCNAtlasAtlasFriendsDataProviderCppProxy getBatchFriendAllCalendarEvents:] */

void FUN_108c3f884(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  int extraout_w10;
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000108c43d08();
  func_0x000108c4427c();
  func_0x000108c43cf8();
  func_0x000108c44168();
  func_0x000108c43f58();
  _objc_alloc_init(PTR_PTR_1126b8058);
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c44250();
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_108c415e8(&uStack_50,auStack_f0,&uStack_60);
  FUN_108c41610(&uStack_d8,&uStack_50);
  func_0x000108c3ffc0(&uStack_50);
  func_0x000108c3ffc0(&uStack_60);
  func_0x000107c27b48(&uStack_68);
  func_0x000107c27b4c(&uStack_50,uStack_68);
  func_0x000108c441e0();
  lStack_a0 = extraout_x8 + 0x60;
  lStack_98 = CONCAT71(lStack_98._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  uVar1 = uStack_d8;
  func_0x000108c43390();
  if ((int)uVar1 == 0) {
    func_0x000108c440e4();
    func_0x000108c441c8(&PTR_FUN_110ab9680);
    lVar3 = *(long *)(extraout_x9 + 0xa8);
    *(undefined8 *)(extraout_x9 + 0xa8) = uVar1;
    if (lVar3 != 0) {
      func_0x000108c43bac();
    }
  }
  else {
    FUN_108c41610(&lStack_90,&uStack_d8);
  }
  func_0x000108c440dc();
  if (lStack_90 != 0) {
    lStack_a0 = lStack_90;
    lStack_98 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x000108c43b9c();
      } while (extraout_w10 != 0);
    }
    FUN_108c433c8(auStack_80);
    func_0x000108c3ffc0(&lStack_a0);
  }
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x000108c3ffc0(&lStack_90);
  puVar2 = auStack_80;
  FUN_108c437cc();
  func_0x000108c440f4();
  func_0x000108c442f8();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x000108c43b70();
  }
  func_0x000108c44160();
  func_0x000107c27b58(&uStack_b0);
  _objc_release(0);
  func_0x000108c43d94();
  func_0x000108c43e78();
  func_0x000108c4426c();
  func_0x000108c43d54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c3faec; end: 108c3fbc7; -[SCNAtlasAtlasFriendsDataProviderCppProxy observeFriendSaturnCacheStates:source:callback:] */

undefined8
FUN_108c3faec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000108c4427c();
  FUN_108c3e6f4(auStack_58,param_5);
  (**(code **)(*plVar1 + 0x28))(plVar1,auStack_48,param_4,auStack_58);
  func_0x000108c44244();
  func_0x000108c44168();
  func_0x000108c43d94();
  func_0x000108c43d54();
  return param_4;
}



/* Entry: 108c3fbc8; end: 108c3fc1f; -[SCNAtlasAtlasFriendsDataProviderCppProxy unobserveSaturnFriendCacheStates:] */

void FUN_108c3fbc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 108c3fc20; end: 108c3fe7b; -[SCNAtlasAtlasFriendsDataProviderCppProxy getBlockedUsers:] */

void FUN_108c3fc20(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  int extraout_w10;
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000108c43d08();
  func_0x000108c43f68();
  func_0x000108c43cf8();
  func_0x000108c43ea0();
  func_0x000108c43f58();
  _objc_alloc_init(PTR_PTR_1126b8058);
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c44250();
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_108c42574(&uStack_50,auStack_f0,&uStack_60);
  FUN_108c4259c(&uStack_d8,&uStack_50);
  func_0x000108c44230();
  func_0x000108c44228();
  func_0x000107c27b48(&uStack_68);
  func_0x000107c27b4c(&uStack_50,uStack_68);
  func_0x000108c441e0();
  lStack_a0 = extraout_x8 + 0x50;
  lStack_98 = CONCAT71(lStack_98._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  uVar1 = uStack_d8;
  func_0x000108c437f0();
  if ((int)uVar1 == 0) {
    func_0x000108c440e4();
    func_0x000108c441c8(&PTR_FUN_110ab96d0);
    lVar3 = *(long *)(extraout_x9 + 0x98);
    *(undefined8 *)(extraout_x9 + 0x98) = uVar1;
    if (lVar3 != 0) {
      func_0x000108c43bac();
    }
  }
  else {
    FUN_108c4259c(&lStack_90,&uStack_d8);
  }
  func_0x000108c440dc();
  if (lStack_90 != 0) {
    lStack_a0 = lStack_90;
    lStack_98 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x000108c43b9c();
      } while (extraout_w10 != 0);
    }
    FUN_108c43828(auStack_80);
    func_0x000108c44214();
  }
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x000108c440ec();
  puVar2 = auStack_80;
  func_0x000108c43b3c();
  func_0x000108c440f4();
  func_0x000108c442f8();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x000108c43b70();
  }
  func_0x000108c3ffe4(&uStack_d8);
  func_0x000107c27b58(&uStack_b0);
  _objc_release(0);
  func_0x000108c43d94();
  func_0x000108c43e70();
  func_0x000108c3ffe4(auStack_c0);
  func_0x000108c43d54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c3fe7c; end: 108c3fee7;  */

void FUN_108c3fe7c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000108c43ecc();
  if (param_1 == 0) {
    unaff_x19 = 0;
  }
  else {
    ___dynamic_cast();
    if (param_1 == 0) {
      FUN_108c42668();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      unaff_x19 = *(undefined8 *)(param_1 + 0x18);
      _objc_retain(unaff_x19);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 108c3fee8; end: 108c3ff37; -[SCNAtlasAtlasFriendsDataProviderCppProxy .cxx_destruct] */

void FUN_108c3fee8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000108c43e80();
    func_0x000107c31708();
  }
  func_0x000108c3e40c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108c3ff38; end: 108c40007; -[SCNAtlasAtlasFriendsDataProviderCppProxy .cxx_construct] */

undefined8 * FUN_108c3ff38(undefined8 *param_1)

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
      func_0x000108c43b9c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108c40008; end: 108c40033;  */

void FUN_108c40008(void)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108c43de8();
  func_0x000108c43da4();
  FUN_108c400ac();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 108c40034; end: 108c40087;  */

void FUN_108c40034(void)

{
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar1;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 uVar2;
  long extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 uVar3;
  int extraout_w13;
  int extraout_w13_00;
  
  func_0x000108c44304();
  uVar3 = 0;
  puVar1 = extraout_x8;
  uVar2 = extraout_x9;
  if (extraout_x10 != 0) {
    do {
      func_0x000108c43cc0();
    } while (extraout_w13 != 0);
    do {
      func_0x000108c43cc0();
      puVar1 = extraout_x8_00;
      uVar2 = extraout_x9_00;
      uVar3 = extraout_x10_00;
    } while (extraout_w13_00 != 0);
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  func_0x000108c43e44();
  return;
}



/* Entry: 108c40088; end: 108c400ab;  */

void FUN_108c40088(long param_1)

{
  func_0x000108c43d34();
  if (param_1 != 0) {
    func_0x000108c43b70();
  }
  return;
}



/* Entry: 108c400ac; end: 108c400cf;  */

void FUN_108c400ac(undefined8 *param_1)

{
  FUN_108c400d0();
  *param_1 = &PTR_FUN_110ab92f0;
  return;
}



/* Entry: 108c400d0; end: 108c4010f;  */

undefined8 FUN_108c400d0(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000108c43ef8(&UNK_110ab9328);
  func_0x000108c40128();
  func_0x000108c43ee8();
  if (extraout_x8 != 0) {
    do {
      func_0x000108c43b9c();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 108c40110; end: 108c40113;  */

long FUN_108c40110(long param_1)

{
  long extraout_x8;
  
  func_0x000108c43d78(&UNK_110ab9328);
  if (extraout_x8 != 0) {
    func_0x000108c43d24();
    func_0x000108c43e80();
    FUN_108c40358();
    func_0x000108c440cc();
  }
  func_0x000108c3ff78(param_1 + 0x18);
  func_0x000108c3ff78();
  return param_1;
}



/* Entry: 108c40114; end: 108c40143;  */

void FUN_108c40114(void)

{
  FUN_108c40300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c40144; end: 108c40147;  */

long FUN_108c40144(long param_1)

{
  long extraout_x8;
  
  func_0x000108c43d78(&UNK_110ab9328);
  if (extraout_x8 != 0) {
    func_0x000108c43d24();
    func_0x000108c43e80();
    FUN_108c40358();
    func_0x000108c440cc();
  }
  func_0x000108c3ff78(param_1 + 0x18);
  func_0x000108c3ff78();
  return param_1;
}



/* Entry: 108c40148; end: 108c4015b;  */

void FUN_108c40148(void)

{
  FUN_108c40300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4015c; end: 108c401ef;  */

void FUN_108c4015c(undefined8 param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 in_register_00005008;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x000108c43ce0();
  func_0x000108c4435c();
  FUN_108c401f0();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110ab9358;
  puStack_30[1] = 0;
  func_0x000108c43f30();
  *(undefined8 *)(extraout_x8 + 0x40) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x38) = param_1;
  *(undefined8 *)(extraout_x8 + 0x50) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x48) = param_1;
  *(undefined8 *)(extraout_x8 + 0x60) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x58) = param_1;
  func_0x000108c442d8();
  *(undefined8 *)(extraout_x8_00 + 0x68) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x70) = extraout_x9;
  *(undefined8 *)(extraout_x8_00 + 0x80) = in_register_00005008;
  *(undefined8 *)(extraout_x8_00 + 0x78) = param_1;
  *(undefined8 *)(extraout_x8_00 + 0x90) = in_register_00005008;
  *(undefined8 *)(extraout_x8_00 + 0x88) = param_1;
  func_0x000108c442cc();
  *(undefined8 *)(extraout_x8_01 + 0x98) = 0;
  *(undefined8 *)(extraout_x8_01 + 0xa0) = extraout_x9_00;
  *(undefined8 *)(extraout_x8_01 + 0xb0) = in_register_00005008;
  *(undefined8 *)(extraout_x8_01 + 0xa8) = param_1;
  *(undefined8 *)(extraout_x8_01 + 0xc0) = in_register_00005008;
  *(undefined8 *)(extraout_x8_01 + 0xb8) = param_1;
  *(undefined8 *)(extraout_x8_01 + 0xd0) = in_register_00005008;
  *(undefined8 *)(extraout_x8_01 + 200) = param_1;
  *(undefined8 *)(extraout_x8_01 + 0xe0) = in_register_00005008;
  *(undefined8 *)(extraout_x8_01 + 0xd8) = param_1;
  *(undefined8 *)(extraout_x8_01 + 0xe8) = 0;
  func_0x000108c43c78();
  FUN_108c402f0();
  func_0x000108c43c64(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000108c44344();
  FUN_108c40210();
  func_0x000108c442c0();
  return;
}



/* Entry: 108c401f0; end: 108c4020f;  */

void FUN_108c401f0(void)

{
  func_0x000108c44344();
  FUN_108c40210();
  func_0x000108c442c0();
  return;
}



/* Entry: 108c40210; end: 108c4023b;  */

void FUN_108c40210(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x111111111111112) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xf0);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110ab9358;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c4023c; end: 108c4023f;  */

void FUN_108c4023c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9358;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c40240; end: 108c40253;  */

void FUN_108c40240(void)

{
  func_0x000108c40260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c40254; end: 108c4026b;  */

void FUN_108c40254(long param_1)

{
  func_0x000108c402ac(param_1 + 0xe8);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xe0);
  __ZNSt3__15mutexD1Ev(param_1 + 0xa0);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_108c40698();
  }
  return;
}



/* Entry: 108c4026c; end: 108c402cf;  */

void FUN_108c4026c(long param_1)

{
  func_0x000108c402ac(param_1 + 0xd0);
  __ZNSt13exception_ptrD1Ev(param_1 + 200);
  __ZNSt3__15mutexD1Ev(param_1 + 0x88);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_108c40698();
  }
  return;
}



/* Entry: 108c402d0; end: 108c402ef;  */

void FUN_108c402d0(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_108c40698();
  }
  return;
}



/* Entry: 108c402f0; end: 108c402ff;  */

void FUN_108c402f0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108c40300; end: 108c40357;  */

long FUN_108c40300(long param_1)

{
  long extraout_x8;
  
  func_0x000108c43d78(&UNK_110ab9328);
  if (extraout_x8 != 0) {
    func_0x000108c43d24();
    func_0x000108c43e80();
    FUN_108c40358();
    func_0x000108c440cc();
  }
  func_0x000108c3ff78(param_1 + 0x18);
  func_0x000108c3ff78();
  return param_1;
}



/* Entry: 108c40358; end: 108c4038f;  */

void FUN_108c40358(void)

{
  func_0x000108c43b7c();
  func_0x000108c43e80();
  FUN_108c40390();
  func_0x000108c43d68();
  func_0x000108c43ed8();
  return;
}



/* Entry: 108c40390; end: 108c403ab;  */

void FUN_108c40390(void)

{
  func_0x000108c43fa4();
  FUN_108c403ac();
  return;
}



/* Entry: 108c403ac; end: 108c40437;  */

void FUN_108c403ac(void)

{
  long unaff_x19;
  undefined8 uStack_30;
  
  func_0x000108c43ca0();
  func_0x000108c43cd0();
  FUN_108c40438();
  func_0x000108c43fc8();
  FUN_108c40460();
  func_0x000108c43f9c();
  func_0x000108c43e44();
  __ZNSt3__15mutex4lockEv(uStack_30 + 0x88);
  func_0x000108c43e0c();
  FUN_108c40484();
  func_0x000108c44070();
  if (unaff_x19 == 0) {
    func_0x000108c44294();
  }
  else {
    func_0x000108c43fb0();
    func_0x000108c43c4c();
    func_0x000108c43b60();
  }
  func_0x000108c43eb8();
  return;
}



/* Entry: 108c40438; end: 108c4045f;  */

void FUN_108c40438(void)

{
  func_0x000108c43c90();
  func_0x000108c440d4();
  func_0x000108c43bbc();
  func_0x000108c43f48();
  return;
}



/* Entry: 108c40460; end: 108c40483;  */

void FUN_108c40460(void)

{
  func_0x000108c43be0();
  func_0x000108c3ff78();
  return;
}



/* Entry: 108c40484; end: 108c40497;  */

void FUN_108c40484(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 200,*param_1);
  return;
}



/* Entry: 108c40498; end: 108c40537;  */

void FUN_108c40498(void)

{
  long unaff_x19;
  undefined8 uStack_30;
  
  func_0x000108c43ca0();
  func_0x000108c43cd0();
  FUN_108c40438();
  func_0x000108c43fc8();
  FUN_108c40460();
  func_0x000108c43f9c();
  func_0x000108c43e44();
  __ZNSt3__15mutex4lockEv(uStack_30 + 0x88);
  func_0x000108c43e0c();
  FUN_108c40538();
  func_0x000108c44070();
  if (unaff_x19 == 0) {
    func_0x000108c44294();
  }
  else {
    func_0x000108c43fb0();
    func_0x000108c43c4c();
    func_0x000108c43b60();
  }
  func_0x000108c43eb8();
  return;
}



/* Entry: 108c40538; end: 108c40547;  */

long FUN_108c40538(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x50) == '\x01') {
    FUN_108c40598();
  }
  else {
    FUN_108c4057c(lVar1,*param_1);
  }
  return lVar1;
}



/* Entry: 108c40548; end: 108c4057b;  */

long FUN_108c40548(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_108c40598();
  }
  else {
    FUN_108c4057c();
  }
  return param_1;
}



/* Entry: 108c4057c; end: 108c40597;  */

void FUN_108c4057c(long param_1)

{
  FUN_108c40674();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 108c40598; end: 108c405bb;  */

undefined8 FUN_108c40598(undefined8 param_1)

{
  FUN_108c405bc();
  return param_1;
}



/* Entry: 108c405bc; end: 108c405eb;  */

void FUN_108c405bc(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x48);
  if (cVar1 == *(char *)(param_2 + 0x48)) {
    if (cVar1 != '\0') {
      func_0x000108c43e8c();
      func_0x000107c27b9c();
      func_0x000107c27b9c(unaff_x20 + 0x18,unaff_x19 + 0x18);
      uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
      *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
      *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
      *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x48) == '\x01') {
        FUN_108c4064c();
        *(undefined1 *)(param_1 + 0x48) = 0;
      }
      return;
    }
    func_0x000108c43fd4();
  }
  return;
}



/* Entry: 108c405ec; end: 108c40627;  */

void FUN_108c405ec(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000108c43e8c();
  func_0x000107c27b9c();
  func_0x000107c27b9c(unaff_x20 + 0x18,unaff_x19 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  return;
}



/* Entry: 108c40628; end: 108c4064b;  */

void FUN_108c40628(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_108c4064c();
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



/* Entry: 108c4064c; end: 108c40673;  */

void FUN_108c4064c(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 108c40674; end: 108c40697;  */

void FUN_108c40674(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x48] = 0;
  if (*(char *)(param_2 + 0x48) == '\x01') {
    func_0x000108c43fd4();
  }
  return;
}



/* Entry: 108c40698; end: 108c406b7;  */

void FUN_108c40698(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_108c4064c();
  }
  return;
}



/* Entry: 108c406b8; end: 108c406e3;  */

void FUN_108c406b8(void)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108c43de8();
  func_0x000108c43da4();
  FUN_108c4075c();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 108c406e4; end: 108c40737;  */

void FUN_108c406e4(void)

{
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar1;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 uVar2;
  long extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 uVar3;
  int extraout_w13;
  int extraout_w13_00;
  
  func_0x000108c44304();
  uVar3 = 0;
  puVar1 = extraout_x8;
  uVar2 = extraout_x9;
  if (extraout_x10 != 0) {
    do {
      func_0x000108c43cc0();
    } while (extraout_w13 != 0);
    do {
      func_0x000108c43cc0();
      puVar1 = extraout_x8_00;
      uVar2 = extraout_x9_00;
      uVar3 = extraout_x10_00;
    } while (extraout_w13_00 != 0);
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  func_0x000108c43e3c();
  return;
}



/* Entry: 108c40738; end: 108c4075b;  */

void FUN_108c40738(long param_1)

{
  func_0x000108c43d34();
  if (param_1 != 0) {
    func_0x000108c43b70();
  }
  return;
}



/* Entry: 108c4075c; end: 108c4077f;  */

void FUN_108c4075c(undefined8 *param_1)

{
  FUN_108c40780();
  *param_1 = &PTR_FUN_110ab93a8;
  return;
}



/* Entry: 108c40780; end: 108c407bf;  */

undefined8 FUN_108c40780(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000108c43ef8(&UNK_110ab93e0);
  func_0x000108c407d8();
  func_0x000108c43ee8();
  if (extraout_x8 != 0) {
    do {
      func_0x000108c43b9c();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 108c407c0; end: 108c407c3;  */

long FUN_108c407c0(long param_1)

{
  long extraout_x8;
  
  func_0x000108c43d78(&UNK_110ab93e0);
  if (extraout_x8 != 0) {
    func_0x000108c43d24();
    func_0x000108c43e80();
    FUN_108c409f0();
    func_0x000108c440cc();
  }
  func_0x000108c3ff9c(param_1 + 0x18);
  func_0x000108c3ff9c();
  return param_1;
}



/* Entry: 108c407c4; end: 108c407f3;  */

void FUN_108c407c4(void)

{
  FUN_108c40998();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c407f4; end: 108c407f7;  */

long FUN_108c407f4(long param_1)

{
  long extraout_x8;
  
  func_0x000108c43d78(&UNK_110ab93e0);
  if (extraout_x8 != 0) {
    func_0x000108c43d24();
    func_0x000108c43e80();
    FUN_108c409f0();
    func_0x000108c440cc();
  }
  func_0x000108c3ff9c(param_1 + 0x18);
  func_0x000108c3ff9c();
  return param_1;
}



/* Entry: 108c407f8; end: 108c4080b;  */

void FUN_108c407f8(void)

{
  FUN_108c40998();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4080c; end: 108c40887;  */

void FUN_108c4080c(undefined8 param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 in_register_00005008;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x000108c43ce0();
  func_0x000108c4435c();
  FUN_108c40888();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110ab9410;
  func_0x000108c43f30();
  func_0x000108c442d8();
  *(undefined8 *)(extraout_x8 + 0x38) = extraout_x9;
  *(undefined8 *)(extraout_x8 + 0x48) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x40) = param_1;
  *(undefined8 *)(extraout_x8 + 0x58) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x50) = param_1;
  func_0x000108c442cc();
  *(undefined8 *)(extraout_x8_00 + 0x60) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x68) = extraout_x9_00;
  *(undefined8 *)(extraout_x8_00 + 0x78) = in_register_00005008;
  *(undefined8 *)(extraout_x8_00 + 0x70) = param_1;
  *(undefined8 *)(extraout_x8_00 + 0x88) = in_register_00005008;
  *(undefined8 *)(extraout_x8_00 + 0x80) = param_1;
  *(undefined8 *)(extraout_x8_00 + 0x98) = in_register_00005008;
  *(undefined8 *)(extraout_x8_00 + 0x90) = param_1;
  *(undefined8 *)(extraout_x8_00 + 0xa8) = in_register_00005008;
  *(undefined8 *)(extraout_x8_00 + 0xa0) = param_1;
  *(undefined8 *)(extraout_x8_00 + 0xb0) = 0;
  func_0x000108c43c78();
  FUN_108c40988();
  func_0x000108c43c64(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000108c44344();
  FUN_108c408a8();
  func_0x000108c442c0();
  return;
}



/* Entry: 108c40888; end: 108c408a7;  */

void FUN_108c40888(void)

{
  func_0x000108c44344();
  FUN_108c408a8();
  func_0x000108c442c0();
  return;
}



/* Entry: 108c408a8; end: 108c408d3;  */

void FUN_108c408a8(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1642c8590b21643) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb8);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110ab9410;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c408d4; end: 108c408d7;  */

void FUN_108c408d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9410;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c408d8; end: 108c408eb;  */

void FUN_108c408d8(void)

{
  func_0x000108c408f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c408ec; end: 108c40903;  */

void FUN_108c408ec(long param_1)

{
  func_0x000108c40944(param_1 + 0xb0);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x38);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_108c41168();
  }
  return;
}



/* Entry: 108c40904; end: 108c40967;  */

void FUN_108c40904(long param_1)

{
  func_0x000108c40944(param_1 + 0x98);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x90);
  __ZNSt3__15mutexD1Ev(param_1 + 0x50);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x20);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_108c41168();
  }
  return;
}



/* Entry: 108c40968; end: 108c40987;  */

void FUN_108c40968(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_108c41168();
  }
  return;
}



/* Entry: 108c40988; end: 108c40997;  */

void FUN_108c40988(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


