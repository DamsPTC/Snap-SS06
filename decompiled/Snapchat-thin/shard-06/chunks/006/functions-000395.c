/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104aa72ec; end: 104aa73db;  */

undefined1  [16]
FUN_104aa72ec(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  if (param_2 < 0x555555555555556) {
    lVar1 = param_2 * 0x30;
    __Znwm(lVar1);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar1;
    return auVar7;
  }
  FUN_104a7757c();
  puStack_78 = &uStack_60;
  puStack_70 = &uStack_50;
  puStack_48 = param_7;
  puVar3 = param_7;
  while (param_3 != param_5) {
    puVar2 = param_3 + -6;
    puStack_48[-6] = *puVar2;
    uVar5 = param_3[-4];
    uVar4 = param_3[-5];
    uVar6 = param_3[-3];
    puStack_48[-2] = param_3[-2];
    puStack_48[-3] = uVar6;
    puStack_48[-4] = uVar5;
    puStack_48[-5] = uVar4;
    *(undefined4 *)(puStack_48 + -1) = *(undefined4 *)(param_3 + -1);
    *puVar2 = &UNK_1107c4408;
    puVar3 = puVar3 + -6;
    param_3 = puVar2;
    puStack_48 = puStack_48 + -6;
  }
  uStack_68 = 1;
  uStack_80 = param_1;
  uStack_60 = param_6;
  puStack_58 = param_7;
  uStack_50 = param_6;
  FUN_104aa73dc(&uStack_80);
  auVar8._8_8_ = puVar3;
  auVar8._0_8_ = param_6;
  return auVar8;
}



/* Entry: 104aa73dc; end: 104aa740f;  */

long FUN_104aa73dc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_104aa7410(param_1);
  }
  return param_1;
}



/* Entry: 104aa7410; end: 104aa7457;  */

void FUN_104aa7410(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)(param_1 + 8) + 8);
  for (plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 8); plVar1 != plVar2; plVar1 = plVar1 + 6) {
    (**(code **)(*plVar1 + 8))(plVar1 + 1);
  }
  return;
}



/* Entry: 104aa7458; end: 104aa7487;  */

long * FUN_104aa7458(long *param_1)

{
  FUN_104aa7488();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104aa7488; end: 104aa74cf;  */

void FUN_104aa7488(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  while (lVar1 = *(long *)(param_1 + 0x10), lVar1 != lVar3) {
    lVar2 = *(long *)(lVar1 + -0x30);
    *(long **)(param_1 + 0x10) = (long *)(lVar1 + -0x30);
    (**(code **)(lVar2 + 8))(lVar1 + -0x28);
  }
  return;
}



/* Entry: 104aa74d0; end: 104aa750f;  */

void FUN_104aa74d0(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_104aa7510();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 104aa7510; end: 104aa755b;  */

void FUN_104aa7510(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  while (plVar2 != plVar1) {
    (**(code **)(plVar2[-6] + 8))(plVar2 + -5);
    plVar2 = plVar2 + -6;
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 104aa755c; end: 104aa75cf;  */

void FUN_104aa755c(long *param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  ulong uStack_38;
  undefined *puStack_30;
  ulong uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *param_1;
  uStack_38 = (ulong)*param_2;
  puStack_30 = &UNK_10ae73cc0;
  uStack_28 = (ulong)*param_3;
  puStack_20 = &UNK_10ae73cc0;
  func_0x0001004d4da0(lVar1,param_1[1],&uStack_38,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  if (*(code **)(lVar1 + 0xac0) != FUN_104aa013c) {
    *(undefined8 *)(lVar1 + 0xac0) = 0x104aa75fc;
    return;
  }
  *(undefined8 *)(lVar1 + 0x8d8) = 0;
  return;
}



/* Entry: 104aa75d0; end: 104aa7603;  */

void FUN_104aa75d0(long param_1)

{
  if (*(code **)(param_1 + 0xac0) != FUN_104aa013c) {
    *(undefined8 *)(param_1 + 0xac0) = 0x104aa75fc;
    return;
  }
  *(undefined8 *)(param_1 + 0x8d8) = 0;
  return;
}



/* Entry: 104aa7604; end: 104aa78a3;  */

void FUN_104aa7604(undefined8 *param_1,ulong param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte bVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_59;
  undefined8 *puStack_58;
  
  puVar9 = &uStack_90;
  bVar1 = *(byte *)(param_2 + 0xa9d);
  if ((bVar1 >> 2 & 1) == 0) {
    uVar7 = *(undefined4 *)(param_2 + 0xaa8);
  }
  else {
    uVar7 = 0;
  }
  *(undefined4 *)(param_2 + 0xaa0) = uVar7;
  if (param_3 == 0) {
    *(byte *)(param_2 + 0xa9e) = bVar1 & 1;
    bVar10 = bVar1 >> 5 & 1;
  }
  else {
    bVar10 = 0;
  }
  *(undefined8 *)(param_2 + 0x838) = 0x8000000000000000;
  uVar8 = param_2 + 0xf8;
  uVar4 = uVar8;
  func_0x000104aa7b24(uVar8,*(undefined4 *)(param_2 + 0xaa8));
  if (uVar4 == 0) {
    if ((((param_3 != 0) || (*(char *)(param_2 + 0x628) != '\0')) ||
        (*(uint *)(param_2 + 0xaa8) <= *(uint *)(param_2 + 0x7e8))) ||
       ((*(uint *)(param_2 + 0xaa8) & 1) == 0)) goto FUN_104aa78a4;
    func_0x0001008ded94();
    if (*(uint *)(param_2 + 2000) <= uVar8) {
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_78 = 0;
      puVar9 = &uStack_78;
      FUN_104ab5920(param_1,2,"Max stream count exceeded",0x19,&uStack_59,&uStack_78);
      goto LAB_104aa7840;
    }
    if (*(int *)(param_2 + 0x768) == 3) goto FUN_104aa78a4;
    *(undefined4 *)(param_2 + 0x7e8) = *(undefined4 *)(param_2 + 0xaa8);
    uVar4 = param_2;
    FUN_104a97630();
    *(ulong *)(param_2 + 0xab8) = uVar4;
    if (uVar4 == 0) goto FUN_104aa78a4;
    if (*(long *)(param_2 + 0xce8) != 0) {
      FUN_104aad548();
    }
  }
  else {
    *(ulong *)(param_2 + 0xab8) = uVar4;
  }
  *(long *)(uVar4 + 0x138) = *(long *)(uVar4 + 0x138) + 9;
  if (*(char *)(uVar4 + 0x169) != '\0') {
    *(undefined8 *)(param_2 + 0xab8) = 0;
FUN_104aa78a4:
    *(code **)(param_2 + 0xac0) = FUN_104aa013c;
    *(ulong *)(param_2 + 0xab0) = param_2 + 0x8d8;
    uVar7 = 0;
    if ((*(int *)(param_2 + 0xaa0) != 0) && (uVar7 = 1, *(char *)(param_2 + 0xa9e) != '\0')) {
      uVar7 = 2;
    }
    func_0x000104a9f854(param_2 + 0x8d8,0,*(undefined4 *)(param_2 + 0x7dc),uVar7,bVar10,
                        (ulong)*(uint *)(param_2 + 0xaa8) |
                        (ulong)*(byte *)(param_2 + 0x628) << 0x28 | 0x200000000);
    *param_1 = 0;
    return;
  }
  *(code **)(param_2 + 0xac0) = FUN_104aa013c;
  *(ulong *)(param_2 + 0xab0) = param_2 + 0x8d8;
  cVar2 = *(char *)(param_2 + 0xa9e);
  if (cVar2 != '\0') {
    *(undefined1 *)(uVar4 + 0x16d) = 1;
  }
  cVar3 = *(char *)(uVar4 + 0x6e0);
  if (cVar3 == '\x02') {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/parsing.cc"
                        ,0x238,2,"too many header frames received");
    goto FUN_104aa78a4;
  }
  if (cVar3 == '\x01') {
    if (cVar2 == '\0') {
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_90 = 0;
      FUN_104ab5920(param_1,2,"Trailing metadata frame received without an end-o-stream",0x38,
                    &uStack_59,&uStack_90);
LAB_104aa7840:
      puStack_58 = puVar9;
      func_0x000100482b64(&puStack_58);
      return;
    }
  }
  else {
    if (cVar3 != '\0') {
      lVar5 = 0;
      uVar8 = 0x200000000;
      goto LAB_104aa77c4;
    }
    if ((cVar2 == '\0') || (*(char *)(param_2 + 0x628) == '\0')) {
      uVar8 = 0;
      lVar5 = uVar4 + 400;
      goto LAB_104aa77c4;
    }
    if (*(undefined1 **)(uVar4 + 0xf8) != (undefined1 *)0x0) {
      **(undefined1 **)(uVar4 + 0xf8) = 1;
    }
  }
  lVar5 = uVar4 + 0x398;
  uVar8 = 0x100000000;
LAB_104aa77c4:
  uVar6 = 1;
  if (cVar2 != '\0') {
    uVar6 = 2;
  }
  FUN_104a9f850(param_2 + 0x8d8,lVar5,*(undefined4 *)(param_2 + 0x7dc),
                uVar6 & (int)((uint)bVar1 << 0x1d) >> 0x1f,bVar10,
                uVar8 | (ulong)*(byte *)(param_2 + 0x628) << 0x28 |
                (ulong)*(uint *)(param_2 + 0xaa8));
  *param_1 = 0;
  return;
}



/* Entry: 104aa78a4; end: 104aa7917;  */

void FUN_104aa78a4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  *(code **)(param_2 + 0xac0) = FUN_104aa013c;
  *(long *)(param_2 + 0xab0) = param_2 + 0x8d8;
  uVar1 = 0;
  if ((*(int *)(param_2 + 0xaa0) != 0) && (uVar1 = 1, *(char *)(param_2 + 0xa9e) != '\0')) {
    uVar1 = 2;
  }
  FUN_104a9f850(param_2 + 0x8d8,0,*(undefined4 *)(param_2 + 0x7dc),uVar1,param_3,
                (ulong)*(uint *)(param_2 + 0xaa8) | (ulong)*(byte *)(param_2 + 0x628) << 0x28 |
                0x200000000);
  *param_1 = 0;
  return;
}



/* Entry: 104aa7918; end: 104aa7927;  */

void FUN_104aa7918(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 104aa7928; end: 104aa79cb;  */

bool FUN_104aa7928(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  bVar3 = *(byte *)(param_2 + 0x98 + ((ulong)(long)(int)param_3 >> 3));
  uVar4 = 1 << (ulong)(param_3 & 7);
  uVar2 = bVar3 & uVar4;
  if (uVar2 != 0) {
    *(byte *)(param_2 + 0x98 + ((ulong)(long)(int)param_3 >> 3)) = bVar3 & ((byte)uVar4 ^ 0xff);
    uVar5 = (ulong)param_3;
    lVar6 = param_2 + (ulong)param_3 * 0x10;
    plVar1 = (long *)(lVar6 + 0x48);
    lVar6 = *(long *)(lVar6 + 0x50);
    if (lVar6 == 0) {
      plVar8 = (long *)(param_1 + uVar5 * 0x10 + 0xa8);
      if (*plVar8 != param_2) {
        func_0x00010bdab480();
        bVar3 = *(byte *)(param_2 + 0x98);
        if ((bVar3 >> 1 & 1) == 0) {
          lVar6 = *(long *)(param_1 + 0xc0);
          *(undefined8 *)(param_2 + 0x58) = 0;
          *(long *)(param_2 + 0x60) = lVar6;
          plVar1 = (long *)(param_1 + 0xb8);
          if (lVar6 != 0) {
            plVar1 = (long *)(lVar6 + 0x58);
          }
          *plVar1 = param_2;
          *(long *)(param_1 + 0xc0) = param_2;
          *(byte *)(param_2 + 0x98) = *(byte *)(param_2 + 0x98) | 2;
        }
        return (bVar3 & 2) == 0;
      }
      lVar7 = *plVar1;
      *plVar8 = lVar7;
    }
    else {
      *(long *)(lVar6 + uVar5 * 0x10 + 0x48) = *plVar1;
      lVar7 = *plVar1;
    }
    plVar1 = (long *)(param_1 + uVar5 * 0x10 + 0xb0);
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + uVar5 * 0x10 + 0x50);
    }
    *plVar1 = lVar6;
  }
  return uVar2 != 0;
}



/* Entry: 104aa79cc; end: 104aa7a9b;  */

bool FUN_104aa79cc(long param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  
  bVar2 = *(byte *)(param_2 + 0x98);
  if ((bVar2 >> 1 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0xc0);
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(long *)(param_2 + 0x60) = lVar3;
    plVar1 = (long *)(param_1 + 0xb8);
    if (lVar3 != 0) {
      plVar1 = (long *)(lVar3 + 0x58);
    }
    *plVar1 = param_2;
    *(long *)(param_1 + 0xc0) = param_2;
    *(byte *)(param_2 + 0x98) = *(byte *)(param_2 + 0x98) | 2;
  }
  return (bVar2 & 2) == 0;
}



/* Entry: 104aa7a9c; end: 104aa7ac3;  */

/* WARNING: Possible PIC construction at 0x000104aa7ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104aa7ab4) */

void FUN_104aa7a9c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*param_1);
  return;
}



/* Entry: 104aa7ac4; end: 104aa7b73;  */

undefined8 FUN_104aa7ac4(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = 0;
  lVar5 = param_1[2];
  lVar6 = lVar5;
  do {
    while( true ) {
      lVar1 = lVar3 + ((ulong)(lVar6 - lVar3) >> 1);
      uVar2 = *(uint *)(*param_1 + lVar1 * 4);
      if (param_2 <= uVar2) break;
      lVar3 = lVar1 + 1;
    }
    lVar6 = lVar1;
  } while (param_2 < uVar2);
  uVar4 = *(undefined8 *)(param_1[1] + lVar1 * 8);
  *(undefined8 *)(param_1[1] + lVar1 * 8) = 0;
  lVar3 = param_1[3];
  param_1[3] = lVar3 + 1;
  if (lVar3 + 1 == lVar5) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return uVar4;
}



/* Entry: 104aa7b74; end: 104aa7c13;  */

long * FUN_104aa7b74(long *param_1,code *param_2,long *param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_1[2];
  if (lVar9 == param_1[3]) {
    plVar3 = (long *)0x0;
  }
  else {
    if (param_1[3] != 0) {
      if (lVar9 == 0) {
        param_1[2] = 0;
        param_1[3] = 0;
LAB_104aa7c10:
        func_0x00010bdab4ec();
        uVar4 = param_1[2];
        plVar3 = param_1;
        if (uVar4 != 0) {
          uVar6 = 0;
          do {
            if (*(long *)(param_1[1] + uVar6 * 8) != 0) {
              plVar3 = param_3;
              (*param_2)(param_3,*(undefined4 *)(*param_1 + uVar6 * 4));
              uVar4 = param_1[2];
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar4);
        }
        return plVar3;
      }
      lVar5 = 0;
      puVar1 = (undefined4 *)*param_1;
      plVar2 = (long *)param_1[1];
      plVar3 = plVar2;
      puVar7 = puVar1;
      do {
        lVar8 = *plVar3;
        if (lVar8 != 0) {
          puVar1[lVar5] = *puVar7;
          plVar2[lVar5] = lVar8;
          lVar5 = lVar5 + 1;
        }
        puVar7 = puVar7 + 1;
        plVar3 = plVar3 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      param_1[2] = lVar5;
      param_1[3] = 0;
      if (lVar5 == 0) goto LAB_104aa7c10;
    }
    lVar9 = param_1[1];
    plVar3 = param_1;
    _rand();
    uVar6 = param_1[2];
    uVar4 = 0;
    if (uVar6 != 0) {
      uVar4 = (ulong)(long)(int)plVar3 / uVar6;
    }
    plVar3 = *(long **)(lVar9 + ((long)(int)plVar3 - uVar4 * uVar6) * 8);
  }
  return plVar3;
}



/* Entry: 104aa7c14; end: 104aa7c77;  */

void FUN_104aa7c14(long *param_1,code *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[2];
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(long *)(param_1[1] + uVar2 * 8) != 0) {
        (*param_2)(param_3,*(undefined4 *)(*param_1 + uVar2 * 4));
        uVar1 = param_1[2];
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 104aa7c78; end: 104aa7dc3;  */

undefined8
FUN_104aa7c78(long param_1,undefined8 param_2,long param_3,long *param_4,long *param_5,
             ulong *param_6)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uStack_58;
  
  plVar6 = (long *)*param_4;
  *param_4 = 0;
  *param_5 = *param_5 + param_3;
  if (plVar6 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      while (plVar7 = (long *)plVar6[2], *plVar6 <= *param_5) {
        uVar5 = *param_6;
        if ((uVar5 & 1) != 0) {
          piVar4 = (int *)(uVar5 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar2) {
              *piVar4 = *piVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar2) {
              *piVar4 = *piVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        uStack_58 = uVar5;
        func_0x0001008df0bc(param_1,param_2,plVar6 + 1,&uStack_58,"finish_write_cb");
        if ((uStack_58 & 1) != 0) {
          func_0x00010084dad0();
        }
        plVar6[2] = *(long *)(param_1 + 0xac8);
        *(long **)(param_1 + 0xac8) = plVar6;
        if ((uVar5 & 1) != 0) {
          func_0x00010084dad0();
        }
        uVar3 = 1;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return 1;
        }
      }
      plVar6[2] = *param_4;
      *param_4 = (long)plVar6;
      plVar6 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
  return uVar3;
}



/* Entry: 104aa7dc4; end: 104aa7def;  */

undefined8 FUN_104aa7dc4(undefined8 param_1)

{
  func_0x0001008e1910(param_1,1);
  return param_1;
}



/* Entry: 104aa7df0; end: 104aa7f57;  */

void FUN_104aa7df0(undefined8 param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long **pplVar6;
  ulong **ppuVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  ulong *puStack_348;
  undefined8 uStack_340;
  char *pcStack_338;
  long lStack_328;
  long *plStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long *plStack_2d8;
  undefined8 uStack_2d0;
  char *pcStack_2c8;
  long lStack_2b8;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  long *plStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  long lStack_248;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  long lStack_1d8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_188;
  undefined8 uStack_180;
  char *pcStack_178;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_f8;
  undefined8 uStack_f0;
  char *pcStack_e8;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7ac74(&plStack_48,*param_2);
  plStack_68 = (long *)0x1;
  uStack_60 = 0x1e;
  pcStack_58 = "grpc-internal-encoding-request";
  if ((long *)0x1 < plStack_48) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = *plStack_48 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_88 = uStack_40;
  plStack_90 = plStack_48;
  uStack_78 = uStack_30;
  uStack_80 = uStack_38;
  pplVar6 = &plStack_68;
  func_0x0001008e1568(param_1,pplVar6,&plStack_90);
  if ((long *)0x1 < plStack_90) {
    do {
      lVar8 = *plStack_90;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar4) {
        *plStack_90 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  if ((long *)0x1 < plStack_68) {
    do {
      lVar8 = *plStack_68;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar4) {
        *plStack_68 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  plVar9 = plStack_48;
  if ((long *)0x1 < plStack_48) {
    do {
      lVar8 = *plStack_48;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_48[1])();
      plVar9 = plStack_48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_90);
    func_0x0001004b6d90(&plStack_68);
    func_0x0001004b6d90(&plStack_48);
  }
  __Unwind_Resume(plVar9);
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_d8,*(undefined4 *)pplVar6);
  plStack_f8 = (long *)0x1;
  uStack_f0 = 0x1a;
  pcStack_e8 = "grpc-previous-rpc-attempts";
  if ((long *)0x1 < plStack_d8) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
      if (bVar4) {
        *plStack_d8 = *plStack_d8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_118 = uStack_d0;
  plStack_120 = plStack_d8;
  uStack_108 = uStack_c0;
  uStack_110 = uStack_c8;
  pplVar6 = &plStack_f8;
  func_0x0001008e1568(plVar9,pplVar6,&plStack_120);
  if ((long *)0x1 < plStack_120) {
    do {
      lVar8 = *plStack_120;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
      if (bVar4) {
        *plStack_120 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_120[1])();
    }
  }
  if ((long *)0x1 < plStack_f8) {
    do {
      lVar8 = *plStack_f8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_f8,0x10);
      if (bVar4) {
        *plStack_f8 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_f8[1])();
    }
  }
  plVar9 = plStack_d8;
  if ((long *)0x1 < plStack_d8) {
    do {
      lVar8 = *plStack_d8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
      if (bVar4) {
        *plStack_d8 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_d8[1])();
      plVar9 = plStack_d8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_120);
    func_0x0001004b6d90(&plStack_f8);
    func_0x0001004b6d90(&plStack_d8);
  }
  __Unwind_Resume(plVar9);
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_168,*pplVar6);
  plStack_188 = (long *)0x1;
  uStack_180 = 0x16;
  pcStack_178 = "grpc-retry-pushback-ms";
  if ((long *)0x1 < plStack_168) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_168,0x10);
      if (bVar4) {
        *plStack_168 = *plStack_168 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_1a8 = uStack_160;
  plStack_1b0 = plStack_168;
  uStack_198 = uStack_150;
  uStack_1a0 = uStack_158;
  pplVar6 = &plStack_188;
  func_0x0001008e1568(plVar9,pplVar6,&plStack_1b0);
  if ((long *)0x1 < plStack_1b0) {
    do {
      lVar8 = *plStack_1b0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_1b0,0x10);
      if (bVar4) {
        *plStack_1b0 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_1b0[1])();
    }
  }
  if ((long *)0x1 < plStack_188) {
    do {
      lVar8 = *plStack_188;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_188,0x10);
      if (bVar4) {
        *plStack_188 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_188[1])();
    }
  }
  plVar9 = plStack_168;
  if ((long *)0x1 < plStack_168) {
    do {
      lVar8 = *plStack_168;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_168,0x10);
      if (bVar4) {
        *plStack_168 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_168[1])();
      plVar9 = plStack_168;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_1b0);
    func_0x0001004b6d90(&plStack_188);
    func_0x0001004b6d90(&plStack_168);
  }
  __Unwind_Resume();
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = *pplVar6;
  plVar1 = (long *)((ulong)pplVar6[1] & 0xff);
  if (plVar2 != (long *)0x0) {
    plVar1 = pplVar6[1];
  }
  if (plVar1 != (long *)0x0) {
    plStack_1f8 = (long *)0x1;
    uStack_1f0 = 0xc;
    puStack_1e8 = &UNK_10f67192f;
    if ((long *)0x1 < plVar2) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_218 = pplVar6[1];
    plStack_220 = *pplVar6;
    plStack_208 = pplVar6[3];
    plStack_210 = pplVar6[2];
    pplVar6 = &plStack_1f8;
    func_0x0001008e1568();
    if ((long *)0x1 < plStack_220) {
      do {
        lVar8 = *plStack_220;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_220,0x10);
        if (bVar4) {
          *plStack_220 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_220[1])();
      }
    }
    plVar9 = plStack_1f8;
    if ((long *)0x1 < plStack_1f8) {
      do {
        lVar8 = *plStack_1f8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_1f8,0x10);
        if (bVar4) {
          *plStack_1f8 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_1f8[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_220);
    func_0x0001004b6d90(&plStack_1f8);
  }
  __Unwind_Resume(plVar9);
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_268 = (long *)0x1;
  uStack_260 = 4;
  puStack_258 = &DAT_10f2df4ca;
  plVar9 = *pplVar6;
  if ((long *)0x1 < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_288 = pplVar6[1];
  plStack_290 = *pplVar6;
  plStack_278 = pplVar6[3];
  plStack_280 = pplVar6[2];
  pplVar6 = &plStack_268;
  func_0x0001008e1568();
  if ((long *)0x1 < plStack_290) {
    do {
      lVar8 = *plStack_290;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_290,0x10);
      if (bVar4) {
        *plStack_290 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_290[1])();
    }
  }
  plVar9 = plStack_268;
  if ((long *)0x1 < plStack_268) {
    do {
      lVar8 = *plStack_268;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_268,0x10);
      if (bVar4) {
        *plStack_268 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_268[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_290);
    func_0x0001004b6d90(&plStack_268);
  }
  __Unwind_Resume(plVar9);
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_2d8 = (long *)0x1;
  uStack_2d0 = 0x19;
  pcStack_2c8 = "endpoint-load-metrics-bin";
  plVar9 = *pplVar6;
  if ((long *)0x1 < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_2f8 = pplVar6[1];
  plStack_300 = *pplVar6;
  plStack_2e8 = pplVar6[3];
  plStack_2f0 = pplVar6[2];
  pplVar6 = &plStack_2d8;
  FUN_104a9da10();
  if ((long *)0x1 < plStack_300) {
    do {
      lVar8 = *plStack_300;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_300,0x10);
      if (bVar4) {
        *plStack_300 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_300[1])();
    }
  }
  plVar9 = plStack_2d8;
  if ((long *)0x1 < plStack_2d8) {
    do {
      lVar8 = *plStack_2d8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_2d8,0x10);
      if (bVar4) {
        *plStack_2d8 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_2d8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_300);
    func_0x0001004b6d90(&plStack_2d8);
  }
  __Unwind_Resume(plVar9);
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_348 = (ulong *)0x1;
  uStack_340 = 0x15;
  pcStack_338 = "grpc-server-stats-bin";
  plVar9 = *pplVar6;
  if ((long *)0x1 < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_368 = pplVar6[1];
  plStack_370 = *pplVar6;
  plStack_358 = pplVar6[3];
  plStack_360 = pplVar6[2];
  ppuVar7 = &puStack_348;
  FUN_104a9da10();
  if ((long *)0x1 < plStack_370) {
    do {
      lVar8 = *plStack_370;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_370,0x10);
      if (bVar4) {
        *plStack_370 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_370[1])();
    }
  }
  puVar5 = puStack_348;
  if ((ulong *)0x1 < puStack_348) {
    do {
      uVar10 = *puStack_348;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puStack_348,0x10);
      if (bVar4) {
        *puStack_348 = uVar10 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar10 - 1 == 0) {
      (*(code *)puStack_348[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_370);
    func_0x0001004b6d90(&puStack_348);
  }
  __Unwind_Resume();
  puVar11 = puVar5 + 1;
  uVar10 = *puVar5;
  if ((uVar10 & 1) != 0) {
    puVar11 = (ulong *)*puVar11;
  }
  if (1 < uVar10) {
    lVar8 = (uVar10 >> 1) << 5;
    do {
      FUN_104aa86e4(ppuVar7,puVar11);
      puVar11 = puVar11 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 104aa7f58; end: 104aa80bf;  */

void FUN_104aa7f58(undefined8 param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long **pplVar6;
  ulong **ppuVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  ulong *puStack_2b8;
  undefined8 uStack_2b0;
  char *pcStack_2a8;
  long lStack_298;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_248;
  undefined8 uStack_240;
  char *pcStack_238;
  long lStack_228;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  long lStack_1b8;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_148;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_f8;
  undefined8 uStack_f0;
  char *pcStack_e8;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_48,*param_2);
  plStack_68 = (long *)0x1;
  uStack_60 = 0x1a;
  pcStack_58 = "grpc-previous-rpc-attempts";
  if ((long *)0x1 < plStack_48) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = *plStack_48 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_88 = uStack_40;
  plStack_90 = plStack_48;
  uStack_78 = uStack_30;
  uStack_80 = uStack_38;
  pplVar6 = &plStack_68;
  func_0x0001008e1568(param_1,pplVar6,&plStack_90);
  if ((long *)0x1 < plStack_90) {
    do {
      lVar8 = *plStack_90;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar4) {
        *plStack_90 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  if ((long *)0x1 < plStack_68) {
    do {
      lVar8 = *plStack_68;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar4) {
        *plStack_68 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  plVar9 = plStack_48;
  if ((long *)0x1 < plStack_48) {
    do {
      lVar8 = *plStack_48;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_48[1])();
      plVar9 = plStack_48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_90);
    func_0x0001004b6d90(&plStack_68);
    func_0x0001004b6d90(&plStack_48);
  }
  __Unwind_Resume(plVar9);
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_d8,*pplVar6);
  plStack_f8 = (long *)0x1;
  uStack_f0 = 0x16;
  pcStack_e8 = "grpc-retry-pushback-ms";
  if ((long *)0x1 < plStack_d8) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
      if (bVar4) {
        *plStack_d8 = *plStack_d8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_118 = uStack_d0;
  plStack_120 = plStack_d8;
  uStack_108 = uStack_c0;
  uStack_110 = uStack_c8;
  pplVar6 = &plStack_f8;
  func_0x0001008e1568(plVar9,pplVar6,&plStack_120);
  if ((long *)0x1 < plStack_120) {
    do {
      lVar8 = *plStack_120;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
      if (bVar4) {
        *plStack_120 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_120[1])();
    }
  }
  if ((long *)0x1 < plStack_f8) {
    do {
      lVar8 = *plStack_f8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_f8,0x10);
      if (bVar4) {
        *plStack_f8 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_f8[1])();
    }
  }
  plVar9 = plStack_d8;
  if ((long *)0x1 < plStack_d8) {
    do {
      lVar8 = *plStack_d8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
      if (bVar4) {
        *plStack_d8 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_d8[1])();
      plVar9 = plStack_d8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_120);
    func_0x0001004b6d90(&plStack_f8);
    func_0x0001004b6d90(&plStack_d8);
  }
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = *pplVar6;
  plVar1 = (long *)((ulong)pplVar6[1] & 0xff);
  if (plVar2 != (long *)0x0) {
    plVar1 = pplVar6[1];
  }
  if (plVar1 != (long *)0x0) {
    plStack_168 = (long *)0x1;
    uStack_160 = 0xc;
    puStack_158 = &UNK_10f67192f;
    if ((long *)0x1 < plVar2) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_188 = pplVar6[1];
    plStack_190 = *pplVar6;
    plStack_178 = pplVar6[3];
    plStack_180 = pplVar6[2];
    pplVar6 = &plStack_168;
    func_0x0001008e1568();
    if ((long *)0x1 < plStack_190) {
      do {
        lVar8 = *plStack_190;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_190,0x10);
        if (bVar4) {
          *plStack_190 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_190[1])();
      }
    }
    plVar9 = plStack_168;
    if ((long *)0x1 < plStack_168) {
      do {
        lVar8 = *plStack_168;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_168,0x10);
        if (bVar4) {
          *plStack_168 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_168[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_190);
    func_0x0001004b6d90(&plStack_168);
  }
  __Unwind_Resume(plVar9);
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_1d8 = (long *)0x1;
  uStack_1d0 = 4;
  puStack_1c8 = &DAT_10f2df4ca;
  plVar9 = *pplVar6;
  if ((long *)0x1 < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_1f8 = pplVar6[1];
  plStack_200 = *pplVar6;
  plStack_1e8 = pplVar6[3];
  plStack_1f0 = pplVar6[2];
  pplVar6 = &plStack_1d8;
  func_0x0001008e1568();
  if ((long *)0x1 < plStack_200) {
    do {
      lVar8 = *plStack_200;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_200,0x10);
      if (bVar4) {
        *plStack_200 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_200[1])();
    }
  }
  plVar9 = plStack_1d8;
  if ((long *)0x1 < plStack_1d8) {
    do {
      lVar8 = *plStack_1d8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_1d8,0x10);
      if (bVar4) {
        *plStack_1d8 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_1d8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_200);
    func_0x0001004b6d90(&plStack_1d8);
  }
  __Unwind_Resume(plVar9);
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_248 = (long *)0x1;
  uStack_240 = 0x19;
  pcStack_238 = "endpoint-load-metrics-bin";
  plVar9 = *pplVar6;
  if ((long *)0x1 < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_268 = pplVar6[1];
  plStack_270 = *pplVar6;
  plStack_258 = pplVar6[3];
  plStack_260 = pplVar6[2];
  pplVar6 = &plStack_248;
  FUN_104a9da10();
  if ((long *)0x1 < plStack_270) {
    do {
      lVar8 = *plStack_270;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_270,0x10);
      if (bVar4) {
        *plStack_270 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_270[1])();
    }
  }
  plVar9 = plStack_248;
  if ((long *)0x1 < plStack_248) {
    do {
      lVar8 = *plStack_248;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_248,0x10);
      if (bVar4) {
        *plStack_248 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_248[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_270);
    func_0x0001004b6d90(&plStack_248);
  }
  __Unwind_Resume(plVar9);
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2b8 = (ulong *)0x1;
  uStack_2b0 = 0x15;
  pcStack_2a8 = "grpc-server-stats-bin";
  plVar9 = *pplVar6;
  if ((long *)0x1 < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_2d8 = pplVar6[1];
  plStack_2e0 = *pplVar6;
  plStack_2c8 = pplVar6[3];
  plStack_2d0 = pplVar6[2];
  ppuVar7 = &puStack_2b8;
  FUN_104a9da10();
  if ((long *)0x1 < plStack_2e0) {
    do {
      lVar8 = *plStack_2e0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_2e0,0x10);
      if (bVar4) {
        *plStack_2e0 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_2e0[1])();
    }
  }
  puVar5 = puStack_2b8;
  if ((ulong *)0x1 < puStack_2b8) {
    do {
      uVar10 = *puStack_2b8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puStack_2b8,0x10);
      if (bVar4) {
        *puStack_2b8 = uVar10 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar10 - 1 == 0) {
      (*(code *)puStack_2b8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_2e0);
    func_0x0001004b6d90(&puStack_2b8);
  }
  __Unwind_Resume();
  puVar11 = puVar5 + 1;
  uVar10 = *puVar5;
  if ((uVar10 & 1) != 0) {
    puVar11 = (ulong *)*puVar11;
  }
  if (1 < uVar10) {
    lVar8 = (uVar10 >> 1) << 5;
    do {
      FUN_104aa86e4(ppuVar7,puVar11);
      puVar11 = puVar11 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 104aa80c0; end: 104aa8227;  */

void FUN_104aa80c0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long **pplVar6;
  ulong **ppuVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  ulong *puStack_228;
  undefined8 uStack_220;
  char *pcStack_218;
  long lStack_208;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  char *pcStack_1a8;
  long lStack_198;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  long lStack_128;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_b8;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_48,*param_2);
  plStack_68 = (long *)0x1;
  uStack_60 = 0x16;
  pcStack_58 = "grpc-retry-pushback-ms";
  if ((long *)0x1 < plStack_48) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = *plStack_48 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_88 = uStack_40;
  plStack_90 = plStack_48;
  uStack_78 = uStack_30;
  uStack_80 = uStack_38;
  pplVar6 = &plStack_68;
  func_0x0001008e1568(param_1,pplVar6,&plStack_90);
  if ((long *)0x1 < plStack_90) {
    do {
      lVar8 = *plStack_90;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar4) {
        *plStack_90 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  if ((long *)0x1 < plStack_68) {
    do {
      lVar8 = *plStack_68;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar4) {
        *plStack_68 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  plVar9 = plStack_48;
  if ((long *)0x1 < plStack_48) {
    do {
      lVar8 = *plStack_48;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_48[1])();
      plVar9 = plStack_48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_90);
    func_0x0001004b6d90(&plStack_68);
    func_0x0001004b6d90(&plStack_48);
  }
  __Unwind_Resume();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = *pplVar6;
  plVar1 = (long *)((ulong)pplVar6[1] & 0xff);
  if (plVar2 != (long *)0x0) {
    plVar1 = pplVar6[1];
  }
  if (plVar1 != (long *)0x0) {
    plStack_d8 = (long *)0x1;
    uStack_d0 = 0xc;
    puStack_c8 = &UNK_10f67192f;
    if ((long *)0x1 < plVar2) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_f8 = pplVar6[1];
    plStack_100 = *pplVar6;
    plStack_e8 = pplVar6[3];
    plStack_f0 = pplVar6[2];
    pplVar6 = &plStack_d8;
    func_0x0001008e1568();
    if ((long *)0x1 < plStack_100) {
      do {
        lVar8 = *plStack_100;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_100,0x10);
        if (bVar4) {
          *plStack_100 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_100[1])();
      }
    }
    plVar9 = plStack_d8;
    if ((long *)0x1 < plStack_d8) {
      do {
        lVar8 = *plStack_d8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
        if (bVar4) {
          *plStack_d8 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_d8[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_100);
    func_0x0001004b6d90(&plStack_d8);
  }
  __Unwind_Resume(plVar9);
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_148 = (long *)0x1;
  uStack_140 = 4;
  puStack_138 = &DAT_10f2df4ca;
  plVar9 = *pplVar6;
  if ((long *)0x1 < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_168 = pplVar6[1];
  plStack_170 = *pplVar6;
  plStack_158 = pplVar6[3];
  plStack_160 = pplVar6[2];
  pplVar6 = &plStack_148;
  func_0x0001008e1568();
  if ((long *)0x1 < plStack_170) {
    do {
      lVar8 = *plStack_170;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_170,0x10);
      if (bVar4) {
        *plStack_170 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_170[1])();
    }
  }
  plVar9 = plStack_148;
  if ((long *)0x1 < plStack_148) {
    do {
      lVar8 = *plStack_148;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_148,0x10);
      if (bVar4) {
        *plStack_148 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_148[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_170);
    func_0x0001004b6d90(&plStack_148);
  }
  __Unwind_Resume(plVar9);
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_1b8 = (long *)0x1;
  uStack_1b0 = 0x19;
  pcStack_1a8 = "endpoint-load-metrics-bin";
  plVar9 = *pplVar6;
  if ((long *)0x1 < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_1d8 = pplVar6[1];
  plStack_1e0 = *pplVar6;
  plStack_1c8 = pplVar6[3];
  plStack_1d0 = pplVar6[2];
  pplVar6 = &plStack_1b8;
  FUN_104a9da10();
  if ((long *)0x1 < plStack_1e0) {
    do {
      lVar8 = *plStack_1e0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_1e0,0x10);
      if (bVar4) {
        *plStack_1e0 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_1e0[1])();
    }
  }
  plVar9 = plStack_1b8;
  if ((long *)0x1 < plStack_1b8) {
    do {
      lVar8 = *plStack_1b8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_1b8,0x10);
      if (bVar4) {
        *plStack_1b8 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_1b8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_1e0);
    func_0x0001004b6d90(&plStack_1b8);
  }
  __Unwind_Resume(plVar9);
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_228 = (ulong *)0x1;
  uStack_220 = 0x15;
  pcStack_218 = "grpc-server-stats-bin";
  plVar9 = *pplVar6;
  if ((long *)0x1 < plVar9) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_248 = pplVar6[1];
  plStack_250 = *pplVar6;
  plStack_238 = pplVar6[3];
  plStack_240 = pplVar6[2];
  ppuVar7 = &puStack_228;
  FUN_104a9da10();
  if ((long *)0x1 < plStack_250) {
    do {
      lVar8 = *plStack_250;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_250,0x10);
      if (bVar4) {
        *plStack_250 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_250[1])();
    }
  }
  puVar5 = puStack_228;
  if ((ulong *)0x1 < puStack_228) {
    do {
      uVar10 = *puStack_228;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puStack_228,0x10);
      if (bVar4) {
        *puStack_228 = uVar10 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar10 - 1 == 0) {
      (*(code *)puStack_228[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_250);
    func_0x0001004b6d90(&puStack_228);
  }
  __Unwind_Resume();
  puVar11 = puVar5 + 1;
  uVar10 = *puVar5;
  if ((uVar10 & 1) != 0) {
    puVar11 = (ulong *)*puVar11;
  }
  if (1 < uVar10) {
    lVar8 = (uVar10 >> 1) << 5;
    do {
      FUN_104aa86e4(ppuVar7,puVar11);
      puVar11 = puVar11 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 104aa8228; end: 104aa834b;  */

void FUN_104aa8228(long *param_1,long **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long **pplVar5;
  ulong **ppuVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  ulong *puStack_198;
  undefined8 uStack_190;
  char *pcStack_188;
  long lStack_178;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_128;
  undefined8 uStack_120;
  char *pcStack_118;
  long lStack_108;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_98;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = *param_2;
  plVar8 = (long *)((ulong)param_2[1] & 0xff);
  if (plVar1 != (long *)0x0) {
    plVar8 = param_2[1];
  }
  if (plVar8 != (long *)0x0) {
    plStack_48 = (long *)0x1;
    uStack_40 = 0xc;
    puStack_38 = &UNK_10f67192f;
    if ((long *)0x1 < plVar1) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_68 = param_2[1];
    plStack_70 = *param_2;
    plStack_58 = param_2[3];
    plStack_60 = param_2[2];
    param_2 = &plStack_48;
    func_0x0001008e1568(param_1,param_2,&plStack_70);
    if ((long *)0x1 < plStack_70) {
      do {
        lVar7 = *plStack_70;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
        if (bVar3) {
          *plStack_70 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_70[1])();
      }
    }
    param_1 = plStack_48;
    if ((long *)0x1 < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar3) {
          *plStack_48 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_70);
    func_0x0001004b6d90(&plStack_48);
  }
  __Unwind_Resume(param_1);
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_b8 = (long *)0x1;
  uStack_b0 = 4;
  puStack_a8 = &DAT_10f2df4ca;
  plVar8 = *param_2;
  if ((long *)0x1 < plVar8) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_d8 = param_2[1];
  plStack_e0 = *param_2;
  plStack_c8 = param_2[3];
  plStack_d0 = param_2[2];
  pplVar5 = &plStack_b8;
  func_0x0001008e1568();
  if ((long *)0x1 < plStack_e0) {
    do {
      lVar7 = *plStack_e0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
      if (bVar3) {
        *plStack_e0 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_e0[1])();
    }
  }
  plVar8 = plStack_b8;
  if ((long *)0x1 < plStack_b8) {
    do {
      lVar7 = *plStack_b8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_b8,0x10);
      if (bVar3) {
        *plStack_b8 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_b8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar5 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_e0);
    func_0x0001004b6d90(&plStack_b8);
  }
  __Unwind_Resume(plVar8);
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_128 = (long *)0x1;
  uStack_120 = 0x19;
  pcStack_118 = "endpoint-load-metrics-bin";
  plVar8 = *pplVar5;
  if ((long *)0x1 < plVar8) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_148 = pplVar5[1];
  plStack_150 = *pplVar5;
  plStack_138 = pplVar5[3];
  plStack_140 = pplVar5[2];
  pplVar5 = &plStack_128;
  FUN_104a9da10();
  if ((long *)0x1 < plStack_150) {
    do {
      lVar7 = *plStack_150;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_150,0x10);
      if (bVar3) {
        *plStack_150 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_150[1])();
    }
  }
  plVar8 = plStack_128;
  if ((long *)0x1 < plStack_128) {
    do {
      lVar7 = *plStack_128;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_128,0x10);
      if (bVar3) {
        *plStack_128 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_128[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar5 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_150);
    func_0x0001004b6d90(&plStack_128);
  }
  __Unwind_Resume(plVar8);
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_198 = (ulong *)0x1;
  uStack_190 = 0x15;
  pcStack_188 = "grpc-server-stats-bin";
  plVar8 = *pplVar5;
  if ((long *)0x1 < plVar8) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_1b8 = pplVar5[1];
  plStack_1c0 = *pplVar5;
  plStack_1a8 = pplVar5[3];
  plStack_1b0 = pplVar5[2];
  ppuVar6 = &puStack_198;
  FUN_104a9da10();
  if ((long *)0x1 < plStack_1c0) {
    do {
      lVar7 = *plStack_1c0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_1c0,0x10);
      if (bVar3) {
        *plStack_1c0 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_1c0[1])();
    }
  }
  puVar4 = puStack_198;
  if ((ulong *)0x1 < puStack_198) {
    do {
      uVar9 = *puStack_198;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puStack_198,0x10);
      if (bVar3) {
        *puStack_198 = uVar9 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar9 - 1 == 0) {
      (*(code *)puStack_198[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_1c0);
    func_0x0001004b6d90(&puStack_198);
  }
  __Unwind_Resume();
  puVar10 = puVar4 + 1;
  uVar9 = *puVar4;
  if ((uVar9 & 1) != 0) {
    puVar10 = (ulong *)*puVar10;
  }
  if (1 < uVar9) {
    lVar7 = (uVar9 >> 1) << 5;
    do {
      FUN_104aa86e4(ppuVar6,puVar10);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 104aa834c; end: 104aa845f;  */

void FUN_104aa834c(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  long **pplVar4;
  ulong **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  ulong *puStack_128;
  undefined8 uStack_120;
  char *pcStack_118;
  long lStack_108;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  long lStack_98;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_48 = (long *)0x1;
  uStack_40 = 4;
  puStack_38 = &DAT_10f2df4ca;
  plVar6 = (long *)*param_2;
  if ((long *)0x1 < plVar6) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  pplVar4 = &plStack_48;
  func_0x0001008e1568(param_1,pplVar4,&plStack_70);
  if ((long *)0x1 < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar2) {
        *plStack_70 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  plVar6 = plStack_48;
  if ((long *)0x1 < plStack_48) {
    do {
      lVar7 = *plStack_48;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar2) {
        *plStack_48 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_48[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar4 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_70);
    func_0x0001004b6d90(&plStack_48);
  }
  __Unwind_Resume(plVar6);
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_b8 = (long *)0x1;
  uStack_b0 = 0x19;
  pcStack_a8 = "endpoint-load-metrics-bin";
  plVar6 = *pplVar4;
  if ((long *)0x1 < plVar6) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_d8 = pplVar4[1];
  plStack_e0 = *pplVar4;
  plStack_c8 = pplVar4[3];
  plStack_d0 = pplVar4[2];
  pplVar4 = &plStack_b8;
  FUN_104a9da10();
  if ((long *)0x1 < plStack_e0) {
    do {
      lVar7 = *plStack_e0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
      if (bVar2) {
        *plStack_e0 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_e0[1])();
    }
  }
  plVar6 = plStack_b8;
  if ((long *)0x1 < plStack_b8) {
    do {
      lVar7 = *plStack_b8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_b8,0x10);
      if (bVar2) {
        *plStack_b8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_b8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar4 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_e0);
    func_0x0001004b6d90(&plStack_b8);
  }
  __Unwind_Resume(plVar6);
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_128 = (ulong *)0x1;
  uStack_120 = 0x15;
  pcStack_118 = "grpc-server-stats-bin";
  plVar6 = *pplVar4;
  if ((long *)0x1 < plVar6) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_148 = pplVar4[1];
  plStack_150 = *pplVar4;
  plStack_138 = pplVar4[3];
  plStack_140 = pplVar4[2];
  ppuVar5 = &puStack_128;
  FUN_104a9da10();
  if ((long *)0x1 < plStack_150) {
    do {
      lVar7 = *plStack_150;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_150,0x10);
      if (bVar2) {
        *plStack_150 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_150[1])();
    }
  }
  puVar3 = puStack_128;
  if ((ulong *)0x1 < puStack_128) {
    do {
      uVar8 = *puStack_128;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puStack_128,0x10);
      if (bVar2) {
        *puStack_128 = uVar8 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar8 - 1 == 0) {
      (*(code *)puStack_128[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar5 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_150);
    func_0x0001004b6d90(&puStack_128);
  }
  __Unwind_Resume();
  puVar9 = puVar3 + 1;
  uVar8 = *puVar3;
  if ((uVar8 & 1) != 0) {
    puVar9 = (ulong *)*puVar9;
  }
  if (1 < uVar8) {
    lVar7 = (uVar8 >> 1) << 5;
    do {
      FUN_104aa86e4(ppuVar5,puVar9);
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 104aa8460; end: 104aa8573;  */

void FUN_104aa8460(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  long **pplVar4;
  ulong **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  ulong *puStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  long lStack_98;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_48 = (long *)0x1;
  uStack_40 = 0x19;
  pcStack_38 = "endpoint-load-metrics-bin";
  plVar6 = (long *)*param_2;
  if ((long *)0x1 < plVar6) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  pplVar4 = &plStack_48;
  FUN_104a9da10(param_1,pplVar4,&plStack_70);
  if ((long *)0x1 < plStack_70) {
    do {
      lVar7 = *plStack_70;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar2) {
        *plStack_70 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  plVar6 = plStack_48;
  if ((long *)0x1 < plStack_48) {
    do {
      lVar7 = *plStack_48;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar2) {
        *plStack_48 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_48[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar4 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_70);
    func_0x0001004b6d90(&plStack_48);
  }
  __Unwind_Resume(plVar6);
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = (ulong *)0x1;
  uStack_b0 = 0x15;
  pcStack_a8 = "grpc-server-stats-bin";
  plVar6 = *pplVar4;
  if ((long *)0x1 < plVar6) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_d8 = pplVar4[1];
  plStack_e0 = *pplVar4;
  plStack_c8 = pplVar4[3];
  plStack_d0 = pplVar4[2];
  ppuVar5 = &puStack_b8;
  FUN_104a9da10();
  if ((long *)0x1 < plStack_e0) {
    do {
      lVar7 = *plStack_e0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
      if (bVar2) {
        *plStack_e0 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_e0[1])();
    }
  }
  puVar3 = puStack_b8;
  if ((ulong *)0x1 < puStack_b8) {
    do {
      uVar8 = *puStack_b8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puStack_b8,0x10);
      if (bVar2) {
        *puStack_b8 = uVar8 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar8 - 1 == 0) {
      (*(code *)puStack_b8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar5 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_e0);
    func_0x0001004b6d90(&puStack_b8);
  }
  __Unwind_Resume();
  puVar9 = puVar3 + 1;
  uVar8 = *puVar3;
  if ((uVar8 & 1) != 0) {
    puVar9 = (ulong *)*puVar9;
  }
  if (1 < uVar8) {
    lVar7 = (uVar8 >> 1) << 5;
    do {
      FUN_104aa86e4(ppuVar5,puVar9);
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 104aa8574; end: 104aa8687;  */

void FUN_104aa8574(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong **ppuVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong *puStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_48 = (ulong *)0x1;
  uStack_40 = 0x15;
  pcStack_38 = "grpc-server-stats-bin";
  plVar5 = (long *)*param_2;
  if ((long *)0x1 < plVar5) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  ppuVar4 = &puStack_48;
  FUN_104a9da10(param_1,ppuVar4,&plStack_70);
  if ((long *)0x1 < plStack_70) {
    do {
      lVar6 = *plStack_70;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar2) {
        *plStack_70 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  puVar3 = puStack_48;
  if ((ulong *)0x1 < puStack_48) {
    do {
      uVar7 = *puStack_48;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puStack_48,0x10);
      if (bVar2) {
        *puStack_48 = uVar7 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar7 - 1 == 0) {
      (*(code *)puStack_48[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar4 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_70);
    func_0x0001004b6d90(&puStack_48);
  }
  __Unwind_Resume();
  puVar8 = puVar3 + 1;
  uVar7 = *puVar3;
  if ((uVar7 & 1) != 0) {
    puVar8 = (ulong *)*puVar8;
  }
  if (1 < uVar7) {
    lVar6 = (uVar7 >> 1) << 5;
    do {
      FUN_104aa86e4(ppuVar4,puVar8);
      puVar8 = puVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  return;
}



/* Entry: 104aa8688; end: 104aa86e3;  */

void FUN_104aa8688(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  
  puVar2 = param_1 + 1;
  uVar1 = *param_1;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (1 < uVar1) {
    lVar3 = (uVar1 >> 1) << 5;
    do {
      FUN_104aa86e4(param_2,puVar2);
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 104aa86e4; end: 104aa88af;  */

long * FUN_104aa86e4(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long **pplVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  long lVar12;
  ulong uStack_1b8;
  undefined8 auStack_1b0 [2];
  char cStack_199;
  ulong uStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  long *plStack_170;
  undefined1 auStack_168 [32];
  long lStack_148;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_f8;
  undefined8 uStack_f0;
  char *pcStack_e8;
  long lStack_d8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b0 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000100033dac(&uStack_a8,param_2[1],param_2[2]);
  }
  else {
    uStack_a0 = param_2[2];
    uStack_a8 = param_2[1];
    lStack_98 = param_2[3];
  }
  FUN_104adf18c(&plStack_48,&uStack_b0);
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  plStack_68 = (long *)0x1;
  uStack_60 = 0xb;
  pcStack_58 = "lb-cost-bin";
  if ((long *)0x1 < plStack_48) {
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = *plStack_48 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_88 = uStack_40;
  plStack_90 = plStack_48;
  uStack_78 = uStack_30;
  uStack_80 = uStack_38;
  pplVar8 = &plStack_68;
  FUN_104a9da10(param_1,pplVar8,&plStack_90);
  if ((long *)0x1 < plStack_90) {
    do {
      lVar9 = *plStack_90;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar4) {
        *plStack_90 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  if ((long *)0x1 < plStack_68) {
    do {
      lVar9 = *plStack_68;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar4) {
        *plStack_68 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  plVar10 = plStack_48;
  if ((long *)0x1 < plStack_48) {
    do {
      lVar9 = *plStack_48;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_48[1])();
      plVar10 = plStack_48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar10;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume(plVar10);
  pcStack_b8 = FUN_104aa88b0;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_f8 = (long *)0x1;
  uStack_f0 = 8;
  pcStack_e8 = "lb-token";
  plVar10 = *pplVar8;
  if ((long *)0x1 < plVar10) {
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_118 = pplVar8[1];
  plStack_120 = *pplVar8;
  plStack_108 = pplVar8[3];
  plStack_110 = pplVar8[2];
  iVar7 = (int)&plStack_f8;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x0001008e1568();
  if ((long *)0x1 < plStack_120) {
    do {
      lVar9 = *plStack_120;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
      if (bVar4) {
        *plStack_120 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_120[1])();
    }
  }
  plVar10 = plStack_f8;
  if ((long *)0x1 < plStack_f8) {
    do {
      lVar9 = *plStack_f8;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_f8,0x10);
      if (bVar4) {
        *plStack_f8 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_f8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return plVar10;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_120);
    func_0x0001004b6d90(&plStack_f8);
  }
  __Unwind_Resume();
  pcStack_128 = FUN_104aa89c4;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = plVar10[2];
  *(undefined8 *)(lVar9 + 0xb0) = 0;
  if (*(undefined1 **)(lVar9 + 0xb8) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar9 + 0xb8) = 1;
    *(undefined8 *)(lVar9 + 0xb8) = 0;
  }
  *(undefined1 *)(lVar9 + 0x6f1) = 1;
  *(undefined1 *)(lVar9 + 0x16e) = 1;
  lVar12 = plVar10[1];
  ppuStack_130 = &puStack_c0;
  if (*(char *)(lVar12 + 0x628) == '\0') {
    if (*(char *)(lVar9 + 0x169) == '\0') {
      FUN_104a9d33c(auStack_168,*(undefined4 *)(lVar9 + 0x9c),0,lVar9 + 0x150);
      func_0x0001005a70c4(lVar12 + 0x310,auStack_168);
      lVar12 = plVar10[1];
      lVar9 = plVar10[2];
      bVar4 = *(char *)(lVar12 + 0x628) == '\0';
    }
    else {
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  plStack_170 = (long *)0x0;
  FUN_104a997b0(lVar12,lVar9,bVar4,1,&plStack_170);
  plVar5 = plStack_170;
  if (((ulong)plStack_170 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar6 = plVar5;
  __Unwind_Resume();
  pcStack_178 = FUN_104aa8adc;
  plStack_190 = plVar10;
  plStack_188 = plVar5;
  pppuStack_180 = &ppuStack_130;
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    if ((plVar6[1] == 4) && (*(int *)*plVar6 == 0x78696e75)) goto LAB_104aa8b70;
  }
  else if (*(char *)((long)plVar6 + 0x17) == '\x04' && (int)*plVar6 == 0x78696e75) {
LAB_104aa8b70:
    uVar1 = plVar6[7];
    plVar10 = (long *)plVar6[6];
    if (-1 < (char)*(byte *)((long)plVar6 + 0x47)) {
      uVar1 = (ulong)*(byte *)((long)plVar6 + 0x47);
      plVar10 = plVar6 + 6;
    }
    FUN_104aa8c68(&uStack_198,plVar10,uVar1,lVar9);
    bVar4 = uStack_198 == 0;
    if (uStack_198 == 0) {
      return (long *)0x1;
    }
    uStack_1b8 = uStack_198;
    if ((uStack_198 & 1) != 0) {
      piVar11 = (int *)(uStack_198 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104aba950(auStack_1b0,&uStack_1b8);
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,0x38,2,"%s");
    if (cStack_199 < '\0') {
      __ZdlPv(auStack_1b0[0]);
    }
    if ((uStack_1b8 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_198 & 1) == 0) {
      return (long *)(ulong)bVar4;
    }
    func_0x00010084dad0();
    return (long *)(ulong)bVar4;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                      ,0x31,2,"Expected \'unix\' scheme, got \'%s\'");
  return (long *)0x0;
}



/* Entry: 104aa88b0; end: 104aa89c3;  */

long * FUN_104aa88b0(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long **pplVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  ulong uStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  ulong uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  undefined1 auStack_b8 [32];
  long lStack_98;
  undefined1 *puStack_80;
  code *pcStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_48 = (long *)0x1;
  uStack_40 = 8;
  pcStack_38 = "lb-token";
  plVar9 = (long *)*param_2;
  if ((long *)0x1 < plVar9) {
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = param_2[1];
  plStack_70 = (long *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  pplVar8 = &plStack_48;
  func_0x0001008e1568(param_1,pplVar8,&plStack_70);
  iVar7 = (int)pplVar8;
  if ((long *)0x1 < plStack_70) {
    do {
      lVar10 = *plStack_70;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar4) {
        *plStack_70 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  plVar9 = plStack_48;
  if ((long *)0x1 < plStack_48) {
    do {
      lVar10 = *plStack_48;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
      if (bVar4) {
        *plStack_48 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_48[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar9;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_70);
    func_0x0001004b6d90(&plStack_48);
  }
  __Unwind_Resume();
  pcStack_78 = FUN_104aa89c4;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = plVar9[2];
  *(undefined8 *)(lVar10 + 0xb0) = 0;
  if (*(undefined1 **)(lVar10 + 0xb8) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar10 + 0xb8) = 1;
    *(undefined8 *)(lVar10 + 0xb8) = 0;
  }
  *(undefined1 *)(lVar10 + 0x6f1) = 1;
  *(undefined1 *)(lVar10 + 0x16e) = 1;
  lVar12 = plVar9[1];
  puStack_80 = &stack0xfffffffffffffff0;
  if (*(char *)(lVar12 + 0x628) == '\0') {
    if (*(char *)(lVar10 + 0x169) == '\0') {
      FUN_104a9d33c(auStack_b8,*(undefined4 *)(lVar10 + 0x9c),0,lVar10 + 0x150);
      func_0x0001005a70c4(lVar12 + 0x310,auStack_b8);
      lVar12 = plVar9[1];
      lVar10 = plVar9[2];
      bVar4 = *(char *)(lVar12 + 0x628) == '\0';
    }
    else {
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  plStack_c0 = (long *)0x0;
  FUN_104a997b0(lVar12,lVar10,bVar4,1,&plStack_c0);
  plVar5 = plStack_c0;
  if (((ulong)plStack_c0 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar6 = plVar5;
  __Unwind_Resume();
  pcStack_c8 = FUN_104aa8adc;
  plStack_e0 = plVar9;
  plStack_d8 = plVar5;
  ppuStack_d0 = &puStack_80;
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    if ((plVar6[1] == 4) && (*(int *)*plVar6 == 0x78696e75)) goto LAB_104aa8b70;
  }
  else if (*(char *)((long)plVar6 + 0x17) == '\x04' && (int)*plVar6 == 0x78696e75) {
LAB_104aa8b70:
    uVar1 = plVar6[7];
    plVar9 = (long *)plVar6[6];
    if (-1 < (char)*(byte *)((long)plVar6 + 0x47)) {
      uVar1 = (ulong)*(byte *)((long)plVar6 + 0x47);
      plVar9 = plVar6 + 6;
    }
    FUN_104aa8c68(&uStack_e8,plVar9,uVar1,lVar10);
    bVar4 = uStack_e8 == 0;
    if (uStack_e8 == 0) {
      return (long *)0x1;
    }
    uStack_108 = uStack_e8;
    if ((uStack_e8 & 1) != 0) {
      piVar11 = (int *)(uStack_e8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104aba950(auStack_100,&uStack_108);
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,0x38,2,"%s");
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
    if ((uStack_108 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_e8 & 1) == 0) {
      return (long *)(ulong)bVar4;
    }
    func_0x00010084dad0();
    return (long *)(ulong)bVar4;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                      ,0x31,2,"Expected \'unix\' scheme, got \'%s\'");
  return (long *)0x0;
}



/* Entry: 104aa89c4; end: 104aa8adb;  */

int * FUN_104aa89c4(long param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  ulong uStack_98;
  undefined8 auStack_90 [2];
  char cStack_79;
  ulong uStack_78;
  long lStack_70;
  int *piStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  if (*(undefined1 **)(lVar6 + 0xb8) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar6 + 0xb8) = 1;
    *(undefined8 *)(lVar6 + 0xb8) = 0;
  }
  *(undefined1 *)(lVar6 + 0x6f1) = 1;
  *(undefined1 *)(lVar6 + 0x16e) = 1;
  lVar8 = *(long *)(param_1 + 8);
  if (*(char *)(lVar8 + 0x628) == '\0') {
    if (*(char *)(lVar6 + 0x169) == '\0') {
      FUN_104a9d33c(auStack_48,*(undefined4 *)(lVar6 + 0x9c),0,lVar6 + 0x150);
      func_0x0001005a70c4(lVar8 + 0x310,auStack_48);
      lVar8 = *(long *)(param_1 + 8);
      lVar6 = *(long *)(param_1 + 0x10);
      bVar4 = *(char *)(lVar8 + 0x628) == '\0';
    }
    else {
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  piStack_50 = (int *)0x0;
  FUN_104a997b0(lVar8,lVar6,bVar4,1,&piStack_50);
  piVar7 = piStack_50;
  if (((ulong)piStack_50 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return piVar7;
  }
  ___stack_chk_fail();
  piVar5 = piVar7;
  __Unwind_Resume();
  pcStack_58 = FUN_104aa8adc;
  lStack_70 = param_1;
  piStack_68 = piVar7;
  puStack_60 = &stack0xfffffffffffffff0;
  if (*(char *)((long)piVar5 + 0x17) < '\0') {
    if ((*(long *)(piVar5 + 2) == 4) && (**(int **)piVar5 == 0x78696e75)) goto LAB_104aa8b70;
  }
  else if (*(char *)((long)piVar5 + 0x17) == '\x04' && *piVar5 == 0x78696e75) {
LAB_104aa8b70:
    uVar1 = *(ulong *)(piVar5 + 0xe);
    piVar7 = *(int **)(piVar5 + 0xc);
    if (-1 < (char)*(byte *)((long)piVar5 + 0x47)) {
      uVar1 = (ulong)*(byte *)((long)piVar5 + 0x47);
      piVar7 = piVar5 + 0xc;
    }
    FUN_104aa8c68(&uStack_78,piVar7,uVar1,lVar6);
    bVar4 = uStack_78 == 0;
    if (uStack_78 == 0) {
      return (int *)0x1;
    }
    uStack_98 = uStack_78;
    if ((uStack_78 & 1) != 0) {
      piVar7 = (int *)(uStack_78 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104aba950(auStack_90,&uStack_98);
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,0x38,2,"%s");
    if (cStack_79 < '\0') {
      __ZdlPv(auStack_90[0]);
    }
    if ((uStack_98 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_78 & 1) == 0) {
      return (int *)(ulong)bVar4;
    }
    func_0x00010084dad0();
    return (int *)(ulong)bVar4;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                      ,0x31,2,"Expected \'unix\' scheme, got \'%s\'");
  return (int *)0x0;
}



/* Entry: 104aa8adc; end: 104aa8c67;  */

bool FUN_104aa8adc(int *param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  ulong uStack_48;
  undefined8 auStack_40 [2];
  char cStack_29;
  ulong uStack_28;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    if ((*(long *)(param_1 + 2) == 4) && (**(int **)param_1 == 0x78696e75)) goto LAB_104aa8b70;
  }
  else if (*(char *)((long)param_1 + 0x17) == '\x04' && *param_1 == 0x78696e75) {
LAB_104aa8b70:
    uVar1 = *(ulong *)(param_1 + 0xe);
    piVar5 = *(int **)(param_1 + 0xc);
    if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x47);
      piVar5 = param_1 + 0xc;
    }
    FUN_104aa8c68(&uStack_28,piVar5,uVar1,param_2);
    bVar4 = uStack_28 == 0;
    if (uStack_28 == 0) {
      return true;
    }
    uStack_48 = uStack_28;
    if ((uStack_28 & 1) != 0) {
      piVar5 = (int *)(uStack_28 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104aba950(auStack_40,&uStack_48);
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,0x38,2,"%s");
    if (cStack_29 < '\0') {
      __ZdlPv(auStack_40[0]);
    }
    if ((uStack_48 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_28 & 1) == 0) {
      return bVar4;
    }
    func_0x00010084dad0();
    return bVar4;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                      ,0x31,2,"Expected \'unix\' scheme, got \'%s\'");
  return false;
}



/* Entry: 104aa8c68; end: 104aa8df3;  */

long ******* FUN_104aa8c68(undefined8 *param_1,long *******param_2,ulong param_3,long ******param_4)

{
  long ******pppppplVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  int *piVar9;
  ulong uStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  ulong uStack_138;
  long *****ppppplStack_130;
  long ******pppppplStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long ****pppplStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_e9;
  long ******pppppplStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  long *****ppppplStack_d0;
  char *pcStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [32];
  char *pcStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(param_4 + 0x10) = 0;
  param_4[0xd] = (long *****)0x0;
  param_4[0xc] = (long *****)0x0;
  param_4[0xf] = (long *****)0x0;
  param_4[0xe] = (long *****)0x0;
  param_4[9] = (long *****)0x0;
  param_4[8] = (long *****)0x0;
  param_4[0xb] = (long *****)0x0;
  param_4[10] = (long *****)0x0;
  param_4[5] = (long *****)0x0;
  param_4[4] = (long *****)0x0;
  param_4[7] = (long *****)0x0;
  param_4[6] = (long *****)0x0;
  param_4[1] = (long *****)0x0;
  *param_4 = (long *****)0x0;
  param_4[3] = (long *****)0x0;
  param_4[2] = (long *****)0x0;
  if (param_3 < 0x68) {
    *(undefined1 *)((long)param_4 + 1) = 1;
    ppppppplVar6 = param_2;
    ppppppplVar8 = (long *******)0x0;
    if (param_3 != 0) {
      ppppppplVar6 = (long *******)((long)param_4 + 2);
      _memmove(ppppppplVar6,param_2,param_3);
      ppppppplVar8 = param_2;
    }
    *(undefined1 *)((long)param_4 + param_3 + 2) = 0;
    *(undefined4 *)(param_4 + 0x10) = 0x6a;
    *param_1 = 0;
  }
  else {
    pcStack_68 = "Path name should not have more than ";
    uStack_60 = 0x24;
    lVar5 = 0x67;
    func_0x00010ae8b9f0(0x67,auStack_88);
    lStack_90 = lVar5 - (long)auStack_88;
    pcStack_c8 = " characters";
    uStack_c0 = 0xb;
    puStack_98 = auStack_88;
    func_0x000100066c24(&pppppplStack_e8,&pcStack_68,&puStack_98,&pcStack_c8);
    ppppppplVar8 = (long *******)pppppplStack_e8;
    if (-1 < (char)bStack_d1) {
      uStack_e0 = (ulong)bStack_d1;
      ppppppplVar8 = &pppppplStack_e8;
    }
    uStack_100 = 0;
    uStack_f8 = 0;
    pppplStack_108 = (long ****)0x0;
    param_4 = (long ******)&pppplStack_108;
    FUN_104ab5920(param_1,2,ppppppplVar8,uStack_e0,&uStack_e9,&pppplStack_108);
    ppppppplVar6 = (long *******)&ppppplStack_d0;
    ppppplStack_d0 = (long *****)param_4;
    func_0x000100482b64();
    if ((char)bStack_d1 < '\0') {
      ppppppplVar6 = (long *******)pppppplStack_e8;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppppppplVar6;
  }
  ___stack_chk_fail();
  ppppplStack_d0 = (long *****)param_4;
  func_0x000100482b64(&ppppplStack_d0);
  if ((char)bStack_d1 < '\0') {
    __ZdlPv(pppppplStack_e8);
  }
  ppppppplVar7 = ppppppplVar6;
  __Unwind_Resume();
  pcStack_118 = FUN_104aa8df4;
  ppppplStack_130 = (long *****)param_4;
  pppppplStack_128 = (long ******)ppppppplVar6;
  puStack_120 = &stack0xfffffffffffffff0;
  if (*(char *)((long)ppppppplVar7 + 0x17) < '\0') {
    if ((ppppppplVar7[1] == (long ******)0xd) &&
       (**ppppppplVar7 == (long *****)0x7362612d78696e75 &&
        *(long *)((long)*ppppppplVar7 + 5) == 0x7463617274736261)) goto LAB_104aa8ecc;
  }
  else if ((*(char *)((long)ppppppplVar7 + 0x17) == '\r') &&
          (*ppppppplVar7 == (long ******)0x7362612d78696e75 &&
           *(long *)((long)ppppppplVar7 + 5) == 0x7463617274736261)) {
LAB_104aa8ecc:
    pppppplVar1 = ppppppplVar7[7];
    ppppppplVar6 = (long *******)ppppppplVar7[6];
    if (-1 < (char)*(byte *)((long)ppppppplVar7 + 0x47)) {
      pppppplVar1 = (long ******)(ulong)*(byte *)((long)ppppppplVar7 + 0x47);
      ppppppplVar6 = ppppppplVar7 + 6;
    }
    FUN_104aa8fc4(&uStack_138,ppppppplVar6,pppppplVar1,ppppppplVar8);
    bVar4 = uStack_138 == 0;
    if (uStack_138 == 0) {
      return (long *******)0x1;
    }
    uStack_158 = uStack_138;
    if ((uStack_138 & 1) != 0) {
      piVar9 = (int *)(uStack_138 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104aba950(auStack_150,&uStack_158);
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,0x49,2,"%s");
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
    }
    if ((uStack_158 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_138 & 1) == 0) {
      return (long *******)(ulong)bVar4;
    }
    func_0x00010084dad0();
    return (long *******)(ulong)bVar4;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                      ,0x42,2,"Expected \'unix-abstract\' scheme, got \'%s\'");
  return (long *******)0x0;
}



/* Entry: 104aa8df4; end: 104aa8fc3;  */

bool FUN_104aa8df4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  bool bVar5;
  int *piVar6;
  ulong uStack_48;
  undefined8 auStack_40 [2];
  char cStack_29;
  ulong uStack_28;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    if ((param_1[1] == 0xd) &&
       (*(long *)*param_1 == 0x7362612d78696e75 && *(long *)(*param_1 + 5) == 0x7463617274736261))
    goto LAB_104aa8ecc;
  }
  else if ((*(char *)((long)param_1 + 0x17) == '\r') &&
          (*param_1 == 0x7362612d78696e75 && *(long *)((long)param_1 + 5) == 0x7463617274736261)) {
LAB_104aa8ecc:
    uVar1 = param_1[7];
    plVar4 = (long *)param_1[6];
    if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x47);
      plVar4 = param_1 + 6;
    }
    FUN_104aa8fc4(&uStack_28,plVar4,uVar1,param_2);
    bVar5 = uStack_28 == 0;
    if (uStack_28 == 0) {
      return true;
    }
    uStack_48 = uStack_28;
    if ((uStack_28 & 1) != 0) {
      piVar6 = (int *)(uStack_28 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104aba950(auStack_40,&uStack_48);
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,0x49,2,"%s");
    if (cStack_29 < '\0') {
      __ZdlPv(auStack_40[0]);
    }
    if ((uStack_48 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_28 & 1) == 0) {
      return bVar5;
    }
    func_0x00010084dad0();
    return bVar5;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                      ,0x42,2,"Expected \'unix-abstract\' scheme, got \'%s\'");
  return false;
}



/* Entry: 104aa8fc4; end: 104aa9147;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_104aa8fc4(undefined8 *param_1,undefined8 *******param_2,undefined8 ******param_3,
             undefined8 ******param_4,undefined1 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *******pppppppuVar7;
  long lVar8;
  undefined8 *******pppppppuVar9;
  undefined8 uVar10;
  undefined8 ******ppppppuVar11;
  char *pcVar12;
  undefined8 *******pppppppuVar13;
  int iVar14;
  int iStack_1c0;
  int iStack_1bc;
  undefined8 *******pppppppuStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 *******pppppppuStack_188;
  undefined8 *******pppppppuStack_180;
  undefined8 uStack_178;
  long lStack_158;
  undefined8 *****pppppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_e9;
  undefined8 *******pppppppuStack_e8;
  undefined8 ******ppppppuStack_e0;
  byte bStack_d1;
  undefined8 ******ppppppuStack_d0;
  char *pcStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [32];
  char *pcStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(param_4 + 0x10) = 0;
  param_4[0xd] = (undefined8 *****)0x0;
  param_4[0xc] = (undefined8 *****)0x0;
  param_4[0xf] = (undefined8 *****)0x0;
  param_4[0xe] = (undefined8 *****)0x0;
  param_4[9] = (undefined8 *****)0x0;
  param_4[8] = (undefined8 *****)0x0;
  param_4[0xb] = (undefined8 *****)0x0;
  param_4[10] = (undefined8 *****)0x0;
  param_4[5] = (undefined8 *****)0x0;
  param_4[4] = (undefined8 *****)0x0;
  param_4[7] = (undefined8 *****)0x0;
  param_4[6] = (undefined8 *****)0x0;
  param_4[1] = (undefined8 *****)0x0;
  *param_4 = (undefined8 *****)0x0;
  param_4[3] = (undefined8 *****)0x0;
  param_4[2] = (undefined8 *****)0x0;
  if (param_3 < (undefined8 ******)0x68) {
    *(undefined2 *)((long)param_4 + 1) = 1;
    pppppppuVar13 = param_2;
    pppppppuVar9 = (undefined8 *******)0x0;
    ppppppuVar11 = param_4;
    if (param_3 != (undefined8 ******)0x0) {
      pppppppuVar13 = (undefined8 *******)((long)param_4 + 3);
      ppppppuVar11 = param_3;
      _memmove();
      pppppppuVar9 = param_2;
    }
    *(int *)(param_4 + 0x10) = (int)param_3 + 2;
    *param_1 = 0;
  }
  else {
    pcStack_68 = "Path name should not have more than ";
    uStack_60 = 0x24;
    lVar6 = 0x67;
    func_0x00010ae8b9f0(0x67,auStack_88);
    lStack_90 = lVar6 - (long)auStack_88;
    pcStack_c8 = " characters";
    uStack_c0 = 0xb;
    puStack_98 = auStack_88;
    func_0x000100066c24(&pppppppuStack_e8,&pcStack_68,&puStack_98,&pcStack_c8);
    ppppppuVar11 = ppppppuStack_e0;
    pppppppuVar9 = pppppppuStack_e8;
    if (-1 < (char)bStack_d1) {
      ppppppuVar11 = (undefined8 ******)(ulong)bStack_d1;
      pppppppuVar9 = &pppppppuStack_e8;
    }
    uStack_100 = 0;
    uStack_f8 = 0;
    pppppuStack_108 = (undefined8 *****)0x0;
    param_4 = &pppppuStack_108;
    param_5 = &uStack_e9;
    FUN_104ab5920(param_1,2);
    pppppppuVar13 = &ppppppuStack_d0;
    ppppppuStack_d0 = param_4;
    func_0x000100482b64();
    if ((char)bStack_d1 < '\0') {
      pppppppuVar13 = pppppppuStack_e8;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppppppuVar13;
  }
  ___stack_chk_fail();
  ppppppuStack_d0 = param_4;
  func_0x000100482b64(&ppppppuStack_d0);
  if ((char)bStack_d1 < '\0') {
    __ZdlPv(pppppppuStack_e8);
  }
  __Unwind_Resume();
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuStack_1a0 = (undefined8 *******)0x0;
  uStack_198 = 0;
  uStack_190 = 0;
  pppppppuStack_1b8 = (undefined8 *******)0x0;
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  pppppppuVar7 = pppppppuVar13;
  func_0x0001004c2450();
  iVar14 = (int)param_5;
  if (((ulong)pppppppuVar7 & 1) == 0) {
    if (iVar14 == 0) goto LAB_104aa94bc;
    if (pppppppuVar9 < (undefined8 *******)0x7ffffffffffffff8) {
      if (pppppppuVar9 < (undefined8 *******)0x17) {
        uStack_178 = CONCAT17((char)pppppppuVar9,(undefined7)uStack_178);
        pppppppuVar7 = &pppppppuStack_188;
        if (pppppppuVar9 != (undefined8 *******)0x0) goto LAB_104aa92dc;
      }
      else {
        uVar2 = ((ulong)pppppppuVar9 & 0xfffffffffffffff8) + 8;
        if (((ulong)pppppppuVar9 | 7) != 0x17) {
          uVar2 = (ulong)pppppppuVar9 | 7;
        }
        pppppppuVar7 = (undefined8 *******)(uVar2 + 1);
        __Znwm();
        uStack_178 = uVar2 + 1 | 0x8000000000000000;
        pppppppuStack_188 = pppppppuVar7;
        pppppppuStack_180 = pppppppuVar9;
LAB_104aa92dc:
        _memmove(pppppppuVar7,pppppppuVar13,pppppppuVar9);
      }
      *(undefined1 *)((long)pppppppuVar7 + (long)pppppppuVar9) = 0;
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                          ,0xce,2,"Failed gpr_split_host_port(%s, ...)");
      if ((long)uStack_178 < 0) {
        __ZdlPv(pppppppuStack_188);
      }
      goto LAB_104aa94bc;
    }
  }
  else {
    ppppppuVar11[0xd] = (undefined8 *****)0x0;
    ppppppuVar11[0xc] = (undefined8 *****)0x0;
    ppppppuVar11[0xf] = (undefined8 *****)0x0;
    ppppppuVar11[0xe] = (undefined8 *****)0x0;
    ppppppuVar11[9] = (undefined8 *****)0x0;
    ppppppuVar11[8] = (undefined8 *****)0x0;
    ppppppuVar11[0xb] = (undefined8 *****)0x0;
    ppppppuVar11[10] = (undefined8 *****)0x0;
    ppppppuVar11[5] = (undefined8 *****)0x0;
    ppppppuVar11[4] = (undefined8 *****)0x0;
    ppppppuVar11[7] = (undefined8 *****)0x0;
    ppppppuVar11[6] = (undefined8 *****)0x0;
    ppppppuVar11[1] = (undefined8 *****)0x0;
    *ppppppuVar11 = (undefined8 *****)0x0;
    ppppppuVar11[3] = (undefined8 *****)0x0;
    ppppppuVar11[2] = (undefined8 *****)0x0;
    *(undefined4 *)(ppppppuVar11 + 0x10) = 0x1c;
    *(undefined1 *)((long)ppppppuVar11 + 1) = 0x1e;
    uVar2 = uStack_198;
    pppppppuVar13 = pppppppuStack_1a0;
    if (-1 < (long)uStack_190) {
      uVar2 = uStack_190 >> 0x38;
      pppppppuVar13 = &pppppppuStack_1a0;
    }
    FUN_104a6f3e8(pppppppuVar13,0x25,uVar2);
    if (pppppppuVar13 == (undefined8 *******)0x0) {
      pppppppuVar13 = pppppppuStack_1a0;
      if (-1 < (long)uStack_190) {
        pppppppuVar13 = &pppppppuStack_1a0;
      }
      iVar5 = 0x1e;
      func_0x0001004ded14(0x1e,pppppppuVar13,ppppppuVar11 + 1);
      if (iVar5 == 0) {
        if (iVar14 == 0) goto LAB_104aa94bc;
        pcVar12 = "invalid ipv6 address: \'%s\'";
        uVar10 = 0x104;
LAB_104aa9484:
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                            ,uVar10,2,pcVar12);
        goto LAB_104aa94bc;
      }
LAB_104aa93dc:
      if (uStack_1a8 < 0) {
        pppppppuVar13 = pppppppuStack_1b8;
        if (lStack_1b0 == 0) goto LAB_104aa943c;
      }
      else {
        if (uStack_1a8._7_1_ == '\0') {
LAB_104aa943c:
          if (iVar14 != 0) {
            func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                                ,0x10b,2,"no port given for ipv6 scheme");
          }
          goto LAB_104aa94bc;
        }
        pppppppuVar13 = &pppppppuStack_1b8;
      }
      _sscanf(pppppppuVar13,"%d");
      if ((((int)pppppppuVar13 != 1) || (iStack_1c0 < 0)) || (0xffff < iStack_1c0)) {
        if (iVar14 == 0) goto LAB_104aa94bc;
        pcVar12 = "invalid ipv6 port: \'%s\'";
        uVar10 = 0x111;
        goto LAB_104aa9484;
      }
      uVar4 = (undefined2)iStack_1c0;
      func_0x0001004ded18();
      *(undefined2 *)((long)ppppppuVar11 + 2) = uVar4;
      pppppppuVar13 = (undefined8 *******)0x1;
    }
    else {
      pppppppuVar9 = pppppppuStack_1a0;
      if (-1 < (long)uStack_190) {
        pppppppuVar9 = &pppppppuStack_1a0;
      }
      if (pppppppuVar13 < pppppppuVar9) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                            ,0xdc,2,"assertion failed: %s");
        _abort();
        goto LAB_104aa9550;
      }
      uVar2 = (long)pppppppuVar13 - (long)pppppppuVar9;
      if (uVar2 < 0x2f) {
        iStack_1bc = 0;
        _strncpy(&pppppppuStack_188,pppppppuVar9,uVar2);
        *(undefined1 *)((long)&pppppppuStack_188 + uVar2) = 0;
        iVar5 = 0x1e;
        func_0x0001004ded14(0x1e,&pppppppuStack_188,ppppppuVar11 + 1);
        if (iVar5 != 0) {
          lVar6 = (long)pppppppuVar13 + 1;
          uVar1 = uStack_198;
          if (-1 < (long)uStack_190) {
            uVar1 = uStack_190 >> 0x38;
          }
          lVar8 = lVar6;
          FUN_104a6f15c(lVar6,uVar1 + ~uVar2,&iStack_1bc);
          if ((int)lVar8 == 0) {
            FUN_104abde24();
            iStack_1bc = (int)lVar6;
            if (iStack_1bc == 0) {
              pcVar12 = "Invalid interface name: \'%s\'. Non-numeric and failed if_nametoindex.";
              uVar10 = 0xf8;
              goto LAB_104aa94a8;
            }
          }
          *(int *)(ppppppuVar11 + 3) = iStack_1bc;
          goto LAB_104aa93dc;
        }
        if (((ulong)param_5 & 1) != 0) {
          pcVar12 = "invalid ipv6 address: \'%s\'";
          uVar10 = 0xf0;
LAB_104aa94a8:
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                              ,uVar10,2,pcVar12);
        }
      }
      else {
        iStack_1bc = 0;
        if (iVar14 != 0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                              ,0xe4,2,
                              "invalid ipv6 address length %zu. Length cannot be greater than GRPC_INET6_ADDRSTRLEN i.e %d)"
                             );
        }
      }
LAB_104aa94bc:
      pppppppuVar13 = (undefined8 *******)0x0;
    }
    if (uStack_1a8 < 0) {
      __ZdlPv(pppppppuStack_1b8);
    }
    if ((long)uStack_190 < 0) {
      __ZdlPv(pppppppuStack_1a0);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
      return pppppppuVar13;
    }
    ___stack_chk_fail();
  }
  func_0x000104a6fa5c(&pppppppuStack_188);
LAB_104aa9550:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104aa9554);
  (*pcVar3)();
}



/* Entry: 104aa9148; end: 104aa95a3;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_104aa9148(ulong param_1,ulong param_2,undefined8 *param_3,uint param_4)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *******pppppppuVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  int iStack_b0;
  int iStack_ac;
  undefined8 *******pppppppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 *******pppppppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 *******pppppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuStack_90 = (undefined8 *******)0x0;
  uStack_88 = 0;
  uStack_80 = 0;
  pppppppuStack_a8 = (undefined8 *******)0x0;
  lStack_a0 = 0;
  uStack_98 = 0;
  uVar6 = param_1;
  func_0x0001004c2450(param_1,param_2,&pppppppuStack_90,&pppppppuStack_a8);
  if ((uVar6 & 1) == 0) {
    if (param_4 == 0) goto LAB_104aa94bc;
    if (param_2 < 0x7ffffffffffffff8) {
      if (param_2 < 0x17) {
        uStack_68 = CONCAT17((char)param_2,(undefined7)uStack_68);
        pppppppuVar7 = &pppppppuStack_78;
        if (param_2 != 0) goto LAB_104aa92dc;
      }
      else {
        uVar6 = (param_2 & 0xfffffffffffffff8) + 8;
        if ((param_2 | 7) != 0x17) {
          uVar6 = param_2 | 7;
        }
        pppppppuVar7 = (undefined8 *******)(uVar6 + 1);
        __Znwm();
        uStack_68 = uVar6 + 1 | 0x8000000000000000;
        pppppppuStack_78 = pppppppuVar7;
        uStack_70 = param_2;
LAB_104aa92dc:
        _memmove(pppppppuVar7,param_1,param_2);
      }
      *(undefined1 *)((long)pppppppuVar7 + param_2) = 0;
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                          ,0xce,2,"Failed gpr_split_host_port(%s, ...)");
      if ((long)uStack_68 < 0) {
        __ZdlPv(pppppppuStack_78);
      }
      goto LAB_104aa94bc;
    }
  }
  else {
    param_3[0xd] = 0;
    param_3[0xc] = 0;
    param_3[0xf] = 0;
    param_3[0xe] = 0;
    param_3[9] = 0;
    param_3[8] = 0;
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    *(undefined4 *)(param_3 + 0x10) = 0x1c;
    *(undefined1 *)((long)param_3 + 1) = 0x1e;
    uVar6 = uStack_88;
    pppppppuVar7 = pppppppuStack_90;
    if (-1 < (long)uStack_80) {
      uVar6 = uStack_80 >> 0x38;
      pppppppuVar7 = &pppppppuStack_90;
    }
    FUN_104a6f3e8(pppppppuVar7,0x25,uVar6);
    if (pppppppuVar7 == (undefined8 *******)0x0) {
      pppppppuVar7 = pppppppuStack_90;
      if (-1 < (long)uStack_80) {
        pppppppuVar7 = &pppppppuStack_90;
      }
      iVar5 = 0x1e;
      func_0x0001004ded14(0x1e,pppppppuVar7,param_3 + 1);
      if (iVar5 == 0) {
        if (param_4 == 0) goto LAB_104aa94bc;
        pcVar10 = "invalid ipv6 address: \'%s\'";
        uVar11 = 0x104;
LAB_104aa9484:
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                            ,uVar11,2,pcVar10);
        goto LAB_104aa94bc;
      }
LAB_104aa93dc:
      if (uStack_98 < 0) {
        pppppppuVar7 = pppppppuStack_a8;
        if (lStack_a0 == 0) goto LAB_104aa943c;
      }
      else {
        if (uStack_98._7_1_ == '\0') {
LAB_104aa943c:
          if (param_4 != 0) {
            func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                                ,0x10b,2,"no port given for ipv6 scheme");
          }
          goto LAB_104aa94bc;
        }
        pppppppuVar7 = &pppppppuStack_a8;
      }
      _sscanf(pppppppuVar7,"%d");
      if ((((int)pppppppuVar7 != 1) || (iStack_b0 < 0)) || (0xffff < iStack_b0)) {
        if (param_4 == 0) goto LAB_104aa94bc;
        pcVar10 = "invalid ipv6 port: \'%s\'";
        uVar11 = 0x111;
        goto LAB_104aa9484;
      }
      uVar4 = (undefined2)iStack_b0;
      func_0x0001004ded18();
      *(undefined2 *)((long)param_3 + 2) = uVar4;
      uVar11 = 1;
    }
    else {
      pppppppuVar2 = pppppppuStack_90;
      if (-1 < (long)uStack_80) {
        pppppppuVar2 = &pppppppuStack_90;
      }
      if (pppppppuVar7 < pppppppuVar2) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                            ,0xdc,2,"assertion failed: %s");
        _abort();
        goto LAB_104aa9550;
      }
      uVar6 = (long)pppppppuVar7 - (long)pppppppuVar2;
      if (uVar6 < 0x2f) {
        iStack_ac = 0;
        _strncpy(&pppppppuStack_78,pppppppuVar2,uVar6);
        *(undefined1 *)((long)&pppppppuStack_78 + uVar6) = 0;
        iVar5 = 0x1e;
        func_0x0001004ded14(0x1e,&pppppppuStack_78,param_3 + 1);
        if (iVar5 != 0) {
          lVar9 = (long)pppppppuVar7 + 1;
          uVar1 = uStack_88;
          if (-1 < (long)uStack_80) {
            uVar1 = uStack_80 >> 0x38;
          }
          lVar8 = lVar9;
          FUN_104a6f15c(lVar9,uVar1 + ~uVar6,&iStack_ac);
          if ((int)lVar8 == 0) {
            FUN_104abde24();
            iStack_ac = (int)lVar9;
            if (iStack_ac == 0) {
              pcVar10 = "Invalid interface name: \'%s\'. Non-numeric and failed if_nametoindex.";
              uVar11 = 0xf8;
              goto LAB_104aa94a8;
            }
          }
          *(int *)(param_3 + 3) = iStack_ac;
          goto LAB_104aa93dc;
        }
        if ((param_4 & 1) != 0) {
          pcVar10 = "invalid ipv6 address: \'%s\'";
          uVar11 = 0xf0;
LAB_104aa94a8:
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                              ,uVar11,2,pcVar10);
        }
      }
      else {
        iStack_ac = 0;
        if (param_4 != 0) {
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                              ,0xe4,2,
                              "invalid ipv6 address length %zu. Length cannot be greater than GRPC_INET6_ADDRSTRLEN i.e %d)"
                             );
        }
      }
LAB_104aa94bc:
      uVar11 = 0;
    }
    if (uStack_98 < 0) {
      __ZdlPv(pppppppuStack_a8);
    }
    if ((long)uStack_80 < 0) {
      __ZdlPv(pppppppuStack_90);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return uVar11;
    }
    ___stack_chk_fail();
  }
  func_0x000104a6fa5c(&pppppppuStack_78);
LAB_104aa9550:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104aa9554);
  (*pcVar3)();
}



/* Entry: 104aa95a4; end: 104aa9677;  */

undefined8 FUN_104aa95a4(int *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 *****pppppuVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined8 *****pppppuVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 uVar13;
  int iStack_b0;
  int iStack_ac;
  undefined8 ****ppppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 ****ppppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_48;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    if ((*(long *)(param_1 + 2) != 4) || (**(int **)param_1 != 0x36767069)) goto LAB_104aa95fc;
  }
  else if (*(char *)((long)param_1 + 0x17) != '\x04' || *param_1 != 0x36767069) {
LAB_104aa95fc:
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,0x11d,2,"Expected \'ipv6\' scheme, got \'%s\'");
    return 0;
  }
  uVar11 = *(ulong *)(param_1 + 0xe);
  piVar9 = *(int **)(param_1 + 0xc);
  if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
    uVar11 = (ulong)*(byte *)((long)param_1 + 0x47);
    piVar9 = param_1 + 0xc;
  }
  if (uVar11 == 0) {
    uVar11 = 0;
  }
  else if ((char)*piVar9 == '/') {
    piVar9 = (int *)((long)piVar9 + 1);
    uVar11 = uVar11 - 1;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_90 = (undefined8 *****)0x0;
  uStack_88 = 0;
  uStack_80 = 0;
  ppppuStack_a8 = (undefined8 *****)0x0;
  lStack_a0 = 0;
  uStack_98 = 0;
  piVar5 = piVar9;
  func_0x0001004c2450(piVar9,uVar11,&ppppuStack_90,&ppppuStack_a8);
  if (((ulong)piVar5 & 1) == 0) {
    if (uVar11 < 0x7ffffffffffffff8) {
      if (uVar11 < 0x17) {
        uStack_68 = CONCAT17((char)uVar11,(undefined7)uStack_68);
        pppppuVar6 = &ppppuStack_78;
        if (uVar11 != 0) goto LAB_104aa92dc;
      }
      else {
        uVar1 = (uVar11 & 0xfffffffffffffff8) + 8;
        if ((uVar11 | 7) != 0x17) {
          uVar1 = uVar11 | 7;
        }
        pppppuVar6 = (undefined8 *****)(uVar1 + 1);
        __Znwm();
        uStack_68 = uVar1 + 1 | 0x8000000000000000;
        ppppuStack_78 = pppppuVar6;
        uStack_70 = uVar11;
LAB_104aa92dc:
        _memmove(pppppuVar6,piVar9,uVar11);
      }
      *(undefined1 *)((long)pppppuVar6 + uVar11) = 0;
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                          ,0xce,2,"Failed gpr_split_host_port(%s, ...)");
      if ((long)uStack_68 < 0) {
        __ZdlPv(ppppuStack_78);
      }
      goto LAB_104aa94bc;
    }
  }
  else {
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[0xf] = 0;
    param_2[0xe] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 0x10) = 0x1c;
    *(undefined1 *)((long)param_2 + 1) = 0x1e;
    uVar11 = uStack_88;
    pppppuVar6 = (undefined8 *****)ppppuStack_90;
    if (-1 < (long)uStack_80) {
      uVar11 = uStack_80 >> 0x38;
      pppppuVar6 = &ppppuStack_90;
    }
    FUN_104a6f3e8(pppppuVar6,0x25,uVar11);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pppppuVar6 = (undefined8 *****)ppppuStack_90;
      if (-1 < (long)uStack_80) {
        pppppuVar6 = &ppppuStack_90;
      }
      iVar4 = 0x1e;
      func_0x0001004ded14(0x1e,pppppuVar6,param_2 + 1);
      if (iVar4 == 0) {
        pcVar12 = "invalid ipv6 address: \'%s\'";
        uVar13 = 0x104;
LAB_104aa9484:
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                            ,uVar13,2,pcVar12);
        goto LAB_104aa94bc;
      }
LAB_104aa93dc:
      if (uStack_98 < 0) {
        pppppuVar6 = (undefined8 *****)ppppuStack_a8;
        if (lStack_a0 == 0) goto code_r0x000104aa9440;
      }
      else {
        if (uStack_98._7_1_ == '\0') {
code_r0x000104aa9440:
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                              ,0x10b,2,"no port given for ipv6 scheme");
          goto LAB_104aa94bc;
        }
        pppppuVar6 = &ppppuStack_a8;
      }
      _sscanf(pppppuVar6,"%d");
      if ((((int)pppppuVar6 != 1) || (iStack_b0 < 0)) || (0xffff < iStack_b0)) {
        pcVar12 = "invalid ipv6 port: \'%s\'";
        uVar13 = 0x111;
        goto LAB_104aa9484;
      }
      uVar3 = (undefined2)iStack_b0;
      func_0x0001004ded18();
      *(undefined2 *)((long)param_2 + 2) = uVar3;
      uVar13 = 1;
    }
    else {
      if ((long)uStack_80 < 0) {
        uVar11 = (long)pppppuVar6 - (long)ppppuStack_90;
        if (pppppuVar6 < ppppuStack_90) goto LAB_104aa9514;
        pppppuVar10 = (undefined8 *****)ppppuStack_90;
        if (0x2e < uVar11) goto LAB_104aa9210;
LAB_104aa9350:
        iStack_ac = 0;
        _strncpy(&ppppuStack_78,pppppuVar10,uVar11);
        *(undefined1 *)((long)&ppppuStack_78 + uVar11) = 0;
        iVar4 = 0x1e;
        func_0x0001004ded14(0x1e,&ppppuStack_78,param_2 + 1);
        if (iVar4 != 0) {
          lVar8 = (long)pppppuVar6 + 1;
          uVar1 = uStack_88;
          if (-1 < (long)uStack_80) {
            uVar1 = uStack_80 >> 0x38;
          }
          lVar7 = lVar8;
          FUN_104a6f15c(lVar8,uVar1 + ~uVar11,&iStack_ac);
          if ((int)lVar7 == 0) {
            FUN_104abde24();
            iStack_ac = (int)lVar8;
            if (iStack_ac == 0) {
              pcVar12 = "Invalid interface name: \'%s\'. Non-numeric and failed if_nametoindex.";
              uVar13 = 0xf8;
              goto LAB_104aa94a8;
            }
          }
          *(int *)(param_2 + 3) = iStack_ac;
          goto LAB_104aa93dc;
        }
        pcVar12 = "invalid ipv6 address: \'%s\'";
        uVar13 = 0xf0;
LAB_104aa94a8:
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                            ,uVar13,2,pcVar12);
      }
      else {
        uVar11 = (long)pppppuVar6 - (long)&ppppuStack_90;
        if (pppppuVar6 < &ppppuStack_90) {
LAB_104aa9514:
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                              ,0xdc,2,"assertion failed: %s");
          _abort();
          goto LAB_104aa9550;
        }
        pppppuVar10 = &ppppuStack_90;
        if (uVar11 < 0x2f) goto LAB_104aa9350;
LAB_104aa9210:
        iStack_ac = 0;
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                            ,0xe4,2,
                            "invalid ipv6 address length %zu. Length cannot be greater than GRPC_INET6_ADDRSTRLEN i.e %d)"
                           );
      }
LAB_104aa94bc:
      uVar13 = 0;
    }
    if (uStack_98 < 0) {
      __ZdlPv(ppppuStack_a8);
    }
    if ((long)uStack_80 < 0) {
      __ZdlPv(ppppuStack_90);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return uVar13;
    }
    ___stack_chk_fail();
  }
  func_0x000104a6fa5c(&ppppuStack_78);
LAB_104aa9550:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104aa9554);
  (*pcVar2)();
}



/* Entry: 104aa9678; end: 104aa981b;  */

/* WARNING: Possible PIC construction at 0x000104aa971c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104aa9720) */

ulong *******
FUN_104aa9678(ulong *******param_1,ulong *******param_2,ulong *******param_3,ulong *param_4)

{
  ushort *puVar1;
  byte bVar2;
  char cVar3;
  ulong *******pppppppuVar4;
  bool bVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  ulong *******pppppppuVar12;
  ulong *puVar13;
  undefined4 uVar14;
  long lVar15;
  ulong *extraout_x8;
  ulong ******ppppppuVar16;
  int *piVar17;
  undefined1 ***pppuVar18;
  undefined8 uVar19;
  ulong ******ppppppuStack_1e0;
  ulong ******ppppppuStack_1d8;
  undefined1 **ppuStack_1d0;
  undefined8 uStack_1c8;
  ulong *****pppppuStack_1bc;
  ulong *****apppppuStack_1b4 [15];
  long lStack_138;
  ulong ******ppppppuStack_130;
  ulong *puStack_128;
  ulong *****pppppuStack_120;
  ulong ******ppppppuStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  undefined1 auStack_f0 [8];
  ulong ****ppppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_c9;
  ulong ******ppppppuStack_c8;
  ulong *puStack_c0;
  byte bStack_b1;
  ulong *****pppppuStack_b0;
  ulong ******ppppppuStack_a8;
  ulong ******ppppppuStack_a0;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  pppppppuVar4 = (ulong *******)auStack_f0;
  pppuVar18 = (undefined1 ***)&stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  param_2[0xd] = (ulong ******)0x0;
  param_2[0xc] = (ulong ******)0x0;
  param_2[0xf] = (ulong ******)0x0;
  param_2[0xe] = (ulong ******)0x0;
  param_2[9] = (ulong ******)0x0;
  param_2[8] = (ulong ******)0x0;
  param_2[0xb] = (ulong ******)0x0;
  param_2[10] = (ulong ******)0x0;
  param_2[5] = (ulong ******)0x0;
  param_2[4] = (ulong ******)0x0;
  param_2[7] = (ulong ******)0x0;
  param_2[6] = (ulong ******)0x0;
  param_2[1] = (ulong ******)0x0;
  *param_2 = (ulong ******)0x0;
  param_2[3] = (ulong ******)0x0;
  param_2[2] = (ulong ******)0x0;
  iVar7 = 0x1e;
  func_0x0001004ded14(0x1e,param_3,param_2 + 1);
  if (iVar7 == 1) {
    *(undefined1 *)((long)param_2 + 1) = 0x1e;
    uVar14 = 0x1c;
LAB_104aa9710:
    *(undefined4 *)(param_2 + 0x10) = uVar14;
    uVar19 = 0x104aa9720;
  }
  else {
    iVar7 = 2;
    func_0x0001004ded14(2,param_3,(long)param_2 + 4);
    if (iVar7 == 1) {
      *(undefined1 *)((long)param_2 + 1) = 2;
      uVar14 = 0x10;
      goto LAB_104aa9710;
    }
    pcStack_78 = "Failed to parse address:";
    uStack_70 = 0x18;
    if (param_3 == (ulong *******)0x0) {
      pppppppuVar12 = (ulong *******)0x0;
    }
    else {
      pppppppuVar12 = param_3;
      _strlen();
    }
    ppppppuStack_a8 = (ulong ******)param_3;
    ppppppuStack_a0 = (ulong ******)pppppppuVar12;
    func_0x00010047c83c(&ppppppuStack_c8,&pcStack_78,&ppppppuStack_a8);
    puVar13 = puStack_c0;
    pppppppuVar12 = (ulong *******)ppppppuStack_c8;
    if (-1 < (char)bStack_b1) {
      puVar13 = (ulong *)(ulong)bStack_b1;
      pppppppuVar12 = &ppppppuStack_c8;
    }
    uStack_e0 = 0;
    uStack_d8 = 0;
    ppppuStack_e8 = (ulong ****)0x0;
    FUN_104ab5920(param_1,2,pppppppuVar12,puVar13,&uStack_c9,&ppppuStack_e8);
    pppppppuVar9 = (ulong *******)&pppppuStack_b0;
    pppppuStack_b0 = &ppppuStack_e8;
    func_0x000100482b64();
    if ((char)bStack_b1 < '\0') {
      pppppppuVar9 = (ulong *******)ppppppuStack_c8;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return pppppppuVar9;
    }
    ___stack_chk_fail();
    pppppuStack_b0 = &ppppuStack_e8;
    func_0x000100482b64(&pppppuStack_b0);
    if ((char)bStack_b1 < '\0') {
      __ZdlPv(ppppppuStack_c8);
    }
    pppppppuVar10 = pppppppuVar9;
    __Unwind_Resume();
    pcStack_f8 = FUN_104aa981c;
    if (pppppppuVar10 != pppppppuVar12) {
      bVar5 = *(char *)((long)pppppppuVar10 + 1) == '\x02';
      if (bVar5) {
        pppppppuVar12[1] = (ulong ******)0x0;
        *pppppppuVar12 = (ulong ******)0x0;
        pppppppuVar12[3] = (ulong ******)0x0;
        pppppppuVar12[2] = (ulong ******)0x0;
        *(undefined4 *)(pppppppuVar12 + 0x10) = 0;
        pppppppuVar12[0xd] = (ulong ******)0x0;
        pppppppuVar12[0xc] = (ulong ******)0x0;
        pppppppuVar12[0xf] = (ulong ******)0x0;
        pppppppuVar12[0xe] = (ulong ******)0x0;
        pppppppuVar12[9] = (ulong ******)0x0;
        pppppppuVar12[8] = (ulong ******)0x0;
        pppppppuVar12[0xb] = (ulong ******)0x0;
        pppppppuVar12[10] = (ulong ******)0x0;
        pppppppuVar12[5] = (ulong ******)0x0;
        pppppppuVar12[4] = (ulong ******)0x0;
        pppppppuVar12[7] = (ulong ******)0x0;
        pppppppuVar12[6] = (ulong ******)0x0;
        *(undefined1 *)((long)pppppppuVar12 + 1) = 0x1e;
        pppppppuVar12[1] = (ulong ******)0x0;
        *(undefined4 *)(pppppppuVar12 + 2) = 0xffff0000;
        *(undefined4 *)((long)pppppppuVar12 + 0x14) = *(undefined4 *)((long)pppppppuVar10 + 4);
        *(undefined2 *)((long)pppppppuVar12 + 2) = *(undefined2 *)((long)pppppppuVar10 + 2);
        *(undefined4 *)(pppppppuVar12 + 0x10) = 0x1c;
      }
      return (ulong *******)(ulong)bVar5;
    }
    pppuStack_100 = pppuVar18;
    func_0x00010bdab590();
    pcStack_108 = FUN_104aa9894;
    lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppppppuVar11 = pppppppuVar10;
    ppppppuStack_130 = (ulong ******)param_2;
    puStack_128 = param_4;
    pppppuStack_120 = &ppppuStack_e8;
    ppppppuStack_118 = (ulong ******)pppppppuVar9;
    puStack_110 = (undefined1 *)&pppuStack_100;
    func_0x0001004d3fb0();
    iVar7 = (int)pppppppuVar11;
    pppppppuVar9 = pppppppuVar10;
    if (iVar7 != 0) {
      pppppppuVar9 = (ulong *******)&pppppuStack_1bc;
    }
    if (*(char *)((long)pppppppuVar9 + 1) == '\x02') {
      pppppppuVar9 = pppppppuVar10;
      if (iVar7 != 0) {
        pppppppuVar9 = (ulong *******)&pppppuStack_1bc;
      }
      if (*(int *)((long)pppppppuVar9 + 4) == 0) goto LAB_104aa9930;
LAB_104aa9928:
      param_2 = (ulong *******)0x0;
      param_4 = puVar13;
    }
    else {
      if (*(char *)((long)pppppppuVar9 + 1) != '\x1e') goto LAB_104aa9928;
      lVar15 = 0;
      pppppppuVar9 = pppppppuVar10 + 1;
      if (iVar7 != 0) {
        pppppppuVar9 = (ulong *******)apppppuStack_1b4;
      }
      do {
        if (*(char *)((long)pppppppuVar9 + lVar15) != '\0') goto LAB_104aa9928;
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0x10);
LAB_104aa9930:
      puVar1 = (ushort *)((long)pppppppuVar10 + 2);
      if (iVar7 != 0) {
        puVar1 = (ushort *)((ulong)&pppppuStack_1bc | 2);
      }
      uVar8 = (uint)*puVar1;
      func_0x0001004d4a44();
      *(uint *)pppppppuVar12 = uVar8;
      param_2 = (ulong *******)0x1;
      param_4 = puVar13;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
      return param_2;
    }
    ___stack_chk_fail();
    uStack_1c8 = 0x104aa9984;
    ppppppuStack_1e0 = (ulong ******)pppppppuVar10;
    ppppppuStack_1d8 = (ulong ******)pppppppuVar12;
    ppuStack_1d0 = &puStack_110;
    func_0x000104aa99b0();
    param_1 = (ulong *******)ppppppuStack_1d8;
    param_3 = (ulong *******)ppppppuStack_1e0;
    pppppppuVar4 = &ppppppuStack_1e0;
    pppuVar18 = &ppuStack_1d0;
    if ((uint)param_2 < 0x10000) {
      *(undefined4 *)(param_4 + 0x10) = 0;
      param_4[0xd] = 0;
      param_4[0xc] = 0;
      param_4[0xf] = 0;
      param_4[0xe] = 0;
      param_4[9] = 0;
      param_4[8] = 0;
      param_4[0xb] = 0;
      param_4[10] = 0;
      param_4[5] = 0;
      param_4[4] = 0;
      param_4[7] = 0;
      param_4[6] = 0;
      param_4[1] = 0;
      *param_4 = 0;
      param_4[3] = 0;
      param_4[2] = 0;
      *(undefined1 *)((long)param_4 + 1) = 0x1e;
      pppppppuVar12 = (ulong *******)(ulong)((uint)param_2 & 0xffff);
      func_0x0001004ded18();
      *(short *)((long)param_4 + 2) = (short)pppppppuVar12;
      *(undefined4 *)(param_4 + 0x10) = 0x1c;
      return pppppppuVar12;
    }
    uVar19 = 0x104aa9a68;
    func_0x00010bdab5f8();
  }
  *(ulong ********)((long)pppppppuVar4 + -0x20) = param_3;
  *(ulong ********)((long)pppppppuVar4 + -0x18) = param_1;
  *(undefined1 ****)((long)pppppppuVar4 + -0x10) = pppuVar18;
  *(undefined8 *)((long)pppppppuVar4 + -8) = uVar19;
  bVar2 = *(byte *)((long)param_2 + 1);
  pppppppuVar12 = param_2;
  if (bVar2 != 0x1e) {
    if (bVar2 != 2) {
      *(ulong *)((long)pppppppuVar4 + -0x30) = (ulong)bVar2;
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/sockaddr_utils.cc"
                          ,0x152,2,"Unknown socket family %d in grpc_sockaddr_set_port");
      return (ulong *******)0x0;
    }
    if ((uint)param_4 < 0x10000) goto LAB_104aa9aa4;
    func_0x00010bdab62c();
  }
  if (0xffff < (uint)param_4) {
    func_0x00010bdab660();
    *(undefined1 **)((long)pppppppuVar4 + -0x40) = (undefined1 *)((long)pppppppuVar4 + -0x10);
    *(code **)((long)pppppppuVar4 + -0x38) = FUN_104aa9af0;
    if (*(char *)((long)pppppppuVar12 + 1) == '\x1e') {
      *(undefined1 *)((long)extraout_x8 + 0x17) = 0x10;
      ppppppuVar16 = pppppppuVar12[1];
      extraout_x8[1] = (ulong)pppppppuVar12[2];
      *extraout_x8 = (ulong)ppppppuVar16;
      *(undefined1 *)(extraout_x8 + 2) = 0;
    }
    else {
      if (*(char *)((long)pppppppuVar12 + 1) != '\x02') {
        func_0x00010bdab694();
        *(ulong ********)((long)pppppppuVar4 + -0x60) = param_3;
        *(ulong ********)((long)pppppppuVar4 + -0x58) = param_2;
        *(undefined1 **)((long)pppppppuVar4 + -0x50) = (undefined1 *)((long)pppppppuVar4 + -0x40);
        *(code **)((long)pppppppuVar4 + -0x48) = FUN_104aa9b44;
        ppppppuVar16 = (ulong ******)*param_4;
        *pppppppuVar12 = ppppppuVar16;
        if (((ulong)ppppppuVar16 & 1) != 0) {
          piVar17 = (int *)((long)ppppppuVar16 - 1);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar5) {
              *piVar17 = *piVar17 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          ppppppuVar16 = *pppppppuVar12;
        }
        if (ppppppuVar16 == (ulong ******)0x0) {
          func_0x00010ae77b40(pppppppuVar12);
        }
        return pppppppuVar12;
      }
      *(undefined1 *)((long)extraout_x8 + 0x17) = 4;
      *(undefined4 *)extraout_x8 = *(undefined4 *)((long)pppppppuVar12 + 4);
      *(undefined1 *)((long)extraout_x8 + 4) = 0;
    }
    return pppppppuVar12;
  }
LAB_104aa9aa4:
  uVar6 = SUB82(param_4,0);
  func_0x0001004ded18();
  *(undefined2 *)((long)param_2 + 2) = uVar6;
  return (ulong *******)0x1;
}



/* Entry: 104aa981c; end: 104aa9893;  */

ulong * FUN_104aa981c(uint *param_1,uint *param_2,ulong *param_3)

{
  ushort *puVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong *extraout_x8;
  ulong uVar11;
  int *piVar12;
  uint auStack_cc [2];
  uint auStack_c4 [31];
  long lStack_48;
  
  if (param_1 != param_2) {
    bVar3 = *(char *)((long)param_1 + 1) == '\x02';
    if (bVar3) {
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[0x20] = 0;
      param_2[0x1a] = 0;
      param_2[0x1b] = 0;
      param_2[0x18] = 0;
      param_2[0x19] = 0;
      param_2[0x1e] = 0;
      param_2[0x1f] = 0;
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      *(undefined1 *)((long)param_2 + 1) = 0x1e;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0xffff0000;
      param_2[5] = param_1[1];
      *(undefined2 *)((long)param_2 + 2) = *(undefined2 *)((long)param_1 + 2);
      param_2[0x20] = 0x1c;
    }
    return (ulong *)(ulong)bVar3;
  }
  func_0x00010bdab590();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_1;
  func_0x0001004d3fb0();
  iVar5 = (int)puVar7;
  puVar7 = param_1;
  if (iVar5 != 0) {
    puVar7 = auStack_cc;
  }
  if (*(char *)((long)puVar7 + 1) == '\x02') {
    puVar7 = param_1;
    if (iVar5 != 0) {
      puVar7 = auStack_cc;
    }
    if (puVar7[1] != 0) goto LAB_104aa9928;
LAB_104aa9930:
    puVar1 = (ushort *)((long)param_1 + 2);
    if (iVar5 != 0) {
      puVar1 = (ushort *)((ulong)auStack_cc | 2);
    }
    uVar6 = (uint)*puVar1;
    func_0x0001004d4a44();
    *param_2 = uVar6;
    puVar8 = (ulong *)0x1;
  }
  else {
    if (*(char *)((long)puVar7 + 1) == '\x1e') {
      lVar10 = 0;
      puVar7 = param_1 + 2;
      if (iVar5 != 0) {
        puVar7 = auStack_c4;
      }
      do {
        if (*(char *)((long)puVar7 + lVar10) != '\0') goto LAB_104aa9928;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x10);
      goto LAB_104aa9930;
    }
LAB_104aa9928:
    puVar8 = (ulong *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  func_0x000104aa99b0();
  if ((uint)puVar8 < 0x10000) {
    *(undefined4 *)(param_3 + 0x10) = 0;
    param_3[0xd] = 0;
    param_3[0xc] = 0;
    param_3[0xf] = 0;
    param_3[0xe] = 0;
    param_3[9] = 0;
    param_3[8] = 0;
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    *(undefined1 *)((long)param_3 + 1) = 0x1e;
    puVar8 = (ulong *)(ulong)((uint)puVar8 & 0xffff);
    func_0x0001004ded18();
    *(short *)((long)param_3 + 2) = (short)puVar8;
    *(undefined4 *)(param_3 + 0x10) = 0x1c;
    return puVar8;
  }
  func_0x00010bdab5f8();
  puVar9 = puVar8;
  if (*(char *)((long)puVar8 + 1) != '\x1e') {
    if (*(char *)((long)puVar8 + 1) != '\x02') {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/sockaddr_utils.cc"
                          ,0x152,2,"Unknown socket family %d in grpc_sockaddr_set_port");
      return (ulong *)0x0;
    }
    if ((uint)param_3 < 0x10000) goto LAB_104aa9aa4;
    func_0x00010bdab62c();
  }
  if (0xffff < (uint)param_3) {
    func_0x00010bdab660();
    if (*(char *)((long)puVar9 + 1) == '\x1e') {
      *(undefined1 *)((long)extraout_x8 + 0x17) = 0x10;
      uVar11 = puVar9[1];
      extraout_x8[1] = puVar9[2];
      *extraout_x8 = uVar11;
      *(undefined1 *)(extraout_x8 + 2) = 0;
    }
    else {
      if (*(char *)((long)puVar9 + 1) != '\x02') {
        func_0x00010bdab694();
        uVar11 = *param_3;
        *puVar9 = uVar11;
        if ((uVar11 & 1) != 0) {
          piVar12 = (int *)(uVar11 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = *piVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uVar11 = *puVar9;
        }
        if (uVar11 == 0) {
          func_0x00010ae77b40(puVar9);
        }
        return puVar9;
      }
      *(undefined1 *)((long)extraout_x8 + 0x17) = 4;
      *(undefined4 *)extraout_x8 = *(undefined4 *)((long)puVar9 + 4);
      *(undefined1 *)((long)extraout_x8 + 4) = 0;
    }
    return puVar9;
  }
LAB_104aa9aa4:
  uVar4 = SUB82(param_3,0);
  func_0x0001004ded18();
  *(undefined2 *)((long)puVar8 + 2) = uVar4;
  return (ulong *)0x1;
}



/* Entry: 104aa9894; end: 104aa9983;  */

ulong * FUN_104aa9894(undefined1 *param_1,uint *param_2,ulong *param_3)

{
  ushort *puVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong *extraout_x8;
  ulong uVar11;
  int *piVar12;
  undefined1 auStack_bc [8];
  undefined1 auStack_b4 [124];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_1;
  func_0x0001004d3fb0(param_1,auStack_bc);
  iVar5 = (int)puVar7;
  puVar7 = param_1;
  if (iVar5 != 0) {
    puVar7 = auStack_bc;
  }
  if (puVar7[1] == '\x02') {
    puVar7 = param_1;
    if (iVar5 != 0) {
      puVar7 = auStack_bc;
    }
    if (*(int *)(puVar7 + 4) != 0) goto LAB_104aa9928;
LAB_104aa9930:
    puVar1 = (ushort *)(param_1 + 2);
    if (iVar5 != 0) {
      puVar1 = (ushort *)((ulong)auStack_bc | 2);
    }
    uVar6 = (uint)*puVar1;
    func_0x0001004d4a44();
    *param_2 = uVar6;
    puVar8 = (ulong *)0x1;
  }
  else {
    if (puVar7[1] == '\x1e') {
      lVar10 = 0;
      puVar7 = param_1 + 8;
      if (iVar5 != 0) {
        puVar7 = auStack_b4;
      }
      do {
        if (puVar7[lVar10] != '\0') goto LAB_104aa9928;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x10);
      goto LAB_104aa9930;
    }
LAB_104aa9928:
    puVar8 = (ulong *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar8;
  }
  ___stack_chk_fail();
  func_0x000104aa99b0();
  if ((uint)puVar8 < 0x10000) {
    *(undefined4 *)(param_3 + 0x10) = 0;
    param_3[0xd] = 0;
    param_3[0xc] = 0;
    param_3[0xf] = 0;
    param_3[0xe] = 0;
    param_3[9] = 0;
    param_3[8] = 0;
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    *(undefined1 *)((long)param_3 + 1) = 0x1e;
    puVar8 = (ulong *)(ulong)((uint)puVar8 & 0xffff);
    func_0x0001004ded18();
    *(short *)((long)param_3 + 2) = (short)puVar8;
    *(undefined4 *)(param_3 + 0x10) = 0x1c;
    return puVar8;
  }
  func_0x00010bdab5f8();
  puVar9 = puVar8;
  if (*(char *)((long)puVar8 + 1) != '\x1e') {
    if (*(char *)((long)puVar8 + 1) != '\x02') {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/sockaddr_utils.cc"
                          ,0x152,2,"Unknown socket family %d in grpc_sockaddr_set_port");
      return (ulong *)0x0;
    }
    if ((uint)param_3 < 0x10000) goto LAB_104aa9aa4;
    func_0x00010bdab62c();
  }
  if (0xffff < (uint)param_3) {
    func_0x00010bdab660();
    if (*(char *)((long)puVar9 + 1) == '\x1e') {
      *(undefined1 *)((long)extraout_x8 + 0x17) = 0x10;
      uVar11 = puVar9[1];
      extraout_x8[1] = puVar9[2];
      *extraout_x8 = uVar11;
      *(undefined1 *)(extraout_x8 + 2) = 0;
    }
    else {
      if (*(char *)((long)puVar9 + 1) != '\x02') {
        func_0x00010bdab694();
        uVar11 = *param_3;
        *puVar9 = uVar11;
        if ((uVar11 & 1) != 0) {
          piVar12 = (int *)(uVar11 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = *piVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uVar11 = *puVar9;
        }
        if (uVar11 == 0) {
          func_0x00010ae77b40(puVar9);
        }
        return puVar9;
      }
      *(undefined1 *)((long)extraout_x8 + 0x17) = 4;
      *(undefined4 *)extraout_x8 = *(undefined4 *)((long)puVar9 + 4);
      *(undefined1 *)((long)extraout_x8 + 4) = 0;
    }
    return puVar9;
  }
LAB_104aa9aa4:
  uVar4 = SUB82(param_3,0);
  func_0x0001004ded18();
  *(undefined2 *)((long)puVar8 + 2) = uVar4;
  return (ulong *)0x1;
}



/* Entry: 104aa9984; end: 104aa9aef;  */

ulong * FUN_104aa9984(ulong *param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  ulong *puVar4;
  ulong *extraout_x8;
  ulong uVar5;
  int *piVar6;
  
  func_0x000104aa99b0();
  if ((uint)param_1 < 0x10000) {
    *(undefined4 *)(param_3 + 0x10) = 0;
    param_3[0xd] = 0;
    param_3[0xc] = 0;
    param_3[0xf] = 0;
    param_3[0xe] = 0;
    param_3[9] = 0;
    param_3[8] = 0;
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    *(undefined1 *)((long)param_3 + 1) = 0x1e;
    puVar4 = (ulong *)(ulong)((uint)param_1 & 0xffff);
    func_0x0001004ded18();
    *(short *)((long)param_3 + 2) = (short)puVar4;
    *(undefined4 *)(param_3 + 0x10) = 0x1c;
    return puVar4;
  }
  func_0x00010bdab5f8();
  puVar4 = param_1;
  if (*(char *)((long)param_1 + 1) != '\x1e') {
    if (*(char *)((long)param_1 + 1) != '\x02') {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/sockaddr_utils.cc"
                          ,0x152,2,"Unknown socket family %d in grpc_sockaddr_set_port");
      return (ulong *)0x0;
    }
    if ((uint)param_3 < 0x10000) goto LAB_104aa9aa4;
    func_0x00010bdab62c();
  }
  if (0xffff < (uint)param_3) {
    func_0x00010bdab660();
    if (*(char *)((long)puVar4 + 1) == '\x1e') {
      *(undefined1 *)((long)extraout_x8 + 0x17) = 0x10;
      uVar5 = puVar4[1];
      extraout_x8[1] = puVar4[2];
      *extraout_x8 = uVar5;
      *(undefined1 *)(extraout_x8 + 2) = 0;
    }
    else {
      if (*(char *)((long)puVar4 + 1) != '\x02') {
        func_0x00010bdab694();
        uVar5 = *param_3;
        *puVar4 = uVar5;
        if ((uVar5 & 1) != 0) {
          piVar6 = (int *)(uVar5 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar2) {
              *piVar6 = *piVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          uVar5 = *puVar4;
        }
        if (uVar5 == 0) {
          func_0x00010ae77b40(puVar4);
        }
        return puVar4;
      }
      *(undefined1 *)((long)extraout_x8 + 0x17) = 4;
      *(undefined4 *)extraout_x8 = *(undefined4 *)((long)puVar4 + 4);
      *(undefined1 *)((long)extraout_x8 + 4) = 0;
    }
    return puVar4;
  }
LAB_104aa9aa4:
  uVar3 = SUB82(param_3,0);
  func_0x0001004ded18();
  *(undefined2 *)((long)param_1 + 2) = uVar3;
  return (ulong *)0x1;
}



/* Entry: 104aa9af0; end: 104aa9b43;  */

ulong * FUN_104aa9af0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  if (*(char *)((long)param_2 + 1) == '\x1e') {
    *(undefined1 *)((long)param_1 + 0x17) = 0x10;
    uVar3 = param_2[1];
    param_1[1] = param_2[2];
    *param_1 = uVar3;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    if (*(char *)((long)param_2 + 1) != '\x02') {
      func_0x00010bdab694();
      uVar3 = *param_3;
      *param_2 = uVar3;
      if ((uVar3 & 1) != 0) {
        piVar4 = (int *)(uVar3 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar3 = *param_2;
      }
      if (uVar3 == 0) {
        func_0x00010ae77b40(param_2);
      }
      return param_2;
    }
    *(undefined1 *)((long)param_1 + 0x17) = 4;
    *(undefined4 *)param_1 = *(undefined4 *)((long)param_2 + 4);
    *(undefined1 *)((long)param_1 + 4) = 0;
  }
  return param_2;
}



/* Entry: 104aa9b44; end: 104aa9bab;  */

ulong * FUN_104aa9b44(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  if ((uVar3 & 1) != 0) {
    piVar4 = (int *)(uVar3 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar3 = *param_1;
  }
  if (uVar3 == 0) {
    func_0x00010ae77b40(param_1);
  }
  return param_1;
}



/* Entry: 104aa9bac; end: 104aa9bb3;  */

undefined1  [16]
FUN_104aa9bac(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104aa9bb4; end: 104aa9c3f;  */

void FUN_104aa9bb4(undefined8 param_1,long param_2,double *param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  do {
    lVar1 = param_2;
    FUN_104aa9c40();
    dVar2 = 0.0;
    if (lVar1 != 0) {
      dVar2 = (double)((((ulong)(lVar1 << (LZCOUNT(lVar1) & 0x3fU)) >> 0xb & 0xfffffffffffff) -
                       (LZCOUNT(lVar1) << 0x34)) + 0x3fe0000000000000);
    }
    dVar3 = param_3[2];
  } while ((param_3[1] <= *param_3 + dVar3 * dVar2) &&
          (0.0 < dVar3 && (ulong)ABS(dVar3) < 0x7ff0000000000000));
  return;
}



/* Entry: 104aa9c40; end: 104aa9c97;  */

undefined8 FUN_104aa9c40(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + (ulong)((param_1 & 0xf) != 0) * 8;
  uVar2 = *(ulong *)(param_1 + 0x108);
  if (0x1f < uVar2) {
    *(undefined8 *)(param_1 + 0x108) = 2;
    func_0x0001004c020c(*(undefined8 *)(param_1 + 0x110),lVar1);
    uVar2 = *(ulong *)(param_1 + 0x108);
  }
  *(ulong *)(param_1 + 0x108) = uVar2 + 1;
  return *(undefined8 *)(lVar1 + uVar2 * 8);
}



/* Entry: 104aa9c98; end: 104aa9dc7;  */

/* WARNING: Possible PIC construction at 0x000104aa9edc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104aa9ee0) */
/* WARNING: Removing unreachable block (ram,0x00010047f974) */
/* WARNING: Removing unreachable block (ram,0x00010047f9cc) */
/* WARNING: Removing unreachable block (ram,0x00010047f990) */
/* WARNING: Removing unreachable block (ram,0x00010047f994) */
/* WARNING: Removing unreachable block (ram,0x00010047f9a0) */
/* WARNING: Removing unreachable block (ram,0x00010047f9b4) */
/* WARNING: Removing unreachable block (ram,0x00010047f9d0) */
/* WARNING: Removing unreachable block (ram,0x00010047fa30) */
/* WARNING: Removing unreachable block (ram,0x00010047faa8) */
/* WARNING: Removing unreachable block (ram,0x00010047fa4c) */
/* WARNING: Removing unreachable block (ram,0x00010047fa50) */
/* WARNING: Removing unreachable block (ram,0x00010047fa5c) */
/* WARNING: Removing unreachable block (ram,0x00010047fa70) */
/* WARNING: Type propagation algorithm not settling */

ulong ******* FUN_104aa9c98(undefined8 param_1,undefined8 *param_2)

{
  ulong ******ppppppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong *******pppppppuVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar7;
  long lVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  long lVar11;
  ulong ******ppppppuVar12;
  long unaff_x21;
  ulong ******unaff_x22;
  ulong ******ppppppuVar13;
  long unaff_x23;
  ulong ******unaff_x24;
  ulong ******unaff_x25;
  undefined8 *unaff_x26;
  undefined8 unaff_x27;
  ulong ******ppppppuVar14;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar15;
  code *pcVar16;
  ulong *****pppppuVar17;
  undefined8 uVar18;
  ulong *****pppppuVar19;
  undefined8 uVar20;
  ulong *****pppppuVar21;
  undefined8 uVar22;
  undefined8 *******pppppppuStack_100;
  code *pcStack_f8;
  undefined1 auStack_f0 [8];
  ulong *******pppppppuStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  ulong *****pppppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  ulong *******pppppppuStack_88;
  ulong uStack_80;
  ulong ******ppppppuStack_58;
  undefined8 uStack_50;
  long lStack_28;
  
  puVar4 = auStack_f0;
  pppppppuVar15 = (undefined8 *******)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuStack_d0 = (ulong *****)0x0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  ppppppuStack_58 = &pppppuStack_d0;
  FUN_104aaad18(*param_2,&ppppppuStack_58);
  ppppppuStack_58 = (ulong ******)&DAT_10f2da0fd;
  uStack_50 = 1;
  pppppppuVar5 = (ulong *******)&pppppppuStack_e8;
  func_0x0001004d6a18(&pppppppuStack_e8,pppppuStack_d0,uStack_c8,&DAT_10f68f19e,2);
  uStack_80 = uStack_e0;
  pppppppuStack_88 = pppppppuStack_e8;
  if (-1 < (char)bStack_d1) {
    uStack_80 = (ulong)bStack_d1;
    pppppppuStack_88 = pppppppuVar5;
  }
  puStack_b8 = &DAT_10f2da10d;
  uStack_b0 = 1;
  pppppppuVar10 = (ulong *******)&pppppppuStack_88;
  func_0x000100066c24(param_1,&ppppppuStack_58,pppppppuVar10,&puStack_b8);
  if ((char)bStack_d1 < '\0') {
    __ZdlPv(pppppppuStack_e8);
  }
  ppppppuStack_58 = &pppppuStack_d0;
  pppppppuVar6 = &ppppppuStack_58;
  func_0x0001004d6bcc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if ((char)bStack_d1 < '\0') {
      __ZdlPv(pppppppuStack_e8);
    }
    ppppppuStack_58 = &pppppuStack_d0;
    func_0x0001004d6bcc(&ppppppuStack_58);
    pppppppuVar7 = pppppppuVar6;
    __Unwind_Resume();
    pcStack_f8 = FUN_104aa9dc8;
    pppppppuVar9 = pppppppuVar10;
    pppppppuStack_100 = pppppppuVar15;
    if ((pppppppuVar7 == (ulong *******)0x0) ||
       (pppppppuVar9 = pppppppuVar7, pppppppuVar10 == (ulong *******)0x0)) {
      lVar8 = 0;
      ppppppuVar13 = (ulong ******)0x0;
      pcVar16 = pcStack_f8;
    }
    else {
      lVar8 = ((long)*pppppppuVar10 + (long)*pppppppuVar7) * 0x20;
      func_0x000100460200();
      if (*pppppppuVar7 == (ulong ******)0x0) {
        ppppppuVar13 = (ulong ******)0x0;
      }
      else {
        lVar11 = 0;
        ppppppuVar12 = (ulong ******)0x0;
        do {
          puVar2 = (undefined8 *)((long)pppppppuVar7[1] + lVar11);
          puVar3 = (undefined8 *)(lVar8 + lVar11);
          uVar18 = *puVar2;
          uVar22 = puVar2[3];
          uVar20 = puVar2[2];
          puVar3[1] = puVar2[1];
          *puVar3 = uVar18;
          puVar3[3] = uVar22;
          puVar3[2] = uVar20;
          ppppppuVar12 = (ulong ******)((long)ppppppuVar12 + 1);
          ppppppuVar13 = *pppppppuVar7;
          lVar11 = lVar11 + 0x20;
        } while (ppppppuVar12 < ppppppuVar13);
      }
      unaff_x25 = *pppppppuVar10;
      if (unaff_x25 != (ulong ******)0x0) {
        unaff_x23 = 0;
        unaff_x24 = (ulong ******)0x0;
        do {
          unaff_x26 = (undefined8 *)((long)pppppppuVar10[1] + unaff_x23);
          pppppppuVar5 = pppppppuVar7;
          func_0x00010047fdf4(pppppppuVar7,unaff_x26[1]);
          if (pppppppuVar5 == (ulong *******)0x0) {
            puVar2 = (undefined8 *)(lVar8 + (long)ppppppuVar13 * 0x20);
            ppppppuVar13 = (ulong ******)((long)ppppppuVar13 + 1);
            uVar18 = *unaff_x26;
            uVar22 = unaff_x26[3];
            uVar20 = unaff_x26[2];
            puVar2[1] = unaff_x26[1];
            *puVar2 = uVar18;
            puVar2[3] = uVar22;
            puVar2[2] = uVar20;
            unaff_x25 = *pppppppuVar10;
          }
          unaff_x24 = (ulong ******)((long)unaff_x24 + 1);
          unaff_x23 = unaff_x23 + 0x20;
        } while (unaff_x24 < unaff_x25);
      }
      pppppppuVar9 = (ulong *******)0x0;
      puVar4 = &stack0xfffffffffffffec0;
      pppppppuVar6 = pppppppuVar10;
      pppppppuVar5 = pppppppuVar7;
      unaff_x21 = lVar8;
      unaff_x22 = ppppppuVar13;
      pppppppuVar15 = &pppppppuStack_100;
      pcVar16 = (code *)0x104aa9ee0;
    }
    *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
    *(undefined8 **)(puVar4 + -0x50) = unaff_x26;
    *(ulong *******)(puVar4 + -0x48) = unaff_x25;
    *(ulong *******)(puVar4 + -0x40) = unaff_x24;
    *(long *)(puVar4 + -0x38) = unaff_x23;
    *(ulong *******)(puVar4 + -0x30) = unaff_x22;
    *(long *)(puVar4 + -0x28) = unaff_x21;
    *(ulong ********)(puVar4 + -0x20) = pppppppuVar5;
    *(ulong ********)(puVar4 + -0x18) = pppppppuVar6;
    *(undefined8 ********)(puVar4 + -0x10) = pppppppuVar15;
    *(code **)(puVar4 + -8) = pcVar16;
    *(ulong ********)(puVar4 + -0x90) = pppppppuVar9;
    if ((pppppppuVar9 == (ulong *******)0x0) || (*pppppppuVar9 == (ulong ******)0x0)) {
      lVar11 = 0;
    }
    else {
      ppppppuVar12 = (ulong ******)0x0;
      lVar11 = 0;
      do {
        lVar11 = lVar11 + 1;
        ppppppuVar12 = (ulong ******)((long)ppppppuVar12 + 1);
      } while (ppppppuVar12 != *pppppppuVar9);
    }
    pppppppuVar5 = (ulong *******)0x10;
    func_0x000100460200();
    ppppppuVar12 = (ulong ******)(lVar11 + (long)ppppppuVar13);
    *pppppppuVar5 = ppppppuVar12;
    if (ppppppuVar12 != (ulong ******)0x0) {
      ppppppuVar12 = (ulong ******)((long)ppppppuVar12 * 0x20);
      func_0x000100460200();
      pppppppuVar5[1] = ppppppuVar12;
      if ((pppppppuVar9 == (ulong *******)0x0) || (*pppppppuVar9 == (ulong ******)0x0)) {
        ppppppuVar12 = (ulong ******)0x0;
      }
      else {
        ppppppuVar14 = (ulong ******)0x0;
        ppppppuVar12 = (ulong ******)0x0;
        do {
          func_0x00010047fb38(puVar4 + -0x80,pppppppuVar9[1] + (long)ppppppuVar14 * 4);
          ppppppuVar1 = pppppppuVar5[1] + (long)ppppppuVar12 * 4;
          ppppppuVar12 = (ulong ******)((long)ppppppuVar12 + 1);
          pppppuVar17 = *(ulong ******)(puVar4 + -0x80);
          pppppuVar21 = *(ulong ******)(puVar4 + -0x68);
          pppppuVar19 = *(ulong ******)(puVar4 + -0x70);
          ppppppuVar1[1] = *(ulong ******)(puVar4 + -0x78);
          *ppppppuVar1 = pppppuVar17;
          ppppppuVar1[3] = pppppuVar21;
          ppppppuVar1[2] = pppppuVar19;
          ppppppuVar14 = (ulong ******)((long)ppppppuVar14 + 1);
        } while (ppppppuVar14 < *pppppppuVar9);
      }
      if (ppppppuVar13 != (ulong ******)0x0) {
        lVar11 = (long)ppppppuVar12 << 5;
        ppppppuVar12 = (ulong ******)((long)ppppppuVar12 + (long)ppppppuVar13);
        do {
          func_0x00010047fb38(puVar4 + -0x80,lVar8);
          puVar2 = (undefined8 *)((long)pppppppuVar5[1] + lVar11);
          uVar18 = *(undefined8 *)(puVar4 + -0x80);
          uVar22 = *(undefined8 *)(puVar4 + -0x68);
          uVar20 = *(undefined8 *)(puVar4 + -0x70);
          puVar2[1] = *(undefined8 *)(puVar4 + -0x78);
          *puVar2 = uVar18;
          puVar2[3] = uVar22;
          puVar2[2] = uVar20;
          lVar8 = lVar8 + 0x20;
          lVar11 = lVar11 + 0x20;
          ppppppuVar13 = (ulong ******)((long)ppppppuVar13 + -1);
        } while (ppppppuVar13 != (ulong ******)0x0);
      }
      if (ppppppuVar12 == *pppppppuVar5) {
        return pppppppuVar5;
      }
      func_0x000107c2c2e8();
    }
    pppppppuVar5[1] = (ulong ******)0x0;
    return pppppppuVar5;
  }
  return pppppppuVar6;
}



/* Entry: 104aa9dc8; end: 104aaa097;  */

/* WARNING: Possible PIC construction at 0x000104aa9edc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104aa9ee0) */
/* WARNING: Removing unreachable block (ram,0x00010047f974) */
/* WARNING: Removing unreachable block (ram,0x00010047f9cc) */
/* WARNING: Removing unreachable block (ram,0x00010047f990) */
/* WARNING: Removing unreachable block (ram,0x00010047f994) */
/* WARNING: Removing unreachable block (ram,0x00010047f9a0) */
/* WARNING: Removing unreachable block (ram,0x00010047f9b4) */
/* WARNING: Removing unreachable block (ram,0x00010047f9d0) */
/* WARNING: Removing unreachable block (ram,0x00010047fa30) */
/* WARNING: Removing unreachable block (ram,0x00010047faa8) */
/* WARNING: Removing unreachable block (ram,0x00010047fa4c) */
/* WARNING: Removing unreachable block (ram,0x00010047fa50) */
/* WARNING: Removing unreachable block (ram,0x00010047fa5c) */
/* WARNING: Removing unreachable block (ram,0x00010047fa70) */

long * FUN_104aa9dc8(ulong *param_1,ulong *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong *unaff_x19;
  ulong *unaff_x20;
  long lVar9;
  long unaff_x21;
  ulong unaff_x22;
  ulong uVar10;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar6 = param_2;
  if ((param_1 == (ulong *)0x0) || (puVar6 = param_1, param_2 == (ulong *)0x0)) {
    lVar5 = 0;
    uVar10 = 0;
  }
  else {
    lVar5 = (*param_2 + *param_1) * 0x20;
    func_0x000100460200();
    if (*param_1 == 0) {
      uVar10 = 0;
    }
    else {
      lVar7 = 0;
      uVar8 = 0;
      do {
        puVar2 = (undefined8 *)(param_1[1] + lVar7);
        puVar3 = (undefined8 *)(lVar5 + lVar7);
        uVar11 = *puVar2;
        uVar13 = puVar2[3];
        uVar12 = puVar2[2];
        puVar3[1] = puVar2[1];
        *puVar3 = uVar11;
        puVar3[3] = uVar13;
        puVar3[2] = uVar12;
        uVar8 = uVar8 + 1;
        uVar10 = *param_1;
        lVar7 = lVar7 + 0x20;
      } while (uVar8 < uVar10);
    }
    unaff_x25 = *param_2;
    if (unaff_x25 != 0) {
      unaff_x23 = 0;
      unaff_x24 = 0;
      do {
        unaff_x26 = (undefined8 *)(param_2[1] + unaff_x23);
        puVar6 = param_1;
        func_0x00010047fdf4(param_1,unaff_x26[1]);
        if (puVar6 == (ulong *)0x0) {
          puVar2 = (undefined8 *)(lVar5 + uVar10 * 0x20);
          uVar10 = uVar10 + 1;
          uVar11 = *unaff_x26;
          uVar13 = unaff_x26[3];
          uVar12 = unaff_x26[2];
          puVar2[1] = unaff_x26[1];
          *puVar2 = uVar11;
          puVar2[3] = uVar13;
          puVar2[2] = uVar12;
          unaff_x25 = *param_2;
        }
        unaff_x24 = unaff_x24 + 1;
        unaff_x23 = unaff_x23 + 0x20;
      } while (unaff_x24 < unaff_x25);
    }
    puVar6 = (ulong *)0x0;
    unaff_x30 = 0x104aa9ee0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    unaff_x21 = lVar5;
    unaff_x22 = uVar10;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(ulong **)((long)register0x00000008 + -0x90) = puVar6;
  if ((puVar6 == (ulong *)0x0) || (*puVar6 == 0)) {
    lVar7 = 0;
  }
  else {
    uVar8 = 0;
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != *puVar6);
  }
  plVar4 = (long *)0x10;
  func_0x000100460200();
  lVar7 = lVar7 + uVar10;
  *plVar4 = lVar7;
  if (lVar7 != 0) {
    lVar7 = lVar7 * 0x20;
    func_0x000100460200();
    plVar4[1] = lVar7;
    if ((puVar6 == (ulong *)0x0) || (*puVar6 == 0)) {
      lVar7 = 0;
    }
    else {
      uVar8 = 0;
      lVar7 = 0;
      do {
        func_0x00010047fb38((undefined1 *)((long)register0x00000008 + -0x80),
                            puVar6[1] + uVar8 * 0x20);
        puVar2 = (undefined8 *)(plVar4[1] + lVar7 * 0x20);
        lVar7 = lVar7 + 1;
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x80);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x68);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x70);
        puVar2[1] = *(undefined8 *)((long)register0x00000008 + -0x78);
        *puVar2 = uVar11;
        puVar2[3] = uVar13;
        puVar2[2] = uVar12;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *puVar6);
    }
    if (uVar10 != 0) {
      lVar9 = lVar7 << 5;
      lVar7 = lVar7 + uVar10;
      do {
        func_0x00010047fb38((undefined1 *)((long)register0x00000008 + -0x80),lVar5);
        puVar2 = (undefined8 *)(plVar4[1] + lVar9);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x80);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x68);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x70);
        puVar2[1] = *(undefined8 *)((long)register0x00000008 + -0x78);
        *puVar2 = uVar11;
        puVar2[3] = uVar13;
        puVar2[2] = uVar12;
        lVar5 = lVar5 + 0x20;
        lVar9 = lVar9 + 0x20;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (lVar7 == *plVar4) {
      return plVar4;
    }
    func_0x000107c2c2e8();
  }
  plVar4[1] = 0;
  return plVar4;
}



/* Entry: 104aaa098; end: 104aaa11b;  */

void FUN_104aaa098(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  func_0x000100560184(auStack_30);
  FUN_104aa9c98(param_1,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 104aaa11c; end: 104aaa133;  */

void FUN_104aaa11c(void)

{
  return;
}



/* Entry: 104aaa134; end: 104aaa147;  */

void FUN_104aaa134(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  *puVar1 = &PTR_FUN_1107c4968;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104aaa148; end: 104aaa157;  */

void FUN_104aaa148(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c4968;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104aaa158; end: 104aaa177;  */

void FUN_104aaa158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c4968;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104aaa178; end: 104aaa403;  */

/* WARNING: Removing unreachable block (ram,0x000104aaa358) */

void FUN_104aaa178(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_120 [32];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  undefined1 auStack_d0 [32];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [8];
  long *plStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar4 = *(long *)(*param_4 + 0x58);
  if (*(char *)(lVar4 + 0x27) < '\0') {
    func_0x000100033dac(&uStack_60,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
    lVar4 = *(long *)(*param_4 + 0x58);
  }
  else {
    uStack_58 = *(undefined8 *)(lVar4 + 0x18);
    uStack_60 = *(undefined8 *)(lVar4 + 0x10);
    uStack_50 = *(undefined8 *)(lVar4 + 0x20);
  }
  func_0x000100478b40(auStack_80,lVar4 + 0x28);
  lVar4 = *param_4;
  if (*(char *)(lVar4 + 0x27) < '\0') {
    func_0x000100033dac(&uStack_b0,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
    lVar4 = *param_4;
  }
  else {
    uStack_a8 = *(undefined8 *)(lVar4 + 0x18);
    uStack_b0 = *(undefined8 *)(lVar4 + 0x10);
    lStack_a0 = *(long *)(lVar4 + 0x20);
  }
  func_0x000100478b40(auStack_d0,lVar4 + 0x28);
  func_0x0001004786dc(auStack_90,&uStack_b0,auStack_d0,*param_4 + 0x48,
                      *(long *)(*param_4 + 0x58) + 0x48);
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  lStack_f0 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x0001004780e0(auStack_120,param_3);
  func_0x0001004786dc(auStack_e0,&uStack_100,auStack_120,*(long *)(*param_4 + 0x58) + 0x58,param_5);
  func_0x0001004786dc(param_1,&uStack_60,auStack_80,auStack_90,auStack_e0);
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
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
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  func_0x000100478948(auStack_120);
  if (lStack_f0 < 0) {
    __ZdlPv(uStack_100);
  }
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  func_0x000100478948(auStack_d0);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  func_0x000100478948(auStack_80);
  return;
}



/* Entry: 104aaa404; end: 104aaa68f;  */

/* WARNING: Removing unreachable block (ram,0x000104aaa5e4) */

void FUN_104aaa404(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_120 [32];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  undefined1 auStack_d0 [32];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [8];
  long *plStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar4 = *(long *)(*param_5 + 0x48);
  if (*(char *)(lVar4 + 0x27) < '\0') {
    func_0x000100033dac(&uStack_60,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
    lVar4 = *(long *)(*param_5 + 0x48);
  }
  else {
    uStack_58 = *(undefined8 *)(lVar4 + 0x18);
    uStack_60 = *(undefined8 *)(lVar4 + 0x10);
    uStack_50 = *(undefined8 *)(lVar4 + 0x20);
  }
  func_0x000100478b40(auStack_80,lVar4 + 0x28);
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  lStack_a0 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x0001004780e0(auStack_d0,param_3);
  func_0x0001004786dc(auStack_90,&uStack_b0,auStack_d0,param_4,*(long *)(*param_5 + 0x48) + 0x48);
  lVar4 = *param_5;
  if (*(char *)(lVar4 + 0x27) < '\0') {
    func_0x000100033dac(&uStack_100,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
    lVar4 = *param_5;
  }
  else {
    uStack_f8 = *(undefined8 *)(lVar4 + 0x18);
    uStack_100 = *(undefined8 *)(lVar4 + 0x10);
    lStack_f0 = *(long *)(lVar4 + 0x20);
  }
  func_0x000100478b40(auStack_120,lVar4 + 0x28);
  func_0x0001004786dc(auStack_e0,&uStack_100,auStack_120,*(long *)(*param_5 + 0x48) + 0x58,
                      *param_5 + 0x58);
  func_0x0001004786dc(param_1,&uStack_60,auStack_80,auStack_90,auStack_e0);
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
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
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  func_0x000100478948(auStack_120);
  if (lStack_f0 < 0) {
    __ZdlPv(uStack_100);
  }
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  func_0x000100478948(auStack_d0);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  func_0x000100478948(auStack_80);
  return;
}



/* Entry: 104aaa690; end: 104aaa6db;  */

void FUN_104aaa690(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  while (*(long *)(lVar1 + 0x48) != 0) {
    func_0x000104aaaca0(param_2);
    lVar1 = *param_2;
  }
  lVar2 = param_2[1];
  *param_1 = lVar1;
  param_1[1] = lVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 104aaa6dc; end: 104aaac53;  */

/* WARNING: Removing unreachable block (ram,0x000104aaa900) */
/* WARNING: Removing unreachable block (ram,0x000104aaa9a0) */
/* WARNING: Removing unreachable block (ram,0x000104aaa9a4) */

void FUN_104aaa6dc(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined1 auStack_1a0 [32];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_160;
  long lStack_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [32];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [32];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [32];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar16 = *param_2;
  if (lVar16 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar17 = (undefined8 *)(lVar16 + 0x10);
    puVar14 = (undefined8 *)*puVar17;
    bVar4 = *(byte *)(lVar16 + 0x27);
    uVar15 = *(ulong *)(lVar16 + 0x18);
    puVar2 = (undefined8 *)*param_3;
    uVar7 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      puVar2 = param_3;
      uVar7 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
    puVar11 = puVar14;
    uVar8 = uVar15;
    if (-1 < (char)bVar4) {
      puVar11 = puVar17;
      uVar8 = (ulong)bVar4;
    }
    uVar3 = uVar8;
    if (uVar7 <= uVar8) {
      uVar3 = uVar7;
    }
    puVar10 = puVar2;
    _memcmp(puVar2,puVar11,uVar3);
    bVar6 = uVar7 < uVar8;
    if ((int)puVar10 != 0) {
      bVar6 = (int)puVar10 < 0;
    }
    if (bVar6) {
      if ((char)bVar4 < '\0') {
        func_0x000100033dac(&uStack_80,puVar14,uVar15);
        lVar16 = *param_2;
      }
      else {
        uStack_78 = *(undefined8 *)(lVar16 + 0x18);
        uStack_80 = *puVar17;
        uStack_70 = *(undefined8 *)(lVar16 + 0x20);
      }
      func_0x000100478b40(auStack_a0,lVar16 + 0x28);
      FUN_104aaa6dc(&lStack_b0,*param_2 + 0x48,param_3);
      func_0x000100478b90(param_1,&uStack_80,auStack_a0,&lStack_b0,*param_2 + 0x58);
      if (plStack_a8 != (long *)0x0) {
        plVar1 = plStack_a8 + 1;
        do {
          lVar16 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
        }
      }
      func_0x000100478948(auStack_a0);
    }
    else {
      _memcmp(puVar11,puVar2,uVar3);
      bVar6 = uVar8 < uVar7;
      if ((int)puVar11 != 0) {
        bVar6 = (int)puVar11 < 0;
      }
      if (bVar6) {
        if ((char)bVar4 < '\0') {
          func_0x000100033dac(&uStack_d0,puVar14,uVar15);
          lVar16 = *param_2;
        }
        else {
          uStack_c8 = *(undefined8 *)(lVar16 + 0x18);
          uStack_d0 = *puVar17;
          uStack_c0 = *(undefined8 *)(lVar16 + 0x20);
        }
        func_0x000100478b40(auStack_f0,lVar16 + 0x28);
        lVar16 = *param_2;
        FUN_104aaa6dc(&lStack_b0,lVar16 + 0x58,param_3);
        func_0x000100478b90(param_1,&uStack_d0,auStack_f0,lVar16 + 0x48,&lStack_b0);
        if (plStack_a8 != (long *)0x0) {
          plVar1 = plStack_a8 + 1;
          do {
            lVar16 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
          }
        }
        func_0x000100478948(auStack_f0);
      }
      else {
        lVar12 = *(long *)(lVar16 + 0x48);
        lVar13 = *(long *)(lVar16 + 0x58);
        if (lVar12 == 0) {
          *param_1 = lVar13;
          lVar16 = *(long *)(lVar16 + 0x60);
          param_1[1] = lVar16;
          if (lVar16 != 0) {
            plVar1 = (long *)(lVar16 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        else if (lVar13 == 0) {
          *param_1 = lVar12;
          lVar16 = *(long *)(lVar16 + 0x50);
          param_1[1] = lVar16;
          if (lVar16 != 0) {
            plVar1 = (long *)(lVar16 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        else {
          if (*(long *)(lVar12 + 0x68) < *(long *)(lVar13 + 0x68)) {
            lStack_f8 = *(long *)(lVar16 + 0x60);
            if (lStack_f8 != 0) {
              plVar1 = (long *)(lStack_f8 + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = *plVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            lStack_100 = lVar13;
            FUN_104aaa690(&lStack_b0,&lStack_100);
            func_0x000100478eac(&lStack_100);
            if (*(char *)(lStack_b0 + 0x27) < '\0') {
              func_0x000100033dac(&uStack_120,*(undefined8 *)(lStack_b0 + 0x10),
                                  *(undefined8 *)(lStack_b0 + 0x18));
            }
            else {
              uStack_118 = *(undefined8 *)(lStack_b0 + 0x18);
              uStack_120 = *(undefined8 *)(lStack_b0 + 0x10);
              lStack_110 = *(long *)(lStack_b0 + 0x20);
            }
            func_0x000100478b40(auStack_140,lStack_b0 + 0x28);
            lVar16 = *param_2;
            FUN_104aaa6dc(auStack_150,lVar16 + 0x58,lStack_b0 + 0x10);
            func_0x000100478b90(param_1,&uStack_120,auStack_140,lVar16 + 0x48,auStack_150);
            func_0x000100478eac(auStack_150);
            func_0x000100478948(auStack_140);
            uVar9 = uStack_120;
            lVar16 = lStack_110;
          }
          else {
            lStack_158 = *(long *)(lVar16 + 0x50);
            if (lStack_158 != 0) {
              plVar1 = (long *)(lStack_158 + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = *plVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            lStack_160 = lVar12;
            FUN_104aaac54(&lStack_b0,&lStack_160);
            func_0x000100478eac(&lStack_160);
            if (*(char *)(lStack_b0 + 0x27) < '\0') {
              func_0x000100033dac(&uStack_180,*(undefined8 *)(lStack_b0 + 0x10),
                                  *(undefined8 *)(lStack_b0 + 0x18));
            }
            else {
              uStack_178 = *(undefined8 *)(lStack_b0 + 0x18);
              uStack_180 = *(undefined8 *)(lStack_b0 + 0x10);
              lStack_170 = *(long *)(lStack_b0 + 0x20);
            }
            func_0x000100478b40(auStack_1a0,lStack_b0 + 0x28);
            FUN_104aaa6dc(auStack_150,*param_2 + 0x48,lStack_b0 + 0x10);
            func_0x000100478b90(param_1,&uStack_180,auStack_1a0,auStack_150,*param_2 + 0x58);
            func_0x000100478eac(auStack_150);
            func_0x000100478948(auStack_1a0);
            uVar9 = uStack_180;
            lVar16 = lStack_170;
          }
          if (lVar16 < 0) {
            __ZdlPv(uVar9);
          }
          func_0x000100478eac(&lStack_b0);
        }
      }
    }
  }
  return;
}



/* Entry: 104aaac54; end: 104aaad17;  */

void FUN_104aaac54(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  while (*(long *)(lVar1 + 0x58) != 0) {
    func_0x000104aaaca0(param_2);
    lVar1 = *param_2;
  }
  lVar2 = param_2[1];
  *param_1 = lVar1;
  param_1[1] = lVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 104aaad18; end: 104aaaff3;  */

void FUN_104aaad18(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x21;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 **ppuStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  ulong *puStack_e0;
  undefined8 **ppuStack_d8;
  ulong uStack_d0;
  char *pcStack_a8;
  undefined *puStack_a0;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 != 0) {
    FUN_104aaad18(*(undefined8 *)(param_1 + 0x48));
    ppuStack_120 = (undefined8 ***)0x0;
    uStack_118 = 0;
    uStack_110 = 0;
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 2) {
      pcStack_a8 = *(char **)(param_1 + 0x28);
      puStack_a0 = &UNK_10ae73afc;
      func_0x0001004d4da0(&ppuStack_78,&DAT_10f2cf7ad,2,&pcStack_a8,1);
LAB_104aaadc0:
      if ((long)uStack_110 < 0) {
        __ZdlPv(ppuStack_120);
      }
      uStack_118 = uStack_70;
      ppuStack_120 = ppuStack_78;
      uStack_110 = uStack_68;
    }
    else if (iVar2 == 1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&ppuStack_120);
    }
    else if (iVar2 == 0) {
      __ZNSt3__19to_stringEi(&ppuStack_78,*(undefined4 *)(param_1 + 0x28));
      goto LAB_104aaadc0;
    }
    unaff_x21 = (long *)*param_2;
    uStack_70 = *(ulong *)(param_1 + 0x18);
    ppuStack_78 = *(undefined8 ****)(param_1 + 0x10);
    if (-1 < (char)*(byte *)(param_1 + 0x27)) {
      uStack_70 = (ulong)*(byte *)(param_1 + 0x27);
      ppuStack_78 = (undefined8 ***)(param_1 + 0x10);
    }
    pcStack_a8 = "=";
    puStack_a0 = (undefined *)0x1;
    uStack_d0 = uStack_118;
    ppuStack_d8 = ppuStack_120;
    if (-1 < (long)uStack_110) {
      uStack_d0 = uStack_110 >> 0x38;
      ppuStack_d8 = &ppuStack_120;
    }
    func_0x000100066c24(&uStack_138,&ppuStack_78,&pcStack_a8,&ppuStack_d8);
    puVar4 = (ulong *)(unaff_x21 + 2);
    puVar6 = (ulong *)unaff_x21[1];
    if (puVar6 < (ulong *)*puVar4) {
      puVar6[2] = uStack_128;
      puVar6[1] = uStack_130;
      *puVar6 = uStack_138;
      unaff_x21[1] = (long)(puVar6 + 3);
    }
    else {
      lVar7 = (long)puVar6 - *unaff_x21 >> 3;
      uVar1 = lVar7 * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar1) goto LAB_104aaaf90;
      lVar5 = (long)*puVar4 - *unaff_x21 >> 3;
      uVar8 = lVar5 * 0x5555555555555556;
      if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
        uVar8 = uVar1;
      }
      if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
        uVar8 = 0xaaaaaaaaaaaaaaa;
      }
      puStack_e0 = puVar4;
      if (uVar8 == 0) {
        puStack_100 = (ulong *)0x0;
      }
      else {
        func_0x0001004d69d4();
        puStack_100 = puVar4;
      }
      puStack_f8 = puStack_100 + lVar7;
      puStack_e8 = puStack_100 + uVar8 * 3;
      puStack_f8[2] = uStack_128;
      puStack_f8[1] = uStack_130;
      *puStack_f8 = uStack_138;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_138 = 0;
      puStack_f0 = puStack_f8 + 3;
      func_0x00010004824c(unaff_x21,&puStack_100);
      lVar7 = unaff_x21[1];
      func_0x0001000482e8(&puStack_100);
      unaff_x21[1] = lVar7;
      if ((long)uStack_128 < 0) {
        __ZdlPv(uStack_138);
      }
    }
    if ((long)uStack_110 < 0) {
      __ZdlPv(ppuStack_120);
    }
    FUN_104aaad18(*(undefined8 *)(param_1 + 0x58),param_2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104aaaf90:
  FUN_104a9439c(unaff_x21);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104aaaf9c);
  (*pcVar3)();
}



/* Entry: 104aaaff4; end: 104aab007;  */

void FUN_104aaaff4(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_104a6fa70();
  plVar4 = *(long **)(*(long *)(puVar1 + 0x10) + 8);
  plVar5 = *(long **)(*(long *)(puVar1 + 8) + 8);
  do {
    if (plVar4 == plVar5) {
      return;
    }
    plVar2 = (long *)plVar4[3];
    if (plVar4 == plVar2) {
      lVar3 = 4;
      plVar2 = plVar4;
LAB_104aab048:
      (**(code **)(*plVar2 + lVar3 * 8))();
    }
    else if (plVar2 != (long *)0x0) {
      lVar3 = 5;
      goto LAB_104aab048;
    }
    plVar4 = plVar4 + 4;
  } while( true );
}



/* Entry: 104aab008; end: 104aab067;  */

void FUN_104aab008(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 8);
  do {
    if (plVar3 == plVar4) {
      return;
    }
    plVar1 = (long *)plVar3[3];
    if (plVar3 == plVar1) {
      lVar2 = 4;
      plVar1 = plVar3;
LAB_104aab048:
      (**(code **)(*plVar1 + lVar2 * 8))();
    }
    else if (plVar1 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_104aab048;
    }
    plVar3 = plVar3 + 4;
  } while( true );
}



/* Entry: 104aab068; end: 104aab077;  */

long FUN_104aab068(long param_1)

{
  return param_1 + *(long *)(param_1 + 0x30) * 0x10 + 0x50;
}



/* Entry: 104aab078; end: 104aab117;  */

void FUN_104aab078(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    plVar1 = (long *)(param_1 + 0x60);
    do {
      (**(code **)(*plVar1 + 0x50))(plVar1);
      lVar3 = lVar3 + -1;
      plVar1 = plVar1 + 2;
    } while (lVar3 != 0);
  }
  plVar1 = *(long **)(param_1 + 0x58);
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)(param_1 + 0x40);
    (**(code **)(*plVar1 + 0x30))();
    plVar1 = *(long **)(param_1 + 0x58);
    if (plVar1 == plVar2) {
      lVar3 = 4;
    }
    else {
      if (plVar1 == (long *)0x0) {
        return;
      }
      lVar3 = 5;
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x000104aab100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + lVar3 * 8))();
    return;
  }
  FUN_104a71f98();
                    /* WARNING: Could not recover jumptable at 0x000104aab120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar1[2] + 0x58))();
  return;
}



/* Entry: 104aab118; end: 104aab133;  */

void FUN_104aab118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104aab120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x58))();
  return;
}



/* Entry: 104aab134; end: 104aab157;  */

void FUN_104aab134(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1107c49e0;
  return;
}



/* Entry: 104aab158; end: 104aab15f;  */

void FUN_104aab158(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104aab160; end: 104aab19b;  */

long FUN_104aab160(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c4a40);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104aab19c; end: 104aab1bb;  */

undefined ** FUN_104aab19c(void)

{
  return &PTR_DAT_1107c4a40;
}



/* Entry: 104aab1bc; end: 104aab1df;  */

void FUN_104aab1bc(undefined8 param_1)

{
  FUN_104aab078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 104aab1e0; end: 104aab237;  */

long * FUN_104aab1e0(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    func_0x00010ae77b40(param_1);
  }
  return param_1;
}



/* Entry: 104aab238; end: 104aab2b3;  */

long FUN_104aab238(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  if ((long *)0x1 < plVar4) {
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (*(code *)plVar4[1])();
    }
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 104aab2b4; end: 104aab303;  */

long FUN_104aab2b4(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    while (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x38);
      FUN_104aab238();
      __ZdlPv();
    }
    func_0x0001005a5f48(param_1);
  }
  return param_1;
}



/* Entry: 104aab304; end: 104aab307;  */

long FUN_104aab304(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    while (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x38);
      FUN_104aab238();
      __ZdlPv();
    }
    func_0x0001005a5f48(param_1);
  }
  return param_1;
}



/* Entry: 104aab308; end: 104aab793;  */

/* WARNING: Removing unreachable block (ram,0x000104aab440) */
/* WARNING: Removing unreachable block (ram,0x000104aab450) */

long ** FUN_104aab308(undefined4 *param_1,int *param_2)

{
  long *plVar1;
  code *pcVar2;
  long **pplVar3;
  long **pplVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  long *plStack_320;
  long *plStack_318;
  long *plStack_310;
  long *plStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined1 uStack_2e9;
  undefined8 **ppuStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined7 uStack_2d0;
  char cStack_2c9;
  undefined4 uStack_2c8;
  char cStack_2c1;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 *apuStack_228 [2];
  char cStack_211;
  undefined1 uStack_209;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 **ppuStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long alStack_1d0 [2];
  undefined8 *puStack_1c0;
  undefined1 uStack_1b1;
  undefined8 **ppuStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined4 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [104];
  undefined1 auStack_d8 [24];
  undefined4 uStack_c0;
  long *plStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)(param_2 + 4);
  uStack_70 = *(undefined8 *)(param_2 + 2);
  uStack_58 = *(undefined8 *)(param_2 + 8);
  uStack_60 = *(undefined8 *)(param_2 + 6);
  puVar6 = &uStack_70;
  func_0x000100619698();
  puStack_1c0 = puVar6;
  FUN_104aabba8(auStack_1a8,"description",&puStack_1c0);
  if (2 < *param_2 - 1U) {
    FUN_104a6e964("return \"CT_UNKNOWN\"",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_trace.cc"
                  ,0x88);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104aab6a4);
    (*pcVar2)();
  }
  apuStack_228[0] = (undefined8 *)(&PTR_s_CT_INFO_1107c4a98)[(int)(*param_2 - 1U)];
  FUN_104aabcbc(auStack_140,&DAT_10f42a581,apuStack_228);
  FUN_104a6ed68(&ppuStack_1f0,*(undefined8 *)(param_2 + 10),*(undefined8 *)(param_2 + 0xc));
  func_0x00010002b024(auStack_d8,"timestamp");
  uStack_a8 = plStack_1e0;
  uStack_c0 = 4;
  puStack_b0 = plStack_1e8;
  plStack_b8 = (long *)ppuStack_1f0;
  ppuStack_1f0 = (long **)0x0;
  plStack_1e8 = (long *)0x0;
  plStack_1e0 = (long *)0x0;
  puStack_a0 = &uStack_98;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  puVar6 = (undefined8 *)0x3;
  func_0x0001004c669c(&plStack_1d8,auStack_1a8,3,&lStack_208);
  lVar8 = 0x138;
  do {
    lStack_208 = (long)&puStack_1c0 + lVar8;
    func_0x000100482ae0(&lStack_208);
    func_0x000100482900((long)&plStack_1d8 + lVar8,*(undefined8 *)((long)alStack_1d0 + lVar8));
    lVar8 = lVar8 + -0x68;
  } while (lVar8 != 0);
  if ((long)plStack_1e0 < 0) {
    __ZdlPv(ppuStack_1f0);
  }
  func_0x000100460314(puStack_1c0);
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 != 0) {
    if ((*(int *)(lVar8 + 0x10) == 0) || (*(int *)(lVar8 + 0x10) == 1)) {
      pcVar9 = "channelId";
      pcVar7 = "channelRef";
    }
    else {
      pcVar9 = "subchannelId";
      pcVar7 = "subchannelRef";
    }
    __ZNSt3__19to_stringEl(&lStack_208,*(undefined8 *)(lVar8 + 0x18));
    func_0x00010002b024(auStack_1a8,pcVar9);
    lStack_178 = lStack_1f8;
    uStack_190 = 4;
    uStack_180 = uStack_200;
    lStack_188 = lStack_208;
    lStack_208 = 0;
    uStack_200 = 0;
    lStack_1f8 = 0;
    puStack_170 = &uStack_168;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_158 = 0;
    func_0x0001004c669c(&ppuStack_1f0,auStack_1a8,1,&uStack_209);
    func_0x00010002b024(apuStack_228,pcVar7);
    puVar6 = (undefined8 *)&UNK_10dd5b8f9;
    pplVar3 = &plStack_1d8;
    ppuStack_1b0 = apuStack_228;
    FUN_104a81f70(pplVar3,apuStack_228,&UNK_10dd5b8f9,&ppuStack_1b0,&uStack_1b1);
    pplVar4 = pplVar3 + 0xc;
    *(undefined4 *)(pplVar3 + 7) = 5;
    func_0x000100482900(pplVar3 + 0xb,*pplVar4);
    plVar5 = plStack_1e8;
    pplVar3[0xb] = (long *)ppuStack_1f0;
    pplVar3[0xc] = plVar5;
    plVar1 = plStack_1e0;
    pplVar3[0xd] = plStack_1e0;
    if (plVar1 == (long *)0x0) {
      pplVar3[0xb] = (long *)pplVar4;
    }
    else {
      plVar5[2] = (long)pplVar4;
      ppuStack_1f0 = &plStack_1e8;
      plStack_1e8 = (long *)0x0;
      plStack_1e0 = (long *)0x0;
      plVar5 = (long *)0x0;
    }
    if (cStack_211 < '\0') {
      __ZdlPv(apuStack_228[0],plVar5);
      plVar5 = plStack_1e8;
    }
    func_0x000100482900(&ppuStack_1f0,plVar5);
    apuStack_228[0] = &uStack_158;
    func_0x000100482ae0(apuStack_228);
    func_0x000100482900(&puStack_170,uStack_168);
    if (lStack_178 < 0) {
      __ZdlPv(lStack_188);
    }
    if (cStack_191 < '\0') {
      __ZdlPv(auStack_1a8[0]);
    }
    if (lStack_1f8 < 0) {
      __ZdlPv(lStack_208);
    }
  }
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = plStack_1d8;
  plVar5 = (long *)(param_1 + 10);
  *plVar5 = alStack_1d0[0];
  *(long *)(param_1 + 0xc) = alStack_1d0[1];
  if (alStack_1d0[1] == 0) {
    *(long **)(param_1 + 8) = plVar5;
  }
  else {
    *(long **)(alStack_1d0[0] + 0x10) = plVar5;
    plStack_1d8 = alStack_1d0;
    alStack_1d0[0] = 0;
    alStack_1d0[1] = 0;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  pplVar3 = &plStack_1d8;
  func_0x000100482900(pplVar3,alStack_1d0[0]);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (cStack_211 < '\0') {
      __ZdlPv(apuStack_228[0]);
    }
    func_0x000100482900(&ppuStack_1f0,plStack_1e8);
    func_0x000104a77414(auStack_1a8);
    if (lStack_1f8 < 0) {
      __ZdlPv(lStack_208);
    }
    func_0x000100482900(&plStack_1d8,alStack_1d0[0]);
    __Unwind_Resume();
    lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if (pplVar3[10] == (long *)0x0) {
      extraout_x8[3] = 0;
      extraout_x8[2] = 0;
      extraout_x8[5] = 0;
      extraout_x8[4] = 0;
      extraout_x8[6] = 0;
      extraout_x8[7] = 0;
      extraout_x8[1] = 0;
      *extraout_x8 = 0;
      extraout_x8[4] = extraout_x8 + 5;
      extraout_x8[8] = 0;
      extraout_x8[9] = 0;
    }
    else {
      FUN_104a6ed68(&plStack_320,pplVar3[0xd],pplVar3[0xe]);
      func_0x00010002b024(&plStack_2e0,&DAT_10f2c61af);
      lStack_2b0 = (long)plStack_310;
      uStack_2c8 = 4;
      uStack_2b8 = plStack_318;
      puStack_2c0 = plStack_320;
      plStack_320 = (long *)0x0;
      plStack_318 = (long *)0x0;
      plStack_310 = (long *)0x0;
      puStack_2a8 = &uStack_2a0;
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_288 = 0;
      uStack_280 = 0;
      puStack_290 = (long *)0x0;
      puVar6 = (undefined8 *)0x1;
      func_0x0001004c669c(&plStack_308,&plStack_2e0,1,&ppuStack_2e8);
      ppuStack_2e8 = &puStack_290;
      func_0x000100482ae0(&ppuStack_2e8);
      func_0x000100482900(&puStack_2a8,uStack_2a0);
      if (lStack_2b0 < 0) {
        __ZdlPv(puStack_2c0);
      }
      if (cStack_2c9 < '\0') {
        __ZdlPv(plStack_2e0);
      }
      if ((long)plStack_310 < 0) {
        __ZdlPv(plStack_320);
      }
      if (pplVar3[8] != (long *)0x0) {
        __ZNSt3__19to_stringEy(&plStack_2e0);
        func_0x00010002b024(&plStack_320,"numEventsLogged");
        puVar6 = (undefined8 *)&UNK_10dd5b8f9;
        pplVar4 = &plStack_308;
        ppuStack_2e8 = &plStack_320;
        FUN_104a81f70(pplVar4,&plStack_320,&UNK_10dd5b8f9,&ppuStack_2e8,&uStack_2e9);
        *(undefined4 *)(pplVar4 + 7) = 4;
        if (*(char *)((long)pplVar4 + 0x57) < '\0') {
          __ZdlPv(pplVar4[8]);
        }
        plVar5 = plStack_2e0;
        pplVar4[9] = plStack_2d8;
        pplVar4[8] = plVar5;
        pplVar4[10] = (long *)CONCAT17(cStack_2c9,uStack_2d0);
        cStack_2c9 = '\0';
        plStack_2e0 = (long *)((ulong)plStack_2e0 & 0xffffffffffffff00);
        if (((long)plStack_310 < 0) && (__ZdlPv(plStack_320), cStack_2c9 < '\0')) {
          __ZdlPv(plStack_2e0);
        }
      }
      plVar5 = pplVar3[0xb];
      if (plVar5 != (long *)0x0) {
        plStack_320 = (long *)0x0;
        plStack_318 = (long *)0x0;
        plStack_310 = (long *)0x0;
        do {
          FUN_104aab308(&plStack_2e0,plVar5);
          plVar1 = plStack_318;
          if (plStack_318 < plStack_310) {
            *(undefined4 *)plStack_318 = 0;
            plVar1[1] = 0;
            plVar1[2] = 0;
            plVar1[6] = 0;
            plVar1[7] = 0;
            plVar1[5] = 0;
            plVar1[3] = 0;
            plVar1[4] = (long)(plVar1 + 5);
            plVar1[8] = 0;
            plVar1[9] = 0;
            func_0x0001004829b8(plVar1,&plStack_2e0);
            pplVar3 = (long **)(plVar1 + 10);
          }
          else {
            pplVar3 = &plStack_320;
            FUN_104aabd10(&plStack_320,&plStack_2e0);
          }
          plStack_318 = (long *)pplVar3;
          ppuStack_2e8 = &puStack_2a8;
          func_0x000100482ae0(&ppuStack_2e8);
          func_0x000100482900(&puStack_2c0,uStack_2b8);
          if (cStack_2c1 < '\0') {
            __ZdlPv(plStack_2d8);
          }
          plVar5 = (long *)plVar5[7];
        } while (plVar5 != (long *)0x0);
        func_0x00010002b024(&plStack_2e0,&DAT_10f5418d0);
        puVar6 = (undefined8 *)&UNK_10dd5b8f9;
        pplVar3 = &plStack_308;
        ppuStack_2e8 = &plStack_2e0;
        FUN_104a81f70(pplVar3,&plStack_2e0,&UNK_10dd5b8f9,&ppuStack_2e8,&uStack_2e9);
        *(undefined4 *)(pplVar3 + 7) = 6;
        FUN_104a7781c(pplVar3 + 0xe);
        pplVar3[0xf] = plStack_318;
        pplVar3[0xe] = plStack_320;
        pplVar3[0x10] = plStack_310;
        plStack_318 = (long *)0x0;
        plStack_310 = (long *)0x0;
        plStack_320 = (long *)0x0;
        if (cStack_2c9 < '\0') {
          __ZdlPv(plStack_2e0);
        }
        plStack_2e0 = (long *)&plStack_320;
        func_0x000100482ae0(&plStack_2e0);
      }
      *(undefined4 *)extraout_x8 = 5;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      extraout_x8[3] = 0;
      extraout_x8[4] = plStack_308;
      plVar5 = extraout_x8 + 5;
      *plVar5 = lStack_300;
      extraout_x8[6] = lStack_2f8;
      if (lStack_2f8 == 0) {
        extraout_x8[4] = plVar5;
      }
      else {
        *(long **)(lStack_300 + 0x10) = plVar5;
        plStack_308 = &lStack_300;
        lStack_300 = 0;
        lStack_2f8 = 0;
      }
      extraout_x8[7] = 0;
      extraout_x8[8] = 0;
      extraout_x8[9] = 0;
      pplVar3 = &plStack_308;
      func_0x000100482900(pplVar3,lStack_300);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
      ___stack_chk_fail();
      if (cStack_2c9 < '\0') {
        __ZdlPv(plStack_2e0);
      }
      plStack_2e0 = (long *)&plStack_320;
      func_0x000100482ae0(&plStack_2e0);
      func_0x000100482900(&plStack_308,lStack_300);
      __Unwind_Resume(pplVar3);
      pplVar4 = pplVar3;
      func_0x00010002b024();
      FUN_104aabbfc(pplVar4 + 3,*puVar6,0);
      return pplVar3;
    }
    return pplVar3;
  }
  return pplVar3;
}



/* Entry: 104aab794; end: 104aabba7;  */

long ** FUN_104aab794(undefined8 *param_1,long **param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long **pplVar2;
  long *plVar3;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 uStack_b9;
  undefined8 **ppuStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined7 uStack_a0;
  char cStack_99;
  undefined4 uStack_98;
  char cStack_91;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2[10] == (long *)0x0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[4] = param_1 + 5;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    FUN_104a6ed68(&plStack_f0,param_2[0xd],param_2[0xe]);
    func_0x00010002b024(&plStack_b0,&DAT_10f2c61af);
    lStack_80 = (long)plStack_e0;
    uStack_98 = 4;
    uStack_88 = plStack_e8;
    puStack_90 = plStack_f0;
    plStack_f0 = (long *)0x0;
    plStack_e8 = (long *)0x0;
    plStack_e0 = (long *)0x0;
    puStack_78 = &uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    puStack_60 = (long *)0x0;
    param_4 = (undefined8 *)0x1;
    func_0x0001004c669c(&plStack_d8,&plStack_b0,1,&ppuStack_b8);
    ppuStack_b8 = &puStack_60;
    func_0x000100482ae0(&ppuStack_b8);
    func_0x000100482900(&puStack_78,uStack_70);
    if (lStack_80 < 0) {
      __ZdlPv(puStack_90);
    }
    if (cStack_99 < '\0') {
      __ZdlPv(plStack_b0);
    }
    if ((long)plStack_e0 < 0) {
      __ZdlPv(plStack_f0);
    }
    if (param_2[8] != (long *)0x0) {
      __ZNSt3__19to_stringEy(&plStack_b0);
      func_0x00010002b024(&plStack_f0,"numEventsLogged");
      param_4 = (undefined8 *)&UNK_10dd5b8f9;
      pplVar2 = &plStack_d8;
      ppuStack_b8 = &plStack_f0;
      FUN_104a81f70(pplVar2,&plStack_f0,&UNK_10dd5b8f9,&ppuStack_b8,&uStack_b9);
      *(undefined4 *)(pplVar2 + 7) = 4;
      if (*(char *)((long)pplVar2 + 0x57) < '\0') {
        __ZdlPv(pplVar2[8]);
      }
      plVar3 = plStack_b0;
      pplVar2[9] = plStack_a8;
      pplVar2[8] = plVar3;
      pplVar2[10] = (long *)CONCAT17(cStack_99,uStack_a0);
      cStack_99 = '\0';
      plStack_b0 = (long *)((ulong)plStack_b0 & 0xffffffffffffff00);
      if ((long)plStack_e0 < 0) {
        __ZdlPv(plStack_f0);
        if (cStack_99 < '\0') {
          __ZdlPv(plStack_b0);
        }
      }
    }
    plVar3 = param_2[0xb];
    if (plVar3 != (long *)0x0) {
      plStack_f0 = (long *)0x0;
      plStack_e8 = (long *)0x0;
      plStack_e0 = (long *)0x0;
      do {
        FUN_104aab308(&plStack_b0,plVar3);
        plVar1 = plStack_e8;
        if (plStack_e8 < plStack_e0) {
          *(undefined4 *)plStack_e8 = 0;
          plVar1[1] = 0;
          plVar1[2] = 0;
          plVar1[6] = 0;
          plVar1[7] = 0;
          plVar1[5] = 0;
          plVar1[3] = 0;
          plVar1[4] = (long)(plVar1 + 5);
          plVar1[8] = 0;
          plVar1[9] = 0;
          func_0x0001004829b8(plVar1,&plStack_b0);
          pplVar2 = (long **)(plVar1 + 10);
        }
        else {
          pplVar2 = &plStack_f0;
          FUN_104aabd10(&plStack_f0,&plStack_b0);
        }
        plStack_e8 = (long *)pplVar2;
        ppuStack_b8 = &puStack_78;
        func_0x000100482ae0(&ppuStack_b8);
        func_0x000100482900(&puStack_90,uStack_88);
        if (cStack_91 < '\0') {
          __ZdlPv(plStack_a8);
        }
        plVar3 = (long *)plVar3[7];
      } while (plVar3 != (long *)0x0);
      func_0x00010002b024(&plStack_b0,&DAT_10f5418d0);
      param_4 = (undefined8 *)&UNK_10dd5b8f9;
      pplVar2 = &plStack_d8;
      ppuStack_b8 = &plStack_b0;
      FUN_104a81f70(pplVar2,&plStack_b0,&UNK_10dd5b8f9,&ppuStack_b8,&uStack_b9);
      *(undefined4 *)(pplVar2 + 7) = 6;
      FUN_104a7781c(pplVar2 + 0xe);
      pplVar2[0xf] = plStack_e8;
      pplVar2[0xe] = plStack_f0;
      pplVar2[0x10] = plStack_e0;
      plStack_e8 = (long *)0x0;
      plStack_e0 = (long *)0x0;
      plStack_f0 = (long *)0x0;
      if (cStack_99 < '\0') {
        __ZdlPv(plStack_b0);
      }
      plStack_b0 = (long *)&plStack_f0;
      func_0x000100482ae0(&plStack_b0);
    }
    *(undefined4 *)param_1 = 5;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = plStack_d8;
    plVar3 = param_1 + 5;
    *plVar3 = lStack_d0;
    param_1[6] = lStack_c8;
    if (lStack_c8 == 0) {
      param_1[4] = plVar3;
    }
    else {
      *(long **)(lStack_d0 + 0x10) = plVar3;
      plStack_d8 = &lStack_d0;
      lStack_d0 = 0;
      lStack_c8 = 0;
    }
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_2 = &plStack_d8;
    func_0x000100482900(param_2,lStack_d0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_2;
  }
  ___stack_chk_fail();
  if (cStack_99 < '\0') {
    __ZdlPv(plStack_b0);
  }
  plStack_b0 = (long *)&plStack_f0;
  func_0x000100482ae0(&plStack_b0);
  func_0x000100482900(&plStack_d8,lStack_d0);
  __Unwind_Resume(param_2);
  pplVar2 = param_2;
  func_0x00010002b024();
  FUN_104aabbfc(pplVar2 + 3,*param_4,0);
  return param_2;
}



/* Entry: 104aabba8; end: 104aabbfb;  */

long FUN_104aabba8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b024();
  FUN_104aabbfc(lVar1 + 0x18,*param_3,0);
  return param_1;
}



/* Entry: 104aabbfc; end: 104aabcbb;  */

undefined4 * FUN_104aabbfc(undefined4 *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined7 uStack_28;
  char cStack_21;
  
  func_0x00010002b024(&uStack_38);
  uVar1 = 3;
  if (param_3 == 0) {
    uVar1 = 4;
  }
  *param_1 = uVar1;
  if (cStack_21 < '\0') {
    func_0x000100033dac(param_1 + 2,uStack_38,uStack_30);
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined4 **)(param_1 + 8) = param_1 + 10;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    if (cStack_21 < '\0') {
      __ZdlPv(uStack_38);
    }
  }
  else {
    *(undefined8 *)(param_1 + 4) = uStack_30;
    *(undefined8 *)(param_1 + 2) = uStack_38;
    *(undefined8 *)(param_1 + 10) = 0;
    *(ulong *)(param_1 + 6) = CONCAT17(cStack_21,uStack_28);
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined4 **)(param_1 + 8) = param_1 + 10;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
  }
  return param_1;
}



/* Entry: 104aabcbc; end: 104aabd0f;  */

long FUN_104aabcbc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b024();
  FUN_104a81c4c(lVar1 + 0x18,*param_3,0);
  return param_1;
}



/* Entry: 104aabd10; end: 104aabe2b;  */

long * FUN_104aabd10(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar3 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar3 * -0x3333333333333333 + 1;
  if (uVar1 < 0x333333333333334) {
    plVar5 = param_1 + 2;
    lVar2 = *plVar5 - *param_1 >> 4;
    uVar4 = lVar2 * -0x6666666666666666;
    if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
      uVar4 = uVar1;
    }
    if (0x199999999999998 < (ulong)(lVar2 * -0x3333333333333333)) {
      uVar4 = 0x333333333333333;
    }
    plStack_38 = plVar5;
    if (uVar4 == 0) {
      plStack_58 = (long *)0x0;
    }
    else {
      FUN_104a77a38();
      plStack_58 = plVar5;
    }
    plVar5 = plStack_58 + lVar3 * 2;
    plStack_40 = plStack_58 + uVar4 * 10;
    *(undefined4 *)plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[5] = 0;
    plVar5[3] = 0;
    plVar5[4] = (long)(plVar5 + 5);
    plVar5[8] = 0;
    plVar5[9] = 0;
    plStack_50 = plVar5;
    func_0x0001004829b8(plVar5,param_2);
    plStack_48 = plVar5 + 10;
    FUN_104aabe2c(param_1,&plStack_58);
    plVar5 = (long *)param_1[1];
    FUN_104aabfe4(&plStack_58);
    return plVar5;
  }
  FUN_104a77a24();
  FUN_104aabfe4(&plStack_58);
  __Unwind_Resume();
  plVar5 = param_1 + 2;
  lVar3 = param_1[1];
  FUN_104aabea0(plVar5,lVar3,lVar3,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = lVar3;
  lVar2 = *param_1;
  *param_1 = lVar3;
  param_2[1] = lVar2;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar5;
}



/* Entry: 104aabe2c; end: 104aabe9f;  */

void FUN_104aabe2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  FUN_104aabea0(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 104aabea0; end: 104aabf5f;  */

undefined1  [16]
FUN_104aabea0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puStack_68 = &uStack_50;
  puStack_60 = &uStack_40;
  uStack_58 = 0;
  lStack_48 = param_7;
  uStack_50 = param_6;
  uStack_70 = param_1;
  while (uStack_40 = param_6, lStack_38 = param_7, param_3 != param_5) {
    *(undefined4 *)(param_7 + -0x50) = 0;
    param_3 = param_3 + -0x50;
    *(undefined8 *)(param_7 + -0x48) = 0;
    *(undefined8 *)(param_7 + -0x40) = 0;
    *(undefined8 *)(param_7 + -0x20) = 0;
    *(undefined8 *)(param_7 + -0x18) = 0;
    *(undefined8 *)(param_7 + -0x28) = 0;
    *(undefined8 *)(param_7 + -0x38) = 0;
    *(undefined8 **)(param_7 + -0x30) = (undefined8 *)(param_7 + -0x28);
    *(undefined8 *)(param_7 + -0x10) = 0;
    *(undefined8 *)(param_7 + -8) = 0;
    func_0x0001004829b8((undefined4 *)(param_7 + -0x50),param_3);
    param_7 = lStack_38 + -0x50;
    param_6 = uStack_40;
  }
  uStack_58 = 1;
  FUN_104aabf60(&uStack_70);
  auVar1._8_8_ = param_7;
  auVar1._0_8_ = param_6;
  return auVar1;
}



/* Entry: 104aabf60; end: 104aabf93;  */

long FUN_104aabf60(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_104aabf94(param_1);
  }
  return param_1;
}



/* Entry: 104aabf94; end: 104aabfe3;  */

void FUN_104aabf94(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1[2] + 8);
  lVar3 = *(long *)(param_1[1] + 8);
  if (lVar1 != lVar3) {
    uVar2 = *param_1;
    do {
      func_0x0001004c74fc(uVar2,lVar1);
      lVar1 = lVar1 + 0x50;
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 104aabfe4; end: 104aac057;  */

long * FUN_104aabfe4(long *param_1)

{
  func_0x000104aac014();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104aac058; end: 104aac063;  */

void FUN_104aac058(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104aac060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 104aac064; end: 104aac0b3;  */

undefined8 * FUN_104aac064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c4ac0;
  func_0x00010047dc18();
  FUN_104aaeff4();
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 104aac0b4; end: 104aac0bb;  */

void FUN_104aac0b4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104aac0b8);
  (*pcVar1)();
}



/* Entry: 104aac0bc; end: 104aac113;  */

void FUN_104aac0bc(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar4 = param_1;
  func_0x000100460dc4();
  lVar6 = *plVar4;
  uVar1 = *(uint *)(lVar6 + 0x30);
  uVar5 = (ulong)uVar1;
  if (uVar1 == 0xffffffff) {
    func_0x0001004b86f8();
    *(int *)(lVar6 + 0x30) = (int)uVar5;
  }
  plVar4 = (long *)(*param_1 + (uVar5 & 0xffffffff) * 0x40 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = *plVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 104aac114; end: 104aac17b;  */

void FUN_104aac114(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    lVar4 = param_2[2];
    dVar7 = (double)param_2[3];
    plVar5 = (long *)(*param_1 + 0x10);
    do {
      lVar2 = lVar2 + plVar5[-2];
      *param_2 = lVar2;
      lVar3 = lVar3 + plVar5[-1];
      param_2[1] = lVar3;
      lVar4 = lVar4 + *plVar5;
      param_2[2] = lVar4;
      dVar6 = (double)plVar5[1];
      if (dVar7 < dVar6) {
        param_2[3] = (long)dVar6;
        dVar7 = dVar6;
      }
      plVar5 = plVar5 + 8;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 104aac17c; end: 104aac463;  */

void FUN_104aac17c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined7 uStack_58;
  char cStack_51;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  lStack_48 = 0;
  lStack_50 = 0;
  uStack_38 = 0;
  lStack_40 = 0;
  FUN_104aac114(param_1,&lStack_50);
  if (lStack_50 != 0) {
    __ZNSt3__19to_stringEx(&uStack_68);
    func_0x00010002b024(auStack_80,"callsStarted");
    lVar1 = param_2;
    puStack_28 = (undefined1 *)auStack_80;
    FUN_104a81f70(param_2,auStack_80,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
    *(undefined4 *)(lVar1 + 0x38) = 4;
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    *(undefined8 *)(lVar1 + 0x48) = uStack_60;
    *(undefined8 *)(lVar1 + 0x40) = CONCAT71(uStack_67,uStack_68);
    *(ulong *)(lVar1 + 0x50) = CONCAT17(cStack_51,uStack_58);
    cStack_51 = '\0';
    uStack_68 = 0;
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
      if (cStack_51 < '\0') {
        __ZdlPv(CONCAT71(uStack_67,uStack_68));
      }
    }
    FUN_104a6f610(uStack_38);
    func_0x0001004673f0();
    FUN_104a6ed68(&uStack_68);
    func_0x00010002b024(auStack_80,"lastCallStartedTimestamp");
    lVar1 = param_2;
    puStack_28 = (undefined1 *)auStack_80;
    FUN_104a81f70(param_2,auStack_80,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
    *(undefined4 *)(lVar1 + 0x38) = 4;
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    *(undefined8 *)(lVar1 + 0x48) = uStack_60;
    *(undefined8 *)(lVar1 + 0x40) = CONCAT71(uStack_67,uStack_68);
    *(ulong *)(lVar1 + 0x50) = CONCAT17(cStack_51,uStack_58);
    cStack_51 = '\0';
    uStack_68 = 0;
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
      if (cStack_51 < '\0') {
        __ZdlPv(CONCAT71(uStack_67,uStack_68));
      }
    }
  }
  if (lStack_48 != 0) {
    __ZNSt3__19to_stringEx(&uStack_68);
    func_0x00010002b024(auStack_80,"callsSucceeded");
    lVar1 = param_2;
    puStack_28 = (undefined1 *)auStack_80;
    FUN_104a81f70(param_2,auStack_80,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
    *(undefined4 *)(lVar1 + 0x38) = 4;
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    *(undefined8 *)(lVar1 + 0x48) = uStack_60;
    *(undefined8 *)(lVar1 + 0x40) = CONCAT71(uStack_67,uStack_68);
    *(ulong *)(lVar1 + 0x50) = CONCAT17(cStack_51,uStack_58);
    cStack_51 = '\0';
    uStack_68 = 0;
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
      if (cStack_51 < '\0') {
        __ZdlPv(CONCAT71(uStack_67,uStack_68));
      }
    }
  }
  if (lStack_40 != 0) {
    __ZNSt3__19to_stringEx(&uStack_68);
    func_0x00010002b024(auStack_80,"callsFailed");
    puStack_28 = (undefined1 *)auStack_80;
    FUN_104a81f70(param_2,auStack_80,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
    *(undefined4 *)(param_2 + 0x38) = 4;
    if (*(char *)(param_2 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x40));
    }
    *(undefined8 *)(param_2 + 0x48) = uStack_60;
    *(undefined8 *)(param_2 + 0x40) = CONCAT71(uStack_67,uStack_68);
    *(ulong *)(param_2 + 0x50) = CONCAT17(cStack_51,uStack_58);
    cStack_51 = '\0';
    uStack_68 = 0;
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
      if (cStack_51 < '\0') {
        __ZdlPv(CONCAT71(uStack_67,uStack_68));
      }
    }
  }
  return;
}



/* Entry: 104aac464; end: 104aaca17;  */

void FUN_104aac464(undefined4 *param_1,long param_2)

{
  undefined8 **ppuVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 **ppuVar7;
  undefined8 ****ppppuVar8;
  long *plVar9;
  undefined8 ***pppuVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  undefined8 ***pppuStack_3c8;
  undefined8 ***pppuStack_3c0;
  undefined8 ***pppuStack_3b8;
  undefined1 **ppuStack_3b0;
  code *pcStack_3a8;
  undefined8 ***pppuStack_3a0;
  undefined8 ***pppuStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_380;
  undefined8 ***pppuStack_378;
  undefined8 **ppuStack_370;
  undefined8 **ppuStack_368;
  undefined8 **ppuStack_360;
  undefined8 ***pppuStack_358;
  undefined8 ***pppuStack_350;
  undefined8 *puStack_340;
  undefined8 ***apppuStack_338 [2];
  char cStack_321;
  undefined4 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined1 *puStack_270;
  code *pcStack_268;
  undefined1 uStack_259;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined1 ***pppuStack_228;
  undefined1 **ppuStack_220;
  long lStack_218;
  undefined8 **ppuStack_210;
  undefined8 uStack_208;
  char cStack_1f9;
  char cStack_1f1;
  undefined1 auStack_1f0 [8];
  undefined8 uStack_1e8;
  undefined8 auStack_1d8 [3];
  undefined8 **ppuStack_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 *puStack_1a8;
  undefined8 **ppuStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 **ppuStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *apuStack_138 [2];
  char cStack_121;
  undefined8 uStack_118;
  char cStack_101;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 *apuStack_e8 [3];
  undefined8 auStack_d0 [2];
  char acStack_b9 [9];
  undefined8 auStack_b0 [2];
  char acStack_99 [9];
  long alStack_90 [6];
  
  alStack_90[5] = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a81de8(apuStack_138,&DAT_10f638ab2,param_2 + 0x38);
  func_0x0001004c669c(&ppuStack_1c0,apuStack_138,1,&ppuStack_1a0);
  ppuStack_1a0 = apuStack_e8;
  func_0x000100482ae0(&ppuStack_1a0);
  func_0x000100482900(auStack_100,uStack_f8);
  if (cStack_101 < '\0') {
    __ZdlPv(uStack_118);
  }
  if (cStack_121 < '\0') {
    __ZdlPv(apuStack_138[0]);
  }
  if ((*(uint *)(param_2 + 0xe8) & 1) != 0) {
    uVar3 = (ulong)(uint)((int)*(uint *)(param_2 + 0xe8) >> 1);
    FUN_104add41c();
    uStack_240 = uVar3;
    FUN_104a81bf8(apuStack_138,&DAT_10f6856fe,&uStack_240);
    func_0x0001004c669c(&ppuStack_1a0,apuStack_138,1,&puStack_1a8);
    func_0x00010002b024(&ppuStack_210,&DAT_10f6856fe);
    pppuVar4 = &ppuStack_1c0;
    pppuStack_228 = (undefined1 ***)&ppuStack_210;
    FUN_104a81f70(pppuVar4,&ppuStack_210,&UNK_10dd5b8f9,&pppuStack_228,&uStack_258);
    pppuVar10 = pppuVar4 + 0xc;
    *(undefined4 *)(pppuVar4 + 7) = 5;
    func_0x000100482900(pppuVar4 + 0xb,*pppuVar10);
    ppuVar7 = ppuStack_198;
    pppuVar4[0xb] = ppuStack_1a0;
    pppuVar4[0xc] = ppuVar7;
    ppuVar1 = ppuStack_190;
    pppuVar4[0xd] = ppuStack_190;
    if (ppuVar1 == (undefined8 **)0x0) {
      pppuVar4[0xb] = pppuVar10;
    }
    else {
      ppuVar7[2] = pppuVar10;
      ppuStack_1a0 = &ppuStack_198;
      ppuStack_198 = (undefined8 **)0x0;
      ppuStack_190 = (undefined8 **)0x0;
      ppuVar7 = (undefined8 **)0x0;
    }
    if (cStack_1f9 < '\0') {
      __ZdlPv(ppuStack_210,ppuVar7);
      ppuVar7 = ppuStack_198;
    }
    func_0x000100482900(&ppuStack_1a0,ppuVar7);
    ppuStack_210 = apuStack_e8;
    func_0x000100482ae0(&ppuStack_210);
    func_0x000100482900(auStack_100,uStack_f8);
    if (cStack_101 < '\0') {
      __ZdlPv(uStack_118);
    }
    if (cStack_121 < '\0') {
      __ZdlPv(apuStack_138[0]);
    }
  }
  FUN_104aab794(&ppuStack_210,param_2 + 0x70);
  if ((int)ppuStack_210 != 0) {
    func_0x00010002b024(apuStack_138,&DAT_10f35cf1f);
    pppuVar4 = &ppuStack_1c0;
    ppuStack_1a0 = apuStack_138;
    FUN_104a81f70(pppuVar4,apuStack_138,&UNK_10dd5b8f9,&ppuStack_1a0,&pppuStack_228);
    func_0x0001004829b8(pppuVar4 + 7,&ppuStack_210);
    if (cStack_121 < '\0') {
      __ZdlPv(apuStack_138[0]);
    }
  }
  FUN_104aac17c(param_2 + 0x50,&ppuStack_1c0);
  __ZNSt3__19to_stringEl(&uStack_258,*(undefined8 *)(param_2 + 0x18));
  func_0x00010002b024(&ppuStack_1a0,&DAT_10f398457);
  lStack_170 = lStack_248;
  uStack_188 = 4;
  uStack_178 = uStack_250;
  uStack_180 = uStack_258;
  uStack_258 = 0;
  uStack_250 = 0;
  lStack_248 = 0;
  puStack_168 = &uStack_160;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_150 = 0;
  func_0x0001004c669c(&uStack_240,&ppuStack_1a0,1,&uStack_259);
  FUN_104a81e3c(apuStack_138,&DAT_10f416301,&uStack_240);
  func_0x000104a81eac(auStack_d0,"data",&ppuStack_1c0);
  func_0x0001004c669c(&pppuStack_228,apuStack_138,2,&puStack_1a8);
  lVar11 = 0;
  do {
    puStack_1a8 = (undefined8 *)((long)alStack_90 + lVar11 + 0x10);
    func_0x000100482ae0(&puStack_1a8);
    func_0x000100482900(acStack_99 + lVar11 + 1,*(undefined8 *)((long)alStack_90 + lVar11));
    if (acStack_99[lVar11] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_b0 + lVar11));
    }
    if (acStack_b9[lVar11] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_d0 + lVar11));
    }
    lVar11 = lVar11 + -0x68;
  } while (lVar11 != -0xd0);
  func_0x000100482900(&uStack_240,uStack_238);
  puStack_1a8 = &uStack_150;
  func_0x000100482ae0(&puStack_1a8);
  func_0x000100482900(&puStack_168,uStack_160);
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if ((long)ppuStack_190 < 0) {
    __ZdlPv(ppuStack_1a0);
  }
  if (lStack_248 < 0) {
    __ZdlPv(uStack_258);
  }
  FUN_104aaca18(param_2,&pppuStack_228);
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined1 ****)(param_1 + 8) = pppuStack_228;
  plVar9 = (long *)(param_1 + 10);
  *plVar9 = (long)ppuStack_220;
  *(long *)(param_1 + 0xc) = lStack_218;
  if (lStack_218 == 0) {
    *(long **)(param_1 + 8) = plVar9;
  }
  else {
    pppuStack_228 = &ppuStack_220;
    ppuStack_220[2] = (undefined1 *)plVar9;
    ppuStack_220 = (undefined1 **)0x0;
    lStack_218 = 0;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  func_0x000100482900(&pppuStack_228,ppuStack_220);
  apuStack_138[0] = auStack_1d8;
  func_0x000100482ae0(apuStack_138);
  func_0x000100482900(auStack_1f0,uStack_1e8);
  if (cStack_1f1 < '\0') {
    __ZdlPv(uStack_208);
  }
  ppppuVar12 = (undefined8 ****)&ppuStack_1c0;
  func_0x000100482900(ppppuVar12,pppuStack_1b8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_90[5]) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_1f9 < '\0') {
    __ZdlPv(ppuStack_210);
  }
  func_0x000100482900(&ppuStack_1a0,ppuStack_198);
  func_0x000104a77414(apuStack_138);
  func_0x000100482900(&ppuStack_1c0);
  ppppuVar5 = ppppuVar12;
  __Unwind_Resume();
  pcStack_268 = FUN_104aaca18;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_3a0 = ppppuVar5 + 0x1e;
  pppuStack_398 = pppuStack_1b8;
  puStack_270 = &stack0xfffffffffffffff0;
  func_0x000100460448();
  ppppuVar8 = (undefined8 ****)pppuStack_1b8;
  if (ppppuVar5[0x2b] != (undefined8 ***)0x0) {
    ppuStack_360 = (undefined8 ***)0x0;
    pppuStack_358 = (undefined8 ***)0x0;
    pppuStack_350 = (undefined8 ***)0x0;
    ppppuVar12 = (undefined8 ****)ppppuVar5[0x29];
    if (ppppuVar12 != ppppuVar5 + 0x2a) {
      do {
        __ZNSt3__19to_stringEl(&uStack_390,ppppuVar12[4]);
        func_0x00010002b024(apppuStack_338,"subchannelId");
        uStack_320 = 4;
        uStack_310 = uStack_388;
        uStack_318 = uStack_390;
        lStack_308 = lStack_380;
        uStack_390 = 0;
        uStack_388 = 0;
        lStack_380 = 0;
        uStack_2f8 = 0;
        uStack_2f0 = 0;
        uStack_2e0 = 0;
        uStack_2d8 = 0;
        uStack_2e8 = 0;
        puStack_300 = &uStack_2f8;
        func_0x0001004c669c(&pppuStack_378,apppuStack_338,1,&puStack_340);
        if (pppuStack_358 < pppuStack_350) {
          *(undefined4 *)pppuStack_358 = 5;
          pppuStack_358[2] = (undefined8 **)0x0;
          pppuStack_358[3] = (undefined8 **)0x0;
          pppuStack_358[1] = (undefined8 **)0x0;
          pppuVar4 = pppuStack_358 + 5;
          *pppuVar4 = ppuStack_370;
          pppuStack_358[4] = pppuStack_378;
          pppuStack_358[6] = ppuStack_368;
          if (ppuStack_368 == (undefined8 **)0x0) {
            pppuStack_358[4] = pppuVar4;
          }
          else {
            ppuStack_370[2] = pppuVar4;
            ppuStack_370 = (undefined8 ***)0x0;
            ppuStack_368 = (undefined8 **)0x0;
            pppuStack_378 = &ppuStack_370;
          }
          pppuStack_358[7] = (undefined8 **)0x0;
          pppuStack_358[8] = (undefined8 **)0x0;
          pppuVar4 = pppuStack_358 + 10;
          pppuStack_358[9] = (undefined8 **)0x0;
        }
        else {
          pppuVar4 = &ppuStack_360;
          FUN_104aaed70(pppuVar4,&pppuStack_378);
        }
        pppuStack_358 = pppuVar4;
        func_0x000100482900(&pppuStack_378,ppuStack_370);
        puStack_340 = &uStack_2e8;
        func_0x000100482ae0(&puStack_340);
        func_0x000100482900(&puStack_300,uStack_2f8);
        if (lStack_308 < 0) {
          __ZdlPv(uStack_318);
        }
        if (cStack_321 < '\0') {
          __ZdlPv(apppuStack_338[0]);
        }
        if (lStack_380 < 0) {
          __ZdlPv(uStack_390);
        }
        ppppuVar8 = (undefined8 ****)ppppuVar12[1];
        ppppuVar6 = ppppuVar12;
        if ((undefined8 ****)ppppuVar12[1] == (undefined8 ****)0x0) {
          do {
            ppppuVar12 = (undefined8 ****)ppppuVar6[2];
            bVar2 = (undefined8 ****)*ppppuVar12 != ppppuVar6;
            ppppuVar6 = ppppuVar12;
          } while (bVar2);
        }
        else {
          do {
            ppppuVar12 = ppppuVar8;
            ppppuVar8 = (undefined8 ****)*ppppuVar12;
          } while ((undefined8 ****)*ppppuVar12 != (undefined8 ****)0x0);
        }
      } while (ppppuVar12 != ppppuVar5 + 0x2a);
    }
    ppppuVar12 = apppuStack_338;
    func_0x00010002b024(apppuStack_338,"subchannelRef");
    ppppuVar8 = apppuStack_338;
    ppppuVar6 = (undefined8 ****)pppuStack_398;
    pppuStack_378 = ppppuVar12;
    FUN_104a81f70(pppuStack_398,ppppuVar8,&UNK_10dd5b8f9,&pppuStack_378,&uStack_390);
    *(undefined4 *)(ppppuVar6 + 7) = 6;
    FUN_104a7781c(ppppuVar6 + 0xe);
    ppppuVar6[0xf] = pppuStack_358;
    ppppuVar6[0xe] = (undefined8 ***)ppuStack_360;
    ppppuVar6[0x10] = pppuStack_350;
    pppuStack_358 = (undefined8 ***)0x0;
    pppuStack_350 = (undefined8 ***)0x0;
    ppuStack_360 = (undefined8 **)0x0;
    if (cStack_321 < '\0') {
      __ZdlPv(apppuStack_338[0]);
    }
    apppuStack_338[0] = &ppuStack_360;
    func_0x000100482ae0(apppuStack_338);
  }
  if (ppppuVar5[0x28] != (undefined8 ***)0x0) {
    ppuStack_360 = (undefined8 ***)0x0;
    pppuStack_358 = (undefined8 ***)0x0;
    pppuStack_350 = (undefined8 ***)0x0;
    ppppuVar12 = (undefined8 ****)ppppuVar5[0x26];
    if (ppppuVar12 != ppppuVar5 + 0x27) {
      do {
        __ZNSt3__19to_stringEl(&uStack_390,ppppuVar12[4]);
        func_0x00010002b024(apppuStack_338,&DAT_10f398457);
        uStack_320 = 4;
        uStack_310 = uStack_388;
        uStack_318 = uStack_390;
        lStack_308 = lStack_380;
        uStack_390 = 0;
        uStack_388 = 0;
        lStack_380 = 0;
        uStack_2f8 = 0;
        uStack_2f0 = 0;
        uStack_2e0 = 0;
        uStack_2d8 = 0;
        uStack_2e8 = 0;
        puStack_300 = &uStack_2f8;
        func_0x0001004c669c(&pppuStack_378,apppuStack_338,1,&puStack_340);
        if (pppuStack_358 < pppuStack_350) {
          *(undefined4 *)pppuStack_358 = 5;
          pppuStack_358[2] = (undefined8 **)0x0;
          pppuStack_358[3] = (undefined8 **)0x0;
          pppuStack_358[1] = (undefined8 **)0x0;
          pppuVar4 = pppuStack_358 + 5;
          *pppuVar4 = ppuStack_370;
          pppuStack_358[4] = pppuStack_378;
          pppuStack_358[6] = ppuStack_368;
          if (ppuStack_368 == (undefined8 **)0x0) {
            pppuStack_358[4] = pppuVar4;
          }
          else {
            ppuStack_370[2] = pppuVar4;
            ppuStack_370 = (undefined8 ***)0x0;
            ppuStack_368 = (undefined8 **)0x0;
            pppuStack_378 = &ppuStack_370;
          }
          pppuStack_358[7] = (undefined8 **)0x0;
          pppuStack_358[8] = (undefined8 **)0x0;
          pppuVar4 = pppuStack_358 + 10;
          pppuStack_358[9] = (undefined8 **)0x0;
        }
        else {
          pppuVar4 = &ppuStack_360;
          FUN_104aaed70(pppuVar4,&pppuStack_378);
        }
        pppuStack_358 = pppuVar4;
        func_0x000100482900(&pppuStack_378,ppuStack_370);
        puStack_340 = &uStack_2e8;
        func_0x000100482ae0(&puStack_340);
        func_0x000100482900(&puStack_300,uStack_2f8);
        if (lStack_308 < 0) {
          __ZdlPv(uStack_318);
        }
        if (cStack_321 < '\0') {
          __ZdlPv(apppuStack_338[0]);
        }
        if (lStack_380 < 0) {
          __ZdlPv(uStack_390);
        }
        ppppuVar8 = (undefined8 ****)ppppuVar12[1];
        ppppuVar6 = ppppuVar12;
        if ((undefined8 ****)ppppuVar12[1] == (undefined8 ****)0x0) {
          do {
            ppppuVar12 = (undefined8 ****)ppppuVar6[2];
            bVar2 = (undefined8 ****)*ppppuVar12 != ppppuVar6;
            ppppuVar6 = ppppuVar12;
          } while (bVar2);
        }
        else {
          do {
            ppppuVar12 = ppppuVar8;
            ppppuVar8 = (undefined8 ****)*ppppuVar12;
          } while ((undefined8 ****)*ppppuVar12 != (undefined8 ****)0x0);
        }
      } while (ppppuVar12 != ppppuVar5 + 0x27);
    }
    ppppuVar12 = apppuStack_338;
    func_0x00010002b024(apppuStack_338,"channelRef");
    ppppuVar8 = apppuStack_338;
    ppppuVar5 = (undefined8 ****)pppuStack_398;
    pppuStack_378 = ppppuVar12;
    FUN_104a81f70(pppuStack_398,ppppuVar8,&UNK_10dd5b8f9,&pppuStack_378,&uStack_390);
    *(undefined4 *)(ppppuVar5 + 7) = 6;
    FUN_104a7781c(ppppuVar5 + 0xe);
    ppppuVar5[0xf] = pppuStack_358;
    ppppuVar5[0xe] = (undefined8 ***)ppuStack_360;
    ppppuVar5[0x10] = pppuStack_350;
    pppuStack_358 = (undefined8 ***)0x0;
    pppuStack_350 = (undefined8 ***)0x0;
    ppuStack_360 = (undefined8 **)0x0;
    if (cStack_321 < '\0') {
      __ZdlPv(apppuStack_338[0]);
    }
    apppuStack_338[0] = &ppuStack_360;
    func_0x000100482ae0(apppuStack_338);
  }
  ppppuVar5 = (undefined8 ****)pppuStack_3a0;
  func_0x000100466b80();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d0) {
    ___stack_chk_fail();
    if (cStack_321 < '\0') {
      __ZdlPv(apppuStack_338[0]);
    }
    apppuStack_338[0] = &ppuStack_360;
    func_0x000100482ae0(apppuStack_338);
    func_0x000100466b80(pppuStack_3a0);
    __Unwind_Resume(ppppuVar5);
    ppppuVar6 = ppppuVar5;
    FUN_104bd46a0(ppppuVar5);
    pcStack_3a8 = FUN_104aacf80;
    pppuStack_3c8 = ppppuVar8;
    pppuStack_3c0 = ppppuVar5;
    pppuStack_3b8 = ppppuVar12;
    ppuStack_3b0 = &puStack_270;
    func_0x000100460448(ppppuVar6 + 0x1e);
    func_0x0001078f1ffc(ppppuVar6 + 0x29,&pppuStack_3c8);
    func_0x000100466b80(ppppuVar6 + 0x1e);
    return;
  }
  return;
}



/* Entry: 104aaca18; end: 104aacf7f;  */

void FUN_104aaca18(long param_1,undefined8 ***param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 **ppuVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  long lVar6;
  undefined8 ***unaff_x19;
  long *plVar7;
  long *plVar8;
  undefined8 **ppuStack_168;
  long lStack_160;
  undefined8 **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  undefined8 **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 **ppuStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 *puStack_e0;
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_140 = param_1 + 0xf0;
  ppuStack_138 = param_2;
  func_0x000100460448();
  if (*(long *)(param_1 + 0x158) != 0) {
    puStack_100 = (undefined8 **)0x0;
    ppuStack_f8 = (undefined8 **)0x0;
    ppuStack_f0 = (undefined8 **)0x0;
    plVar8 = *(long **)(param_1 + 0x148);
    if (plVar8 != (long *)(param_1 + 0x150)) {
      do {
        __ZNSt3__19to_stringEl(&uStack_130,plVar8[4]);
        func_0x00010002b024(appuStack_d8,"subchannelId");
        uStack_c0 = 4;
        uStack_b0 = uStack_128;
        uStack_b8 = uStack_130;
        lStack_a8 = lStack_120;
        uStack_130 = 0;
        uStack_128 = 0;
        lStack_120 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_88 = 0;
        puStack_a0 = &uStack_98;
        func_0x0001004c669c(&ppuStack_118,appuStack_d8,1,&puStack_e0);
        if (ppuStack_f8 < ppuStack_f0) {
          *(undefined4 *)ppuStack_f8 = 5;
          ppuStack_f8[2] = (undefined8 *)0x0;
          ppuStack_f8[3] = (undefined8 *)0x0;
          ppuStack_f8[1] = (undefined8 *)0x0;
          ppuVar3 = ppuStack_f8 + 5;
          *ppuVar3 = puStack_110;
          ppuStack_f8[4] = ppuStack_118;
          ppuStack_f8[6] = puStack_108;
          if (puStack_108 == (undefined8 *)0x0) {
            ppuStack_f8[4] = ppuVar3;
          }
          else {
            puStack_110[2] = ppuVar3;
            puStack_110 = (undefined8 **)0x0;
            puStack_108 = (undefined8 *)0x0;
            ppuStack_118 = &puStack_110;
          }
          ppuStack_f8[7] = (undefined8 *)0x0;
          ppuStack_f8[8] = (undefined8 *)0x0;
          ppuVar3 = ppuStack_f8 + 10;
          ppuStack_f8[9] = (undefined8 *)0x0;
        }
        else {
          ppuVar3 = &puStack_100;
          FUN_104aaed70(ppuVar3,&ppuStack_118);
        }
        ppuStack_f8 = ppuVar3;
        func_0x000100482900(&ppuStack_118,puStack_110);
        puStack_e0 = &uStack_88;
        func_0x000100482ae0(&puStack_e0);
        func_0x000100482900(&puStack_a0,uStack_98);
        if (lStack_a8 < 0) {
          __ZdlPv(uStack_b8);
        }
        if (cStack_c1 < '\0') {
          __ZdlPv(appuStack_d8[0]);
        }
        if (lStack_120 < 0) {
          __ZdlPv(uStack_130);
        }
        plVar1 = (long *)plVar8[1];
        plVar7 = plVar8;
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar8 = (long *)plVar7[2];
            bVar2 = (long *)*plVar8 != plVar7;
            plVar7 = plVar8;
          } while (bVar2);
        }
        else {
          do {
            plVar8 = plVar1;
            plVar1 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      } while (plVar8 != (long *)(param_1 + 0x150));
    }
    unaff_x19 = appuStack_d8;
    func_0x00010002b024(appuStack_d8,"subchannelRef");
    param_2 = appuStack_d8;
    pppuVar4 = (undefined8 ***)ppuStack_138;
    ppuStack_118 = unaff_x19;
    FUN_104a81f70(ppuStack_138,param_2,&UNK_10dd5b8f9,&ppuStack_118,&uStack_130);
    *(undefined4 *)(pppuVar4 + 7) = 6;
    FUN_104a7781c(pppuVar4 + 0xe);
    pppuVar4[0xf] = ppuStack_f8;
    pppuVar4[0xe] = (undefined8 **)puStack_100;
    pppuVar4[0x10] = ppuStack_f0;
    ppuStack_f8 = (undefined8 **)0x0;
    ppuStack_f0 = (undefined8 **)0x0;
    puStack_100 = (undefined8 *)0x0;
    if (cStack_c1 < '\0') {
      __ZdlPv(appuStack_d8[0]);
    }
    appuStack_d8[0] = &puStack_100;
    func_0x000100482ae0(appuStack_d8);
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    puStack_100 = (undefined8 **)0x0;
    ppuStack_f8 = (undefined8 **)0x0;
    ppuStack_f0 = (undefined8 **)0x0;
    plVar8 = *(long **)(param_1 + 0x130);
    if (plVar8 != (long *)(param_1 + 0x138)) {
      do {
        __ZNSt3__19to_stringEl(&uStack_130,plVar8[4]);
        func_0x00010002b024(appuStack_d8,&DAT_10f398457);
        uStack_c0 = 4;
        uStack_b0 = uStack_128;
        uStack_b8 = uStack_130;
        lStack_a8 = lStack_120;
        uStack_130 = 0;
        uStack_128 = 0;
        lStack_120 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_88 = 0;
        puStack_a0 = &uStack_98;
        func_0x0001004c669c(&ppuStack_118,appuStack_d8,1,&puStack_e0);
        if (ppuStack_f8 < ppuStack_f0) {
          *(undefined4 *)ppuStack_f8 = 5;
          ppuStack_f8[2] = (undefined8 *)0x0;
          ppuStack_f8[3] = (undefined8 *)0x0;
          ppuStack_f8[1] = (undefined8 *)0x0;
          ppuVar3 = ppuStack_f8 + 5;
          *ppuVar3 = puStack_110;
          ppuStack_f8[4] = ppuStack_118;
          ppuStack_f8[6] = puStack_108;
          if (puStack_108 == (undefined8 *)0x0) {
            ppuStack_f8[4] = ppuVar3;
          }
          else {
            puStack_110[2] = ppuVar3;
            puStack_110 = (undefined8 **)0x0;
            puStack_108 = (undefined8 *)0x0;
            ppuStack_118 = &puStack_110;
          }
          ppuStack_f8[7] = (undefined8 *)0x0;
          ppuStack_f8[8] = (undefined8 *)0x0;
          ppuVar3 = ppuStack_f8 + 10;
          ppuStack_f8[9] = (undefined8 *)0x0;
        }
        else {
          ppuVar3 = &puStack_100;
          FUN_104aaed70(ppuVar3,&ppuStack_118);
        }
        ppuStack_f8 = ppuVar3;
        func_0x000100482900(&ppuStack_118,puStack_110);
        puStack_e0 = &uStack_88;
        func_0x000100482ae0(&puStack_e0);
        func_0x000100482900(&puStack_a0,uStack_98);
        if (lStack_a8 < 0) {
          __ZdlPv(uStack_b8);
        }
        if (cStack_c1 < '\0') {
          __ZdlPv(appuStack_d8[0]);
        }
        if (lStack_120 < 0) {
          __ZdlPv(uStack_130);
        }
        plVar1 = (long *)plVar8[1];
        plVar7 = plVar8;
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar8 = (long *)plVar7[2];
            bVar2 = (long *)*plVar8 != plVar7;
            plVar7 = plVar8;
          } while (bVar2);
        }
        else {
          do {
            plVar8 = plVar1;
            plVar1 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      } while (plVar8 != (long *)(param_1 + 0x138));
    }
    unaff_x19 = appuStack_d8;
    func_0x00010002b024(appuStack_d8,"channelRef");
    param_2 = appuStack_d8;
    pppuVar4 = (undefined8 ***)ppuStack_138;
    ppuStack_118 = unaff_x19;
    FUN_104a81f70(ppuStack_138,param_2,&UNK_10dd5b8f9,&ppuStack_118,&uStack_130);
    *(undefined4 *)(pppuVar4 + 7) = 6;
    FUN_104a7781c(pppuVar4 + 0xe);
    pppuVar4[0xf] = ppuStack_f8;
    pppuVar4[0xe] = (undefined8 **)puStack_100;
    pppuVar4[0x10] = ppuStack_f0;
    ppuStack_f8 = (undefined8 **)0x0;
    ppuStack_f0 = (undefined8 **)0x0;
    puStack_100 = (undefined8 *)0x0;
    if (cStack_c1 < '\0') {
      __ZdlPv(appuStack_d8[0]);
    }
    appuStack_d8[0] = &puStack_100;
    func_0x000100482ae0(appuStack_d8);
  }
  lVar5 = lStack_140;
  func_0x000100466b80();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (cStack_c1 < '\0') {
      __ZdlPv(appuStack_d8[0]);
    }
    appuStack_d8[0] = &puStack_100;
    func_0x000100482ae0(appuStack_d8);
    func_0x000100466b80(lStack_140);
    __Unwind_Resume(lVar5);
    lVar6 = lVar5;
    FUN_104bd46a0(lVar5);
    pcStack_148 = FUN_104aacf80;
    ppuStack_168 = param_2;
    lStack_160 = lVar5;
    ppuStack_158 = unaff_x19;
    puStack_150 = &stack0xfffffffffffffff0;
    func_0x000100460448(lVar6 + 0xf0);
    func_0x0001078f1ffc(lVar6 + 0x148,&ppuStack_168);
    func_0x000100466b80(lVar6 + 0xf0);
    return;
  }
  return;
}



/* Entry: 104aacf80; end: 104aacfe3;  */

void FUN_104aacf80(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x000100460448(param_1 + 0xf0);
  func_0x0001078f1ffc(param_1 + 0x148,&uStack_28);
  func_0x000100466b80(param_1 + 0xf0);
  return;
}



/* Entry: 104aacfe4; end: 104aad047;  */

void FUN_104aacfe4(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x000100460448(param_1 + 0xd0);
  FUN_104aaeec0(param_1 + 0x110,&uStack_28);
  func_0x000100466b80(param_1 + 0xd0);
  return;
}



/* Entry: 104aad048; end: 104aad35b;  */

void FUN_104aad048(undefined4 *param_1,int *param_2)

{
  long **pplVar1;
  long *plVar2;
  undefined1 *apuStack_88 [2];
  char cStack_71;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 *puStack_68;
  undefined7 uStack_60;
  char cStack_59;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 uStack_39;
  undefined1 **ppuStack_38;
  
  lStack_50 = 0;
  lStack_48 = 0;
  plStack_58 = &lStack_50;
  if (*param_2 == 2) {
    func_0x00010002b024(&uStack_70,"other_name");
    pplVar1 = &plStack_58;
    apuStack_88[0] = &uStack_70;
    FUN_104a81f70(pplVar1,&uStack_70,&UNK_10dd5b8f9,apuStack_88,&ppuStack_38);
    *(undefined4 *)(pplVar1 + 7) = 4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (pplVar1 + 8,param_2 + 2);
LAB_104aad11c:
    if (cStack_59 < '\0') {
      __ZdlPv(CONCAT71(uStack_6f,uStack_70));
    }
  }
  else if (*param_2 == 1) {
    func_0x00010002b024(&uStack_70,"standard_name");
    pplVar1 = &plStack_58;
    apuStack_88[0] = &uStack_70;
    FUN_104a81f70(pplVar1,&uStack_70,&UNK_10dd5b8f9,apuStack_88,&ppuStack_38);
    *(undefined4 *)(pplVar1 + 7) = 4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (pplVar1 + 8,param_2 + 2);
    goto LAB_104aad11c;
  }
  plVar2 = (long *)(param_2 + 8);
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    if (*(long *)(param_2 + 10) != 0) {
      plVar2 = (long *)*plVar2;
      goto LAB_104aad150;
    }
  }
  else if (*(char *)((long)param_2 + 0x37) != '\0') {
LAB_104aad150:
    func_0x00010ae8a248(&uStack_70,plVar2);
    func_0x00010002b024(apuStack_88,"local_certificate");
    pplVar1 = &plStack_58;
    ppuStack_38 = apuStack_88;
    FUN_104a81f70(pplVar1,apuStack_88,&UNK_10dd5b8f9,&ppuStack_38,&uStack_39);
    *(undefined4 *)(pplVar1 + 7) = 4;
    if (*(char *)((long)pplVar1 + 0x57) < '\0') {
      __ZdlPv(pplVar1[8]);
    }
    plVar2 = (long *)CONCAT71(uStack_6f,uStack_70);
    pplVar1[9] = puStack_68;
    pplVar1[8] = plVar2;
    pplVar1[10] = (long *)CONCAT17(cStack_59,uStack_60);
    cStack_59 = '\0';
    uStack_70 = 0;
    if ((cStack_71 < '\0') && (__ZdlPv(apuStack_88[0]), cStack_59 < '\0')) {
      __ZdlPv(CONCAT71(uStack_6f,uStack_70));
    }
  }
  plVar2 = (long *)(param_2 + 0xe);
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_104aad294;
    plVar2 = (long *)*plVar2;
  }
  else if (*(char *)((long)param_2 + 0x4f) == '\0') goto LAB_104aad294;
  func_0x00010ae8a248(&uStack_70,plVar2);
  func_0x00010002b024(apuStack_88,"remote_certificate");
  pplVar1 = &plStack_58;
  ppuStack_38 = apuStack_88;
  FUN_104a81f70(pplVar1,apuStack_88,&UNK_10dd5b8f9,&ppuStack_38,&uStack_39);
  *(undefined4 *)(pplVar1 + 7) = 4;
  if (*(char *)((long)pplVar1 + 0x57) < '\0') {
    __ZdlPv(pplVar1[8]);
  }
  plVar2 = (long *)CONCAT71(uStack_6f,uStack_70);
  pplVar1[9] = puStack_68;
  pplVar1[8] = plVar2;
  pplVar1[10] = (long *)CONCAT17(cStack_59,uStack_60);
  cStack_59 = '\0';
  uStack_70 = 0;
  if ((cStack_71 < '\0') && (__ZdlPv(apuStack_88[0]), cStack_59 < '\0')) {
    __ZdlPv(CONCAT71(uStack_6f,uStack_70));
  }
LAB_104aad294:
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = plStack_58;
  plVar2 = (long *)(param_1 + 10);
  *plVar2 = lStack_50;
  *(long *)(param_1 + 0xc) = lStack_48;
  if (lStack_48 == 0) {
    *(long **)(param_1 + 8) = plVar2;
  }
  else {
    *(long **)(lStack_50 + 0x10) = plVar2;
    lStack_50 = 0;
    lStack_48 = 0;
    plStack_58 = &lStack_50;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  func_0x000100482900(&plStack_58,lStack_50);
  return;
}



/* Entry: 104aad35c; end: 104aad547;  */

void FUN_104aad35c(undefined4 *param_1,long param_2)

{
  long **pplVar1;
  long *plVar2;
  undefined8 *apuStack_c0 [2];
  char cStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char cStack_91;
  char cStack_89;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 auStack_70 [3];
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  lStack_50 = 0;
  lStack_48 = 0;
  plStack_58 = &lStack_50;
  if (*(int *)(param_2 + 0x10) == 2) {
    if (*(char *)(param_2 + 0xc0) == '\0') goto LAB_104aad488;
    func_0x00010002b024(&uStack_a8,"other");
    pplVar1 = &plStack_58;
    apuStack_c0[0] = &uStack_a8;
    FUN_104a81f70(pplVar1,&uStack_a8,&UNK_10dd5b8f9,apuStack_c0,&puStack_38);
    func_0x0001004c67f8(pplVar1 + 7,param_2 + 0x70);
  }
  else {
    if ((*(int *)(param_2 + 0x10) != 1) || (*(char *)(param_2 + 0x68) == '\0')) goto LAB_104aad488;
    FUN_104aad048(&uStack_a8,param_2 + 0x18);
    func_0x00010002b024(apuStack_c0,&DAT_10f5fab24);
    pplVar1 = &plStack_58;
    puStack_38 = (undefined1 *)apuStack_c0;
    FUN_104a81f70(pplVar1,apuStack_c0,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
    func_0x0001004829b8(pplVar1 + 7,&uStack_a8);
    if (cStack_a9 < '\0') {
      __ZdlPv(apuStack_c0[0]);
    }
    apuStack_c0[0] = auStack_70;
    func_0x000100482ae0(apuStack_c0);
    func_0x000100482900(auStack_88,uStack_80);
    uStack_a8 = uStack_a0;
    cStack_91 = cStack_89;
  }
  if (cStack_91 < '\0') {
    __ZdlPv(uStack_a8);
  }
LAB_104aad488:
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = plStack_58;
  plVar2 = (long *)(param_1 + 10);
  *plVar2 = lStack_50;
  *(long *)(param_1 + 0xc) = lStack_48;
  if (lStack_48 == 0) {
    *(long **)(param_1 + 8) = plVar2;
  }
  else {
    *(long **)(lStack_50 + 0x10) = plVar2;
    lStack_50 = 0;
    lStack_48 = 0;
    plStack_58 = &lStack_50;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  func_0x000100482900(&plStack_58,lStack_50);
  return;
}



/* Entry: 104aad548; end: 104aad5b7;  */

void FUN_104aad548(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_2 + 0x38);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x000100467750();
  *(undefined8 *)(param_2 + 0x70) = param_1;
  return;
}



/* Entry: 104aad5b8; end: 104aae0ff;  */

undefined8 **** FUN_104aad5b8(undefined4 *param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined8 ******ppppppuVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  long **pplVar7;
  code *pcVar8;
  undefined8 ****ppppuVar9;
  undefined1 ***pppuVar10;
  char *pcVar11;
  undefined8 ****ppppuVar12;
  undefined8 ***pppuVar13;
  undefined8 *****pppppuVar14;
  long *plVar15;
  undefined8 ******ppppppuVar16;
  long *plVar17;
  int *piVar18;
  int iVar19;
  undefined8 **ppuVar20;
  long lVar21;
  undefined8 ****ppppuVar22;
  int *piVar23;
  undefined1 *apuStack_590 [2];
  char cStack_579;
  undefined1 uStack_571;
  undefined8 *****pppppuStack_570;
  undefined8 ****ppppuStack_568;
  long **pplStack_560;
  undefined8 auStack_558 [2];
  char cStack_541;
  undefined8 *****pppppuStack_540;
  ulong uStack_538;
  byte bStack_529;
  ulong uStack_528;
  undefined4 uStack_51c;
  undefined8 *****pppppuStack_518;
  long lStack_510;
  undefined8 uStack_508;
  undefined8 *****pppppuStack_500;
  undefined8 uStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  int iStack_4e0;
  undefined4 uStack_4dc;
  long lStack_4d8;
  char cStack_4c9;
  undefined8 uStack_4b0;
  ulong uStack_4a8;
  byte bStack_499;
  undefined8 ***pppuStack_450;
  long **pplStack_448;
  long **pplStack_440;
  long lStack_438;
  undefined1 uStack_429;
  undefined1 **ppuStack_428;
  undefined8 *****apppppuStack_420 [2];
  char cStack_409;
  undefined8 uStack_400;
  char cStack_3e9;
  undefined1 auStack_3e8 [8];
  undefined8 uStack_3e0;
  undefined8 ****appppuStack_3d0 [3];
  undefined8 auStack_3b8 [2];
  char acStack_3a1 [9];
  undefined8 auStack_398 [2];
  char acStack_381 [9];
  undefined8 auStack_378 [2];
  undefined1 auStack_368 [24];
  undefined8 *****pppppuStack_350;
  undefined8 ****ppppuStack_348;
  long **pplStack_340;
  long lStack_2c8;
  undefined1 uStack_261;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined1 **ppuStack_248;
  undefined8 uStack_240;
  undefined1 **ppuStack_230;
  undefined1 *puStack_228;
  long lStack_220;
  undefined8 ***pppuStack_218;
  long **pplStack_210;
  undefined8 uStack_208;
  undefined1 *puStack_200;
  undefined1 *apuStack_1f8 [2];
  char cStack_1e1;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 auStack_190 [2];
  char acStack_179 [9];
  undefined8 auStack_170 [2];
  char acStack_159 [9];
  undefined8 auStack_150 [2];
  undefined1 auStack_140 [24];
  undefined1 uStack_128;
  undefined7 uStack_127;
  long **pplStack_120;
  undefined7 uStack_118;
  char cStack_111;
  char cStack_109;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f0 [48];
  undefined8 auStack_c0 [2];
  char acStack_a9 [9];
  undefined8 auStack_a0 [2];
  char acStack_89 [9];
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_218 = &pplStack_210;
  pplStack_210 = (long **)0x0;
  uStack_208 = 0;
  if (*(long *)(param_2 + 0x38) != 0) {
    __ZNSt3__19to_stringEx(&uStack_128);
    func_0x00010002b024(apuStack_1f8,"streamsStarted");
    ppppuVar9 = &pppuStack_218;
    ppuStack_230 = apuStack_1f8;
    FUN_104a81f70(ppppuVar9,apuStack_1f8,&UNK_10dd5b8f9,&ppuStack_230,&ppuStack_248);
    *(undefined4 *)(ppppuVar9 + 7) = 4;
    if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
      __ZdlPv(ppppuVar9[8]);
    }
    pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
    ppppuVar9[9] = (undefined8 ***)pplStack_120;
    ppppuVar9[8] = pppuVar13;
    ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
    cStack_111 = '\0';
    uStack_128 = 0;
    if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
    if (*(double *)(param_2 + 0x68) != 0.0) {
      FUN_104a6f610();
      func_0x0001004673f0();
      FUN_104a6ed68(&uStack_128);
      func_0x00010002b024(apuStack_1f8,"lastLocalStreamCreatedTimestamp");
      ppppuVar9 = &pppuStack_218;
      ppuStack_230 = apuStack_1f8;
      FUN_104a81f70(ppppuVar9,apuStack_1f8,&UNK_10dd5b8f9,&ppuStack_230,&ppuStack_248);
      *(undefined4 *)(ppppuVar9 + 7) = 4;
      if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
        __ZdlPv(ppppuVar9[8]);
      }
      pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
      ppppuVar9[9] = (undefined8 ***)pplStack_120;
      ppppuVar9[8] = pppuVar13;
      ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
      cStack_111 = '\0';
      uStack_128 = 0;
      if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
        __ZdlPv(CONCAT71(uStack_127,uStack_128));
      }
    }
    if (*(double *)(param_2 + 0x70) != 0.0) {
      FUN_104a6f610();
      func_0x0001004673f0();
      FUN_104a6ed68(&uStack_128);
      func_0x00010002b024(apuStack_1f8,"lastRemoteStreamCreatedTimestamp");
      ppppuVar9 = &pppuStack_218;
      ppuStack_230 = apuStack_1f8;
      FUN_104a81f70(ppppuVar9,apuStack_1f8,&UNK_10dd5b8f9,&ppuStack_230,&ppuStack_248);
      *(undefined4 *)(ppppuVar9 + 7) = 4;
      if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
        __ZdlPv(ppppuVar9[8]);
      }
      pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
      ppppuVar9[9] = (undefined8 ***)pplStack_120;
      ppppuVar9[8] = pppuVar13;
      ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
      cStack_111 = '\0';
      uStack_128 = 0;
      if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
        __ZdlPv(CONCAT71(uStack_127,uStack_128));
      }
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    __ZNSt3__19to_stringEx(&uStack_128);
    func_0x00010002b024(apuStack_1f8,"streamsSucceeded");
    ppppuVar9 = &pppuStack_218;
    ppuStack_230 = apuStack_1f8;
    FUN_104a81f70(ppppuVar9,apuStack_1f8,&UNK_10dd5b8f9,&ppuStack_230,&ppuStack_248);
    *(undefined4 *)(ppppuVar9 + 7) = 4;
    if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
      __ZdlPv(ppppuVar9[8]);
    }
    pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
    ppppuVar9[9] = (undefined8 ***)pplStack_120;
    ppppuVar9[8] = pppuVar13;
    ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
    cStack_111 = '\0';
    uStack_128 = 0;
    if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    __ZNSt3__19to_stringEx(&uStack_128);
    func_0x00010002b024(apuStack_1f8,"streamsFailed");
    ppppuVar9 = &pppuStack_218;
    ppuStack_230 = apuStack_1f8;
    FUN_104a81f70(ppppuVar9,apuStack_1f8,&UNK_10dd5b8f9,&ppuStack_230,&ppuStack_248);
    *(undefined4 *)(ppppuVar9 + 7) = 4;
    if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
      __ZdlPv(ppppuVar9[8]);
    }
    pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
    ppppuVar9[9] = (undefined8 ***)pplStack_120;
    ppppuVar9[8] = pppuVar13;
    ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
    cStack_111 = '\0';
    uStack_128 = 0;
    if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
  }
  if (*(long *)(param_2 + 0x50) != 0) {
    __ZNSt3__19to_stringEx(&uStack_128);
    func_0x00010002b024(apuStack_1f8,"messagesSent");
    ppppuVar9 = &pppuStack_218;
    ppuStack_230 = apuStack_1f8;
    FUN_104a81f70(ppppuVar9,apuStack_1f8,&UNK_10dd5b8f9,&ppuStack_230,&ppuStack_248);
    *(undefined4 *)(ppppuVar9 + 7) = 4;
    if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
      __ZdlPv(ppppuVar9[8]);
    }
    pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
    ppppuVar9[9] = (undefined8 ***)pplStack_120;
    ppppuVar9[8] = pppuVar13;
    ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
    cStack_111 = '\0';
    uStack_128 = 0;
    if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
    FUN_104a6f610(*(undefined8 *)(param_2 + 0x78));
    func_0x0001004673f0();
    FUN_104a6ed68(&uStack_128);
    func_0x00010002b024(apuStack_1f8,"lastMessageSentTimestamp");
    ppppuVar9 = &pppuStack_218;
    ppuStack_230 = apuStack_1f8;
    FUN_104a81f70(ppppuVar9,apuStack_1f8,&UNK_10dd5b8f9,&ppuStack_230,&ppuStack_248);
    *(undefined4 *)(ppppuVar9 + 7) = 4;
    if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
      __ZdlPv(ppppuVar9[8]);
    }
    pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
    ppppuVar9[9] = (undefined8 ***)pplStack_120;
    ppppuVar9[8] = pppuVar13;
    ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
    cStack_111 = '\0';
    uStack_128 = 0;
    if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
  }
  if (*(long *)(param_2 + 0x58) != 0) {
    __ZNSt3__19to_stringEx(&uStack_128);
    func_0x00010002b024(apuStack_1f8,"messagesReceived");
    ppppuVar9 = &pppuStack_218;
    ppuStack_230 = apuStack_1f8;
    FUN_104a81f70(ppppuVar9,apuStack_1f8,&UNK_10dd5b8f9,&ppuStack_230,&ppuStack_248);
    *(undefined4 *)(ppppuVar9 + 7) = 4;
    if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
      __ZdlPv(ppppuVar9[8]);
    }
    pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
    ppppuVar9[9] = (undefined8 ***)pplStack_120;
    ppppuVar9[8] = pppuVar13;
    ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
    cStack_111 = '\0';
    uStack_128 = 0;
    if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
    FUN_104a6f610(*(undefined8 *)(param_2 + 0x80));
    func_0x0001004673f0();
    FUN_104a6ed68(&uStack_128);
    func_0x00010002b024(apuStack_1f8,"lastMessageReceivedTimestamp");
    ppppuVar9 = &pppuStack_218;
    ppuStack_230 = apuStack_1f8;
    FUN_104a81f70(ppppuVar9,apuStack_1f8,&UNK_10dd5b8f9,&ppuStack_230,&ppuStack_248);
    *(undefined4 *)(ppppuVar9 + 7) = 4;
    if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
      __ZdlPv(ppppuVar9[8]);
    }
    pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
    ppppuVar9[9] = (undefined8 ***)pplStack_120;
    ppppuVar9[8] = pppuVar13;
    ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
    cStack_111 = '\0';
    uStack_128 = 0;
    if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
  }
  if (*(long *)(param_2 + 0x60) != 0) {
    __ZNSt3__19to_stringEx(&uStack_128);
    func_0x00010002b024(apuStack_1f8,"keepAlivesSent");
    ppppuVar9 = &pppuStack_218;
    ppuStack_230 = apuStack_1f8;
    FUN_104a81f70(ppppuVar9,apuStack_1f8,&UNK_10dd5b8f9,&ppuStack_230,&ppuStack_248);
    *(undefined4 *)(ppppuVar9 + 7) = 4;
    if (*(char *)((long)ppppuVar9 + 0x57) < '\0') {
      __ZdlPv(ppppuVar9[8]);
    }
    pppuVar13 = (undefined8 ***)CONCAT71(uStack_127,uStack_128);
    ppppuVar9[9] = (undefined8 ***)pplStack_120;
    ppppuVar9[8] = pppuVar13;
    ppppuVar9[10] = (undefined8 ***)CONCAT17(cStack_111,uStack_118);
    cStack_111 = '\0';
    uStack_128 = 0;
    if ((cStack_1e1 < '\0') && (__ZdlPv(apuStack_1f8[0]), cStack_111 < '\0')) {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
  }
  __ZNSt3__19to_stringEl(&uStack_260,*(undefined8 *)(param_2 + 0x18));
  func_0x00010002b024(apuStack_1f8,"socketId");
  uStack_1c8 = lStack_250;
  uStack_1e0 = 4;
  uStack_1d0 = uStack_258;
  uStack_1d8 = uStack_260;
  uStack_260 = 0;
  uStack_258 = 0;
  lStack_250 = 0;
  puStack_1c0 = &uStack_1b8;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_1a8 = 0;
  FUN_104a81f1c(auStack_190,&DAT_10f68f148,param_2 + 0x20);
  func_0x0001004c669c(&ppuStack_248,apuStack_1f8,2,&uStack_261);
  FUN_104a81e3c(&uStack_128,&DAT_10f416301,&ppuStack_248);
  func_0x000104a81eac(auStack_c0,"data",&pppuStack_218);
  func_0x0001004c669c(&ppuStack_230,&uStack_128,2,&puStack_200);
  lVar21 = 0;
  do {
    puStack_200 = auStack_70 + lVar21;
    func_0x000100482ae0(&puStack_200);
    func_0x000100482900(acStack_89 + lVar21 + 1,*(undefined8 *)((long)auStack_80 + lVar21));
    if (acStack_89[lVar21] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_a0 + lVar21));
    }
    if (acStack_a9[lVar21] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_c0 + lVar21));
    }
    lVar21 = lVar21 + -0x68;
  } while (lVar21 != -0xd0);
  func_0x000100482900(&ppuStack_248,uStack_240);
  lVar21 = 0;
  do {
    puStack_200 = auStack_140 + lVar21;
    func_0x000100482ae0(&puStack_200);
    func_0x000100482900(acStack_159 + lVar21 + 1,*(undefined8 *)((long)auStack_150 + lVar21));
    if (acStack_159[lVar21] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar21));
    }
    if (acStack_179[lVar21] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar21));
    }
    lVar21 = lVar21 + -0x68;
  } while (lVar21 != -0xd0);
  if (lStack_250 < 0) {
    __ZdlPv(uStack_260);
  }
  if ((*(long *)(param_2 + 0xb8) != 0) && (*(int *)(*(long *)(param_2 + 0xb8) + 0x10) != 0)) {
    FUN_104aad35c(&uStack_128);
    func_0x00010002b024(apuStack_1f8,"security");
    pppuVar10 = &ppuStack_230;
    ppuStack_248 = apuStack_1f8;
    FUN_104a81f70(pppuVar10,apuStack_1f8,&UNK_10dd5b8f9,&ppuStack_248,&uStack_260);
    func_0x0001004829b8(pppuVar10 + 7,&uStack_128);
    if (cStack_1e1 < '\0') {
      __ZdlPv(apuStack_1f8[0]);
    }
    apuStack_1f8[0] = auStack_f0;
    func_0x000100482ae0(apuStack_1f8);
    func_0x000100482900(auStack_108,uStack_100);
    if (cStack_109 < '\0') {
      __ZdlPv(pplStack_120);
    }
  }
  plVar15 = (long *)(param_2 + 0xa0);
  if (*(char *)(param_2 + 0xb7) < '\0') {
    plVar15 = (long *)*plVar15;
  }
  FUN_104aae100(&ppuStack_230,&DAT_10f2cc10e,plVar15);
  plVar15 = (long *)(param_2 + 0x88);
  if (*(char *)(param_2 + 0x9f) < '\0') {
    plVar15 = (long *)*plVar15;
  }
  FUN_104aae100(&ppuStack_230,"local");
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined1 ***)(param_1 + 8) = ppuStack_230;
  plVar17 = (long *)(param_1 + 10);
  *plVar17 = (long)puStack_228;
  *(long *)(param_1 + 0xc) = lStack_220;
  if (lStack_220 == 0) {
    *(long **)(param_1 + 8) = plVar17;
  }
  else {
    ppuStack_230 = &puStack_228;
    *(long **)(puStack_228 + 0x10) = plVar17;
    puStack_228 = (undefined1 *)0x0;
    lStack_220 = 0;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  func_0x000100482900(&ppuStack_230,puStack_228);
  ppppuVar9 = &pppuStack_218;
  func_0x000100482900(ppppuVar9,pplStack_210);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppppuVar9;
  }
  ___stack_chk_fail();
  if (cStack_1e1 < '\0') {
    __ZdlPv(apuStack_1f8[0]);
  }
  FUN_104a773c0(&uStack_128);
  func_0x000100482900(&ppuStack_230,puStack_228);
  pppuVar13 = (undefined8 ***)pplStack_210;
  func_0x000100482900(&pppuStack_218);
  __Unwind_Resume();
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_438 = (long)plVar15;
  if (plVar15 == (long *)0x0) goto LAB_104aae340;
  pplStack_448 = (long **)0x0;
  pplStack_440 = (long **)0x0;
  lVar21 = (long)plVar15;
  pppuStack_450 = &pplStack_448;
  _strlen(plVar15);
  func_0x00010047ae00(&lStack_4e8,plVar15,lVar21);
  if (lStack_4e8 == 0) {
    piVar23 = &iStack_4e0;
    if (cStack_4c9 < '\0') {
      if (lStack_4d8 == 4) {
        piVar18 = (int *)CONCAT44(uStack_4dc,iStack_4e0);
        iVar19 = *(int *)CONCAT44(uStack_4dc,iStack_4e0);
        goto LAB_104aae390;
      }
LAB_104aae4ac:
      if (cStack_4c9 < '\0') {
        if (lStack_4d8 != 4) goto LAB_104aae170;
        piVar23 = (int *)CONCAT44(uStack_4dc,iStack_4e0);
      }
      else {
LAB_104aae4b8:
        if (cStack_4c9 != '\x04') goto LAB_104aae170;
      }
      if (*piVar23 != 0x78696e75) goto LAB_104aae170;
      FUN_104aaeb1c(apppppuStack_420,&DAT_10f3eb489,&uStack_4b0);
      func_0x0001004c669c(&pppppuStack_350,apppppuStack_420,1,auStack_558);
      func_0x00010002b024(&pppppuStack_500,"uds_address");
      ppppuVar12 = &pppuStack_450;
      pppppuStack_518 = &pppppuStack_500;
      FUN_104a81f70(ppppuVar12,&pppppuStack_500,&UNK_10dd5b8f9,&pppppuStack_518,&pppppuStack_540);
      goto LAB_104aae1cc;
    }
    piVar18 = piVar23;
    iVar19 = iStack_4e0;
    if (cStack_4c9 != '\x04') goto LAB_104aae4b8;
LAB_104aae390:
    if ((iVar19 != 0x34767069) && (*piVar18 != 0x36767069)) goto LAB_104aae4ac;
    pppppuStack_500 = (undefined8 ******)0x0;
    uStack_4f8 = 0;
    lStack_4f0 = 0;
    pppppuStack_518 = (undefined8 ******)0x0;
    lStack_510 = 0;
    uStack_508 = 0;
    pcVar11 = uStack_4b0;
    if (-1 < (char)bStack_499) {
      uStack_4a8 = (ulong)bStack_499;
      pcVar11 = (char *)&uStack_4b0;
    }
    if (uStack_4a8 == 0) {
      uStack_4a8 = 0;
    }
    else {
      pcVar3 = (char *)((long)&uStack_4b0 + 1);
      if ((char)bStack_499 < '\0') {
        pcVar3 = uStack_4b0 + 1;
      }
      if (*pcVar11 == '/') {
        pcVar11 = pcVar3;
        uStack_4a8 = uStack_4a8 - 1;
      }
    }
    func_0x0001004c2450(pcVar11,uStack_4a8,&pppppuStack_500,&pppppuStack_518);
    if (((ulong)pcVar11 & 1) == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channelz.cc"
                          ,0x1b1,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x104aae7b0);
      (*pcVar8)();
    }
    uStack_51c = 0xffffffff;
    if (uStack_508 < 0) {
      ppppppuVar16 = (undefined8 ******)pppppuStack_518;
      if (lStack_510 != 0) goto LAB_104aae440;
LAB_104aae450:
      ppppppuVar16 = (undefined8 ******)0xffffffff;
    }
    else {
      if (uStack_508._7_1_ == '\0') goto LAB_104aae450;
      ppppppuVar16 = &pppppuStack_518;
LAB_104aae440:
      _atoi();
      uStack_51c = SUB84(ppppppuVar16,0);
    }
    ppppppuVar2 = (undefined8 ******)pppppuStack_500;
    if (-1 < lStack_4f0) {
      ppppppuVar2 = &pppppuStack_500;
    }
    FUN_104aa9678(&uStack_528,&pppppuStack_350,ppppppuVar2,ppppppuVar16);
    if (uStack_528 != 0) {
      if ((uStack_528 & 1) != 0) {
        func_0x00010084dad0();
      }
      if (uStack_508 < 0) {
        __ZdlPv(pppppuStack_518);
      }
      if (lStack_4f0 < 0) {
        __ZdlPv(pppppuStack_500);
      }
      if (lStack_4e8 != 0) goto LAB_104aae170;
      goto LAB_104aae4ac;
    }
    FUN_104aa9af0(&pppppuStack_540,&pppppuStack_350);
    ppppppuVar16 = (undefined8 ******)pppppuStack_540;
    if (-1 < (char)bStack_529) {
      uStack_538 = (ulong)bStack_529;
      ppppppuVar16 = &pppppuStack_540;
    }
    func_0x00010ae8a248(auStack_558,ppppppuVar16,uStack_538);
    FUN_104aaea5c(apppppuStack_420,&DAT_10f3f0b49,&uStack_51c);
    FUN_104aaeac8(auStack_3b8,&DAT_10f498442,auStack_558);
    func_0x0001004c669c(&pppppuStack_570,apppppuStack_420,2,&uStack_571);
    func_0x00010002b024(apuStack_590,"tcpip_address");
    ppppuVar12 = &pppuStack_450;
    ppuStack_428 = apuStack_590;
    FUN_104a81f70(ppppuVar12,apuStack_590,&UNK_10dd5b8f9,&ppuStack_428,&uStack_429);
    ppppuVar22 = ppppuVar12 + 0xc;
    *(undefined4 *)(ppppuVar12 + 7) = 5;
    func_0x000100482900(ppppuVar12 + 0xb,*ppppuVar22);
    pppppuVar14 = (undefined8 *****)ppppuStack_568;
    ppppuVar12[0xb] = pppppuStack_570;
    ppppuVar12[0xc] = pppppuVar14;
    pplVar6 = pplStack_560;
    ppppuVar12[0xd] = (undefined8 ***)pplStack_560;
    if ((undefined8 ***)pplVar6 == (undefined8 ***)0x0) {
      ppppuVar12[0xb] = ppppuVar22;
    }
    else {
      pppppuVar14[2] = ppppuVar22;
      pppppuStack_570 = &ppppuStack_568;
      ppppuStack_568 = (undefined8 *****)0x0;
      pplStack_560 = (long **)0x0;
      pppppuVar14 = (undefined8 *****)0x0;
    }
    if (cStack_579 < '\0') {
      __ZdlPv(apuStack_590[0],pppppuVar14);
      pppppuVar14 = (undefined8 *****)ppppuStack_568;
    }
    func_0x000100482900(&pppppuStack_570,pppppuVar14);
    lVar21 = 0;
    do {
      apuStack_590[0] = auStack_368 + lVar21;
      func_0x000100482ae0(apuStack_590);
      func_0x000100482900(acStack_381 + lVar21 + 1,*(undefined8 *)((long)auStack_378 + lVar21));
      if (acStack_381[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_398 + lVar21));
      }
      if (acStack_3a1[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3b8 + lVar21));
      }
      lVar21 = lVar21 + -0x68;
    } while (lVar21 != -0xd0);
    func_0x00010002b024(apppppuStack_420,pppuVar13);
    pppppuStack_570 = apppppuStack_420;
    FUN_104a81f70(ppppuVar9,apppppuStack_420,&UNK_10dd5b8f9,&pppppuStack_570,apuStack_590);
    ppppuVar12 = ppppuVar9 + 0xc;
    *(undefined4 *)(ppppuVar9 + 7) = 5;
    func_0x000100482900(ppppuVar9 + 0xb,*ppppuVar12);
    pplVar6 = pplStack_448;
    ppppuVar9[0xb] = pppuStack_450;
    ppppuVar9[0xc] = (undefined8 ***)pplVar6;
    pplVar7 = pplStack_440;
    ppppuVar9[0xd] = (undefined8 ***)pplStack_440;
    if ((undefined8 ***)pplVar7 == (undefined8 ***)0x0) {
      ppppuVar9[0xb] = ppppuVar12;
    }
    else {
      pplVar6[2] = (long *)ppppuVar12;
      pplStack_448 = (long **)0x0;
      pplStack_440 = (long **)0x0;
      pppuStack_450 = &pplStack_448;
    }
    if (cStack_409 < '\0') {
      __ZdlPv(apppppuStack_420[0]);
    }
    if (cStack_541 < '\0') {
      __ZdlPv(auStack_558[0]);
    }
    if ((char)bStack_529 < '\0') {
      __ZdlPv(pppppuStack_540);
    }
    if ((uStack_528 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (uStack_508 < 0) {
      __ZdlPv(pppppuStack_518);
    }
    ppppppuVar16 = (undefined8 ******)pppppuStack_500;
    if (lStack_4f0 < 0) goto LAB_104aae328;
  }
  else {
LAB_104aae170:
    FUN_104aaeb70(apppppuStack_420,&DAT_10f68f148,&lStack_438);
    func_0x0001004c669c(&pppppuStack_350,apppppuStack_420,1,auStack_558);
    func_0x00010002b024(&pppppuStack_500,"other_address");
    ppppuVar12 = &pppuStack_450;
    pppppuStack_518 = &pppppuStack_500;
    FUN_104a81f70(ppppuVar12,&pppppuStack_500,&UNK_10dd5b8f9,&pppppuStack_518,&pppppuStack_540);
LAB_104aae1cc:
    ppppuVar22 = ppppuVar12 + 0xc;
    *(undefined4 *)(ppppuVar12 + 7) = 5;
    func_0x000100482900(ppppuVar12 + 0xb,*ppppuVar22);
    pppppuVar14 = (undefined8 *****)ppppuStack_348;
    ppppuVar12[0xb] = pppppuStack_350;
    ppppuVar12[0xc] = pppppuVar14;
    pplVar6 = pplStack_340;
    ppppuVar12[0xd] = (undefined8 ***)pplStack_340;
    if ((undefined8 ***)pplVar6 == (undefined8 ***)0x0) {
      ppppuVar12[0xb] = ppppuVar22;
    }
    else {
      pppppuVar14[2] = ppppuVar22;
      pppppuStack_350 = &ppppuStack_348;
      ppppuStack_348 = (undefined8 *****)0x0;
      pplStack_340 = (long **)0x0;
      pppppuVar14 = (undefined8 *****)0x0;
    }
    if (lStack_4f0 < 0) {
      __ZdlPv(pppppuStack_500,pppppuVar14);
      pppppuVar14 = (undefined8 *****)ppppuStack_348;
    }
    func_0x000100482900(&pppppuStack_350,pppppuVar14);
    pppppuStack_500 = appppuStack_3d0;
    func_0x000100482ae0(&pppppuStack_500);
    func_0x000100482900(auStack_3e8,uStack_3e0);
    if (cStack_3e9 < '\0') {
      __ZdlPv(uStack_400);
    }
    if (cStack_409 < '\0') {
      __ZdlPv(apppppuStack_420[0]);
    }
    func_0x00010002b024(apppppuStack_420,pppuVar13);
    pppppuStack_350 = apppppuStack_420;
    FUN_104a81f70(ppppuVar9,apppppuStack_420,&UNK_10dd5b8f9,&pppppuStack_350,&pppppuStack_500);
    ppppuVar12 = ppppuVar9 + 0xc;
    *(undefined4 *)(ppppuVar9 + 7) = 5;
    func_0x000100482900(ppppuVar9 + 0xb,*ppppuVar12);
    pplVar6 = pplStack_448;
    ppppuVar9[0xb] = pppuStack_450;
    ppppuVar9[0xc] = (undefined8 ***)pplVar6;
    pplVar7 = pplStack_440;
    ppppuVar9[0xd] = (undefined8 ***)pplStack_440;
    if ((undefined8 ***)pplVar7 == (undefined8 ***)0x0) {
      ppppuVar9[0xb] = ppppuVar12;
    }
    else {
      pplVar6[2] = (long *)ppppuVar12;
      pplStack_448 = (long **)0x0;
      pplStack_440 = (long **)0x0;
      pppuStack_450 = &pplStack_448;
    }
    ppppppuVar16 = (undefined8 ******)apppppuStack_420[0];
    if (cStack_409 < '\0') {
LAB_104aae328:
      __ZdlPv(ppppppuVar16);
    }
  }
  func_0x00010047cac8(&lStack_4e8);
  ppppuVar9 = &pppuStack_450;
  pppuVar13 = (undefined8 ***)pplStack_448;
  func_0x000100482900();
LAB_104aae340:
  iVar19 = (int)pppuVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
    ___stack_chk_fail();
    if (iVar19 != 0) {
      FUN_104bd46a0();
      if (cStack_409 < '\0') {
        __ZdlPv(apppppuStack_420[0]);
      }
      if (cStack_541 < '\0') {
        __ZdlPv(auStack_558[0]);
      }
      if ((char)bStack_529 < '\0') {
        __ZdlPv(pppppuStack_540);
      }
      func_0x0001004bdf74(&uStack_528);
      if (uStack_508 < 0) {
        __ZdlPv(pppppuStack_518);
      }
      if (lStack_4f0 < 0) {
        __ZdlPv(pppppuStack_500);
      }
      func_0x00010047cac8(&lStack_4e8);
      func_0x000100482900(&pppuStack_450,pplStack_448);
    }
    __Unwind_Resume();
    *ppppuVar9 = (undefined8 ***)&PTR_FUN_1107c4b28;
    pppuVar13 = ppppuVar9[0x17];
    if (pppuVar13 != (undefined8 ***)0x0) {
      pppuVar1 = pppuVar13 + 1;
      do {
        ppuVar20 = *pppuVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar5) {
          *pppuVar1 = (undefined8 **)((long)ppuVar20 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((undefined8 **)((long)ppuVar20 + -1) == (undefined8 **)0x0) {
        (*(code *)(*pppuVar13)[1])();
      }
    }
    if (*(char *)((long)ppppuVar9 + 0xb7) < '\0') {
      __ZdlPv(ppppuVar9[0x14]);
    }
    if (*(char *)((long)ppppuVar9 + 0x9f) < '\0') {
      __ZdlPv(ppppuVar9[0x11]);
    }
    *ppppuVar9 = (undefined8 ***)&PTR_FUN_1107c4ac0;
    func_0x00010047dc18();
    FUN_104aaeff4();
    if (*(char *)((long)ppppuVar9 + 0x37) < '\0') {
      __ZdlPv(ppppuVar9[4]);
    }
    return ppppuVar9;
  }
  return ppppuVar9;
}



/* Entry: 104aae100; end: 104aae93b;  */

undefined8 **** FUN_104aae100(undefined8 ****param_1,undefined8 ***param_2,long param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ******ppppppuVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  code *pcVar7;
  char *pcVar8;
  undefined8 ****ppppuVar9;
  undefined8 ***pppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 ******ppppppuVar12;
  int *piVar13;
  int iVar14;
  undefined8 **ppuVar15;
  undefined8 ****ppppuVar16;
  int *piVar17;
  long lVar18;
  undefined1 *apuStack_320 [2];
  char cStack_309;
  undefined1 uStack_301;
  undefined8 *****pppppuStack_300;
  undefined8 ****ppppuStack_2f8;
  long **pplStack_2f0;
  undefined8 auStack_2e8 [2];
  char cStack_2d1;
  undefined8 *****pppppuStack_2d0;
  ulong uStack_2c8;
  byte bStack_2b9;
  ulong uStack_2b8;
  undefined4 uStack_2ac;
  undefined8 *****pppppuStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 *****pppppuStack_290;
  undefined8 uStack_288;
  long lStack_280;
  long lStack_278;
  int iStack_270;
  undefined4 uStack_26c;
  long lStack_268;
  char cStack_259;
  undefined8 uStack_240;
  ulong uStack_238;
  byte bStack_229;
  undefined8 ***pppuStack_1e0;
  long **pplStack_1d8;
  long **pplStack_1d0;
  long lStack_1c8;
  undefined1 uStack_1b9;
  undefined1 **ppuStack_1b8;
  undefined8 *****apppppuStack_1b0 [2];
  char cStack_199;
  undefined8 uStack_190;
  char cStack_179;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 ****appppuStack_160 [3];
  undefined8 auStack_148 [2];
  char acStack_131 [9];
  undefined8 auStack_128 [2];
  char acStack_111 [9];
  undefined8 auStack_108 [2];
  undefined1 auStack_f8 [24];
  undefined8 *****pppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  long **pplStack_d0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1c8 = param_3;
  if (param_3 == 0) goto LAB_104aae340;
  pplStack_1d8 = (long **)0x0;
  pplStack_1d0 = (long **)0x0;
  lVar18 = param_3;
  pppuStack_1e0 = &pplStack_1d8;
  _strlen(param_3);
  func_0x00010047ae00(&lStack_278,param_3,lVar18);
  if (lStack_278 == 0) {
    piVar17 = &iStack_270;
    if (cStack_259 < '\0') {
      if (lStack_268 == 4) {
        piVar13 = (int *)CONCAT44(uStack_26c,iStack_270);
        iVar14 = *(int *)CONCAT44(uStack_26c,iStack_270);
        goto LAB_104aae390;
      }
LAB_104aae4ac:
      if (cStack_259 < '\0') {
        if (lStack_268 != 4) goto LAB_104aae170;
        piVar17 = (int *)CONCAT44(uStack_26c,iStack_270);
      }
      else {
LAB_104aae4b8:
        if (cStack_259 != '\x04') goto LAB_104aae170;
      }
      if (*piVar17 != 0x78696e75) goto LAB_104aae170;
      FUN_104aaeb1c(apppppuStack_1b0,&DAT_10f3eb489,&uStack_240);
      func_0x0001004c669c(&pppppuStack_e0,apppppuStack_1b0,1,auStack_2e8);
      func_0x00010002b024(&pppppuStack_290,"uds_address");
      ppppuVar9 = &pppuStack_1e0;
      pppppuStack_2a8 = &pppppuStack_290;
      FUN_104a81f70(ppppuVar9,&pppppuStack_290,&UNK_10dd5b8f9,&pppppuStack_2a8,&pppppuStack_2d0);
      goto LAB_104aae1cc;
    }
    piVar13 = piVar17;
    iVar14 = iStack_270;
    if (cStack_259 != '\x04') goto LAB_104aae4b8;
LAB_104aae390:
    if ((iVar14 != 0x34767069) && (*piVar13 != 0x36767069)) goto LAB_104aae4ac;
    pppppuStack_290 = (undefined8 ******)0x0;
    uStack_288 = 0;
    lStack_280 = 0;
    pppppuStack_2a8 = (undefined8 ******)0x0;
    lStack_2a0 = 0;
    uStack_298 = 0;
    pcVar8 = uStack_240;
    if (-1 < (char)bStack_229) {
      uStack_238 = (ulong)bStack_229;
      pcVar8 = (char *)&uStack_240;
    }
    if (uStack_238 == 0) {
      uStack_238 = 0;
    }
    else {
      pcVar3 = (char *)((long)&uStack_240 + 1);
      if ((char)bStack_229 < '\0') {
        pcVar3 = uStack_240 + 1;
      }
      if (*pcVar8 == '/') {
        pcVar8 = pcVar3;
        uStack_238 = uStack_238 - 1;
      }
    }
    func_0x0001004c2450(pcVar8,uStack_238,&pppppuStack_290,&pppppuStack_2a8);
    if (((ulong)pcVar8 & 1) == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channelz.cc"
                          ,0x1b1,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x104aae7b0);
      (*pcVar7)();
    }
    uStack_2ac = 0xffffffff;
    if (uStack_298 < 0) {
      ppppppuVar12 = (undefined8 ******)pppppuStack_2a8;
      if (lStack_2a0 == 0) goto LAB_104aae450;
LAB_104aae440:
      _atoi();
      uStack_2ac = SUB84(ppppppuVar12,0);
    }
    else {
      if (uStack_298._7_1_ != '\0') {
        ppppppuVar12 = &pppppuStack_2a8;
        goto LAB_104aae440;
      }
LAB_104aae450:
      ppppppuVar12 = (undefined8 ******)0xffffffff;
    }
    ppppppuVar2 = (undefined8 ******)pppppuStack_290;
    if (-1 < lStack_280) {
      ppppppuVar2 = &pppppuStack_290;
    }
    FUN_104aa9678(&uStack_2b8,&pppppuStack_e0,ppppppuVar2,ppppppuVar12);
    if (uStack_2b8 != 0) {
      if ((uStack_2b8 & 1) != 0) {
        func_0x00010084dad0();
      }
      if (uStack_298 < 0) {
        __ZdlPv(pppppuStack_2a8);
      }
      if (lStack_280 < 0) {
        __ZdlPv(pppppuStack_290);
      }
      if (lStack_278 != 0) goto LAB_104aae170;
      goto LAB_104aae4ac;
    }
    FUN_104aa9af0(&pppppuStack_2d0,&pppppuStack_e0);
    ppppppuVar12 = (undefined8 ******)pppppuStack_2d0;
    if (-1 < (char)bStack_2b9) {
      uStack_2c8 = (ulong)bStack_2b9;
      ppppppuVar12 = &pppppuStack_2d0;
    }
    func_0x00010ae8a248(auStack_2e8,ppppppuVar12,uStack_2c8);
    FUN_104aaea5c(apppppuStack_1b0,&DAT_10f3f0b49,&uStack_2ac);
    FUN_104aaeac8(auStack_148,&DAT_10f498442,auStack_2e8);
    func_0x0001004c669c(&pppppuStack_300,apppppuStack_1b0,2,&uStack_301);
    func_0x00010002b024(apuStack_320,"tcpip_address");
    ppppuVar9 = &pppuStack_1e0;
    ppuStack_1b8 = apuStack_320;
    FUN_104a81f70(ppppuVar9,apuStack_320,&UNK_10dd5b8f9,&ppuStack_1b8,&uStack_1b9);
    ppppuVar16 = ppppuVar9 + 0xc;
    *(undefined4 *)(ppppuVar9 + 7) = 5;
    func_0x000100482900(ppppuVar9 + 0xb,*ppppuVar16);
    pppppuVar11 = (undefined8 *****)ppppuStack_2f8;
    ppppuVar9[0xb] = pppppuStack_300;
    ppppuVar9[0xc] = pppppuVar11;
    pplVar6 = pplStack_2f0;
    ppppuVar9[0xd] = (undefined8 ***)pplStack_2f0;
    if ((undefined8 ***)pplVar6 == (undefined8 ***)0x0) {
      ppppuVar9[0xb] = ppppuVar16;
    }
    else {
      pppppuVar11[2] = ppppuVar16;
      pppppuStack_300 = &ppppuStack_2f8;
      ppppuStack_2f8 = (undefined8 *****)0x0;
      pplStack_2f0 = (long **)0x0;
      pppppuVar11 = (undefined8 *****)0x0;
    }
    if (cStack_309 < '\0') {
      __ZdlPv(apuStack_320[0],pppppuVar11);
      pppppuVar11 = (undefined8 *****)ppppuStack_2f8;
    }
    func_0x000100482900(&pppppuStack_300,pppppuVar11);
    lVar18 = 0;
    do {
      apuStack_320[0] = auStack_f8 + lVar18;
      func_0x000100482ae0(apuStack_320);
      func_0x000100482900(acStack_111 + lVar18 + 1,*(undefined8 *)((long)auStack_108 + lVar18));
      if (acStack_111[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_128 + lVar18));
      }
      if (acStack_131[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_148 + lVar18));
      }
      lVar18 = lVar18 + -0x68;
    } while (lVar18 != -0xd0);
    func_0x00010002b024(apppppuStack_1b0,param_2);
    pppppuStack_300 = apppppuStack_1b0;
    FUN_104a81f70(param_1,apppppuStack_1b0,&UNK_10dd5b8f9,&pppppuStack_300,apuStack_320);
    ppppuVar9 = param_1 + 0xc;
    *(undefined4 *)(param_1 + 7) = 5;
    func_0x000100482900(param_1 + 0xb,*ppppuVar9);
    param_1[0xb] = pppuStack_1e0;
    param_1[0xc] = (undefined8 ***)pplStack_1d8;
    param_1[0xd] = (undefined8 ***)pplStack_1d0;
    if ((undefined8 ***)pplStack_1d0 == (undefined8 ***)0x0) {
      param_1[0xb] = ppppuVar9;
    }
    else {
      pplStack_1d8[2] = (long *)ppppuVar9;
      pplStack_1d8 = (long **)0x0;
      pplStack_1d0 = (long **)0x0;
      pppuStack_1e0 = &pplStack_1d8;
    }
    if (cStack_199 < '\0') {
      __ZdlPv(apppppuStack_1b0[0]);
    }
    if (cStack_2d1 < '\0') {
      __ZdlPv(auStack_2e8[0]);
    }
    if ((char)bStack_2b9 < '\0') {
      __ZdlPv(pppppuStack_2d0);
    }
    if ((uStack_2b8 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (uStack_298 < 0) {
      __ZdlPv(pppppuStack_2a8);
    }
    ppppppuVar12 = (undefined8 ******)pppppuStack_290;
    if (lStack_280 < 0) goto LAB_104aae328;
  }
  else {
LAB_104aae170:
    FUN_104aaeb70(apppppuStack_1b0,&DAT_10f68f148,&lStack_1c8);
    func_0x0001004c669c(&pppppuStack_e0,apppppuStack_1b0,1,auStack_2e8);
    func_0x00010002b024(&pppppuStack_290,"other_address");
    ppppuVar9 = &pppuStack_1e0;
    pppppuStack_2a8 = &pppppuStack_290;
    FUN_104a81f70(ppppuVar9,&pppppuStack_290,&UNK_10dd5b8f9,&pppppuStack_2a8,&pppppuStack_2d0);
LAB_104aae1cc:
    ppppuVar16 = ppppuVar9 + 0xc;
    *(undefined4 *)(ppppuVar9 + 7) = 5;
    func_0x000100482900(ppppuVar9 + 0xb,*ppppuVar16);
    pppppuVar11 = (undefined8 *****)ppppuStack_d8;
    ppppuVar9[0xb] = pppppuStack_e0;
    ppppuVar9[0xc] = pppppuVar11;
    pplVar6 = pplStack_d0;
    ppppuVar9[0xd] = (undefined8 ***)pplStack_d0;
    if ((undefined8 ***)pplVar6 == (undefined8 ***)0x0) {
      ppppuVar9[0xb] = ppppuVar16;
    }
    else {
      pppppuVar11[2] = ppppuVar16;
      pppppuStack_e0 = &ppppuStack_d8;
      ppppuStack_d8 = (undefined8 *****)0x0;
      pplStack_d0 = (long **)0x0;
      pppppuVar11 = (undefined8 *****)0x0;
    }
    if (lStack_280 < 0) {
      __ZdlPv(pppppuStack_290,pppppuVar11);
      pppppuVar11 = (undefined8 *****)ppppuStack_d8;
    }
    func_0x000100482900(&pppppuStack_e0,pppppuVar11);
    pppppuStack_290 = appppuStack_160;
    func_0x000100482ae0(&pppppuStack_290);
    func_0x000100482900(auStack_178,uStack_170);
    if (cStack_179 < '\0') {
      __ZdlPv(uStack_190);
    }
    if (cStack_199 < '\0') {
      __ZdlPv(apppppuStack_1b0[0]);
    }
    func_0x00010002b024(apppppuStack_1b0,param_2);
    pppppuStack_e0 = apppppuStack_1b0;
    FUN_104a81f70(param_1,apppppuStack_1b0,&UNK_10dd5b8f9,&pppppuStack_e0,&pppppuStack_290);
    ppppuVar9 = param_1 + 0xc;
    *(undefined4 *)(param_1 + 7) = 5;
    func_0x000100482900(param_1 + 0xb,*ppppuVar9);
    param_1[0xb] = pppuStack_1e0;
    param_1[0xc] = (undefined8 ***)pplStack_1d8;
    param_1[0xd] = (undefined8 ***)pplStack_1d0;
    if ((undefined8 ***)pplStack_1d0 == (undefined8 ***)0x0) {
      param_1[0xb] = ppppuVar9;
    }
    else {
      pplStack_1d8[2] = (long *)ppppuVar9;
      pplStack_1d8 = (long **)0x0;
      pplStack_1d0 = (long **)0x0;
      pppuStack_1e0 = &pplStack_1d8;
    }
    ppppppuVar12 = (undefined8 ******)apppppuStack_1b0[0];
    if (cStack_199 < '\0') {
LAB_104aae328:
      __ZdlPv(ppppppuVar12);
    }
  }
  func_0x00010047cac8(&lStack_278);
  param_1 = &pppuStack_1e0;
  param_2 = (undefined8 ***)pplStack_1d8;
  func_0x000100482900();
LAB_104aae340:
  iVar14 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar14 != 0) {
    FUN_104bd46a0();
    if (cStack_199 < '\0') {
      __ZdlPv(apppppuStack_1b0[0]);
    }
    if (cStack_2d1 < '\0') {
      __ZdlPv(auStack_2e8[0]);
    }
    if ((char)bStack_2b9 < '\0') {
      __ZdlPv(pppppuStack_2d0);
    }
    func_0x0001004bdf74(&uStack_2b8);
    if (uStack_298 < 0) {
      __ZdlPv(pppppuStack_2a8);
    }
    if (lStack_280 < 0) {
      __ZdlPv(pppppuStack_290);
    }
    func_0x00010047cac8(&lStack_278);
    func_0x000100482900(&pppuStack_1e0,pplStack_1d8);
  }
  __Unwind_Resume();
  *param_1 = (undefined8 ***)&PTR_FUN_1107c4b28;
  pppuVar10 = param_1[0x17];
  if (pppuVar10 != (undefined8 ***)0x0) {
    pppuVar1 = pppuVar10 + 1;
    do {
      ppuVar15 = *pppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar5) {
        *pppuVar1 = (undefined8 **)((long)ppuVar15 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((undefined8 **)((long)ppuVar15 + -1) == (undefined8 **)0x0) {
      (*(code *)(*pppuVar10)[1])();
    }
  }
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    __ZdlPv(param_1[0x11]);
  }
  *param_1 = (undefined8 ***)&PTR_FUN_1107c4ac0;
  func_0x00010047dc18();
  FUN_104aaeff4();
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 104aae93c; end: 104aae93f;  */

undefined8 * FUN_104aae93c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c4b28;
  plVar4 = (long *)param_1[0x17];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    __ZdlPv(param_1[0x11]);
  }
  *param_1 = &PTR_FUN_1107c4ac0;
  func_0x00010047dc18();
  FUN_104aaeff4();
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}


