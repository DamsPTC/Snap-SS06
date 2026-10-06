/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b213bb4; end: 10b213bc3;  */

void FUN_10b213bb4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc7a08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b213bc4; end: 10b213beb;  */

long FUN_10b213bc4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b213bec; end: 10b213bef;  */

void FUN_10b213bec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc7ac0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b213bf0; end: 10b213c03;  */

void FUN_10b213bf0(void)

{
  FUN_10b213d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b213c04; end: 10b213c0f;  */

void FUN_10b213c04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b213ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b213c10; end: 10b213c23;  */

void FUN_10b213c10(void)

{
  func_0x000107c2811c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b213c24; end: 10b213d1f;  */

void FUN_10b213c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int extraout_w10;
  long *plStack_170;
  long lStack_168;
  undefined1 auStack_70 [64];
  
  FUN_10b213a68(auStack_70);
  func_0x000107c2bfd0(param_3,auStack_70);
  if ((int)param_3 == 0) {
    func_0x00010b213dfc();
    func_0x00010b213de0();
    func_0x00010b213e84();
    func_0x00010b213e44();
    func_0x00010b213f0c();
    func_0x00010b213d68();
    func_0x00010b213e54();
    func_0x00010b213e5c();
    func_0x00010b213e1c();
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    lStack_168 = *(long *)(param_1 + 0x10);
    plStack_170 = plVar1;
    if (lStack_168 != 0) {
      do {
        FUN_10b213d58();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar1 + 0x38))();
    func_0x000105647334(&plStack_170);
  }
  FUN_10b482a74(auStack_70);
  return;
}



/* Entry: 10b213d20; end: 10b213d2f;  */

void FUN_10b213d20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc7ac0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b213d30; end: 10b213d57;  */

long FUN_10b213d30(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b213d58; end: 10b213f17;  */

void FUN_10b213d58(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b213f18; end: 10b213f47;  */

long FUN_10b213f18(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b2141c8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b213f48; end: 10b213f4b;  */

long FUN_10b213f48(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b2141c8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b213f4c; end: 10b213f5f;  */

void FUN_10b213f4c(void)

{
  FUN_10b213f18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b213f60; end: 10b213f6b;  */

undefined ** FUN_10b213f60(void)

{
  return &PTR_DAT_110cc7bb8;
}



/* Entry: 10b213f6c; end: 10b213fa7;  */

void FUN_10b213f6c(long param_1)

{
  ulong *puVar1;
  
  func_0x00010563f0e8(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b213fa8; end: 10b21405f;  */

long * FUN_10b213fa8(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
    param_2 = plVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b214060; end: 10b2140df;  */

long FUN_10b214060(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    FUN_10b2140e0();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b2140e0; end: 10b21410b;  */

long FUN_10b2140e0(long param_1)

{
  FUN_10b4809a0();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b21410c; end: 10b21410f;  */

void FUN_10b21410c(long param_1,long param_2)

{
  FUN_10b21415c(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b214110; end: 10b21415b;  */

void FUN_10b214110(long param_1,long param_2)

{
  FUN_10b21415c(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b21415c; end: 10b21416b;  */

void FUN_10b21415c(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b21416c; end: 10b2141a3;  */

void FUN_10b21416c(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  FUN_10b213f6c();
  FUN_10b21415c(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b2141a4; end: 10b2141c7;  */

undefined1  [16] FUN_10b2141a4(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 10b2141c8; end: 10b2141f7;  */

long * FUN_10b2141c8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b2141f8; end: 10b214243;  */

void FUN_10b2141f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110cc7b78;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b214244; end: 10b21424b;  */

void FUN_10b214244(void)

{
  return;
}



/* Entry: 10b21424c; end: 10b21428b;  */

void FUN_10b21424c(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10b21428c(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10b2146f0(&uStack_30);
  return;
}



/* Entry: 10b21428c; end: 10b214327;  */

void FUN_10b21428c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  if ((bRam00000001138395f0 & 1) == 0) {
    iVar6 = 0x138395f0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_10b214328(0x1138395e0);
      ___cxa_guard_release(0x1138395f0);
    }
  }
  lVar5 = lRam00000001138395e8;
  uVar4 = uRam00000001138395e0;
  param_1[1] = lRam00000001138395e8;
  *param_1 = uVar4;
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
  return;
}



/* Entry: 10b214328; end: 10b214347;  */

void FUN_10b214328(void)

{
  undefined1 uStack_11;
  
  FUN_10b214718(&uStack_11);
  return;
}



/* Entry: 10b214348; end: 10b214377;  */

void FUN_10b214348(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  FUN_10b214378(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 8);
  return;
}



/* Entry: 10b214378; end: 10b21443f;  */

void FUN_10b214378(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = param_1;
  FUN_10b2145c8();
  lVar3 = param_2;
  func_0x00010b2145f0(param_1);
  do {
    lVar5 = param_2 + -0xff8;
    do {
      if (param_2 == lVar3) {
        param_1[5] = 0;
        puVar2 = (undefined8 *)param_1[1];
        while (uVar4 = param_1[2] - (long)puVar2 >> 3, 2 < uVar4) {
          __ZdlPv(*puVar2);
          puVar2 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar2;
        }
        if (uVar4 == 1) {
          lVar3 = 0x24;
        }
        else {
          if (uVar4 != 2) {
            return;
          }
          lVar3 = 0x49;
        }
        param_1[4] = lVar3;
        return;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 8);
      param_2 = param_2 + 0x38;
      lVar5 = lVar5 + 0x38;
    } while (*plVar1 != lVar5);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 10b214440; end: 10b2145c7;  */

void FUN_10b214440(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puStack_50;
  undefined1 uStack_48;
  
  __ZNSt3__15mutex4lockEv(param_2 + 8);
  plVar3 = (long *)(param_2 + 0x48);
  FUN_10b2145c8();
  plVar4 = (long *)(param_2 + 0x48);
  puVar6 = param_3;
  func_0x00010b2145f0();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puStack_50 = param_1;
  if (puVar6 != param_3) {
    uStack_48 = 0;
    uVar1 = ((long)puVar6 - *plVar4) / 0x38 + ((long)plVar4 - (long)plVar3 >> 3) * 0x49 +
            ((long)param_3 - *plVar3) / -0x38;
    if (uVar1 != 0) {
      if (0x492492492492492 < uVar1) {
        func_0x00010b214634();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10b2145ac);
        (*pcVar2)();
      }
      puVar5 = (undefined4 *)(uVar1 * 0x38);
      __Znwm();
      *param_1 = puVar5;
      param_1[1] = puVar5;
      param_1[2] = puVar5 + uVar1 * 0xe;
      while (param_3 != puVar6) {
        *puVar5 = *param_3;
        uVar8 = *(undefined8 *)(param_3 + 4);
        uVar7 = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(param_3 + 6);
        *(undefined8 *)(puVar5 + 4) = uVar8;
        *(undefined8 *)(puVar5 + 2) = uVar7;
        *(undefined8 *)(param_3 + 4) = 0;
        *(undefined8 *)(param_3 + 6) = 0;
        *(undefined8 *)(param_3 + 2) = 0;
        uVar8 = *(undefined8 *)(param_3 + 10);
        uVar7 = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(param_3 + 0xc);
        *(undefined8 *)(puVar5 + 10) = uVar8;
        *(undefined8 *)(puVar5 + 8) = uVar7;
        param_3 = param_3 + 0xe;
        if ((long)param_3 - *plVar3 == 0xff8) {
          plVar3 = plVar3 + 1;
          param_3 = (undefined4 *)*plVar3;
        }
        puVar5 = puVar5 + 0xe;
      }
      param_1[1] = puVar5;
    }
  }
  uStack_48 = 1;
  FUN_10b214648(&puStack_50);
  FUN_10b214378(param_2 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 8);
  return;
}



/* Entry: 10b2145c8; end: 10b21461f;  */

void FUN_10b2145c8(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10b214620; end: 10b214647;  */

void FUN_10b214620(void)

{
  FUN_10b214674();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b214648; end: 10b214673;  */

long FUN_10b214648(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010af89720(param_1);
  }
  return param_1;
}



/* Entry: 10b214674; end: 10b2146ef;  */

undefined8 * FUN_10b214674(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_DAT_110cc7c30;
  FUN_10b214378(param_1 + 9);
  puVar1 = (undefined8 *)param_1[0xb];
  for (puVar3 = (undefined8 *)param_1[10]; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  lVar2 = param_1[0xb];
  while (lVar2 != param_1[10]) {
    lVar2 = lVar2 + -8;
    param_1[0xb] = lVar2;
  }
  if (param_1[9] != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10b2146f0; end: 10b214717;  */

long FUN_10b2146f0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b214718; end: 10b2147d7;  */

undefined1 * FUN_10b214718(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1;
  FUN_10b2147d8(auStack_40);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_FUN_110cc7c88;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_110cc7c30;
  puStack_30[4] = 0x32aaaba7;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[10] = 0;
  puStack_30[9] = 0;
  puStack_30[0xc] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xe] = 0;
  puStack_30[0xd] = 0;
  puStack_30[0x10] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0x11] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x00010b214868();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_10b214800();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 10b2147d8; end: 10b2147ff;  */

long FUN_10b2147d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b214800();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b214800; end: 10b21482f;  */

void FUN_10b214800(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1c71c71c71c71c8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x90);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc7c88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b214830; end: 10b214833;  */

void FUN_10b214830(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc7c88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b214834; end: 10b214847;  */

void FUN_10b214834(void)

{
  func_0x00010b214858();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b214848; end: 10b214897;  */

void FUN_10b214848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b214850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b214898; end: 10b21496f;  */

void FUN_10b214898(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x0;
  if ((*param_1 != 0) && (puVar5 = puRam00000001138395f8, (bRam0000000113839600 & 1) == 0)) {
    iVar4 = 0x13839600;
    ___cxa_guard_acquire();
    puVar5 = puRam00000001138395f8;
    if (iVar4 != 0) {
      puVar5 = (undefined8 *)0x18;
      __Znwm();
      lVar7 = param_1[1];
      lVar6 = *param_1;
      if (param_1[1] != 0) {
        plVar1 = (long *)(param_1[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *puVar5 = &PTR_DAT_110cc7cd8;
      puVar5[2] = lVar7;
      puVar5[1] = lVar6;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x00010af8a584(&uStack_40);
      puRam00000001138395f8 = puVar5;
      ___cxa_guard_release(0x113839600);
      puVar5 = puRam00000001138395f8;
    }
  }
  puRam0000000113847390 = puVar5;
  return;
}



/* Entry: 10b214970; end: 10b2149b7;  */

void FUN_10b214970(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = plRam0000000113847390;
  *param_1 = (long)plRam0000000113847390;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,*param_2,param_2[1]);
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 10b2149b8; end: 10b2149d3;  */

void FUN_10b2149b8(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b214b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1[1]);
    return;
  }
  return;
}



/* Entry: 10b2149d4; end: 10b2149e7;  */

void FUN_10b2149d4(void)

{
  FUN_10b214a94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2149e8; end: 10b214a1f;  */

void FUN_10b2149e8(void)

{
  long *unaff_x19;
  
  func_0x00010b214ad0();
  func_0x00010b214aec(*(undefined8 *)(*unaff_x19 + 0x10));
  func_0x00010b214ac4();
  return;
}



/* Entry: 10b214a20; end: 10b214a2f;  */

void FUN_10b214a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b214a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  return;
}



/* Entry: 10b214a30; end: 10b214a67;  */

void FUN_10b214a30(void)

{
  long *unaff_x19;
  
  func_0x00010b214ad0();
  func_0x00010b214aec(*(undefined8 *)(*unaff_x19 + 0x20));
  func_0x00010b214ac4();
  return;
}



/* Entry: 10b214a68; end: 10b214a93;  */

void FUN_10b214a68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b214b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return;
}



/* Entry: 10b214a94; end: 10b214ac3;  */

undefined8 * FUN_10b214a94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc7cd8;
  func_0x00010af8a584(param_1 + 1);
  return param_1;
}



/* Entry: 10b214ac4; end: 10b214b0f;  */

void FUN_10b214ac4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 10b214b10; end: 10b214b6b;  */

undefined * FUN_10b214b10(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340e0b0;
  (*(code *)PTR___tlv_bootstrap_11340e0b0)();
  puVar2 = *ppuVar1;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = (undefined *)0x78;
    __Znwm();
    FUN_10b215134();
    *ppuVar1 = puVar2;
  }
  return puVar2;
}



/* Entry: 10b214b6c; end: 10b214bbb;  */

long FUN_10b214b6c(long param_1)

{
  FUN_10b214bbc(param_1);
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x41) = 0;
  *(undefined8 *)(param_1 + 0x39) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  return param_1;
}



/* Entry: 10b214bbc; end: 10b214c03;  */

void FUN_10b214bbc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  uVar2 = 1;
  __Znwm();
  *puVar1 = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 10b214c04; end: 10b214c6f;  */

undefined8 FUN_10b214c04(void)

{
  int iVar1;
  
  if ((bRam0000000113839698 & 1) == 0) {
    iVar1 = 0x13839698;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10b214b6c(0x113839608);
      ___cxa_guard_release(0x113839698);
    }
  }
  return 0x113839608;
}



/* Entry: 10b214c70; end: 10b214c97;  */

bool FUN_10b214c70(char *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uStack_20;
  long lStack_18;
  
  if (*param_1 == '\x01') {
    uStack_20 = *param_4;
    lStack_18 = param_4[1];
    iVar1 = (int)&uStack_20;
    if (lStack_18 == param_3) {
      func_0x000100067218(&uStack_20,param_2,param_3);
      bVar2 = iVar1 == 0;
    }
    else {
      bVar2 = false;
    }
    return bVar2;
  }
  return false;
}



/* Entry: 10b214c98; end: 10b214cff;  */

undefined8 FUN_10b214c98(int param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b215120();
  func_0x00010b215114();
  if (param_1 == 0) {
    unaff_x19 = 0;
  }
  else {
    FUN_10b214b10();
    func_0x00010b2150b0();
    FUN_10b2152c0();
    func_0x00010b215088();
  }
  return unaff_x19;
}



/* Entry: 10b214d00; end: 10b214d73;  */

void FUN_10b214d00(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0x48) != '\0')) {
    FUN_10b214b10();
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    uStack_40 = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    FUN_10b2153c8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
  }
  return;
}



/* Entry: 10b214d74; end: 10b214dd3;  */

void FUN_10b214d74(int param_1)

{
  undefined1 auStack_70 [64];
  
  func_0x00010b215120();
  func_0x00010b215114();
  if (param_1 != 0) {
    FUN_10b214b10();
    func_0x00010b2150b0();
    FUN_10b215470();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  }
  return;
}



/* Entry: 10b214dd4; end: 10b214e33;  */

void FUN_10b214dd4(undefined8 param_1)

{
  undefined8 unaff_x21;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x00010b215104();
  FUN_10b214e34(auStack_50);
  func_0x00010b21509c();
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_10b214c98(param_1,auStack_50,auStack_68,unaff_x21);
  func_0x00010b21507c();
  return;
}



/* Entry: 10b214e34; end: 10b214e93;  */

void FUN_10b214e34(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar3 = 4;
  uVar1 = 4;
  puVar4 = &UNK_10f73a6a5;
  if (param_2 != 1) {
    uVar1 = 7;
    puVar4 = &UNK_10f73a69d;
  }
  *param_1 = puVar4;
  param_1[1] = uVar1;
  uVar2 = param_3 - 1;
  if (uVar2 < 3) {
    uVar3 = *(undefined8 *)(&UNK_10e569c28 + (ulong)uVar2 * 8);
    puVar4 = (&PTR_DAT_110cc7d60)[uVar2];
  }
  else {
    puVar4 = &UNK_10f73a6aa;
  }
  param_1[2] = puVar4;
  param_1[3] = uVar3;
  return;
}



/* Entry: 10b214e94; end: 10b214eeb;  */

void FUN_10b214e94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = param_1;
  FUN_10b214c04();
  uVar2 = uVar1;
  func_0x00010b21509c();
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_10b214d00(uVar1,param_1,auStack_48,uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 10b214eec; end: 10b214f4b;  */

void FUN_10b214eec(undefined8 param_1)

{
  undefined8 unaff_x21;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x00010b215104();
  FUN_10b214e34(auStack_50);
  func_0x00010b21509c();
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_10b214d74(param_1,auStack_50,auStack_68,unaff_x21);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return;
}



/* Entry: 10b214f4c; end: 10b214fbf;  */

undefined8 FUN_10b214f4c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b214f80(&uStack_28);
  return param_1;
}



/* Entry: 10b214fc0; end: 10b214fc7;  */

void FUN_10b214fc0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x50) {
    FUN_10b215010(lVar2 + -0x40);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10b214fc8; end: 10b21500f;  */

void FUN_10b214fc8(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x50) {
    FUN_10b215010(lVar1 + -0x40);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10b215010; end: 10b215063;  */

void FUN_10b215010(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110cc7d48)[*(uint *)(param_1 + 0x38)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 10b215064; end: 10b215133;  */

void FUN_10b215064(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2 + 0x20);
  return;
}



/* Entry: 10b215134; end: 10b215247;  */

long * FUN_10b215134(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_1;
  func_0x000107c27d0c();
  plVar2 = param_1 + 1;
  *param_1 = (long)plVar1;
  uStack_58 = 0;
  plStack_60 = (long *)0x6e776f6e6b6e75;
  uStack_48 = 0;
  uStack_50 = 0;
  _pthread_self();
  _pthread_getname_np();
  func_0x000107c278b8(plVar2,&plStack_60);
  param_1[4] = 0;
  param_1[7] = 0x32aaaba7;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  func_0x00010b215f14();
  FUN_10b215248();
  plStack_60 = param_1;
  func_0x00010b21529c(0x1138396a0,&plStack_60);
  func_0x00010b215eac();
  FUN_10b2152b4(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  __ZNSt3__15mutexD1Ev(param_1 + 7);
  FUN_10b214f4c(param_1 + 4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar2);
  func_0x00010b215ec8();
  if ((bRam00000001138396c8 & 1) == 0) {
    plVar2 = (long *)0x1138396c8;
    ___cxa_guard_acquire();
    if ((int)plVar2 != 0) {
      uRam00000001138396a8 = 0;
      uRam00000001138396a0 = 0;
      uRam00000001138396b8 = 0;
      uRam00000001138396b0 = 0;
      uRam00000001138396c0 = 0x3f800000;
      plVar2 = (long *)0x1138396c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138396c8);
      return plVar2;
    }
  }
  return plVar2;
}



/* Entry: 10b215248; end: 10b2152b3;  */

void FUN_10b215248(void)

{
  int iVar1;
  
  if ((bRam00000001138396c8 & 1) == 0) {
    iVar1 = 0x138396c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138396a8 = 0;
      uRam00000001138396a0 = 0;
      uRam00000001138396b8 = 0;
      uRam00000001138396b0 = 0;
      uRam00000001138396c0 = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138396c8);
      return;
    }
  }
  return;
}



/* Entry: 10b2152b4; end: 10b2152bf;  */

/* WARNING: Removing unreachable block (ram,0x00010b2155ac) */

void FUN_10b2152b4(long param_1)

{
  undefined1 auStack_48 [40];
  
  if ((ulong)((*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x20)) / 0x50) < 1000) {
    FUN_10b215844(auStack_48,1000,(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) / 0x50);
    func_0x00010b215f08();
    func_0x00010b215ed8();
  }
  return;
}



/* Entry: 10b2152c0; end: 10b21538b;  */

long FUN_10b2152c0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [56];
  undefined4 uStack_48;
  
  do {
    lVar3 = lRam000000011336c558;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x11336c558,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      lRam000000011336c558 = lRam000000011336c558 + 1;
    }
  } while (cVar1 != '\0');
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  lStack_90 = lVar3;
  uStack_b0 = *param_3;
  uStack_a0 = param_3[2];
  uStack_a8 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uStack_88 = param_4;
  func_0x00010b215ef0();
  uStack_48 = 0;
  func_0x00010b215f20();
  FUN_10b215010(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
  func_0x00010b215ea4();
  return lVar3;
}



/* Entry: 10b21538c; end: 10b2153c7;  */

long FUN_10b21538c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10b2155bc();
    lVar2 = uVar1 + 0x50;
  }
  else {
    lVar2 = param_1;
    FUN_10b2155e8();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x50;
}



/* Entry: 10b2153c8; end: 10b21546f;  */

void FUN_10b2153c8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_60 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  uStack_38 = 1;
  uStack_80 = param_2;
  uStack_78 = param_4;
  FUN_10b21538c(param_1 + 0x20,&uStack_80);
  func_0x00010b215ed0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a0);
  func_0x00010b215ea4();
  return;
}



/* Entry: 10b215470; end: 10b215533;  */

void FUN_10b215470(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  undefined4 uStack_48;
  
  do {
    lVar3 = lRam000000011336c558;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x11336c558,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      lRam000000011336c558 = lRam000000011336c558 + 1;
    }
  } while (cVar1 != '\0');
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  lStack_90 = lVar3;
  uStack_b0 = *param_3;
  uStack_a0 = param_3[2];
  uStack_a8 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uStack_88 = param_4;
  func_0x00010b215ef0();
  uStack_48 = 2;
  func_0x00010b215f20();
  func_0x00010b215ed0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
  func_0x00010b215ea4();
  return;
}



/* Entry: 10b215534; end: 10b2155bb;  */

void FUN_10b215534(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x50) < param_2) {
    if (0x333333333333333 < param_2) {
      FUN_10b215830();
      func_0x00010b215ed8();
      func_0x00010b215ec0();
      lVar1 = param_1[1];
      FUN_10b215674();
      param_1[1] = lVar1 + 0x50;
      return;
    }
    FUN_10b215844(auStack_48,param_2,(param_1[1] - *param_1) / 0x50);
    func_0x00010b215f08();
    func_0x00010b215ed8();
  }
  return;
}



/* Entry: 10b2155bc; end: 10b2155e7;  */

void FUN_10b2155bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10b215674();
  *(long *)(param_1 + 8) = lVar1 + 0x50;
  return;
}



/* Entry: 10b2155e8; end: 10b215673;  */

long FUN_10b2155e8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10b215754(param_1,(param_1[1] - *param_1) / 0x50 + 1);
  FUN_10b215844(auStack_58,plVar1,(param_1[1] - *param_1) / 0x50,param_1 + 2);
  FUN_10b215674(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x50;
  func_0x00010b215f08();
  lVar2 = param_1[1];
  func_0x00010b215ed8();
  return lVar2;
}



/* Entry: 10b215674; end: 10b21569b;  */

undefined8 * FUN_10b215674(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  FUN_10b21569c(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10b21569c; end: 10b2156cb;  */

undefined1 * FUN_10b21569c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  FUN_10b2156cc();
  return param_1;
}



/* Entry: 10b2156cc; end: 10b21572b;  */

void FUN_10b2156cc(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_10b215010();
  uVar1 = *(uint *)(param_2 + 0x38);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_FUN_110cc7d78)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x38) = uVar1;
  }
  return;
}



/* Entry: 10b21572c; end: 10b215753;  */

void FUN_10b21572c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  puVar1[6] = param_2[6];
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[4] = 0;
  return;
}



/* Entry: 10b215754; end: 10b2157a3;  */

long * FUN_10b215754(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < (long *)0x333333333333334) {
    uVar1 = (param_1[2] - *param_1) / 0x50;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x199999999999998 < uVar1) {
      plVar2 = (long *)0x333333333333333;
    }
    return plVar2;
  }
  FUN_10b215830();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x50) * 0x50;
  FUN_10b2158e0(plVar2,*param_1,param_1[1],lVar3);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 10b2157a4; end: 10b21582f;  */

void FUN_10b2157a4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x50) * 0x50;
  FUN_10b2158e0(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10b215830; end: 10b215843;  */

long * FUN_10b215830(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f73a6cb;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b215890();
  }
  lVar2 = param_4 + param_3 * 0x50;
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2;
  plVar1[3] = param_4 + param_2 * 0x50;
  return plVar1;
}



/* Entry: 10b215844; end: 10b2158b3;  */

long * FUN_10b215844(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b215890();
  }
  lVar1 = param_4 + param_3 * 0x50;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x50;
  return param_1;
}



/* Entry: 10b2158b4; end: 10b2158df;  */

void FUN_10b2158b4(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x333333333333334) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x50);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x50) {
    FUN_10b215674(param_4,uVar1);
    param_4 = lStack_48 + 0x50;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    FUN_10b215010(param_2 + 0x10);
  }
  func_0x00010b215978(&uStack_70);
  return;
}



/* Entry: 10b2158e0; end: 10b2159cb;  */

void FUN_10b2158e0(undefined8 param_1,long param_2,long param_3,long param_4)

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
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x50) {
    FUN_10b215674(param_4,lVar1);
    param_4 = lStack_38 + 0x50;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    FUN_10b215010(param_2 + 0x10);
  }
  func_0x00010b215978(&uStack_60);
  return;
}



/* Entry: 10b2159cc; end: 10b2159f7;  */

long * FUN_10b2159cc(long *param_1)

{
  FUN_10b2159f8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b2159f8; end: 10b2159ff;  */

void FUN_10b2159f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar2 = *(long *)(param_1 + 0x10), lVar1 != lVar2) {
    *(long *)(param_1 + 0x10) = lVar2 + -0x50;
    FUN_10b215010(lVar2 + -0x40);
  }
  return;
}



/* Entry: 10b215a00; end: 10b215a3f;  */

void FUN_10b215a00(long param_1,long param_2)

{
  long lVar1;
  
  while (lVar1 = *(long *)(param_1 + 0x10), param_2 != lVar1) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x50;
    FUN_10b215010(lVar1 + -0x40);
  }
  return;
}



/* Entry: 10b215a40; end: 10b215a73;  */

void FUN_10b215a40(void)

{
  func_0x00010b215a58();
  return;
}



/* Entry: 10b215a74; end: 10b215e37;  */

undefined1  [16] FUN_10b215a74(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long **pplVar5;
  ulong uVar6;
  long **pplVar7;
  long **pplVar8;
  long *plVar9;
  long *plVar10;
  long **pplVar11;
  long *plVar12;
  long lVar13;
  long **pplVar14;
  long **unaff_x25;
  undefined1 auVar15 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plStack_68 = (long *)*param_2;
  pplVar7 = &plStack_68;
  func_0x000107c278cc(pplVar7,8);
  pplVar14 = (long **)param_1[1];
  if (pplVar14 != (long **)0x0) {
    uVar4 = (long)pplVar14 - 1;
    if (((ulong)pplVar14 & uVar4) == 0) {
      unaff_x25 = (long **)(uVar4 & (ulong)pplVar7);
    }
    else {
      unaff_x25 = pplVar7;
      if (pplVar14 <= pplVar7) {
        uVar6 = 0;
        if (pplVar14 != (long **)0x0) {
          uVar6 = (ulong)pplVar7 / (ulong)pplVar14;
        }
        unaff_x25 = (long **)((long)pplVar7 - uVar6 * (long)pplVar14);
      }
    }
    plVar12 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10b215b44;
          pplVar8 = (long **)plVar12[1];
          if (pplVar8 != pplVar7) break;
          if (plVar12[2] == *param_2) {
            uVar3 = 0;
            goto LAB_10b215e00;
          }
        }
        if (((ulong)pplVar14 & uVar4) == 0) {
          pplVar8 = (long **)((ulong)pplVar8 & uVar4);
        }
        else if (pplVar14 <= pplVar8) {
          uVar6 = 0;
          if (pplVar14 != (long **)0x0) {
            uVar6 = (ulong)pplVar8 / (ulong)pplVar14;
          }
          pplVar8 = (long **)((long)pplVar8 - uVar6 * (long)pplVar14);
        }
      } while (pplVar8 == unaff_x25);
    }
  }
LAB_10b215b44:
  lVar13 = *param_3;
  plVar1 = param_1 + 2;
  plVar12 = (long *)0x18;
  __Znwm();
  uStack_58 = 1;
  *plVar12 = 0;
  plVar12[1] = (long)pplVar7;
  plVar12[2] = lVar13;
  plStack_60 = plVar1;
  if ((pplVar14 != (long **)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)pplVar14)) goto LAB_10b215d84;
  uVar4 = 1;
  if ((long **)0x2 < pplVar14) {
    uVar4 = (ulong)(((ulong)pplVar14 & (long)pplVar14 - 1U) != 0);
  }
  pplVar8 = (long **)(uVar4 | (long)pplVar14 << 1);
  pplVar5 = (long **)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (pplVar8 <= pplVar5) {
    pplVar8 = pplVar5;
  }
  plStack_68 = plVar12;
  if ((long)pplVar8 - 1U == 0) {
    pplVar8 = (long **)0x2;
  }
  else if (((ulong)pplVar8 & (long)pplVar8 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    pplVar14 = (long **)param_1[1];
  }
  if (pplVar14 < pplVar8) {
LAB_10b215bf0:
    if ((ulong)pplVar8 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b215e28);
      (*pcVar2)();
    }
    lVar13 = (long)pplVar8 << 3;
    __Znwm(lVar13);
    FUN_10b215e38(param_1,lVar13);
    param_1[1] = (long)pplVar8;
    lVar13 = *param_1;
    for (pplVar14 = (long **)0x0; pplVar8 != pplVar14; pplVar14 = (long **)((long)pplVar14 + 1)) {
      *(undefined8 *)(lVar13 + (long)pplVar14 * 8) = 0;
    }
    plVar9 = (long *)*plVar1;
    pplVar14 = pplVar8;
    if (plVar9 != (long *)0x0) {
      pplVar5 = (long **)plVar9[1];
      uVar6 = (long)pplVar8 - 1;
      uVar4 = 0;
      if (pplVar8 != (long **)0x0) {
        uVar4 = (ulong)pplVar5 / (ulong)pplVar8;
      }
      pplVar11 = pplVar5;
      if (pplVar8 <= pplVar5) {
        pplVar11 = (long **)((long)pplVar5 - uVar4 * (long)pplVar8);
      }
      if (((ulong)pplVar8 & uVar6) == 0) {
        pplVar11 = (long **)((ulong)pplVar5 & uVar6);
      }
      *(long **)(lVar13 + (long)pplVar11 * 8) = plVar1;
      while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
        pplVar5 = (long **)plVar9[1];
        if (((ulong)pplVar8 & uVar6) == 0) {
          pplVar5 = (long **)((ulong)pplVar5 & uVar6);
        }
        else if (pplVar8 <= pplVar5) {
          uVar4 = 0;
          if (pplVar8 != (long **)0x0) {
            uVar4 = (ulong)pplVar5 / (ulong)pplVar8;
          }
          pplVar5 = (long **)((long)pplVar5 - uVar4 * (long)pplVar8);
        }
        if (pplVar5 != pplVar11) {
          if (*(long *)(lVar13 + (long)pplVar5 * 8) == 0) {
            *(long **)(lVar13 + (long)pplVar5 * 8) = plVar10;
            pplVar11 = pplVar5;
          }
          else {
            *plVar10 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar13 + (long)pplVar5 * 8);
            **(long **)(lVar13 + (long)pplVar5 * 8) = (long)plVar9;
            plVar9 = plVar10;
          }
        }
      }
    }
  }
  else if (pplVar8 < pplVar14) {
    pplVar5 = (long **)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((pplVar14 < (long **)0x3) || (((ulong)pplVar14 & (long)pplVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long **)0x1 < pplVar5) {
      pplVar5 = (long **)(1L << (-LZCOUNT((long)pplVar5 + -1) & 0x3fU));
    }
    if (pplVar8 <= pplVar5) {
      pplVar8 = pplVar5;
    }
    if (pplVar8 < pplVar14) {
      if (pplVar8 != (long **)0x0) goto LAB_10b215bf0;
      FUN_10b215e38(param_1,0);
      param_1[1] = 0;
      pplVar14 = (long **)0x0;
    }
    else {
      pplVar14 = (long **)param_1[1];
    }
  }
  if (((ulong)pplVar14 & (long)pplVar14 - 1U) == 0) {
    unaff_x25 = (long **)((long)pplVar14 - 1U & (ulong)pplVar7);
  }
  else {
    unaff_x25 = pplVar7;
    if (pplVar14 <= pplVar7) {
      uVar4 = 0;
      if (pplVar14 != (long **)0x0) {
        uVar4 = (ulong)pplVar7 / (ulong)pplVar14;
      }
      unaff_x25 = (long **)((long)pplVar7 - uVar4 * (long)pplVar14);
    }
  }
LAB_10b215d84:
  lVar13 = *param_1;
  plVar9 = *(long **)(lVar13 + (long)unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar12 = *plVar1;
    *plVar1 = (long)plVar12;
    *(long **)(lVar13 + (long)unaff_x25 * 8) = plVar1;
    if (*plVar12 != 0) {
      pplVar7 = *(long ***)(*plVar12 + 8);
      if (((ulong)pplVar14 & (long)pplVar14 - 1U) == 0) {
        pplVar7 = (long **)((ulong)pplVar7 & (long)pplVar14 - 1U);
      }
      else if (pplVar14 <= pplVar7) {
        uVar4 = 0;
        if (pplVar14 != (long **)0x0) {
          uVar4 = (ulong)pplVar7 / (ulong)pplVar14;
        }
        pplVar7 = (long **)((long)pplVar7 - uVar4 * (long)pplVar14);
      }
      *(long **)(lVar13 + (long)pplVar7 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar9;
    *plVar9 = (long)plVar12;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10b215e50(&plStack_68);
  uVar3 = 1;
LAB_10b215e00:
  auVar15._8_8_ = uVar3;
  auVar15._0_8_ = plVar12;
  return auVar15;
}



/* Entry: 10b215e38; end: 10b215e4f;  */

void FUN_10b215e38(long *param_1,long param_2)

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



/* Entry: 10b215e50; end: 10b215e7b;  */

long * FUN_10b215e50(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b215e7c; end: 10b215f2b;  */

void FUN_10b215e7c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  puVar1[6] = param_2[6];
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[4] = 0;
  return;
}



/* Entry: 10b215f2c; end: 10b215f4b;  */

void FUN_10b215f2c(void)

{
  undefined1 uStack_11;
  
  FUN_10b216bd8(&uStack_11);
  return;
}



/* Entry: 10b215f4c; end: 10b2160af;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 ** FUN_10b215f4c(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 in_ZR;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  int iVar10;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar11;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  ulong *unaff_x24;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *apuStack_400 [6];
  undefined1 auStack_3d0 [8];
  ulong uStack_3c8;
  byte bStack_3b9;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 *puStack_388;
  int iStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *apuStack_360 [3];
  undefined8 **ppuStack_348;
  undefined1 auStack_340 [24];
  uint uStack_328;
  byte bStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined **ppuStack_2e8;
  undefined **appuStack_2c8 [3];
  undefined ***pppuStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  int iStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 *apuStack_270 [3];
  undefined8 **ppuStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  uint uStack_238;
  byte bStack_230;
  undefined8 uStack_228;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [40];
  undefined1 auStack_170 [24];
  undefined1 uStack_158;
  undefined1 auStack_150 [24];
  undefined1 uStack_138;
  undefined1 auStack_130 [24];
  undefined1 uStack_118;
  undefined1 auStack_110 [184];
  undefined1 auStack_58 [48];
  undefined8 uStack_28;
  
  func_0x00010b2173d8();
  uStack_28 = extraout_x8;
  func_0x000107c278b8(auStack_110,&UNK_10f73a6d2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
  auStack_130[0] = 0;
  uStack_118 = 0;
  auStack_150[0] = 0;
  uStack_138 = 0;
  auStack_170[0] = 0;
  uStack_158 = 0;
  FUN_10b21689c(auStack_58,&UNK_10f73a6dc,&UNK_10f73a6f0);
  func_0x000104bd4884(auStack_198,auStack_58,1);
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  iVar10 = 0;
  func_0x0001062da094(auStack_110,0,0,auStack_130,auStack_150,0x101,auStack_170,auStack_198);
  FUN_10b2160b0(param_1,auStack_110);
  func_0x0001062d9b94(auStack_110);
  func_0x0001062d9bd8(&uStack_1a8);
  func_0x000107c278e0(auStack_198);
  func_0x000107c278c0(auStack_58);
  func_0x000107c279a4(auStack_170);
  func_0x000107c279a4(auStack_150);
  ppuVar9 = (undefined8 **)auStack_130;
  func_0x000107c279a4();
  func_0x00010b21738c(uStack_28);
  if ((bool)in_ZR) {
    return ppuVar9;
  }
  ___stack_chk_fail();
  func_0x0001062d9b94(auStack_110);
  func_0x0001062d9bd8(&uStack_1a8);
  func_0x000107c278e0(auStack_198);
  func_0x000107c278c0(auStack_58);
  func_0x000107c279a4(auStack_170);
  func_0x000107c279a4(auStack_150);
  ppuVar9 = (undefined8 **)auStack_130;
  func_0x000107c279a4();
  func_0x00010b2173f0();
  puVar8 = &uStack_440;
  func_0x00010b2173d8();
  uStack_228 = extraout_x8_01;
  if (puRam0000000113847068 != (undefined8 *)0x0) goto LAB_10b2164f4;
  ppuVar6 = ppuVar9;
  func_0x000107c31450();
  func_0x000107c27c1c(&uStack_2a8,1);
  puVar2 = puStack_298;
  puStack_298[2] = 0;
  *puStack_298 = &PTR_DAT_1107ea880;
  puStack_298[1] = 0;
  func_0x000107c278b8(&puStack_3a0,&UNK_10f73a6f1);
  ppuVar7 = &puStack_3a0;
  func_0x000107c31460(puVar2 + 3,ppuVar7,0x18,ppuVar6,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_3a0);
  puStack_418 = puStack_298;
  puStack_298 = (undefined8 *)0x0;
  puStack_420 = puStack_418 + 3;
  func_0x000107c27c24(&uStack_2a8);
  if (*(int *)ppuVar9 == 1) {
    if (*(char *)(ppuVar9 + 9) == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_3d0,ppuVar9 + 6);
    }
    else {
      func_0x000107c278b8(auStack_3d0,"aws.api.snapchat.com");
    }
    if (-1 < (char)bStack_3b9) {
      uStack_3c8 = (ulong)bStack_3b9;
    }
    if (uStack_3c8 == 0) {
      func_0x000107c278b8(&uStack_2a8,"aws.api.snapchat.com");
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_2a8,auStack_3d0);
    }
    iStack_290 = *(int *)((long)ppuVar9 + 4);
    if (*(char *)(ppuVar9 + 1) == '\0') {
      iStack_290 = 0x1bb;
    }
    unaff_x24 = &uStack_2a8;
    func_0x000104bff97c(&uStack_288,ppuVar9 + 2,&UNK_10f73a6f0);
    puStack_408 = ppuVar9[0x15];
    puStack_410 = ppuVar9[0x14];
    if (ppuVar9[0x15] != (undefined8 *)0x0) {
      do {
        func_0x00010b2173f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c2791c(apuStack_400,ppuVar9 + 0xf);
    ppuStack_258 = (undefined8 **)0x0;
    ppuVar6 = (undefined8 **)0x40;
    __Znwm();
    *ppuVar6 = &PTR_SUB_110cc7e18;
    ppuVar6[2] = puStack_408;
    ppuVar6[1] = puStack_410;
    puStack_410 = (undefined8 *)0x0;
    puStack_408 = (undefined8 *)0x0;
    ppuVar7 = apuStack_400;
    func_0x000107c27bc0(ppuVar6 + 3);
    ppuStack_258 = ppuVar6;
    if ((*(char *)((long)ppuVar9 + 0x51) == '\x01') && (((ulong)ppuVar9[10] & 1) != 0)) {
      if (*(char *)(ppuVar9 + 0xe) == '\x01') {
        ppuVar6 = ppuVar9 + 0xb;
        func_0x00010549026c();
        puVar2 = ppuVar6[1];
        if (-1 < (char)*(byte *)((long)ppuVar6 + 0x17)) {
          puVar2 = (undefined8 *)(ulong)*(byte *)((long)ppuVar6 + 0x17);
        }
        if (puVar2 != (undefined8 *)0x0) {
          ppuVar7 = ppuVar9 + 0xb;
          func_0x00010549026c();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&puStack_3b8);
          uStack_248 = uStack_3b0;
          puStack_250 = puStack_3b8;
          uStack_240 = uStack_3a8;
          uStack_3b0 = 0;
          uStack_3a8 = 0;
          puStack_3b8 = (undefined8 *)0x0;
          uStack_238 = 2;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_3b8);
          goto LAB_10b216340;
        }
      }
      uStack_238 = 0;
    }
    else {
      uStack_238 = 1;
    }
LAB_10b216340:
    bStack_230 = *(byte *)((long)ppuVar9 + 0xb1) & *(byte *)(ppuVar9 + 0x16);
    puStack_3a0._0_4_ = 0;
    uStack_390 = uStack_2a0;
    uStack_398 = uStack_2a8;
    puStack_388 = puStack_298;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    puStack_298 = (undefined8 *)0x0;
    iStack_380 = iStack_290;
    uStack_370 = uStack_280;
    uStack_378 = uStack_288;
    uStack_368 = uStack_278;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_288 = 0;
    if (ppuStack_258 == (undefined8 **)0x0) {
      ppuStack_348 = (undefined8 **)0x0;
    }
    else if (ppuStack_258 == apuStack_270) {
      ppuVar7 = apuStack_360;
      ppuStack_348 = ppuVar7;
      (*(code *)(*ppuStack_258)[3])();
    }
    else {
      ppuStack_348 = ppuStack_258;
      ppuStack_258 = (undefined8 **)0x0;
    }
    auStack_340[0] = 0;
    uStack_328 = 0xffffffff;
    FUN_10b216aac(auStack_340);
    uVar5 = uStack_238;
    in_ZR = uStack_238 == 0xffffffff;
    if (!(bool)in_ZR) {
      ppuVar7 = &puStack_250;
      puStack_3b8 = (undefined8 *)auStack_340;
      (*(code *)(&PTR_DAT_110cc7ea0)[uStack_238])(&puStack_3b8);
      uStack_328 = uVar5;
    }
    bStack_320 = bStack_230;
    FUN_10b216b38(&uStack_2a8);
    FUN_10b2168dc(&puStack_410);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3d0);
  }
  else {
    uVar11 = (ulong)*(uint *)((long)ppuVar9 + 4);
    puStack_3a0._0_4_ = 1;
    uStack_398 = (ulong)(*(byte *)(ppuVar9 + 10) & 1) << 0x20;
    if (*(char *)((long)ppuVar9 + 0x51) == '\0') {
      uStack_398 = 0;
    }
    in_ZR = *(char *)(ppuVar9 + 1) == '\0';
    if ((bool)in_ZR) {
      uVar11 = 0x2329;
    }
    uStack_398 = uStack_398 | uVar11;
  }
  puStack_318 = puStack_420;
  puStack_310 = puStack_418;
  if (puStack_418 == (undefined8 *)0x0) {
    func_0x00010b217408();
  }
  else {
    plVar1 = puStack_418 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    func_0x00010b217408();
    if (extraout_x9 != 0) {
      plVar1 = (long *)(extraout_x9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  ppuStack_2e8 = &PTR_FUN_110cc7f58;
  uStack_440 = 0;
  uStack_438 = 0;
  pppuStack_2b0 = appuStack_2c8;
  appuStack_2c8[0] = &PTR_FUN_110cc7fe8;
  FUN_10b215f2c(&uStack_430);
  func_0x00010b216b70(&puStack_3a0);
  func_0x000107c27c20();
  func_0x00010b21748c();
  iVar10 = (int)ppuVar7;
  puVar8[1] = lStack_428;
  *puVar8 = uStack_430;
  if (lStack_428 != 0) {
    do {
      func_0x00010b2173f8();
      iVar10 = (int)ppuVar7;
    } while (extraout_w10_00 != 0);
  }
  func_0x00010bcbee94();
  func_0x0001077f3bd4(&uStack_430);
  func_0x000107c27c20(&puStack_420);
LAB_10b2164f4:
  puVar8 = puRam0000000113847068;
  ppuVar9 = (undefined8 **)0x28;
  __Znwm();
  ppuVar9[1] = (undefined8 *)0x0;
  ppuVar9[2] = (undefined8 *)0x0;
  *ppuVar9 = &PTR_DAT_110cc8068;
  ppuVar9[3] = &PTR_FUN_110cc7da0;
  ppuVar9[4] = puVar8;
  *extraout_x8_00 = ppuVar9 + 3;
  extraout_x8_00[1] = ppuVar9;
  func_0x00010b21738c(uStack_228);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (iVar10 != 0) {
      func_0x000104bd46a0();
      FUN_10b2168dc(&puStack_410);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x24 + 4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3d0);
      ppuVar9 = &puStack_420;
      func_0x000107c27c20();
    }
    func_0x00010b2173f0();
    *ppuVar9 = &PTR_FUN_110cc7da0;
    (**(code **)(*(long *)*ppuVar9[1] + 0x18))();
    return ppuVar9;
  }
  return ppuVar9;
}


