/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006012e4; end: 10060132f;  */

void FUN_1006012e4(void)

{
  return;
}



/* Entry: 100601330; end: 1006014af;  */

void FUN_100601330(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long *extraout_x9;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    func_0x000107c396c4((float)(ulong)param_1[3],(int)param_1[4]);
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else {
      func_0x000107c39668();
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_1006014b0(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    func_0x000107c60e20(lVar2);
    FUN_1006014b0(param_1,lVar2);
    plVar3 = (long *)0x0;
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    while (param_2 != plVar3) {
      func_0x0001006014c8();
      lVar2 = extraout_x8;
      plVar3 = extraout_x9;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar5;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1006014b0; end: 1006014e3;  */

void FUN_1006014b0(long *param_1,long param_2)

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



/* Entry: 1006014e4; end: 100601517;  */

void FUN_1006014e4(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001006014d4();
  if (unaff_x20 != 0) {
    func_0x0001008a4640();
    if ((bool)in_ZR) {
      FUN_100601520(unaff_x20 + 0x18);
    }
    func_0x0001008a4654();
  }
  return;
}



/* Entry: 100601518; end: 10060151f;  */

void FUN_100601518(void)

{
  return;
}



/* Entry: 100601520; end: 100601547;  */

long FUN_100601520(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100601548; end: 100601647;  */

void FUN_100601548(undefined8 *param_1,long *param_2)

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
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110c97ec0;
  puVar4[3] = &PTR_DAT_110c97f38;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
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
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110c97f10;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_100601648(&uStack_50);
  return;
}



/* Entry: 100601648; end: 1006016cb;  */

long FUN_100601648(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1006016cc; end: 1006016fb;  */

long FUN_1006016cc(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x17);
  }
  return uVar1 + ((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
}



/* Entry: 1006016fc; end: 100601763;  */

void FUN_1006016fc(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_100601734;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_100601734:
    iVar1 = 0;
    goto LAB_100601738;
  }
  FUN_1006016cc();
  iVar1 = (int)uVar2 + 1;
LAB_100601738:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 100601764; end: 10060177b;  */

void FUN_100601764(void)

{
  FUN_1006016fc();
  FUN_10060177c();
  return;
}



/* Entry: 10060177c; end: 1006017a7;  */

long FUN_10060177c(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 1006017a8; end: 1006017d7;  */

long * FUN_1006017a8(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  long *unaff_x19;
  long *unaff_x20;
  int iVar7;
  int iVar8;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_28;
  
  func_0x000100061464();
  func_0x000100065454();
  iVar7 = *(int *)((long)unaff_x20 + (ulong)*(uint *)(param_1 + 0x18));
  func_0x000100063820();
  lStack_58 = (long)unaff_x19 + (long)iVar7;
  uStack_50 = 0;
  uStack_28 = 0;
  plVar4 = &lStack_58;
  (**(code **)(*unaff_x20 + 0x38))();
  func_0x0001000659a8(extraout_x8);
  if ((bool)in_ZR) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  uVar1 = *(uint *)(unaff_x20 + 2);
  if ((uVar1 >> 1 & 1) != 0) {
    plVar2 = plVar4;
    FUN_1001a5994(plVar4,(int)unaff_x20[4],unaff_x19);
    unaff_x19 = plVar2;
  }
  if ((uVar1 & 1) != 0) {
    unaff_x19 = plVar4;
    FUN_1001a5a30(plVar4,2,unaff_x20[3] & 0xfffffffffffffffc);
  }
  plVar2 = unaff_x19;
  if ((uVar1 >> 2 & 1) != 0) {
    plVar2 = plVar4;
    FUN_1001a5b64(plVar4,*(undefined4 *)((long)unaff_x20 + 0x24),unaff_x19);
  }
  if ((unaff_x20[1] & 1U) == 0) {
    return plVar2;
  }
  uVar6 = unaff_x20[1] & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar3 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar3 = uVar6 + 8;
  }
  if ((long)(int)uVar5 <= *plVar4 - (long)plVar2) {
    _memcpy(plVar2,lVar3,uVar5 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar5);
  }
  while( true ) {
    iVar8 = ((int)*plVar4 - (int)plVar2) + 0x10;
    iVar7 = (int)uVar5;
    uVar5 = (ulong)(uint)(iVar7 - iVar8);
    if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
    func_0x00010b4d5738();
    lVar3 = (long)plVar2 + (long)iVar8;
    plVar2 = plVar4;
    func_0x000107c303e4(plVar4,lVar3);
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar2 + (long)iVar7);
}



/* Entry: 1006017d8; end: 1006017f3;  */

undefined ** FUN_1006017d8(void)

{
  return &PTR_DAT_110a98880;
}



/* Entry: 1006017f4; end: 100601853;  */

long * FUN_1006017f4(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x0001006017e4();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    FUN_100601854();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar5 = (int)uVar3;
      uVar1 = iVar5 - iVar6;
      uVar3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)uVar3);
}



/* Entry: 100601854; end: 100601863;  */

void FUN_100601854(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 unaff_x19;
  
  uVar2 = (ulong)*(uint *)(param_2 + 3);
  FUN_1001a597c();
  uVar1 = 10;
  func_0x0001001a59d0(10,unaff_x19);
  func_0x0001001a59d0(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,uVar2);
  return;
}



/* Entry: 100601864; end: 1006018cf;  */

void FUN_100601864(int param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = param_5;
  FUN_1001a597c(param_5,param_4);
  uVar2 = (ulong)(param_1 << 3 | 2);
  func_0x0001001a59d0(uVar2,uVar1);
  func_0x0001001a59d0(param_3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_3,param_5);
  return;
}



/* Entry: 1006018d0; end: 10060194b;  */

long * FUN_1006018d0(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    param_2 = param_3;
    FUN_1001a5a30(param_3,1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar1 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar1 < 0) {
      lVar2 = *(long *)(uVar3 + 8);
      uVar1 = *(ulong *)(uVar3 + 0x10);
    }
    else {
      lVar2 = uVar3 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar1) {
      while( true ) {
        iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar4 = (int)uVar1;
        uVar1 = (ulong)(uint)(iVar4 - iVar5);
        if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar5;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar4);
    }
    _memcpy(param_2,lVar2,uVar1 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar1);
  }
  return param_2;
}



/* Entry: 10060194c; end: 10060195f;  */

long FUN_10060194c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0x140;
  FUN_100460200();
  *(undefined4 *)(lVar4 + 8) = 0;
  *(undefined4 *)(lVar4 + 0x10) = 0;
  func_0x0001004b800c(lVar4 + 0x18);
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_2 + lVar6 * 0x20);
      plVar5 = (long *)*puVar1;
      if ((long *)0x1 < plVar5) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_68 = puVar1[1];
      uStack_70 = *puVar1;
      uStack_58 = puVar1[3];
      uStack_60 = puVar1[2];
      FUN_1005a70c4(lVar4 + 0x18,&uStack_70);
      lVar6 = lVar6 + 1;
    } while (lVar6 != param_3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar4;
  }
  func_0x000107c60e78();
  return lRam0000000113815c80;
}



/* Entry: 100601960; end: 100601a33;  */

long FUN_100601960(long param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0x140;
  FUN_100460200();
  *(undefined4 *)(lVar4 + 8) = 0;
  *(undefined4 *)(lVar4 + 0x10) = param_3;
  func_0x0001004b800c(lVar4 + 0x18);
  if (param_2 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + lVar6 * 0x20);
      plVar5 = (long *)*puVar1;
      if ((long *)0x1 < plVar5) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_68 = puVar1[1];
      uStack_70 = *puVar1;
      uStack_58 = puVar1[3];
      uStack_60 = puVar1[2];
      FUN_1005a70c4(lVar4 + 0x18,&uStack_70);
      lVar6 = lVar6 + 1;
    } while (lVar6 != param_2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar4;
  }
  func_0x000107c60e78();
  return lRam0000000113815c80;
}



/* Entry: 100601a34; end: 100601a6b;  */

undefined8 FUN_100601a34(void)

{
  return uRam0000000113815c80;
}



/* Entry: 100601a6c; end: 100601aa3;  */

void FUN_100601a6c(void)

{
  func_0x000100601a4c();
  func_0x000107c60c94();
  FUN_100124844();
  return;
}



/* Entry: 100601aa4; end: 100601ad7;  */

long * FUN_100601aa4(long *param_1)

{
  long extraout_x8;
  
  if (*param_1 != 0) {
    FUN_100608b94();
    (**(code **)(extraout_x8 + 0xc0))();
  }
  return param_1;
}



/* Entry: 100601ad8; end: 100601aeb;  */

void FUN_100601ad8(void)

{
  return;
}



/* Entry: 100601aec; end: 100601b4f;  */

undefined8 * FUN_100601aec(long *param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  iVar1 = (int)&uStack_50;
  FUN_100601ad8();
  uStack_28 = extraout_x8;
  FUN_100601b50();
  uStack_48 = unaff_x19[1];
  uStack_50 = *unaff_x19;
  uStack_38 = unaff_x19[3];
  uStack_40 = unaff_x19[2];
  (**(code **)(*param_1 + 0x150))();
  FUN_100601c64(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  func_0x000107c60e78();
  if (iVar1 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  return puRam0000000113815c70;
}



/* Entry: 100601b50; end: 100601b5f;  */

undefined8 FUN_100601b50(void)

{
  return uRam0000000113815c70;
}



/* Entry: 100601b60; end: 100601c0f;  */

void FUN_100601b60(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_68 [72];
  
  plVar3 = param_1;
  func_0x000100460dc4();
  if (*plVar3 == 0) {
    FUN_100460de4(auStack_68);
    param_1 = (long *)*param_1;
    if ((long *)0x1 < param_1) {
      do {
        lVar4 = *param_1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        (*(code *)param_1[1])();
      }
    }
    FUN_100467a48(auStack_68);
  }
  else {
    param_1 = (long *)*param_1;
    if ((long *)0x1 < param_1) {
      do {
        lVar4 = *param_1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100601bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_1[1])();
        return;
      }
    }
  }
  return;
}



/* Entry: 100601c10; end: 100601c63;  */

void FUN_100601c10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  FUN_100601b60(&uStack_40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  func_0x000107c60e78();
  return;
}



/* Entry: 100601c64; end: 100601c8b;  */

void FUN_100601c64(void)

{
  return;
}



/* Entry: 100601c8c; end: 100601cb3;  */

long FUN_100601c8c(long param_1)

{
  func_0x000107c60ca0(param_1 + 0x20);
  FUN_100601cb4();
  return param_1;
}



/* Entry: 100601cb4; end: 100601d1b;  */

void FUN_100601cb4(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x19 + 8);
  return;
}



/* Entry: 100601d1c; end: 100601d3f;  */

void FUN_100601d1c(long param_1)

{
  func_0x000100601d10();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100601d40; end: 100601d8b;  */

void FUN_100601d40(undefined8 param_1)

{
  long unaff_x21;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x21 + 0x18) = param_1;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  return;
}



/* Entry: 100601d8c; end: 100601edf;  */

void FUN_100601d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_210 [24];
  undefined1 uStack_1f8;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [200];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [184];
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined1 auStack_40 [32];
  undefined1 auStack_20 [32];
  
  func_0x000100601d74();
  FUN_100601ee0(auStack_48,param_5);
  uStack_110 = param_1;
  uStack_108 = param_2;
  FUN_100601f8c(auStack_100,param_5);
  FUN_100601fc0(auStack_1d8,&uStack_110);
  FUN_10002b838(auStack_1f0,param_2);
  if (*(char *)(param_5 + 0xb0) == '\x01') {
    FUN_10028af84(auStack_210,param_5 + 0x68);
  }
  else {
    auStack_210[0] = 0;
    uStack_1f8 = 0;
  }
  FUN_100601fe8(param_1,auStack_1d8,param_3,param_4,auStack_1f0,param_6,auStack_48[0],uStack_44,
                auStack_40,auStack_20,auStack_210,param_7);
  FUN_1001148fc(auStack_210);
  func_0x00010061db94();
  func_0x000100609690();
  FUN_100609698(auStack_100);
  func_0x00010061dc40(auStack_48);
  return;
}



/* Entry: 100601ee0; end: 100601f77;  */

void FUN_100601ee0(byte *param_1,long param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    *param_1 = (*(byte *)(param_2 + 0x40) | *(byte *)(param_2 + 0x41) ^ 0xff) & 1;
    uVar1 = *(undefined4 *)(param_2 + 0x88);
    if (*(char *)(param_2 + 0x8c) == '\0') {
      uVar1 = 0;
    }
    *(undefined4 *)(param_1 + 4) = uVar1;
    FUN_10028af84(param_1 + 8,param_2 + 0x48);
    FUN_10028af84(param_1 + 0x28,param_2 + 0x90);
  }
  else {
    *param_1 = 1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[0x20] = 0;
    param_1[0x28] = 0;
    param_1[0x40] = 0;
  }
  return;
}



/* Entry: 100601f78; end: 100601f8b;  */

void FUN_100601f78(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_100627360();
    *(undefined1 *)(param_1 + 0xb0) = 1;
    return;
  }
  return;
}



/* Entry: 100601f8c; end: 100601fbf;  */

undefined1 * FUN_100601f8c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0xb0] = 0;
  FUN_100601f78();
  return param_1;
}



/* Entry: 100601fc0; end: 100601fe7;  */

undefined8 * FUN_100601fc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  FUN_100601f8c(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 100601fe8; end: 10060215b;  */

void FUN_100601fe8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined1 auStack_2f0 [200];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [56];
  undefined1 auStack_1d8 [256];
  undefined1 auStack_d8 [184];
  undefined1 auStack_20 [32];
  
  func_0x000100601d74();
  FUN_1004ba7c4(auStack_20,param_1 + 0x1e0,param_5);
  FUN_10060215c(auStack_1d8,param_1,auStack_20,param_1 + 0x88,in_stack_00000060,param_4,0,param_7,
                param_8,in_stack_00000070,in_stack_00000068,in_stack_00000078);
  if (*(char *)(param_1 + 200) == '\x01') {
    plVar1 = (long *)*param_6;
    FUN_10002b838(auStack_228,"Abort requests in Guest Mode");
    func_0x000105394120(auStack_210,10,auStack_228);
    func_0x000105395400(*(undefined8 *)(*plVar1 + 0x30),plVar1,auStack_1d8,auStack_210);
    FUN_100601c8c(auStack_210);
    func_0x000107c60ca0(auStack_228);
  }
  else {
    func_0x000100608908(auStack_2f0);
    FUN_100608910(param_1,auStack_2f0,param_3,auStack_1d8,auStack_d8,param_6);
    func_0x00010061dba4();
  }
  func_0x00010061dc18(auStack_1d8);
  func_0x000107c60ca0(auStack_20);
  return;
}



/* Entry: 10060215c; end: 100602573;  */

void FUN_10060215c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined4 param_7,undefined4 param_8)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_268 [32];
  undefined1 auStack_248 [256];
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [32];
  long lStack_108;
  char cStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  char cStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_98;
  char cStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4c;
  int iStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  func_0x000100601d74();
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x3f800000;
  cStack_c8 = '\0';
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  auStack_e0[0] = 0;
  uStack_a0 = 0x3f800000;
  uStack_98 = 0;
  cStack_80 = '\0';
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  plStack_68 = (long *)0x0;
  uStack_58 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  iStack_48 = 0;
  lStack_108 = param_1 + 0x220;
  cStack_100 = '\x01';
  func_0x000107c60d88();
  bVar3 = *(byte *)(param_1 + 0x100);
  if ((bVar3 & 1) == 0) {
    FUN_100602574(auStack_248,param_2);
    func_0x000100602604(param_1 + 0xe8,auStack_248);
    FUN_100602658();
  }
  else {
    FUN_10054bf64(&lStack_108);
  }
  puVar9 = *(undefined8 **)(param_1 + 0xe0);
  if (puVar9 == (undefined8 *)0x0) {
    uVar8 = 0;
  }
  else {
    FUN_10028af84(auStack_128,param_1 + 0x1c0);
    FUN_10028af84(auStack_148,param_4);
    (**(code **)*puVar9)(auStack_248,puVar9,param_2,param_3,param_1 + 0xe8,auStack_128,auStack_148);
    FUN_100603cf4(&uStack_f8,auStack_248);
    FUN_1006038cc(auStack_248);
    FUN_1001148fc(auStack_148);
    FUN_1001148fc(auStack_128);
    if (((bVar3 & 1) == 0) && (cStack_c8 == '\x01')) {
      puVar7 = auStack_e0;
      FUN_1000e107c(puVar7,param_1 + 0x200);
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000105394150(param_1,auStack_e0);
      }
    }
    plVar1 = plStack_68;
    if (cStack_80 == '\x01') {
      FUN_10002b838(auStack_248,"x-snap-route-tag");
      FUN_100607eb8();
      func_0x000107c60ca4();
      FUN_100602658();
      plVar1 = plStack_68;
    }
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      FUN_10060413c(&uStack_40,plVar1 + 2);
      func_0x000107c60ca4();
    }
    uVar8 = 2;
    if (iStack_48 != 1) {
      uVar8 = 0;
    }
  }
  if (cStack_100 == '\x01') {
    FUN_10054bf64(&lStack_108);
  }
  if ((bRam00000001130d12f8 & 1) == 0) {
    iVar6 = 0x130d12f8;
    func_0x000107c60e48();
    if (iVar6 != 0) {
      FUN_100604328(0x1130d12e0);
      func_0x000107c60e34(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                          ,0x1130d12e0,0x100000000);
      func_0x000107c60e4c(0x1130d12f8);
    }
  }
  uVar2 = uRam00000001130d12e8;
  if (-1 < (char)bRam00000001130d12f7) {
    uVar2 = (ulong)bRam00000001130d12f7;
  }
  if ((((param_6 & 1) == 0) && (uVar2 != 0)) && (*(int *)(param_1 + 0x218) == 2)) {
    FUN_10002b838(auStack_248,"accept-encoding");
    FUN_100607eb8();
    func_0x000107c60ca4();
    FUN_100602658();
  }
  FUN_10028af84(auStack_268,in_stack_00000068);
  uStack_278 = in_stack_00000070[1];
  uStack_280 = *in_stack_00000070;
  if (in_stack_00000070[1] != 0) {
    plVar1 = (long *)(in_stack_00000070[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_100608144(auStack_248,param_5,param_2,param_6,param_7,param_8,in_stack_00000060,&uStack_40,
                uVar8);
  FUN_100608514(&uStack_280);
  FUN_1001148fc(auStack_268);
  func_0x00010060864c(extraout_x8,auStack_248,&uStack_f8);
  func_0x00010060867c(auStack_248);
  FUN_1000df5a0(&lStack_108);
  FUN_1006038cc(&uStack_f8);
  func_0x00010028ad98(&uStack_40);
  return;
}



/* Entry: 100602574; end: 100602657;  */

undefined8 FUN_100602574(undefined8 param_1,char *param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  if (param_2[0x17] < '\0') {
    if (*(long *)(param_2 + 8) == 0) goto LAB_1006025d0;
    pcVar2 = *(char **)param_2;
  }
  else {
    pcVar2 = param_2;
    if (param_2[0x17] == '\0') goto LAB_1006025d0;
  }
  if ((*pcVar2 == '/') &&
     (pcVar2 = param_2, func_0x000107c60be8(param_2,0x2f,0xffffffffffffffff),
     (char *)0x1 < pcVar2 + 1)) {
    func_0x000107c60c98(param_1,param_2,1,pcVar2 + -1,&stack0xffffffffffffffef);
    return param_1;
  }
LAB_1006025d0:
  puVar1 = &UNK_10f73f745;
  func_0x00010002b82c(param_1,&UNK_10f73f745);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(unaff_x20,unaff_x19,puVar1);
  return unaff_x20;
}



/* Entry: 100602658; end: 10060265f;  */

void FUN_100602658(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000068);
  return;
}



/* Entry: 100602660; end: 1006029d7;  */

void FUN_100602660(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  undefined1 auStack_3b8 [40];
  undefined1 auStack_390 [40];
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [48];
  char cStack_2a8;
  undefined1 auStack_2a0 [88];
  byte bStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  char cStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_f0 [72];
  undefined1 auStack_a8 [72];
  
  if (*(long *)(param_2 + 0x48) != 0) {
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_160 = 0x3f800000;
    if (*(char *)(param_7 + 0x18) == '\x01') {
      uStack_368 = 4;
      FUN_1006029d8();
      func_0x000107c60ca4();
    }
    if (*(char *)(param_6 + 0x18) == '\x01') {
      uStack_368 = 2;
      FUN_1006029d8();
      func_0x000107c60ca4();
    }
    uVar1 = *(ulong *)(param_3 + 8);
    if (-1 < (char)*(byte *)(param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_3 + 0x17);
    }
    if (uVar1 != 0) {
      uStack_368 = 3;
      FUN_1006029d8();
      func_0x000107c60ca4();
    }
    uVar1 = *(ulong *)(param_5 + 8);
    if (-1 < (char)*(byte *)(param_5 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_5 + 0x17);
    }
    if (uVar1 != 0) {
      uStack_368 = 1;
      FUN_1006029d8();
      func_0x000107c60ca4();
    }
    uStack_368 = 0;
    FUN_1006029d8();
    func_0x000107c60ca4();
    plVar3 = *(long **)(param_2 + 0x48);
    func_0x00010059fca0(auStack_3b8,&uStack_180);
    func_0x00010059fca0(auStack_390,auStack_3b8);
    (**(code **)(*plVar3 + 0x10))(&uStack_368,plVar3,auStack_390);
    if ((bStack_248 & 1) == 0) {
      bVar2 = false;
      uStack_240 = uStack_240 & 0xffffffffffffff00;
      cStack_188 = '\0';
    }
    else if (cStack_2a8 == '\x01') {
      uStack_128 = uStack_2f0;
      uStack_120 = CONCAT44(uStack_120._4_4_,uStack_2e8);
      uStack_118 = uStack_2e0;
      func_0x000100602fb4();
      FUN_100602fc0(auStack_f0,auStack_2d8);
      FUN_100603734();
      FUN_10028b0c8(auStack_a8,auStack_2a0);
      func_0x000100603740();
      FUN_1006038cc(&uStack_128);
      bVar2 = true;
    }
    else {
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_118 = 0;
      func_0x000100602fb4();
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_130 = 0x3f800000;
      FUN_100602fc0(auStack_f0,&uStack_150);
      FUN_100603734();
      FUN_10028b0c8(auStack_a8,auStack_2a0);
      func_0x000100603740();
      FUN_1006038cc(&uStack_128);
      FUN_1001ba7c0(&uStack_150);
      bVar2 = false;
    }
    FUN_10028b84c(&uStack_368);
    func_0x00010059fc34(auStack_390);
    func_0x00010059fc34(auStack_3b8);
    if (cStack_188 == '\x01') {
      if (!bVar2) {
        func_0x000100603994(&uStack_368);
        uStack_240 = CONCAT44(uStack_364,uStack_368);
        uStack_238 = uStack_360;
        uStack_230 = uStack_358;
        FUN_1006038cc(&uStack_368);
      }
      FUN_100603bac(param_1,&uStack_240);
      FUN_100603cc4();
      FUN_100603cec();
      return;
    }
    FUN_100603cc4();
    FUN_100603cec();
  }
  func_0x000100603994(param_1);
  return;
}



/* Entry: 1006029d8; end: 1006029e3;  */

long * FUN_1006029d8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong unaff_x22;
  long *plVar6;
  int in_stack_00000058;
  long in_stack_00000240;
  ulong in_stack_00000248;
  long in_stack_00000250;
  float in_stack_00000260;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  uVar5 = (ulong)in_stack_00000058;
  if (in_stack_00000248 != 0) {
    uVar2 = in_stack_00000248 - 1;
    if ((in_stack_00000248 & uVar2) == 0) {
      unaff_x22 = uVar2 & uVar5;
    }
    else {
      unaff_x22 = uVar5;
      if (in_stack_00000248 <= uVar5) {
        uVar3 = 0;
        if (in_stack_00000248 != 0) {
          uVar3 = uVar5 / in_stack_00000248;
        }
        unaff_x22 = uVar5 - uVar3 * in_stack_00000248;
      }
    }
    plVar6 = *(long **)(in_stack_00000240 + unaff_x22 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_100602a98;
          uVar3 = plVar6[1];
          if (uVar3 != uVar5) break;
          if ((int)plVar6[2] == in_stack_00000058) goto LAB_100602bb0;
        }
        if ((in_stack_00000248 & uVar2) == 0) {
          uVar3 = uVar3 & uVar2;
        }
        else if (in_stack_00000248 <= uVar3) {
          uVar1 = 0;
          if (in_stack_00000248 != 0) {
            uVar1 = uVar3 / in_stack_00000248;
          }
          uVar3 = uVar3 - uVar1 * in_stack_00000248;
        }
      } while (uVar3 == unaff_x22);
    }
  }
LAB_100602a98:
  plVar6 = (long *)0x30;
  func_0x000107c60e20();
  uStack_58 = 1;
  *plVar6 = 0;
  plVar6[1] = uVar5;
  *(int *)(plVar6 + 2) = in_stack_00000058;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[3] = 0;
  plStack_68 = plVar6;
  puStack_60 = &stack0x00000250;
  FUN_100602be0();
  if ((in_stack_00000248 == 0) ||
     (in_stack_00000260 * (float)in_stack_00000248 < (float)extraout_x8)) {
    func_0x000100602bec(in_stack_00000248 << 1);
    FUN_10059f3e0(&stack0x00000240);
    if ((in_stack_00000248 & in_stack_00000248 - 1) == 0) {
      unaff_x22 = in_stack_00000248 - 1 & uVar5;
    }
    else {
      unaff_x22 = uVar5;
      if (in_stack_00000248 <= uVar5) {
        uVar2 = 0;
        if (in_stack_00000248 != 0) {
          uVar2 = uVar5 / in_stack_00000248;
        }
        unaff_x22 = uVar5 - uVar2 * in_stack_00000248;
      }
    }
  }
  plVar6 = plStack_68;
  plVar4 = *(long **)(in_stack_00000240 + unaff_x22 * 8);
  if (plVar4 == (long *)0x0) {
    *plStack_68 = in_stack_00000250;
    *(undefined1 **)(in_stack_00000240 + unaff_x22 * 8) = &stack0x00000250;
    if (*plStack_68 != 0) {
      uVar5 = *(ulong *)(*plStack_68 + 8);
      if ((in_stack_00000248 & in_stack_00000248 - 1) == 0) {
        uVar5 = uVar5 & in_stack_00000248 - 1;
      }
      else if (in_stack_00000248 <= uVar5) {
        uVar2 = 0;
        if (in_stack_00000248 != 0) {
          uVar2 = uVar5 / in_stack_00000248;
        }
        uVar5 = uVar5 - uVar2 * in_stack_00000248;
      }
      *(long **)(in_stack_00000240 + uVar5 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar4;
    *plVar4 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  FUN_100602be0();
  FUN_10059f870(&plStack_68);
LAB_100602bb0:
  return plVar6 + 3;
}



/* Entry: 1006029e4; end: 100602bdf;  */

long * FUN_1006029e4(long *param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong extraout_x8;
  long lVar5;
  long extraout_x8_00;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x22;
  long *plVar10;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  iVar2 = *param_2;
  uVar9 = (ulong)iVar2;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar4 = uVar8 - 1;
    if ((uVar8 & uVar4) == 0) {
      unaff_x22 = uVar4 & uVar9;
    }
    else {
      unaff_x22 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x22 = uVar9 - uVar6 * uVar8;
      }
    }
    plVar10 = *(long **)(*param_1 + unaff_x22 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_100602a98;
          uVar6 = plVar10[1];
          if (uVar6 != uVar9) break;
          if ((int)plVar10[2] == iVar2) goto LAB_100602bb0;
        }
        if ((uVar8 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar8 <= uVar6) {
          uVar3 = 0;
          if (uVar8 != 0) {
            uVar3 = uVar6 / uVar8;
          }
          uVar6 = uVar6 - uVar3 * uVar8;
        }
      } while (uVar6 == unaff_x22);
    }
  }
LAB_100602a98:
  plVar1 = param_1 + 2;
  plVar10 = (long *)0x30;
  func_0x000107c60e20();
  uStack_58 = 1;
  *plVar10 = 0;
  plVar10[1] = uVar9;
  *(int *)(plVar10 + 2) = iVar2;
  plVar10[4] = 0;
  plVar10[5] = 0;
  plVar10[3] = 0;
  plStack_68 = plVar10;
  plStack_60 = plVar1;
  FUN_100602be0();
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)extraout_x8)) {
    func_0x000100602bec(uVar8 << 1);
    FUN_10059f3e0(param_1);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x22 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x22 = uVar9;
      if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        unaff_x22 = uVar9 - uVar4 * uVar8;
      }
    }
  }
  plVar10 = plStack_68;
  lVar5 = *param_1;
  plVar7 = *(long **)(lVar5 + unaff_x22 * 8);
  if (plVar7 == (long *)0x0) {
    *plStack_68 = *plVar1;
    *plVar1 = (long)plStack_68;
    *(long **)(lVar5 + unaff_x22 * 8) = plVar1;
    if (*plStack_68 != 0) {
      uVar9 = *(ulong *)(*plStack_68 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar4 * uVar8;
      }
      *(long **)(lVar5 + uVar9 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar7;
    *plVar7 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  FUN_100602be0();
  param_1[3] = extraout_x8_00;
  FUN_10059f870(&plStack_68);
LAB_100602bb0:
  return plVar10 + 3;
}



/* Entry: 100602be0; end: 100602c03;  */

void FUN_100602be0(void)

{
  return;
}



/* Entry: 100602c04; end: 100602c53;  */

long FUN_100602c04(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000107c60c94(uVar1);
    lVar2 = uVar1 + 0x18;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_100602c54();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 100602c54; end: 100602d9b;  */

undefined8 * FUN_100602c54(long *param_1,undefined8 *param_2,long *param_3)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long extraout_x9;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar11 = *param_1;
  plVar9 = (long *)(param_1[1] - lVar11);
  uVar5 = ((long)plVar9 >> 3) * -0x5555555555555555 + 1;
  if (uVar5 < 0xaaaaaaaaaaaaaab) {
    plStack_48 = param_1 + 2;
    lVar6 = *plStack_48 - lVar11 >> 3;
    uVar7 = lVar6 * 0x5555555555555556;
    if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
      uVar7 = uVar5;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar7 == 0) {
      lVar6 = 0;
LAB_100602cf4:
      puVar8 = (undefined8 *)(lVar6 + (long)plVar9);
      lVar10 = lVar6 + uVar7 * 0x18;
      lStack_68 = lVar6;
      puStack_60 = puVar8;
      puStack_58 = puVar8;
      lStack_50 = lVar10;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        FUN_100033dac(puVar8,*param_2,param_2[1]);
        lVar11 = *param_1;
        plVar9 = (long *)(param_1[1] - lVar11);
      }
      else {
        uVar12 = *param_2;
        puVar8[1] = param_2[1];
        *puVar8 = uVar12;
        puVar8[2] = param_2[2];
      }
      func_0x000107c610b4((long)puVar8 - (long)plVar9,lVar11,plVar9);
      *param_1 = (long)puVar8 - (long)plVar9;
      param_1[1] = (long)(puVar8 + 3);
      param_1[2] = lVar10;
      if (lVar11 != 0) {
        func_0x000107c60e14(lVar11);
      }
      return puVar8 + 3;
    }
    if (uVar7 < 0xaaaaaaaaaaaaaab) {
      lVar6 = uVar7 * 0x18;
      func_0x000107c60e20();
      goto LAB_100602cf4;
    }
  }
  else {
    func_0x000104bdcf60();
  }
  func_0x000104bd35f4();
  func_0x000104c37e04(&lStack_68);
  func_0x000107c60bd8();
  cVar1 = *(char *)((long)param_3 + 0x17);
  plVar2 = (long *)*param_3;
  if (-1 < (long)cVar1) {
    plVar2 = param_3;
  }
  lVar6 = param_3[1];
  if (-1 < cVar1) {
    lVar6 = (long)cVar1;
  }
  plVar3 = (long *)((long)plVar2 + lVar6);
  lVar6 = (long)plVar3 - (long)plVar2;
  func_0x000100602dc4();
  if (extraout_x9 < 0) {
    plVar4 = (long *)*plVar9;
    puVar8 = (undefined8 *)((long)param_2 - (long)plVar4);
    if (lVar11 == 0) goto LAB_100602e6c;
    lVar10 = plVar9[1];
    plVar9 = plVar4;
  }
  else {
    puVar8 = (undefined8 *)((long)param_2 - (long)plVar9);
    plVar4 = plVar9;
    lVar10 = extraout_x9;
    if (lVar11 == 0) {
LAB_100602e6c:
      return (undefined8 *)((long)puVar8 + (long)plVar4);
    }
  }
  if (plVar9 <= plVar3 && plVar3 < (long *)((long)plVar9 + lVar10 + 1)) {
    func_0x0001056433f4();
    func_0x0001056430d8();
    func_0x0001056433ac();
    FUN_100602e84();
    FUN_100602e94();
    func_0x000105643378();
    return puVar8;
  }
  FUN_100602e84();
  lVar11 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar11 < 0) {
    lVar11 = param_1[1];
    lVar10 = (param_1[2] & 0x7fffffffffffffffU) - 1;
    if ((undefined8 *)(lVar10 - lVar11) < param_2) goto LAB_100602ef8;
    plVar9 = (long *)*param_1;
  }
  else {
    lVar10 = 0x16;
    plVar9 = param_1;
    if ((undefined8 *)(0x16 - lVar11) < param_2) {
LAB_100602ef8:
      FUN_1000644b8(param_1,lVar10,(long)param_2 + (lVar11 - lVar10),lVar11,plVar2,0,param_2);
      plVar9 = (long *)*param_1;
      lVar10 = lVar11;
      goto LAB_100602f40;
    }
  }
  lVar10 = (long)plVar2;
  if (lVar11 - (long)plVar2 != 0) {
    func_0x000107c610b8((long)plVar9 + (long)plVar2 + (long)param_2,(long)plVar9 + (long)plVar2,
                        lVar11 - (long)plVar2);
    lVar10 = lVar11;
  }
LAB_100602f40:
  lVar10 = lVar10 + (long)param_2;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = lVar10;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)lVar10 & 0x7f;
  }
  *(undefined1 *)((long)plVar9 + lVar10) = 0;
  if (lVar6 - (long)plVar3 != 0) {
    func_0x000107c610b8((long)plVar9 + (long)plVar2,plVar3,lVar6 - (long)plVar3);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (long *)*param_1;
  }
  return (undefined8 *)((long)plVar2 + (long)param_1);
}



/* Entry: 100602d9c; end: 100602ddb;  */

long FUN_100602d9c(undefined8 *param_1,ulong param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long extraout_x9;
  long lVar7;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *puVar8;
  
  cVar1 = *(char *)((long)param_3 + 0x17);
  plVar3 = (long *)*param_3;
  if (-1 < (long)cVar1) {
    plVar3 = param_3;
  }
  lVar5 = param_3[1];
  if (-1 < cVar1) {
    lVar5 = (long)cVar1;
  }
  plVar4 = (long *)((long)plVar3 + lVar5);
  lVar5 = (long)plVar4 - (long)plVar3;
  func_0x000100602dc4();
  if (extraout_x9 < 0) {
    plVar6 = (long *)*unaff_x21;
    lVar7 = param_2 - (long)plVar6;
    if (unaff_x20 == 0) goto LAB_100602e6c;
    lVar2 = unaff_x21[1];
    unaff_x21 = plVar6;
  }
  else {
    lVar7 = param_2 - (long)unaff_x21;
    plVar6 = unaff_x21;
    lVar2 = extraout_x9;
    if (unaff_x20 == 0) {
LAB_100602e6c:
      return lVar7 + (long)plVar6;
    }
  }
  if (unaff_x21 <= plVar4 && plVar4 < (long *)((long)unaff_x21 + lVar2 + 1)) {
    func_0x0001056433f4();
    func_0x0001056430d8();
    func_0x0001056433ac();
    FUN_100602e84();
    FUN_100602e94();
    func_0x000105643378();
    return lVar7;
  }
  FUN_100602e84();
  lVar7 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar7 < 0) {
    lVar7 = param_1[1];
    lVar2 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if ((ulong)(lVar2 - lVar7) < param_2) goto LAB_100602ef8;
    puVar8 = (undefined8 *)*param_1;
  }
  else {
    lVar2 = 0x16;
    puVar8 = param_1;
    if (0x16U - lVar7 < param_2) {
LAB_100602ef8:
      FUN_1000644b8(param_1,lVar2,(param_2 - lVar2) + lVar7,lVar7,plVar3,0,param_2);
      puVar8 = (undefined8 *)*param_1;
      lVar2 = lVar7;
      goto LAB_100602f40;
    }
  }
  lVar2 = (long)plVar3;
  if (lVar7 - (long)plVar3 != 0) {
    func_0x000107c610b8((long)puVar8 + (long)plVar3 + param_2,(long)puVar8 + (long)plVar3,
                        lVar7 - (long)plVar3);
    lVar2 = lVar7;
  }
LAB_100602f40:
  lVar2 = lVar2 + param_2;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = lVar2;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)lVar2 & 0x7f;
  }
  *(undefined1 *)((long)puVar8 + lVar2) = 0;
  if (lVar5 - (long)plVar4 != 0) {
    func_0x000107c610b8((long)puVar8 + (long)plVar3,plVar4,lVar5 - (long)plVar4);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (undefined8 *)*param_1;
  }
  return (long)plVar3 + (long)param_1;
}



/* Entry: 100602ddc; end: 100602e83;  */

long FUN_100602ddc(undefined8 *param_1,ulong param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  long extraout_x9;
  long lVar3;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *puVar4;
  
  func_0x000100602dc4();
  if (extraout_x9 < 0) {
    plVar2 = (long *)*unaff_x21;
    lVar3 = param_2 - (long)plVar2;
    if (unaff_x20 == 0) goto LAB_100602e6c;
    lVar1 = unaff_x21[1];
    unaff_x21 = plVar2;
  }
  else {
    lVar3 = param_2 - (long)unaff_x21;
    plVar2 = unaff_x21;
    lVar1 = extraout_x9;
    if (unaff_x20 == 0) {
LAB_100602e6c:
      return lVar3 + (long)plVar2;
    }
  }
  if (unaff_x21 <= param_4 && param_4 < (long *)((long)unaff_x21 + lVar1 + 1)) {
    func_0x0001056433f4();
    func_0x0001056430d8();
    func_0x0001056433ac();
    FUN_100602e84();
    FUN_100602e94();
    func_0x000105643378();
    return lVar3;
  }
  FUN_100602e84();
  lVar3 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = param_1[1];
    lVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if ((ulong)(lVar1 - lVar3) < param_2) goto LAB_100602ef8;
    puVar4 = (undefined8 *)*param_1;
  }
  else {
    lVar1 = 0x16;
    puVar4 = param_1;
    if (0x16U - lVar3 < param_2) {
LAB_100602ef8:
      FUN_1000644b8(param_1,lVar1,(param_2 - lVar1) + lVar3,lVar3,param_3,0,param_2);
      puVar4 = (undefined8 *)*param_1;
      lVar1 = lVar3;
      goto LAB_100602f40;
    }
  }
  lVar1 = param_3;
  if (lVar3 - param_3 != 0) {
    func_0x000107c610b8((long)puVar4 + param_3 + param_2,(long)puVar4 + param_3,lVar3 - param_3);
    lVar1 = lVar3;
  }
LAB_100602f40:
  lVar1 = lVar1 + param_2;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = lVar1;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)lVar1 & 0x7f;
  }
  *(undefined1 *)((long)puVar4 + lVar1) = 0;
  if (param_5 - (long)param_4 != 0) {
    func_0x000107c610b8((long)puVar4 + param_3,param_4,param_5 - (long)param_4);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (undefined8 *)*param_1;
  }
  return param_3 + (long)param_1;
}



/* Entry: 100602e84; end: 100602e93;  */

void FUN_100602e84(void)

{
  return;
}



/* Entry: 100602e94; end: 100602f9b;  */

long FUN_100602e94(undefined8 *param_1,ulong param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = param_1[1];
    lVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if ((ulong)(lVar1 - lVar2) < param_2) goto LAB_100602ef8;
    puVar3 = (undefined8 *)*param_1;
  }
  else {
    lVar1 = 0x16;
    puVar3 = param_1;
    if (0x16U - lVar2 < param_2) {
LAB_100602ef8:
      FUN_1000644b8(param_1,lVar1,(param_2 - lVar1) + lVar2,lVar2,param_3,0,param_2);
      puVar3 = (undefined8 *)*param_1;
      lVar1 = lVar2;
      goto LAB_100602f40;
    }
  }
  lVar1 = param_3;
  if (lVar2 - param_3 != 0) {
    func_0x000107c610b8((long)puVar3 + param_3 + param_2,(long)puVar3 + param_3,lVar2 - param_3);
    lVar1 = lVar2;
  }
LAB_100602f40:
  lVar1 = lVar1 + param_2;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = lVar1;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)lVar1 & 0x7f;
  }
  *(undefined1 *)((long)puVar3 + lVar1) = 0;
  if (param_5 - param_4 != 0) {
    func_0x000107c610b8((long)puVar3 + param_3,param_4,param_5 - param_4);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (undefined8 *)*param_1;
  }
  return param_3 + (long)param_1;
}



/* Entry: 100602f9c; end: 100602fbf;  */

void FUN_100602f9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000020);
  return;
}



/* Entry: 100602fc0; end: 100603243;  */

undefined1  [16] FUN_100602fc0(long *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  long **pplVar3;
  long *plVar4;
  long **pplVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 unaff_x21;
  int *piVar14;
  undefined8 unaff_x22;
  ulong uVar15;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long *aplStack_c8 [3];
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  pplVar5 = &plStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = (long **)param_1;
  if (*(long *)(param_2 + 6) == 0) {
    plStack_70 = (long *)0xe00000004;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 4) = 0x3f800000;
    func_0x000100603478(param_1,&plStack_70,&plStack_68);
  }
  else {
    param_1[1] = 0;
    *param_1 = 0;
    plVar4 = param_1 + 2;
    param_1[3] = 0;
    *plVar4 = 0;
    *(undefined4 *)(param_1 + 4) = 0x3f800000;
    piVar14 = param_2 + 4;
    unaff_x22 = 1;
LAB_100603018:
    piVar14 = *(int **)piVar14;
    unaff_x21 = 0;
    pplVar5 = (long **)param_2;
    if (piVar14 != (int *)0x0) {
      iVar1 = piVar14[4];
      unaff_x24 = (ulong)iVar1;
      unaff_x23 = param_1[1];
      if (unaff_x23 != 0) {
        uVar7 = unaff_x23 - 1;
        if ((unaff_x23 & uVar7) == 0) {
          unaff_x25 = uVar7 & unaff_x24;
        }
        else {
          unaff_x25 = unaff_x24;
          if (unaff_x23 <= unaff_x24) {
            uVar13 = 0;
            if (unaff_x23 != 0) {
              uVar13 = unaff_x24 / unaff_x23;
            }
            unaff_x25 = unaff_x24 - uVar13 * unaff_x23;
          }
        }
        plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
        if (plVar9 != (long *)0x0) {
          do {
            while( true ) {
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) goto LAB_1006030b0;
              uVar13 = plVar9[1];
              if (uVar13 != unaff_x24) break;
              if (*(int *)(plVar9 + 2) == iVar1) goto LAB_100603018;
            }
            if ((unaff_x23 & uVar7) == 0) {
              uVar13 = uVar13 & uVar7;
            }
            else if (unaff_x23 <= uVar13) {
              uVar15 = 0;
              if (unaff_x23 != 0) {
                uVar15 = uVar13 / unaff_x23;
              }
              uVar13 = uVar13 - uVar15 * unaff_x23;
            }
          } while (uVar13 == unaff_x25);
        }
      }
LAB_1006030b0:
      plVar9 = (long *)0x18;
      func_0x000107c60e20();
      uStack_60 = 1;
      *plVar9 = 0;
      plVar9[1] = unaff_x24;
      *(int *)(plVar9 + 2) = iVar1;
      plStack_70 = plVar9;
      plStack_68 = plVar4;
      FUN_100602be0();
      if ((unaff_x23 == 0) || (*(float *)(param_1 + 4) * (float)unaff_x23 < (float)extraout_x8)) {
        func_0x000100602bec(unaff_x23 << 1);
        func_0x000100603500(param_1);
        unaff_x23 = param_1[1];
        if ((unaff_x23 & unaff_x23 - 1) == 0) {
          unaff_x25 = unaff_x23 - 1 & unaff_x24;
        }
        else {
          unaff_x25 = unaff_x24;
          if (unaff_x23 <= unaff_x24) {
            uVar7 = 0;
            if (unaff_x23 != 0) {
              uVar7 = unaff_x24 / unaff_x23;
            }
            unaff_x25 = unaff_x24 - uVar7 * unaff_x23;
          }
        }
      }
      lVar10 = *param_1;
      plVar9 = *(long **)(lVar10 + unaff_x25 * 8);
      if (plVar9 == (long *)0x0) {
        *plStack_70 = *plVar4;
        *plVar4 = (long)plStack_70;
        *(long **)(lVar10 + unaff_x25 * 8) = plVar4;
        if (*plStack_70 != 0) {
          uVar7 = *(ulong *)(*plStack_70 + 8);
          if ((unaff_x23 & unaff_x23 - 1) == 0) {
            uVar7 = uVar7 & unaff_x23 - 1;
          }
          else if (unaff_x23 <= uVar7) {
            uVar13 = 0;
            if (unaff_x23 != 0) {
              uVar13 = uVar7 / unaff_x23;
            }
            uVar7 = uVar7 - uVar13 * unaff_x23;
          }
          *(long **)(lVar10 + uVar7 * 8) = plStack_70;
        }
      }
      else {
        *plStack_70 = *plVar9;
        *plVar9 = (long)plStack_70;
      }
      plStack_70 = (long *)0x0;
      FUN_100602be0();
      param_1[3] = extraout_x8_00;
      pplVar3 = &plStack_70;
      FUN_100603710();
      goto LAB_100603018;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar16._8_8_ = pplVar5;
    auVar16._0_8_ = pplVar3;
    return auVar16;
  }
  func_0x000107c60e78();
  plVar4 = param_1;
  FUN_100603910();
  func_0x000107c35384();
  pcStack_78 = FUN_100603244;
  uVar13 = (ulong)*(int *)pplVar5;
  uVar15 = plVar4[1];
  uVar7 = unaff_x23;
  if (uVar15 != 0) {
    uVar8 = uVar15 - 1;
    if ((uVar15 & uVar8) == 0) {
      uVar7 = uVar8 & uVar13;
    }
    else {
      uVar7 = uVar13;
      if (uVar15 <= uVar13) {
        uVar7 = 0;
        if (uVar15 != 0) {
          uVar7 = uVar13 / uVar15;
        }
        uVar7 = uVar13 - uVar7 * uVar15;
      }
    }
    plVar9 = *(long **)(*plVar4 + uVar7 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_1006032f0;
          uVar11 = plVar9[1];
          if (uVar11 != uVar13) break;
          if ((int)plVar9[2] == *(int *)pplVar5) {
            uVar6 = 0;
            goto LAB_10060341c;
          }
        }
        if ((uVar15 & uVar8) == 0) {
          uVar11 = uVar11 & uVar8;
        }
        else if (uVar15 <= uVar11) {
          uVar2 = 0;
          if (uVar15 != 0) {
            uVar2 = uVar11 / uVar15;
          }
          uVar11 = uVar11 - uVar2 * uVar15;
        }
      } while (uVar11 == uVar7);
    }
  }
LAB_1006032f0:
  uStack_b0 = unaff_x24;
  uStack_a8 = unaff_x23;
  uStack_a0 = unaff_x22;
  uStack_98 = unaff_x21;
  plStack_90 = (long *)pplVar3;
  plStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x0001006034b8(aplStack_c8,plVar4,uVar13);
  if ((uVar15 == 0) || (*(float *)(plVar4 + 4) * (float)uVar15 < (float)(plVar4[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar15) {
      uVar7 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar7 = uVar7 | uVar15 << 1;
    uVar15 = (ulong)((float)(plVar4[3] + 1) / *(float *)(plVar4 + 4));
    if (uVar7 <= uVar15) {
      uVar7 = uVar15;
    }
    func_0x000100603500(plVar4,uVar7);
    uVar15 = plVar4[1];
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar7 = uVar15 - 1 & uVar13;
    }
    else {
      uVar7 = uVar13;
      if (uVar15 <= uVar13) {
        uVar7 = 0;
        if (uVar15 != 0) {
          uVar7 = uVar13 / uVar15;
        }
        uVar7 = uVar13 - uVar7 * uVar15;
      }
    }
  }
  plVar9 = aplStack_c8[0];
  lVar10 = *plVar4;
  plVar12 = *(long **)(lVar10 + uVar7 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = plVar4 + 2;
    *aplStack_c8[0] = *plVar12;
    *plVar12 = (long)aplStack_c8[0];
    *(long **)(lVar10 + uVar7 * 8) = plVar12;
    if (*aplStack_c8[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_c8[0] + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar7 = uVar7 & uVar15 - 1;
      }
      else if (uVar15 <= uVar7) {
        uVar13 = 0;
        if (uVar15 != 0) {
          uVar13 = uVar7 / uVar15;
        }
        uVar7 = uVar7 - uVar13 * uVar15;
      }
      *(long **)(lVar10 + uVar7 * 8) = aplStack_c8[0];
    }
  }
  else {
    *aplStack_c8[0] = *plVar12;
    *plVar12 = (long)aplStack_c8[0];
  }
  aplStack_c8[0] = (long *)0x0;
  plVar4[3] = plVar4[3] + 1;
  FUN_100603710(aplStack_c8);
  uVar6 = 1;
LAB_10060341c:
  auVar17._8_8_ = uVar6;
  auVar17._0_8_ = plVar9;
  return auVar17;
}



/* Entry: 100603244; end: 100603443;  */

undefined1  [16] FUN_100603244(long *param_1,int *param_2)

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
          if (plVar8 == (long *)0x0) goto LAB_1006032f0;
          uVar5 = plVar8[1];
          if (uVar5 != uVar7) break;
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_10060341c;
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
LAB_1006032f0:
  func_0x0001006034b8(aplStack_58,param_1,uVar7);
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
    func_0x000100603500(param_1,uVar3);
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
  FUN_100603710(aplStack_58);
  uVar2 = 1;
LAB_10060341c:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = plVar8;
  return auVar10;
}



/* Entry: 100603444; end: 100603477;  */

void FUN_100603444(undefined8 param_1,undefined8 param_2)

{
  FUN_100603244(param_1,param_2,param_2);
  return;
}



/* Entry: 100603478; end: 1006035c7;  */

void FUN_100603478(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    func_0x000100603460(param_1,param_2);
  }
  return;
}



/* Entry: 1006035c8; end: 1006035e3;  */

void FUN_1006035c8(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 >> 0x3d != 0) {
    func_0x000104bd35f4();
    if (param_2 == 0) {
      FUN_1006036e0(param_1);
      param_1[1] = 0;
    }
    else {
      plVar3 = param_1 + 1;
      FUN_1006035c8(plVar3);
      FUN_1006036e0(param_1,plVar3);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 1006035e4; end: 1006036df;  */

void FUN_1006035e4(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1006036e0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1006035c8(plVar3);
    FUN_1006036e0(param_1,plVar3);
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



/* Entry: 1006036e0; end: 10060370f;  */

void FUN_1006036e0(long *param_1,long param_2)

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



/* Entry: 100603710; end: 100603733;  */

undefined8 FUN_100603710(undefined8 param_1)

{
  func_0x0001006036f8(param_1,0);
  return param_1;
}



/* Entry: 100603734; end: 100603773;  */

void FUN_100603734(void)

{
  long unaff_x22;
  long unaff_x28;
  
  FUN_10028af74(unaff_x22 + 0x60,unaff_x28 + 0x58);
  FUN_10028afb0();
  return;
}



/* Entry: 100603774; end: 100603817;  */

void FUN_100603774(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 in_register_00005008;
  
  func_0x000100603768();
  FUN_100603834();
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  if (*(char *)(param_3 + 0x30) == '\x01') {
    func_0x0001006b11f0(*(undefined8 *)(unaff_x20 + 0x18));
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    *(undefined1 *)(unaff_x19 + 0x30) = 1;
  }
  func_0x000100603844(unaff_x19 + 0x38,unaff_x20 + 0x38);
  *(undefined1 *)(unaff_x19 + 0x60) = 0;
  *(undefined1 *)(unaff_x19 + 0x78) = 0;
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    func_0x0001006b11f0(*(undefined8 *)(unaff_x20 + 0x60));
    *(undefined8 *)(unaff_x20 + 0x68) = 0;
    *(undefined8 *)(unaff_x20 + 0x70) = 0;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined1 *)(unaff_x19 + 0x78) = 1;
  }
  FUN_10028acf0(unaff_x19 + 0x80,unaff_x20 + 0x80);
  func_0x0001006038b4();
  return;
}



/* Entry: 100603818; end: 100603833;  */

void FUN_100603818(long param_1)

{
  FUN_100603774();
  *(undefined1 *)(param_1 + 0xb8) = 1;
  return;
}



/* Entry: 100603834; end: 1006038cb;  */

undefined8 FUN_100603834(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = param_2[2];
  return uVar1;
}



/* Entry: 1006038cc; end: 100603903;  */

void FUN_1006038cc(void)

{
  long unaff_x19;
  
  FUN_10048b718();
  func_0x00010028ad98();
  FUN_1001148fc(unaff_x19 + 0x60);
  FUN_100603910(unaff_x19 + 0x38);
  FUN_1001148fc(unaff_x19 + 0x18);
  return;
}



/* Entry: 100603904; end: 10060390f;  */

void FUN_100603904(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    func_0x000107c60e14();
  }
  return;
}



/* Entry: 100603910; end: 10060397b;  */

undefined8 FUN_100603910(void)

{
  undefined8 unaff_x19;
  
  FUN_100603904();
  func_0x0001001248b0();
  FUN_10060397c();
  return unaff_x19;
}



/* Entry: 10060397c; end: 1006039bb;  */

void FUN_10060397c(long *param_1)

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



/* Entry: 1006039bc; end: 100603a03;  */

void FUN_1006039bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  func_0x0001006039a0();
  uVar1 = param_2;
  FUN_10055e610(param_2,param_3,uVar2,0);
  *param_1 = uVar1;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)param_3;
  return;
}



/* Entry: 100603a04; end: 100603b83;  */

void FUN_100603a04(undefined4 *param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [16];
  long alStack_58 [5];
  
  FUN_1006039bc(alStack_58,param_2 + 0x20);
  if (alStack_58[0] == 0) {
    ppuVar4 = &PTR_PTR_1133845a8;
    if (*(undefined ***)(param_2 + 0x40) != (undefined **)0x0) {
      ppuVar4 = *(undefined ***)(param_2 + 0x40);
    }
  }
  else {
    FUN_1006039bc(alStack_58,param_2 + 0x20,param_3);
    if (alStack_58[0] == 0) {
      func_0x000107c2b940(auStack_68,&UNK_10f73abae,0x576,&UNK_10f73ac49,0xb);
      puVar3 = auStack_68;
      func_0x000107c2bec4(puVar3,&UNK_10f73ac55);
      func_0x000107c60c94(auStack_80,param_3);
      func_0x000107c2b938(puVar3,auStack_80);
      func_0x000107c60c9c(auStack_80);
      func_0x000107c2b948(auStack_68);
      puVar3[0x60] = 0;
      puVar3[0x78] = 0;
      *(undefined8 *)(puVar3 + 0x88) = 0;
      *(undefined8 *)(puVar3 + 0x80) = 0;
      *(undefined8 *)(puVar3 + 0x98) = 0;
      *(undefined8 *)(puVar3 + 0x90) = 0;
      *(undefined4 *)(puVar3 + 0xa0) = 0x3f800000;
      puVar3[0xa8] = 0;
      puVar3[0xac] = 0;
      *(undefined4 *)(puVar3 + 0xb0) = 0;
      return;
    }
    ppuVar4 = (undefined **)(alStack_58[0] + 0x20);
  }
  *param_1 = *(undefined4 *)((long)ppuVar4 + 0x24);
  param_1[1] = 0;
  iVar2 = *(int *)(ppuVar4 + 5) + -1;
  if (2 < *(int *)(ppuVar4 + 5) - 2U) {
    iVar2 = 0;
  }
  param_1[2] = iVar2;
  *(long *)(param_1 + 4) = (long)*(int *)((long)ppuVar4 + 0x2c);
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  ppuVar1 = &PTR_PTR_113384580;
  if ((undefined **)ppuVar4[3] != (undefined **)0x0) {
    ppuVar1 = (undefined **)ppuVar4[3];
  }
  FUN_1002a9704(alStack_58,ppuVar1[3],ppuVar1[3] + (long)*(int *)(ppuVar1 + 2) * 4);
  FUN_100602fc0(param_1 + 0xe,alStack_58);
  FUN_1001ba7c0(alStack_58);
  FUN_100603b84();
  return;
}



/* Entry: 100603b84; end: 100603bab;  */

void FUN_100603b84(void)

{
  long unaff_x19;
  
  *(undefined1 *)(unaff_x19 + 0x60) = 0;
  *(undefined1 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined4 *)(unaff_x19 + 0xa0) = 0x3f800000;
  *(undefined1 *)(unaff_x19 + 0xa8) = 0;
  *(undefined1 *)(unaff_x19 + 0xac) = 0;
  *(undefined4 *)(unaff_x19 + 0xb0) = 0;
  return;
}



/* Entry: 100603bac; end: 100603c2b;  */

void FUN_100603bac(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 in_register_00005008;
  
  func_0x000100603768();
  FUN_100603834();
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  FUN_10028af84(param_2 + 3,param_3 + 0x18);
  FUN_100603c2c(unaff_x19 + 0x38,unaff_x20 + 0x38);
  FUN_10028af84(unaff_x19 + 0x60,unaff_x20 + 0x60);
  FUN_10028b0c8(unaff_x19 + 0x80,unaff_x20 + 0x80);
  func_0x0001006038b4();
  return;
}



/* Entry: 100603c2c; end: 100603c7b;  */

void FUN_100603c2c(undefined8 *param_1,long param_2)

{
  func_0x000100603768();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  func_0x000100603500();
  FUN_100603c8c();
  return;
}



/* Entry: 100603c7c; end: 100603c8b;  */

void FUN_100603c7c(void)

{
  return;
}



/* Entry: 100603c8c; end: 100603cc3;  */

void FUN_100603c8c(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  FUN_100603c7c();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    func_0x000100603460();
  }
  return;
}



/* Entry: 100603cc4; end: 100603ccb;  */

void FUN_100603cc4(void)

{
  char in_stack_00000238;
  
  if (in_stack_00000238 == '\x01') {
    FUN_1006038cc();
  }
  return;
}



/* Entry: 100603ccc; end: 100603ceb;  */

void FUN_100603ccc(long param_1)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_1006038cc();
  }
  return;
}



/* Entry: 100603cec; end: 100603cf3;  */

undefined1 * FUN_100603cec(void)

{
  undefined8 in_stack_00000250;
  
  FUN_10059fbfc(&stack0x00000240,in_stack_00000250);
  FUN_10059fc5c(&stack0x00000240,0);
  return &stack0x00000240;
}



/* Entry: 100603cf4; end: 100603e07;  */

void FUN_100603cf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  FUN_1001246dc();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_1002a8208(param_1 + 3,param_2 + 3);
  func_0x000100603d5c(unaff_x20 + 0x38,unaff_x19 + 0x38);
  FUN_1002a8208(unaff_x20 + 0x60,unaff_x19 + 0x60);
  FUN_100603e48(unaff_x20 + 0x80,unaff_x19 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined4 *)(unaff_x20 + 0xb0) = *(undefined4 *)(unaff_x19 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar1;
  return;
}



/* Entry: 100603e08; end: 100603e47;  */

void FUN_100603e08(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x20 + 8) = uVar1;
  *(undefined8 *)(unaff_x19 + 8) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 100603e48; end: 100603efb;  */

void FUN_100603e48(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  ulong extraout_x9;
  ulong uVar1;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  FUN_1001246dc();
  func_0x000100603ea8();
  *unaff_x19 = 0;
  FUN_1002aa02c();
  FUN_100603e08();
  if (extraout_x10 != 0) {
    func_0x000100603e34();
    if ((bool)in_ZR) {
      uVar1 = extraout_x11 & extraout_x9;
    }
    else {
      uVar1 = extraout_x9;
      if (extraout_x10_00 <= extraout_x9) {
        uVar1 = 0;
        if (extraout_x10_00 != 0) {
          uVar1 = extraout_x9 / extraout_x10_00;
        }
        uVar1 = extraout_x9 - uVar1 * extraout_x10_00;
      }
    }
    *(undefined8 *)(*unaff_x20 + uVar1 * 8) = extraout_x8;
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  return;
}



/* Entry: 100603efc; end: 10060413b;  */

undefined1  [16] FUN_100603efc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long *plVar6;
  undefined8 extraout_x9;
  long *plVar7;
  long *plVar8;
  long *unaff_x27;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1 + 3;
  FUN_100102e7c();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x27 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar1 = 0;
        if (plVar8 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar1 * (long)plVar8);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)unaff_x27 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_100603fcc;
          plVar5 = (long *)plVar7[1];
          if (plVar5 != plVar6) break;
          plVar5 = plVar7 + 2;
          FUN_1000e107c(plVar5,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar4 = 0;
            goto LAB_10060410c;
          }
        }
        if (((ulong)plVar8 & uVar9) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar9);
        }
        else if (plVar8 <= plVar5) {
          uVar1 = 0;
          if (plVar8 != (long *)0x0) {
            uVar1 = (ulong)plVar5 / (ulong)plVar8;
          }
          plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar8);
        }
      } while (plVar5 == unaff_x27);
    }
  }
LAB_100603fcc:
  FUN_10060416c(aplStack_78);
  FUN_100604180();
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    bVar2 = (long *)0x2 < plVar8;
    bVar3 = plVar8 == (long *)0x3;
    func_0x000100604200((long)plVar8 << 1);
    uVar4 = extraout_x8;
    if (!bVar2 || bVar3) {
      uVar4 = extraout_x9;
    }
    FUN_10028b120(param_1,uVar4);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  plVar7 = aplStack_78[0];
  plVar6 = *(long **)(*param_1 + (long)unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(*param_1 + (long)unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
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
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1002aa08c(aplStack_78);
  uVar4 = 1;
LAB_10060410c:
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10060413c; end: 10060416b;  */

long FUN_10060413c(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_100603efc(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 10060416c; end: 10060417f;  */

void FUN_10060416c(void)

{
  return;
}



/* Entry: 100604180; end: 1006041d7;  */

void FUN_100604180(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 2;
  func_0x000100604178();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 0;
  *param_2 = 0;
  param_2[1] = param_3;
  FUN_1006041d8(param_2 + 2,*param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1006041d8; end: 1006041f3;  */

void FUN_1006041d8(long param_1)

{
  func_0x000107c60c94();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 1006041f4; end: 100604237;  */

void FUN_1006041f4(void)

{
  return;
}



/* Entry: 100604238; end: 10060426f;  */

void FUN_100604238(void)

{
  long unaff_x19;
  
  func_0x000100604228();
  if (*(long **)(unaff_x19 + 8) != (long *)0x0) {
    FUN_100604270(*(undefined8 *)(**(long **)(unaff_x19 + 8) + 0x58));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x20);
  return;
}



/* Entry: 100604270; end: 100604277;  */

void FUN_100604270(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000100604274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100604278; end: 1006042eb;  */

void FUN_100604278(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  int extraout_w10;
  long lVar3;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_1 + 0x340);
  uVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_50 = uVar1;
  lStack_48 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
  }
  func_0x000107c60d88(lVar3);
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_38 = *(undefined8 *)(lVar3 + 0x48);
  uStack_40 = *(undefined8 *)(lVar3 + 0x40);
  *(undefined8 *)(lVar3 + 0x40) = uVar1;
  *(long *)(lVar3 + 0x48) = lVar2;
  FUN_1006042ec(&uStack_40);
  func_0x000107c60d8c(lVar3);
  FUN_1006042ec(&uStack_50);
  return;
}



/* Entry: 1006042ec; end: 10060430f;  */

void FUN_1006042ec(long param_1)

{
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100604310; end: 100604327;  */

void FUN_100604310(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 100604328; end: 1006043b3;  */

void FUN_100604328(undefined8 param_1)

{
  int iVar1;
  
  if ((bRam000000011383a1e0 & 1) == 0) {
    iVar1 = 0x1383a1e0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_100100da0(0x11383a1c8,&UNK_10f73f75a,0x24,&UNK_10f73f77f,0);
      func_0x000107c60e4c(0x11383a1e0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,0x11383a1c8);
  return;
}



/* Entry: 1006043b4; end: 1006043bf;  */

void FUN_1006043b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1006043c0; end: 10060442b; +[SCNCurrentMessagingSessionCurrentMessagingSessionManager setCurrentSession:] */

void FUN_1006043c0(void)

{
  undefined1 auStack_40 [16];
  
  FUN_1006043b4();
  FUN_10060442c();
  FUN_1006044f4(auStack_40);
  func_0x000100605ad8();
  func_0x000100605ae0();
  return;
}



/* Entry: 10060442c; end: 100604437;  */

void FUN_10060442c(void)

{
  int extraout_w10;
  long unaff_x19;
  
  func_0x000107c61174();
  if ((unaff_x19 != 0) && (*(long *)(unaff_x19 + 0x20) != 0)) {
    do {
      FUN_10049f338();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100604438; end: 100604487;  */

void FUN_100604438(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  func_0x000107c61174();
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
        FUN_10049f338();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100604488; end: 1006044f3;  */

undefined8 FUN_100604488(void)

{
  int iVar1;
  
  if ((bRam00000001130e3058 & 1) == 0) {
    iVar1 = 0x130e3058;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_100604518(0x1130e2fd8);
      func_0x000107c60e4c(0x1130e3058);
    }
  }
  return 0x1130e2fd8;
}



/* Entry: 1006044f4; end: 100604517;  */

void FUN_1006044f4(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined1 auStack_40 [16];
  
  FUN_100604488();
  iVar1 = (int)auStack_40;
  FUN_100604b88();
  lVar2 = *(long *)(unaff_x19 + 0x40);
  if (lVar2 == 0) {
    FUN_100604c68(auStack_40,unaff_x19 + 0x70);
    FUN_1006050c0();
    func_0x000100604708();
    if (iVar1 == 0) goto LAB_100604be0;
    lVar2 = *(long *)(unaff_x19 + 0x40);
  }
  func_0x00010552fc80(unaff_x19,lVar2);
LAB_100604be0:
  lVar2 = *unaff_x20;
  *(long *)(unaff_x19 + 0x40) = lVar2;
  if (lVar2 == 0) {
    func_0x000107c60c20(auStack_40,&UNK_10f2d0272);
    func_0x00010552fd34(unaff_x19 + 0x48,auStack_40);
    func_0x000107c60c30(auStack_40);
  }
  else {
    FUN_100605218(unaff_x19 + 0x48,unaff_x20);
  }
  func_0x000100605ad0();
  return;
}


