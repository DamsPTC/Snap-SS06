/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109fd48fc; end: 109fd4947;  */

void FUN_109fd48fc(long param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x8f8);
  FUN_109fd534c(param_1 + 0x938,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x8f8);
  return;
}



/* Entry: 109fd4948; end: 109fd49a3;  */

void FUN_109fd4948(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  for (lVar3 = *(long *)(param_1 + 8); lVar3 != lVar1; lVar3 = lVar3 + 0x828) {
    *(undefined8 *)(lVar3 + 0x818) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar2 = *(undefined8 *)(*(long *)(*param_2 + 0x28) + 0x28);
  func_0x00010bf41b20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 109fd49a4; end: 109fd49cb;  */

void FUN_109fd49a4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  for (lVar2 = *(long *)(param_1 + 8); lVar2 != lVar1; lVar2 = lVar2 + 0x828) {
    *(undefined8 *)(lVar2 + 0x818) = 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 109fd49cc; end: 109fd4a37;  */

undefined8 * FUN_109fd49cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c12f840();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined8 *)(param_1 + 0x38);
  uVar2 = *puVar3;
  *puVar3 = uVar1;
  _objc_release(uVar2);
  _objc_release(param_2);
  return puVar3;
}



/* Entry: 109fd4a38; end: 109fd4ac3;  */

void FUN_109fd4a38(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar5 = *(undefined8 **)(param_1 + 8);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 != puVar1) {
    do {
      if (puVar5[0x103] != 0) {
        func_0x00010c290840(uVar4,param_2,puVar5[0x102],puVar5[0x103],*puVar5,puVar5[1]);
      }
      puVar5 = puVar5 + 0x105;
    } while (puVar5 != puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
  }
  func_0x00010bf94840(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar4);
  lVar2 = *(long *)(param_1 + 0x10);
  for (lVar3 = *(long *)(param_1 + 8); lVar3 != lVar2; lVar3 = lVar3 + 0x828) {
    *(undefined8 *)(lVar3 + 0x818) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 109fd4ac4; end: 109fd4b67;  */

long * FUN_109fd4ac4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf1ccc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    _objc_release(uVar3);
  }
  plVar5 = (long *)(param_1 + 0x30);
  if (*plVar5 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010bf1cca0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *plVar5;
    *plVar5 = lVar2;
    _objc_release(lVar4);
  }
  _objc_release(param_2);
  return plVar5;
}



/* Entry: 109fd4b68; end: 109fd4bb3;  */

void FUN_109fd4b68(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf94840(*(undefined8 *)(param_1 + 0x30));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar2);
  lVar1 = *(long *)(param_1 + 0x10);
  for (lVar3 = *(long *)(param_1 + 8); lVar3 != lVar1; lVar3 = lVar3 + 0x828) {
    *(undefined8 *)(lVar3 + 0x818) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 109fd4bb4; end: 109fd4c57;  */

long * FUN_109fd4bb4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf45860();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    _objc_release(uVar3);
  }
  plVar5 = (long *)(param_1 + 0x40);
  if (*plVar5 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010bf45840();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *plVar5;
    *plVar5 = lVar2;
    _objc_release(lVar4);
  }
  _objc_release(param_2);
  return plVar5;
}



/* Entry: 109fd4c58; end: 109fd4ce3;  */

void FUN_109fd4c58(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  puVar5 = *(undefined8 **)(param_1 + 8);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 != puVar1) {
    do {
      if (puVar5[0x103] != 0) {
        func_0x00010c290820(uVar4,param_2,puVar5[0x102],puVar5[0x103],*puVar5);
      }
      puVar5 = puVar5 + 0x105;
    } while (puVar5 != puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
  }
  func_0x00010bf94840(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar4);
  lVar2 = *(long *)(param_1 + 0x10);
  for (lVar3 = *(long *)(param_1 + 8); lVar3 != lVar2; lVar3 = lVar3 + 0x828) {
    *(undefined8 *)(lVar3 + 0x818) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 109fd4ce4; end: 109fd4d33;  */

undefined8 * FUN_109fd4ce4(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_109fd4d34(param_1,2);
  return param_1;
}



/* Entry: 109fd4d34; end: 109fd4e17;  */

void FUN_109fd4d34(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puStack_100;
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  undefined1 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar4 = *param_1;
  if ((undefined8 *)((param_1[2] - lVar4 >> 3) * 0x77a9af922545a3cd) < param_2) {
    if ((undefined8 *)0x1f6310aca0dbb5 < param_2) {
      FUN_109fd4e18();
      func_0x000109fd5150(&plStack_58);
      __Unwind_Resume(param_1);
      puVar3 = &DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if ((undefined8 *)0x1f6310aca0dbb5 < param_2) {
        func_0x000104c4f740();
        ppuStack_f8 = &puStack_e0;
        ppuStack_f0 = &puStack_d8;
        puVar6 = param_2;
        puStack_100 = puVar3;
        puStack_e0 = param_4;
        if (param_2 == param_3) {
          uStack_e8 = 1;
          puStack_d8 = param_4;
        }
        else {
          do {
            uVar7 = *puVar6;
            param_4[1] = puVar6[1];
            *param_4 = uVar7;
            puVar1 = param_4 + 2;
            puStack_d8 = param_4;
            _bzero(puVar1,0x800);
            param_4[0x102] = puVar1;
            param_4[0x103] = 0;
            param_4[0x104] = 0x100;
            FUN_109fd4f60(puVar1,puVar6 + 2);
            param_4 = puStack_d8 + 0x105;
            puVar6 = puVar6 + 0x105;
          } while (puVar6 != param_3);
          uStack_e8 = 1;
          puStack_d8 = param_4;
          do {
            param_2[0x103] = 0;
            if (param_2 + 2 != (undefined8 *)param_2[0x102]) {
              __ZdlPvSt11align_val_t((undefined8 *)param_2[0x102],8);
            }
            param_2 = param_2 + 0x105;
          } while (param_2 != param_3);
        }
        FUN_109fd50cc(&puStack_100);
        return;
      }
      __Znwm((long)param_2 * 0x828);
      return;
    }
    lVar5 = param_1[1];
    plVar2 = param_1;
    plStack_38 = param_1;
    FUN_109fd4e2c();
    lVar4 = (long)plVar2 + (lVar5 - lVar4);
    lVar5 = lVar4 + (*param_1 - param_1[1]);
    plStack_58 = plVar2;
    plStack_50 = (long *)lVar4;
    plStack_48 = (long *)lVar4;
    plStack_40 = plVar2 + (long)param_2 * 0x105;
    FUN_109fd4e74(param_1,*param_1,param_1[1],lVar5);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar5;
    param_1[1] = lVar4;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + (long)param_2 * 0x105);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x000109fd5150(&plStack_58);
  }
  return;
}



/* Entry: 109fd4e18; end: 109fd4e2b;  */

void FUN_109fd4e18(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined1 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x1f6310aca0dbb5 < param_2) {
    func_0x000104c4f740();
    ppuStack_98 = &puStack_80;
    ppuStack_90 = &puStack_78;
    puVar3 = param_2;
    puStack_a0 = puVar2;
    puStack_80 = param_4;
    if (param_2 == param_3) {
      uStack_88 = 1;
      puStack_78 = param_4;
    }
    else {
      do {
        uVar4 = *puVar3;
        param_4[1] = puVar3[1];
        *param_4 = uVar4;
        puVar1 = param_4 + 2;
        puStack_78 = param_4;
        _bzero(puVar1,0x800);
        param_4[0x102] = puVar1;
        param_4[0x103] = 0;
        param_4[0x104] = 0x100;
        FUN_109fd4f60(puVar1,puVar3 + 2);
        param_4 = puStack_78 + 0x105;
        puVar3 = puVar3 + 0x105;
      } while (puVar3 != param_3);
      uStack_88 = 1;
      puStack_78 = param_4;
      do {
        param_2[0x103] = 0;
        if (param_2 + 2 != (undefined8 *)param_2[0x102]) {
          __ZdlPvSt11align_val_t((undefined8 *)param_2[0x102],8);
        }
        param_2 = param_2 + 0x105;
      } while (param_2 != param_3);
    }
    FUN_109fd50cc(&puStack_a0);
    return;
  }
  __Znwm((long)param_2 * 0x828);
  return;
}



/* Entry: 109fd4e2c; end: 109fd4e73;  */

void FUN_109fd4e2c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  if ((undefined8 *)0x1f6310aca0dbb5 < param_2) {
    func_0x000104c4f740();
    ppuStack_88 = &puStack_70;
    ppuStack_80 = &puStack_68;
    puVar2 = param_2;
    uStack_90 = param_1;
    puStack_70 = param_4;
    if (param_2 == param_3) {
      uStack_78 = 1;
      puStack_68 = param_4;
    }
    else {
      do {
        uVar3 = *puVar2;
        param_4[1] = puVar2[1];
        *param_4 = uVar3;
        puVar1 = param_4 + 2;
        puStack_68 = param_4;
        _bzero(puVar1,0x800);
        param_4[0x102] = puVar1;
        param_4[0x103] = 0;
        param_4[0x104] = 0x100;
        FUN_109fd4f60(puVar1,puVar2 + 2);
        param_4 = puStack_68 + 0x105;
        puVar2 = puVar2 + 0x105;
      } while (puVar2 != param_3);
      uStack_78 = 1;
      puStack_68 = param_4;
      do {
        param_2[0x103] = 0;
        if (param_2 + 2 != (undefined8 *)param_2[0x102]) {
          __ZdlPvSt11align_val_t((undefined8 *)param_2[0x102],8);
        }
        param_2 = param_2 + 0x105;
      } while (param_2 != param_3);
    }
    FUN_109fd50cc(&uStack_90);
    return;
  }
  __Znwm((long)param_2 * 0x828);
  return;
}



/* Entry: 109fd4e74; end: 109fd4f5f;  */

void FUN_109fd4e74(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  ppuStack_68 = &puStack_50;
  ppuStack_60 = &puStack_48;
  puVar2 = param_2;
  uStack_70 = param_1;
  puStack_50 = param_4;
  if (param_2 == param_3) {
    uStack_58 = 1;
    puStack_48 = param_4;
  }
  else {
    do {
      uVar3 = *puVar2;
      param_4[1] = puVar2[1];
      *param_4 = uVar3;
      puVar1 = param_4 + 2;
      puStack_48 = param_4;
      _bzero(puVar1,0x800);
      param_4[0x102] = puVar1;
      param_4[0x103] = 0;
      param_4[0x104] = 0x100;
      FUN_109fd4f60(puVar1,puVar2 + 2);
      param_4 = puStack_48 + 0x105;
      puVar2 = puVar2 + 0x105;
    } while (puVar2 != param_3);
    uStack_58 = 1;
    puStack_48 = param_4;
    do {
      param_2[0x103] = 0;
      if (param_2 + 2 != (undefined8 *)param_2[0x102]) {
        __ZdlPvSt11align_val_t((undefined8 *)param_2[0x102],8);
      }
      param_2 = param_2 + 0x105;
    } while (param_2 != param_3);
  }
  FUN_109fd50cc(&uStack_70);
  return;
}



/* Entry: 109fd4f60; end: 109fd500f;  */

void FUN_109fd4f60(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_2 + 0x800) == param_2) {
    uVar1 = *(ulong *)(param_2 + 0x808);
    if (*(ulong *)(param_1 + 0x810) < uVar1) {
      FUN_109fd5010(param_1);
      uVar1 = *(ulong *)(param_2 + 0x808);
    }
    if (uVar1 != 0) {
      uVar1 = 0;
      lVar2 = *(long *)(param_1 + 0x808);
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x800) + lVar2 * 8) =
             *(undefined8 *)(*(long *)(param_2 + 0x800) + uVar1 * 8);
        lVar2 = *(long *)(param_1 + 0x808) + 1;
        *(long *)(param_1 + 0x808) = lVar2;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(ulong *)(param_2 + 0x808));
    }
    *(undefined8 *)(param_2 + 0x808) = 0;
  }
  else {
    *(long *)(param_1 + 0x800) = *(long *)(param_2 + 0x800);
    uVar3 = *(undefined8 *)(param_2 + 0x808);
    *(undefined8 *)(param_1 + 0x810) = *(undefined8 *)(param_2 + 0x810);
    *(undefined8 *)(param_1 + 0x808) = uVar3;
    *(long *)(param_2 + 0x800) = param_2;
    *(undefined8 *)(param_2 + 0x808) = 0;
    *(undefined8 *)(param_2 + 0x810) = 0x100;
  }
  return;
}



/* Entry: 109fd5010; end: 109fd508f;  */

void FUN_109fd5010(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 < 0x101) {
    param_2 = 0x100;
  }
  uVar1 = param_2;
  FUN_109fd5090();
  if (*(long *)(param_1 + 0x808) != 0) {
    uVar2 = 0;
    do {
      *(undefined8 *)(uVar1 + uVar2 * 8) = *(undefined8 *)(*(long *)(param_1 + 0x800) + uVar2 * 8);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0x808));
  }
  if (*(long *)(param_1 + 0x800) != param_1) {
    __ZdlPvSt11align_val_t(*(long *)(param_1 + 0x800),8);
  }
  *(ulong *)(param_1 + 0x800) = uVar1;
  *(ulong *)(param_1 + 0x810) = param_2;
  return;
}



/* Entry: 109fd5090; end: 109fd50cb;  */

long FUN_109fd5090(ulong param_1)

{
  long lVar1;
  
  if (param_1 >> 0x3d == 0) {
    lVar1 = param_1 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZnwmSt11align_val_t_110352290)(lVar1,8);
    return lVar1;
  }
  lVar1 = 8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
  if ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
    FUN_109fd5100(lVar1);
  }
  return lVar1;
}



/* Entry: 109fd50cc; end: 109fd50ff;  */

long FUN_109fd50cc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_109fd5100(param_1);
  }
  return param_1;
}



/* Entry: 109fd5100; end: 109fd5227;  */

void FUN_109fd5100(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x828) {
    *(undefined8 *)(lVar1 + -0x10) = 0;
    if (lVar1 + -0x818 != *(long *)(lVar1 + -0x18)) {
      __ZdlPvSt11align_val_t(*(long *)(lVar1 + -0x18),8);
    }
  }
  return;
}



/* Entry: 109fd5228; end: 109fd5287;  */

void FUN_109fd5228(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x828) {
    *(undefined8 *)(lVar1 + -0x10) = 0;
    if (lVar1 + -0x818 != *(long *)(lVar1 + -0x18)) {
      __ZdlPvSt11align_val_t(*(long *)(lVar1 + -0x18),8);
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 109fd5288; end: 109fd534b;  */

void FUN_109fd5288(long param_1)

{
  long lStack_28;
  
  lStack_28 = *(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 7) * 8) +
              (*(ulong *)(param_1 + 0x20) & 0x7f) * 0x20;
  func_0x000109fd51e8(&lStack_28);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  func_0x000109fd52f0(param_1,1);
  return;
}



/* Entry: 109fd534c; end: 109fd569f;  */

void FUN_109fd534c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  puVar16 = (undefined8 *)param_1[1];
  puVar11 = (undefined8 *)param_1[2];
  uVar3 = (long)puVar11 - (long)puVar16;
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = ((long)puVar11 - (long)puVar16) * 0x10 - 1;
  }
  uVar2 = param_1[4];
  uVar10 = param_1[5] + uVar2;
  if (uVar1 != uVar10) goto LAB_109fd5618;
  if (uVar2 < 0x80) {
    puVar12 = (undefined8 *)param_1[3];
    puVar14 = (undefined8 *)*param_1;
    if (uVar3 < (ulong)((long)puVar12 - (long)puVar14)) {
      uVar6 = 0x1000;
      puVar8 = param_2;
      __Znwm();
      if (puVar12 == puVar11) {
        if (puVar16 == puVar14) {
          lVar9 = (long)puVar12 - (long)puVar16 >> 2;
          if (puVar11 == puVar16) {
            lVar9 = 1;
          }
          lVar13 = lVar9 * 2;
          FUN_109fd579c();
          puVar16 = (undefined8 *)(lVar9 + (lVar13 + 6U & 0xfffffffffffffff8));
          lVar13 = param_1[2] - param_1[1];
          puVar11 = puVar16;
          if (lVar13 != 0) {
            puVar11 = (undefined8 *)((long)puVar16 + lVar13);
            puVar12 = (undefined8 *)param_1[1];
            puVar14 = puVar16;
            do {
              *puVar14 = *puVar12;
              lVar13 = lVar13 + -8;
              puVar12 = puVar12 + 1;
              puVar14 = puVar14 + 1;
            } while (lVar13 != 0);
          }
          lVar13 = *param_1;
          *param_1 = lVar9;
          param_1[1] = (long)puVar16;
          param_1[2] = (long)puVar11;
          param_1[3] = lVar9 + (long)puVar8 * 8;
          if (lVar13 != 0) {
            __ZdlPv(lVar13);
            puVar16 = (undefined8 *)param_1[1];
          }
        }
        puVar16[-1] = uVar6;
        lVar9 = param_1[1];
        param_1[1] = lVar9 + -8;
        uVar6 = *(undefined8 *)(lVar9 + -8);
        param_1[1] = lVar9;
        goto LAB_109fd53ac;
      }
      *puVar11 = uVar6;
      param_1[2] = param_1[2] + 8;
    }
    else {
      puVar8 = (undefined8 *)((long)puVar12 - (long)puVar14 >> 2);
      if (puVar12 == puVar14) {
        puVar8 = (undefined8 *)0x1;
      }
      puVar15 = param_2;
      FUN_109fd579c();
      uVar6 = 0x1000;
      puVar7 = puVar15;
      __Znwm();
      puVar12 = (undefined8 *)((long)puVar8 + uVar3);
      puVar14 = puVar8 + (long)puVar15;
      puVar5 = puVar8;
      if (uVar3 == (long)puVar15 * 8) {
        if ((long)uVar3 < 1) {
          puVar12 = (undefined8 *)((long)puVar12 - (long)puVar8 >> 2);
          if (puVar11 == puVar16) {
            puVar12 = (undefined8 *)0x1;
          }
          puVar5 = puVar12;
          FUN_109fd579c();
          puVar12 = puVar5 + ((ulong)puVar12 >> 2);
          puVar14 = puVar5 + (long)puVar7;
          if (puVar8 != (undefined8 *)0x0) {
            __ZdlPv(puVar8);
          }
        }
        else {
          lVar9 = ((long)puVar12 - (long)puVar8 >> 3) + 1;
          puVar12 = puVar12 + -((ulong)(lVar9 - (lVar9 >> 0x3f)) >> 1);
        }
      }
      puVar16 = puVar12 + 1;
      *puVar12 = uVar6;
      puVar11 = (undefined8 *)param_1[2];
      puVar8 = puVar5;
      if (puVar11 != (undefined8 *)param_1[1]) {
        do {
          puVar5 = puVar8;
          puVar15 = puVar12;
          if (puVar12 == puVar8) {
            if (puVar16 < puVar14) {
              lVar9 = ((long)puVar14 - (long)puVar16 >> 3) + 1;
              lVar13 = (long)puVar16 - (long)puVar8;
              lVar4 = (long)puVar16 - (long)puVar8;
              puVar16 = puVar16 + ((ulong)(lVar9 - (lVar9 >> 0x3f)) >> 1);
              puVar15 = (undefined8 *)((long)puVar16 - lVar13);
              if (lVar4 != 0) {
                _memmove(puVar15,puVar12,lVar4);
                puVar7 = puVar12;
              }
            }
            else {
              puVar15 = (undefined8 *)((long)puVar14 - (long)puVar8 >> 2);
              if ((long)puVar14 - (long)puVar8 == 0) {
                puVar15 = (undefined8 *)0x1;
              }
              puVar5 = puVar15;
              FUN_109fd579c();
              puVar15 = (undefined8 *)((long)puVar5 + ((long)puVar15 * 2 + 6U & 0xfffffffffffffff8))
              ;
              lVar9 = (long)puVar16 - (long)puVar8;
              puVar16 = puVar15;
              if (lVar9 != 0) {
                puVar16 = (undefined8 *)((long)puVar15 + lVar9);
                puVar14 = puVar15;
                do {
                  *puVar14 = *puVar12;
                  lVar9 = lVar9 + -8;
                  puVar14 = puVar14 + 1;
                  puVar12 = puVar12 + 1;
                } while (lVar9 != 0);
              }
              puVar14 = puVar5 + (long)puVar7;
              if (puVar8 != (undefined8 *)0x0) {
                __ZdlPv(puVar8);
              }
            }
          }
          puVar11 = puVar11 + -1;
          puVar12 = puVar15 + -1;
          *puVar12 = *puVar11;
          puVar8 = puVar5;
        } while (puVar11 != (undefined8 *)param_1[1]);
      }
      lVar9 = *param_1;
      *param_1 = (long)puVar5;
      param_1[1] = (long)puVar12;
      param_1[2] = (long)puVar16;
      param_1[3] = (long)puVar14;
      if (lVar9 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    param_1[4] = uVar2 - 0x80;
    uVar6 = *puVar16;
    param_1[1] = (long)(puVar16 + 1);
LAB_109fd53ac:
    FUN_109fd56a0(param_1,uVar6);
  }
  puVar16 = (undefined8 *)param_1[1];
  uVar10 = param_1[5] + param_1[4];
LAB_109fd5618:
  puVar16 = (undefined8 *)(puVar16[uVar10 >> 7] + (uVar10 & 0x7f) * 0x20);
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  uVar6 = *param_2;
  puVar16[1] = param_2[1];
  *puVar16 = uVar6;
  uVar6 = param_2[3];
  puVar16[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  puVar16[3] = uVar6;
  param_1[5] = param_1[5] + 1;
  return;
}



/* Entry: 109fd56a0; end: 109fd579b;  */

void FUN_109fd56a0(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_109fd579c();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 109fd579c; end: 109fd57cf;  */

undefined1  [16] FUN_109fd579c(undefined8 *param_1,ulong param_2,uint *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar11._8_8_ = param_1;
    auVar11._0_8_ = lVar1;
    return auVar11;
  }
  func_0x000104c4f740();
  lVar2 = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0x10;
  *param_1 = &PTR_FUN_110b97ae0;
  param_1[1] = 0;
  uVar7 = *(undefined8 *)(param_3 + 2);
  uVar5 = *(undefined8 *)param_3;
  uVar9 = *(undefined8 *)(param_3 + 6);
  uVar8 = *(undefined8 *)(param_3 + 4);
  uVar10 = *(undefined8 *)(param_3 + 7);
  param_1[9] = *(undefined8 *)(param_3 + 9);
  param_1[8] = uVar10;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar9;
  *(undefined8 *)((long)param_1 + 0x34) = uVar8;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar7;
  *(undefined8 *)((long)param_1 + 0x24) = uVar5;
  *param_1 = &PTR_FUN_110b98b78;
  lVar1 = 4;
  do {
    lVar2 = lVar2 + (ulong)*(uint *)((long)param_3 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x28);
  uVar4 = (ulong)*param_3 * 0x100;
  uVar3 = lVar2 * 8 + 0xffU & 0xffffffffffffff00;
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    uVar4 = uVar3;
  }
  if (uVar4 >> 0x20 == 0) {
    *(int *)(param_1 + 10) = (int)uVar4;
    if (uVar4 == 0) {
      uVar6 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x8d8);
      func_0x00010c0d85c0();
      uVar6 = *(uint *)(param_1 + 10);
    }
  }
  else {
    lVar1 = param_2 + 0x810;
    param_2 = 6;
    FUN_109fd19d0(lVar1,6,0x100000,&UNK_10f62f934,0x55);
    uVar6 = 0;
    uVar5 = 0;
    *(undefined4 *)(param_1 + 10) = 0;
  }
  param_1[0xb] = uVar5;
  uVar3 = (ulong)(uVar6 >> 8);
  *(uint *)(param_1 + 0xc) = uVar6 >> 8;
  param_1[0xd] = 0;
  uVar4 = uVar3;
  __Znam();
  if (0xff < uVar6) {
    _bzero(uVar4,uVar3);
    param_2 = uVar3;
  }
  param_1[0xd] = uVar4;
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  return auVar12;
}



/* Entry: 109fd57d0; end: 109fd592b;  */

undefined8 * FUN_109fd57d0(undefined8 *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar2 = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0x10;
  *param_1 = &PTR_FUN_110b97ae0;
  param_1[1] = 0;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar6 = *(undefined8 *)param_3;
  uVar10 = *(undefined8 *)(param_3 + 6);
  uVar9 = *(undefined8 *)(param_3 + 4);
  uVar11 = *(undefined8 *)(param_3 + 7);
  param_1[9] = *(undefined8 *)(param_3 + 9);
  param_1[8] = uVar11;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar10;
  *(undefined8 *)((long)param_1 + 0x34) = uVar9;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar8;
  *(undefined8 *)((long)param_1 + 0x24) = uVar6;
  *param_1 = &PTR_FUN_110b98b78;
  lVar5 = 4;
  do {
    lVar2 = lVar2 + (ulong)*(uint *)((long)param_3 + lVar5);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x28);
  uVar4 = (ulong)*param_3 * 0x100;
  uVar3 = lVar2 * 8 + 0xffU & 0xffffffffffffff00;
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    uVar4 = uVar3;
  }
  if (uVar4 >> 0x20 == 0) {
    *(int *)(param_1 + 10) = (int)uVar4;
    if (uVar4 == 0) {
      uVar7 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x8d8);
      func_0x00010c0d85c0();
      uVar7 = *(uint *)(param_1 + 10);
    }
  }
  else {
    FUN_109fd19d0(param_2 + 0x810,6,0x100000,&UNK_10f62f934,0x55);
    uVar7 = 0;
    uVar6 = 0;
    *(undefined4 *)(param_1 + 10) = 0;
  }
  param_1[0xb] = uVar6;
  uVar1 = uVar7 >> 8;
  *(uint *)(param_1 + 0xc) = uVar1;
  param_1[0xd] = 0;
  uVar4 = (ulong)uVar1;
  __Znam();
  if (0xff < uVar7) {
    _bzero(uVar4,(ulong)uVar1);
  }
  param_1[0xd] = uVar4;
  return param_1;
}



/* Entry: 109fd592c; end: 109fd5b57;  */

void FUN_109fd592c(undefined8 *param_1,long param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  
  param_4 = param_4 >> 8;
  if (param_4 < 2) {
    param_4 = 1;
  }
  uVar1 = param_3 + 0xff;
  uVar2 = uVar1 >> 8;
  uVar7 = (ulong)uVar2;
  if (uVar2 <= *(uint *)(param_2 + 0x60)) {
    if (uVar1 < 0x100) {
      iVar13 = 0;
      goto LAB_109fd59fc;
    }
    uVar14 = 0;
    do {
      iVar13 = (int)uVar14;
      uVar8 = uVar7;
      uVar9 = uVar14;
      while ((*(byte *)(*(long *)(param_2 + 0x68) + uVar9) & 1) == 0) {
        uVar9 = (ulong)((int)uVar9 + 1);
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) goto LAB_109fd59dc;
      }
      uVar14 = (ulong)(iVar13 + param_4);
    } while (iVar13 + param_4 + uVar2 <= *(uint *)(param_2 + 0x60));
  }
  goto LAB_109fd596c;
LAB_109fd59dc:
  do {
    *(undefined1 *)(*(long *)(param_2 + 0x68) + uVar14) = 1;
    uVar14 = (ulong)((int)uVar14 + 1);
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  if (iVar13 != -1) {
LAB_109fd59fc:
    lVar10 = *(long *)(param_2 + 0x58);
    _objc_retain(lVar10);
    plVar5 = (long *)0x28;
    __Znwm();
    *plVar5 = (long)&PTR_DAT_110b98bd0;
    plVar12 = plVar5 + 3;
    *plVar12 = lVar10;
    plVar11 = plVar5 + 1;
    *plVar11 = 0;
    plVar5[2] = 0;
    plVar5[4] = CONCAT44(uVar1,iVar13 << 8) & 0xffffff00ffffffff;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar6 = (undefined8 *)0x20;
    __Znwm();
    *puVar6 = &PTR_DAT_110b98c20;
    puVar6[1] = param_2;
    puVar6[2] = plVar12;
    puVar6[3] = plVar5;
    *param_1 = plVar12;
    param_1[4] = puVar6;
    do {
      lVar10 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    if (plVar5 == (long *)0x0) {
      return;
    }
    plVar11 = plVar5 + 1;
    do {
      lVar10 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 != 0) {
      return;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    return;
  }
LAB_109fd596c:
  *param_1 = 0;
  param_1[4] = 0;
  return;
}



/* Entry: 109fd5b58; end: 109fd5b5b;  */

long FUN_109fd5b58(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  _objc_release(*(undefined8 *)(param_1 + 0x58));
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fd5b5c; end: 109fd5b6f;  */

void FUN_109fd5b5c(void)

{
  FUN_109fd5db8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fd5b70; end: 109fd5b8f;  */

undefined4 FUN_109fd5b70(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



/* Entry: 109fd5b90; end: 109fd5baf;  */

void FUN_109fd5b90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b98bd0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fd5bb0; end: 109fd5bbb;  */

void FUN_109fd5bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 109fd5bbc; end: 109fd5ccb;  */

long FUN_109fd5bbc(long param_1)

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



/* Entry: 109fd5ccc; end: 109fd5d0b;  */

void FUN_109fd5ccc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_110b98c20;
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
  lVar4 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar4;
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



/* Entry: 109fd5d0c; end: 109fd5d33;  */

void FUN_109fd5d0c(long param_1)

{
  FUN_109fd5bbc(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109fd5d34; end: 109fd5d6f;  */

void FUN_109fd5d34(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(*param_2 + 0xc);
  if (0xff < uVar1) {
    uVar2 = (ulong)(uVar1 >> 8);
    uVar3 = (ulong)(*(uint *)(*param_2 + 8) >> 8);
    lVar4 = *(long *)(param_1 + 8);
    do {
      *(undefined1 *)(*(long *)(lVar4 + 0x68) + uVar3) = 0;
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 109fd5d70; end: 109fd5dab;  */

long FUN_109fd5d70(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b98c90);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109fd5dac; end: 109fd5db7;  */

undefined ** FUN_109fd5dac(void)

{
  return &PTR_DAT_110b98c90;
}



/* Entry: 109fd5db8; end: 109fd5dfb;  */

long FUN_109fd5db8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  _objc_release(*(undefined8 *)(param_1 + 0x58));
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fd5dfc; end: 109fd644f;  */

undefined8 * FUN_109fd5dfc(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uStack_90;
  long alStack_88 [3];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  FUN_109fc901c();
  *puVar8 = &PTR_DAT_110b98d60;
  puVar8[8] = *param_3;
  puVar8[0x49] = puVar8 + 9;
  puVar8[0x4b] = 0x40;
  puVar8[0x4a] = 0;
  puVar8[0x54] = puVar8 + 0x4c;
  puVar8[0x55] = 0;
  puVar8[0x56] = 8;
  puVar8[0x57] = param_2;
  *(undefined4 *)(puVar8 + 0x5b) = 0;
  puVar8[0x59] = 0;
  puVar8[0x5a] = 0;
  puVar8[0x58] = 0;
  puVar8[0x5c] = param_2 + 0x810;
  FUN_109fccc60(puVar8 + 0x57,*param_3);
  uVar14 = (ulong)*(uint *)(param_3 + 2);
  if (*(char *)(param_1[8] + 0x209) == '\0') {
    uVar14 = 0;
  }
  uVar14 = uVar14 + *(long *)(param_1[8] + 0x200);
  if (*(uint *)(param_2 + 0x114) < uVar14) {
    func_0x000109243bf8(&UNK_10f55ede0);
    goto LAB_109fd6380;
  }
  uVar12 = param_1[0x4a];
  if (uVar12 < uVar14) {
    if ((ulong)param_1[0x4b] < uVar14) {
      uVar15 = uVar14;
      if (uVar14 < 0x41) {
        uVar15 = 0x40;
      }
      puVar9 = (undefined8 *)(uVar15 << 3);
      __ZnwmSt11align_val_t(puVar9,8);
      puVar10 = (undefined8 *)param_1[0x49];
      uVar12 = param_1[0x4a];
      puVar2 = puVar10;
      puVar3 = puVar9;
      for (uVar18 = uVar12; uVar18 != 0; uVar18 = uVar18 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      if (puVar10 != puVar8 + 9) {
        __ZdlPvSt11align_val_t(puVar10,8);
        uVar12 = param_1[0x4a];
      }
      param_1[0x49] = puVar9;
      param_1[0x4b] = uVar15;
    }
    if (uVar12 <= uVar14 && uVar14 - uVar12 != 0) {
      _bzero(param_1[0x49] + uVar12 * 8,(uVar14 - uVar12) * 8);
      goto LAB_109fd5f58;
    }
  }
  else {
LAB_109fd5f58:
    param_1[0x4a] = uVar14;
  }
  *param_1 = &PTR_DAT_110b98cb0;
  param_1[0x66] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  lVar19 = param_3[1];
  if (lVar19 == 0) {
    func_0x000109243bf8(&UNK_10f62f98a);
    goto LAB_109fd6380;
  }
  lVar20 = *(long *)(param_2 + 0x8d8);
  _objc_retain(lVar20);
  if (lVar20 == 0) {
LAB_109fd5fc8:
    bVar6 = false;
  }
  else {
    iVar7 = 2;
    func_0x000107c31924(2,0x10,0,0);
    if (iVar7 == 0) goto LAB_109fd5fc8;
    lVar21 = lVar20;
    func_0x00010bf09e00();
    bVar6 = lVar21 == 1;
  }
  _objc_release(lVar20);
  lVar24 = param_1[8];
  uVar12 = param_1[0x4a];
  lVar20 = param_1[0x5e];
  lVar21 = param_1[0x5d];
  lVar22 = lVar20 - lVar21;
  bVar5 = uVar12 < (ulong)((lVar22 >> 3) * -0x5555555555555555);
  uVar14 = uVar12 + (lVar22 >> 3) * 0x5555555555555555;
  if (bVar5 || uVar14 == 0) {
    if (bVar5) {
      lVar20 = lVar21 + uVar12 * 0x18;
      goto LAB_109fd612c;
    }
LAB_109fd6130:
    uVar14 = *(ulong *)(lVar24 + 0x80);
    if (uVar14 != 0) {
      uVar12 = 0;
      do {
        uVar1 = *(int *)(*(long *)(lVar24 + 0x78) + uVar12 * 0x14 + 4) - 3;
        if (uVar1 < 5) {
          uVar16 = *(undefined8 *)(&UNK_10e481048 + (ulong)uVar1 * 8);
        }
        else {
          uVar16 = 1;
        }
        uVar15 = uVar12 + 1;
        if (uVar15 < uVar14) {
          uVar18 = (ulong)*(uint *)(*(long *)(param_1[8] + 0x1e8) + uVar15 * 4);
        }
        else {
          uVar18 = param_1[0x4a];
        }
        uVar17 = (ulong)*(uint *)(*(long *)(param_1[8] + 0x1e8) + uVar12 * 4);
        lVar20 = uVar18 - uVar17;
        if (uVar17 <= uVar18 && lVar20 != 0) {
          uVar1 = *(uint *)(*(long *)(lVar24 + 0x78) + uVar12 * 0x14 + 8);
          lVar21 = uVar17 * 0x18;
          do {
            puVar8 = (undefined8 *)(param_1[0x5d] + lVar21);
            *puVar8 = uVar16;
            puVar8[1] = (ulong)uVar1 & 3;
            puVar8[2] = 0;
            lVar21 = lVar21 + 0x18;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          uVar14 = *(ulong *)(lVar24 + 0x80);
        }
        uVar12 = uVar15;
      } while (uVar15 < uVar14);
    }
    if (bVar6) {
      if (((ulong)param_1[0x4a] >> 0x1d & 0xffffffff) == 0) {
        lVar20 = param_1[0x4a] << 3;
        uVar16 = 8;
        goto LAB_109fd6234;
      }
    }
    else {
      FUN_109fe9948(param_2,param_1[8] + 0x28);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = param_1[0x60];
      param_1[0x60] = param_2;
      _objc_release(uVar16);
      lVar20 = param_1[0x60];
      func_0x00010bf93580(lVar20);
      uVar16 = param_1[0x60];
      func_0x00010beffa20(uVar16);
LAB_109fd6234:
      FUN_109fd592c(&uStack_90,lVar19,lVar20,uVar16);
      uVar16 = uStack_90;
      uStack_90 = 0;
      FUN_109fd8058(param_1 + 0x62,uVar16);
      plVar13 = param_1 + 99;
      plVar11 = (long *)param_1[0x66];
      param_1[0x66] = 0;
      if (plVar11 == plVar13) {
        lVar19 = 0x20;
LAB_109fd627c:
        (**(code **)(*plVar11 + lVar19))();
      }
      else if (plVar11 != (long *)0x0) {
        lVar19 = 0x28;
        goto LAB_109fd627c;
      }
      if (plStack_70 == (long *)0x0) {
        param_1[0x66] = 0;
      }
      else if (plStack_70 == alStack_88) {
        param_1[0x66] = plVar13;
        (**(code **)(*plStack_70 + 0x18))(plStack_70,plVar13);
      }
      else {
        param_1[0x66] = plStack_70;
        plStack_70 = (long *)0x0;
      }
      func_0x000109fd8004(&uStack_90);
      plVar13 = (long *)param_1[0x62];
      if (plVar13 != (long *)0x0) {
        if (bVar6) {
          lVar19 = *plVar13;
          func_0x00010bf4df40();
          lVar19 = lVar19 + (ulong)*(uint *)(param_1[0x62] + 8);
          param_1[0x61] = lVar19;
          _bzero(lVar19,param_1[0x4a] << 3);
        }
        else {
          func_0x00010c16a2e0(param_1[0x60]);
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  else {
    if (uVar14 <= (ulong)((param_1[0x5f] - lVar20 >> 3) * -0x5555555555555555)) {
      lVar21 = ((uVar14 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar20,lVar21);
      lVar20 = lVar20 + lVar21;
LAB_109fd612c:
      param_1[0x5e] = lVar20;
      goto LAB_109fd6130;
    }
    if (uVar12 < 0xaaaaaaaaaaaaaab) {
      lVar20 = param_1[0x5f] - lVar21 >> 3;
      uVar15 = lVar20 * 0x5555555555555556;
      if (uVar15 < uVar12 || uVar15 - uVar12 == 0) {
        uVar15 = uVar12;
      }
      if (0x555555555555554 < (ulong)(lVar20 * -0x5555555555555555)) {
        uVar15 = 0xaaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaaa < uVar15) {
        func_0x000104c4f740();
        goto LAB_109fd6380;
      }
      lVar20 = uVar15 * 0x18;
      __Znwm();
      lVar23 = ((uVar14 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar20 + lVar22,lVar23);
      _memcpy(lVar20,lVar21,lVar22);
      param_1[0x5d] = lVar20;
      param_1[0x5e] = lVar20 + lVar22 + lVar23;
      param_1[0x5f] = lVar20 + uVar15 * 0x18;
      if (lVar21 != 0) {
        __ZdlPv(lVar21);
      }
      goto LAB_109fd6130;
    }
  }
  func_0x000109fd75a4();
LAB_109fd6380:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109fd6384);
  (*pcVar4)();
}



/* Entry: 109fd6450; end: 109fd652b;  */

undefined8 * FUN_109fd6450(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110b98d60;
  puStack_28 = param_1 + 0x58;
  func_0x00010922d758(&puStack_28);
  param_1[0x55] = 0;
  if ((undefined8 *)param_1[0x54] != param_1 + 0x4c) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[0x54],8);
  }
  param_1[0x4a] = 0;
  if ((undefined8 *)param_1[0x49] != param_1 + 9) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[0x49],8);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fd652c; end: 109fd654b;  */

void FUN_109fd652c(long param_1)

{
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  if (0 < *(long *)(param_1 + 0x250)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)
              (*(undefined8 *)(param_1 + 0x248),*(long *)(param_1 + 0x250) << 3);
    return;
  }
  return;
}



/* Entry: 109fd654c; end: 109fd67fb;  */

void FUN_109fd654c(long param_1,ulong param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x308);
  if (lVar3 == 0) {
    if (*(long *)(param_1 + 0x300) != 0) {
      uVar4 = *(undefined8 *)(param_3 + 0x48);
      uVar2 = *(ulong *)(param_1 + 0x40);
      if (((int)param_6 == 0) && ((*(byte *)(uVar2 + 0x208) & 1) == 0)) {
        if (((param_2 & 0xffffffff) < *(ulong *)(uVar2 + 0xd8)) &&
           (uVar1 = (ulong)*(byte *)(*(long *)(uVar2 + 0xd0) + (param_2 & 0xffffffff)),
           uVar1 != 0xff)) goto LAB_109fd66bc;
        FUN_109fca954(uVar2,param_2);
      }
      else {
        FUN_109fca9d0(uVar2,param_2,param_6,*(undefined8 *)(param_1 + 0x250));
      }
      uVar1 = uVar2;
      if (uVar2 != 0xffffffffffffffff) {
LAB_109fd66bc:
        *(long *)(*(long *)(param_1 + 0x248) + uVar1 * 8) = param_3;
        *(undefined8 *)(*(long *)(param_1 + 0x2e8) + uVar1 * 0x18 + 0x10) = uVar4;
        if (*(long *)(param_1 + 0x308) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x308) + uVar1 * 8) = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x00010c1741b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(long *)(param_1 + 0x300),PTR_s_setBuffer_offset_atIndex__11263aa88,
                   *(undefined8 *)(param_3 + 0x48),param_4,param_2 & 0xffffffff);
        return;
      }
    }
    return;
  }
  lVar5 = *(long *)(param_3 + 0x38);
  uVar4 = *(undefined8 *)(param_3 + 0x48);
  uVar2 = *(ulong *)(param_1 + 0x40);
  if (((int)param_6 == 0) && ((*(byte *)(uVar2 + 0x208) & 1) == 0)) {
    if (((param_2 & 0xffffffff) < *(ulong *)(uVar2 + 0xd8)) &&
       (uVar1 = (ulong)*(byte *)(*(long *)(uVar2 + 0xd0) + (param_2 & 0xffffffff)), uVar1 != 0xff))
    goto LAB_109fd65fc;
    FUN_109fca954(uVar2,param_2);
  }
  else {
    FUN_109fca9d0(uVar2,param_2,param_6,*(undefined8 *)(param_1 + 0x250));
  }
  uVar1 = uVar2;
  if (uVar2 == 0xffffffffffffffff) {
    return;
  }
LAB_109fd65fc:
  *(long *)(*(long *)(param_1 + 0x248) + uVar1 * 8) = param_3;
  *(undefined8 *)(*(long *)(param_1 + 0x2e8) + uVar1 * 0x18 + 0x10) = uVar4;
  *(long *)(lVar3 + uVar1 * 8) = lVar5 + param_4;
  return;
}



/* Entry: 109fd67fc; end: 109fd6923;  */

void FUN_109fd67fc(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lStack_58;
  
  if ((param_3 != 0) && (lVar4 = *(long *)(param_3 + 0x88), lVar4 != 0)) {
    lVar6 = *(long *)(param_1 + 0x2a8);
    lStack_58 = lVar4;
    if (lVar6 == *(long *)(param_1 + 0x2b0)) {
      func_0x00010924b16c(param_1 + 0x260,&lStack_58);
    }
    else {
      *(long *)(*(long *)(param_1 + 0x2a0) + lVar6 * 8) = lVar4;
      *(long *)(param_1 + 0x2a8) = lVar6 + 1;
    }
  }
  lVar4 = *(long *)(param_1 + 0x308);
  if (lVar4 == 0) {
    FUN_109fd6924(param_1,param_1 + 0x300,param_2,param_3,param_5);
    return;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x98);
  uVar2 = *(undefined8 *)(param_3 + 0xa0);
  uVar5 = *(ulong *)(param_1 + 0x40);
  if (((int)param_5 == 0) && ((*(byte *)(uVar5 + 0x208) & 1) == 0)) {
    if (((param_2 & 0xffffffff) < *(ulong *)(uVar5 + 0xd8)) &&
       (uVar3 = (ulong)*(byte *)(*(long *)(uVar5 + 0xd0) + (param_2 & 0xffffffff)), uVar3 != 0xff))
    goto LAB_109fd68e8;
    FUN_109fca954(uVar5,param_2);
  }
  else {
    FUN_109fca9d0(uVar5,param_2,param_5,*(undefined8 *)(param_1 + 0x250));
  }
  uVar3 = uVar5;
  if (uVar5 == 0xffffffffffffffff) {
    return;
  }
LAB_109fd68e8:
  *(long *)(*(long *)(param_1 + 0x248) + uVar3 * 8) = param_3;
  *(undefined8 *)(*(long *)(param_1 + 0x2e8) + uVar3 * 0x18 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + uVar3 * 8) = uVar2;
  return;
}



/* Entry: 109fd6924; end: 109fd6a03;  */

void FUN_109fd6924(long param_1,long *param_2,ulong param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*param_2 != 0) {
    uVar3 = *(undefined8 *)(param_4 + 0x98);
    uVar2 = *(ulong *)(param_1 + 0x40);
    if (((int)param_5 == 0) && ((*(byte *)(uVar2 + 0x208) & 1) == 0)) {
      if (((param_3 & 0xffffffff) < *(ulong *)(uVar2 + 0xd8)) &&
         (uVar1 = (ulong)*(byte *)(*(long *)(uVar2 + 0xd0) + (param_3 & 0xffffffff)), uVar1 != 0xff)
         ) goto LAB_109fd69ac;
      FUN_109fca954(uVar2,param_3);
    }
    else {
      FUN_109fca9d0(uVar2,param_3,param_5,*(undefined8 *)(param_1 + 0x250));
    }
    uVar1 = uVar2;
    if (uVar2 != 0xffffffffffffffff) {
LAB_109fd69ac:
      *(long *)(*(long *)(param_1 + 0x248) + uVar1 * 8) = param_4;
      *(undefined8 *)(*(long *)(param_1 + 0x2e8) + uVar1 * 0x18 + 0x10) = uVar3;
      if (*(long *)(param_1 + 0x308) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x308) + uVar1 * 8) = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x00010c213a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*param_2,PTR_s_setTexture_atIndex__1126628a8,*(undefined8 *)(param_4 + 0x98),
                 param_3 & 0xffffffff);
      return;
    }
  }
  return;
}



/* Entry: 109fd6a04; end: 109fd6bef;  */

void FUN_109fd6a04(long param_1,ulong param_2,long param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lStack_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  plVar4 = &lStack_80;
  if ((param_3 != 0) && (lStack_80 = *(long *)(param_3 + 0x88), lStack_80 != 0)) {
    lVar6 = *(long *)(param_1 + 0x2a8);
    if (lVar6 == *(long *)(param_1 + 0x2b0)) {
      func_0x00010924b16c(param_1 + 0x260,&lStack_80);
    }
    else {
      *(long *)(*(long *)(param_1 + 0x2a0) + lVar6 * 8) = lStack_80;
      *(long *)(param_1 + 0x2a8) = lVar6 + 1;
    }
  }
  lStack_80 = *(long *)(param_3 + 0x58);
  uStack_68 = *(undefined8 *)(param_3 + 0x70);
  uStack_70 = *(undefined8 *)(param_3 + 0x68);
  uStack_60 = *(undefined8 *)(param_3 + 0x78);
  iStack_78 = (int)*(undefined8 *)(param_3 + 0x60);
  _iStack_78 = CONCAT44(1,iStack_78 + param_4);
  uVar1 = *(undefined8 *)(param_3 + 0xa8);
  FUN_109fd75b8();
  _objc_release();
  lVar6 = *(long *)(param_1 + 0x308);
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_1 + 0x300);
    if (lVar6 == 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x40);
    if (((int)param_6 == 0) && ((*(byte *)(lVar3 + 0x208) & 1) == 0)) {
      if (((param_2 & 0xffffffff) < *(ulong *)(lVar3 + 0xd8)) &&
         (uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + 0xd0) + (param_2 & 0xffffffff)), uVar5 != 0xff)
         ) {
        *(long *)(*(long *)(param_1 + 0x248) + uVar5 * 8) = param_3;
        *(undefined8 *)(*(long *)(param_1 + 0x2e8) + uVar5 * 0x18 + 0x10) = uVar1;
        goto LAB_109fd6bc4;
      }
      FUN_109fca954(lVar3,param_2);
    }
    else {
      FUN_109fca9d0(lVar3,param_2,param_6,*(undefined8 *)(param_1 + 0x250));
    }
    if (lVar3 == -1) {
      return;
    }
    *(long *)(*(long *)(param_1 + 0x248) + lVar3 * 8) = param_3;
    *(undefined8 *)(*(long *)(param_1 + 0x2e8) + lVar3 * 0x18 + 0x10) = uVar1;
LAB_109fd6bc4:
    func_0x00010c213a00(lVar6);
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0x40);
  if (((int)param_6 == 0) && ((*(byte *)(uVar5 + 0x208) & 1) == 0)) {
    if (((param_2 & 0xffffffff) < *(ulong *)(uVar5 + 0xd8)) &&
       (uVar2 = (ulong)*(byte *)(*(long *)(uVar5 + 0xd0) + (param_2 & 0xffffffff)), uVar2 != 0xff))
    goto LAB_109fd6b64;
    FUN_109fca954(uVar5,param_2);
  }
  else {
    FUN_109fca9d0(uVar5,param_2,param_6,*(undefined8 *)(param_1 + 0x250));
  }
  uVar2 = uVar5;
  if (uVar5 == 0xffffffffffffffff) {
    return;
  }
LAB_109fd6b64:
  *(long *)(*(long *)(param_1 + 0x248) + uVar2 * 8) = param_3;
  *(undefined8 *)(*(long *)(param_1 + 0x2e8) + uVar2 * 0x18 + 0x10) = uVar1;
  *(long **)(lVar6 + uVar2 * 8) = plVar4;
  return;
}



/* Entry: 109fd6bf0; end: 109fd6d17;  */

void FUN_109fd6bf0(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lStack_58;
  
  if (param_3 == 0) {
    return;
  }
  lVar4 = *(long *)(param_3 + 0x88);
  if (lVar4 != 0) {
    lVar6 = *(long *)(param_1 + 0x2a8);
    lStack_58 = lVar4;
    if (lVar6 == *(long *)(param_1 + 0x2b0)) {
      func_0x00010924b16c(param_1 + 0x260,&lStack_58);
    }
    else {
      *(long *)(*(long *)(param_1 + 0x2a0) + lVar6 * 8) = lVar4;
      *(long *)(param_1 + 0x2a8) = lVar6 + 1;
    }
  }
  lVar4 = *(long *)(param_1 + 0x308);
  if (lVar4 == 0) {
    FUN_109fd6924(param_1,param_1 + 0x300,param_2,param_3,param_5);
    return;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x98);
  uVar2 = *(undefined8 *)(param_3 + 0xa0);
  uVar5 = *(ulong *)(param_1 + 0x40);
  if (((int)param_5 == 0) && ((*(byte *)(uVar5 + 0x208) & 1) == 0)) {
    if (((param_2 & 0xffffffff) < *(ulong *)(uVar5 + 0xd8)) &&
       (uVar3 = (ulong)*(byte *)(*(long *)(uVar5 + 0xd0) + (param_2 & 0xffffffff)), uVar3 != 0xff))
    goto LAB_109fd6cdc;
    FUN_109fca954(uVar5,param_2);
  }
  else {
    FUN_109fca9d0(uVar5,param_2,param_5,*(undefined8 *)(param_1 + 0x250));
  }
  uVar3 = uVar5;
  if (uVar5 == 0xffffffffffffffff) {
    return;
  }
LAB_109fd6cdc:
  *(long *)(*(long *)(param_1 + 0x248) + uVar3 * 8) = param_3;
  *(undefined8 *)(*(long *)(param_1 + 0x2e8) + uVar3 * 0x18 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + uVar3 * 8) = uVar2;
  return;
}



/* Entry: 109fd6d18; end: 109fd6eb3;  */

void FUN_109fd6d18(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x308);
  if (lVar3 == 0) {
    if (*(long *)(param_1 + 0x300) != 0) {
      uVar2 = *(ulong *)(param_1 + 0x40);
      if (((int)param_4 == 0) && ((*(byte *)(uVar2 + 0x208) & 1) == 0)) {
        if (((param_2 & 0xffffffff) < *(ulong *)(uVar2 + 0xd8)) &&
           (uVar1 = (ulong)*(byte *)(*(long *)(uVar2 + 0xd0) + (param_2 & 0xffffffff)),
           uVar1 != 0xff)) goto LAB_109fd6e64;
        FUN_109fca954(uVar2,param_2);
      }
      else {
        FUN_109fca9d0(uVar2,param_2,param_4,*(undefined8 *)(param_1 + 0x250));
      }
      uVar1 = uVar2;
      if (uVar2 != 0xffffffffffffffff) {
LAB_109fd6e64:
        *(long *)(*(long *)(param_1 + 0x248) + uVar1 * 8) = param_3;
        *(undefined8 *)(*(long *)(param_1 + 0x2e8) + uVar1 * 0x18 + 0x10) = 0;
        if (*(long *)(param_1 + 0x308) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x308) + uVar1 * 8) = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x00010c1f5410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(long *)(param_1 + 0x300),PTR_s_setSamplerState_atIndex__11265af28,
                   *(undefined8 *)(param_3 + 0x68),param_2 & 0xffffffff);
        return;
      }
    }
    return;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x60);
  uVar2 = *(ulong *)(param_1 + 0x40);
  if (((int)param_4 == 0) && ((*(byte *)(uVar2 + 0x208) & 1) == 0)) {
    if (((param_2 & 0xffffffff) < *(ulong *)(uVar2 + 0xd8)) &&
       (uVar1 = (ulong)*(byte *)(*(long *)(uVar2 + 0xd0) + (param_2 & 0xffffffff)), uVar1 != 0xff))
    goto LAB_109fd6db8;
    FUN_109fca954(uVar2,param_2);
  }
  else {
    FUN_109fca9d0(uVar2,param_2,param_4,*(undefined8 *)(param_1 + 0x250));
  }
  uVar1 = uVar2;
  if (uVar2 == 0xffffffffffffffff) {
    return;
  }
LAB_109fd6db8:
  *(long *)(*(long *)(param_1 + 0x248) + uVar1 * 8) = param_3;
  *(undefined8 *)(*(long *)(param_1 + 0x2e8) + uVar1 * 0x18 + 0x10) = 0;
  *(undefined8 *)(lVar3 + uVar1 * 8) = uVar4;
  return;
}



/* Entry: 109fd6eb4; end: 109fd72f7;  */

void FUN_109fd6eb4(long *param_1,uint *param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lStack_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (param_1[0x61] == 0) {
    if (param_3 != 0) {
      lVar11 = 0;
      do {
        iVar5 = *(int *)((long)param_2 + lVar11 + 8);
        if (iVar5 < 5) {
          if (iVar5 < 3) {
            if (iVar5 == 1) {
              puVar1 = (undefined4 *)((long)param_2 + lVar11);
              (**(code **)(*param_1 + 0x60))(param_1,*puVar1,*(undefined8 *)(puVar1 + 4),puVar1[1]);
            }
            else if (iVar5 == 2) {
              puVar1 = (undefined4 *)((long)param_2 + lVar11);
              uVar16 = *(undefined8 *)(puVar1 + 6);
              uVar6 = puVar1[8];
              uVar2 = *puVar1;
              uVar3 = puVar1[1];
              pcVar12 = *(code **)(*param_1 + 0x48);
LAB_109fd73d4:
              (*pcVar12)(param_1,uVar2,uVar16,uVar6,uVar3);
            }
          }
          else if (iVar5 == 3) {
            puVar1 = (undefined4 *)((long)param_2 + lVar11);
            (**(code **)(*param_1 + 0x50))
                      (param_1,*puVar1,*(undefined8 *)(puVar1 + 10),puVar1[0xc],puVar1[0xd],
                       puVar1[1]);
          }
          else if (iVar5 == 4) {
LAB_109fd7390:
            puVar1 = (undefined4 *)((long)param_2 + lVar11);
            uVar16 = *(undefined8 *)(puVar1 + 0x12);
            uVar8 = *(undefined8 *)(puVar1 + 0x14);
            uVar9 = *(undefined8 *)(puVar1 + 0x16);
            uVar2 = *puVar1;
            uVar3 = puVar1[1];
            pcVar12 = *(code **)(*param_1 + 0x38);
            goto LAB_109fd73f8;
          }
        }
        else if (iVar5 < 7) {
          if (iVar5 == 5) {
LAB_109fd73e0:
            puVar1 = (undefined4 *)((long)param_2 + lVar11);
            uVar16 = *(undefined8 *)(puVar1 + 0x12);
            uVar8 = *(undefined8 *)(puVar1 + 0x14);
            uVar9 = *(undefined8 *)(puVar1 + 0x16);
            uVar2 = *puVar1;
            uVar3 = puVar1[1];
            pcVar12 = *(code **)(*param_1 + 0x40);
LAB_109fd73f8:
            (*pcVar12)(param_1,uVar2,uVar16,uVar8,uVar9,uVar3);
          }
          else if (iVar5 == 6) goto LAB_109fd7390;
        }
        else {
          if (iVar5 == 7) goto LAB_109fd73e0;
          if (iVar5 == 8) {
            puVar1 = (undefined4 *)((long)param_2 + lVar11);
            uVar16 = *(undefined8 *)(puVar1 + 0xe);
            uVar6 = puVar1[0x10];
            uVar2 = *puVar1;
            uVar3 = puVar1[1];
            pcVar12 = *(code **)(*param_1 + 0x58);
            goto LAB_109fd73d4;
          }
        }
        lVar11 = lVar11 + 0x60;
      } while (param_3 * 0x60 - lVar11 != 0);
    }
    return;
  }
  if (param_3 != 0) {
    param_3 = param_3 * 0x60;
    do {
      uVar4 = param_2[2];
      if ((int)uVar4 < 4) {
        if (uVar4 == 1) {
          lVar11 = *(long *)(param_2 + 4);
          plVar14 = *(long **)(lVar11 + 0x60);
          uVar10 = param_1[8];
          if ((param_2[1] == 0) && ((*(byte *)(uVar10 + 0x208) & 1) == 0)) {
            if ((*(ulong *)(uVar10 + 0xd8) <= (ulong)*param_2) ||
               (uVar7 = (ulong)*(byte *)(*(long *)(uVar10 + 0xd0) + (ulong)*param_2), uVar7 == 0xff)
               ) {
              FUN_109fca954();
              goto LAB_109fd70d0;
            }
          }
          else {
            FUN_109fca9d0();
LAB_109fd70d0:
            uVar7 = uVar10;
            if (uVar10 == 0xffffffffffffffff) goto LAB_109fd7298;
          }
          *(long *)(param_1[0x49] + uVar7 * 8) = lVar11;
          *(undefined8 *)(param_1[0x5d] + uVar7 * 0x18 + 0x10) = 0;
        }
        else {
          if (uVar4 == 2) {
            lVar13 = *(long *)(param_2 + 6);
            lVar11 = *(long *)(lVar13 + 0x88);
            if (lVar11 != 0) {
              lVar13 = param_1[0x55];
              lStack_90 = lVar11;
              if (lVar13 == param_1[0x56]) {
                func_0x00010924b16c(param_1 + 0x4c,&lStack_90);
              }
              else {
                *(long *)(param_1[0x54] + lVar13 * 8) = lVar11;
                param_1[0x55] = lVar13 + 1;
              }
              lVar13 = *(long *)(param_2 + 6);
            }
            goto LAB_109fd7224;
          }
          if (uVar4 != 3) goto LAB_109fd7058;
          lVar11 = *(long *)(param_2 + 10);
          lStack_90 = *(long *)(lVar11 + 0x88);
          if (lStack_90 != 0) {
            lVar11 = param_1[0x55];
            if (lVar11 == param_1[0x56]) {
              func_0x00010924b16c(param_1 + 0x4c,&lStack_90);
            }
            else {
              *(long *)(param_1[0x54] + lVar11 * 8) = lStack_90;
              param_1[0x55] = lVar11 + 1;
            }
            lVar11 = *(long *)(param_2 + 10);
          }
          uVar17 = (ulong)*param_2;
          lStack_90 = *(long *)(lVar11 + 0x58);
          uStack_78 = *(undefined8 *)(lVar11 + 0x70);
          uStack_80 = *(undefined8 *)(lVar11 + 0x68);
          uStack_70 = *(undefined8 *)(lVar11 + 0x78);
          iStack_88 = (int)*(undefined8 *)(lVar11 + 0x60);
          _iStack_88 = CONCAT44(1,iStack_88 + param_2[0xc]);
          uVar16 = *(undefined8 *)(lVar11 + 0xa8);
          plVar14 = &lStack_90;
          FUN_109fd75b8();
          _objc_release();
          uVar10 = param_1[8];
          if ((param_2[1] != 0) || ((*(byte *)(uVar10 + 0x208) & 1) != 0)) {
            FUN_109fca9d0(uVar10,uVar17,param_2[1],param_1[0x4a]);
LAB_109fd71e4:
            uVar7 = uVar10;
            if (uVar10 != 0xffffffffffffffff) goto LAB_109fd71ec;
            goto LAB_109fd7298;
          }
          if ((*(ulong *)(uVar10 + 0xd8) <= uVar17) ||
             (uVar7 = (ulong)*(byte *)(*(long *)(uVar10 + 0xd0) + uVar17), uVar7 == 0xff)) {
            FUN_109fca954(uVar10,uVar17);
            goto LAB_109fd71e4;
          }
LAB_109fd71ec:
          *(long *)(param_1[0x49] + uVar7 * 8) = lVar11;
          *(undefined8 *)(param_1[0x5d] + uVar7 * 0x18 + 0x10) = uVar16;
        }
        if (param_1[0x61] != 0) {
          *(long **)(param_1[0x61] + uVar7 * 8) = plVar14;
        }
      }
      else if (uVar4 - 4 < 4) {
        lVar11 = *(long *)(param_2 + 0x12);
        lVar13 = *(long *)(param_2 + 0x14);
        lVar15 = *(long *)(lVar11 + 0x38);
        uVar16 = *(undefined8 *)(lVar11 + 0x48);
        uVar10 = param_1[8];
        if ((param_2[1] == 0) && ((*(byte *)(uVar10 + 0x208) & 1) == 0)) {
          if ((*(ulong *)(uVar10 + 0xd8) <= (ulong)*param_2) ||
             (uVar7 = (ulong)*(byte *)(*(long *)(uVar10 + 0xd0) + (ulong)*param_2), uVar7 == 0xff))
          {
            FUN_109fca954();
            goto LAB_109fd6fac;
          }
        }
        else {
          FUN_109fca9d0();
LAB_109fd6fac:
          uVar7 = uVar10;
          if (uVar10 == 0xffffffffffffffff) goto LAB_109fd7298;
        }
        *(long *)(param_1[0x49] + uVar7 * 8) = lVar11;
        *(undefined8 *)(param_1[0x5d] + uVar7 * 0x18 + 0x10) = uVar16;
        if (param_1[0x61] != 0) {
          *(long *)(param_1[0x61] + uVar7 * 8) = lVar15 + lVar13;
        }
      }
      else if (uVar4 == 8) {
        lVar13 = *(long *)(param_2 + 0xe);
        lVar11 = *(long *)(lVar13 + 0x88);
        if (lVar11 != 0) {
          lVar13 = param_1[0x55];
          lStack_90 = lVar11;
          if (lVar13 == param_1[0x56]) {
            func_0x00010924b16c(param_1 + 0x4c,&lStack_90);
          }
          else {
            *(long *)(param_1[0x54] + lVar13 * 8) = lVar11;
            param_1[0x55] = lVar13 + 1;
          }
          lVar13 = *(long *)(param_2 + 0xe);
        }
LAB_109fd7224:
        uVar16 = *(undefined8 *)(lVar13 + 0x98);
        uVar8 = *(undefined8 *)(lVar13 + 0xa0);
        uVar10 = param_1[8];
        if ((param_2[1] == 0) && ((*(byte *)(uVar10 + 0x208) & 1) == 0)) {
          if ((*(ulong *)(uVar10 + 0xd8) <= (ulong)*param_2) ||
             (uVar7 = (ulong)*(byte *)(*(long *)(uVar10 + 0xd0) + (ulong)*param_2), uVar7 == 0xff))
          {
            FUN_109fca954();
            goto LAB_109fd7270;
          }
        }
        else {
          FUN_109fca9d0();
LAB_109fd7270:
          uVar7 = uVar10;
          if (uVar10 == 0xffffffffffffffff) goto LAB_109fd7298;
        }
        *(long *)(param_1[0x49] + uVar7 * 8) = lVar13;
        *(undefined8 *)(param_1[0x5d] + uVar7 * 0x18 + 0x10) = uVar16;
        if (param_1[0x61] != 0) {
          *(undefined8 *)(param_1[0x61] + uVar7 * 8) = uVar8;
        }
      }
      else {
LAB_109fd7058:
        uVar10 = param_1[8];
        if ((param_2[1] == 0) && ((*(byte *)(uVar10 + 0x208) & 1) == 0)) {
          if ((*(ulong *)(uVar10 + 0xd8) <= (ulong)*param_2) ||
             (uVar7 = (ulong)*(byte *)(*(long *)(uVar10 + 0xd0) + (ulong)*param_2), uVar7 == 0xff))
          {
            FUN_109fca954();
            goto LAB_109fd70fc;
          }
LAB_109fd7104:
          *(undefined8 *)(param_1[0x49] + uVar7 * 8) = 0;
          *(undefined8 *)(param_1[0x5d] + uVar7 * 0x18 + 0x10) = 0;
          if (param_1[0x61] != 0) {
            *(undefined8 *)(param_1[0x61] + uVar7 * 8) = 0;
          }
        }
        else {
          FUN_109fca9d0();
LAB_109fd70fc:
          uVar7 = uVar10;
          if (uVar10 != 0xffffffffffffffff) goto LAB_109fd7104;
        }
      }
LAB_109fd7298:
      param_2 = param_2 + 0x18;
      param_3 = param_3 + -0x60;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 109fd72f8; end: 109fd7463;  */

void FUN_109fd72f8(long *param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  
  if (param_3 != 0) {
    lVar10 = 0;
    do {
      iVar4 = *(int *)(param_2 + lVar10 + 8);
      if (iVar4 < 5) {
        if (iVar4 < 3) {
          if (iVar4 == 1) {
            puVar1 = (undefined4 *)(param_2 + lVar10);
            (**(code **)(*param_1 + 0x60))(param_1,*puVar1,*(undefined8 *)(puVar1 + 4),puVar1[1]);
          }
          else if (iVar4 == 2) {
            puVar1 = (undefined4 *)(param_2 + lVar10);
            uVar6 = *(undefined8 *)(puVar1 + 6);
            uVar5 = puVar1[8];
            uVar2 = *puVar1;
            uVar3 = puVar1[1];
            pcVar9 = *(code **)(*param_1 + 0x48);
LAB_109fd73d4:
            (*pcVar9)(param_1,uVar2,uVar6,uVar5,uVar3);
          }
        }
        else if (iVar4 == 3) {
          puVar1 = (undefined4 *)(param_2 + lVar10);
          (**(code **)(*param_1 + 0x50))
                    (param_1,*puVar1,*(undefined8 *)(puVar1 + 10),puVar1[0xc],puVar1[0xd],puVar1[1])
          ;
        }
        else if (iVar4 == 4) {
LAB_109fd7390:
          puVar1 = (undefined4 *)(param_2 + lVar10);
          uVar6 = *(undefined8 *)(puVar1 + 0x12);
          uVar7 = *(undefined8 *)(puVar1 + 0x14);
          uVar8 = *(undefined8 *)(puVar1 + 0x16);
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          pcVar9 = *(code **)(*param_1 + 0x38);
          goto LAB_109fd73f8;
        }
      }
      else if (iVar4 < 7) {
        if (iVar4 == 5) {
LAB_109fd73e0:
          puVar1 = (undefined4 *)(param_2 + lVar10);
          uVar6 = *(undefined8 *)(puVar1 + 0x12);
          uVar7 = *(undefined8 *)(puVar1 + 0x14);
          uVar8 = *(undefined8 *)(puVar1 + 0x16);
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          pcVar9 = *(code **)(*param_1 + 0x40);
LAB_109fd73f8:
          (*pcVar9)(param_1,uVar2,uVar6,uVar7,uVar8,uVar3);
        }
        else if (iVar4 == 6) goto LAB_109fd7390;
      }
      else {
        if (iVar4 == 7) goto LAB_109fd73e0;
        if (iVar4 == 8) {
          puVar1 = (undefined4 *)(param_2 + lVar10);
          uVar6 = *(undefined8 *)(puVar1 + 0xe);
          uVar5 = puVar1[0x10];
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          pcVar9 = *(code **)(*param_1 + 0x58);
          goto LAB_109fd73d4;
        }
      }
      lVar10 = lVar10 + 0x60;
    } while (param_3 * 0x60 - lVar10 != 0);
  }
  return;
}



/* Entry: 109fd7464; end: 109fd7587;  */

void FUN_109fd7464(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar3 = *(long **)(param_1 + 0x2e8);
  plVar4 = *(long **)(param_1 + 0x2f0);
  do {
    if (plVar3 == plVar4) {
      return;
    }
    lStack_48 = plVar3[2];
    if (lStack_48 != 0) {
      lStack_50 = *plVar3;
      lStack_58 = plVar3[1];
      plVar2 = *(long **)(param_2 + 0x20);
      if (((plVar2 == (long *)0x0) || (*plVar2 != lStack_50)) || (plVar2[1] != lStack_58)) {
        plVar1 = *(long **)(param_2 + 0x10);
        for (plVar2 = *(long **)(param_2 + 8); plVar2 != plVar1; plVar2 = plVar2 + 0x105) {
          if ((*plVar2 == lStack_50) && (plVar2[1] == lStack_58)) {
            FUN_109fd7d78(plVar2 + 2,&lStack_48);
            *(long **)(param_2 + 0x20) = plVar2;
            goto LAB_109fd754c;
          }
        }
        if (plVar1 < *(long **)(param_2 + 0x18)) {
          *plVar1 = lStack_50;
          plVar1[1] = lStack_58;
          plVar1[0x102] = (long)(plVar1 + 2);
          plVar1[0x103] = 0;
          plVar2 = plVar1 + 0x105;
          plVar1[0x104] = 0x100;
        }
        else {
          plVar2 = (long *)(param_2 + 8);
          FUN_109fd7e70(plVar2,&lStack_50,&lStack_58);
        }
        *(long **)(param_2 + 0x10) = plVar2;
        *(long **)(param_2 + 0x20) = plVar2 + -0x105;
        plVar2 = plVar2 + -0x103;
      }
      else {
        plVar2 = plVar2 + 2;
      }
      FUN_109fd7d78(plVar2,&lStack_48);
    }
LAB_109fd754c:
    plVar3 = plVar3 + 3;
  } while( true );
}



/* Entry: 109fd7588; end: 109fd758f;  */

void FUN_109fd7588(void)

{
  return;
}



/* Entry: 109fd7590; end: 109fd75b7;  */

void FUN_109fd7590(void)

{
  FUN_109fd7fc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fd75b8; end: 109fd767b;  */

undefined1  [16] FUN_109fd75b8(long *param_1,long param_2)

{
  undefined1 auVar1 [16];
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plStack_40;
  long lStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 4);
  plVar2 = param_1 + 0xc;
  FUN_109fd767c(plVar2,param_2);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1;
    lVar3 = param_2;
    (**(code **)(*param_1 + 0x10))();
    plStack_40 = plVar2;
    lStack_38 = lVar3;
    FUN_109fd78ac(param_1 + 0xc,param_2,param_2,&plStack_40);
  }
  else {
    plVar4 = (long *)plVar2[7];
    _objc_retain(plVar4);
    lStack_38 = plVar2[8];
    plStack_40 = plVar4;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 4);
  auVar1._8_8_ = lStack_38;
  auVar1._0_8_ = plStack_40;
  return auVar1;
}



/* Entry: 109fd767c; end: 109fd7753;  */

long FUN_109fd767c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar1 = param_1;
  FUN_109fd7754();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar1);
    }
    else {
      plVar7 = plVar1;
      if (plVar5 <= plVar1) {
        uVar2 = 0;
        if (plVar5 != (long *)0x0) {
          uVar2 = (ulong)plVar1 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar1 - uVar2 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar1) {
          uVar2 = (ulong)(plVar3 + 2);
          FUN_109fd788c(uVar2,param_2);
          if ((uVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar2 = 0;
            if (plVar5 != (long *)0x0) {
              uVar2 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar2 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109fd7754; end: 109fd77b7;  */

void FUN_109fd7754(undefined8 param_1,long param_2)

{
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = *(undefined4 *)(param_2 + 4);
  uStack_18 = *(undefined4 *)(param_2 + 0x18);
  uStack_1c = *(undefined4 *)(param_2 + 0x1c);
  uStack_20 = *(undefined4 *)(param_2 + 0x20);
  uStack_24 = *(undefined4 *)(param_2 + 0x24);
  FUN_109fd77b8(param_2,&uStack_14,param_2 + 8,param_2 + 0xc,param_2 + 0x10,param_2 + 0x14,
                &uStack_18,&uStack_1c,&uStack_20,&uStack_24);
  return;
}



/* Entry: 109fd77b8; end: 109fd788b;  */

ulong FUN_109fd77b8(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                   uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_1 + 0x9e3779b97f4a7c15;
  uVar1 = (ulong)*param_2 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_3 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_4 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_5 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_6 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_7 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_8 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_9 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  return (ulong)*param_10 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
}



/* Entry: 109fd788c; end: 109fd78ab;  */

bool FUN_109fd788c(undefined8 param_1,undefined8 param_2)

{
  _memcmp(param_1,param_2,0x28);
  return (int)param_1 == 0;
}



/* Entry: 109fd78ac; end: 109fd7b23;  */

undefined1  [16] FUN_109fd78ac(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x26;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar6 = param_1;
  FUN_109fd7754();
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x26 = (long *)(uVar10 & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar9 <= plVar6) {
        uVar5 = 0;
        if (plVar9 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar9;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar5 * (long)plVar9);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar2; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        plVar3 = (long *)plVar8[1];
        if (plVar3 == plVar6) {
          plVar3 = plVar8 + 2;
          FUN_109fd788c(plVar3,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_109fd7ae0;
          }
        }
        else {
          if (((ulong)plVar9 & uVar10) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar10);
          }
          else if (plVar9 <= plVar3) {
            uVar5 = 0;
            if (plVar9 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar9;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar9);
          }
          if (plVar3 != unaff_x26) break;
        }
      }
    }
  }
  plVar8 = (long *)0x48;
  __Znwm();
  uStack_68 = 1;
  *plVar8 = 0;
  plVar8[1] = (long)plVar6;
  lVar4 = *param_3;
  lVar11 = param_3[3];
  lVar7 = param_3[2];
  plVar8[3] = param_3[1];
  plVar8[2] = lVar4;
  plVar8[5] = lVar11;
  plVar8[4] = lVar7;
  plVar8[6] = param_3[4];
  lVar7 = *param_4;
  plStack_78 = plVar8;
  plStack_70 = param_1;
  _objc_retain(lVar7);
  lVar4 = param_4[1];
  plVar8[7] = lVar7;
  plVar8[8] = lVar4;
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    uVar10 = 1;
    if ((long *)0x2 < plVar9) {
      uVar10 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)plVar9 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar5) {
      uVar10 = uVar5;
    }
    FUN_109fd7b24(param_1,uVar10);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar9 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar9 <= plVar6) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar6 / (ulong)plVar9;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar10 * (long)plVar9);
      }
    }
  }
  plVar8 = plStack_78;
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plStack_78 = *plVar6;
    *plVar6 = (long)plStack_78;
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar6;
    if (*plStack_78 != 0) {
      plVar6 = *(long **)(*plStack_78 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar6) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar6 / (ulong)plVar9;
        }
        plVar6 = (long *)((long)plVar6 - uVar10 * (long)plVar9);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = plStack_78;
    }
  }
  else {
    *plStack_78 = *plVar6;
    *plVar6 = (long)plStack_78;
  }
  plStack_78 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x000109fd7d30(&plStack_78,0);
  uVar1 = 1;
LAB_109fd7ae0:
  auVar12._8_8_ = uVar1;
  auVar12._0_8_ = plVar8;
  return auVar12;
}



/* Entry: 109fd7b24; end: 109fd7bf3;  */

void FUN_109fd7b24(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
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
  if (uVar7 < param_2) {
LAB_109fd7b6c:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            _objc_release(*(undefined8 *)(uVar7 + 0x38));
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_109fd7b6c;
  }
  return;
}



/* Entry: 109fd7bf4; end: 109fd7d77;  */

void FUN_109fd7bf4(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          _objc_release(*(undefined8 *)(uVar1 + 0x38));
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 109fd7d78; end: 109fd7daf;  */

undefined8 * FUN_109fd7d78(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x808) != *(long *)(param_1 + 0x810)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x800) + *(long *)(param_1 + 0x808) * 8);
    *puVar1 = *param_2;
    *(long *)(param_1 + 0x808) = *(long *)(param_1 + 0x808) + 1;
    return puVar1;
  }
  uVar3 = *(long *)(param_1 + 0x810) * 2;
  if (uVar3 < 0x101) {
    uVar3 = 0x100;
  }
  if (uVar3 <= *(ulong *)(param_1 + 0x808)) {
    uVar3 = *(ulong *)(param_1 + 0x808) + 1;
  }
  uVar2 = uVar3;
  FUN_109fd5090();
  *(undefined8 *)(uVar2 + *(long *)(param_1 + 0x808) * 8) = *param_2;
  if (*(long *)(param_1 + 0x808) == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = 0;
    do {
      *(undefined8 *)(uVar2 + uVar4 * 8) = *(undefined8 *)(*(long *)(param_1 + 0x800) + uVar4 * 8);
      uVar4 = uVar4 + 1;
      uVar5 = *(ulong *)(param_1 + 0x808);
    } while (uVar4 < uVar5);
  }
  uVar4 = uVar5;
  if (*(long *)(param_1 + 0x800) != param_1) {
    __ZdlPvSt11align_val_t(*(long *)(param_1 + 0x800),8);
    uVar4 = *(ulong *)(param_1 + 0x808);
  }
  *(ulong *)(param_1 + 0x800) = uVar2;
  *(ulong *)(param_1 + 0x810) = uVar3;
  *(ulong *)(param_1 + 0x808) = uVar4 + 1;
  return (undefined8 *)(uVar2 + uVar5 * 8);
}



/* Entry: 109fd7db0; end: 109fd7e6f;  */

long FUN_109fd7db0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *(long *)(param_1 + 0x810) * 2;
  if (uVar2 < 0x101) {
    uVar2 = 0x100;
  }
  if (uVar2 <= *(ulong *)(param_1 + 0x808)) {
    uVar2 = *(ulong *)(param_1 + 0x808) + 1;
  }
  uVar1 = uVar2;
  FUN_109fd5090();
  *(undefined8 *)(uVar1 + *(long *)(param_1 + 0x808) * 8) = *param_2;
  if (*(long *)(param_1 + 0x808) == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    do {
      *(undefined8 *)(uVar1 + uVar3 * 8) = *(undefined8 *)(*(long *)(param_1 + 0x800) + uVar3 * 8);
      uVar3 = uVar3 + 1;
      uVar4 = *(ulong *)(param_1 + 0x808);
    } while (uVar3 < uVar4);
  }
  uVar3 = uVar4;
  if (*(long *)(param_1 + 0x800) != param_1) {
    __ZdlPvSt11align_val_t(*(long *)(param_1 + 0x800),8);
    uVar3 = *(ulong *)(param_1 + 0x808);
  }
  *(ulong *)(param_1 + 0x800) = uVar1;
  *(ulong *)(param_1 + 0x810) = uVar2;
  *(ulong *)(param_1 + 0x808) = uVar3 + 1;
  return uVar1 + uVar4 * 8;
}



/* Entry: 109fd7e70; end: 109fd7fc3;  */

long * FUN_109fd7e70(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar3 = *param_1;
  lVar4 = param_1[1];
  lVar9 = lVar4 - lVar3;
  uVar5 = (lVar9 >> 3) * 0x77a9af922545a3cd + 1;
  if (uVar5 < 0x1f6310aca0dbb6) {
    lVar6 = param_1[2] - lVar3 >> 3;
    uVar7 = lVar6 * -0x10aca0dbb574b866;
    if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
      uVar7 = uVar5;
    }
    if (0xfb18856506dd9 < (ulong)(lVar6 * 0x77a9af922545a3cd)) {
      uVar7 = 0x1f6310aca0dbb5;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar2 = (long *)0x0;
      lVar6 = lVar9;
    }
    else {
      plVar2 = param_1;
      FUN_109fd4e2c();
      lVar3 = *param_1;
      lVar4 = param_1[1];
      lVar6 = lVar4 - lVar3;
    }
    plStack_50 = (long *)((long)plVar2 + lVar9);
    uVar8 = *param_3;
    *plStack_50 = *param_2;
    plStack_50[1] = uVar8;
    plStack_50[0x102] = (long)(plStack_50 + 2);
    plStack_50[0x103] = 0;
    plStack_50[0x104] = 0x100;
    plVar1 = plStack_50 + 0x105;
    lVar6 = (long)plStack_50 - lVar6;
    plStack_58 = plVar2;
    plStack_48 = plVar1;
    plStack_40 = plVar2 + uVar7 * 0x105;
    FUN_109fd4e74(param_1,lVar3,lVar4,lVar6);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = (long)plVar1;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar7 * 0x105);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x000109fd5150(&plStack_58);
    return plVar1;
  }
  FUN_109fd4e18();
  func_0x000109fd5150(&plStack_58);
  plVar2 = param_1;
  __Unwind_Resume();
  uStack_68 = 0x109fd7fc4;
  puStack_80 = param_3;
  plStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000109fd8004(plVar2 + 0x62);
  _objc_release(plVar2[0x60]);
  if (plVar2[0x5d] != 0) {
    plVar2[0x5e] = plVar2[0x5d];
    __ZdlPv();
  }
  *plVar2 = (long)&PTR_DAT_110b98d60;
  plStack_88 = plVar2 + 0x58;
  func_0x00010922d758(&plStack_88);
  plVar2[0x55] = 0;
  if ((long *)plVar2[0x54] != plVar2 + 0x4c) {
    __ZdlPvSt11align_val_t((long *)plVar2[0x54],8);
  }
  plVar2[0x4a] = 0;
  if ((long *)plVar2[0x49] != plVar2 + 9) {
    __ZdlPvSt11align_val_t((long *)plVar2[0x49],8);
  }
  if (plVar2[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return plVar2;
}



/* Entry: 109fd7fc4; end: 109fd8057;  */

undefined8 * FUN_109fd7fc4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  func_0x000109fd8004(param_1 + 0x62);
  _objc_release(param_1[0x60]);
  if (param_1[0x5d] != 0) {
    param_1[0x5e] = param_1[0x5d];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b98d60;
  puStack_28 = param_1 + 0x58;
  func_0x00010922d758(&puStack_28);
  param_1[0x55] = 0;
  if ((undefined8 *)param_1[0x54] != param_1 + 0x4c) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[0x54],8);
  }
  param_1[0x4a] = 0;
  if ((undefined8 *)param_1[0x49] != param_1 + 9) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[0x49],8);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fd8058; end: 109fd80a3;  */

void FUN_109fd8058(long *param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  long lStack_18;
  
  lStack_18 = *param_1;
  *param_1 = param_2;
  if (lStack_18 != 0) {
    plVar2 = (long *)param_1[4];
    if (plVar2 == (long *)0x0) {
      func_0x000104c501e4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109fd80a0);
      (*pcVar1)();
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&lStack_18);
  }
  return;
}



/* Entry: 109fd80a4; end: 109fd90a7;  */

/* WARNING: Removing unreachable block (ram,0x000109fd8b24) */
/* WARNING: Removing unreachable block (ram,0x000109fd8b2c) */

undefined8 * FUN_109fd80a4(undefined8 *param_1,ulong param_2)

{
  ulong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined *puVar22;
  byte bVar23;
  byte bVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  byte bVar28;
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  undefined1 uVar33;
  ulong uStack_170;
  undefined **ppuStack_100;
  undefined8 *puStack_f8;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined ***pppuStack_e8;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_1;
  func_0x00010922e60c();
  *puVar12 = &PTR_FUN_110b98de0;
  puVar20 = puVar12;
  _MTLCreateSystemDefaultDevice();
  param_1[0x11b] = puVar20;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x11e) = 0;
  param_1[0x11f] = 0x32aaaba7;
  param_1[0x121] = 0;
  param_1[0x120] = 0;
  param_1[0x123] = 0;
  param_1[0x122] = 0;
  param_1[0x125] = 0;
  param_1[0x124] = 0;
  param_1[0x127] = 0;
  param_1[0x126] = 0;
  param_1[0x129] = 0;
  param_1[0x128] = 0;
  param_1[299] = 0;
  param_1[0x12a] = 0;
  param_1[300] = 0;
  if (puVar20 == (undefined8 *)0x0) {
    puVar22 = &UNK_10f62f9da;
    goto LAB_109fd8f54;
  }
  func_0x00010bf09e00();
  puVar1 = param_1 + 0x11b;
  if (puVar20 == (undefined8 *)0x0) {
LAB_109fd8154:
    puVar14 = puVar1;
    FUN_109fd90a8();
    puVar20 = param_1 + 6;
    *(undefined4 *)puVar20 = 0x1010101;
    *(undefined2 *)((long)param_1 + 0x3e) = 0x101;
    bVar23 = 1;
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined2 *)((long)param_1 + 0x4e) = 0x101;
    *(undefined8 *)((long)param_1 + 0x34) = 0x101010101010101;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)(param_1 + 0xd) = 1;
    uVar13 = param_2 & 0x100;
    bVar28 = (byte)((ulong)puVar14 >> 0x30);
    bVar24 = bVar28;
    if (uVar13 != 0) {
      bVar24 = 1;
    }
    bVar6 = ((ulong)puVar14 & 0x10000) != 0;
    bVar7 = uVar13 != 0;
    bVar9 = bVar6 || bVar7;
    *(bool *)((long)param_1 + 0x69) = bVar9;
    *(undefined2 *)((long)param_1 + 0x6e) = 0x101;
    *(undefined1 *)((long)param_1 + 0x5c) = 1;
    *(undefined2 *)(param_1 + 0xfa) = 0;
    *(undefined2 *)((long)param_1 + 0x5f) = 0x101;
    *(undefined1 *)(param_1 + 0xf8) = 1;
    *(byte *)((long)param_1 + 0x4d) = bVar24;
    *(bool *)((long)param_1 + 0x6a) = bVar9;
    *(bool *)((long)param_1 + 0x6b) = bVar9;
    *(bool *)((long)param_1 + 0x6c) = bVar9;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    if (((ulong)puVar14 & 0x10101010101) == 0) {
      bVar23 = (byte)((ulong)puVar14 >> 0x38) & 1 | bVar28 | (byte)param_2;
    }
    *(byte *)((long)param_1 + 0x4c) = bVar23 & 1;
    if (((ulong)puVar14 & 0x100) == 0 && uVar13 == 0) {
      bVar24 = (byte)(param_2 >> 0x10) & 1;
    }
    else {
      bVar24 = 1;
    }
    *(byte *)((long)puVar12 + 0x42) = bVar24;
    *(undefined2 *)(puVar12 + 0x28) = 0;
    iVar10 = (int)puVar12[0x11b];
    func_0x00010c263be0();
    if (iVar10 != 0) {
      *(undefined2 *)(puVar12 + 0x28) = 0x101;
    }
    func_0x00010c121ac0(*puVar1);
    *(undefined4 *)((long)puVar12 + 0x10c) = 0xffffffff;
    *(undefined4 *)((long)puVar12 + 100) = 0xf;
    *(undefined4 *)(puVar12 + 0xe) = 1;
    *(undefined1 *)((long)puVar12 + 0x8c) = 0;
    puVar12[0x2b] = 0x1000000004;
    puVar12[0x2a] = 0x400000008;
    puVar12[0xf9] = 1;
    uVar11 = 0x2000;
    if ((param_2 & 0x10000) != 0) {
      uVar11 = 0x4000;
    }
    uVar3 = 0x4000;
    if (!bVar6 && !bVar7) {
      uVar3 = uVar11;
    }
    *(undefined4 *)((long)puVar12 + 0x84) = uVar3;
    *(undefined4 *)(puVar12 + 0x11) = 0;
    *(undefined4 *)((long)puVar12 + 0x7c) = uVar3;
    *(undefined4 *)(puVar12 + 0x10) = 0x800;
    *(undefined4 *)(puVar12 + 0xf) = 0x800;
    *(undefined4 *)(puVar12 + 0x20) = 8;
    puVar12[0x13] = 0x1700000008;
    puVar12[0x12] = 8;
    *(undefined4 *)(puVar12 + 0x14) = 0x45;
    puVar12[0x23] = 0x2000000020;
    lVar15 = puVar12[0x11b];
    func_0x00010c0c1e20();
    puVar12[0x19] = lVar15;
    puVar12[0x1a] = lVar15;
    lVar26 = lVar15 * (ulong)*(uint *)((long)puVar12 + 0x9c);
    puVar12[0x15] = lVar26;
    puVar12[0x16] = lVar26;
    puVar12[0x17] = lVar26;
    puVar12[0x18] = lVar15;
    lVar15 = puVar12[0x11b];
    func_0x00010bf09e00();
    iVar10 = 2;
    func_0x000107c31924(2,0x10,0,0);
    uVar11 = 0;
    if ((iVar10 != 0) && (lVar15 == 1)) {
      *(undefined4 *)(puVar12 + 0xb) = 7;
      *(undefined4 *)((long)puVar12 + 0x114) = 0x100000;
      uVar11 = 0x1f;
    }
    *(undefined4 *)((long)puVar12 + 0x54) = uVar11;
    puVar12[0x1c] = 0x1f0000001f;
    puVar12[0x1b] = 0x1f0000001f;
    puVar12[0x1e] = 0x1000000010;
    puVar12[0x1d] = 0x1000000010;
    iVar10 = 0x100;
    if ((param_2 & 0x10000) != 0) {
      iVar10 = 0x800;
    }
    iVar2 = 0x800;
    if (!bVar6 && !bVar7) {
      iVar2 = iVar10;
    }
    *(int *)(puVar12 + 0x21) = iVar2;
    *(int *)((long)puVar12 + 0x104) = iVar2 + -4;
    puVar12[0x1f] = 0x1f0000ffff;
    *(undefined8 *)((long)puVar12 + 0x70c) = 0x101010101010101;
    *(undefined8 *)((long)puVar12 + 0x704) = 0x101010101010101;
    *(undefined8 *)((long)puVar12 + 0x71c) = 0x101010101010101;
    *(undefined8 *)((long)puVar12 + 0x714) = 0x101010101010101;
    *(undefined8 *)((long)puVar12 + 0x724) = 0x101010101010101;
    if (puVar12[0x11b] == 0) {
      uVar11 = 0;
      uVar18 = 0;
    }
    else {
      func_0x00010c0c2fe0(&ppuStack_100);
      uVar18 = CONCAT44((int)uStack_f0,(int)puStack_f8);
      uVar11 = ppuStack_100._0_4_;
    }
    uVar3 = 0x200;
    if ((param_2 & 0x10000) != 0) {
      uVar3 = 0x400;
    }
    uVar4 = 0x400;
    if (((ulong)puVar14 & 0x1000000) == 0 && uVar13 == 0) {
      uVar4 = uVar3;
    }
    *(undefined4 *)(puVar12 + 0x24) = uVar4;
    *(undefined4 *)((long)puVar12 + 0x134) = uVar11;
    puVar12[0x27] = uVar18;
    *(undefined8 *)((long)puVar12 + 300) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar12 + 0x124) = 0xffffffff00000020;
    uVar30 = (uint)puVar14;
    if ((uVar30 >> 8 & 1) == 0) {
      if (uVar13 == 0) {
        puVar12[0x29] = 0x100;
      }
      else {
        if ((((((ulong)puVar14 & 0x10101010001) == 0) && (((ulong)puVar14 >> 0x38 & 1) == 0)) &&
            (((ulong)puVar14 >> 0x30 & 1) == 0)) && ((param_2 & 1) == 0)) {
          uVar18 = 0x100;
        }
        else {
          uVar18 = 4;
        }
        puVar12[0x29] = uVar18;
      }
    }
    else {
      puVar12[0x29] = 4;
    }
    lVar15 = 0x194;
    do {
      ((undefined8 *)((long)puVar12 + lVar15))[1] = 0x100000001;
      *(undefined8 *)((long)puVar12 + lVar15) = 0x100000000;
      lVar15 = lVar15 + 0x10;
    } while (lVar15 != 0x704);
    *(undefined8 *)((long)puVar12 + 0x1a4) = 0x1000007ef;
    *(undefined4 *)(puVar12 + 0x36) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x35) = (int)puVar14;
    *(int *)(puVar12 + 0x36) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x1b4) = 0x1000007ef;
    *(undefined4 *)(puVar12 + 0x38) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x37) = (int)puVar14;
    *(int *)(puVar12 + 0x38) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x1d4) = 0x1000007ef;
    *(undefined4 *)(puVar12 + 0x3c) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x3b) = (int)puVar14;
    *(int *)(puVar12 + 0x3c) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x214) = 0x1000007ef;
    *(undefined4 *)(puVar12 + 0x44) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x43) = (int)puVar14;
    *(int *)(puVar12 + 0x44) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x224) = 0x1000007ef;
    *(undefined4 *)(puVar12 + 0x46) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x45) = (int)puVar14;
    *(int *)(puVar12 + 0x46) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x234) = 0x1000007ef;
    *(undefined4 *)(puVar12 + 0x48) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x47) = (int)puVar14;
    *(int *)(puVar12 + 0x48) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x1e4) = 0x1000007ef;
    *(undefined4 *)(puVar12 + 0x3e) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x3d) = (int)puVar14;
    *(int *)(puVar12 + 0x3e) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 500) = 0x1000007ef;
    *(undefined4 *)(puVar12 + 0x40) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x3f) = (int)puVar14;
    *(int *)(puVar12 + 0x40) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x204) = 0x1000007ef;
    *(undefined4 *)(puVar12 + 0x42) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x41) = (int)puVar14;
    *(int *)(puVar12 + 0x42) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x244) = 0x10000076f;
    *(undefined4 *)(puVar12 + 0x4a) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x49) = (int)puVar14;
    *(int *)(puVar12 + 0x4a) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x254) = 0x10000076f;
    *(undefined4 *)(puVar12 + 0x4c) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x4b) = (int)puVar14;
    *(int *)(puVar12 + 0x4c) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x264) = 0x10000076f;
    *(undefined4 *)(puVar12 + 0x4e) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x4d) = (int)puVar14;
    *(int *)(puVar12 + 0x4e) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x404) = 0x1000007ef;
    *(undefined4 *)(puVar12 + 0x82) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x81) = (int)puVar14;
    *(int *)(puVar12 + 0x82) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x424) = 0x1000007ef;
    *(undefined4 *)(puVar12 + 0x86) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x85) = (int)puVar14;
    *(int *)(puVar12 + 0x86) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x444) = 0x1000007ef;
    *(undefined4 *)(puVar12 + 0x8a) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x89) = (int)puVar14;
    *(int *)(puVar12 + 0x8a) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x274) = 0x100000364;
    puVar12[0x50] = 0x36400000001;
    *(undefined4 *)(puVar12 + 0x51) = 1;
    puVar12[0x52] = 0x36400000001;
    *(undefined4 *)(puVar12 + 0x53) = 1;
    *(undefined4 *)(puVar12 + 0x61) = 1;
    puVar12[0x62] = 0x36400000001;
    *(undefined4 *)(puVar12 + 99) = 1;
    puVar12[100] = 0x36400000001;
    *(undefined4 *)(puVar12 + 0x65) = 1;
    puVar12[0x54] = 0x36400000001;
    *(undefined4 *)(puVar12 + 0x55) = 1;
    puVar12[0x56] = 0x36400000001;
    *(undefined4 *)(puVar12 + 0x57) = 1;
    puVar12[0x58] = 0x36400000001;
    *(undefined4 *)(puVar12 + 0x59) = 1;
    puVar12[0x66] = 0x36400000001;
    *(undefined4 *)(puVar12 + 0x67) = 1;
    puVar12[0x68] = 0x36400000001;
    *(undefined4 *)(puVar12 + 0x69) = 1;
    puVar12[0x6a] = 0x36400000001;
    *(undefined4 *)(puVar12 + 0x6b) = 1;
    puVar12[0x5a] = 0x36400000001;
    *(undefined4 *)(puVar12 + 0x5b) = 1;
    puVar12[0x5c] = 0x36400000001;
    *(undefined4 *)(puVar12 + 0x5d) = 1;
    puVar12[0x5e] = 0x36400000001;
    *(undefined4 *)(puVar12 + 0x5f) = 1;
    puVar12[0x60] = 0x36400000001;
    puVar12[0x6c] = 0x36400000001;
    *(undefined4 *)(puVar12 + 0x6d) = 1;
    puVar12[0x6e] = 0x36400000001;
    *(undefined4 *)(puVar12 + 0x6f) = 1;
    puVar12[0x70] = 0x36400000001;
    *(undefined4 *)(puVar12 + 0x71) = 1;
    *(undefined4 *)(puVar12 + 0x72) = 1;
    *(undefined8 *)((long)puVar12 + 0x434) = 0x100000364;
    *(undefined4 *)(puVar12 + 0x88) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x87) = (int)puVar14;
    *(int *)(puVar12 + 0x88) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x394) = 0x1000007ef;
    *(undefined4 *)(puVar12 + 0x74) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x73) = (int)puVar14;
    *(int *)(puVar12 + 0x74) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x3a4) = 0x1000007ef;
    *(undefined4 *)(puVar12 + 0x76) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x75) = (int)puVar14;
    *(int *)(puVar12 + 0x76) = (int)puVar14;
    *(undefined8 *)((long)puVar12 + 0x3b4) = 0x1000007ef;
    *(undefined4 *)(puVar12 + 0x78) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x77) = (int)puVar14;
    *(int *)(puVar12 + 0x78) = (int)puVar14;
    iVar10 = (int)puVar12[0x11b];
    func_0x00010c263380();
    uVar25 = 8;
    if (iVar10 == 0) {
      uVar25 = 0;
    }
    uVar27 = 5;
    uVar5 = uVar25 | 5;
    if ((param_2 & 0x10000) == 0) {
      uVar27 = 1;
    }
    uVar25 = uVar25 | uVar27;
    if ((param_2 & 0x101) != 0) {
      uVar5 = 0xf;
      uVar25 = 0xf;
    }
    func_0x000109fdc584(puVar20,0x23,uVar5,puVar1);
    func_0x000109fdc584(puVar20,0x24,uVar25,puVar1);
    func_0x000109fdc584(puVar20,0x25,uVar25,puVar1);
    *(undefined8 *)((long)puVar12 + 0x414) = 0x1000007ef;
    *(undefined4 *)(puVar12 + 0x84) = 1;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    *(int *)(puVar12 + 0x83) = (int)puVar14;
    *(int *)(puVar12 + 0x84) = (int)puVar14;
    *(undefined4 *)((long)puVar12 + 0x454) = 0x33;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    uVar11 = SUB84(puVar14,0);
    *(undefined4 *)(puVar12 + 0x8b) = uVar11;
    *(undefined4 *)((long)puVar12 + 0x45c) = uVar11;
    *(undefined4 *)(puVar12 + 0x8c) = uVar11;
    *(undefined4 *)((long)puVar12 + 0x464) = 0x30;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    uVar11 = SUB84(puVar14,0);
    *(undefined4 *)(puVar12 + 0x8d) = uVar11;
    *(undefined4 *)((long)puVar12 + 0x46c) = uVar11;
    *(undefined4 *)(puVar12 + 0x8e) = uVar11;
    *(undefined4 *)((long)puVar12 + 0x484) = 0x30;
    puVar14 = puVar1;
    func_0x000109fdc5f0();
    uVar11 = SUB84(puVar14,0);
    *(undefined4 *)(puVar12 + 0x91) = uVar11;
    *(undefined4 *)((long)puVar12 + 0x48c) = uVar11;
    *(undefined4 *)(puVar12 + 0x92) = uVar11;
    if ((uVar30 >> 8 & 1) != 0) {
      *(undefined8 *)((long)puVar12 + 0x494) = 0x100000323;
      puVar12[0x94] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0x95) = 1;
      puVar12[0x96] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0x97) = 1;
      puVar12[0x98] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0x99) = 1;
      puVar12[0x9a] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0x9b) = 1;
      puVar12[0x9c] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0x9d) = 1;
      puVar12[0x9e] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0x9f) = 1;
      *(undefined4 *)(puVar12 + 0xa0) = 1;
    }
    iVar10 = 2;
    func_0x000107c31924(2,0x10,4,0);
    if (iVar10 == 0) {
      if (uVar13 != 0) goto LAB_109fd8854;
    }
    else {
      if (uVar13 == 0) {
        uVar13 = *puVar1;
        func_0x00010c263420();
        if ((uVar13 & 1) == 0) goto LAB_109fd888c;
      }
LAB_109fd8854:
      *(undefined4 *)(puVar12 + 0xa3) = 1;
      *(undefined8 *)((long)puVar12 + 0x504) = 0x100000323;
      puVar12[0xa2] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xa7) = 1;
      *(undefined4 *)(puVar12 + 0xa8) = 1;
      puVar12[0xa4] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xa5) = 1;
      puVar12[0xa6] = 0x32300000001;
    }
LAB_109fd888c:
    if ((uVar30 >> 8 & 1) != 0) {
      *(undefined8 *)((long)puVar12 + 0x544) = 0x100000323;
      puVar12[0xaa] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xab) = 1;
      puVar12[0xac] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xad) = 1;
      puVar12[0xae] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xaf) = 1;
      puVar12[0xb0] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xb1) = 1;
      puVar12[0xb2] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xb3) = 1;
      puVar12[0xb4] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xb5) = 1;
      puVar12[0xb6] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xb7) = 1;
      puVar12[0xb8] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xb9) = 1;
      puVar12[0xba] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xbb) = 1;
      puVar12[0xbc] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xbd) = 1;
      puVar12[0xbe] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xbf) = 1;
      puVar12[0xc0] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xc1) = 1;
      puVar12[0xc2] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xc3) = 1;
      puVar12[0xc4] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xc5) = 1;
      puVar12[0xc6] = 0x32300000001;
      *(undefined4 *)(puVar12 + 199) = 1;
      puVar12[200] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xc9) = 1;
      puVar12[0xca] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xcb) = 1;
      puVar12[0xcc] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xcd) = 1;
      puVar12[0xce] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xcf) = 1;
      puVar12[0xd0] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xd1) = 1;
      puVar12[0xd2] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xd3) = 1;
      puVar12[0xd4] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xd5) = 1;
      puVar12[0xd6] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xd7) = 1;
      puVar12[0xd8] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xd9) = 1;
      puVar12[0xda] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xdb) = 1;
      puVar12[0xdc] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xdd) = 1;
      puVar12[0xde] = 0x32300000001;
      *(undefined4 *)(puVar12 + 0xdf) = 1;
      *(undefined4 *)(puVar12 + 0xe0) = 1;
    }
    if (*(char *)((long)puVar12 + 0x42) == '\x01') {
      *(undefined8 *)((long)puVar12 + 0x3fc) = 0x100000001;
      *(undefined8 *)((long)puVar12 + 0x3f4) = 0x100000043;
    }
    uVar31 = *puVar1;
    _objc_retain(uVar31);
    uVar19 = uVar31;
    func_0x00010bf531a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar19;
    func_0x00010bf52a60();
    lVar15 = lRam0000000000000000;
    while (uVar13 != 0) {
      uVar29 = 0;
      do {
        if (lRam0000000000000000 != lVar15) {
          _objc_enumerationMutation(uVar19);
        }
        uVar32 = *(ulong *)(uVar29 * 8);
        uVar16 = uVar32;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar16;
        func_0x00010c0720c0();
        _objc_release(uVar16);
        if ((uVar17 & 1) != 0) {
          _objc_retain(uVar32);
          _objc_release(uVar19);
          if ((uVar32 == 0) || (uVar13 = uVar31, func_0x00010c263600(), (int)uVar13 == 0)) {
            uStack_170 = 0;
            uVar33 = 0;
          }
          else {
            _objc_retain(uVar32);
            _objc_retain(uVar31);
            ppuStack_100 = (undefined **)0x0;
            func_0x00010c1498c0(uVar31);
            do {
              func_0x00010c1498c0(uVar31);
            } while ((ulong)-(long)ppuStack_100 < 1000000);
            _objc_release(uVar31);
            uVar13 = uVar31;
            func_0x00010c263600();
            uStack_170 = uVar32;
            if (((int)uVar13 == 0) || (uVar13 = uVar31, func_0x00010c263600(), (int)uVar13 == 0)) {
              uVar33 = 0;
            }
            else {
              uVar13 = uVar31;
              func_0x00010c263600();
              uVar33 = (undefined1)uVar13;
            }
          }
          goto LAB_109fd8b98;
        }
        uVar29 = uVar29 + 1;
      } while (uVar13 != uVar29);
      uVar13 = uVar19;
      func_0x00010bf52a60();
    }
    _objc_release(uVar19);
    uStack_170 = 0;
    uVar33 = 0;
    uVar32 = 0;
LAB_109fd8b98:
    _objc_release(uVar32);
    _objc_release(uVar31);
    _objc_retain(uStack_170);
    uVar18 = puVar12[0x11c];
    puVar12[0x11c] = uStack_170;
    _objc_release(uVar18);
    puVar12[0x11d] = 0x3ff0000000000000;
    *(undefined1 *)(puVar12 + 0x11e) = uVar33;
    *(undefined4 *)(puVar12 + 0x32) = 1;
    *(undefined2 *)((long)puVar12 + 0x174) = 0;
    *(undefined8 *)((long)puVar12 + 0x16c) = 0;
    puVar12[0x2f] = 0;
    *(undefined2 *)(puVar12 + 0x30) = 0;
    *(undefined2 *)((long)puVar12 + 0x18c) = 0;
    *(undefined8 *)((long)puVar12 + 0x184) = 0;
    puVar12[0x2c] = 0x100000007;
    *(bool *)(puVar12 + 0x2d) = puVar12[0x11c] != 0;
    *(undefined1 *)((long)puVar12 + 0x169) = uVar33;
    *(undefined4 *)(puVar12 + 0xe7) = 0;
    *(undefined2 *)((long)puVar12 + 0x72c) = 0x100;
    puVar12[0xe6] = 0x200000000;
    func_0x00010bfddc40(puVar12[0x11b]);
    puVar12[0xf7] = 0x300000000;
    puVar12[0xf4] = 0;
    puVar12[0xf3] = 0;
    puVar12[0xf6] = 0;
    puVar12[0xf5] = 0;
    puVar12[0xf0] = 0;
    puVar12[0xef] = 0;
    puVar12[0xf2] = 0;
    puVar12[0xf1] = 0;
    puVar12[0xec] = 0;
    puVar12[0xeb] = 0;
    puVar12[0xee] = 0;
    puVar12[0xed] = 0;
    puVar12[0xea] = 0;
    puVar12[0xe9] = 0;
    *(undefined4 *)((long)puVar12 + 0x73c) = 1;
    puVar12[0xe8] = 0x60000000e;
    uVar18 = puVar12[0x11b];
    func_0x00010c0d4f60(uVar18);
    _objc_retainAutoreleasedReturnValue();
    FUN_109fe5184(&ppuStack_100);
    if (*(char *)((long)puVar12 + 0x2f) < '\0') {
      __ZdlPv(puVar12[3]);
    }
    puVar12[4] = puStack_f8;
    puVar12[3] = ppuStack_100;
    puVar12[5] = CONCAT17(uStack_e9,uStack_f0);
    uStack_e9 = 0;
    ppuStack_100 = (undefined **)((ulong)ppuStack_100 & 0xffffffffffffff00);
    _objc_release(uVar18);
    FUN_109fce9b0(puVar20);
    func_0x00010924be68(puVar12 + 0x113,4);
    lVar15 = 0;
    do {
      func_0x00010924befc(puVar12[0x113] + lVar15 * 0x18,
                          *(undefined4 *)((long)puVar12 + lVar15 * 0xc + 0x164));
      if (*(int *)((long)puVar12 + lVar15 * 0xc + 0x164) != 0) {
        uVar13 = 0;
        do {
          if ((bRam00000001137e92d0 & 1) == 0) {
            iVar10 = 0x137e92d0;
            ___cxa_guard_acquire();
            if (iVar10 != 0) {
              ___cxa_guard_release(0x1137e92d0);
            }
          }
          __ZNSt3__15mutex4lockEv(0x1132ff580);
          uVar19 = *puVar1;
          func_0x00010c0d8720();
          __ZNSt3__15mutex6unlockEv(0x1132ff580);
          puVar20 = (undefined8 *)0x38;
          __Znwm();
          puVar20[2] = 0;
          puVar20[3] = puVar12;
          *(undefined4 *)(puVar20 + 4) = 4;
          *puVar20 = &PTR_FUN_110b98998;
          puVar20[1] = 0;
          _objc_retain(uVar19);
          puVar20[5] = uVar19;
          puVar20[6] = 0;
          lVar26 = *(long *)(puVar12[0x113] + lVar15 * 0x18);
          plVar21 = *(long **)(lVar26 + uVar13 * 8);
          *(undefined8 **)(lVar26 + uVar13 * 8) = puVar20;
          if (plVar21 != (long *)0x0) {
            (**(code **)(*plVar21 + 8))();
          }
          _objc_release(uVar19);
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(uint *)((long)puVar12 + lVar15 * 0xc + 0x164));
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 4);
    lVar26 = 0x80;
    __Znwm();
    ppuStack_100 = &PTR_FUN_110b98f20;
    lVar15 = lVar26;
    puStack_f8 = puVar12;
    pppuStack_e8 = &ppuStack_100;
    FUN_109fcbeb0();
    *(undefined8 **)(lVar15 + 0x20) = puVar12 + 0x102;
    *(undefined8 *)(lVar15 + 0x28) = 0x32aaaba7;
    *(undefined8 *)(lVar15 + 0x38) = 0;
    *(undefined8 *)(lVar15 + 0x30) = 0;
    *(undefined8 *)(lVar15 + 0x48) = 0;
    *(undefined8 *)(lVar15 + 0x40) = 0;
    *(undefined8 *)(lVar15 + 0x58) = 0;
    *(undefined8 *)(lVar15 + 0x50) = 0;
    *(undefined8 *)(lVar15 + 0x68) = 0;
    *(undefined8 *)(lVar15 + 0x60) = 0;
    *(undefined8 *)(lVar15 + 0x78) = 0;
    *(undefined8 *)(lVar15 + 0x70) = 0;
    if (pppuStack_e8 == &ppuStack_100) {
      lVar15 = 0x20;
LAB_109fd8e54:
      (**(code **)((long)*pppuStack_e8 + lVar15))();
    }
    else if (pppuStack_e8 != (undefined ***)0x0) {
      lVar15 = 0x28;
      goto LAB_109fd8e54;
    }
    func_0x00010924c278(puVar12 + 0x112,lVar26);
    uVar18 = 0xd8;
    __Znwm(0xd8);
    ppuStack_100 = &PTR_DAT_110b99000;
    puStack_f8 = puVar12;
    pppuStack_e8 = &ppuStack_100;
    FUN_109fccda0();
    if (pppuStack_e8 == &ppuStack_100) {
      lVar15 = 0x20;
LAB_109fd8eb8:
      (**(code **)((long)*pppuStack_e8 + lVar15))();
    }
    else if (pppuStack_e8 != (undefined ***)0x0) {
      lVar15 = 0x28;
      goto LAB_109fd8eb8;
    }
    func_0x00010924c250(puVar12 + 0x111,uVar18);
    _objc_release(uStack_170);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return puVar12;
    }
    ___stack_chk_fail();
  }
  else {
    uVar13 = *puVar1;
    func_0x00010bf09e00();
    if (uVar13 == 1) goto LAB_109fd8154;
  }
  puVar22 = &UNK_10f62fa2e;
LAB_109fd8f54:
  func_0x000109243bf8(puVar22);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109fd8f5c);
  (*pcVar8)();
}



/* Entry: 109fd90a8; end: 109fd924f;  */

undefined1  [16] FUN_109fd90a8(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  
  uVar18 = *param_1;
  func_0x00010c263700(uVar18,param_2,0x3e9);
  iVar9 = (int)*param_1;
  func_0x00010c263700();
  iVar10 = (int)*param_1;
  func_0x00010c263700();
  iVar11 = (int)*param_1;
  func_0x00010c263700();
  iVar12 = (int)*param_1;
  func_0x00010c263700();
  iVar13 = (int)*param_1;
  func_0x00010c263700();
  iVar14 = (int)*param_1;
  func_0x00010c263700();
  iVar15 = (int)*param_1;
  func_0x00010c263700();
  uVar19 = *param_1;
  func_0x00010c263700(uVar19);
  iVar16 = (int)*param_1;
  func_0x00010c263700();
  iVar17 = 2;
  func_0x000107c31924(2,0x10,0,0);
  if (iVar17 == 0) {
    uVar20 = 0;
  }
  else {
    iVar17 = (int)*param_1;
    func_0x00010c263700();
    uVar20 = 0x10000;
    if (iVar17 == 0) {
      uVar20 = 0;
    }
  }
  uVar1 = 0x100000000000000;
  if (iVar15 == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x1000000000000;
  if (iVar14 == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x10000000000;
  if (iVar13 == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x100000000;
  if (iVar12 == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x1000000;
  if (iVar11 == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x10000;
  if (iVar10 == 0) {
    uVar6 = 0;
  }
  uVar7 = 0x100;
  if (iVar9 == 0) {
    uVar7 = 0;
  }
  uVar8 = 0x100;
  if (iVar16 == 0) {
    uVar8 = 0;
  }
  auVar21._0_8_ = uVar7 | uVar18 & 0xffffffff | uVar6 | uVar5 | uVar4 | uVar3 | uVar2 | uVar1;
  auVar21._8_8_ = uVar8 | uVar19 & 0xffffffff | uVar20;
  return auVar21;
}



/* Entry: 109fd9250; end: 109fd92e3;  */

void FUN_109fd9250(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + 0x8a0);
  lVar1 = *(long *)(param_1 + 0x898);
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x18;
    lStack_38 = lVar2;
    func_0x00010924f584(&lStack_38);
  }
  *(long *)(param_1 + 0x8a0) = lVar1;
  func_0x00010924c250(param_1 + 0x888,0);
  func_0x00010924c278(param_1 + 0x890,0);
  FUN_109fdc650(param_1 + 0x938);
  __ZNSt3__15mutexD1Ev(param_1 + 0x8f8);
  _objc_release(*(undefined8 *)(param_1 + 0x8e0));
  _objc_release(*(undefined8 *)(param_1 + 0x8d8));
  func_0x00010922e6fc(param_1);
  return;
}



/* Entry: 109fd92e4; end: 109fd92e7;  */

void FUN_109fd92e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + 0x8a0);
  lVar1 = *(long *)(param_1 + 0x898);
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x18;
    lStack_38 = lVar2;
    func_0x00010924f584(&lStack_38);
  }
  *(long *)(param_1 + 0x8a0) = lVar1;
  func_0x00010924c250(param_1 + 0x888,0);
  func_0x00010924c278(param_1 + 0x890,0);
  FUN_109fdc650(param_1 + 0x938);
  __ZNSt3__15mutexD1Ev(param_1 + 0x8f8);
  _objc_release(*(undefined8 *)(param_1 + 0x8e0));
  _objc_release(*(undefined8 *)(param_1 + 0x8d8));
  func_0x00010922e6fc(param_1);
  return;
}



/* Entry: 109fd92e8; end: 109fd92fb;  */

void FUN_109fd92e8(void)

{
  FUN_109fd9250();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fd92fc; end: 109fd953b;  */

void FUN_109fd92fc(long *param_1,long param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  if ((*param_3 == 0) || (*(long *)(param_2 + 0x8e0) == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  lVar3 = 0x38;
  __Znwm();
  FUN_109fe0124();
  func_0x0001092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = lVar3;
  plVar4 = (long *)0x38;
  __Znwm();
  plVar5 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar4 = (long)&PTR_FUN_110b990d0;
  plVar4[3] = lVar3;
  plVar4[5] = (long)plVar5;
  plVar4[4] = lVar6;
  plVar4[6] = 0xffffffff;
  param_1[1] = (long)plVar4;
  if (*(long *)(lVar3 + 0x10) == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar3 + 8) = lVar3;
    *(long **)(lVar3 + 0x10) = plVar4;
  }
  else {
    if (*(long *)(*(long *)(lVar3 + 0x10) + 8) != -1) goto LAB_109fd9440;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar3 + 8) = lVar3;
    *(long **)(lVar3 + 0x10) = plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_109fd9440:
  plVar5 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar4 = plStack_58 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)param_1[1];
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5,&PTR_DAT_110b99110);
  }
  param_2 = param_2 + 0x820;
  FUN_109fcbf14(param_2,*param_1);
  *(int *)(plVar5 + 2) = (int)param_2;
  return;
}



/* Entry: 109fd953c; end: 109fd97d3;  */

/* WARNING: Removing unreachable block (ram,0x000109fd96d4) */
/* WARNING: Removing unreachable block (ram,0x000109fd96d8) */
/* WARNING: Removing unreachable block (ram,0x000109fd96e0) */
/* WARNING: Removing unreachable block (ram,0x000109fd96e8) */
/* WARNING: Removing unreachable block (ram,0x000109fd96ec) */

void FUN_109fd953c(long *param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lStack_60;
  long *plStack_58;
  
  if ((*param_3 == 0) || (*(long *)(*param_3 + 0x18) != param_2)) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x00010922d97c(&lStack_60,param_2);
  if (lStack_60 == 0) {
LAB_109fd9728:
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_109fd9744;
  }
  lVar7 = *param_3;
  lVar6 = lVar7 + 0x48;
  plVar4 = param_3;
  FUN_109fdcdc8();
  uVar5 = SUB84(plVar4,0);
  if (lVar6 == 0) {
    FUN_109fcd53c(*(undefined8 *)(*(long *)(lVar7 + 0x40) + 0x888));
    lVar6 = lVar7 + 0x48;
    FUN_109fdcdc8();
    uVar5 = SUB84(param_3,0);
    if (lVar6 == 0) goto LAB_109fd9728;
  }
  plVar4 = plStack_58;
  lVar7 = lStack_60;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *param_1 = lVar6;
  plVar3 = (long *)0x38;
  __Znwm();
  plVar8 = plVar3 + 1;
  *plVar8 = 0;
  *plVar3 = (long)&PTR_FUN_110b99130;
  plVar3[2] = 0;
  plVar3[3] = lVar6;
  plVar3[4] = lVar7;
  plVar3[5] = (long)plVar4;
  plVar3[6] = CONCAT44(0xffffffff,uVar5);
  param_1[1] = (long)plVar3;
  if (*(long *)(lVar6 + 0x10) == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar6 + 8) = lVar6;
    *(long **)(lVar6 + 0x10) = plVar3;
LAB_109fd96a0:
    do {
      lVar6 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  else if (*(long *)(*(long *)(lVar6 + 0x10) + 8) == -1) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar6 + 8) = lVar6;
    *(long **)(lVar6 + 0x10) = plVar3;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    goto LAB_109fd96a0;
  }
  plVar4 = (long *)param_1[1];
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x18))(plVar4,&PTR_DAT_110b99170);
  }
  param_2 = param_2 + 0x820;
  FUN_109fcbf14(param_2,*param_1);
  *(int *)((long)plVar4 + 0x14) = (int)param_2;
LAB_109fd9744:
  plVar4 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar3 = plStack_58 + 1;
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 109fd97d4; end: 109fd9dbb;  */

void FUN_109fd97d4(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  uint *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *extraout_x8;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *plVar20;
  undefined8 *unaff_x24;
  uint *puVar21;
  undefined8 *puVar22;
  long lStack_150;
  long *plStack_148;
  undefined4 uStack_140;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  uint uStack_b4;
  undefined8 *puStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined **ppuStack_88;
  long *plStack_80;
  undefined ***pppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_3 == 0) {
LAB_109fd9830:
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar4 = *(uint *)(param_3 + 1);
    puVar21 = (uint *)(ulong)uVar4;
    unaff_x20 = param_2;
    unaff_x22 = param_3;
    if ((*(long **)(*param_3 + 0x18) != param_2 || uVar4 == 0) || 7 < *(uint *)(param_3 + 2))
    goto LAB_109fd9830;
    puVar8 = (undefined8 *)0xd8;
    plVar10 = param_3;
    puStack_e0 = param_1;
    __Znwm();
    ppuStack_88 = &PTR_DAT_110b99190;
    pppuStack_70 = &ppuStack_88;
    puVar8[2] = 0;
    puVar8[3] = param_2;
    *(undefined4 *)(puVar8 + 4) = 0x18;
    lVar14 = *param_3;
    puVar8[6] = param_3[1];
    puVar8[5] = lVar14;
    lVar14 = param_3[2];
    *puVar8 = &PTR_FUN_110b99220;
    puVar8[1] = 0;
    puVar8[7] = lVar14;
    puVar8[8] = param_2;
    puVar8[9] = param_2 + 0x102;
    puStack_e8 = puVar8 + 10;
    *puStack_e8 = 0x32aaaba7;
    plVar1 = puVar8 + 0x12;
    unaff_x24 = puVar8 + 0x15;
    puVar8[0x16] = 0;
    *unaff_x24 = 0;
    puVar8[0xc] = 0;
    puVar8[0xb] = 0;
    puVar8[0xe] = 0;
    puVar8[0xd] = 0;
    puVar8[0x10] = 0;
    puVar8[0xf] = 0;
    puVar8[0x12] = 0;
    puVar8[0x11] = 0;
    puVar8[0x14] = 0;
    puVar8[0x13] = 0;
    puVar8[0x18] = 0;
    puVar8[0x17] = 0;
    puVar8[0x1a] = 0;
    puVar8[0x19] = 0;
    puVar9 = puVar21;
    plStack_d8 = param_2;
    puStack_d0 = unaff_x24;
    plStack_90 = plVar1;
    plStack_80 = param_2;
    FUN_109fdd2d0();
    puStack_b0 = (undefined8 *)puVar8[0x12];
    puVar3 = (undefined8 *)puVar8[0x13];
    puVar22 = (undefined8 *)((long)puVar9 + ((long)puStack_b0 - (long)puVar3));
    puVar13 = puStack_b0;
    puVar15 = puVar22;
    if (puVar3 != puStack_b0) {
      do {
        uVar18 = *puVar13;
        *puVar13 = 0;
        *puVar15 = uVar18;
        puVar15[1] = puVar13[1];
        puVar13 = puVar13 + 2;
        puVar15 = puVar15 + 2;
      } while (puVar13 != puVar3);
      do {
        FUN_109fdd350(puStack_b0);
        puStack_b0 = puStack_b0 + 2;
      } while (puStack_b0 != puVar3);
      puStack_b0 = (undefined8 *)*plVar1;
    }
    puVar8[0x12] = puVar22;
    puVar8[0x13] = puVar9;
    uStack_98 = puVar8[0x14];
    puVar8[0x14] = puVar9 + (long)plVar10 * 4;
    plStack_a8 = puStack_b0;
    puStack_a0 = puStack_b0;
    func_0x000109fdd304(&puStack_b0);
    func_0x0001056c5718(unaff_x24,puVar21);
    func_0x0001056c5718(puVar8 + 0x18);
    uStack_b4 = 0;
    do {
      if (pppuStack_70 == (undefined ***)0x0) {
        func_0x000104c501e4();
LAB_109fd9ccc:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x109fd9cd0);
        (*pcVar7)();
      }
      (*(code *)(*pppuStack_70)[6])(&lStack_c8);
      lVar14 = lStack_c8;
      lStack_c0 = -1;
      plVar10 = (long *)puVar8[0x13];
      if (plVar10 < (long *)puVar8[0x14]) {
        lStack_c8 = 0;
        *plVar10 = lVar14;
        plVar10[1] = -1;
        plVar10 = plVar10 + 2;
      }
      else {
        lVar14 = (long)plVar10 - *plVar1;
        uVar2 = (lVar14 >> 4) + 1;
        if (uVar2 >> 0x3c != 0) {
          FUN_109fdd2bc();
          goto LAB_109fd9ccc;
        }
        uVar16 = (long)puVar8[0x14] - *plVar1;
        uVar19 = (long)uVar16 >> 3;
        if (uVar19 <= uVar2) {
          uVar19 = uVar2;
        }
        if (0x7fffffffffffffef < uVar16) {
          uVar19 = 0xfffffffffffffff;
        }
        plStack_90 = plVar1;
        FUN_109fdd2d0();
        lVar11 = lStack_c8;
        puVar22 = (undefined8 *)puVar8[0x12];
        puVar15 = (undefined8 *)puVar8[0x13];
        plVar10 = (long *)(uVar19 + lVar14);
        lStack_c8 = 0;
        *plVar10 = lVar11;
        plVar10[1] = lStack_c0;
        puVar3 = (undefined8 *)((long)plVar10 + ((long)puVar22 - (long)puVar15));
        puVar13 = puVar22;
        puVar17 = puVar3;
        if ((long)puVar22 - (long)puVar15 != 0) {
          do {
            uVar18 = *puVar13;
            *puVar13 = 0;
            *puVar17 = uVar18;
            puVar17[1] = puVar13[1];
            puVar13 = puVar13 + 2;
            puVar17 = puVar17 + 2;
          } while (puVar13 != puVar15);
          do {
            FUN_109fdd350(puVar22);
            puVar22 = puVar22 + 2;
          } while (puVar22 != puVar15);
          puVar22 = (undefined8 *)*plVar1;
        }
        plVar10 = plVar10 + 2;
        puVar8[0x12] = puVar3;
        puVar8[0x13] = plVar10;
        uStack_98 = puVar8[0x14];
        puVar8[0x14] = uVar19 + (long)puVar21 * 0x10;
        puStack_b0 = puVar22;
        plStack_a8 = puVar22;
        puStack_a0 = puVar22;
        func_0x000109fdd304(&puStack_b0);
        unaff_x24 = puStack_d0;
      }
      lVar14 = lStack_c8;
      puVar8[0x13] = plVar10;
      lStack_c8 = 0;
      if (lVar14 != 0) {
        FUN_109fd2a4c();
        __ZdlPv();
      }
      puVar21 = &uStack_b4;
      func_0x000109231afc(unaff_x24);
      uStack_b4 = uStack_b4 + 1;
    } while (uStack_b4 < uVar4);
    func_0x0001092315a8(&puStack_b0,plStack_d8 + 1);
    unaff_x23 = puStack_e0;
    puStack_a0 = (undefined8 *)CONCAT44(puStack_a0._4_4_,0xffffffff);
    *puStack_e0 = puVar8;
    unaff_x22 = (long *)0x38;
    __Znwm();
    plVar1 = plStack_a8;
    puVar13 = puStack_b0;
    unaff_x20 = unaff_x22 + 1;
    unaff_x22[2] = 0;
    *unaff_x20 = 0;
    puStack_b0 = (undefined8 *)0x0;
    plStack_a8 = (long *)0x0;
    *unaff_x22 = (long)&PTR_FUN_110b99280;
    unaff_x22[3] = (long)puVar8;
    unaff_x22[5] = (long)plVar1;
    unaff_x22[4] = (long)puVar13;
    unaff_x22[6] = 0xffffffff;
    unaff_x23[1] = unaff_x22;
    if (puVar8[2] == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(unaff_x20,0x10);
        if (bVar6) {
          *unaff_x20 = *unaff_x20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = unaff_x22 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar8[1] = puVar8;
      puVar8[2] = unaff_x22;
LAB_109fd9b9c:
      do {
        lVar14 = *unaff_x20;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(unaff_x20,0x10);
        if (bVar6) {
          *unaff_x20 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*unaff_x22 + 0x10))(unaff_x22);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
      }
    }
    else if (*(long *)(puVar8[2] + 8) == -1) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(unaff_x20,0x10);
        if (bVar6) {
          *unaff_x20 = *unaff_x20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = unaff_x22 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar8[1] = puVar8;
      puVar8[2] = unaff_x22;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      goto LAB_109fd9b9c;
    }
    unaff_x19 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar1 = plStack_a8 + 1;
      do {
        lVar14 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
      }
    }
    if (pppuStack_70 == &ppuStack_88) {
      lVar14 = 0x20;
LAB_109fd9c20:
      (**(code **)((long)*pppuStack_70 + lVar14))();
    }
    else if (pppuStack_70 != (undefined ***)0x0) {
      lVar14 = 0x28;
      goto LAB_109fd9c20;
    }
    param_2 = plStack_d8;
    func_0x000109231df0(plStack_d8,unaff_x23);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001092323ec(unaff_x23);
  plVar10 = param_2;
  __Unwind_Resume(param_2);
  pcStack_f8 = FUN_109fd9dbc;
  lVar11 = 0x70;
  puStack_130 = unaff_x24;
  puStack_128 = unaff_x23;
  plStack_120 = unaff_x22;
  plStack_118 = param_2;
  plStack_110 = unaff_x20;
  plStack_108 = unaff_x19;
  puStack_100 = &stack0xfffffffffffffff0;
  __Znwm();
  FUN_109fe2890();
  func_0x0001092315a8(&lStack_150,plVar10 + 1);
  uStack_140 = 0xffffffff;
  *extraout_x8 = lVar11;
  plVar12 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_148;
  lVar14 = lStack_150;
  plVar20 = plVar12 + 1;
  plVar12[2] = 0;
  *plVar20 = 0;
  lStack_150 = 0;
  plStack_148 = (long *)0x0;
  *plVar12 = (long)&PTR_FUN_110b992d0;
  plVar12[3] = lVar11;
  plVar12[5] = (long)plVar1;
  plVar12[4] = lVar14;
  plVar12[6] = 0xffffffff;
  extraout_x8[1] = (long)plVar12;
  if (*(long *)(lVar11 + 0x10) == 0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = *plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar1 = plVar12 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(long *)(lVar11 + 8) = lVar11;
    *(long **)(lVar11 + 0x10) = plVar12;
  }
  else {
    if (*(long *)(*(long *)(lVar11 + 0x10) + 8) != -1) goto LAB_109fd9eec;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = *plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar1 = plVar12 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(long *)(lVar11 + 8) = lVar11;
    *(long **)(lVar11 + 0x10) = plVar12;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar14 = *plVar20;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar6) {
      *plVar20 = lVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
  }
LAB_109fd9eec:
  plVar1 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar12 = plStack_148 + 1;
    do {
      lVar14 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  func_0x000109232444(plVar10,extraout_x8);
  return;
}



/* Entry: 109fd9dbc; end: 109fd9fb3;  */

void FUN_109fd9dbc(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  lVar4 = 0x70;
  __Znwm();
  FUN_109fe2890();
  func_0x0001092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = lVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110b992d0;
  plVar5[3] = lVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar6;
  plVar5[6] = 0xffffffff;
  param_1[1] = (long)plVar5;
  if (*(long *)(lVar4 + 0x10) == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
  }
  else {
    if (*(long *)(*(long *)(lVar4 + 0x10) + 8) != -1) goto LAB_109fd9eec;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_109fd9eec:
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  func_0x000109232444(param_2,param_1);
  return;
}



/* Entry: 109fd9fb4; end: 109fda1c7;  */

void FUN_109fd9fb4(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  if ((*param_4 != 0) && (plVar3 = *(long **)(*param_4 + 8), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x40))();
  }
  lVar4 = 0x88;
  __Znwm();
  FUN_109fe2bdc();
  func_0x0001092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = lVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar3 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110b99320;
  plVar5[3] = lVar4;
  plVar5[5] = (long)plVar3;
  plVar5[4] = lVar6;
  plVar5[6] = 0xffffffff;
  param_1[1] = (long)plVar5;
  if (*(long *)(lVar4 + 0x10) == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = plVar5 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
  }
  else {
    if (*(long *)(*(long *)(lVar4 + 0x10) + 8) != -1) goto LAB_109fda100;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = plVar5 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_109fda100:
  plVar3 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  func_0x0001092325ec(param_2,param_1);
  return;
}



/* Entry: 109fda1c8; end: 109fda347;  */

void FUN_109fda1c8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  puVar6 = (undefined8 *)0x80;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = param_2;
  *(undefined4 *)(puVar6 + 4) = 5;
  puVar6[5] = 0x32aaaba7;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  *puVar6 = &PTR_FUN_110b99780;
  puVar6[0xe] = 0;
  *(undefined4 *)(puVar6 + 0xf) = 0;
  func_0x0001092315a8(&uStack_50,param_2 + 8);
  uStack_40 = 0xffffffff;
  *param_1 = puVar6;
  puVar7 = (undefined8 *)0x38;
  __Znwm();
  plVar5 = plStack_48;
  uVar4 = uStack_50;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  puVar7[2] = 0;
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_110b99370;
  puVar7[3] = puVar6;
  puVar7[5] = plVar5;
  puVar7[4] = uVar4;
  puVar7[6] = 0xffffffff;
  param_1[1] = puVar7;
  FUN_109fdc974(param_1,puVar6 + 1,puVar6);
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x000109232794(param_2,param_1);
  return;
}



/* Entry: 109fda348; end: 109fda53f;  */

void FUN_109fda348(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  lVar4 = 0x50;
  __Znwm();
  FUN_109fd2774();
  func_0x0001092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = lVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110b993c0;
  plVar5[3] = lVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar6;
  plVar5[6] = 0xffffffff;
  param_1[1] = (long)plVar5;
  if (*(long *)(lVar4 + 0x10) == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
  }
  else {
    if (*(long *)(*(long *)(lVar4 + 0x10) + 8) != -1) goto LAB_109fda478;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_109fda478:
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  func_0x00010923293c(param_2,param_1);
  return;
}



/* Entry: 109fda540; end: 109fda62b;  */

void FUN_109fda540(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined4 uStack_38;
  
  FUN_109fcac90();
  uVar4 = 0xc0;
  __Znwm(0xc0);
  FUN_109fe44c0();
  func_0x0001092315a8(auStack_48,param_2 + 8);
  uStack_38 = 0xffffffff;
  FUN_109fdd944(param_1,uVar4,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  func_0x000109232ae4(param_2,param_1);
  return;
}



/* Entry: 109fda62c; end: 109fda727;  */

void FUN_109fda62c(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  long *plStack_50;
  undefined4 uStack_48;
  
  uVar4 = 0xc0;
  __Znwm(0xc0);
  FUN_109fe4240();
  func_0x0001092315a8(auStack_58,param_2 + 8);
  uStack_48 = 0xffffffff;
  FUN_109fdd944(param_1,uVar4,auStack_58);
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
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
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
    }
  }
  func_0x000109232ae4(param_2,param_1);
  return;
}



/* Entry: 109fda728; end: 109fda80f;  */

void FUN_109fda728(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined4 uStack_38;
  
  uVar4 = 0xc0;
  __Znwm(0xc0);
  FUN_109fe4850();
  func_0x0001092315a8(auStack_48,param_2 + 8);
  uStack_38 = 0xffffffff;
  FUN_109fdd944(param_1,uVar4,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  func_0x000109232ae4(param_2,param_1);
  return;
}



/* Entry: 109fda810; end: 109fda8f7;  */

void FUN_109fda810(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined4 uStack_38;
  
  uVar4 = 0xc0;
  __Znwm(0xc0);
  FUN_109fe404c();
  func_0x0001092315a8(auStack_48,param_2 + 8);
  uStack_38 = 0xffffffff;
  FUN_109fdd944(param_1,uVar4,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  func_0x000109232ae4(param_2,param_1);
  return;
}



/* Entry: 109fda8f8; end: 109fda9df;  */

void FUN_109fda8f8(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined4 uStack_38;
  
  uVar4 = 0x868;
  __Znwm(0x868);
  FUN_109fc97ec();
  func_0x0001092315a8(auStack_48,param_2 + 8);
  uStack_38 = 0xffffffff;
  func_0x000109232e8c(param_1,uVar4,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  func_0x000109232e2c(param_2,param_1);
  return;
}



/* Entry: 109fda9e0; end: 109fdabd7;  */

void FUN_109fda9e0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  lVar4 = 0x2a0;
  __Znwm();
  func_0x000109fdf1b4();
  func_0x0001092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = lVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110b99460;
  plVar5[3] = lVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar6;
  plVar5[6] = 0xffffffff;
  param_1[1] = (long)plVar5;
  if (*(long *)(lVar4 + 0x10) == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
  }
  else {
    if (*(long *)(*(long *)(lVar4 + 0x10) + 8) != -1) goto LAB_109fdab10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_109fdab10:
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  func_0x000109233178(param_2,param_1);
  return;
}



/* Entry: 109fdabd8; end: 109fdadcf;  */

void FUN_109fdabd8(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  lVar4 = 0x50;
  __Znwm();
  FUN_109fe2dbc();
  func_0x0001092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = lVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110b994b0;
  plVar5[3] = lVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar6;
  plVar5[6] = 0xffffffff;
  param_1[1] = (long)plVar5;
  if (*(long *)(lVar4 + 0x10) == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
  }
  else {
    if (*(long *)(*(long *)(lVar4 + 0x10) + 8) != -1) goto LAB_109fdad08;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_109fdad08:
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  func_0x000109233320(param_2,param_1);
  return;
}



/* Entry: 109fdadd0; end: 109fdafc7;  */

void FUN_109fdadd0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  lVar4 = 0x110;
  __Znwm();
  FUN_109fe3860();
  func_0x0001092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = lVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110b99500;
  plVar5[3] = lVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar6;
  plVar5[6] = 0xffffffff;
  param_1[1] = (long)plVar5;
  if (*(long *)(lVar4 + 0x10) == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
  }
  else {
    if (*(long *)(*(long *)(lVar4 + 0x10) + 8) != -1) goto LAB_109fdaf00;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_109fdaf00:
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  func_0x0001092334c8(param_2,param_1);
  return;
}



/* Entry: 109fdafc8; end: 109fdb127;  */

void FUN_109fdafc8(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  lVar6 = 0x210;
  __Znwm();
  func_0x00010922e254();
  func_0x0001092315a8(&uStack_50,param_2 + 8);
  uStack_40 = 0xffffffff;
  *param_1 = lVar6;
  puVar7 = (undefined8 *)0x38;
  __Znwm();
  plVar5 = plStack_48;
  uVar4 = uStack_50;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  puVar7[2] = 0;
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_110b99550;
  puVar7[3] = lVar6;
  puVar7[5] = plVar5;
  puVar7[4] = uVar4;
  puVar7[6] = 0xffffffff;
  param_1[1] = (long)puVar7;
  func_0x000109252038(param_1,lVar6 + 8,lVar6);
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x000109233670(param_2,param_1);
  return;
}



/* Entry: 109fdb128; end: 109fdb31f;  */

void FUN_109fdb128(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  lVar4 = 0x70;
  __Znwm();
  FUN_109fd57d0();
  func_0x0001092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = lVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110b995a0;
  plVar5[3] = lVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar6;
  plVar5[6] = 0xffffffff;
  param_1[1] = (long)plVar5;
  if (*(long *)(lVar4 + 0x10) == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
  }
  else {
    if (*(long *)(*(long *)(lVar4 + 0x10) + 8) != -1) goto LAB_109fdb258;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_109fdb258:
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  func_0x000109233818(param_2,param_1);
  return;
}



/* Entry: 109fdb320; end: 109fdb593;  */

void FUN_109fdb320(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  lVar3 = 0x338;
  __Znwm();
  FUN_109fd5dfc();
  func_0x0001092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  plVar4 = (long *)0x38;
  __Znwm();
  plVar6 = plStack_58;
  lVar5 = lStack_60;
  plVar7 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar4 = (long)&PTR_FUN_110b995f0;
  plVar4[3] = lVar3;
  plVar4[5] = (long)plVar6;
  plVar4[4] = lVar5;
  plVar4[6] = 0xffffffff;
  if (*(long *)(lVar3 + 0x10) == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar6 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar3 + 8) = lVar3;
    *(long **)(lVar3 + 0x10) = plVar4;
  }
  else {
    if (*(long *)(*(long *)(lVar3 + 0x10) + 8) != -1) goto LAB_109fdb450;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar6 = plVar4 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar3 + 8) = lVar3;
    *(long **)(lVar3 + 0x10) = plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar5 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_109fdb450:
  plVar6 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar7 = plStack_58 + 1;
    do {
      lVar5 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (plVar4 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = plVar4;
    (**(code **)(*plVar4 + 0x18))(plVar4,&PTR_DAT_110ae33d0);
  }
  param_2 = param_2 + 0x820;
  FUN_109fcbf14(param_2,lVar3);
  *(int *)(plVar6 + 2) = (int)param_2;
  if (*(long *)(lVar3 + 0x310) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    if (plVar4 != (long *)0x0) {
      plVar6 = plVar4 + 1;
      do {
        lVar5 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    *param_1 = lVar3;
    param_1[1] = (long)plVar4;
  }
  return;
}



/* Entry: 109fdb594; end: 109fdb67b;  */

void FUN_109fdb594(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined4 uStack_38;
  
  uVar4 = 0x98;
  __Znwm(0x98);
  FUN_109fcc6bc();
  func_0x0001092315a8(auStack_48,param_2 + 8);
  uStack_38 = 0xffffffff;
  func_0x000109233bc8(param_1,uVar4,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  func_0x000109233b68(param_2,param_1);
  return;
}



/* Entry: 109fdb67c; end: 109fdb873;  */

void FUN_109fdb67c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  lVar4 = 0x60;
  __Znwm();
  FUN_109fdf278();
  func_0x0001092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = lVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110b99640;
  plVar5[3] = lVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar6;
  plVar5[6] = 0xffffffff;
  param_1[1] = (long)plVar5;
  if (*(long *)(lVar4 + 0x10) == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
  }
  else {
    if (*(long *)(*(long *)(lVar4 + 0x10) + 8) != -1) goto LAB_109fdb7ac;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_109fdb7ac:
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  func_0x000109233eb4(param_2,param_1);
  return;
}



/* Entry: 109fdb874; end: 109fdbf4b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109fdb874(undefined8 *param_1,long param_2,byte *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined8 *******pppppppuVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined *puVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  undefined8 *******pppppppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  undefined8 ******ppppppuStack_110;
  long *plStack_108;
  long lStack_100;
  undefined8 *****pppppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 ******ppppppuStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte *pbStack_88;
  byte *pbStack_80;
  long alStack_78 [3];
  
  if ((((*(long *)(param_3 + 0x428) != 0) &&
       (ppppppuStack_c0 = *(undefined8 *******)(*(long *)(param_3 + 0x428) + 0x6d0),
       ppppppuStack_c0 <= (undefined8 *****)(ulong)*(uint *)(param_3 + 0x430))) &&
      ((*(byte *)(param_2 + 0x811) >> 2 & 1) != 0)) && (*(uint *)(param_2 + 0x818) < 6)) {
    func_0x000109231264(param_2 + 0x810,5,0x400,&UNK_10f55e1af,0x59,param_3 + 0x430,&ppppppuStack_c0
                       );
  }
  uVar3 = *(uint *)(param_3 + 0x2d4);
  uVar4 = *(uint *)(param_3 + 0x2d8);
  if (uVar4 - 1 < 0x40 && (uVar4 & uVar4 - 1) == 0) {
    uVar5 = *(uint *)(param_2 + 0x48);
    uVar10 = (ulong)uVar3;
    func_0x00010922e6d8();
    if (8 < uVar3) goto LAB_109fdb940;
    if (uVar3 != 0) {
      if (((uint)uVar10 & (uVar5 ^ 0xffffffff)) != 0) goto LAB_109fdb940;
      if (uVar4 == 1) {
        bVar9 = true;
      }
      else {
        bVar9 = (*(uint *)(param_2 + (ulong)uVar3 * 4 + 0x7d4) & uVar4) != 0;
      }
      goto LAB_109fdb944;
    }
    bVar9 = true;
  }
  else {
LAB_109fdb940:
    bVar9 = false;
LAB_109fdb944:
    if (uVar3 - 3 < 3) {
      uVar15 = 2;
      goto LAB_109fdb974;
    }
    if (uVar3 - 6 < 3) {
      uVar15 = 4;
      goto LAB_109fdb974;
    }
  }
  uVar15 = 1;
LAB_109fdb974:
  ppppppuStack_c0 = (undefined8 ******)CONCAT44(ppppppuStack_c0._4_4_,uVar15);
  if (uVar3 - 1 < 8) {
    uVar15 = *(undefined4 *)(&UNK_10e482198 + (ulong)(uVar3 - 1) * 4);
  }
  else {
    uVar15 = 1;
  }
  ppppppuStack_110 = (undefined8 ******)CONCAT44(ppppppuStack_110._4_4_,uVar15);
  pppppppuStack_128 = (undefined8 *******)CONCAT44(pppppppuStack_128._4_4_,uVar3);
  alStack_78[0] = CONCAT44(alStack_78[0]._4_4_,*(undefined4 *)(param_2 + 0x48));
  pbStack_80 = (byte *)CONCAT44(pbStack_80._4_4_,*(undefined4 *)(param_3 + 0x2d8));
  if (bVar9) {
    if ((*(long *)(param_3 + 0x4d0) != 0) && ((*param_3 >> 2 & 1) != 0)) {
      alStack_78[0] = 0;
      pbVar12 = param_3 + 8;
      FUN_109fe7b88(pbVar12,*(undefined8 *)(param_3 + 0x20),0);
      _objc_retainAutoreleasedReturnValue();
      pbVar13 = param_3 + 8;
      pbStack_80 = pbVar12;
      FUN_109fe7b88(pbVar13,*(undefined8 *)(param_3 + 0x20),1);
      _objc_retainAutoreleasedReturnValue();
      pbVar12 = param_3;
      pbStack_88 = pbVar13;
      FUN_109fe7110(param_3,&pbStack_80,&pbStack_88);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c170200(pbVar12);
      _objc_release(puVar14);
      uStack_98 = 0;
      uStack_a0 = 0;
      plStack_b8 = (long *)0x0;
      ppppppuStack_c0 = (undefined8 ******)0x0;
      ppppppuStack_a8 = (undefined8 ******)0x0;
      lStack_b0 = 0;
      lVar16 = *(long *)(param_2 + 0x8d8);
      if ((*param_3 >> 1 & 1) == 0) {
        lStack_d8 = 0;
        func_0x00010c0d8ec0();
        lVar8 = lStack_d8;
        _objc_retain(lStack_d8);
        alStack_78[0] = lVar16;
        func_0x00010923fd80(&ppppppuStack_c0);
        ppppppuStack_c0 = (undefined8 ******)0x0;
        plStack_b8 = (long *)0x0;
        lStack_b0 = 0;
        plStack_108 = (long *)0x0;
        lStack_100 = 0;
        ppppppuStack_110 = (undefined8 ******)0x0;
        func_0x00010923fde4(&ppppppuStack_a8);
        ppppppuStack_a8 = (undefined8 ******)0x0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        pppppuStack_f8 = (undefined8 *****)0x0;
        pppppppuStack_128 = (undefined8 *******)&pppppuStack_f8;
        func_0x0001092349c8(&pppppppuStack_128);
        pppppppuStack_128 = &ppppppuStack_110;
        func_0x00010922dc0c(&pppppppuStack_128);
      }
      else {
        lStack_d0 = 0;
        uStack_c8 = 0;
        func_0x00010c0d8f00();
        uVar11 = uStack_c8;
        _objc_retain(uStack_c8);
        lVar8 = lStack_d0;
        _objc_retain(lStack_d0);
        alStack_78[0] = lVar16;
        if ((lVar8 == 0) && (lVar16 != 0)) {
          FUN_109fe5554(&ppppppuStack_110,uVar11,*(undefined8 *)(param_3 + 0x4d8));
          func_0x00010923fd80(&ppppppuStack_c0);
          plStack_b8 = plStack_108;
          ppppppuStack_c0 = ppppppuStack_110;
          lStack_b0 = lStack_100;
          plStack_108 = (long *)0x0;
          lStack_100 = 0;
          ppppppuStack_110 = (undefined8 ******)0x0;
          pppppppuStack_128 = &ppppppuStack_110;
          func_0x00010922dc0c(&pppppppuStack_128);
          FUN_109fe533c(&ppppppuStack_110,&pbStack_80);
          func_0x00010923fde4(&ppppppuStack_a8);
          uStack_a0 = plStack_108;
          ppppppuStack_a8 = ppppppuStack_110;
          uStack_98 = lStack_100;
          plStack_108 = (long *)0x0;
          lStack_100 = 0;
          ppppppuStack_110 = (undefined8 ******)0x0;
          pppppppuStack_128 = &ppppppuStack_110;
          func_0x0001092349c8(&pppppppuStack_128);
        }
        _objc_release(uVar11);
      }
      if ((lVar8 == 0) && (lVar16 != 0)) {
        uVar11 = 0x5c0;
        __Znwm(0x5c0);
        FUN_109fe23fc();
        func_0x0001092315a8(&ppppppuStack_110,param_2 + 8);
        lStack_100 = CONCAT44(lStack_100._4_4_,0xffffffff);
        FUN_109fde21c(param_1,uVar11,&ppppppuStack_110);
        plVar1 = plStack_108;
        if (plStack_108 != (long *)0x0) {
          plVar2 = plStack_108 + 1;
          do {
            lVar17 = *plVar2;
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *plVar2 = lVar17 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_108 + 0x10))(plStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        func_0x00010923405c(param_2,param_1);
      }
      else {
        func_0x000107c31940(&ppppppuStack_110,"");
        if (lVar8 != 0) {
          lVar17 = lVar8;
          func_0x00010bf6e340(lVar8);
          _objc_retainAutoreleasedReturnValue();
          FUN_109fe5184(&pppppppuStack_128);
          pppppppuVar7 = pppppppuStack_128;
          if (-1 < (char)bStack_111) {
            uStack_120 = (ulong)bStack_111;
            pppppppuVar7 = &pppppppuStack_128;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppppppuStack_110,pppppppuVar7,uStack_120);
          if ((char)bStack_111 < '\0') {
            __ZdlPv(pppppppuStack_128);
          }
          _objc_release(lVar17);
        }
        *param_1 = 0;
        param_1[1] = 0;
        if (lStack_100 < 0) {
          __ZdlPv(ppppppuStack_110);
        }
      }
      _objc_release(lVar8);
      ppppppuStack_110 = &ppppppuStack_a8;
      func_0x0001092349c8(&ppppppuStack_110);
      ppppppuStack_110 = &ppppppuStack_c0;
      func_0x00010922dc0c(&ppppppuStack_110);
      _objc_release(pbVar12);
      _objc_release(pbStack_88);
      _objc_release(pbStack_80);
      _objc_release(lVar16);
      return;
    }
    uVar11 = 0x5c0;
    __Znwm(0x5c0);
    FUN_109fe1c90();
    func_0x0001092315a8(&ppppppuStack_c0,param_2 + 8);
    lStack_b0 = CONCAT44(lStack_b0._4_4_,0xffffffff);
    FUN_109fde21c(param_1,uVar11,&ppppppuStack_c0);
    if (plStack_b8 != (long *)0x0) {
      plVar1 = plStack_b8 + 1;
      do {
        lVar16 = *plVar1;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
      }
    }
    func_0x00010923405c(param_2,param_1);
    return;
  }
  if (((*(byte *)(param_2 + 0x811) >> 2 & 1) != 0) && (*(uint *)(param_2 + 0x818) < 6)) {
    func_0x0001092313a4(param_2 + 0x810,5,0x400,&UNK_10f55e209,0x9c,&ppppppuStack_c0,
                        &ppppppuStack_110,&pppppppuStack_128,alStack_78,&pbStack_80);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 109fdbf4c; end: 109fdc4e7;  */

void FUN_109fdbf4c(undefined8 *param_1,long param_2,byte *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 **ppuStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 **ppuStack_a8;
  long *plStack_a0;
  undefined4 uStack_98;
  byte bStack_91;
  undefined8 **ppuStack_90;
  long *plStack_88;
  long lStack_80;
  char cStack_78;
  undefined8 **ppuStack_68;
  
  lVar10 = *(long *)(param_3 + 0x28);
  if ((lVar10 == 0) ||
     (lVar11 = *(long *)(param_3 + 0x10), func_0x000109fe3fa0(lVar11),
     *(long *)(lVar11 + 0x108) != *(long *)(lVar10 + 0xd8))) {
    if ((*(long *)(param_3 + 0x30) == 0) || ((*param_3 >> 2 & 1) == 0)) {
      uVar6 = 0xe8;
      __Znwm(0xe8);
      FUN_109fd3fbc();
      func_0x0001092315a8(&ppuStack_90,param_2 + 8);
      lStack_80 = CONCAT44(lStack_80._4_4_,0xffffffff);
      FUN_109fde460(param_1,uVar6,&ppuStack_90);
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
        }
      }
      func_0x000109234204(param_2,param_1);
    }
    else {
      lVar12 = *(long *)(param_3 + 0x10);
      puVar7 = PTR__OBJC_CLASS___MTLComputePipelineDescriptor_1126de038;
      _objc_alloc_init(PTR__OBJC_CLASS___MTLComputePipelineDescriptor_1126de038);
      func_0x000109fe3fa0(lVar12);
      func_0x00010c180680(puVar7);
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c170200(puVar7);
      _objc_release(puVar8);
      lVar11 = *(long *)(param_2 + 0x8d8);
      lStack_c0 = 0;
      uStack_b8 = 0;
      func_0x00010c0d8780();
      uVar6 = uStack_b8;
      _objc_retain(uStack_b8);
      lVar10 = lStack_c0;
      _objc_retain(lStack_c0);
      lStack_b0 = lVar11;
      if ((lVar10 == 0) && (lVar11 != 0)) {
        ppuStack_e0 = (undefined8 **)0x0;
        plStack_d8 = (long *)0x0;
        lStack_d0 = 0;
        FUN_109fe6ff0(&ppuStack_90,uVar6,*(undefined8 *)(param_3 + 8));
        func_0x00010923fd80(&ppuStack_e0);
        plStack_d8 = plStack_88;
        ppuStack_e0 = ppuStack_90;
        lStack_d0 = lStack_80;
        plStack_88 = (long *)0x0;
        lStack_80 = 0;
        ppuStack_90 = (undefined8 **)0x0;
        ppuStack_a8 = &ppuStack_90;
        func_0x00010922dc0c(&ppuStack_a8);
        func_0x000109fe3fa0(lVar12);
        plVar1 = plStack_d8;
        ppuVar5 = ppuStack_e0;
        uVar9 = 0xe8;
        __Znwm(0xe8);
        ppuStack_90 = (undefined8 **)0x0;
        plStack_88 = (long *)0x0;
        lStack_80 = 0;
        func_0x00010924a188(&ppuStack_90,ppuVar5,plVar1,(long)plVar1 - (long)ppuVar5 >> 7);
        cStack_78 = '\x01';
        FUN_109fd4464(uVar9,param_2,param_3,&ppuStack_90,lVar12 + 0x108,&lStack_b0);
        func_0x0001092315a8(&ppuStack_a8,param_2 + 8);
        uStack_98 = 0xffffffff;
        FUN_109fde460(param_1,uVar9,&ppuStack_a8);
        if (plStack_a0 != (long *)0x0) {
          plVar1 = plStack_a0 + 1;
          do {
            lVar12 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
          }
        }
        if (cStack_78 == '\x01') {
          ppuStack_68 = &ppuStack_90;
          func_0x00010922dc0c(&ppuStack_68);
        }
        func_0x000109234204(param_2,param_1);
        ppuStack_90 = &ppuStack_e0;
        func_0x00010922dc0c(&ppuStack_90);
      }
      else {
        func_0x000107c31940(&ppuStack_90,"");
        if (lVar10 != 0) {
          lVar12 = lVar10;
          func_0x00010bf6e340(lVar10);
          _objc_retainAutoreleasedReturnValue();
          FUN_109fe5184(&ppuStack_a8);
          pppuVar4 = (undefined8 ***)ppuStack_a8;
          if (-1 < (char)bStack_91) {
            plStack_a0 = (long *)(ulong)bStack_91;
            pppuVar4 = &ppuStack_a8;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppuStack_90,pppuVar4,plStack_a0);
          if ((char)bStack_91 < '\0') {
            __ZdlPv(ppuStack_a8);
          }
          _objc_release(lVar12);
        }
        *param_1 = 0;
        param_1[1] = 0;
        if (lStack_80 < 0) {
          __ZdlPv(ppuStack_90);
        }
      }
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(uVar6);
      _objc_release(puVar7);
    }
  }
  else {
    FUN_109fd4584(lVar10);
    FUN_109fd4584(lVar10);
    uVar6 = 0xe8;
    __Znwm(0xe8);
    FUN_109fd4464();
    func_0x0001092315a8(&ppuStack_90,param_2 + 8);
    lStack_80 = CONCAT44(lStack_80._4_4_,0xffffffff);
    FUN_109fde460(param_1,uVar6,&ppuStack_90);
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
    func_0x000109234204(param_2,param_1);
  }
  return;
}



/* Entry: 109fdc4e8; end: 109fdc573;  */

void FUN_109fdc4e8(undefined4 *param_1,long param_2,uint *param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar3 = param_2 + 0x8d8;
  puVar5 = param_3;
  FUN_109fd90a8();
  bVar1 = (uVar3 & 0x10000) != 0;
  bVar2 = ((ulong)puVar5 & 0x10100) != 0;
  uVar6 = 0xe;
  if (bVar1 || bVar2) {
    uVar6 = 0xf;
  }
  uVar7 = 0x2000;
  if (bVar1 || bVar2) {
    uVar7 = 0x4000;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x8d8);
  func_0x00010c0c1e20();
  *param_1 = uVar7;
  param_1[1] = uVar7;
  param_1[2] = 0x800;
  param_1[3] = uVar6;
  uVar6 = *(undefined4 *)(param_2 + (ulong)*param_3 * 0x10 + 0x198);
  param_1[4] = 0x800;
  param_1[5] = uVar6;
  *(undefined8 *)(param_1 + 6) = uVar4;
  return;
}



/* Entry: 109fdc574; end: 109fdc583;  */

void FUN_109fdc574(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 109fdc584; end: 109fdc64f;  */

void FUN_109fdc584(long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  param_1 = param_1 + (ulong)param_2 * 0x10;
  uVar1 = 0x360;
  if (7 < param_3) {
    uVar1 = 0x763;
  }
  uVar2 = 4;
  if ((param_3 & 1) != 0) {
    uVar2 = 0xc;
  }
  *(uint *)(param_1 + 0x164) = uVar1 | param_3 << 6 | uVar2;
  *(undefined4 *)(param_1 + 0x168) = 1;
  *(undefined4 *)(param_1 + 0x170) = 1;
  if ((param_3 >> 2 & 1) != 0) {
    func_0x000109fdc5f0();
    *(undefined4 *)(param_1 + 0x168) = param_4;
    *(undefined4 *)(param_1 + 0x170) = param_4;
  }
  return;
}



/* Entry: 109fdc650; end: 109fdc7af;  */

long * FUN_109fdc650(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lStack_48;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  puVar6 = puVar4;
  if (puVar2 != puVar4) {
    uVar3 = param_1[4];
    plVar5 = puVar4 + (uVar3 >> 7);
    lVar7 = *plVar5 + (uVar3 & 0x7f) * 0x20;
    lVar1 = puVar4[param_1[5] + uVar3 >> 7] + (param_1[5] + uVar3 & 0x7f) * 0x20;
    puVar6 = puVar2;
    if (lVar7 != lVar1) {
      do {
        lStack_48 = lVar7;
        func_0x000109fd51e8(&lStack_48);
        lVar7 = lVar7 + 0x20;
        if (lVar7 - *plVar5 == 0x1000) {
          plVar5 = plVar5 + 1;
          lVar7 = *plVar5;
        }
      } while (lVar7 != lVar1);
      puVar4 = (undefined8 *)param_1[1];
      puVar2 = (undefined8 *)param_1[2];
      puVar6 = puVar2;
    }
  }
  param_1[5] = 0;
  lVar7 = (long)puVar6 - (long)puVar4;
  while (uVar3 = lVar7 >> 3, 2 < uVar3) {
    __ZdlPv(*puVar4);
    puVar2 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    puVar6 = puVar2;
    lVar7 = (long)puVar2 - (long)puVar4;
  }
  if (uVar3 == 1) {
    lVar7 = 0x40;
  }
  else {
    if (uVar3 != 2) goto LAB_109fdc750;
    lVar7 = 0x80;
  }
  param_1[4] = lVar7;
LAB_109fdc750:
  if (puVar4 != puVar6) {
    do {
      puVar2 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar2;
    } while (puVar2 != puVar6);
    puVar6 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)param_1[2];
  }
  if (puVar2 != puVar6) {
    param_1[2] = (long)puVar2 + ((long)puVar6 + (7 - (long)puVar2) & 0xfffffffffffffff8U);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109fdc7b0; end: 109fdc7b7;  */

void FUN_109fdc7b0(void)

{
  return;
}



/* Entry: 109fdc7b8; end: 109fdc7eb;  */

void FUN_109fdc7b8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110b98f20;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109fdc7ec; end: 109fdc807;  */

void FUN_109fdc7ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110b98f20;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109fdc808; end: 109fdc92b;  */

void FUN_109fdc808(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 8);
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = lVar3;
  *(undefined4 *)(puVar1 + 4) = 5;
  puVar1[5] = 0x32aaaba7;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  *puVar1 = &PTR_FUN_110b99780;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *param_1 = puVar1;
  plVar2 = (long *)0x30;
  __Znwm();
  *plVar2 = (long)&PTR_FUN_110b98f90;
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = (long)puVar1;
  plVar2[4] = lVar3;
  plVar2[5] = 0xffffffff;
  param_1[1] = plVar2;
  FUN_109fdc974(param_1,puVar1 + 1,puVar1);
  (**(code **)(*plVar2 + 0x18))(plVar2,&PTR_DAT_110b98fd0);
  lVar3 = lVar3 + 0x820;
  FUN_109fcbf14(lVar3,puVar1);
  *(int *)(plVar2 + 1) = (int)lVar3;
  return;
}


