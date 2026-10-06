/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8b54e8; end: 10b8b54ef;  */

int FUN_10b8b54e8(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  lVar4 = *(long *)(param_1 + 0x10);
  FUN_10b8a9294();
  lVar1 = *(long *)(*(long *)(lVar4 + 0x78) + 0x28);
  iVar6 = 0x7fffffff;
  for (lVar4 = *(long *)(*(long *)(lVar4 + 0x78) + 0x20); uVar2 = lVar4 == lVar1, !(bool)uVar2;
      lVar4 = lVar4 + 0x10) {
    lVar5 = lVar4;
    func_0x00010b8b589c(param_1 + 0x18);
    func_0x00010b8b68f0();
    func_0x00010b8b6564();
    iVar3 = iVar6;
    if (!(bool)uVar2) {
      iVar3 = (int)*(undefined8 *)(lVar5 + 8);
      func_0x00010b8b342c();
      if (iVar6 <= iVar3) {
        iVar3 = iVar6;
      }
    }
    iVar6 = iVar3;
  }
  return iVar6;
}



/* Entry: 10b8b54f0; end: 10b8b557b;  */

void FUN_10b8b54f0(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam00000001137fcd30 & 1) == 0) {
    iVar5 = 0x137fcd30;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c31088(0x1137fcd28,&DAT_10f415e64);
      ___cxa_guard_release(0x1137fcd30);
    }
  }
  lVar4 = lRam00000001137fcd28;
  if (lRam00000001137fcd28 != 0) {
    piVar1 = (int *)(lRam00000001137fcd28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10b8b557c; end: 10b8b557f;  */

void FUN_10b8b557c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam00000001137fcd30 & 1) == 0) {
    iVar5 = 0x137fcd30;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c31088(0x1137fcd28,&DAT_10f415e64);
      ___cxa_guard_release(0x1137fcd30);
    }
  }
  lVar4 = lRam00000001137fcd28;
  if (lRam00000001137fcd28 != 0) {
    piVar1 = (int *)(lRam00000001137fcd28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10b8b5580; end: 10b8b5657;  */

void FUN_10b8b5580(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar3 = 8;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(*param_1 + lVar2)) {
        func_0x00010b8b5d14(param_1[1] + lVar3);
        lVar1 = param_1[3];
      }
      lVar3 = lVar3 + 0x10;
    }
    __ZdlPv();
    func_0x00010b8b6774();
  }
  return;
}



/* Entry: 10b8b5658; end: 10b8b56bb;  */

void FUN_10b8b5658(int param_1)

{
  func_0x00010b8b6640();
  FUN_10b8b56bc();
  func_0x00010b8b664c();
  FUN_10b8b56e0();
  if (param_1 != 0) {
    func_0x00010b8b68c8();
  }
  return;
}



/* Entry: 10b8b56bc; end: 10b8b56df;  */

void FUN_10b8b56bc(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_10b8b5760(&lStack_18);
  return;
}



/* Entry: 10b8b56e0; end: 10b8b575f;  */

bool FUN_10b8b56e0(long param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x9;
  long extraout_x10;
  ulong extraout_x11;
  long extraout_x12;
  ulong extraout_x13;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010b8b6930();
  lVar1 = extraout_x8;
  uVar2 = extraout_x13;
  while( true ) {
    uVar2 = uVar2 & extraout_x9;
    uVar4 = *(ulong *)(extraout_x10 + uVar2);
    for (uVar3 = (uVar4 ^ extraout_x11) + extraout_x12 & (uVar4 ^ extraout_x11 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar5 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar2 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & extraout_x9;
      *param_4 = uVar5;
      if (*(long *)(*(long *)(param_1 + 8) + uVar5 * 0x10) == *param_2) goto LAB_10b8b67e0;
    }
    if ((uVar4 & ~uVar4 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar2 = lVar1 + uVar2;
  }
LAB_10b8b67e0:
  return uVar3 != 0;
}



/* Entry: 10b8b5760; end: 10b8b577b;  */

void FUN_10b8b5760(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010b8b6658(param_1,*param_2);
  return;
}



/* Entry: 10b8b577c; end: 10b8b582f;  */

undefined1  [16] FUN_10b8b577c(long *param_1,ulong *param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  ulong uVar2;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar3;
  long extraout_x10;
  long extraout_x10_00;
  long lVar4;
  long extraout_x11;
  long extraout_x11_00;
  long lVar5;
  undefined1 extraout_w12;
  undefined1 uVar6;
  ulong *puStack_40;
  long lStack_38;
  
  puStack_40 = param_2;
  lStack_38 = param_3;
  FUN_10b8b5830(&puStack_40);
  FUN_10b8b58f0(param_3 + 8);
  param_1[2] = param_1[2] + -1;
  func_0x00010b8b685c(0);
  uVar2 = extraout_x8;
  uVar3 = extraout_x9;
  lVar4 = extraout_x10;
  lVar5 = extraout_x11;
  uVar6 = extraout_w12;
  if ((!(bool)in_ZR) && ((*param_2 & ~*param_2 << 6 & 0x8080808080808080) != 0)) {
    func_0x00010b8b6958();
    uVar2 = (ulong)!(bool)in_CY;
    uVar6 = 0x80;
    uVar3 = extraout_x9_00;
    lVar4 = extraout_x10_00;
    lVar5 = extraout_x11_00;
    if ((bool)in_CY) {
      uVar6 = 0xfe;
    }
  }
  *(undefined1 *)(lVar4 + lVar5) = uVar6;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & uVar3) + 1) = uVar6;
  param_1[5] = param_1[5] + uVar2;
  auVar1._8_8_ = lStack_38;
  auVar1._0_8_ = puStack_40;
  return auVar1;
}



/* Entry: 10b8b5830; end: 10b8b58c3;  */

long * FUN_10b8b5830(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  func_0x00010b8b5864();
  return param_1;
}



/* Entry: 10b8b58c4; end: 10b8b58ef;  */

undefined1  [16] FUN_10b8b58c4(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  func_0x00010b8b5864(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b8b58f0; end: 10b8b5913;  */

undefined8 * FUN_10b8b58f0(undefined8 *param_1)

{
  FUN_10b8b5914(*param_1);
  return param_1;
}



/* Entry: 10b8b5914; end: 10b8b593f;  */

void FUN_10b8b5914(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010b8b5938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8b5940; end: 10b8b59a3;  */

void FUN_10b8b5940(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long *unaff_x20;
  
  uVar4 = (uint)param_2;
  func_0x00010b8b67bc();
  FUN_10b8b59a4();
  lVar3 = param_1;
  func_0x00010b8b6888();
  func_0x00010b8b59c8();
  if ((uVar4 & 1) != 0) {
    lVar2 = *unaff_x20;
    puVar1 = (undefined8 *)(unaff_x20[1] + lVar3 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = 0;
    *(byte *)(lVar2 + lVar3) = (byte)param_1 & 0x7f;
    func_0x00010b8b63d8();
  }
  func_0x00010b8b678c();
  return;
}



/* Entry: 10b8b59a4; end: 10b8b5a7b;  */

void FUN_10b8b59a4(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x00010b8b5a60(&lStack_18);
  return;
}



/* Entry: 10b8b5a7c; end: 10b8b5b03;  */

void FUN_10b8b5a7c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b8b6620();
  FUN_10b8b5b04();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 == 0) {
    if (*(char *)(unaff_x21 + param_1) == -2) {
      lVar1 = 0;
    }
    else {
      if ((unaff_x22 == 0) || (unaff_x22 - (unaff_x22 >> 3) >> 1 < *(ulong *)(unaff_x19 + 0x10))) {
        FUN_10b8b5b34();
      }
      else {
        func_0x00010b8b5bb8();
      }
      func_0x00010b8b6894();
      FUN_10b8b5b04();
      lVar1 = *(long *)(unaff_x19 + 0x28);
    }
  }
  func_0x00010b8b6570(lVar1);
  return;
}



/* Entry: 10b8b5b04; end: 10b8b5b33;  */

ulong FUN_10b8b5b04(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b8b5b34; end: 10b8b5caf;  */

void FUN_10b8b5b34(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  byte unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00010b8b64b4();
  func_0x00010b8b652c();
  func_0x00010b8b6674();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x00010b8b6910(uVar1);
  for (; unaff_x24 != unaff_x25; unaff_x25 = unaff_x25 + 1) {
    if (-1 < *(char *)(unaff_x19 + unaff_x25)) {
      lVar2 = unaff_x21;
      FUN_10b8b5cb0();
      func_0x00010b8b675c();
      FUN_10b8b5b04();
      *(byte *)(unaff_x23 + lVar2) = unaff_w22 & 0x7f;
      func_0x00010b8b63f0();
      func_0x00010b8b66cc();
      FUN_10b8b5ccc();
    }
    unaff_x21 = unaff_x21 + 0x10;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8b5cb0; end: 10b8b5ccb;  */

void FUN_10b8b5cb0(undefined8 *param_1)

{
  func_0x00010b8b6658(param_1,*param_1);
  return;
}



/* Entry: 10b8b5ccc; end: 10b8b5ce3;  */

undefined8 * FUN_10b8b5ccc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2 + 1;
  uVar2 = *puVar1;
  *param_1 = *param_2;
  param_1[1] = uVar2;
  *puVar1 = 0;
  func_0x0001080da468(*puVar1);
  return puVar1;
}



/* Entry: 10b8b5ce4; end: 10b8b5d9b;  */

undefined8 * FUN_10b8b5ce4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (puVar1 = param_1, FUN_10b9a5818(), ((ulong)puVar1 & 1) == 0)) {
    FUN_10b9a5890();
    func_0x0001080da468(*puVar1);
    param_1 = puVar1;
  }
  return param_1;
}



/* Entry: 10b8b5d9c; end: 10b8b5e1b;  */

bool FUN_10b8b5d9c(long param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x9;
  long extraout_x10;
  ulong extraout_x11;
  long extraout_x12;
  ulong extraout_x13;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010b8b6930();
  lVar1 = extraout_x8;
  uVar2 = extraout_x13;
  while( true ) {
    uVar2 = uVar2 & extraout_x9;
    uVar4 = *(ulong *)(extraout_x10 + uVar2);
    for (uVar3 = (uVar4 ^ extraout_x11) + extraout_x12 & (uVar4 ^ extraout_x11 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar5 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar2 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & extraout_x9;
      *param_4 = uVar5;
      if (*(long *)(*(long *)(param_1 + 8) + uVar5 * 0x10) == *param_2) goto LAB_10b8b67e0;
    }
    if ((uVar4 & ~uVar4 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar2 = lVar1 + uVar2;
  }
LAB_10b8b67e0:
  return uVar3 != 0;
}



/* Entry: 10b8b5e1c; end: 10b8b5e53;  */

void FUN_10b8b5e1c(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00010b8b66bc();
    func_0x00010b8b68fc();
    pcVar1 = extraout_x8;
  }
  return;
}



/* Entry: 10b8b5e54; end: 10b8b5e8f;  */

void FUN_10b8b5e54(undefined8 param_1,ulong *param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar1;
  ulong extraout_x8;
  ulong uVar2;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar3;
  long extraout_x10;
  long extraout_x10_00;
  long lVar4;
  long extraout_x11;
  long extraout_x11_00;
  long lVar5;
  undefined1 extraout_w12;
  undefined1 uVar6;
  
  plVar1 = (long *)(param_3 + 8);
  func_0x00010b8b5d14();
  func_0x00010b8b687c();
  plVar1[2] = plVar1[2] + -1;
  func_0x00010b8b685c(0);
  uVar2 = extraout_x8;
  uVar3 = extraout_x9;
  lVar4 = extraout_x10;
  lVar5 = extraout_x11;
  uVar6 = extraout_w12;
  if ((!(bool)in_ZR) && ((*param_2 & ~*param_2 << 6 & 0x8080808080808080) != 0)) {
    func_0x00010b8b6958();
    uVar2 = (ulong)!(bool)in_CY;
    uVar6 = 0x80;
    uVar3 = extraout_x9_00;
    lVar4 = extraout_x10_00;
    lVar5 = extraout_x11_00;
    if ((bool)in_CY) {
      uVar6 = 0xfe;
    }
  }
  *(undefined1 *)(lVar4 + lVar5) = uVar6;
  *(undefined1 *)(*plVar1 + (plVar1[3] & 7U) + (plVar1[3] & uVar3) + 1) = uVar6;
  plVar1[5] = plVar1[5] + uVar2;
  return;
}



/* Entry: 10b8b5e90; end: 10b8b5f17;  */

void FUN_10b8b5e90(long *param_1,ulong *param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  ulong uVar1;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar2;
  long extraout_x10;
  long extraout_x10_00;
  long lVar3;
  long extraout_x11;
  long extraout_x11_00;
  long lVar4;
  undefined1 extraout_w12;
  undefined1 uVar5;
  
  param_1[2] = param_1[2] + -1;
  func_0x00010b8b685c(0);
  uVar1 = extraout_x8;
  uVar2 = extraout_x9;
  lVar3 = extraout_x10;
  lVar4 = extraout_x11;
  uVar5 = extraout_w12;
  if ((!(bool)in_ZR) && ((*param_2 & ~*param_2 << 6 & 0x8080808080808080) != 0)) {
    func_0x00010b8b6958();
    uVar1 = (ulong)!(bool)in_CY;
    uVar5 = 0x80;
    uVar2 = extraout_x9_00;
    lVar3 = extraout_x10_00;
    lVar4 = extraout_x11_00;
    if ((bool)in_CY) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)(lVar3 + lVar4) = uVar5;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & uVar2) + 1) = uVar5;
  param_1[5] = param_1[5] + uVar1;
  return;
}



/* Entry: 10b8b5f18; end: 10b8b5f3b;  */

long FUN_10b8b5f18(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b8b5f80(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b8b5f3c; end: 10b8b5f7f;  */

long * FUN_10b8b5f3c(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010b8b6734();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    FUN_10b8b5914();
  }
  return param_1;
}



/* Entry: 10b8b5f80; end: 10b8b5fe3;  */

void FUN_10b8b5f80(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long *unaff_x20;
  
  uVar4 = (uint)param_2;
  func_0x00010b8b67bc();
  FUN_10b8b56bc();
  lVar3 = param_1;
  func_0x00010b8b6888();
  FUN_10b8b5fe4();
  if ((uVar4 & 1) != 0) {
    lVar2 = *unaff_x20;
    puVar1 = (undefined8 *)(unaff_x20[1] + lVar3 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = 0;
    *(byte *)(lVar2 + lVar3) = (byte)param_1 & 0x7f;
    func_0x00010b8b63d8();
  }
  func_0x00010b8b678c();
  return;
}



/* Entry: 10b8b5fe4; end: 10b8b607b;  */

undefined1  [16] FUN_10b8b5fe4(ulong param_1)

{
  undefined8 uVar1;
  ulong extraout_x8;
  ulong uVar2;
  long extraout_x9;
  long lVar3;
  ulong extraout_x10;
  long extraout_x11;
  ulong extraout_x12;
  long extraout_x13;
  long extraout_x14;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  func_0x00010b8b6500();
  uVar4 = extraout_x8;
  lVar3 = extraout_x9;
  while( true ) {
    uVar4 = uVar4 & extraout_x10;
    uVar5 = *(ulong *)(extraout_x11 + uVar4);
    for (uVar6 = (uVar5 ^ extraout_x12) + extraout_x14 & (uVar5 ^ extraout_x12 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar2 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar4 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & extraout_x10;
      if (*(long *)(*(long *)(param_1 + 8) + uVar2 * 0x10) == extraout_x13) {
        uVar1 = 0;
        goto LAB_10b8b605c;
      }
    }
    if ((uVar5 & ~uVar5 << 6 & 0x8080808080808080) != 0) break;
    lVar3 = lVar3 + 8;
    uVar4 = lVar3 + uVar4;
  }
  FUN_10b8b607c();
  uVar1 = 1;
  uVar2 = param_1;
LAB_10b8b605c:
  auVar7._8_8_ = uVar1;
  auVar7._0_8_ = uVar2;
  return auVar7;
}



/* Entry: 10b8b607c; end: 10b8b6103;  */

void FUN_10b8b607c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b8b6620();
  FUN_10b8b6104();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 == 0) {
    if (*(char *)(unaff_x21 + param_1) == -2) {
      lVar1 = 0;
    }
    else {
      if ((unaff_x22 == 0) || (unaff_x22 - (unaff_x22 >> 3) >> 1 < *(ulong *)(unaff_x19 + 0x10))) {
        FUN_10b8b6134();
      }
      else {
        func_0x00010b8b61b8();
      }
      func_0x00010b8b6894();
      FUN_10b8b6104();
      lVar1 = *(long *)(unaff_x19 + 0x28);
    }
  }
  func_0x00010b8b6570(lVar1);
  return;
}



/* Entry: 10b8b6104; end: 10b8b6133;  */

ulong FUN_10b8b6104(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b8b6134; end: 10b8b62af;  */

void FUN_10b8b6134(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  byte unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00010b8b64b4();
  func_0x00010b8b652c();
  func_0x00010b8b6674();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x00010b8b6910(uVar1);
  for (; unaff_x24 != unaff_x25; unaff_x25 = unaff_x25 + 1) {
    if (-1 < *(char *)(unaff_x19 + unaff_x25)) {
      lVar2 = unaff_x21;
      FUN_10b8b62b0();
      func_0x00010b8b675c();
      FUN_10b8b6104();
      *(byte *)(unaff_x23 + lVar2) = unaff_w22 & 0x7f;
      func_0x00010b8b63f0();
      func_0x00010b8b66cc();
      FUN_10b8b62cc();
    }
    unaff_x21 = unaff_x21 + 0x10;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8b62b0; end: 10b8b62cb;  */

void FUN_10b8b62b0(undefined8 *param_1)

{
  func_0x00010b8b6658(param_1,*param_1);
  return;
}



/* Entry: 10b8b62cc; end: 10b8b62e3;  */

undefined8 * FUN_10b8b62cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2 + 1;
  uVar2 = *puVar1;
  *param_1 = *param_2;
  param_1[1] = uVar2;
  *puVar1 = 0;
  FUN_10b8b5914(*puVar1);
  return puVar1;
}



/* Entry: 10b8b62e4; end: 10b8b631b;  */

undefined8 * FUN_10b8b62e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_10b8b5914(uVar1);
  }
  return param_1;
}



/* Entry: 10b8b631c; end: 10b8b63ab;  */

void FUN_10b8b631c(long *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x10;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1[2] != 0) {
    uVar5 = param_1[3];
    if (0x7f < uVar5) {
      lVar3 = param_1[3];
      if (lVar3 != 0) {
        lVar6 = 8;
        for (lVar4 = 0; lVar4 != lVar3; lVar4 = lVar4 + 1) {
          if (-1 < *(char *)(*param_1 + lVar4)) {
            FUN_10b8b58f0(param_1[1] + lVar6);
            lVar3 = param_1[3];
          }
          lVar6 = lVar6 + 0x10;
        }
        __ZdlPv();
        func_0x00010b8b6774();
      }
      return;
    }
    if (uVar5 != 0) {
      lVar3 = 8;
      for (uVar7 = 0; uVar2 = uVar7 == uVar5, !(bool)uVar2; uVar7 = uVar7 + 1) {
        if (-1 < *(char *)(*param_1 + uVar7)) {
          FUN_10b8b58f0(param_1[1] + lVar3);
          uVar5 = param_1[3];
        }
        lVar3 = lVar3 + 0x10;
      }
      func_0x00010b8b65c4();
      func_0x00010b8b6600();
      uVar1 = extraout_x8;
      if (!(bool)uVar2) {
        uVar1 = extraout_x10;
      }
      func_0x00010b8b6668(uVar1);
    }
  }
  return;
}



/* Entry: 10b8b63ac; end: 10b8b6973;  */

void FUN_10b8b63ac(void)

{
  return;
}



/* Entry: 10b8b6974; end: 10b8b69df;  */

void FUN_10b8b6974(void)

{
  func_0x00010b8b69d4();
  return;
}



/* Entry: 10b8b69e0; end: 10b8b6e4b;  */

void FUN_10b8b69e0(undefined8 *param_1,undefined4 **param_2,long param_3,long *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  long lVar6;
  ulong unaff_x22;
  undefined4 *unaff_x23;
  long lVar7;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined4 *puStack_e0;
  undefined4 **ppuStack_d8;
  undefined1 uStack_d0;
  long lStack_c8;
  undefined4 *puStack_c0;
  undefined4 *puStack_b8;
  undefined4 *puStack_b0;
  undefined4 *puStack_a8;
  undefined4 *puStack_a0;
  undefined4 *puStack_98;
  undefined4 *puStack_90;
  undefined4 *puStack_88;
  undefined4 *puStack_80;
  undefined4 *puStack_78;
  undefined4 *puStack_70;
  undefined4 **ppuStack_68;
  undefined1 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *param_4;
  if (((char)param_4[1] != '\t' || lVar7 == 0) ||
     (uVar2 = *(long *)(lVar7 + 0x10) == 5, !(bool)uVar2)) {
    ppuVar3 = &puStack_88;
    FUN_10b99f5f8(ppuVar3,&UNK_10f7cb24e);
    func_0x00010b8b70e4();
    goto LAB_10b8b6a9c;
  }
  uStack_e4 = 0;
  uStack_e8 = 0x7fc00000;
  ppuVar3 = param_2;
  lVar6 = param_3;
  func_0x00010b8b710c();
  bVar1 = *(byte *)(lVar7 + 0x20);
  if (bVar1 != 0) {
    puStack_c0 = (undefined4 *)0x0;
    puStack_b8 = (undefined4 *)0x0;
    puStack_b0 = (undefined4 *)0x0;
    if ((bVar1 & 0xfc) == 4) {
      func_0x00010b8b7104(&puStack_88);
      FUN_10b8b6e94(&puStack_c0,&puStack_80);
      func_0x00010b8b70fc();
LAB_10b8b6bd0:
      puStack_a8 = (undefined4 *)0x1;
      puStack_98 = puStack_b8;
      puStack_a0 = puStack_c0;
      puStack_90 = puStack_b0;
      puStack_c0 = (undefined4 *)0x0;
      puStack_b8 = (undefined4 *)0x0;
      puStack_b0 = (undefined4 *)0x0;
    }
    else {
      if ((bVar1 & 0xfe) == 2) {
        ppuStack_68 = &puStack_b0;
        puVar4 = (undefined4 *)0x4;
        func_0x00010b8b6fe8();
        unaff_x23 = (undefined4 *)((long)puVar4 - ((long)puStack_b8 - (long)puStack_c0));
        _memcpy(unaff_x23);
        puStack_78 = puStack_c0;
        puStack_70 = puStack_b0;
        puStack_88 = puStack_c0;
        puStack_80 = puStack_c0;
        puStack_c0 = unaff_x23;
        puStack_b8 = puVar4;
        puStack_b0 = puVar4 + lVar6 * 2;
        func_0x00010b8b701c(&puStack_88);
        FUN_10b9a9358(&lStack_c8,lVar7 + 0x18);
        if (lStack_c8 == 0) {
          puStack_88 = (undefined4 *)&UNK_10f7d0ef0;
          puStack_80 = (undefined4 *)0x0;
        }
        else {
          puStack_88 = (undefined4 *)(lStack_c8 + 0x18);
          puStack_80 = (undefined4 *)(ulong)*(uint *)(lStack_c8 + 0xc);
        }
        puStack_78 = (undefined4 *)0x0;
        puStack_70 = (undefined4 *)((ulong)puStack_70 & 0xffffffffffffff00);
        uStack_60 = 0;
        while (puStack_78 < puStack_80) {
          ppuVar3 = &puStack_88;
          ppuVar5 = param_2;
          func_0x00010b8b78a0();
          uStack_d0 = SUB81(ppuVar3,0);
          ppuStack_d8 = ppuVar5;
          if (((ulong)ppuVar3 & 1) == 0) {
            FUN_10b9a6d50(&puStack_e0,&puStack_88);
            puStack_a8 = (undefined4 *)0x2;
            puStack_a0 = puStack_e0;
            func_0x000107c310b8(&puStack_70);
            func_0x000107c278f8(lStack_c8);
            goto LAB_10b8b6bf0;
          }
          FUN_10b8b6e94(&puStack_c0,&ppuStack_d8);
        }
        func_0x000107c310b8(&puStack_70);
        func_0x000107c278f8(lStack_c8);
        goto LAB_10b8b6bd0;
      }
      FUN_10b8b1da4(&puStack_88,lVar7 + 0x18,3);
      puStack_a8 = (undefined4 *)0x2;
      puStack_a0 = puStack_88;
    }
LAB_10b8b6bf0:
    func_0x00010b8b7060(&puStack_c0);
    if (puStack_a8 != (undefined4 *)0x1) {
      *param_1 = 2;
      param_1[1] = puStack_a0;
      puStack_a0 = (undefined4 *)0x0;
      ppuVar3 = &puStack_a8;
      func_0x00010b8b7090();
      goto LAB_10b8b6a9c;
    }
    lVar6 = (long)puStack_98 - (long)puStack_a0;
    unaff_x22 = lVar6 >> 3;
    if (unaff_x22 < 5) {
      if (puStack_a0 == puStack_98) {
LAB_10b8b6cac:
        uStack_f0 = uStack_e8;
        uStack_ec = uStack_e4;
LAB_10b8b6cbc:
        uStack_f8 = uStack_e8;
        uStack_f4 = uStack_e4;
      }
      else {
        uStack_e8 = *puStack_a0;
        uStack_e4 = *(undefined1 *)(puStack_a0 + 1);
        if (unaff_x22 < 2) goto LAB_10b8b6cac;
        uStack_f0 = puStack_a0[2];
        uStack_ec = *(undefined1 *)(puStack_a0 + 3);
        if (lVar6 == 0x10) goto LAB_10b8b6cbc;
        uStack_f8 = puStack_a0[4];
        uStack_f4 = *(undefined1 *)(puStack_a0 + 5);
        if (lVar6 == 0x20) {
          uStack_100 = puStack_a0[6];
          uStack_fc = *(undefined1 *)(puStack_a0 + 7);
          goto LAB_10b8b6cdc;
        }
      }
      uStack_100 = uStack_f0;
      uStack_fc = uStack_ec;
    }
    else {
      FUN_10b99f5f8(&puStack_88,&UNK_10f7cb27e);
      func_0x00010b8b70e4();
    }
LAB_10b8b6cdc:
    ppuVar3 = &puStack_a8;
    func_0x00010b8b7090();
    uVar2 = unaff_x22 == 4;
    if (4 < unaff_x22) goto LAB_10b8b6a9c;
  }
  if (*(char *)(lVar7 + 0x30) != '\0') {
    func_0x00010b8b7134();
    func_0x00010b8b7104();
    func_0x00010b8b7128();
    if ((bool)uVar2) {
      uStack_e8 = unaff_x23[2];
      uStack_e4 = *(undefined1 *)(unaff_x23 + 3);
    }
    else {
      func_0x00010b8b70d0();
    }
    func_0x00010b8b70fc();
    uVar2 = unaff_x22 == 1;
    if (!(bool)uVar2) goto LAB_10b8b6a9c;
  }
  if (*(char *)(lVar7 + 0x40) != '\0') {
    func_0x00010b8b7134();
    func_0x00010b8b7104();
    func_0x00010b8b7128();
    if ((bool)uVar2) {
      uStack_f0 = unaff_x23[2];
      uStack_ec = *(undefined1 *)(unaff_x23 + 3);
    }
    else {
      func_0x00010b8b70d0();
    }
    func_0x00010b8b70fc();
    uVar2 = unaff_x22 == 1;
    if (!(bool)uVar2) goto LAB_10b8b6a9c;
  }
  if (*(char *)(lVar7 + 0x50) != '\0') {
    func_0x00010b8b7134();
    func_0x00010b8b7104();
    func_0x00010b8b7128();
    if ((bool)uVar2) {
      uStack_f8 = unaff_x23[2];
      uStack_f4 = *(undefined1 *)(unaff_x23 + 3);
    }
    else {
      func_0x00010b8b70d0();
    }
    func_0x00010b8b70fc();
    uVar2 = unaff_x22 == 1;
    if (!(bool)uVar2) goto LAB_10b8b6a9c;
  }
  if (*(char *)(lVar7 + 0x60) != '\0') {
    func_0x00010b8b7134();
    func_0x00010b8b7104();
    func_0x00010b8b7128();
    if ((bool)uVar2) {
      uStack_100 = unaff_x23[2];
      uStack_fc = *(undefined1 *)(unaff_x23 + 3);
    }
    else {
      func_0x00010b8b70d0();
    }
    func_0x00010b8b70fc();
    if (unaff_x22 != 1) goto LAB_10b8b6a9c;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,param_3 + 0x28,&uStack_e8,&uStack_f0,&uStack_f8,&uStack_100);
  *param_1 = 1;
  ppuVar3 = param_2;
LAB_10b8b6a9c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8b710c();
  (**(code **)(*ppuVar3 + 0x10))();
  return;
}



/* Entry: 10b8b6e4c; end: 10b8b6e93;  */

void FUN_10b8b6e4c(long *param_1)

{
  func_0x00010b8b710c();
  (**(code **)(*param_1 + 0x40))();
  return;
}



/* Entry: 10b8b6e94; end: 10b8b6fe7;  */

/* WARNING: Possible PIC construction at 0x00010b8b6f3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8b6f40) */

void FUN_10b8b6e94(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar2 = (undefined8 *)param_1[2];
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 < puVar2) {
    *puVar5 = *param_2;
    param_1[1] = (long)(puVar5 + 1);
    return;
  }
  lVar6 = (long)puVar5 - *param_1;
  uVar1 = (lVar6 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar3 = (long)puVar2 - *param_1;
    uVar4 = (long)uVar3 >> 2;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar4 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1 + 2;
    if (uVar4 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = param_2;
      FUN_10b8b6fe8();
    }
    puStack_50 = (undefined8 *)(uVar4 + lVar6);
    *puStack_50 = *param_2;
    puStack_48 = puStack_50 + 1;
    lStack_40 = uVar4 + (long)puVar2 * 8;
    param_2 = &uStack_58;
  }
  else {
    func_0x00010bdb3e8c();
  }
  lVar6 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar6);
  param_2[1] = lVar6;
  lVar6 = *param_1;
  param_1[1] = lVar6;
  *param_1 = param_2[1];
  param_2[1] = lVar6;
  lVar6 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10b8b6fe8; end: 10b8b708f;  */

undefined1  [16] FUN_10b8b6fe8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bfe188();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b8b7090; end: 10b8b713f;  */

long * FUN_10b8b7090(long *param_1)

{
  long lVar1;
  long *unaff_x19;
  
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return unaff_x19;
  }
  if (*param_1 == 1) {
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      param_1[2] = lVar1;
      __ZdlPv();
    }
    return param_1 + 1;
  }
  return param_1;
}



/* Entry: 10b8b7140; end: 10b8b7713;  */

void FUN_10b8b7140(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  FUN_10b9a9358(&uStack_58,param_4);
  lVar6 = *(long *)(param_2 + 0x30);
  lVar1 = lVar6;
  FUN_10b89fff8(lVar6,&uStack_58);
  puVar2 = &uStack_58;
  func_0x00010b8a5338(lVar6,puVar2,lVar1);
  plVar3 = *(long **)(param_2 + 0x30);
  if (*plVar3 + plVar3[3] == lVar6) {
    func_0x00010b9abe10(&lStack_60,plVar3[2]);
    plVar5 = *(long **)(param_2 + 0x30);
    plVar3 = plVar5;
    FUN_10b8a52d4();
    lVar6 = *plVar5;
    lVar4 = plVar5[3];
    lVar1 = lStack_60 + 0x18;
    plStack_50 = plVar3;
    puStack_48 = puVar2;
    while (plStack_50 != (long *)(lVar6 + lVar4)) {
      FUN_10b9a8e18(auStack_80,puStack_48);
      FUN_10b9a9020(lVar1,auStack_80);
      FUN_10b9a8d98(auStack_80);
      func_0x00010b8a5300(&plStack_50);
      lVar1 = lVar1 + 0x10;
    }
    plVar3 = plStack_50;
    func_0x000107c31084();
    func_0x00010b9a8f84(auStack_a8,&lStack_60);
    FUN_10b9a9894(auStack_98,auStack_a8);
    FUN_10b8a5478(&plStack_50,&uStack_58,auStack_98);
    func_0x000107c2793c(&UNK_10f7ca65c);
    func_0x000107c3173c(auStack_80);
    func_0x000107c31080(&uStack_68,plVar3,auStack_80);
    FUN_10b99f560(&plStack_50,&uStack_68);
    *param_1 = 2;
    param_1[1] = plStack_50;
    plStack_50 = (long *)0x0;
    func_0x000104bda960(0);
    func_0x000107c278f8(uStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    FUN_10b9a8d98(auStack_a8);
    func_0x000104bddf60(lStack_60);
  }
  else {
    (**(code **)(param_2 + 0x28))(param_3 + 0x28,*(undefined4 *)(puVar2 + 1));
    *param_1 = 1;
  }
  func_0x000107c278f8(uStack_58);
  return;
}



/* Entry: 10b8b7714; end: 10b8b7743;  */

undefined8 * FUN_10b8b7714(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71430;
  FUN_10b8a7ac8(param_1 + 2);
  return param_1;
}



/* Entry: 10b8b7744; end: 10b8b7827;  */

long * FUN_10b8b7744(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_2;
  func_0x00010b8b7cac();
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)&UNK_10f7cb2ae;
    plVar2 = &lStack_48;
    FUN_10b99f5f8();
    func_0x00010b8b7bd0();
  }
  else {
    (**(code **)(*param_2 + 0x30))(&lStack_48,param_2,plVar1,param_7);
    if (lStack_48 == 1) {
      FUN_10b8c9330(param_4);
      if ((*(byte *)(param_4 + 0x1cb) >> 6 & 1) != 0) {
        func_0x00010b8c92b4(param_4);
      }
      *param_1 = 1;
    }
    else {
      *param_1 = lStack_48;
      param_1[1] = lStack_40;
      lStack_48 = 0;
    }
    plVar2 = &lStack_48;
    func_0x0001080c6234();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar2;
  }
  ___stack_chk_fail();
  if (((ulong)plVar2 & 1) != 0) {
    if ((*(uint *)(plVar1 + 0x39) & 0x80000100) == 0) {
      plVar2 = (long *)plVar1[3];
    }
    else {
      plVar2 = plVar1;
      func_0x00010b8c9dcc();
      if (((*(byte *)((long)plVar1 + 0x1c9) & 1) != 0) && (plVar2[0x56] == plVar2[0x55])) {
        FUN_10b8c8684(plVar1);
      }
    }
    return plVar2;
  }
  return (long *)plVar1[3];
}



/* Entry: 10b8b7828; end: 10b8b783b;  */

long FUN_10b8b7828(ulong param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 & 1) != 0) {
    if ((*(uint *)(param_2 + 0x1c8) & 0x80000100) == 0) {
      lVar1 = *(long *)(param_2 + 0x18);
    }
    else {
      lVar1 = param_2;
      func_0x00010b8c9dcc();
      if (((*(byte *)(param_2 + 0x1c9) & 1) != 0) &&
         (*(long *)(lVar1 + 0x2b0) == *(long *)(lVar1 + 0x2a8))) {
        FUN_10b8c8684(param_2);
      }
    }
    return lVar1;
  }
  return *(long *)(param_2 + 0x18);
}



/* Entry: 10b8b783c; end: 10b8b794b;  */

long FUN_10b8b783c(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_28;
  
  plVar1 = param_1;
  func_0x00010b8b7cac();
  lVar2 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1,plVar1,*(undefined8 *)(param_1[2] + 0x10));
    lVar2 = param_3;
    FUN_10b8c9330(param_3);
    if ((*(byte *)(param_3 + 0x1cb) >> 6 & 1) != 0) {
      do {
        lVar2 = param_3;
        param_3 = *(long *)(lVar2 + 0x128);
      } while (*(long *)(lVar2 + 0x128) != 0);
      if ((*(byte *)(lVar2 + 0x1cb) >> 6 & 1) == 0) {
        if ((*(long *)(lVar2 + 0x18) != 0) && (*(long *)(*(long *)(lVar2 + 0x18) + 0x10) != 0)) {
          lVar3 = 0;
          if (*(byte **)(lVar2 + 0x18) != (byte *)0x0) {
            if ((**(byte **)(lVar2 + 0x18) >> 2 & 1) != 0) {
              return 0;
            }
            func_0x00010b95a878();
            lVar3 = 1;
          }
          return lVar3;
        }
        lStack_28 = 0;
      }
      else {
        func_0x00010b8cf8c0();
        FUN_10b8c9330(lStack_28);
        func_0x00010b8cf8c8();
      }
      return lStack_28;
    }
  }
  return lVar2;
}



/* Entry: 10b8b794c; end: 10b8b7a1b;  */

void FUN_10b8b794c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  uint uVar2;
  undefined4 uVar3;
  uint extraout_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  long lStack_38;
  
  uVar6 = (undefined4)((ulong)param_1 >> 0x20);
  uVar4 = (undefined4)param_1;
  uVar3 = (undefined4)((ulong)param_3 >> 0x20);
  uVar2 = (uint)param_3;
  func_0x00010b8b7c64();
  if ((bool)in_ZR) {
    FUN_10b9a92f0(CONCAT44(uVar3,uVar2));
    fVar5 = (float)(double)CONCAT44(uVar6,uVar4);
    func_0x00010b8b7b98(*(undefined8 *)(unaff_x20 + 0x10));
    if (in_NG == in_OV) {
      fVar5 = NAN;
    }
    uVar1 = 0x100000000;
    if (in_NG == in_OV) {
      uVar1 = 0;
    }
    *unaff_x19 = 1;
    unaff_x19[1] = uVar1 | (uint)fVar5;
  }
  else if ((extraout_w8 & 0xfe) == 2) {
    func_0x00010b8b7c7c();
    if (lStack_38 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(lStack_38 + 0xc);
    }
    func_0x00010b8b7c14(uVar3);
    func_0x00010b8b78a0();
    if (((uVar2 & 1) == 0) || (func_0x00010b8b7ca0(), (param_2 & 1) == 0)) {
      func_0x00010b8b7cb8();
      func_0x00010b8b7be8();
    }
    else {
      *unaff_x19 = 1;
      unaff_x19[1] = unaff_x20;
    }
    func_0x000107c310b8(unaff_x21 + 0x18);
    func_0x000107c278f8(lStack_38);
  }
  else {
    func_0x00010b8b7c44();
    func_0x00010b8b7bd0();
  }
  return;
}



/* Entry: 10b8b7a1c; end: 10b8b7ac7;  */

undefined1  [16] FUN_10b8b7a1c(uint param_1,ulong param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x19;
  undefined1 auVar7 [16];
  undefined1 uStack_28;
  
  func_0x00010b8b7c54();
  func_0x00010b8b7c00();
  if ((param_2 & 1) == 0) {
    func_0x00010b8b7c88();
    uVar6 = (uint)uStack_28;
    cVar1 = SBORROW4(uVar6,1);
    cVar2 = (int)(uVar6 - 1) < 0;
    bVar3 = uVar6 == 1;
    if (bVar3) {
      func_0x00010b8b7cc4();
      if (bVar3) {
        func_0x00010b8b7bbc();
        if (cVar2 == cVar1) {
          param_1 = 0x7fc00000;
        }
        uVar4 = 0x200000000;
      }
      else {
        func_0x00010b8b7b98(*(undefined8 *)(unaff_x19 + 0x10));
        if (cVar2 == cVar1) {
          param_1 = 0x7fc00000;
        }
        uVar4 = 0x100000000;
      }
      if (cVar2 == cVar1) {
        uVar4 = 0;
      }
      uVar4 = uVar4 | param_1 & 0xffffff00;
      uVar5 = 1;
    }
    else {
      param_1 = 0;
      uVar5 = 0;
      uVar4 = 0;
    }
    uVar4 = uVar4 | param_1 & 0xff;
  }
  else {
    uVar4 = 0x37fc00000;
    uVar5 = 1;
  }
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar4;
  return auVar7;
}



/* Entry: 10b8b7ac8; end: 10b8b7b97;  */

void FUN_10b8b7ac8(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  uint uVar2;
  undefined4 uVar3;
  uint extraout_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  long lStack_38;
  
  uVar6 = (undefined4)((ulong)param_1 >> 0x20);
  uVar4 = (undefined4)param_1;
  uVar3 = (undefined4)((ulong)param_3 >> 0x20);
  uVar2 = (uint)param_3;
  func_0x00010b8b7c64();
  if ((bool)in_ZR) {
    FUN_10b9a92f0(CONCAT44(uVar3,uVar2));
    fVar5 = (float)(double)CONCAT44(uVar6,uVar4);
    func_0x00010b8b7b98(*(undefined8 *)(unaff_x20 + 0x10));
    if (in_NG == in_OV) {
      fVar5 = NAN;
    }
    uVar1 = 0x100000000;
    if (in_NG == in_OV) {
      uVar1 = 0;
    }
    *unaff_x19 = 1;
    unaff_x19[1] = uVar1 | (uint)fVar5;
  }
  else if ((extraout_w8 & 0xfe) == 2) {
    func_0x00010b8b7c7c();
    if (lStack_38 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(lStack_38 + 0xc);
    }
    func_0x00010b8b7c14(uVar3);
    FUN_10b8b7a1c();
    if (((uVar2 & 1) == 0) || (func_0x00010b8b7ca0(), (param_2 & 1) == 0)) {
      func_0x00010b8b7cb8();
      func_0x00010b8b7be8();
    }
    else {
      *unaff_x19 = 1;
      unaff_x19[1] = unaff_x20;
    }
    func_0x000107c310b8(unaff_x21 + 0x18);
    func_0x000107c278f8(lStack_38);
  }
  else {
    func_0x00010b8b7c44();
    func_0x00010b8b7bd0();
  }
  return;
}



/* Entry: 10b8b7b98; end: 10b8b7cd7;  */

float FUN_10b8b7b98(long param_1,float param_2)

{
  return (float)(int)(*(float *)(param_1 + 0x20) * param_2) / *(float *)(param_1 + 0x20);
}



/* Entry: 10b8b7cd8; end: 10b8b80e3;  */

uint * FUN_10b8b7cd8(uint param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  undefined *puVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  byte abStack_88 [16];
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(undefined ***)param_2 = &PTR_FUN_110d71498;
  param_2[2] = 1;
  param_2[3] = 0;
  func_0x00010b952d98();
  *(undefined8 *)(param_2 + 4) = param_3;
  *(undefined8 *)(param_2 + 6) = param_4;
  param_2[8] = param_1;
  *(undefined **)(param_2 + 10) = &UNK_10dd5b8b0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(undefined **)(param_2 + 0x16) = &UNK_10dd5b8b0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  puVar4 = param_2 + 0x22;
  *(undefined **)puVar4 = &UNK_10dd5b8b0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  puVar6 = param_2 + 0x2e;
  *(undefined **)puVar6 = &UNK_10dd5b8b0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  puVar7 = param_2 + 0x3a;
  *(undefined **)puVar7 = &UNK_10dd5b8b0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  *(undefined **)(param_2 + 0x46) = &UNK_10dd5b8b0;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  *(undefined **)(param_2 + 0x52) = &UNK_10dd5b8b0;
  param_2[0x56] = 0;
  param_2[0x57] = 0;
  param_2[0x58] = 0;
  param_2[0x59] = 0;
  param_2[0x54] = 0;
  param_2[0x55] = 0;
  param_2[0x5c] = 0;
  param_2[0x5d] = 0;
  *(undefined **)(param_2 + 0x5e) = &UNK_10dd5b8b0;
  param_2[0x68] = 0;
  param_2[0x69] = 0;
  param_2[0x62] = 0;
  param_2[99] = 0;
  param_2[100] = 0;
  param_2[0x65] = 0;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  func_0x00010b8b964c();
  func_0x00010b8b96ac(param_2 + 10);
  func_0x00010b8b9720();
  for (lVar8 = 0; lVar8 != 3; lVar8 = lVar8 + 1) {
    bVar1 = *(byte *)((long)&uStack_90 + lVar8);
    puVar3 = param_2;
    if (bVar1 < 3) {
      puVar3 = (uint *)(&PTR_DAT_110d715b0)[(uint)bVar1];
    }
    func_0x00010b8b9680();
    func_0x00010b8b96dc();
    *puVar3 = (uint)bVar1;
    func_0x00010b8b9678();
  }
  uStack_90 = 0x3020100;
  func_0x00010b8b92e0(param_2 + 0x16,4);
  for (lVar8 = 0; lVar8 != 4; lVar8 = lVar8 + 1) {
    bVar1 = *(byte *)((long)&uStack_90 + lVar8);
    puVar3 = (uint *)(ulong)bVar1;
    func_0x00010b952d50();
    func_0x00010b8b9680();
    func_0x00010b8b96e8();
    *puVar3 = (uint)bVar1;
    func_0x00010b8b9678();
  }
  abStack_88[0] = 0;
  abStack_88[1] = 1;
  abStack_88[2] = 2;
  abStack_88[3] = 3;
  abStack_88[4] = 4;
  abStack_88[5] = 5;
  abStack_88[6] = 6;
  abStack_88[7] = 7;
  abStack_88[8] = 8;
  abStack_88[9] = 9;
  func_0x00010b8b92e0(puVar4,0xb);
  for (lVar8 = 0; lVar8 != 10; lVar8 = lVar8 + 1) {
    bVar1 = abStack_88[lVar8];
    func_0x00010b952d74(bVar1);
    func_0x000107c31088(&uStack_90);
    puVar3 = puVar4;
    FUN_10b89fbdc(puVar4,&uStack_90);
    *puVar3 = (uint)bVar1;
    func_0x000107c278f8(CONCAT44(uStack_8c,uStack_90));
  }
  abStack_88[0] = 0;
  abStack_88[1] = 1;
  abStack_88[2] = 2;
  abStack_88[3] = 3;
  abStack_88[4] = 4;
  abStack_88[5] = 5;
  abStack_88[6] = 6;
  abStack_88[7] = 7;
  abStack_88[8] = 8;
  abStack_88[9] = 9;
  abStack_88[10] = 10;
  func_0x00010b8b92e0(puVar6,0xc);
  for (lVar8 = 0; lVar8 != 0xb; lVar8 = lVar8 + 1) {
    bVar1 = abStack_88[lVar8];
    func_0x00010b952d08(bVar1);
    func_0x000107c31088(&uStack_90);
    puVar4 = puVar6;
    FUN_10b89fbdc(puVar6,&uStack_90);
    *puVar4 = (uint)bVar1;
    func_0x000107c278f8(CONCAT44(uStack_8c,uStack_90));
  }
  func_0x00010b8b964c();
  func_0x00010b8b96ac(puVar7);
  func_0x00010b8b9720();
  for (lVar8 = 0; lVar8 != 3; lVar8 = lVar8 + 1) {
    bVar1 = *(byte *)((long)&uStack_90 + lVar8);
    puVar5 = (undefined *)0xb;
    if (bVar1 < 3) {
      puVar5 = (&PTR_DAT_110d715c8)[(uint)bVar1];
    }
    func_0x00010b8b9680(puVar5);
    puVar6 = puVar7;
    FUN_10b89fbdc(puVar7,abStack_88);
    *puVar6 = (uint)bVar1;
    func_0x00010b8b9678();
  }
  func_0x00010b8b964c();
  func_0x00010b8b96ac(param_2 + 0x46);
  func_0x00010b8b9720();
  for (lVar8 = 0; lVar8 != 3; lVar8 = lVar8 + 1) {
    bVar1 = *(byte *)((long)&uStack_90 + lVar8);
    puVar6 = (uint *)0xb;
    if (bVar1 < 3) {
      puVar6 = (uint *)(&PTR_DAT_110d715e0)[(uint)bVar1];
    }
    func_0x00010b8b9680();
    func_0x00010b8b96dc();
    *puVar6 = (uint)bVar1;
    func_0x00010b8b9678();
  }
  func_0x00010b8b964c();
  func_0x00010b8b96ac(param_2 + 0x52);
  func_0x00010b8b9720();
  for (lVar8 = 0; lVar8 != 3; lVar8 = lVar8 + 1) {
    bVar1 = *(byte *)((long)&uStack_90 + lVar8);
    puVar6 = (uint *)0xb;
    if (bVar1 < 3) {
      puVar6 = (uint *)(&PTR_DAT_110d715f8)[(uint)bVar1];
    }
    func_0x00010b8b9680();
    func_0x00010b8b96e8();
    *puVar6 = (uint)bVar1;
    func_0x00010b8b9678();
  }
  uStack_90 = 0x3020100;
  puVar6 = param_2 + 0x5e;
  func_0x00010b8b92e0(puVar6,4);
  for (lVar8 = 0; bVar2 = lVar8 == 4, !bVar2; lVar8 = lVar8 + 1) {
    bVar1 = *(byte *)((long)&uStack_90 + lVar8);
    func_0x00010b952d2c(bVar1);
    func_0x00010b8b9680();
    puVar6 = param_2 + 0x5e;
    FUN_10b89fbdc(puVar6,abStack_88);
    *puVar6 = (uint)bVar1;
    func_0x00010b8b9678();
  }
  func_0x00010b8b9740(uStack_78);
  if (bVar2) {
    return param_2;
  }
  ___stack_chk_fail();
  *(undefined ***)puVar6 = &PTR_FUN_110d71498;
  func_0x00010b952df0(*(undefined8 *)(puVar6 + 4));
  FUN_10b89fed0(puVar6 + 0x5e);
  FUN_10b89fed0(puVar6 + 0x52);
  FUN_10b89fed0(puVar6 + 0x46);
  FUN_10b89fed0(puVar6 + 0x3a);
  FUN_10b89fed0(puVar6 + 0x2e);
  FUN_10b89fed0(puVar6 + 0x22);
  FUN_10b89fed0(puVar6 + 0x16);
  FUN_10b89fed0(puVar6 + 10);
  return puVar6;
}



/* Entry: 10b8b80e4; end: 10b8b8153;  */

undefined8 * FUN_10b8b80e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71498;
  func_0x00010b952df0(param_1[2]);
  FUN_10b89fed0(param_1 + 0x2f);
  FUN_10b89fed0(param_1 + 0x29);
  FUN_10b89fed0(param_1 + 0x23);
  FUN_10b89fed0(param_1 + 0x1d);
  FUN_10b89fed0(param_1 + 0x17);
  FUN_10b89fed0(param_1 + 0x11);
  FUN_10b89fed0(param_1 + 0xb);
  FUN_10b89fed0(param_1 + 5);
  return param_1;
}



/* Entry: 10b8b8154; end: 10b8b8157;  */

undefined8 * FUN_10b8b8154(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71498;
  func_0x00010b952df0(param_1[2]);
  FUN_10b89fed0(param_1 + 0x2f);
  FUN_10b89fed0(param_1 + 0x29);
  FUN_10b89fed0(param_1 + 0x23);
  FUN_10b89fed0(param_1 + 0x1d);
  FUN_10b89fed0(param_1 + 0x17);
  FUN_10b89fed0(param_1 + 0x11);
  FUN_10b89fed0(param_1 + 0xb);
  FUN_10b89fed0(param_1 + 5);
  return param_1;
}



/* Entry: 10b8b8158; end: 10b8b816b;  */

void FUN_10b8b8158(void)

{
  FUN_10b8b80e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8b816c; end: 10b8b82cb;  */

void FUN_10b8b816c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined8 uVar5;
  undefined1 uVar6;
  long *plVar7;
  long lVar8;
  int extraout_w10;
  long lVar9;
  long lStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [48];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_1;
  plVar7 = param_5;
  FUN_10b8b82cc(param_1,param_3);
  func_0x000107c31084();
  uStack_e0 = param_2;
  _strlen();
  uStack_d8 = param_2;
  func_0x000107c31078(&lStack_e8,lVar9,&uStack_e0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  FUN_10b8a3c40(uVar5,&lStack_e8);
  if (lStack_e8 != 0) {
    piVar1 = (int *)(lStack_e8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar9 = *param_5;
  if (lVar9 != 0) {
    plVar2 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_c8 = auStack_b0;
  uStack_b8 = 1;
  uStack_c0 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 1;
  uStack_f0 = uVar5;
  uStack_e0 = uVar5;
  lStack_d0 = lVar9;
  func_0x0001081034b0(param_4,&uStack_f0);
  uVar6 = SUB81(&uStack_e0,0);
  func_0x0001081034d8();
  FUN_10b8a24a8(&uStack_e0);
  func_0x0001081044e0(0);
  func_0x0001080ceeb8(lVar9);
  lVar9 = 0;
  func_0x000107c278f8();
  func_0x00010b8b9708();
  func_0x00010b8b9740(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_f8 = FUN_10b8b82cc;
    lVar8 = *plVar7;
    *(undefined1 *)(lVar8 + 0x18) = uVar6;
    puStack_100 = &stack0xfffffffffffffff0;
    if (lVar9 != 0) {
      do {
        func_0x00010b8b96cc();
      } while (extraout_w10 != 0);
      lVar8 = *plVar7;
    }
    lStack_108 = lVar9;
    FUN_10b8b88a0(lVar8 + 0x10,&lStack_108);
    FUN_10b8a7aec(lStack_108);
    return;
  }
  return;
}



/* Entry: 10b8b82cc; end: 10b8b8317;  */

void FUN_10b8b82cc(long param_1,undefined1 param_2,long *param_3)

{
  long lVar1;
  int extraout_w10;
  long lStack_18;
  
  lVar1 = *param_3;
  *(undefined1 *)(lVar1 + 0x18) = param_2;
  if (param_1 != 0) {
    do {
      func_0x00010b8b96cc();
    } while (extraout_w10 != 0);
    lVar1 = *param_3;
  }
  lStack_18 = param_1;
  FUN_10b8b88a0(lVar1 + 0x10,&lStack_18);
  FUN_10b8a7aec(lStack_18);
  return;
}



/* Entry: 10b8b8318; end: 10b8b83af;  */

void FUN_10b8b8318(undefined8 param_1,undefined8 param_2)

{
  int extraout_w10;
  long lStack_60;
  
  FUN_10b8b83b0(param_1,&UNK_10f7cb2d2,0,param_2,0x10b8b9308,0x10b8b931c);
  func_0x00010b8b9584();
  func_0x00010b8b9584();
  func_0x00010b8b95a4();
  func_0x00010b8b95f8();
  func_0x00010b8b853c();
  if (lStack_60 != 0) {
    do {
      func_0x00010b8b96cc();
    } while (extraout_w10 != 0);
  }
  func_0x00010b8b9568();
  func_0x00010b8b93a8(lStack_60);
  func_0x00010b8b93f0(lStack_60);
  return;
}



/* Entry: 10b8b83b0; end: 10b8b846b;  */

void FUN_10b8b83b0(void)

{
  int extraout_w10;
  undefined8 uStack_60;
  
  func_0x00010b8b95f8();
  func_0x00010b8b853c();
  if (uStack_60 != 0) {
    do {
      func_0x00010b8b96cc();
    } while (extraout_w10 != 0);
  }
  func_0x00010b8b9568();
  func_0x00010b8b93a8(uStack_60);
  func_0x00010b8b93f0(uStack_60);
  return;
}



/* Entry: 10b8b846c; end: 10b8b84bf;  */

void FUN_10b8b846c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 in_register_00005008;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  func_0x00010b8b9638();
  puVar1[5] = in_register_00005008;
  puVar1[4] = param_2;
  *puVar1 = &PTR_DAT_110d711b0;
  puVar1[1] = extraout_x8;
  puVar1[6] = param_3;
  *param_1 = puVar1;
  return;
}



/* Entry: 10b8b84c0; end: 10b8b850f;  */

void FUN_10b8b84c0(void)

{
  int extraout_w10;
  undefined8 uStack_60;
  
  func_0x00010b8b95f8();
  FUN_10b8b8510();
  if (uStack_60 != 0) {
    do {
      func_0x00010b8b96cc();
    } while (extraout_w10 != 0);
  }
  func_0x00010b8b9568();
  func_0x00010b8b93a8(uStack_60);
  func_0x00010b8b93cc(uStack_60);
  return;
}



/* Entry: 10b8b8510; end: 10b8b8567;  */

void FUN_10b8b8510(undefined8 param_1,long param_2)

{
  undefined8 in_register_00005008;
  
  func_0x00010b8b9660();
  func_0x00010b8b9638();
  *(undefined8 *)(param_2 + 0x28) = in_register_00005008;
  *(undefined8 *)(param_2 + 0x20) = param_1;
  func_0x00010b8b96bc();
  return;
}



/* Entry: 10b8b8568; end: 10b8b85b7;  */

void FUN_10b8b8568(void)

{
  int extraout_w10;
  undefined8 uStack_60;
  
  func_0x00010b8b95f8();
  FUN_10b8b85b8();
  if (uStack_60 != 0) {
    do {
      func_0x00010b8b96cc();
    } while (extraout_w10 != 0);
  }
  func_0x00010b8b9568();
  func_0x00010b8b93a8(uStack_60);
  func_0x00010b8b9414(uStack_60);
  return;
}



/* Entry: 10b8b85b8; end: 10b8b85e3;  */

void FUN_10b8b85b8(undefined8 param_1,long param_2)

{
  undefined8 in_register_00005008;
  
  func_0x00010b8b9660();
  func_0x00010b8b9638();
  *(undefined8 *)(param_2 + 0x28) = in_register_00005008;
  *(undefined8 *)(param_2 + 0x20) = param_1;
  func_0x00010b8b96bc();
  return;
}



/* Entry: 10b8b85e4; end: 10b8b889f;  */

void FUN_10b8b85e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *extraout_x8;
  undefined1 *extraout_x8_00;
  undefined8 uVar8;
  undefined1 uStack_159;
  undefined8 auStack_158 [3];
  undefined1 auStack_140 [24];
  undefined8 auStack_128 [3];
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined4 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined4 uStack_b0;
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_70 = param_2;
  uStack_68 = param_3;
  FUN_10b8a3bac();
  auStack_128[0] = CONCAT71(auStack_128[0]._1_7_,1);
  lStack_110 = lVar5;
  FUN_10b8a1118(&lStack_90,&lStack_110,auStack_128);
  lStack_110 = CONCAT44(lStack_110._4_4_,1);
  func_0x0001080e3e74(&uStack_108,&UNK_10f7cb2d2);
  uStack_f0 = 5;
  func_0x0001080e3e74(auStack_e8,&UNK_10f7cb2d6);
  uStack_d0 = 3;
  func_0x0001080e3e74(auStack_c8,&UNK_10f7cb2dc);
  uStack_b0 = 4;
  func_0x0001080e3e74(auStack_a8,&UNK_10f7cb2e3);
  for (lVar5 = 8; lVar5 != 0x88; lVar5 = lVar5 + 0x20) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_128,(long)&lStack_110 + lVar5);
    func_0x00010b8b972c();
    uVar4 = *extraout_x8;
    ___toupper();
    func_0x00010b8b972c();
    *extraout_x8_00 = uVar4;
    func_0x000107c28520(auStack_158,&uStack_70);
    func_0x0001080e7c24(auStack_140,auStack_158,auStack_128);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c31084();
    func_0x000107c31080(auStack_158);
    FUN_10b8a3c40(uVar8,auStack_158);
    func_0x00010b8b9708();
    uStack_159 = 1;
    auStack_158[0] = uVar8;
    func_0x00010b8a1158(&lStack_90,auStack_158,&uStack_159);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
  }
  lVar5 = 0x68;
  do {
    lVar6 = (long)&lStack_110 + lVar5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar6);
    lVar5 = lVar5 + -0x20;
  } while (lVar5 != -0x18);
  func_0x000107c31084();
  func_0x0001080e3e74(auStack_128,"_");
  func_0x000107c28520(auStack_140,&uStack_70);
  func_0x0001080e751c(&lStack_110,auStack_128,auStack_140);
  func_0x000107c31080(auStack_158,lVar6,&lStack_110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
  FUN_10b8a3c40(*(undefined8 *)(param_1 + 0x18),auStack_158);
  uVar7 = 0x40;
  __Znwm();
  uStack_108 = uStack_88;
  lStack_110 = lStack_90;
  uStack_100 = uStack_80;
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar8 = uVar7;
  func_0x00010b8a9dd4();
  auStack_128[0] = uVar8;
  FUN_10b8a1a98(&lStack_110);
  FUN_10b8b82cc(param_1,param_4,param_6);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  lStack_110 = *param_6;
  if (lStack_110 != 0) {
    plVar1 = (long *)(lStack_110 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10b8a9ea8(uVar8,param_5,auStack_128,&lStack_110,0);
  func_0x0001080ceeb8(lStack_110);
  func_0x0001081044e0(uVar7);
  func_0x00010b8b9708();
  FUN_10b8a1a98(&lStack_90);
  return;
}



/* Entry: 10b8b88a0; end: 10b8b88d7;  */

undefined8 * FUN_10b8b88a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_10b8a7aec(uVar1);
  }
  return param_1;
}



/* Entry: 10b8b88d8; end: 10b8b8d9b;  */

void FUN_10b8b88d8(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  long *plVar5;
  long lStack_60;
  undefined8 *puStack_48;
  
  func_0x00010b8b8400(param_1,&UNK_10f7cb2e8,1,param_2,param_1 + 0x28,FUN_10b8b8d9c,0x10b8b8da8);
  func_0x00010b8b95b4();
  func_0x00010b8b95b4();
  func_0x00010b8b95b4();
  func_0x00010b8b95b4();
  func_0x00010b8b95a4();
  func_0x00010b8b8400();
  func_0x00010b8b95a4();
  func_0x00010b8b8400();
  func_0x00010b8b95b4();
  func_0x00010b8b95b4();
  func_0x00010b8b95a4();
  func_0x00010b8b8400();
  func_0x00010b8b95a4();
  FUN_10b8b84c0();
  func_0x00010b8b95a4();
  FUN_10b8b84c0();
  func_0x00010b8b9594();
  FUN_10b8b8318(param_1,param_2);
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  plVar5 = puVar3 + 1;
  *plVar5 = 1;
  puVar3[2] = 0;
  *(undefined1 *)(puVar3 + 3) = 0;
  *puVar3 = &PTR_DAT_110d714e0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_48 = puVar3;
  FUN_10b8b85e4(param_1,&UNK_10f7cb372,6,0,param_2,&puStack_48);
  do {
    lVar4 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x00010b8b95e8();
  }
  do {
    lVar4 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x00010b8b95e8();
  }
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  plVar5 = puVar3 + 1;
  *plVar5 = 1;
  puVar3[2] = 0;
  *(undefined1 *)(puVar3 + 3) = 0;
  *puVar3 = &PTR_FUN_110d71550;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_48 = puVar3;
  FUN_10b8b85e4(param_1,&UNK_10f7cb379,7,1,param_2,&puStack_48);
  do {
    lVar4 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x00010b8b95e8();
  }
  do {
    lVar4 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x00010b8b95e8();
  }
  func_0x00010b8b95d8();
  func_0x00010b8b83b0();
  func_0x00010b8b95d8();
  func_0x00010b8b83b0();
  func_0x00010b8b95d8();
  func_0x00010b8b83b0();
  func_0x00010b8b9584();
  func_0x00010b8b9584();
  func_0x00010b8b9584();
  func_0x00010b8b9584();
  func_0x00010b8b9584();
  func_0x00010b8b9594();
  func_0x00010b8b9594();
  func_0x00010b8b9594();
  func_0x00010b8b9594();
  func_0x00010b8b9594();
  func_0x00010b8b9594();
  func_0x00010b8b95a4();
  func_0x00010b8b95f8();
  FUN_10b8b8510();
  if (lStack_60 != 0) {
    do {
      func_0x00010b8b96cc();
    } while (extraout_w10 != 0);
  }
  func_0x00010b8b9568();
  func_0x00010b8b93a8(lStack_60);
  func_0x00010b8b93cc(lStack_60);
  return;
}



/* Entry: 10b8b8d9c; end: 10b8b8ea3;  */

uint FUN_10b8b8d9c(uint *param_1)

{
  return *param_1 & 3;
}



/* Entry: 10b8b8ea4; end: 10b8b8f27;  */

float FUN_10b8b8ea4(float param_1,ushort param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_2 & 7) == 0) {
    return NAN;
  }
  uVar2 = (uint)(short)param_2;
  if ((uVar2 >> 3 & 1) == 0) {
    uVar3 = uVar2 >> 4 & 0x7ff;
    uVar1 = -uVar3;
    if (-1 < (int)uVar2) {
      uVar1 = uVar3;
    }
    return (float)(int)uVar1;
  }
  func_0x00010b8b8ef0(param_1,uVar2 >> 4 & 0xfff);
  return param_1;
}



/* Entry: 10b8b8f28; end: 10b8b8f37;  */

void FUN_10b8b8f28(float param_1,long param_2)

{
  ushort *puVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  
  lVar3 = param_2 + 0xf0;
  puVar1 = (ushort *)(param_2 + 7);
  if (NAN(param_1)) {
    *puVar1 = *puVar1 & 0xfff8;
    return;
  }
  uVar4 = *puVar1;
  *puVar1 = uVar4 & 0xfff8 | 3;
  if ((uVar4 & 8) == 0) {
    if ((param_1 == (float)(int)param_1) && (uVar5 = (uint)param_1, uVar5 + 0x7ff < 0xfff)) {
      uVar2 = -uVar5 | 0x800;
      if (0.0 <= param_1) {
        uVar2 = uVar5;
      }
      uVar4 = (ushort)(uVar2 << 4) | 3;
    }
    else {
      func_0x00010811dc28(lVar3,param_1);
      uVar4 = *puVar1 & 7 | (ushort)((int)lVar3 << 4) | 8;
    }
  }
  else {
    func_0x00010811dbdc(lVar3,uVar4 >> 4,param_1);
    uVar4 = *puVar1 & 0xf | (ushort)((int)lVar3 << 4);
  }
  *puVar1 = uVar4;
  return;
}



/* Entry: 10b8b8f38; end: 10b8b8f53;  */

ulong FUN_10b8b8f38(ulong param_1)

{
  func_0x00010b8b96b4(param_1,*(undefined2 *)(param_1 + 0xb));
  return param_1 & 0xffffffffff;
}



/* Entry: 10b8b8f54; end: 10b8b904b;  */

ulong FUN_10b8b8f54(float param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar6 = (uint)param_2;
  uVar1 = uVar6 & 7;
  if ((param_2 & 7) == 0) {
    uVar5 = 0x7fc00000;
  }
  else if (uVar1 == 4) {
    uVar5 = 0x37fc00000;
  }
  else if ((uVar6 & 0xffff) < 0x10 && uVar1 == 5) {
    uVar5 = 0x47fc00000;
  }
  else {
    uVar2 = uVar6 >> 4 & 0xfff;
    if (uVar1 == 5 && uVar2 == 1) {
      uVar5 = 0x57fc00000;
    }
    else if (uVar1 == 5 && uVar2 == 2) {
      uVar5 = 0x67fc00000;
    }
    else {
      if ((uVar6 >> 3 & 1) == 0) {
        uVar6 = uVar6 >> 4 & 0x7ff;
        uVar1 = -uVar6;
        if (-1 < (short)param_2) {
          uVar1 = uVar6;
        }
        param_1 = (float)(int)uVar1;
      }
      else {
        func_0x00010b8b8ef0();
      }
      param_2 = param_2 & 7;
      cVar3 = SBORROW8(param_2,1);
      cVar4 = (long)(param_2 - 1) < 0;
      if (param_2 == 1) {
        func_0x00010b8b9624(param_1);
        if (cVar4 == cVar3) {
          param_1 = NAN;
        }
        uVar5 = 0x100000000;
      }
      else {
        func_0x00010b8b9624(param_1);
        if (cVar4 == cVar3) {
          param_1 = NAN;
        }
        uVar5 = 0x200000000;
      }
      if (cVar4 == cVar3) {
        uVar5 = 0;
      }
      uVar5 = uVar5 | (uint)param_1;
    }
  }
  return uVar5;
}



/* Entry: 10b8b904c; end: 10b8b9063;  */

void FUN_10b8b904c(long param_1,ulong param_2)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  short sVar5;
  float fVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar4 = param_1 + 0xf0;
  puVar1 = (ushort *)(param_1 + 0xb);
  uVar9 = param_2 >> 0x20 & 0xff;
  switch(uVar9) {
  case 0:
    uVar7 = *puVar1 & 0xfff8;
    goto code_r0x00010811dfec;
  default:
    fVar6 = (float)param_2;
    uVar7 = 1;
    if ((int)uVar9 != 1) {
      uVar7 = 2;
    }
    uVar3 = *puVar1;
    *puVar1 = uVar3 & 0xfff8 | uVar7;
    if ((uVar3 & 8) == 0) {
      if ((fVar6 == (float)(int)fVar6) && (uVar8 = (uint)fVar6, uVar8 + 0x7ff < 0xfff)) {
        uVar2 = -uVar8 | 0x800;
        if (0.0 <= fVar6) {
          uVar2 = uVar8;
        }
        uVar7 = uVar7 | (ushort)(uVar2 << 4);
      }
      else {
        func_0x00010811dc28(lVar4,fVar6);
        uVar7 = *puVar1 & 7 | (ushort)((int)lVar4 << 4) | 8;
      }
    }
    else {
      func_0x00010811dbdc(lVar4,uVar3 >> 4,param_2 & 0xffffffff);
      uVar7 = *puVar1 & 0xf | (ushort)((int)lVar4 << 4);
    }
    *puVar1 = uVar7;
    return;
  case 3:
    uVar7 = *puVar1 & 0xfff8 | 4;
code_r0x00010811dfec:
    *puVar1 = uVar7;
    return;
  case 4:
    sVar5 = 0;
    break;
  case 5:
    sVar5 = 1;
    break;
  case 6:
    sVar5 = 2;
  }
  uVar7 = *puVar1;
  *puVar1 = uVar7 & 0xfff8 | 5;
  if ((uVar7 >> 3 & 1) == 0) {
    uVar7 = sVar5 << 4 | 5;
  }
  else {
    func_0x00010811dbdc(lVar4,uVar7 >> 4);
    uVar7 = *puVar1 & 0xf | (ushort)((int)lVar4 << 4);
  }
  *puVar1 = uVar7;
  return;
}



/* Entry: 10b8b9064; end: 10b8b910f;  */

ulong FUN_10b8b9064(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  float fVar7;
  
  if ((param_2 & 7) == 0) {
    uVar6 = 0x7fc00000;
  }
  else if (((uint)param_2 & 7) == 4) {
    uVar6 = 0x37fc00000;
  }
  else {
    uVar2 = (uint)(short)param_2;
    if ((uVar2 >> 3 & 1) == 0) {
      uVar3 = uVar2 >> 4 & 0x7ff;
      uVar1 = -uVar3;
      if (-1 < (int)uVar2) {
        uVar1 = uVar3;
      }
      fVar7 = (float)(int)uVar1;
    }
    else {
      func_0x00010b8b8ef0(param_1,uVar2 >> 4 & 0xfff);
      fVar7 = (float)param_1;
    }
    param_2 = param_2 & 7;
    cVar4 = SBORROW8(param_2,1);
    cVar5 = (long)(param_2 - 1) < 0;
    if (param_2 == 1) {
      func_0x00010b8b9624(fVar7);
      if (cVar5 == cVar4) {
        fVar7 = NAN;
      }
      uVar6 = 0x100000000;
    }
    else {
      func_0x00010b8b9624(fVar7);
      if (cVar5 == cVar4) {
        fVar7 = NAN;
      }
      uVar6 = 0x200000000;
    }
    if (cVar5 == cVar4) {
      uVar6 = 0;
    }
    uVar6 = uVar6 | (uint)fVar7;
  }
  return uVar6;
}



/* Entry: 10b8b9110; end: 10b8b919b;  */

void FUN_10b8b9110(long param_1,ulong param_2)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  float fVar5;
  ushort uVar6;
  uint uVar7;
  
  lVar4 = param_1 + 0xf0;
  puVar1 = (ushort *)(param_1 + 0x45);
  uVar7 = (uint)(param_2 >> 0x20) & 0xff;
  if (uVar7 == 3) {
    uVar6 = *puVar1 & 0xfff8 | 4;
  }
  else {
    if ((param_2 & 0xff00000000) != 0) {
      fVar5 = (float)param_2;
      uVar6 = 1;
      if (uVar7 != 1) {
        uVar6 = 2;
      }
      uVar3 = *puVar1;
      *puVar1 = uVar3 & 0xfff8 | uVar6;
      if ((uVar3 & 8) == 0) {
        if ((fVar5 == (float)(int)fVar5) && (uVar7 = (uint)fVar5, uVar7 + 0x7ff < 0xfff)) {
          uVar2 = -uVar7 | 0x800;
          if (0.0 <= fVar5) {
            uVar2 = uVar7;
          }
          uVar6 = uVar6 | (ushort)(uVar2 << 4);
        }
        else {
          func_0x00010811dc28(lVar4,param_2 & 0xffffffff);
          uVar6 = *puVar1 & 7 | (ushort)((int)lVar4 << 4) | 8;
        }
      }
      else {
        func_0x00010811dbdc(lVar4,uVar3 >> 4,param_2 & 0xffffffff);
        uVar6 = *puVar1 & 0xf | (ushort)((int)lVar4 << 4);
      }
      *puVar1 = uVar6;
      return;
    }
    uVar6 = *puVar1 & 0xfff8;
  }
  *puVar1 = uVar6;
  return;
}



/* Entry: 10b8b919c; end: 10b8b91bb;  */

ulong FUN_10b8b919c(ulong param_1,ulong param_2)

{
  func_0x00010b8b96b4(param_1,*(undefined2 *)(param_1 + (param_2 & 0xffffffff) * 2 + 0x5b));
  return param_1 & 0xffffffffff;
}



/* Entry: 10b8b91bc; end: 10b8b91f3;  */

void FUN_10b8b91bc(long param_1,ulong param_2)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  short sVar5;
  float fVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar4 = param_1 + 0xf0;
  puVar1 = (ushort *)(param_1 + 0x5b);
  uVar9 = param_2 >> 0x20 & 0xff;
  switch(uVar9) {
  case 0:
    uVar7 = *puVar1 & 0xfff8;
    goto code_r0x00010811dfec;
  default:
    fVar6 = (float)param_2;
    uVar7 = 1;
    if ((int)uVar9 != 1) {
      uVar7 = 2;
    }
    uVar3 = *puVar1;
    *puVar1 = uVar3 & 0xfff8 | uVar7;
    if ((uVar3 & 8) == 0) {
      if ((fVar6 == (float)(int)fVar6) && (uVar8 = (uint)fVar6, uVar8 + 0x7ff < 0xfff)) {
        uVar2 = -uVar8 | 0x800;
        if (0.0 <= fVar6) {
          uVar2 = uVar8;
        }
        uVar7 = uVar7 | (ushort)(uVar2 << 4);
      }
      else {
        func_0x00010811dc28(lVar4,fVar6);
        uVar7 = *puVar1 & 7 | (ushort)((int)lVar4 << 4) | 8;
      }
    }
    else {
      func_0x00010811dbdc(lVar4,uVar3 >> 4,param_2 & 0xffffffff);
      uVar7 = *puVar1 & 0xf | (ushort)((int)lVar4 << 4);
    }
    *puVar1 = uVar7;
    return;
  case 3:
    uVar7 = *puVar1 & 0xfff8 | 4;
code_r0x00010811dfec:
    *puVar1 = uVar7;
    return;
  case 4:
    sVar5 = 0;
    break;
  case 5:
    sVar5 = 1;
    break;
  case 6:
    sVar5 = 2;
  }
  uVar7 = *puVar1;
  *puVar1 = uVar7 & 0xfff8 | 5;
  if ((uVar7 >> 3 & 1) == 0) {
    uVar7 = sVar5 << 4 | 5;
  }
  else {
    func_0x00010811dbdc(lVar4,uVar7 >> 4);
    uVar7 = *puVar1 & 0xf | (ushort)((int)lVar4 << 4);
  }
  *puVar1 = uVar7;
  return;
}



/* Entry: 10b8b91f4; end: 10b8b9213;  */

ulong FUN_10b8b91f4(ulong param_1,ulong param_2)

{
  func_0x00010b8b96b4(param_1,*(undefined2 *)(param_1 + (param_2 & 0xffffffff) * 2 + 0x5f));
  return param_1 & 0xffffffffff;
}



/* Entry: 10b8b9214; end: 10b8b9243;  */

void FUN_10b8b9214(long param_1,ulong param_2)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  short sVar5;
  float fVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar4 = param_1 + 0xf0;
  puVar1 = (ushort *)(param_1 + 0x5f);
  uVar9 = param_2 >> 0x20 & 0xff;
  switch(uVar9) {
  case 0:
    uVar7 = *puVar1 & 0xfff8;
    goto code_r0x00010811dfec;
  default:
    fVar6 = (float)param_2;
    uVar7 = 1;
    if ((int)uVar9 != 1) {
      uVar7 = 2;
    }
    uVar3 = *puVar1;
    *puVar1 = uVar3 & 0xfff8 | uVar7;
    if ((uVar3 & 8) == 0) {
      if ((fVar6 == (float)(int)fVar6) && (uVar8 = (uint)fVar6, uVar8 + 0x7ff < 0xfff)) {
        uVar2 = -uVar8 | 0x800;
        if (0.0 <= fVar6) {
          uVar2 = uVar8;
        }
        uVar7 = uVar7 | (ushort)(uVar2 << 4);
      }
      else {
        func_0x00010811dc28(lVar4,fVar6);
        uVar7 = *puVar1 & 7 | (ushort)((int)lVar4 << 4) | 8;
      }
    }
    else {
      func_0x00010811dbdc(lVar4,uVar3 >> 4,param_2 & 0xffffffff);
      uVar7 = *puVar1 & 0xf | (ushort)((int)lVar4 << 4);
    }
    *puVar1 = uVar7;
    return;
  case 3:
    uVar7 = *puVar1 & 0xfff8 | 4;
code_r0x00010811dfec:
    *puVar1 = uVar7;
    return;
  case 4:
    sVar5 = 0;
    break;
  case 5:
    sVar5 = 1;
    break;
  case 6:
    sVar5 = 2;
  }
  uVar7 = *puVar1;
  *puVar1 = uVar7 & 0xfff8 | 5;
  if ((uVar7 >> 3 & 1) == 0) {
    uVar7 = sVar5 << 4 | 5;
  }
  else {
    func_0x00010811dbdc(lVar4,uVar7 >> 4);
    uVar7 = *puVar1 & 0xf | (ushort)((int)lVar4 << 4);
  }
  *puVar1 = uVar7;
  return;
}



/* Entry: 10b8b9244; end: 10b8b927f;  */

ulong FUN_10b8b9244(ulong param_1)

{
  func_0x00010b8b9260(param_1,0);
  return param_1 & 0xffffffffff;
}



/* Entry: 10b8b9280; end: 10b8b9293;  */

void FUN_10b8b9280(long param_1,ulong param_2)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  short sVar5;
  float fVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar4 = param_1 + 0xf0;
  puVar1 = (ushort *)(param_1 + 99);
  uVar9 = param_2 >> 0x20 & 0xff;
  switch(uVar9) {
  case 0:
    uVar7 = *puVar1 & 0xfff8;
    goto code_r0x00010811dfec;
  default:
    fVar6 = (float)param_2;
    uVar7 = 1;
    if ((int)uVar9 != 1) {
      uVar7 = 2;
    }
    uVar3 = *puVar1;
    *puVar1 = uVar3 & 0xfff8 | uVar7;
    if ((uVar3 & 8) == 0) {
      if ((fVar6 == (float)(int)fVar6) && (uVar8 = (uint)fVar6, uVar8 + 0x7ff < 0xfff)) {
        uVar2 = -uVar8 | 0x800;
        if (0.0 <= fVar6) {
          uVar2 = uVar8;
        }
        uVar7 = uVar7 | (ushort)(uVar2 << 4);
      }
      else {
        func_0x00010811dc28(lVar4,fVar6);
        uVar7 = *puVar1 & 7 | (ushort)((int)lVar4 << 4) | 8;
      }
    }
    else {
      func_0x00010811dbdc(lVar4,uVar3 >> 4,param_2 & 0xffffffff);
      uVar7 = *puVar1 & 0xf | (ushort)((int)lVar4 << 4);
    }
    *puVar1 = uVar7;
    return;
  case 3:
    uVar7 = *puVar1 & 0xfff8 | 4;
code_r0x00010811dfec:
    *puVar1 = uVar7;
    return;
  case 4:
    sVar5 = 0;
    break;
  case 5:
    sVar5 = 1;
    break;
  case 6:
    sVar5 = 2;
  }
  uVar7 = *puVar1;
  *puVar1 = uVar7 & 0xfff8 | 5;
  if ((uVar7 >> 3 & 1) == 0) {
    uVar7 = sVar5 << 4 | 5;
  }
  else {
    func_0x00010811dbdc(lVar4,uVar7 >> 4);
    uVar7 = *puVar1 & 0xf | (ushort)((int)lVar4 << 4);
  }
  *puVar1 = uVar7;
  return;
}



/* Entry: 10b8b9294; end: 10b8b92af;  */

ulong FUN_10b8b9294(ulong param_1)

{
  func_0x00010b8b9260(param_1,1);
  return param_1 & 0xffffffffff;
}



/* Entry: 10b8b92b0; end: 10b8b943b;  */

void FUN_10b8b92b0(long param_1,ulong param_2)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  short sVar5;
  float fVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar4 = param_1 + 0xf0;
  puVar1 = (ushort *)(param_1 + 0x65);
  uVar9 = param_2 >> 0x20 & 0xff;
  switch(uVar9) {
  case 0:
    uVar7 = *puVar1 & 0xfff8;
    goto code_r0x00010811dfec;
  default:
    fVar6 = (float)param_2;
    uVar7 = 1;
    if ((int)uVar9 != 1) {
      uVar7 = 2;
    }
    uVar3 = *puVar1;
    *puVar1 = uVar3 & 0xfff8 | uVar7;
    if ((uVar3 & 8) == 0) {
      if ((fVar6 == (float)(int)fVar6) && (uVar8 = (uint)fVar6, uVar8 + 0x7ff < 0xfff)) {
        uVar2 = -uVar8 | 0x800;
        if (0.0 <= fVar6) {
          uVar2 = uVar8;
        }
        uVar7 = uVar7 | (ushort)(uVar2 << 4);
      }
      else {
        func_0x00010811dc28(lVar4,fVar6);
        uVar7 = *puVar1 & 7 | (ushort)((int)lVar4 << 4) | 8;
      }
    }
    else {
      func_0x00010811dbdc(lVar4,uVar3 >> 4,param_2 & 0xffffffff);
      uVar7 = *puVar1 & 0xf | (ushort)((int)lVar4 << 4);
    }
    *puVar1 = uVar7;
    return;
  case 3:
    uVar7 = *puVar1 & 0xfff8 | 4;
code_r0x00010811dfec:
    *puVar1 = uVar7;
    return;
  case 4:
    sVar5 = 0;
    break;
  case 5:
    sVar5 = 1;
    break;
  case 6:
    sVar5 = 2;
  }
  uVar7 = *puVar1;
  *puVar1 = uVar7 & 0xfff8 | 5;
  if ((uVar7 >> 3 & 1) == 0) {
    uVar7 = sVar5 << 4 | 5;
  }
  else {
    func_0x00010811dbdc(lVar4,uVar7 >> 4);
    uVar7 = *puVar1 & 0xf | (ushort)((int)lVar4 << 4);
  }
  *puVar1 = uVar7;
  return;
}



/* Entry: 10b8b943c; end: 10b8b944f;  */

void FUN_10b8b943c(void)

{
  FUN_10b8b7714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8b9450; end: 10b8b949f;  */

/* WARNING: Possible PIC construction at 0x00010b8b9468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8b9488: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8b946c) */
/* WARNING: Removing unreachable block (ram,0x00010b8b948c) */
/* WARNING: Removing unreachable block (ram,0x00010b8b96fc) */

void FUN_10b8b9450(int param_1,long param_2,ulong param_3)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  
  func_0x00010b8b9688();
  puVar1 = (ushort *)(param_2 + 0xf);
  uVar6 = (uint)(param_3 >> 0x20) & 0xff;
  if (uVar6 == 3) {
    uVar5 = *puVar1 & 0xfff8 | 4;
  }
  else {
    if ((param_3 & 0xff00000000) != 0) {
      fVar4 = (float)param_3;
      uVar5 = 1;
      if (uVar6 != 1) {
        uVar5 = 2;
      }
      uVar3 = *puVar1;
      *puVar1 = uVar3 & 0xfff8 | uVar5;
      if ((uVar3 & 8) == 0) {
        if ((fVar4 == (float)(int)fVar4) && (uVar6 = (uint)fVar4, uVar6 + 0x7ff < 0xfff)) {
          uVar2 = -uVar6 | 0x800;
          if (0.0 <= fVar4) {
            uVar2 = uVar6;
          }
          uVar5 = uVar5 | (ushort)(uVar2 << 4);
        }
        else {
          func_0x00010811dc28();
          uVar5 = *puVar1 & 7 | (ushort)(param_1 << 4) | 8;
        }
      }
      else {
        func_0x00010811dbdc();
        uVar5 = *puVar1 & 0xf | (ushort)(param_1 << 4);
      }
      *puVar1 = uVar5;
      return;
    }
    uVar5 = *puVar1 & 0xfff8;
  }
  *puVar1 = uVar5;
  return;
}



/* Entry: 10b8b94a0; end: 10b8b94a3;  */

undefined8 * FUN_10b8b94a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71430;
  FUN_10b8a7ac8(param_1 + 2);
  return param_1;
}



/* Entry: 10b8b94a4; end: 10b8b94b7;  */

void FUN_10b8b94a4(void)

{
  FUN_10b8b7714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8b94b8; end: 10b8b9507;  */

/* WARNING: Possible PIC construction at 0x00010b8b94d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8b94f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8b94d4) */
/* WARNING: Removing unreachable block (ram,0x00010b8b94f4) */
/* WARNING: Removing unreachable block (ram,0x00010b8b96fc) */

void FUN_10b8b94b8(int param_1,long param_2,ulong param_3)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  
  func_0x00010b8b9688();
  puVar1 = (ushort *)(param_2 + 0x33);
  uVar6 = (uint)(param_3 >> 0x20) & 0xff;
  if (uVar6 == 3) {
    uVar5 = *puVar1 & 0xfff8 | 4;
  }
  else {
    if ((param_3 & 0xff00000000) != 0) {
      fVar4 = (float)param_3;
      uVar5 = 1;
      if (uVar6 != 1) {
        uVar5 = 2;
      }
      uVar3 = *puVar1;
      *puVar1 = uVar3 & 0xfff8 | uVar5;
      if ((uVar3 & 8) == 0) {
        if ((fVar4 == (float)(int)fVar4) && (uVar6 = (uint)fVar4, uVar6 + 0x7ff < 0xfff)) {
          uVar2 = -uVar6 | 0x800;
          if (0.0 <= fVar4) {
            uVar2 = uVar6;
          }
          uVar5 = uVar5 | (ushort)(uVar2 << 4);
        }
        else {
          func_0x00010811dc28();
          uVar5 = *puVar1 & 7 | (ushort)(param_1 << 4) | 8;
        }
      }
      else {
        func_0x00010811dbdc();
        uVar5 = *puVar1 & 0xf | (ushort)(param_1 << 4);
      }
      *puVar1 = uVar5;
      return;
    }
    uVar5 = *puVar1 & 0xfff8;
  }
  *puVar1 = uVar5;
  return;
}



/* Entry: 10b8b9508; end: 10b8b9753;  */

ulong FUN_10b8b9508(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  ulong uVar7;
  float fVar8;
  
  uVar2 = *(ushort *)(param_1 + 0x59);
  param_1 = param_1 + 0xf0;
  if ((uVar2 & 7) == 0) {
    uVar7 = 0x7fc00000;
  }
  else if ((uVar2 & 7) == 4) {
    uVar7 = 0x37fc00000;
  }
  else {
    uVar3 = (uint)(short)uVar2;
    if ((uVar3 >> 3 & 1) == 0) {
      uVar4 = uVar3 >> 4 & 0x7ff;
      uVar1 = -uVar4;
      if (-1 < (int)uVar3) {
        uVar1 = uVar4;
      }
      fVar8 = (float)(int)uVar1;
    }
    else {
      func_0x00010b8b8ef0(param_1,uVar3 >> 4 & 0xfff);
      fVar8 = (float)param_1;
    }
    uVar7 = (ulong)uVar2 & 7;
    cVar5 = SBORROW8(uVar7,1);
    cVar6 = (long)(uVar7 - 1) < 0;
    if (uVar7 == 1) {
      func_0x00010b8b9624(fVar8);
      if (cVar6 == cVar5) {
        fVar8 = NAN;
      }
      uVar7 = 0x100000000;
    }
    else {
      func_0x00010b8b9624(fVar8);
      if (cVar6 == cVar5) {
        fVar8 = NAN;
      }
      uVar7 = 0x200000000;
    }
    if (cVar6 == cVar5) {
      uVar7 = 0;
    }
    uVar7 = uVar7 | (uint)fVar8;
  }
  return uVar7;
}



/* Entry: 10b8b9754; end: 10b8b9797;  */

undefined8 * FUN_10b8b9754(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71620;
  param_1[3] = &PTR_DAT_110d71670;
  func_0x00010b8b98c4(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b8b9798; end: 10b8b97a3;  */

undefined8 * FUN_10b8b9798(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71620;
  param_1[3] = &PTR_DAT_110d71670;
  func_0x00010b8b98c4(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b8b97a4; end: 10b8b97b7;  */

void FUN_10b8b97a4(void)

{
  FUN_10b8b9754();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8b97b8; end: 10b8b97cf;  */

void FUN_10b8b97b8(long param_1)

{
  FUN_10b8b9754(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8b97d0; end: 10b8b985b;  */

void FUN_10b8b97d0(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam00000001137fcd40 & 1) == 0) {
    iVar5 = 0x137fcd40;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c31088(0x1137fcd38,&UNK_10f7cb423);
      ___cxa_guard_release(0x1137fcd40);
    }
  }
  lVar4 = lRam00000001137fcd38;
  if (lRam00000001137fcd38 != 0) {
    piVar1 = (int *)(lRam00000001137fcd38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10b8b985c; end: 10b8b985f;  */

void FUN_10b8b985c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam00000001137fcd40 & 1) == 0) {
    iVar5 = 0x137fcd40;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c31088(0x1137fcd38,&UNK_10f7cb423);
      ___cxa_guard_release(0x1137fcd40);
    }
  }
  lVar4 = lRam00000001137fcd38;
  if (lRam00000001137fcd38 != 0) {
    piVar1 = (int *)(lRam00000001137fcd38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10b8b9860; end: 10b8b9937;  */

undefined8 FUN_10b8b9860(void)

{
  int iVar1;
  
  if ((bRam00000001137fcd50 & 1) == 0) {
    iVar1 = 0x137fcd50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fcd48,&UNK_10f7cb427);
      ___cxa_guard_release(0x1137fcd50);
    }
  }
  return 0x1137fcd48;
}



/* Entry: 10b8b9938; end: 10b8b993f;  */

void FUN_10b8b9938(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
    FUN_10b9a8d98(lVar2 + -0x20);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10b8b9940; end: 10b8b998b;  */

void FUN_10b8b9940(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x28) {
    FUN_10b9a8d98(lVar1 + -0x20);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10b8b998c; end: 10b8b99cf;  */

undefined8 * FUN_10b8b998c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d716d8;
  func_0x00010b8babc4(param_1 + 7);
  func_0x00010b8babc4(param_1 + 6);
  func_0x00010b8ba968(param_1 + 1);
  return param_1;
}


