/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae77dd8; end: 10ae77e1f;  */

void FUN_10ae77dd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c8ae20;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if ((param_1[1] & 1) != 0) {
    func_0x000107c2b9b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 10ae77e20; end: 10ae77fa3;  */

ulong **** FUN_10ae77e20(ulong ****param_1,long param_2,undefined *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong ****ppppuVar4;
  ulong ****ppppuVar5;
  ulong ****ppppuVar6;
  ulong ***pppuVar7;
  ulong ***pppuStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined7 uStack_90;
  undefined1 uStack_89;
  ulong ***pppuStack_88;
  ulong uStack_80;
  ulong **ppuStack_58;
  undefined8 uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    if (*(int *)param_1 != 0) {
      ClearExclusiveLocal();
      param_3 = &UNK_10e52c13c;
      ppppuVar6 = (ulong ****)0x3;
      ppppuVar4 = param_1;
      FUN_10ae87864();
      if ((int)ppppuVar4 != 0) goto LAB_10ae77f54;
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *(int *)param_1 = 0x65c2937b;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  ppuStack_58 = (ulong **)&UNK_10f6d1a77;
  uStack_50 = 0x15;
  if (*(long *)(param_2 + 8) == 0) {
    func_0x000107c31940(&pppuStack_b8,&UNK_10f6d1a74);
  }
  else {
    FUN_10ae77430(&pppuStack_b8,(long *)(param_2 + 8),1);
  }
  uStack_80 = uStack_b0;
  pppuStack_88 = pppuStack_b8;
  if (-1 < (char)bStack_a1) {
    uStack_80 = (ulong)bStack_a1;
    pppuStack_88 = (ulong ***)&pppuStack_b8;
  }
  ppppuVar4 = (ulong ****)&ppuStack_58;
  ppppuVar6 = &pppuStack_88;
  func_0x000107c2ba40(&uStack_a0);
  if (*(char *)(param_2 + 0x2f) < '\0') {
    ppppuVar4 = *(ulong *****)(param_2 + 0x18);
    __ZdlPv();
  }
  *(undefined8 *)(param_2 + 0x20) = uStack_98;
  *(ulong *)(param_2 + 0x18) = CONCAT71(uStack_9f,uStack_a0);
  *(ulong *)(param_2 + 0x28) = CONCAT17(uStack_89,uStack_90);
  uStack_89 = 0;
  uStack_a0 = 0;
  if ((char)bStack_a1 < '\0') {
    ppppuVar4 = (ulong ****)pppuStack_b8;
    __ZdlPv();
  }
  do {
    iVar1 = *(int *)param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *(int *)param_1 = 0xdd;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 0x5a308d2) {
    ppppuVar6 = (ulong ****)0x1;
    FUN_10ae87860();
    ppppuVar4 = param_1;
  }
LAB_10ae77f54:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppppuVar4;
  }
  ___stack_chk_fail();
  if ((char)bStack_a1 < '\0') {
    __ZdlPv(pppuStack_b8);
  }
  __Unwind_Resume();
  if ((ppppuVar6 == (ulong ****)0x7fffffffffffffff) && (((ulong)param_3 & 0xffffffff) == 0xffffffff)
     ) {
    pppuVar7 = (ulong ***)0xffffffffffffffff;
  }
  else {
    FUN_10ae86f04(ppppuVar6,(ulong)param_3 & 0xffffffff);
    ppppuVar5 = ppppuVar6;
    __ZNSt3__16chrono12steady_clock3nowEv();
    pppuVar7 = (ulong ***)0xffffffffffffffff;
    if ((long)ppppuVar6 <= (long)((ulong)ppppuVar5 ^ 0x7fffffffffffffff)) {
      pppuVar7 = (ulong ***)
                 ((((ulong)ppppuVar6 & ((long)ppppuVar6 >> 0x3f ^ 0xffffffffffffffffU)) +
                  (long)ppppuVar5) * 2 | 1);
    }
  }
  *ppppuVar4 = pppuVar7;
  return ppppuVar4;
}



/* Entry: 10ae77fa4; end: 10ae7801f;  */

ulong * FUN_10ae77fa4(ulong *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((param_2 == 0x7fffffffffffffff) && (param_3 == -1)) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    FUN_10ae86f04(param_2,param_3);
    uVar1 = param_2;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uVar2 = 0xffffffffffffffff;
    if ((long)param_2 <= (long)(uVar1 ^ 0x7fffffffffffffff)) {
      uVar2 = ((param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU)) + uVar1) * 2 | 1;
    }
  }
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 10ae78020; end: 10ae780a3;  */

ulong FUN_10ae78020(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *param_1;
  if (uVar2 == 0xffffffffffffffff) {
    uVar3 = 0x7fffffffffffffff;
  }
  else {
    uVar3 = uVar2 >> 1;
    if ((uVar2 & 1) == 0) {
      if (uVar3 < 2) {
        uVar3 = 1;
      }
    }
    else {
      __ZNSt3__16chrono12steady_clock3nowEv();
      uVar4 = uVar3 - (long)param_1;
      __ZNSt3__16chrono12system_clock3nowEv();
      lVar1 = 0;
      __ZNSt3__16chrono12system_clock11from_time_tEl();
      uVar2 = ((long)param_1 - lVar1) * 1000;
      uVar3 = 0x7fffffffffffffff;
      if ((long)uVar4 <= (long)(uVar2 ^ 0x7fffffffffffffff)) {
        uVar3 = uVar2 + (uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU));
      }
    }
  }
  return uVar3;
}



/* Entry: 10ae780a4; end: 10ae78103;  */

ulong FUN_10ae780a4(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (uVar2 == 0xffffffffffffffff) {
    uVar2 = 0x7fffffffffffffff;
  }
  else {
    if ((uVar2 & 1) == 0) {
      __ZNSt3__16chrono12system_clock3nowEv();
      lVar1 = 0;
      __ZNSt3__16chrono12system_clock11from_time_tEl(0);
      lVar1 = ((long)param_1 - lVar1) * -1000;
    }
    else {
      __ZNSt3__16chrono12steady_clock3nowEv();
      lVar1 = -(long)param_1;
    }
    uVar2 = (uVar2 >> 1) + lVar1;
    uVar2 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
  }
  return uVar2;
}



/* Entry: 10ae78104; end: 10ae781a3;  */

undefined1  [16] FUN_10ae78104(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  FUN_10ae78020();
  lVar7 = param_1 % 1000000000;
  uVar8 = (int)lVar7 * 4;
  uVar1 = param_1 / 1000000000 + (lVar7 >> 0x3d);
  uVar3 = uVar8 + 4000000000;
  if (-1 < lVar7) {
    uVar3 = uVar8;
  }
  uVar8 = 999999999;
  uVar4 = 0x7fffffffffffffff;
  if (uVar1 != 0) {
    uVar8 = ~(uint)((long)uVar1 >> 0x3f) & 999999999;
    uVar4 = (long)uVar1 >> 0x3f ^ 0x7fffffffffffffff;
  }
  uVar2 = uVar1;
  uVar5 = uVar3 + 3;
  if (3999999999 < uVar3 + 3) {
    uVar2 = uVar1 + 1;
    uVar5 = uVar3 + 0x1194d803;
  }
  uVar6 = uVar3;
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar1 = uVar2;
    uVar6 = uVar5;
  }
  if (uVar3 != 0xffffffff) {
    uVar8 = uVar6 >> 2;
    uVar4 = uVar1;
  }
  auVar9._8_4_ = uVar8;
  auVar9._0_8_ = uVar4;
  auVar9._12_4_ = 0;
  return auVar9;
}



/* Entry: 10ae781a4; end: 10ae7828f;  */

undefined1 * FUN_10ae781a4(undefined **param_1,undefined **param_2,int param_3)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  int iStack_280;
  undefined8 uStack_27c;
  undefined8 uStack_274;
  undefined8 uStack_26c;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined *apuStack_248 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = &PTR___tlv_bootstrap_11340d888;
  ppuVar10 = param_2;
  iStack_280 = param_3;
  (*(code *)PTR___tlv_bootstrap_11340d888)();
  if ((*(int *)ppuVar7 == 0) && ((bRam0000000113311b58 & 1) == 0)) {
    *(undefined4 *)ppuVar7 = 1;
    ppuVar8 = apuStack_248;
    ppuVar10 = (undefined **)0x40;
    _backtrace();
    uVar13 = (int)ppuVar8 - (param_3 + 2);
    uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
    if ((int)(uint)param_2 <= (int)uVar13) {
      uVar13 = (uint)param_2;
    }
    puVar14 = (undefined1 *)(ulong)uVar13;
    ppuStack_290 = ppuVar8;
    if (0 < (int)uVar13) {
      iStack_280 = uVar13 << 3;
      ppuVar10 = apuStack_248 + (param_3 + 2);
      _memcpy();
      ppuStack_290 = param_1;
    }
    *(int *)ppuVar7 = *(int *)ppuVar7 + -1;
  }
  else {
    puVar14 = (undefined1 *)0x0;
    ppuStack_290 = ppuVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar14;
  }
  ___stack_chk_fail();
  pppuVar9 = &ppuStack_290;
  pcStack_258 = FUN_10ae78290;
  uStack_274 = 0;
  uStack_26c = 0xffff000000000000;
  uStack_27c = 0x100000001;
  ppuStack_288 = ppuVar10;
  puStack_260 = &stack0xfffffffffffffff0;
  FUN_10ae783b0();
  if ((int)pppuVar9 != 0) {
    pcVar2 = (char *)((long)ppuStack_290 + (long)(int)uStack_274);
    if (*pcVar2 != '\0') {
      lVar11 = 0;
      lVar5 = (long)(int)uStack_274 + 2;
      do {
        cVar3 = pcVar2[lVar11];
        if (cVar3 != '.') {
          if (cVar3 == '\0') goto LAB_10ae78388;
          break;
        }
        uVar13 = (uint)(byte)(pcVar2 + lVar11)[1];
        bVar6 = (uVar13 & 0xffffffdf) - 0x41 < 0x1a;
        bVar1 = uVar13 == 0x5f || bVar6;
        if (uVar13 == 0x5f || bVar6) {
          do {
            lVar12 = lVar11;
            bVar4 = *(byte *)((long)ppuStack_290 + lVar12 + lVar5);
            lVar11 = lVar12 + 1;
          } while (bVar4 == 0x5f || (bVar4 & 0xffffffdf) - 0x41 < 0x1a);
          lVar11 = lVar12 + 2;
          if (bVar4 == 0x2e) goto LAB_10ae78340;
LAB_10ae78368:
          bVar1 = true;
        }
        else {
LAB_10ae78340:
          if ((byte)pcVar2[lVar11 + 1] - 0x30 < 10) {
            do {
              lVar12 = lVar11;
              lVar11 = lVar12 + 1;
            } while (*(byte *)((long)ppuStack_290 + lVar12 + lVar5) - 0x30 < 10);
            lVar11 = lVar12 + 2;
            goto LAB_10ae78368;
          }
        }
      } while (bVar1);
      if (*pcVar2 != '@') {
        return (undefined1 *)0x0;
      }
      FUN_10ae78428(&ppuStack_290);
    }
LAB_10ae78388:
    pppuVar9 = (undefined ***)(ulong)(0 < uStack_274._4_4_ && uStack_274._4_4_ < iStack_280);
  }
  return (undefined1 *)pppuVar9;
}



/* Entry: 10ae78290; end: 10ae783af;  */

void FUN_10ae78290(long param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  
  iVar6 = (int)&lStack_40;
  uStack_24 = 0;
  uStack_1c = 0xffff000000000000;
  uStack_2c = 0x100000001;
  lStack_40 = param_1;
  uStack_38 = param_2;
  uStack_30 = param_3;
  FUN_10ae783b0();
  if (iVar6 != 0) {
    pcVar3 = (char *)(lStack_40 + (int)uStack_24);
    if (*pcVar3 != '\0') {
      lVar8 = 0;
      lVar2 = (int)uStack_24 + lStack_40 + 2;
      do {
        cVar4 = pcVar3[lVar8];
        if (cVar4 != '.') {
          if (cVar4 == '\0') {
            return;
          }
          break;
        }
        uVar10 = (uint)(byte)(pcVar3 + lVar8)[1];
        bVar7 = (uVar10 & 0xffffffdf) - 0x41 < 0x1a;
        bVar1 = uVar10 == 0x5f || bVar7;
        if (uVar10 == 0x5f || bVar7) {
          do {
            lVar9 = lVar8;
            bVar5 = *(byte *)(lVar2 + lVar9);
            lVar8 = lVar9 + 1;
          } while (bVar5 == 0x5f || (bVar5 & 0xffffffdf) - 0x41 < 0x1a);
          lVar8 = lVar9 + 2;
          if (bVar5 == 0x2e) goto LAB_10ae78340;
LAB_10ae78368:
          bVar1 = true;
        }
        else {
LAB_10ae78340:
          if ((byte)pcVar3[lVar8 + 1] - 0x30 < 10) {
            do {
              lVar9 = lVar8;
              lVar8 = lVar9 + 1;
            } while (*(byte *)(lVar2 + lVar9) - 0x30 < 10);
            lVar8 = lVar9 + 2;
            goto LAB_10ae78368;
          }
        }
      } while (bVar1);
      if (*pcVar3 == '@') {
        FUN_10ae78428(&lStack_40);
      }
    }
  }
  return;
}



/* Entry: 10ae783b0; end: 10ae78427;  */

void FUN_10ae783b0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if (((iVar1 < 0x100) && (iVar2 < 0x20000)) &&
     (lVar3 = param_1, FUN_10ae78478(param_1,&UNK_10f6d1a8d), (int)lVar3 != 0)) {
    FUN_10ae784e8(param_1);
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return;
}



/* Entry: 10ae78428; end: 10ae78477;  */

void FUN_10ae78428(long param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  
  if (-1 < *(int *)(param_1 + 0x28)) {
    return;
  }
  if (*param_2 == 0) {
    pbVar5 = (byte *)0x0;
  }
  else {
    pbVar5 = param_2 + 1;
    _strlen();
    pbVar5 = pbVar5 + 1;
  }
  if ((pbVar5 == (byte *)0x0) || (-1 < *(int *)(param_1 + 0x28))) {
    return;
  }
  if (*param_2 == 0x3c) {
    uVar2 = *(uint *)(param_1 + 0x20);
    if (((0 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0x10))) &&
       (*(char *)(*(long *)(param_1 + 8) + (ulong)uVar2 + -1) == '<')) {
      FUN_10ae79aa4(param_1," ",1);
    }
  }
  if ((*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x10)) &&
     ((*param_2 == 0x5f || ((*param_2 & 0xffffffdf) - 0x41 < 0x1a)))) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20);
    *(short *)(param_1 + 0x28) = (short)pbVar5;
  }
  do {
    if (pbVar5 == (byte *)0x0) {
LAB_10ae79ae0:
      if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x10)) {
        *(undefined1 *)(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x20)) = 0;
      }
      return;
    }
    iVar4 = *(int *)(param_1 + 0x20);
    iVar1 = iVar4 + 1;
    if (*(int *)(param_1 + 0x10) <= iVar1) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x10) + 1;
      goto LAB_10ae79ae0;
    }
    bVar3 = *param_2;
    *(int *)(param_1 + 0x20) = iVar1;
    *(byte *)(*(long *)(param_1 + 8) + (long)iVar4) = bVar3;
    pbVar5 = pbVar5 + -1;
    param_2 = param_2 + 1;
  } while( true );
}



/* Entry: 10ae78478; end: 10ae784e7;  */

undefined8 FUN_10ae78478(long *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  iVar2 = *(int *)((long)param_1 + 0x14);
  lVar3 = param_1[3];
  *(int *)((long)param_1 + 0x14) = iVar2 + 1;
  *(int *)(param_1 + 3) = (int)lVar3 + 1;
  if ((iVar2 < 0x100) && ((int)lVar3 < 0x20000)) {
    pcVar1 = (char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
    if ((*pcVar1 == *param_2) && (pcVar1[1] == param_2[1])) {
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  *(int *)((long)param_1 + 0x14) = iVar2;
  return uVar4;
}



/* Entry: 10ae784e8; end: 10ae78843;  */

void FUN_10ae784e8(ulong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x18);
  iVar5 = iVar1 + 1;
  *(int *)(param_1 + 0x14) = iVar5;
  *(int *)(param_1 + 0x18) = iVar3 + 1;
  if ((0xff < iVar1) || (0x1ffff < iVar3)) goto LAB_10ae78808;
  uVar4 = param_1;
  FUN_10ae78844();
  if ((int)uVar4 != 0) {
    FUN_10ae78ab8(param_1);
    iVar5 = *(int *)(param_1 + 0x14);
    goto LAB_10ae78808;
  }
  iVar5 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar5 + 1;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if ((iVar5 < 0x100) && (iVar1 < 0x20000)) {
    puVar8 = (undefined8 *)(param_1 + 0x1c);
    uVar6 = *puVar8;
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    uVar7 = *(uint *)(param_1 + 0x28);
    uVar4 = param_1;
    FUN_10ae78f30(param_1,0x54);
    if (((int)uVar4 == 0) ||
       ((uVar4 = param_1, FUN_10ae79158(param_1,&UNK_10f6d1bb8), (int)uVar4 == 0 ||
        (uVar4 = param_1, FUN_10ae795cc(), (uVar4 & 1) == 0)))) {
      *puVar8 = uVar6;
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      *(uint *)(param_1 + 0x28) = uVar7;
      uVar4 = param_1;
      FUN_10ae78478(param_1,&UNK_10f6d1bbe);
      if (((int)uVar4 == 0) ||
         (((uVar4 = param_1, FUN_10ae7ae64(), (int)uVar4 == 0 ||
           (uVar4 = param_1, FUN_10ae7ae64(), (int)uVar4 == 0)) ||
          (uVar4 = param_1, FUN_10ae784e8(), (uVar4 & 1) == 0)))) {
        *puVar8 = uVar6;
        *(undefined4 *)(param_1 + 0x24) = uVar2;
        *(uint *)(param_1 + 0x28) = uVar7;
        uVar4 = param_1;
        FUN_10ae78478(param_1,&UNK_10f6d1bc1);
        if (((int)uVar4 == 0) || (uVar4 = param_1, FUN_10ae78844(), (uVar4 & 1) == 0)) {
          *puVar8 = uVar6;
          *(undefined4 *)(param_1 + 0x24) = uVar2;
          *(uint *)(param_1 + 0x28) = uVar7;
          uVar4 = param_1;
          FUN_10ae78f30(param_1,0x54);
          if (((int)uVar4 == 0) ||
             ((uVar4 = param_1, FUN_10ae7ae64(), (int)uVar4 == 0 ||
              (uVar4 = param_1, FUN_10ae784e8(), (uVar4 & 1) == 0)))) {
            *puVar8 = uVar6;
            *(undefined4 *)(param_1 + 0x24) = uVar2;
            *(uint *)(param_1 + 0x28) = uVar7;
            uVar4 = param_1;
            FUN_10ae78478(param_1,&DAT_10f53fae4);
            if (((int)uVar4 == 0) ||
               (((uVar4 = param_1, FUN_10ae795cc(), (int)uVar4 == 0 ||
                 (uVar4 = param_1, FUN_10ae79468(param_1,0), (int)uVar4 == 0)) ||
                (uVar4 = param_1, FUN_10ae78f30(param_1,0x5f), (int)uVar4 == 0)))) {
LAB_10ae786e0:
              *puVar8 = uVar6;
              *(undefined4 *)(param_1 + 0x24) = uVar2;
              *(uint *)(param_1 + 0x28) = uVar7;
              uVar4 = param_1;
              FUN_10ae78f30(param_1,0x54);
              if ((((int)uVar4 == 0) ||
                  (uVar4 = param_1, FUN_10ae79158(param_1,&DAT_10f408630), (int)uVar4 == 0)) ||
                 (uVar4 = param_1, FUN_10ae795cc(), (uVar4 & 1) == 0)) {
                *puVar8 = uVar6;
                *(undefined4 *)(param_1 + 0x24) = uVar2;
                *(uint *)(param_1 + 0x28) = uVar7;
                uVar4 = param_1;
                FUN_10ae78478(param_1,&DAT_10f408648);
                if (((int)uVar4 == 0) || (uVar4 = param_1, FUN_10ae78844(), (uVar4 & 1) == 0)) {
                  *puVar8 = uVar6;
                  *(undefined4 *)(param_1 + 0x24) = uVar2;
                  *(uint *)(param_1 + 0x28) = uVar7;
                  uVar4 = param_1;
                  FUN_10ae78478(param_1,&DAT_10f408636);
                  if (((int)uVar4 == 0) || (uVar4 = param_1, FUN_10ae784e8(), (uVar4 & 1) == 0)) {
                    *puVar8 = uVar6;
                    *(undefined4 *)(param_1 + 0x24) = uVar2;
                    *(uint *)(param_1 + 0x28) = uVar7;
                    uVar4 = param_1;
                    FUN_10ae78f30(param_1,0x54);
                    if (((((int)uVar4 == 0) ||
                         (uVar4 = param_1, FUN_10ae79158(param_1,&DAT_10f3dc186), (int)uVar4 == 0))
                        || (uVar4 = param_1, FUN_10ae7ae64(), (int)uVar4 == 0)) ||
                       (uVar4 = param_1, FUN_10ae784e8(), (uVar4 & 1) == 0)) {
                      *puVar8 = uVar6;
                      *(undefined4 *)(param_1 + 0x24) = uVar2;
                      goto LAB_10ae787f8;
                    }
                  }
                }
              }
            }
            else {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0x7fffffff;
              uVar4 = param_1;
              FUN_10ae795cc();
              if ((int)uVar4 == 0) goto LAB_10ae786e0;
              uVar7 = uVar7 & 0x80000000 | *(uint *)(param_1 + 0x28) & 0x7fffffff;
LAB_10ae787f8:
              *(uint *)(param_1 + 0x28) = uVar7;
            }
          }
        }
      }
    }
    iVar5 = *(int *)(param_1 + 0x14) + -1;
  }
  *(int *)(param_1 + 0x14) = iVar5;
LAB_10ae78808:
  *(int *)(param_1 + 0x14) = iVar5 + -1;
  return;
}



/* Entry: 10ae78844; end: 10ae78ab7;  */

void FUN_10ae78844(ulong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x18);
  iVar6 = iVar1 + 1;
  *(int *)(param_1 + 0x14) = iVar6;
  *(int *)(param_1 + 0x18) = iVar3 + 1;
  if ((0xff < iVar1) || (0x1ffff < iVar3)) goto LAB_10ae78a68;
  iVar6 = iVar1 + 2;
  iVar8 = iVar3 + 2;
  *(int *)(param_1 + 0x14) = iVar6;
  *(int *)(param_1 + 0x18) = iVar8;
  if (iVar1 < 0xff && iVar3 < 0x1ffff) {
    uVar7 = *(undefined8 *)(param_1 + 0x1c);
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    uVar4 = *(uint *)(param_1 + 0x28);
    uVar5 = param_1;
    FUN_10ae78f30(param_1,0x4e);
    if ((int)uVar5 == 0) {
LAB_10ae7891c:
      *(undefined8 *)(param_1 + 0x1c) = uVar7;
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      *(uint *)(param_1 + 0x28) = uVar4;
      iVar6 = *(int *)(param_1 + 0x14);
      iVar8 = *(int *)(param_1 + 0x18);
      goto LAB_10ae78934;
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0x8000ffff;
    FUN_10ae78f88(param_1);
    FUN_10ae79158(param_1,&DAT_10f4649f7);
    uVar5 = param_1;
    FUN_10ae79018();
    if ((int)uVar5 == 0) goto LAB_10ae7891c;
    *(uint *)(param_1 + 0x28) =
         *(uint *)(param_1 + 0x28) & 0x80000000 |
         *(uint *)(param_1 + 0x28) & 0xffff | (uVar4 >> 0x10 & 0x7fff) << 0x10;
    uVar5 = param_1;
    FUN_10ae78f30(param_1,0x45);
    if ((int)uVar5 == 0) goto LAB_10ae7891c;
    iVar6 = *(int *)(param_1 + 0x14) + -1;
LAB_10ae789f4:
    *(int *)(param_1 + 0x14) = iVar6;
  }
  else {
LAB_10ae78934:
    *(int *)(param_1 + 0x18) = iVar8 + 1;
    if ((iVar6 < 0x101) && (iVar8 < 0x20000)) {
      uVar9 = *(undefined8 *)(param_1 + 0x24);
      uVar7 = *(undefined8 *)(param_1 + 0x1c);
      uVar5 = param_1;
      FUN_10ae78f30(param_1,0x5a);
      if (((int)uVar5 != 0) &&
         ((uVar5 = param_1, FUN_10ae784e8(), (int)uVar5 != 0 &&
          (uVar5 = param_1, FUN_10ae78f30(param_1,0x45), (int)uVar5 != 0)))) {
        iVar6 = *(int *)(param_1 + 0x14);
        iVar1 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x14) = iVar6 + 1;
        *(int *)(param_1 + 0x18) = iVar1 + 1;
        if ((iVar6 < 0x100) && (iVar1 < 0x20000)) {
          FUN_10ae78428(param_1,&DAT_10f39abd5);
          uVar5 = param_1;
          FUN_10ae78844();
          if ((uVar5 & 1) == 0) {
            if (*(int *)(param_1 + 0x28) < 0) {
              *(undefined1 *)(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x20) + -2) = 0;
            }
            uVar5 = param_1;
            FUN_10ae78f30(param_1,0x73);
            if ((uVar5 & 1) == 0) {
              iVar6 = *(int *)(param_1 + 0x14) + -1;
              goto LAB_10ae78a08;
            }
          }
          FUN_10ae7a9c4(param_1);
          iVar6 = *(int *)(param_1 + 0x14) + -2;
          goto LAB_10ae789f4;
        }
LAB_10ae78a08:
        *(int *)(param_1 + 0x14) = iVar6;
      }
      *(undefined8 *)(param_1 + 0x24) = uVar9;
      *(undefined8 *)(param_1 + 0x1c) = uVar7;
      iVar6 = *(int *)(param_1 + 0x14);
    }
    *(int *)(param_1 + 0x14) = iVar6 + -1;
    uVar9 = *(undefined8 *)(param_1 + 0x24);
    uVar7 = *(undefined8 *)(param_1 + 0x1c);
    uVar5 = param_1;
    FUN_10ae78b98(param_1,0);
    if (((int)uVar5 == 0) || (uVar5 = param_1, FUN_10ae78d70(), (uVar5 & 1) == 0)) {
      *(undefined8 *)(param_1 + 0x24) = uVar9;
      *(undefined8 *)(param_1 + 0x1c) = uVar7;
      uVar5 = param_1;
      FUN_10ae78e70();
      if ((int)uVar5 != 0) {
        FUN_10ae78d70(param_1);
      }
    }
    iVar6 = *(int *)(param_1 + 0x14);
  }
LAB_10ae78a68:
  *(int *)(param_1 + 0x14) = iVar6 + -1;
  return;
}



/* Entry: 10ae78ab8; end: 10ae78b97;  */

ulong FUN_10ae78ab8(ulong param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar7 = 0;
  iVar5 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar5 + 1;
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if ((iVar5 < 0x100) && (iVar2 < 0x20000)) {
    uVar6 = *(undefined8 *)(param_1 + 0x1c);
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    uVar3 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar3 & 0x7fffffff;
    uVar7 = param_1;
    FUN_10ae795cc();
    if ((int)uVar7 == 0) {
      *(undefined8 *)(param_1 + 0x1c) = uVar6;
      *(undefined4 *)(param_1 + 0x24) = uVar1;
      *(uint *)(param_1 + 0x28) = uVar3;
    }
    else {
      do {
        uVar4 = param_1;
        FUN_10ae795cc();
      } while ((uVar4 & 1) != 0);
      *(uint *)(param_1 + 0x28) = uVar3 & 0x80000000 | *(uint *)(param_1 + 0x28) & 0x7fffffff;
      FUN_10ae78428(param_1,"()");
    }
    iVar5 = *(int *)(param_1 + 0x14) + -1;
  }
  *(int *)(param_1 + 0x14) = iVar5;
  return uVar7;
}



/* Entry: 10ae78b98; end: 10ae78d6f;  */

undefined8 FUN_10ae78b98(long *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar4 = 0;
  iVar2 = *(int *)((long)param_1 + 0x14);
  lVar8 = param_1[3];
  *(int *)((long)param_1 + 0x14) = iVar2 + 1;
  *(int *)(param_1 + 3) = (int)lVar8 + 1;
  if ((0xff < iVar2) || (0x1ffff < (int)lVar8)) goto LAB_10ae78d08;
  plVar5 = param_1;
  FUN_10ae78478(param_1,&UNK_10f6d1b7f);
  if ((int)plVar5 != 0) {
LAB_10ae78bec:
    FUN_10ae78428(param_1,"?");
LAB_10ae78bfc:
    uVar4 = 1;
    goto LAB_10ae78d08;
  }
  uVar13 = *(undefined8 *)((long)param_1 + 0x24);
  uVar12 = *(undefined8 *)((long)param_1 + 0x1c);
  plVar5 = param_1;
  FUN_10ae78f30(param_1,0x53);
  if ((int)plVar5 != 0) {
    iVar2 = *(int *)((long)param_1 + 0x14);
    lVar8 = param_1[3];
    *(int *)((long)param_1 + 0x14) = iVar2 + 1;
    *(int *)(param_1 + 3) = (int)lVar8 + 1;
    if ((iVar2 < 0x100) && ((int)lVar8 < 0x20000)) {
      pbVar1 = (byte *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
      uVar9 = (uint)*pbVar1;
      if (*pbVar1 != 0) {
        lVar8 = 0;
        pbVar7 = pbVar1;
        do {
          bVar3 = uVar9 - 0x30 < 10;
          if ((!bVar3 && 0x18 < uVar9 - 0x41) && (bVar3 || uVar9 - 0x41 != 0x19)) {
            if (lVar8 == 0) goto LAB_10ae78ca4;
            break;
          }
          pbVar7 = pbVar7 + 1;
          uVar9 = (uint)*pbVar7;
          lVar8 = lVar8 + -1;
        } while (uVar9 != 0);
        *(int *)((long)param_1 + 0x1c) =
             *(int *)((long)param_1 + 0x1c) + ((int)pbVar7 - (int)pbVar1);
        *(int *)((long)param_1 + 0x14) = iVar2;
        plVar5 = param_1;
        FUN_10ae78f30(param_1,0x5f);
        if ((int)plVar5 != 0) goto LAB_10ae78bec;
        goto LAB_10ae78ca8;
      }
    }
LAB_10ae78ca4:
    *(int *)((long)param_1 + 0x14) = iVar2;
  }
LAB_10ae78ca8:
  *(undefined8 *)((long)param_1 + 0x24) = uVar13;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar12;
  plVar5 = param_1;
  FUN_10ae78f30(param_1,0x53);
  if ((int)plVar5 != 0) {
    puVar6 = &DAT_10f6d1b82;
    ppuVar11 = &PTR_DAT_110c8b618;
    do {
      iVar2 = param_2;
      if (puVar6[1] != 't') {
        iVar2 = 1;
      }
      if (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == puVar6[1] && iVar2 != 0) {
        FUN_10ae78428(param_1,&UNK_10f5af602);
        pcVar10 = ppuVar11[-2];
        if (*pcVar10 != '\0') {
          FUN_10ae78428(param_1,&DAT_10f39abd5);
          FUN_10ae78428(param_1,pcVar10);
        }
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
        goto LAB_10ae78bfc;
      }
      puVar6 = *ppuVar11;
      ppuVar11 = ppuVar11 + 3;
    } while (puVar6 != (undefined *)0x0);
  }
  uVar4 = 0;
  *(undefined8 *)((long)param_1 + 0x24) = uVar13;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar12;
LAB_10ae78d08:
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
  return uVar4;
}



/* Entry: 10ae78d70; end: 10ae78e6f;  */

undefined8 FUN_10ae78d70(ulong param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar4 = 0;
  iVar6 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar6 + 1;
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if ((0xff < iVar6) || (0x1ffff < iVar2)) goto LAB_10ae78e44;
  uVar7 = *(undefined8 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar3 & 0x7fffffff;
  uVar5 = param_1;
  FUN_10ae78f30(param_1,0x49);
  if (((int)uVar5 == 0) || (uVar5 = param_1, FUN_10ae7aa44(), (int)uVar5 == 0)) {
LAB_10ae78e24:
    uVar4 = 0;
    *(undefined8 *)(param_1 + 0x1c) = uVar7;
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(uint *)(param_1 + 0x28) = uVar3;
  }
  else {
    do {
      uVar5 = param_1;
      FUN_10ae7aa44();
    } while ((uVar5 & 1) != 0);
    uVar5 = param_1;
    FUN_10ae78f30(param_1,0x45);
    if ((int)uVar5 == 0) goto LAB_10ae78e24;
    *(uint *)(param_1 + 0x28) = uVar3 & 0x80000000 | *(uint *)(param_1 + 0x28) & 0x7fffffff;
    FUN_10ae78428(param_1,&UNK_10f5af5fc);
    uVar4 = 1;
  }
  iVar6 = *(int *)(param_1 + 0x14) + -1;
LAB_10ae78e44:
  *(int *)(param_1 + 0x14) = iVar6;
  return uVar4;
}



/* Entry: 10ae78e70; end: 10ae78f2f;  */

undefined8 FUN_10ae78e70(ulong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if ((0xff < iVar1) || (0x1ffff < iVar2)) goto LAB_10ae78f00;
  uVar4 = param_1;
  FUN_10ae7ac0c();
  if ((uVar4 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x24);
    uVar5 = *(undefined8 *)(param_1 + 0x1c);
    uVar4 = param_1;
    FUN_10ae78478(param_1,&DAT_10f6d1b82);
    if ((int)uVar4 != 0) {
      FUN_10ae78428(param_1,&UNK_10f5af64c);
      uVar4 = param_1;
      FUN_10ae7ac0c();
      if ((uVar4 & 1) != 0) goto LAB_10ae78eb4;
    }
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x24) = uVar6;
    *(undefined8 *)(param_1 + 0x1c) = uVar5;
  }
  else {
LAB_10ae78eb4:
    uVar3 = 1;
  }
LAB_10ae78f00:
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return uVar3;
}



/* Entry: 10ae78f30; end: 10ae78f87;  */

undefined8 FUN_10ae78f30(long *param_1,char param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)((long)param_1 + 0x14);
  lVar2 = param_1[3];
  *(int *)((long)param_1 + 0x14) = iVar1 + 1;
  *(int *)(param_1 + 3) = (int)lVar2 + 1;
  if ((iVar1 < 0x100) && ((int)lVar2 < 0x20000)) {
    if (*(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c)) == param_2) {
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  *(int *)((long)param_1 + 0x14) = iVar1;
  return uVar3;
}



/* Entry: 10ae78f88; end: 10ae79017;  */

bool FUN_10ae78f88(long param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  bVar2 = false;
  iVar6 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar6 + 1;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if ((iVar6 < 0x100) && (iVar1 < 0x20000)) {
    lVar3 = param_1;
    FUN_10ae78f30(param_1,0x72);
    lVar4 = param_1;
    FUN_10ae78f30(param_1,0x56);
    lVar5 = param_1;
    FUN_10ae78f30(param_1,0x4b);
    bVar2 = (int)lVar4 + (int)lVar3 != 0 || (int)lVar5 != 0;
    iVar6 = *(int *)(param_1 + 0x14) + -1;
  }
  *(int *)(param_1 + 0x14) = iVar6;
  return bVar2;
}



/* Entry: 10ae79018; end: 10ae79157;  */

void FUN_10ae79018(ulong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if ((iVar1 < 0x100) && (iVar2 < 0x20000)) {
    bVar6 = false;
    uVar5 = *(uint *)(param_1 + 0x28);
    while( true ) {
      if (0x1ffff < (int)(uVar5 * 2)) {
        FUN_10ae78428(param_1,&DAT_10f39abd5);
      }
      uVar4 = param_1;
      FUN_10ae791c8();
      if (((((uVar4 & 1) == 0) && (uVar4 = param_1, FUN_10ae78b98(param_1,1), (uVar4 & 1) == 0)) &&
          (uVar4 = param_1, FUN_10ae78e70(), (uVar4 & 1) == 0)) &&
         ((uVar4 = param_1, FUN_10ae78f30(param_1,0x4d), (int)uVar4 == 0 ||
          (uVar4 = param_1, FUN_10ae7928c(), (int)uVar4 == 0)))) break;
      uVar5 = *(uint *)(param_1 + 0x28);
      uVar3 = (int)(uVar5 << 1) >> 0x11;
      bVar6 = true;
      if (-1 < (int)uVar3) {
        uVar5 = (uVar5 & 0x80000000 | uVar5 & 0xffff | (uVar3 & 0x7fff) << 0x10) + 0x10000;
        *(uint *)(param_1 + 0x28) = uVar5;
      }
    }
    if ((*(int *)(param_1 + 0x28) < 0) &&
       ((0x1ffff < *(int *)(param_1 + 0x28) * 2 &&
        (uVar5 = *(int *)(param_1 + 0x20) - 2, 1 < *(int *)(param_1 + 0x20))))) {
      *(uint *)(param_1 + 0x20) = uVar5;
      *(undefined1 *)(*(long *)(param_1 + 8) + (ulong)uVar5) = 0;
    }
    if ((bVar6) && (uVar4 = param_1, FUN_10ae78d70(), (int)uVar4 != 0)) {
      FUN_10ae79018(param_1);
    }
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return;
}



/* Entry: 10ae79158; end: 10ae791c7;  */

undefined8 FUN_10ae79158(long *param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  iVar1 = *(int *)((long)param_1 + 0x14);
  lVar4 = param_1[3];
  *(int *)((long)param_1 + 0x14) = iVar1 + 1;
  *(int *)(param_1 + 3) = (int)lVar4 + 1;
  if ((iVar1 < 0x100) && ((int)lVar4 < 0x20000)) {
    cVar3 = *(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
    if (cVar3 != '\0') {
      cVar2 = *param_2;
      while (cVar2 != '\0') {
        param_2 = param_2 + 1;
        if (cVar3 == cVar2) {
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
          uVar5 = 1;
          goto LAB_10ae791ac;
        }
        cVar2 = *param_2;
      }
    }
    uVar5 = 0;
  }
LAB_10ae791ac:
  *(int *)((long)param_1 + 0x14) = iVar1;
  return uVar5;
}



/* Entry: 10ae791c8; end: 10ae7928b;  */

undefined8 FUN_10ae791c8(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if ((iVar1 < 0x100) && (iVar2 < 0x20000)) {
    lVar4 = param_1;
    FUN_10ae78478(param_1,&UNK_10f6d1a90);
    if ((int)lVar4 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x24);
      uVar5 = *(undefined8 *)(param_1 + 0x1c);
      lVar4 = param_1;
      FUN_10ae78f30(param_1,0x54);
      if ((((int)lVar4 == 0) || (lVar4 = param_1, FUN_10ae79468(param_1,0), (int)lVar4 == 0)) ||
         (lVar4 = param_1, FUN_10ae78f30(param_1,0x5f), (int)lVar4 == 0)) {
        uVar3 = 0;
        *(undefined8 *)(param_1 + 0x24) = uVar6;
        *(undefined8 *)(param_1 + 0x1c) = uVar5;
        goto LAB_10ae79270;
      }
    }
    FUN_10ae78428(param_1,"?");
    uVar3 = 1;
  }
LAB_10ae79270:
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return uVar3;
}



/* Entry: 10ae7928c; end: 10ae79467;  */

undefined8 FUN_10ae7928c(ulong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uVar3 = 0;
  iVar5 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar5 + 1;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if ((0xff < iVar5) || (0x1ffff < iVar1)) goto LAB_10ae79438;
  puVar6 = (undefined8 *)(param_1 + 0x1c);
  uStack_50 = *puVar6;
  uStack_48 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(uint *)(param_1 + 0x28);
  iStack_54 = -1;
  uVar4 = param_1;
  FUN_10ae78478(param_1,&UNK_10f6d1a93);
  if ((int)uVar4 == 0) {
LAB_10ae79360:
    *puVar6 = uStack_50;
    *(undefined4 *)(param_1 + 0x24) = uStack_48;
    *(uint *)(param_1 + 0x28) = uVar2;
    iStack_54 = -1;
    uVar4 = param_1;
    FUN_10ae78478(param_1,&UNK_10f6d1aa5);
    if ((int)uVar4 != 0) {
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0x7fffffff;
      uVar4 = param_1;
      FUN_10ae795cc();
      if ((int)uVar4 != 0) {
        do {
          uVar4 = param_1;
          FUN_10ae795cc();
        } while ((uVar4 & 1) != 0);
        *(uint *)(param_1 + 0x28) = uVar2 & 0x80000000 | *(uint *)(param_1 + 0x28) & 0x7fffffff;
        uVar4 = param_1;
        FUN_10ae78f30(param_1,0x45);
        if ((int)uVar4 != 0) {
          FUN_10ae79468(param_1,&iStack_54);
          iVar5 = iStack_54;
          if ((iStack_54 < 0x7ffffffe) &&
             (uVar4 = param_1, FUN_10ae78f30(param_1,0x5f), (int)uVar4 != 0)) {
            FUN_10ae78428(param_1,&UNK_10f6d1aa8);
            goto LAB_10ae79340;
          }
        }
      }
    }
    uVar3 = 0;
    *puVar6 = uStack_50;
    *(undefined4 *)(param_1 + 0x24) = uStack_48;
    *(uint *)(param_1 + 0x28) = uVar2;
  }
  else {
    FUN_10ae79468(param_1,&iStack_54);
    iVar5 = iStack_54;
    if ((0x7ffffffd < iStack_54) || (uVar4 = param_1, FUN_10ae78f30(param_1,0x5f), (int)uVar4 == 0))
    goto LAB_10ae79360;
    FUN_10ae78428(param_1,&UNK_10f6d1a96);
LAB_10ae79340:
    FUN_10ae7952c(param_1,iVar5 + 2);
    FUN_10ae78428(param_1,&DAT_10f2da10d);
    uVar3 = 1;
  }
  iVar5 = *(int *)(param_1 + 0x14) + -1;
LAB_10ae79438:
  *(int *)(param_1 + 0x14) = iVar5;
  return uVar3;
}



/* Entry: 10ae79468; end: 10ae7952b;  */

undefined8 FUN_10ae79468(long *param_1,int *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  
  uVar3 = 0;
  iVar5 = *(int *)((long)param_1 + 0x14);
  lVar2 = param_1[3];
  *(int *)((long)param_1 + 0x14) = iVar5 + 1;
  *(int *)(param_1 + 3) = (int)lVar2 + 1;
  if ((iVar5 < 0x100) && ((int)lVar2 < 0x20000)) {
    plVar4 = param_1;
    FUN_10ae78f30(param_1,0x6e);
    iVar5 = *(int *)((long)param_1 + 0x1c);
    bVar1 = *(byte *)(*param_1 + (long)iVar5);
    uVar7 = (uint)bVar1;
    if (bVar1 - 0x30 < 10) {
      iVar6 = 0;
      pbVar8 = (byte *)((long)iVar5 + *param_1);
      do {
        pbVar8 = pbVar8 + 1;
        iVar6 = uVar7 + iVar6 * 10 + -0x30;
        uVar7 = (uint)*pbVar8;
        iVar5 = iVar5 + 1;
      } while (uVar7 - 0x30 < 10);
      *(int *)((long)param_1 + 0x1c) = iVar5;
      if (param_2 != (int *)0x0) {
        iVar5 = -iVar6;
        if ((int)plVar4 == 0) {
          iVar5 = iVar6;
        }
        *param_2 = iVar5;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
  return uVar3;
}



/* Entry: 10ae7952c; end: 10ae795cb;  */

ulong FUN_10ae7952c(ulong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char acStack_2c [19];
  char cStack_19;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 0x28) < 0) {
    lVar6 = 0;
    pcVar5 = &cStack_19;
    do {
      pcVar9 = pcVar5;
      lVar6 = lVar6 + 1;
      *pcVar9 = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
      if (pcVar9 <= acStack_2c) break;
      uVar2 = param_2 - 10;
      pcVar5 = pcVar9 + -1;
      param_2 = param_2 / 10;
    } while (uVar2 < 0xffffffed);
    FUN_10ae79aa4(param_1,pcVar9,lVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar3 = 0;
  iVar7 = *(int *)(param_1 + 0x14);
  iVar10 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar7 + 1;
  *(int *)(param_1 + 0x18) = iVar10 + 1;
  if ((0xff < iVar7) || (0x1ffff < iVar10)) goto LAB_10ae79a30;
  uVar15 = *(undefined8 *)(param_1 + 0x24);
  uVar12 = *(undefined8 *)(param_1 + 0x1c);
  uVar3 = param_1;
  FUN_10ae78f88();
  uVar4 = param_1;
  if ((int)uVar3 == 0) {
    *(undefined8 *)(param_1 + 0x24) = uVar15;
    *(undefined8 *)(param_1 + 0x1c) = uVar12;
    uVar3 = param_1;
    FUN_10ae79158(param_1,&UNK_10f6d1ab3);
    if ((int)uVar3 != 0) {
      FUN_10ae795cc();
      goto joined_r0x00010ae79a18;
    }
    *(undefined8 *)(param_1 + 0x24) = uVar15;
    *(undefined8 *)(param_1 + 0x1c) = uVar12;
    uVar3 = param_1;
    FUN_10ae78478(param_1,&UNK_10f6d1ab9);
    if (((int)uVar3 != 0) && (uVar3 = param_1, FUN_10ae795cc(), (uVar3 & 1) != 0))
    goto LAB_10ae7964c;
    *(undefined8 *)(param_1 + 0x24) = uVar15;
    *(undefined8 *)(param_1 + 0x1c) = uVar12;
    uVar3 = param_1;
    FUN_10ae78f30(param_1,0x55);
    if (((int)uVar3 != 0) &&
       ((uVar3 = param_1, FUN_10ae79afc(), (int)uVar3 != 0 &&
        (uVar3 = param_1, FUN_10ae795cc(), (uVar3 & 1) != 0)))) goto LAB_10ae7964c;
    *(undefined8 *)(param_1 + 0x24) = uVar15;
    *(undefined8 *)(param_1 + 0x1c) = uVar12;
    iVar8 = *(int *)(param_1 + 0x14);
    iVar1 = *(int *)(param_1 + 0x18);
    iVar7 = iVar8 + 1;
    iVar10 = iVar1 + 1;
    *(int *)(param_1 + 0x14) = iVar7;
    *(int *)(param_1 + 0x18) = iVar10;
    if ((iVar8 < 0x100) && (iVar1 < 0x20000)) {
      pcVar5 = "v";
      ppuVar11 = &PTR_DAT_110c8ae68;
      do {
        uVar3 = param_1;
        if (pcVar5[1] == '\0') {
          FUN_10ae78f30(param_1,(long)*pcVar5);
joined_r0x00010ae79710:
          if ((uVar3 & 1) != 0) {
            FUN_10ae78428(param_1,ppuVar11[-2]);
            goto LAB_10ae79a50;
          }
        }
        else if (pcVar5[2] == '\0') {
          FUN_10ae78478();
          goto joined_r0x00010ae79710;
        }
        pcVar5 = *ppuVar11;
        ppuVar11 = ppuVar11 + 3;
      } while (pcVar5 != (char *)0x0);
      uVar16 = *(undefined8 *)(param_1 + 0x24);
      uVar13 = *(undefined8 *)(param_1 + 0x1c);
      uVar3 = param_1;
      FUN_10ae78f30(param_1,0x75);
      if (((int)uVar3 == 0) || (uVar3 = param_1, FUN_10ae79afc(), (int)uVar3 == 0)) {
        *(undefined8 *)(param_1 + 0x24) = uVar16;
        *(undefined8 *)(param_1 + 0x1c) = uVar13;
        iVar7 = *(int *)(param_1 + 0x14);
        iVar10 = *(int *)(param_1 + 0x18);
        goto LAB_10ae7974c;
      }
      goto LAB_10ae79a50;
    }
LAB_10ae7974c:
    *(int *)(param_1 + 0x18) = iVar10 + 1;
    if ((iVar7 < 0x101) && (iVar10 < 0x20000)) {
      uVar16 = *(undefined8 *)(param_1 + 0x24);
      uVar13 = *(undefined8 *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x14) = iVar7 + 1;
      *(int *)(param_1 + 0x18) = iVar10 + 2;
      if ((iVar7 < 0x100) &&
         ((iVar10 < 0x1ffff &&
          (uVar3 = param_1, FUN_10ae78478(param_1,&UNK_10f6d1aee), (uVar3 & 1) == 0)))) {
        uVar17 = *(undefined8 *)(param_1 + 0x24);
        uVar14 = *(undefined8 *)(param_1 + 0x1c);
        uVar3 = param_1;
        FUN_10ae78478(param_1,&DAT_10f408621);
        if (((int)uVar3 == 0) ||
           ((uVar3 = param_1, FUN_10ae79eb8(), (int)uVar3 == 0 ||
            (uVar3 = param_1, FUN_10ae78f30(param_1,0x45), (uVar3 & 1) == 0)))) {
          *(undefined8 *)(param_1 + 0x24) = uVar17;
          *(undefined8 *)(param_1 + 0x1c) = uVar14;
          uVar3 = param_1;
          FUN_10ae78478(param_1,&UNK_10f6d1af1);
          if (((int)uVar3 != 0) && (uVar3 = param_1, FUN_10ae795cc(), (int)uVar3 != 0)) {
            do {
              uVar3 = param_1;
              FUN_10ae795cc();
            } while ((uVar3 & 1) != 0);
            uVar3 = param_1;
            FUN_10ae78f30(param_1,0x45);
            if ((uVar3 & 1) != 0) goto LAB_10ae79824;
          }
          *(undefined8 *)(param_1 + 0x24) = uVar17;
          *(undefined8 *)(param_1 + 0x1c) = uVar14;
        }
      }
LAB_10ae79824:
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      uVar3 = param_1;
      FUN_10ae78f30(param_1,0x46);
      if ((int)uVar3 != 0) {
        FUN_10ae78f30(param_1,0x59);
        uVar3 = param_1;
        FUN_10ae78ab8();
        if ((int)uVar3 != 0) {
          FUN_10ae78f30(param_1,0x4f);
          uVar3 = param_1;
          FUN_10ae78f30(param_1,0x45);
          if ((int)uVar3 != 0) goto LAB_10ae79a50;
        }
      }
      *(undefined8 *)(param_1 + 0x24) = uVar16;
      *(undefined8 *)(param_1 + 0x1c) = uVar13;
      iVar7 = *(int *)(param_1 + 0x14);
    }
    *(int *)(param_1 + 0x14) = iVar7 + -1;
    uVar3 = param_1;
    FUN_10ae79c54();
    if ((uVar3 & 1) != 0) goto LAB_10ae7964c;
    iVar8 = *(int *)(param_1 + 0x14);
    iVar1 = *(int *)(param_1 + 0x18);
    iVar7 = iVar8 + 1;
    iVar10 = iVar1 + 1;
    *(int *)(param_1 + 0x14) = iVar7;
    *(int *)(param_1 + 0x18) = iVar10;
    if ((iVar8 < 0x100) && (iVar1 < 0x20000)) {
      uVar16 = *(undefined8 *)(param_1 + 0x24);
      uVar13 = *(undefined8 *)(param_1 + 0x1c);
      uVar3 = param_1;
      FUN_10ae78f30(param_1,0x41);
      if (((int)uVar3 == 0) ||
         (((uVar3 = param_1, FUN_10ae79468(param_1,0), (int)uVar3 == 0 ||
           (uVar3 = param_1, FUN_10ae78f30(param_1,0x5f), (int)uVar3 == 0)) ||
          (uVar3 = param_1, FUN_10ae795cc(), (uVar3 & 1) == 0)))) {
        *(undefined8 *)(param_1 + 0x24) = uVar16;
        *(undefined8 *)(param_1 + 0x1c) = uVar13;
        uVar3 = param_1;
        FUN_10ae78f30(param_1,0x41);
        if ((int)uVar3 != 0) {
          FUN_10ae79eb8(param_1);
          uVar3 = param_1;
          FUN_10ae78f30(param_1,0x5f);
          if (((int)uVar3 != 0) && (uVar3 = param_1, FUN_10ae795cc(), (int)uVar3 != 0))
          goto LAB_10ae79a50;
        }
        *(undefined8 *)(param_1 + 0x24) = uVar16;
        *(undefined8 *)(param_1 + 0x1c) = uVar13;
        iVar7 = *(int *)(param_1 + 0x14);
        iVar10 = *(int *)(param_1 + 0x18);
        iVar8 = iVar7 + -1;
        goto LAB_10ae79944;
      }
LAB_10ae79a50:
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      goto LAB_10ae7964c;
    }
LAB_10ae79944:
    *(int *)(param_1 + 0x14) = iVar7;
    *(int *)(param_1 + 0x18) = iVar10 + 1;
    if ((iVar8 < 0x100) && (iVar10 < 0x20000)) {
      uVar16 = *(undefined8 *)(param_1 + 0x24);
      uVar13 = *(undefined8 *)(param_1 + 0x1c);
      uVar3 = param_1;
      FUN_10ae78f30(param_1,0x4d);
      if (((int)uVar3 != 0) &&
         ((uVar3 = param_1, FUN_10ae795cc(), (int)uVar3 != 0 &&
          (uVar3 = param_1, FUN_10ae795cc(), (int)uVar3 != 0)))) goto LAB_10ae79a50;
      *(undefined8 *)(param_1 + 0x24) = uVar16;
      *(undefined8 *)(param_1 + 0x1c) = uVar13;
      iVar8 = *(int *)(param_1 + 0x14) + -1;
    }
    *(int *)(param_1 + 0x14) = iVar8;
    uVar3 = param_1;
    FUN_10ae79cb8();
    if ((((uVar3 & 1) != 0) || (uVar3 = param_1, FUN_10ae78b98(param_1,0), (uVar3 & 1) != 0)) ||
       ((uVar3 = param_1, FUN_10ae79d78(), (int)uVar3 != 0 &&
        (uVar3 = param_1, FUN_10ae78d70(), (uVar3 & 1) != 0)))) goto LAB_10ae7964c;
    *(undefined8 *)(param_1 + 0x24) = uVar15;
    *(undefined8 *)(param_1 + 0x1c) = uVar12;
    uVar3 = param_1;
    FUN_10ae791c8();
    if ((uVar3 & 1) != 0) goto LAB_10ae7964c;
    uVar3 = param_1;
    FUN_10ae78478(param_1,&UNK_10f6d1abc);
    if (((int)uVar3 != 0) && (uVar3 = param_1, FUN_10ae79468(param_1,0), (int)uVar3 != 0)) {
      FUN_10ae78f30(param_1,0x5f);
      goto joined_r0x00010ae79a18;
    }
LAB_10ae79a1c:
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x24) = uVar15;
    *(undefined8 *)(param_1 + 0x1c) = uVar12;
  }
  else {
    FUN_10ae795cc();
joined_r0x00010ae79a18:
    if ((uVar4 & 1) == 0) goto LAB_10ae79a1c;
LAB_10ae7964c:
    uVar3 = 1;
  }
  iVar7 = *(int *)(param_1 + 0x14) + -1;
LAB_10ae79a30:
  *(int *)(param_1 + 0x14) = iVar7;
  return uVar3;
}



/* Entry: 10ae795cc; end: 10ae79aa3;  */

undefined8 FUN_10ae795cc(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar2 = 0;
  iVar6 = *(int *)(param_1 + 0x14);
  iVar8 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar6 + 1;
  *(int *)(param_1 + 0x18) = iVar8 + 1;
  if ((0xff < iVar6) || (0x1ffff < iVar8)) goto LAB_10ae79a30;
  uVar12 = *(undefined8 *)(param_1 + 0x24);
  uVar10 = *(undefined8 *)(param_1 + 0x1c);
  uVar3 = param_1;
  FUN_10ae78f88();
  uVar4 = param_1;
  if ((int)uVar3 == 0) {
    *(undefined8 *)(param_1 + 0x24) = uVar12;
    *(undefined8 *)(param_1 + 0x1c) = uVar10;
    uVar3 = param_1;
    FUN_10ae79158(param_1,&UNK_10f6d1ab3);
    if ((int)uVar3 != 0) {
      FUN_10ae795cc();
      goto joined_r0x00010ae79a18;
    }
    *(undefined8 *)(param_1 + 0x24) = uVar12;
    *(undefined8 *)(param_1 + 0x1c) = uVar10;
    uVar3 = param_1;
    FUN_10ae78478(param_1,&UNK_10f6d1ab9);
    if (((int)uVar3 != 0) && (uVar3 = param_1, FUN_10ae795cc(), (uVar3 & 1) != 0))
    goto LAB_10ae7964c;
    *(undefined8 *)(param_1 + 0x24) = uVar12;
    *(undefined8 *)(param_1 + 0x1c) = uVar10;
    uVar3 = param_1;
    FUN_10ae78f30(param_1,0x55);
    if (((int)uVar3 != 0) &&
       ((uVar3 = param_1, FUN_10ae79afc(), (int)uVar3 != 0 &&
        (uVar3 = param_1, FUN_10ae795cc(), (uVar3 & 1) != 0)))) goto LAB_10ae7964c;
    *(undefined8 *)(param_1 + 0x24) = uVar12;
    *(undefined8 *)(param_1 + 0x1c) = uVar10;
    iVar7 = *(int *)(param_1 + 0x14);
    iVar1 = *(int *)(param_1 + 0x18);
    iVar6 = iVar7 + 1;
    iVar8 = iVar1 + 1;
    *(int *)(param_1 + 0x14) = iVar6;
    *(int *)(param_1 + 0x18) = iVar8;
    if ((iVar7 < 0x100) && (iVar1 < 0x20000)) {
      pcVar5 = "v";
      ppuVar9 = &PTR_DAT_110c8ae68;
      do {
        uVar3 = param_1;
        if (pcVar5[1] == '\0') {
          FUN_10ae78f30(param_1,(long)*pcVar5);
joined_r0x00010ae79710:
          if ((uVar3 & 1) != 0) {
            FUN_10ae78428(param_1,ppuVar9[-2]);
            goto LAB_10ae79a50;
          }
        }
        else if (pcVar5[2] == '\0') {
          FUN_10ae78478();
          goto joined_r0x00010ae79710;
        }
        pcVar5 = *ppuVar9;
        ppuVar9 = ppuVar9 + 3;
      } while (pcVar5 != (char *)0x0);
      uVar13 = *(undefined8 *)(param_1 + 0x24);
      uVar2 = *(undefined8 *)(param_1 + 0x1c);
      uVar3 = param_1;
      FUN_10ae78f30(param_1,0x75);
      if (((int)uVar3 == 0) || (uVar3 = param_1, FUN_10ae79afc(), (int)uVar3 == 0)) {
        *(undefined8 *)(param_1 + 0x24) = uVar13;
        *(undefined8 *)(param_1 + 0x1c) = uVar2;
        iVar6 = *(int *)(param_1 + 0x14);
        iVar8 = *(int *)(param_1 + 0x18);
        goto LAB_10ae7974c;
      }
      goto LAB_10ae79a50;
    }
LAB_10ae7974c:
    *(int *)(param_1 + 0x18) = iVar8 + 1;
    if ((iVar6 < 0x101) && (iVar8 < 0x20000)) {
      uVar13 = *(undefined8 *)(param_1 + 0x24);
      uVar2 = *(undefined8 *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x14) = iVar6 + 1;
      *(int *)(param_1 + 0x18) = iVar8 + 2;
      if ((iVar6 < 0x100) &&
         ((iVar8 < 0x1ffff &&
          (uVar3 = param_1, FUN_10ae78478(param_1,&UNK_10f6d1aee), (uVar3 & 1) == 0)))) {
        uVar14 = *(undefined8 *)(param_1 + 0x24);
        uVar11 = *(undefined8 *)(param_1 + 0x1c);
        uVar3 = param_1;
        FUN_10ae78478(param_1,&DAT_10f408621);
        if (((int)uVar3 == 0) ||
           ((uVar3 = param_1, FUN_10ae79eb8(), (int)uVar3 == 0 ||
            (uVar3 = param_1, FUN_10ae78f30(param_1,0x45), (uVar3 & 1) == 0)))) {
          *(undefined8 *)(param_1 + 0x24) = uVar14;
          *(undefined8 *)(param_1 + 0x1c) = uVar11;
          uVar3 = param_1;
          FUN_10ae78478(param_1,&UNK_10f6d1af1);
          if (((int)uVar3 != 0) && (uVar3 = param_1, FUN_10ae795cc(), (int)uVar3 != 0)) {
            do {
              uVar3 = param_1;
              FUN_10ae795cc();
            } while ((uVar3 & 1) != 0);
            uVar3 = param_1;
            FUN_10ae78f30(param_1,0x45);
            if ((uVar3 & 1) != 0) goto LAB_10ae79824;
          }
          *(undefined8 *)(param_1 + 0x24) = uVar14;
          *(undefined8 *)(param_1 + 0x1c) = uVar11;
        }
      }
LAB_10ae79824:
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      uVar3 = param_1;
      FUN_10ae78f30(param_1,0x46);
      if ((int)uVar3 != 0) {
        FUN_10ae78f30(param_1,0x59);
        uVar3 = param_1;
        FUN_10ae78ab8();
        if ((int)uVar3 != 0) {
          FUN_10ae78f30(param_1,0x4f);
          uVar3 = param_1;
          FUN_10ae78f30(param_1,0x45);
          if ((int)uVar3 != 0) goto LAB_10ae79a50;
        }
      }
      *(undefined8 *)(param_1 + 0x24) = uVar13;
      *(undefined8 *)(param_1 + 0x1c) = uVar2;
      iVar6 = *(int *)(param_1 + 0x14);
    }
    *(int *)(param_1 + 0x14) = iVar6 + -1;
    uVar3 = param_1;
    FUN_10ae79c54();
    if ((uVar3 & 1) != 0) goto LAB_10ae7964c;
    iVar7 = *(int *)(param_1 + 0x14);
    iVar1 = *(int *)(param_1 + 0x18);
    iVar6 = iVar7 + 1;
    iVar8 = iVar1 + 1;
    *(int *)(param_1 + 0x14) = iVar6;
    *(int *)(param_1 + 0x18) = iVar8;
    if ((iVar7 < 0x100) && (iVar1 < 0x20000)) {
      uVar13 = *(undefined8 *)(param_1 + 0x24);
      uVar2 = *(undefined8 *)(param_1 + 0x1c);
      uVar3 = param_1;
      FUN_10ae78f30(param_1,0x41);
      if (((int)uVar3 == 0) ||
         (((uVar3 = param_1, FUN_10ae79468(param_1,0), (int)uVar3 == 0 ||
           (uVar3 = param_1, FUN_10ae78f30(param_1,0x5f), (int)uVar3 == 0)) ||
          (uVar3 = param_1, FUN_10ae795cc(), (uVar3 & 1) == 0)))) {
        *(undefined8 *)(param_1 + 0x24) = uVar13;
        *(undefined8 *)(param_1 + 0x1c) = uVar2;
        uVar3 = param_1;
        FUN_10ae78f30(param_1,0x41);
        if ((int)uVar3 != 0) {
          FUN_10ae79eb8(param_1);
          uVar3 = param_1;
          FUN_10ae78f30(param_1,0x5f);
          if (((int)uVar3 != 0) && (uVar3 = param_1, FUN_10ae795cc(), (int)uVar3 != 0))
          goto LAB_10ae79a50;
        }
        *(undefined8 *)(param_1 + 0x24) = uVar13;
        *(undefined8 *)(param_1 + 0x1c) = uVar2;
        iVar6 = *(int *)(param_1 + 0x14);
        iVar8 = *(int *)(param_1 + 0x18);
        iVar7 = iVar6 + -1;
        goto LAB_10ae79944;
      }
LAB_10ae79a50:
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      goto LAB_10ae7964c;
    }
LAB_10ae79944:
    *(int *)(param_1 + 0x14) = iVar6;
    *(int *)(param_1 + 0x18) = iVar8 + 1;
    if ((iVar7 < 0x100) && (iVar8 < 0x20000)) {
      uVar13 = *(undefined8 *)(param_1 + 0x24);
      uVar2 = *(undefined8 *)(param_1 + 0x1c);
      uVar3 = param_1;
      FUN_10ae78f30(param_1,0x4d);
      if (((int)uVar3 != 0) &&
         ((uVar3 = param_1, FUN_10ae795cc(), (int)uVar3 != 0 &&
          (uVar3 = param_1, FUN_10ae795cc(), (int)uVar3 != 0)))) goto LAB_10ae79a50;
      *(undefined8 *)(param_1 + 0x24) = uVar13;
      *(undefined8 *)(param_1 + 0x1c) = uVar2;
      iVar7 = *(int *)(param_1 + 0x14) + -1;
    }
    *(int *)(param_1 + 0x14) = iVar7;
    uVar3 = param_1;
    FUN_10ae79cb8();
    if ((((uVar3 & 1) != 0) || (uVar3 = param_1, FUN_10ae78b98(param_1,0), (uVar3 & 1) != 0)) ||
       ((uVar3 = param_1, FUN_10ae79d78(), (int)uVar3 != 0 &&
        (uVar3 = param_1, FUN_10ae78d70(), (uVar3 & 1) != 0)))) goto LAB_10ae7964c;
    *(undefined8 *)(param_1 + 0x24) = uVar12;
    *(undefined8 *)(param_1 + 0x1c) = uVar10;
    uVar3 = param_1;
    FUN_10ae791c8();
    if ((uVar3 & 1) != 0) goto LAB_10ae7964c;
    uVar3 = param_1;
    FUN_10ae78478(param_1,&UNK_10f6d1abc);
    if (((int)uVar3 != 0) && (uVar3 = param_1, FUN_10ae79468(param_1,0), (int)uVar3 != 0)) {
      FUN_10ae78f30(param_1,0x5f);
      goto joined_r0x00010ae79a18;
    }
LAB_10ae79a1c:
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x24) = uVar12;
    *(undefined8 *)(param_1 + 0x1c) = uVar10;
  }
  else {
    FUN_10ae795cc();
joined_r0x00010ae79a18:
    if ((uVar4 & 1) == 0) goto LAB_10ae79a1c;
LAB_10ae7964c:
    uVar2 = 1;
  }
  iVar6 = *(int *)(param_1 + 0x14) + -1;
LAB_10ae79a30:
  *(int *)(param_1 + 0x14) = iVar6;
  return uVar2;
}



/* Entry: 10ae79aa4; end: 10ae79afb;  */

void FUN_10ae79aa4(long param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  do {
    if (param_3 == 0) {
LAB_10ae79ae0:
      if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x10)) {
        *(undefined1 *)(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x20)) = 0;
      }
      return;
    }
    iVar3 = *(int *)(param_1 + 0x20);
    iVar1 = iVar3 + 1;
    if (*(int *)(param_1 + 0x10) <= iVar1) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x10) + 1;
      goto LAB_10ae79ae0;
    }
    uVar2 = *param_2;
    *(int *)(param_1 + 0x20) = iVar1;
    *(undefined1 *)(*(long *)(param_1 + 8) + (long)iVar3) = uVar2;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
  } while( true );
}



/* Entry: 10ae79afc; end: 10ae79c53;  */

undefined8 FUN_10ae79afc(long *param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  char cVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  uint uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  char *pcVar9;
  
  uVar3 = 0;
  iVar5 = *(int *)((long)param_1 + 0x14);
  lVar6 = param_1[3];
  *(int *)((long)param_1 + 0x14) = iVar5 + 1;
  *(int *)(param_1 + 3) = (int)lVar6 + 1;
  if ((0xff < iVar5) || (0x1ffff < (int)lVar6)) goto LAB_10ae79bcc;
  uStack_28 = *(undefined8 *)((long)param_1 + 0x24);
  uStack_30 = *(undefined8 *)((long)param_1 + 0x1c);
  uStack_34 = 0xffffffff;
  plVar4 = param_1;
  FUN_10ae79468(param_1,&uStack_34);
  uVar2 = uStack_34;
  iVar5 = *(int *)((long)param_1 + 0x14);
  if ((int)plVar4 == 0) {
LAB_10ae79bbc:
    uVar3 = 0;
    *(undefined8 *)((long)param_1 + 0x24) = uStack_28;
    *(undefined8 *)((long)param_1 + 0x1c) = uStack_30;
  }
  else {
    uVar13 = (ulong)(int)uStack_34;
    lVar6 = param_1[3];
    *(int *)((long)param_1 + 0x14) = iVar5 + 1;
    *(int *)(param_1 + 3) = (int)lVar6 + 1;
    if ((0xff < iVar5) || (0x1ffff < (int)lVar6)) goto LAB_10ae79bbc;
    lVar6 = *param_1;
    lVar7 = (long)*(int *)((long)param_1 + 0x1c);
    if (uStack_34 == 0) goto LAB_10ae79c14;
    cVar10 = *(char *)(lVar6 + lVar7);
    if (cVar10 == '\0') goto LAB_10ae79bbc;
    uVar11 = 0;
    do {
      if (uVar13 - 1 == uVar11) goto LAB_10ae79be0;
      pcVar12 = (char *)(lVar7 + lVar6 + 1 + uVar11);
      uVar11 = uVar11 + 1;
    } while (*pcVar12 != '\0');
    if (uVar11 < uVar13) goto LAB_10ae79bbc;
LAB_10ae79be0:
    if (uStack_34 < 0xc) {
LAB_10ae79c14:
      FUN_10ae79de4(param_1,lVar6 + lVar7,uVar13);
    }
    else {
      pcVar12 = (char *)(lVar7 + lVar6);
      pcVar9 = "_GLOBAL__N_";
      do {
        pcVar12 = pcVar12 + 1;
        pcVar8 = pcVar9 + 1;
        cVar1 = *pcVar9;
        if (cVar10 != cVar1) goto LAB_10ae79c10;
        cVar10 = *pcVar12;
        pcVar9 = pcVar8;
      } while (cVar10 != '\0');
      cVar1 = *pcVar8;
LAB_10ae79c10:
      if (cVar1 != '\0') goto LAB_10ae79c14;
      FUN_10ae78428(param_1,&UNK_10f5af57f);
    }
    *(uint *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + uVar2;
    iVar5 = *(int *)((long)param_1 + 0x14) + -1;
    uVar3 = 1;
  }
  iVar5 = iVar5 + -1;
LAB_10ae79bcc:
  *(int *)((long)param_1 + 0x14) = iVar5;
  return uVar3;
}



/* Entry: 10ae79c54; end: 10ae79cb7;  */

void FUN_10ae79c54(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar2 + 1;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if ((iVar2 < 0x100) && (iVar1 < 0x20000)) {
    FUN_10ae78844(param_1);
    iVar2 = *(int *)(param_1 + 0x14) + -1;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10ae79cb8; end: 10ae79d77;  */

undefined8 FUN_10ae79cb8(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = 0;
  iVar4 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar4 + 1;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if ((iVar4 < 0x100) && (iVar1 < 0x20000)) {
    uVar6 = *(undefined8 *)(param_1 + 0x24);
    uVar5 = *(undefined8 *)(param_1 + 0x1c);
    uVar3 = param_1;
    FUN_10ae78f30(param_1,0x44);
    if (((int)uVar3 == 0) ||
       (((uVar3 = param_1, FUN_10ae79158(param_1,&UNK_10f6d1b7c), (int)uVar3 == 0 ||
         (uVar3 = param_1, FUN_10ae79eb8(), (int)uVar3 == 0)) ||
        (uVar3 = param_1, FUN_10ae78f30(param_1,0x45), (uVar3 & 1) == 0)))) {
      uVar2 = 0;
      *(undefined8 *)(param_1 + 0x24) = uVar6;
      *(undefined8 *)(param_1 + 0x1c) = uVar5;
    }
    else {
      uVar2 = 1;
    }
    iVar4 = *(int *)(param_1 + 0x14) + -1;
  }
  *(int *)(param_1 + 0x14) = iVar4;
  return uVar2;
}



/* Entry: 10ae79d78; end: 10ae79de3;  */

void FUN_10ae79d78(ulong param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if (((iVar1 < 0x100) && (iVar2 < 0x20000)) && (uVar3 = param_1, FUN_10ae791c8(), (uVar3 & 1) == 0)
     ) {
    FUN_10ae78b98(param_1,0);
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return;
}



/* Entry: 10ae79de4; end: 10ae79eb7;  */

void FUN_10ae79de4(long param_1,byte *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  
  if ((param_3 == 0) || (-1 < *(int *)(param_1 + 0x28))) {
    return;
  }
  if (*param_2 == 0x3c) {
    uVar2 = *(uint *)(param_1 + 0x20);
    if (((0 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0x10))) &&
       (*(char *)(*(long *)(param_1 + 8) + (ulong)uVar2 + -1) == '<')) {
      FUN_10ae79aa4(param_1," ",1);
    }
  }
  if ((*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x10)) &&
     ((*param_2 == 0x5f || ((*param_2 & 0xffffffdf) - 0x41 < 0x1a)))) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20);
    *(short *)(param_1 + 0x28) = (short)param_3;
  }
  do {
    if (param_3 == 0) {
LAB_10ae79ae0:
      if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x10)) {
        *(undefined1 *)(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x20)) = 0;
      }
      return;
    }
    iVar4 = *(int *)(param_1 + 0x20);
    iVar1 = iVar4 + 1;
    if (*(int *)(param_1 + 0x10) <= iVar1) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x10) + 1;
      goto LAB_10ae79ae0;
    }
    bVar3 = *param_2;
    *(int *)(param_1 + 0x20) = iVar1;
    *(byte *)(*(long *)(param_1 + 8) + (long)iVar4) = bVar3;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
  } while( true );
}



/* Entry: 10ae79eb8; end: 10ae7a22b;  */

void FUN_10ae79eb8(ulong param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar2 + 1;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if ((((0xff < iVar2) || (0x1ffff < iVar1)) || (uVar3 = param_1, FUN_10ae791c8(), (uVar3 & 1) != 0)
      ) || (uVar3 = param_1, FUN_10ae7a22c(), (uVar3 & 1) != 0)) goto LAB_10ae79f0c;
  uStack_28 = *(undefined8 *)(param_1 + 0x24);
  uStack_30 = *(undefined8 *)(param_1 + 0x1c);
  uVar3 = param_1;
  FUN_10ae78478(param_1,&DAT_10f6d1af4);
  if (((int)uVar3 != 0) && (uVar3 = param_1, FUN_10ae79eb8(), (int)uVar3 != 0)) {
    do {
      uVar3 = param_1;
      FUN_10ae79eb8();
    } while ((uVar3 & 1) != 0);
    uVar3 = param_1;
    FUN_10ae78f30(param_1,0x45);
    if ((uVar3 & 1) != 0) goto LAB_10ae79f0c;
  }
  *(undefined8 *)(param_1 + 0x24) = uStack_28;
  *(undefined8 *)(param_1 + 0x1c) = uStack_30;
  uVar3 = param_1;
  FUN_10ae78478(param_1,&UNK_10f6d1af7);
  if (((int)uVar3 != 0) && (uVar3 = param_1, FUN_10ae79afc(), (int)uVar3 != 0)) {
    FUN_10ae78d70(param_1);
    do {
      uVar3 = param_1;
      FUN_10ae79eb8();
    } while ((uVar3 & 1) != 0);
    uVar3 = param_1;
    FUN_10ae78f30(param_1,0x45);
    if ((uVar3 & 1) != 0) goto LAB_10ae79f0c;
  }
  *(undefined8 *)(param_1 + 0x24) = uStack_28;
  *(undefined8 *)(param_1 + 0x1c) = uStack_30;
  uVar3 = param_1;
  FUN_10ae78478(param_1,&DAT_10f6d1afa);
  if ((int)uVar3 != 0) {
    FUN_10ae78f88(param_1);
    FUN_10ae79468(param_1,0);
    uVar3 = param_1;
    FUN_10ae78f30(param_1,0x5f);
    if ((uVar3 & 1) != 0) goto LAB_10ae79f0c;
  }
  *(undefined8 *)(param_1 + 0x24) = uStack_28;
  *(undefined8 *)(param_1 + 0x1c) = uStack_30;
  uVar3 = param_1;
  FUN_10ae78478(param_1,&UNK_10f6d1afd);
  if ((int)uVar3 != 0) {
    FUN_10ae79468(param_1,0);
    uVar3 = param_1;
    FUN_10ae78f30(param_1,0x70);
    if ((int)uVar3 != 0) {
      FUN_10ae78f88(param_1);
      FUN_10ae79468(param_1,0);
      uVar3 = param_1;
      FUN_10ae78f30(param_1,0x5f);
      if ((uVar3 & 1) != 0) goto LAB_10ae79f0c;
    }
  }
  *(undefined8 *)(param_1 + 0x24) = uStack_28;
  *(undefined8 *)(param_1 + 0x1c) = uStack_30;
  uVar3 = param_1;
  FUN_10ae78478(param_1,&UNK_10f6d1b00);
  uVar4 = param_1;
  if ((int)uVar3 == 0) {
    uStack_40 = CONCAT44(uStack_40._4_4_,0xffffffff);
    uVar3 = param_1;
    FUN_10ae7a328(param_1,&uStack_40);
    iVar2 = 0;
    if (0 < (int)(uint)uStack_40) {
      iVar2 = (int)uVar3;
    }
    if (iVar2 == 1) {
      if ((uint)uStack_40 < 3) {
        if ((uint)uStack_40 == 2) goto LAB_10ae7a10c;
LAB_10ae7a118:
        FUN_10ae79eb8();
        goto LAB_10ae7a120;
      }
      uVar3 = param_1;
      FUN_10ae79eb8();
      if ((uVar3 & 1) != 0) {
LAB_10ae7a10c:
        uVar3 = param_1;
        FUN_10ae79eb8();
        if ((int)uVar3 != 0) goto LAB_10ae7a118;
      }
    }
  }
  else {
    uVar3 = param_1;
    FUN_10ae795cc();
    if ((int)uVar3 != 0) {
      uStack_38 = *(undefined8 *)(param_1 + 0x24);
      uStack_40 = *(undefined8 *)(param_1 + 0x1c);
      uVar3 = param_1;
      FUN_10ae78f30(param_1,0x5f);
      if ((int)uVar3 != 0) {
        do {
          uVar3 = param_1;
          FUN_10ae79eb8();
        } while ((uVar3 & 1) != 0);
        uVar3 = param_1;
        FUN_10ae78f30(param_1,0x45);
        if ((uVar3 & 1) != 0) goto LAB_10ae79f0c;
      }
      *(undefined8 *)(param_1 + 0x24) = uStack_38;
      *(undefined8 *)(param_1 + 0x1c) = uStack_40;
      FUN_10ae79eb8();
LAB_10ae7a120:
      if ((uVar4 & 1) != 0) goto LAB_10ae79f0c;
    }
  }
  *(undefined8 *)(param_1 + 0x24) = uStack_28;
  *(undefined8 *)(param_1 + 0x1c) = uStack_30;
  uVar3 = param_1;
  FUN_10ae78478(param_1,&DAT_10f46c96e);
  if (((int)uVar3 == 0) || (uVar3 = param_1, FUN_10ae795cc(), (uVar3 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x24) = uStack_28;
    *(undefined8 *)(param_1 + 0x1c) = uStack_30;
    uVar3 = param_1;
    FUN_10ae78478(param_1,&UNK_10f59a1e9);
    if ((((uVar3 & 1) == 0) && (uVar3 = param_1, FUN_10ae78478(param_1,"pt"), (int)uVar3 == 0)) ||
       ((uVar3 = param_1, FUN_10ae79eb8(), (int)uVar3 == 0 ||
        (uVar3 = param_1, FUN_10ae795cc(), (uVar3 & 1) == 0)))) {
      *(undefined8 *)(param_1 + 0x24) = uStack_28;
      *(undefined8 *)(param_1 + 0x1c) = uStack_30;
      uVar3 = param_1;
      FUN_10ae78478(param_1,&DAT_10f3b4077);
      if (((int)uVar3 == 0) ||
         ((uVar3 = param_1, FUN_10ae79eb8(), (int)uVar3 == 0 ||
          (uVar3 = param_1, FUN_10ae79eb8(), (uVar3 & 1) == 0)))) {
        *(undefined8 *)(param_1 + 0x24) = uStack_28;
        *(undefined8 *)(param_1 + 0x1c) = uStack_30;
        uVar3 = param_1;
        FUN_10ae78478(param_1,&DAT_10f3b4048);
        if (((int)uVar3 == 0) || (uVar3 = param_1, FUN_10ae79eb8(), (uVar3 & 1) == 0)) {
          *(undefined8 *)(param_1 + 0x24) = uStack_28;
          *(undefined8 *)(param_1 + 0x1c) = uStack_30;
          FUN_10ae7a570(param_1);
        }
      }
    }
  }
LAB_10ae79f0c:
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return;
}



/* Entry: 10ae7a22c; end: 10ae7a327;  */

undefined8 FUN_10ae7a22c(ulong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar2 + 1;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if ((0xff < iVar2) || (0x1ffff < iVar1)) goto LAB_10ae7a304;
  uVar6 = *(undefined8 *)(param_1 + 0x24);
  uVar5 = *(undefined8 *)(param_1 + 0x1c);
  uVar4 = param_1;
  FUN_10ae78478(param_1,&UNK_10f6d1b03);
  if ((int)uVar4 == 0) {
    uVar4 = param_1;
    FUN_10ae78f30(param_1,0x4c);
    if ((((int)uVar4 == 0) || (uVar4 = param_1, FUN_10ae795cc(), (int)uVar4 == 0)) ||
       (uVar4 = param_1, FUN_10ae7a78c(), (uVar4 & 1) == 0)) {
      *(undefined8 *)(param_1 + 0x24) = uVar6;
      *(undefined8 *)(param_1 + 0x1c) = uVar5;
      uVar4 = param_1;
      FUN_10ae78f30(param_1,0x4c);
      if ((int)uVar4 != 0) {
        uVar4 = param_1;
        FUN_10ae783b0();
        iVar2 = (int)uVar4;
        goto LAB_10ae7a2d4;
      }
      goto LAB_10ae7a2f0;
    }
LAB_10ae7a2e8:
    uVar3 = 1;
  }
  else {
    uVar4 = param_1;
    FUN_10ae784e8();
    iVar2 = (int)uVar4;
LAB_10ae7a2d4:
    if ((iVar2 != 0) && (uVar4 = param_1, FUN_10ae78f30(param_1,0x45), (uVar4 & 1) != 0))
    goto LAB_10ae7a2e8;
LAB_10ae7a2f0:
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x24) = uVar6;
    *(undefined8 *)(param_1 + 0x1c) = uVar5;
  }
  iVar2 = *(int *)(param_1 + 0x14) + -1;
LAB_10ae7a304:
  *(int *)(param_1 + 0x14) = iVar2;
  return uVar3;
}



/* Entry: 10ae7a328; end: 10ae7a56f;  */

undefined8 FUN_10ae7a328(long *param_1,int *param_2)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  int *piVar10;
  undefined **ppuVar11;
  
  uVar4 = 0;
  iVar7 = *(int *)((long)param_1 + 0x14);
  lVar3 = param_1[3];
  *(int *)((long)param_1 + 0x14) = iVar7 + 1;
  *(int *)(param_1 + 3) = (int)lVar3 + 1;
  if ((0xff < iVar7) || (0x1ffff < (int)lVar3)) goto LAB_10ae7a4e4;
  piVar10 = (int *)((long)param_1 + 0x1c);
  if ((*(char *)(*param_1 + (long)*piVar10) == '\0') ||
     (((char *)(*param_1 + (long)*piVar10))[1] == '\0')) {
    uVar4 = 0;
    goto LAB_10ae7a4e4;
  }
  uVar4 = *(undefined8 *)piVar10;
  uVar1 = *(undefined4 *)((long)param_1 + 0x24);
  uVar6 = *(uint *)(param_1 + 5);
  plVar5 = param_1;
  FUN_10ae78478(param_1,&UNK_10f6d1b00);
  if ((int)plVar5 == 0) {
LAB_10ae7a404:
    *(undefined8 *)piVar10 = uVar4;
    *(undefined4 *)((long)param_1 + 0x24) = uVar1;
    *(uint *)(param_1 + 5) = uVar6;
    plVar5 = param_1;
    FUN_10ae78f30(param_1,0x76);
    if ((int)plVar5 != 0) {
      cVar2 = *(char *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
      plVar5 = param_1;
      FUN_10ae79158(param_1,"0123456789");
      if ((param_2 != (int *)0x0) && ((int)plVar5 != 0)) {
        *param_2 = cVar2 + -0x30;
      }
      if (((int)plVar5 != 0) && (plVar5 = param_1, FUN_10ae79afc(), ((ulong)plVar5 & 1) != 0)) {
LAB_10ae7a558:
        uVar4 = 1;
        goto LAB_10ae7a4dc;
      }
    }
    *(undefined4 *)((long)param_1 + 0x24) = uVar1;
    *(undefined8 *)piVar10 = uVar4;
    *(uint *)(param_1 + 5) = uVar6;
    pbVar9 = (byte *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
    uVar6 = (uint)*pbVar9;
    if ((uVar6 - 0x61 < 0x1a) && (uVar8 = (uint)pbVar9[1], (uVar8 & 0xffffffdf) - 0x41 < 0x1a)) {
      pbVar9 = &DAT_10f6d1b06;
      ppuVar11 = &PTR_DAT_110c8b168;
      do {
        if ((uVar6 == *pbVar9) && (uVar8 == pbVar9[1])) {
          if (param_2 != (int *)0x0) {
            *param_2 = *(int *)(ppuVar11 + -1);
          }
          FUN_10ae78428(param_1,"operator");
          pbVar9 = ppuVar11[-2];
          if (*pbVar9 - 0x61 < 0x1a) {
            FUN_10ae78428(param_1," ");
          }
          FUN_10ae78428(param_1,pbVar9);
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 2;
          goto LAB_10ae7a558;
        }
        pbVar9 = *ppuVar11;
        ppuVar11 = ppuVar11 + 3;
      } while (pbVar9 != (byte *)0x0);
    }
    uVar4 = 0;
  }
  else {
    FUN_10ae78428(param_1,&UNK_10f5af642);
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0x8000ffff;
    plVar5 = param_1;
    FUN_10ae795cc();
    if ((int)plVar5 == 0) goto LAB_10ae7a404;
    *(uint *)(param_1 + 5) =
         *(uint *)(param_1 + 5) & 0x80000000 |
         *(uint *)(param_1 + 5) & 0xffff | (uVar6 >> 0x10 & 0x7fff) << 0x10;
    uVar4 = 1;
    if (param_2 != (int *)0x0) {
      *param_2 = 1;
    }
  }
LAB_10ae7a4dc:
  iVar7 = *(int *)((long)param_1 + 0x14) + -1;
LAB_10ae7a4e4:
  *(int *)((long)param_1 + 0x14) = iVar7;
  return uVar4;
}



/* Entry: 10ae7a570; end: 10ae7a78b;  */

undefined8 FUN_10ae7a570(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = 0;
  iVar4 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar4 + 1;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if ((0xff < iVar4) || (0x1ffff < iVar1)) goto LAB_10ae7a760;
  uVar6 = *(undefined8 *)(param_1 + 0x24);
  uVar5 = *(undefined8 *)(param_1 + 0x1c);
  FUN_10ae78478(param_1,&DAT_10f3b407a);
  uVar3 = param_1;
  FUN_10ae7a8ac();
  if ((uVar3 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x24) = uVar6;
    *(undefined8 *)(param_1 + 0x1c) = uVar5;
    uVar3 = param_1;
    FUN_10ae78478(param_1,&DAT_10f47d5e2);
    if ((int)uVar3 != 0) {
      uVar3 = param_1;
      FUN_10ae791c8();
      if ((int)uVar3 == 0) {
        uVar3 = param_1;
        FUN_10ae79cb8();
        if (((uVar3 & 1) == 0) && (uVar3 = param_1, FUN_10ae78b98(param_1,0), (int)uVar3 == 0))
        goto LAB_10ae7a630;
      }
      else {
        FUN_10ae78d70(param_1);
      }
      uVar3 = param_1;
      FUN_10ae7a8ac();
      if ((uVar3 & 1) != 0) goto LAB_10ae7a5cc;
    }
LAB_10ae7a630:
    *(undefined8 *)(param_1 + 0x24) = uVar6;
    *(undefined8 *)(param_1 + 0x1c) = uVar5;
    uVar3 = param_1;
    FUN_10ae78478(param_1,&DAT_10f47d5e2);
    if (((int)uVar3 != 0) && (uVar3 = param_1, FUN_10ae78f30(param_1,0x4e), (int)uVar3 != 0)) {
      uVar3 = param_1;
      FUN_10ae791c8();
      if ((int)uVar3 == 0) {
        uVar3 = param_1;
        FUN_10ae79cb8();
        if (((uVar3 & 1) == 0) && (uVar3 = param_1, FUN_10ae78b98(param_1,0), (int)uVar3 == 0))
        goto LAB_10ae7a6d8;
      }
      else {
        FUN_10ae78d70(param_1);
      }
      uVar3 = param_1;
      FUN_10ae79afc();
      if ((int)uVar3 != 0) {
        FUN_10ae78d70(param_1);
        while (uVar3 = param_1, FUN_10ae79afc(), (int)uVar3 != 0) {
          FUN_10ae78d70(param_1);
        }
        uVar3 = param_1;
        FUN_10ae78f30(param_1,0x45);
        if (((int)uVar3 != 0) && (uVar3 = param_1, FUN_10ae7a8ac(), (uVar3 & 1) != 0))
        goto LAB_10ae7a5cc;
      }
    }
LAB_10ae7a6d8:
    *(undefined8 *)(param_1 + 0x24) = uVar6;
    *(undefined8 *)(param_1 + 0x1c) = uVar5;
    FUN_10ae78478(param_1,&DAT_10f3b407a);
    uVar3 = param_1;
    FUN_10ae78478(param_1,&DAT_10f47d5e2);
    if (((int)uVar3 != 0) && (uVar3 = param_1, FUN_10ae79afc(), (int)uVar3 != 0)) {
      FUN_10ae78d70(param_1);
      while (uVar3 = param_1, FUN_10ae79afc(), (int)uVar3 != 0) {
        FUN_10ae78d70(param_1);
      }
      uVar3 = param_1;
      FUN_10ae78f30(param_1,0x45);
      if (((int)uVar3 != 0) && (uVar3 = param_1, FUN_10ae7a8ac(), (uVar3 & 1) != 0))
      goto LAB_10ae7a5cc;
    }
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x24) = uVar6;
    *(undefined8 *)(param_1 + 0x1c) = uVar5;
  }
  else {
LAB_10ae7a5cc:
    uVar2 = 1;
  }
  iVar4 = *(int *)(param_1 + 0x14) + -1;
LAB_10ae7a760:
  *(int *)(param_1 + 0x14) = iVar4;
  return uVar2;
}



/* Entry: 10ae7a78c; end: 10ae7a8ab;  */

undefined8 FUN_10ae7a78c(long *param_1)

{
  byte *pbVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = 0;
  iVar5 = *(int *)((long)param_1 + 0x14);
  lVar7 = param_1[3];
  *(int *)((long)param_1 + 0x14) = iVar5 + 1;
  *(int *)(param_1 + 3) = (int)lVar7 + 1;
  if ((0xff < iVar5) || (0x1ffff < (int)lVar7)) goto LAB_10ae7a898;
  uVar10 = *(undefined8 *)((long)param_1 + 0x24);
  uVar9 = *(undefined8 *)((long)param_1 + 0x1c);
  plVar4 = param_1;
  FUN_10ae79468(param_1,0);
  if (((int)plVar4 == 0) ||
     (plVar4 = param_1, FUN_10ae78f30(param_1,0x45), ((ulong)plVar4 & 1) == 0)) {
    *(undefined8 *)((long)param_1 + 0x24) = uVar10;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar9;
    iVar5 = *(int *)((long)param_1 + 0x14);
    lVar7 = param_1[3];
    *(int *)((long)param_1 + 0x14) = iVar5 + 1;
    *(int *)(param_1 + 3) = (int)lVar7 + 1;
    if ((iVar5 < 0x100) && ((int)lVar7 < 0x20000)) {
      pbVar1 = (byte *)(*param_1 + (long)*(int *)((long)param_1 + 0x1c));
      uVar8 = (uint)*pbVar1;
      if (*pbVar1 == 0) goto LAB_10ae7a880;
      lVar7 = 0;
      pbVar6 = pbVar1;
      do {
        bVar2 = uVar8 - 0x30 < 10;
        if ((!bVar2 && 4 < uVar8 - 0x61) && (bVar2 || uVar8 - 0x61 != 5)) {
          if (lVar7 == 0) goto LAB_10ae7a880;
          break;
        }
        pbVar6 = pbVar6 + 1;
        uVar8 = (uint)*pbVar6;
        lVar7 = lVar7 + -1;
      } while (uVar8 != 0);
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + ((int)pbVar6 - (int)pbVar1);
      *(int *)((long)param_1 + 0x14) = iVar5;
      plVar4 = param_1;
      FUN_10ae78f30(param_1,0x45);
      if (((ulong)plVar4 & 1) != 0) goto LAB_10ae7a878;
    }
    else {
LAB_10ae7a880:
      *(int *)((long)param_1 + 0x14) = iVar5;
    }
    uVar3 = 0;
    *(undefined8 *)((long)param_1 + 0x24) = uVar10;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar9;
  }
  else {
LAB_10ae7a878:
    uVar3 = 1;
  }
  iVar5 = *(int *)((long)param_1 + 0x14) + -1;
LAB_10ae7a898:
  *(int *)((long)param_1 + 0x14) = iVar5;
  return uVar3;
}



/* Entry: 10ae7a8ac; end: 10ae7a9c3;  */

undefined8 FUN_10ae7a8ac(ulong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if ((0xff < iVar1) || (0x1ffff < iVar2)) goto LAB_10ae7a95c;
  uVar4 = param_1;
  FUN_10ae79afc();
  if ((int)uVar4 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x24);
    uVar5 = *(undefined8 *)(param_1 + 0x1c);
    uVar4 = param_1;
    FUN_10ae78478(param_1,&DAT_10f3293b9);
    if (((int)uVar4 == 0) || (uVar4 = param_1, FUN_10ae7a328(param_1,0), (uVar4 & 1) == 0)) {
      *(undefined8 *)(param_1 + 0x24) = uVar6;
      *(undefined8 *)(param_1 + 0x1c) = uVar5;
      uVar4 = param_1;
      FUN_10ae78478(param_1,&UNK_10f6d1b79);
      if ((int)uVar4 == 0) {
LAB_10ae7a9a0:
        uVar3 = 0;
        *(undefined8 *)(param_1 + 0x24) = uVar6;
        *(undefined8 *)(param_1 + 0x1c) = uVar5;
        goto LAB_10ae7a95c;
      }
      uVar4 = param_1;
      FUN_10ae791c8();
      if ((uVar4 & 1) == 0) {
        uVar4 = param_1;
        FUN_10ae79cb8();
        if (((uVar4 & 1) != 0) || (uVar4 = param_1, FUN_10ae78b98(param_1,0), (uVar4 & 1) != 0))
        goto LAB_10ae7a958;
        uVar4 = param_1;
        FUN_10ae79afc();
        if ((int)uVar4 == 0) goto LAB_10ae7a9a0;
      }
    }
    FUN_10ae78d70(param_1);
  }
  else {
    FUN_10ae78d70(param_1);
  }
LAB_10ae7a958:
  uVar3 = 1;
LAB_10ae7a95c:
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return uVar3;
}



/* Entry: 10ae7a9c4; end: 10ae7aa43;  */

void FUN_10ae7a9c4(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar3 + 1;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if ((iVar3 < 0x100) && (iVar1 < 0x20000)) {
    uVar5 = *(undefined8 *)(param_1 + 0x24);
    uVar4 = *(undefined8 *)(param_1 + 0x1c);
    uVar2 = param_1;
    FUN_10ae78f30(param_1,0x5f);
    if (((int)uVar2 == 0) || (uVar2 = param_1, FUN_10ae79468(param_1,0), (uVar2 & 1) == 0)) {
      *(undefined8 *)(param_1 + 0x24) = uVar5;
      *(undefined8 *)(param_1 + 0x1c) = uVar4;
    }
    iVar3 = *(int *)(param_1 + 0x14) + -1;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 10ae7aa44; end: 10ae7ab77;  */

ulong FUN_10ae7aa44(ulong param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar2 + 1;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if ((0xff < iVar2) || (0x1ffff < iVar1)) goto LAB_10ae7ab4c;
  uStack_28 = *(undefined8 *)(param_1 + 0x24);
  uStack_30 = *(undefined8 *)(param_1 + 0x1c);
  uVar4 = param_1;
  FUN_10ae78f30(param_1,0x4a);
  if ((int)uVar4 == 0) {
LAB_10ae7aab0:
    *(undefined8 *)(param_1 + 0x24) = uStack_28;
    *(undefined8 *)(param_1 + 0x1c) = uStack_30;
    uVar4 = param_1;
    FUN_10ae7ab78();
    if ((int)uVar4 == 0) {
      uVar3 = param_1;
      FUN_10ae795cc();
      if (((uVar3 & 1) == 0) && (uVar3 = param_1, FUN_10ae7a22c(), (uVar3 & 1) == 0)) {
        *(undefined8 *)(param_1 + 0x24) = uStack_28;
        *(undefined8 *)(param_1 + 0x1c) = uStack_30;
        uVar3 = param_1;
        FUN_10ae78f30(param_1,0x58);
        if ((int)uVar3 != 0) {
          uVar3 = param_1;
          FUN_10ae79eb8();
          iVar2 = (int)uVar3;
          goto joined_r0x00010ae7ab38;
        }
        goto LAB_10ae7ab3c;
      }
      goto LAB_10ae7ab10;
    }
    FUN_10ae78d70(param_1);
    uStack_28 = *(undefined8 *)(param_1 + 0x24);
    uStack_30 = *(undefined8 *)(param_1 + 0x1c);
    uVar3 = param_1;
    FUN_10ae7a78c();
    iVar2 = (int)uVar3;
joined_r0x00010ae7ab38:
    if ((iVar2 != 0) && (uVar3 = param_1, FUN_10ae78f30(param_1,0x45), (uVar3 & 1) != 0))
    goto LAB_10ae7ab10;
LAB_10ae7ab3c:
    *(undefined8 *)(param_1 + 0x24) = uStack_28;
    *(undefined8 *)(param_1 + 0x1c) = uStack_30;
  }
  else {
    do {
      uVar4 = param_1;
      FUN_10ae7aa44();
    } while ((uVar4 & 1) != 0);
    uVar4 = param_1;
    FUN_10ae78f30(param_1,0x45);
    if ((uVar4 & 1) == 0) goto LAB_10ae7aab0;
LAB_10ae7ab10:
    uVar4 = 1;
  }
  iVar2 = *(int *)(param_1 + 0x14) + -1;
LAB_10ae7ab4c:
  *(int *)(param_1 + 0x14) = iVar2;
  return uVar4;
}



/* Entry: 10ae7ab78; end: 10ae7ac0b;  */

undefined8 FUN_10ae7ab78(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = 0;
  iVar4 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar4 + 1;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if ((iVar4 < 0x100) && (iVar1 < 0x20000)) {
    uVar6 = *(undefined8 *)(param_1 + 0x24);
    uVar5 = *(undefined8 *)(param_1 + 0x1c);
    lVar3 = param_1;
    FUN_10ae78f30(param_1,0x4c);
    if (((int)lVar3 == 0) || (lVar3 = param_1, FUN_10ae79afc(), (int)lVar3 == 0)) {
      uVar2 = 0;
      *(undefined8 *)(param_1 + 0x24) = uVar6;
      *(undefined8 *)(param_1 + 0x1c) = uVar5;
    }
    else {
      FUN_10ae7a9c4(param_1);
      uVar2 = 1;
    }
    iVar4 = *(int *)(param_1 + 0x14) + -1;
  }
  *(int *)(param_1 + 0x14) = iVar4;
  return uVar2;
}



/* Entry: 10ae7ac0c; end: 10ae7ae63;  */

undefined8 FUN_10ae7ac0c(ulong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  iVar6 = iVar1 + 1;
  *(int *)(param_1 + 0x14) = iVar6;
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if ((0xff < iVar1) || (0x1ffff < iVar2)) goto LAB_10ae7ae1c;
  uVar4 = param_1;
  FUN_10ae7a328(param_1,0);
  if ((uVar4 & 1) == 0) {
    iVar6 = *(int *)(param_1 + 0x14);
    iVar1 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x14) = iVar6 + 1;
    *(int *)(param_1 + 0x18) = iVar1 + 1;
    if ((iVar6 < 0x100) && (iVar1 < 0x20000)) {
      uVar7 = *(undefined8 *)(param_1 + 0x24);
      uVar3 = *(undefined8 *)(param_1 + 0x1c);
      uVar4 = param_1;
      FUN_10ae78f30(param_1,0x43);
      if ((int)uVar4 == 0) {
LAB_10ae7ace0:
        *(undefined8 *)(param_1 + 0x24) = uVar7;
        *(undefined8 *)(param_1 + 0x1c) = uVar3;
        uVar4 = param_1;
        FUN_10ae78f30(param_1,0x44);
        if (((int)uVar4 == 0) ||
           (uVar4 = param_1, FUN_10ae79158(param_1,&UNK_10f6d1bb3), (int)uVar4 == 0)) {
          *(undefined8 *)(param_1 + 0x24) = uVar7;
          *(undefined8 *)(param_1 + 0x1c) = uVar3;
          iVar6 = *(int *)(param_1 + 0x14) + -1;
          goto LAB_10ae7ad54;
        }
        lVar5 = *(long *)(param_1 + 8);
        iVar6 = *(int *)(param_1 + 0x24);
        FUN_10ae78428(param_1,"~");
LAB_10ae7ad24:
        FUN_10ae79de4(param_1,lVar5 + iVar6,*(undefined2 *)(param_1 + 0x28));
      }
      else {
        uVar4 = param_1;
        FUN_10ae79158(param_1,&DAT_10f3eb5bc);
        if ((int)uVar4 != 0) {
          lVar5 = *(long *)(param_1 + 8);
          iVar6 = *(int *)(param_1 + 0x24);
          goto LAB_10ae7ad24;
        }
        uVar4 = param_1;
        FUN_10ae78f30(param_1,0x49);
        if ((((int)uVar4 == 0) ||
            (uVar4 = param_1, FUN_10ae79158(param_1,&UNK_10f6d1bb0), (int)uVar4 == 0)) ||
           (uVar4 = param_1, FUN_10ae79c54(), (uVar4 & 1) == 0)) goto LAB_10ae7ace0;
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    }
    else {
LAB_10ae7ad54:
      *(int *)(param_1 + 0x14) = iVar6;
      uVar4 = param_1;
      FUN_10ae79afc();
      if ((((uVar4 & 1) == 0) && (uVar4 = param_1, FUN_10ae7ab78(), (uVar4 & 1) == 0)) &&
         (uVar4 = param_1, FUN_10ae7928c(), (uVar4 & 1) == 0)) {
        uVar3 = 0;
        iVar6 = *(int *)(param_1 + 0x14);
        goto LAB_10ae7ae1c;
      }
    }
  }
  uVar3 = 0;
  iVar6 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar6 + 1;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if ((iVar6 < 0x100) && (iVar1 < 0x20000)) {
    uVar4 = param_1;
    FUN_10ae78f30(param_1,0x42);
    if ((int)uVar4 != 0) {
      do {
        uVar8 = *(undefined8 *)(param_1 + 0x24);
        uVar7 = *(undefined8 *)(param_1 + 0x1c);
        FUN_10ae78428(param_1,&UNK_10f5af65c);
        uVar4 = param_1;
        FUN_10ae79afc();
        if ((uVar4 & 1) == 0) {
          uVar3 = 0;
          *(undefined8 *)(param_1 + 0x24) = uVar8;
          *(undefined8 *)(param_1 + 0x1c) = uVar7;
          goto LAB_10ae7ae10;
        }
        FUN_10ae78428(param_1,&DAT_10f62a9ea);
        uVar4 = param_1;
        FUN_10ae78f30(param_1,0x42);
      } while ((uVar4 & 1) != 0);
    }
    uVar3 = 1;
  }
LAB_10ae7ae10:
  iVar6 = *(int *)(param_1 + 0x14) + -1;
  *(int *)(param_1 + 0x14) = iVar6;
LAB_10ae7ae1c:
  *(int *)(param_1 + 0x14) = iVar6 + -1;
  return uVar3;
}



/* Entry: 10ae7ae64; end: 10ae7afc7;  */

undefined8 FUN_10ae7ae64(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = 0;
  iVar4 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar4 + 1;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if ((0xff < iVar4) || (0x1ffff < iVar1)) goto LAB_10ae7afb4;
  uVar6 = *(undefined8 *)(param_1 + 0x24);
  uVar5 = *(undefined8 *)(param_1 + 0x1c);
  uVar3 = param_1;
  FUN_10ae78f30(param_1,0x68);
  if ((int)uVar3 == 0) {
LAB_10ae7af0c:
    *(undefined8 *)(param_1 + 0x24) = uVar6;
    *(undefined8 *)(param_1 + 0x1c) = uVar5;
    uVar3 = param_1;
    FUN_10ae78f30(param_1,0x76);
    if ((int)uVar3 != 0) {
      iVar4 = *(int *)(param_1 + 0x14);
      iVar1 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x14) = iVar4 + 1;
      *(int *)(param_1 + 0x18) = iVar1 + 1;
      if ((iVar4 < 0x100) && (iVar1 < 0x20000)) {
        uVar3 = param_1;
        FUN_10ae79468(param_1,0);
        if (((int)uVar3 != 0) &&
           ((uVar3 = param_1, FUN_10ae78f30(param_1,0x5f), (int)uVar3 != 0 &&
            (uVar3 = param_1, FUN_10ae79468(param_1,0), (uVar3 & 1) != 0)))) {
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
          uVar3 = param_1;
          FUN_10ae78f30(param_1,0x5f);
          if ((uVar3 & 1) != 0) goto LAB_10ae7af00;
          goto LAB_10ae7afa0;
        }
        iVar4 = *(int *)(param_1 + 0x14) + -1;
      }
      *(int *)(param_1 + 0x14) = iVar4;
    }
LAB_10ae7afa0:
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x24) = uVar6;
    *(undefined8 *)(param_1 + 0x1c) = uVar5;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14);
    iVar1 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x14) = iVar4 + 1;
    *(int *)(param_1 + 0x18) = iVar1 + 1;
    if ((0xff < iVar4) || (0x1ffff < iVar1)) {
      *(int *)(param_1 + 0x14) = iVar4;
      goto LAB_10ae7af0c;
    }
    uVar3 = param_1;
    FUN_10ae79468(param_1,0);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    if (((int)uVar3 == 0) || (uVar3 = param_1, FUN_10ae78f30(param_1,0x5f), (uVar3 & 1) == 0))
    goto LAB_10ae7af0c;
LAB_10ae7af00:
    uVar2 = 1;
  }
  iVar4 = *(int *)(param_1 + 0x14) + -1;
LAB_10ae7afb4:
  *(int *)(param_1 + 0x14) = iVar4;
  return uVar2;
}



/* Entry: 10ae7afc8; end: 10ae7b12b;  */

void FUN_10ae7afc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uRam0000000113837110 = 0;
  uRam0000000113837230 = 0x100000000;
  uVar1 = 0x1d;
  _sysconf();
  uRam0000000113837248 = 0x40;
  uRam0000000113837240 = 0x20;
  uRam0000000113837250 = 0;
  uRam0000000113837118 = 0;
  uRam0000000113837120 = 0xfffffffea0ffb072;
  uRam0000000113837128 = 0x113837110;
  uRam0000000113837138 = 0;
  uRam0000000113837148 = 0;
  uRam0000000113837140 = 0;
  uRam0000000113837158 = 0;
  uRam0000000113837150 = 0;
  uRam0000000113837168 = 0;
  uRam0000000113837160 = 0;
  uRam0000000113837178 = 0;
  uRam0000000113837170 = 0;
  uRam0000000113837188 = 0;
  uRam0000000113837180 = 0;
  uRam0000000113837198 = 0;
  uRam0000000113837190 = 0;
  uRam00000001138371a8 = 0;
  uRam00000001138371a0 = 0;
  uRam00000001138371b8 = 0;
  uRam00000001138371b0 = 0;
  uRam00000001138371c8 = 0;
  uRam00000001138371c0 = 0;
  uRam00000001138371d8 = 0;
  uRam00000001138371d0 = 0;
  uRam00000001138371e8 = 0;
  uRam00000001138371e0 = 0;
  uRam00000001138371f8 = 0;
  uRam00000001138371f0 = 0;
  uRam0000000113837208 = 0;
  uRam0000000113837200 = 0;
  uRam0000000113837218 = 0;
  uRam0000000113837210 = 0;
  uRam0000000113837228 = 0;
  uRam0000000113837220 = 0;
  uRam00000001137ed940 = 0;
  uRam00000001137eda60 = 0;
  uVar2 = 0x1d;
  uRam0000000113837238 = uVar1;
  _sysconf();
  uRam00000001137eda78 = 0x40;
  uRam00000001137eda70 = 0x20;
  uRam00000001137eda80 = 0;
  uRam00000001137ed948 = 0;
  uRam00000001137ed950 = 0xfffffffea0021822;
  uRam00000001137ed958 = 0x1137ed940;
  uRam00000001137ed968 = 0;
  uRam00000001137ed978 = 0;
  uRam00000001137ed970 = 0;
  uRam00000001137ed988 = 0;
  uRam00000001137ed980 = 0;
  uRam00000001137ed998 = 0;
  uRam00000001137ed990 = 0;
  uRam00000001137ed9a8 = 0;
  uRam00000001137ed9a0 = 0;
  uRam00000001137ed9b8 = 0;
  uRam00000001137ed9b0 = 0;
  uRam00000001137ed9c8 = 0;
  uRam00000001137ed9c0 = 0;
  uRam00000001137ed9d8 = 0;
  uRam00000001137ed9d0 = 0;
  uRam00000001137ed9e8 = 0;
  uRam00000001137ed9e0 = 0;
  uRam00000001137ed9f8 = 0;
  uRam00000001137ed9f0 = 0;
  uRam00000001137eda08 = 0;
  uRam00000001137eda00 = 0;
  uRam00000001137eda18 = 0;
  uRam00000001137eda10 = 0;
  uRam00000001137eda28 = 0;
  uRam00000001137eda20 = 0;
  uRam00000001137eda38 = 0;
  uRam00000001137eda30 = 0;
  uRam00000001137eda48 = 0;
  uRam00000001137eda40 = 0;
  uRam00000001137eda58 = 0;
  uRam00000001137eda50 = 0;
  uRam00000001137eda88 = 0;
  uRam00000001137edba8 = 0x200000000;
  uVar1 = 0x1d;
  uRam00000001137eda68 = uVar2;
  _sysconf();
  uRam00000001137edbb0 = uVar1;
  uRam00000001137edbc0 = 0x40;
  uRam00000001137edbb8 = 0x20;
  uRam00000001137edbc8 = 0;
  uRam00000001137eda90 = 0;
  uRam00000001137eda98 = 0xfffffffea0021bfa;
  uRam00000001137edaa0 = 0x1137eda88;
  uRam00000001137edab0 = 0;
  uRam00000001137edac0 = 0;
  uRam00000001137edab8 = 0;
  uRam00000001137edad0 = 0;
  uRam00000001137edac8 = 0;
  uRam00000001137edae0 = 0;
  uRam00000001137edad8 = 0;
  uRam00000001137edaf0 = 0;
  uRam00000001137edae8 = 0;
  uRam00000001137edb00 = 0;
  uRam00000001137edaf8 = 0;
  uRam00000001137edb10 = 0;
  uRam00000001137edb08 = 0;
  uRam00000001137edb20 = 0;
  uRam00000001137edb18 = 0;
  uRam00000001137edb30 = 0;
  uRam00000001137edb28 = 0;
  uRam00000001137edb40 = 0;
  uRam00000001137edb38 = 0;
  uRam00000001137edb50 = 0;
  uRam00000001137edb48 = 0;
  uRam00000001137edb60 = 0;
  uRam00000001137edb58 = 0;
  uRam00000001137edb70 = 0;
  uRam00000001137edb68 = 0;
  uRam00000001137edb80 = 0;
  uRam00000001137edb78 = 0;
  uRam00000001137edb90 = 0;
  uRam00000001137edb88 = 0;
  uRam00000001137edba0 = 0;
  uRam00000001137edb98 = 0;
  return;
}



/* Entry: 10ae7b12c; end: 10ae7b25b;  */

undefined2 * FUN_10ae7b12c(undefined2 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uStack_24;
  
  *param_1 = 0;
  *(uint **)(param_1 + 4) = param_2;
  if (((byte)param_2[0x49] >> 1 & 1) != 0) {
    uStack_24 = 0xffffffff;
    iVar5 = 1;
    _pthread_sigmask(1,&uStack_24,param_1 + 2);
    *(bool *)((long)param_1 + 1) = iVar5 == 0;
    param_2 = *(uint **)(param_1 + 4);
  }
  uVar2 = *param_2;
  if ((uVar2 & 1) == 0) {
    do {
      uVar1 = *param_2;
      if (uVar1 != uVar2) {
        ClearExclusiveLocal();
        if ((uVar1 & 1) == 0) {
          return param_1;
        }
        goto LAB_10ae7b1b8;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar4) {
        *param_2 = uVar2 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar1 & 1) == 0) {
      return param_1;
    }
  }
LAB_10ae7b1b8:
  func_0x00010bdb3254(param_2);
  return param_1;
}



/* Entry: 10ae7b25c; end: 10ae7b30f;  */

void FUN_10ae7b25c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + -0x10);
    FUN_10ae7b12c(auStack_30,lVar2);
    FUN_10ae7b368(param_1,lVar2);
    if (*(int *)(lVar2 + 0x120) < 1) {
      FUN_10ae87b7c(3,&UNK_10f6d1c52,0x203,&UNK_10f6d1c65);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ae7b2f8);
      (*pcVar1)();
    }
    *(int *)(lVar2 + 0x120) = *(int *)(lVar2 + 0x120) + -1;
    func_0x00010ae7b1c4(auStack_30);
    FUN_10ae7b310(auStack_30);
  }
  return;
}



/* Entry: 10ae7b310; end: 10ae7b367;  */

void FUN_10ae7b310(byte *param_1)

{
  code *pcVar1;
  
  if ((*param_1 & 1) != 0) {
    return;
  }
  FUN_10ae87b7c(3,&UNK_10f6d1c52,0x126,&UNK_10f6d1c65);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ae7b364);
  (*pcVar1)();
}



/* Entry: 10ae7b368; end: 10ae7b48f;  */

void FUN_10ae7b368(undefined4 *param_1,long param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long **pplVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  undefined4 *puVar13;
  long lVar14;
  long *aplStack_128 [30];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_1 + -8;
  if ((*(ulong *)(param_1 + -6) ^ (ulong)puVar13) == 0x4c833e95) {
    if (*(long *)(param_1 + -4) != param_2) {
      uVar3 = 0x1f0;
      goto LAB_10ae7b488;
    }
    uVar3 = *(undefined8 *)(param_1 + -8);
    FUN_10ae7b948(uVar3,*(undefined8 *)(param_2 + 0x138),param_2 + 0x140);
    *param_1 = (int)uVar3;
    pplVar7 = aplStack_128;
    FUN_10ae7ba0c(param_2 + 8,puVar13);
    *(ulong *)(param_1 + -6) = (ulong)puVar13 ^ 0xffffffffb37cc16a;
    FUN_10ae7bab0(puVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar6 = (long *)aplStack_128[0][5];
      plVar5 = aplStack_128[0];
      if ((plVar6 != (long *)0x0) && ((long *)((long)aplStack_128[0] + *aplStack_128[0]) == plVar6))
      {
        lVar14 = aplStack_128[0][2];
        *aplStack_128[0] = *plVar6 + *aplStack_128[0];
        plVar6[1] = 0;
        plVar6[2] = 0;
        FUN_10ae7bb74(lVar14 + 8,plVar6,aplStack_128);
        FUN_10ae7bb74(lVar14 + 8,aplStack_128[0],aplStack_128);
        lVar4 = *aplStack_128[0];
        FUN_10ae7b948(lVar4,*(undefined8 *)(lVar14 + 0x138),lVar14 + 0x140);
        *(int *)(aplStack_128[0] + 4) = (int)lVar4;
        plVar5 = (long *)(lVar14 + 8);
        pplVar7 = aplStack_128;
        FUN_10ae7ba0c();
        plVar6 = aplStack_128[0];
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
      ___stack_chk_fail();
      uVar10 = *(uint *)(plVar5 + 4);
      uVar8 = (ulong)uVar10;
      uVar9 = uVar8;
      plVar12 = plVar5;
      if (0 < (int)uVar10) {
        do {
          do {
            plVar11 = plVar12;
            plVar12 = (long *)plVar11[uVar9 + 4];
          } while (plVar12 != (long *)0x0 && plVar12 < plVar6);
          pplVar7[uVar9 - 1] = plVar11;
          bVar1 = 1 < uVar9;
          uVar9 = uVar9 - 1;
          plVar12 = plVar11;
        } while (bVar1);
      }
      if (uVar10 == 0) {
        plVar12 = (long *)0x0;
      }
      else {
        plVar12 = (long *)(*pplVar7)[5];
      }
      if (plVar12 != plVar6) {
        FUN_10ae87b7c(3,&UNK_10f6d1c52,0xbc,&UNK_10f6d1c65);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ae7bc84);
        (*pcVar2)();
      }
      uVar9 = (ulong)*(uint *)(plVar6 + 4);
      if (*(uint *)(plVar6 + 4) != 0) {
        lVar4 = 5;
        do {
          if ((long *)(*pplVar7)[lVar4] != plVar6) break;
          (*pplVar7)[lVar4] = plVar6[lVar4];
          lVar4 = lVar4 + 1;
          uVar9 = uVar9 - 1;
          pplVar7 = pplVar7 + 1;
        } while (uVar9 != 0);
      }
      if (0 < (int)uVar10) {
        uVar9 = uVar8 + 1;
        plVar6 = plVar5 + uVar8 + 4;
        do {
          uVar10 = uVar10 - 1;
          if (*plVar6 != 0) {
            return;
          }
          *(uint *)(plVar5 + 4) = uVar10;
          uVar9 = uVar9 - 1;
          plVar6 = plVar6 + -1;
        } while (1 < uVar9);
      }
      return;
    }
    ___stack_chk_fail();
  }
  uVar3 = 0x1ee;
LAB_10ae7b488:
  FUN_10ae87b7c(3,&UNK_10f6d1c52,uVar3,&UNK_10f6d1c65);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ae7b490);
  (*pcVar2)();
}



/* Entry: 10ae7b490; end: 10ae7b4e7;  */

ulong * FUN_10ae7b490(ulong param_1,undefined8 param_2,code *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong auStack_170 [2];
  undefined1 auStack_160 [240];
  long lStack_70;
  
  if (iRam0000000113837258 != 0xdd) {
    param_3 = FUN_10ae7afc8;
    func_0x000107c2b960(0x113837258,0);
  }
  puVar9 = (ulong *)0x113837110;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) {
    puVar7 = (ulong *)0x0;
    puVar8 = (ulong *)0x0;
LAB_10ae7b74c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return puVar7;
    }
    ___stack_chk_fail();
    FUN_10ae7b310(auStack_170);
    __Unwind_Resume();
    puVar7 = puVar8 + -5;
    if (puVar9 < puVar8) {
      iVar6 = 0;
      do {
        iVar6 = iVar6 + 1;
        puVar8 = (ulong *)((ulong)puVar8 >> 1);
      } while (puVar9 < puVar8);
    }
    else {
      iVar6 = 0;
    }
    if (param_3 == (code *)0x0) {
      iVar13 = 1;
    }
    else {
      iVar13 = 0;
      uVar11 = *(uint *)param_3;
      do {
        uVar11 = uVar11 * 0x41c64e6d + 0x3039;
        iVar13 = iVar13 + 1;
      } while ((uVar11 >> 0x1e & 1) == 0);
      *(uint *)param_3 = uVar11;
    }
    uVar14 = (ulong)puVar7 >> 3;
    if ((ulong)(long)(iVar13 + iVar6) <= (ulong)puVar7 >> 3) {
      uVar14 = (long)(iVar13 + iVar6);
    }
    uVar11 = (uint)uVar14;
    if ((int)uVar11 < 1) {
      FUN_10ae87b7c(3,&UNK_10f6d1c52,0x94,&UNK_10f6d1c65);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10ae7ba0c);
      (*pcVar5)();
    }
    if (0x1c < uVar11) {
      uVar11 = 0x1d;
    }
    return (ulong *)(ulong)uVar11;
  }
  FUN_10ae7b12c(auStack_170);
  if ((param_1 < 0xffffffffffffffe0) &&
     (uVar14 = param_1 + lRam0000000113837240 + 0x1f, param_1 + 0x20 <= uVar14)) {
    uVar14 = uVar14 & -lRam0000000113837240;
    do {
      uVar15 = uVar14;
      FUN_10ae7b948(uVar14,uRam0000000113837248,0);
      iVar6 = (int)uVar15;
      if (iVar6 <= iRam0000000113837138) {
        puVar8 = (ulong *)0x113837118;
        do {
          if ((int)puVar8[4] < iVar6) {
            uVar10 = 0x1c5;
LAB_10ae7b7ec:
            FUN_10ae87b7c(3,&UNK_10f6d1c52,uVar10,&UNK_10f6d1c65);
            goto LAB_10ae7b904;
          }
          puVar7 = (ulong *)puVar8[(ulong)(iVar6 - 1) + 5];
          if (puVar7 == (ulong *)0x0) break;
          if ((puVar7[1] ^ (ulong)puVar7) != 0xffffffffb37cc16a) {
            uVar10 = 0x1ca;
            goto LAB_10ae7b7ec;
          }
          if (puVar7[2] != 0x113837110) {
            uVar10 = 0x1cb;
            goto LAB_10ae7b7ec;
          }
          if (puVar8 != (ulong *)0x113837118) {
            if (puVar8 < puVar7) {
              if ((ulong *)((long)puVar8 + *puVar8) < puVar7) goto LAB_10ae7b684;
              uVar10 = 0x1d0;
            }
            else {
              uVar10 = 0x1cd;
            }
            goto LAB_10ae7b7ec;
          }
LAB_10ae7b684:
          puVar8 = puVar7;
          if (uVar14 <= *puVar7) {
            param_3 = (code *)auStack_160;
            FUN_10ae7bb74(0x113837118);
            if (CARRY8(uRam0000000113837248,uVar14)) {
              FUN_10ae87b7c(3,&UNK_10f6d1c52,0x1b5,&UNK_10f6d1c65);
              goto LAB_10ae7b904;
            }
            if (uRam0000000113837248 + uVar14 <= *puVar7) {
              plVar1 = (long *)((long)puVar7 + uVar14);
              *plVar1 = *puVar7 - uVar14;
              plVar1[1] = (ulong)plVar1 ^ 0x4c833e95;
              plVar1[2] = 0x113837110;
              *puVar7 = uVar14;
              FUN_10ae7b368(plVar1 + 4);
              puVar8 = puVar9;
            }
            puVar9 = puVar8;
            puVar7[1] = (ulong)puVar7 ^ 0x4c833e95;
            if (puVar7[2] != 0x113837110) {
              FUN_10ae87b7c(3,&UNK_10f6d1c52,0x25f,&UNK_10f6d1c65);
              goto LAB_10ae7b904;
            }
            iRam0000000113837230 = iRam0000000113837230 + 1;
            func_0x00010ae7b1c4(auStack_170);
            puVar7 = puVar7 + 4;
            puVar8 = auStack_170;
            FUN_10ae7b310();
            goto LAB_10ae7b74c;
          }
        } while( true );
      }
      uVar11 = uRam0000000113837110 & 2;
      do {
        uVar12 = uRam0000000113837110;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(0x113837110,0x10);
        if (bVar3) {
          cVar2 = ExclusiveMonitorsStatus();
          uRam0000000113837110 = uVar11;
        }
      } while (cVar2 != '\0');
      if (7 < uVar12) {
        func_0x00010bdb33e0(0x113837110);
      }
      uVar15 = (uVar14 - 1) + lRam0000000113837238 * 0x10;
      if (uVar15 < uVar14) {
        FUN_10ae87b7c(3,&UNK_10f6d1c52,0x1b5,&UNK_10f6d1c65);
        goto LAB_10ae7b904;
      }
      uVar15 = uVar15 & lRam0000000113837238 * -0x10;
      puVar7 = (ulong *)0x0;
      _mmap(0,uVar15,3,0x1002,0xffffffff,0);
      uVar11 = uRam0000000113837110;
      if (puVar7 == (ulong *)0xffffffffffffffff) goto LAB_10ae7b8dc;
      if ((uRam0000000113837110 & 1) == 0) {
        uVar12 = uRam0000000113837110 | 1;
        do {
          uVar4 = uRam0000000113837110;
          if (uRam0000000113837110 != uVar11) {
            ClearExclusiveLocal();
            if ((uRam0000000113837110 & 1) == 0) goto LAB_10ae7b6a8;
            goto LAB_10ae7b6a0;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(0x113837110,0x10);
          if (bVar3) {
            cVar2 = ExclusiveMonitorsStatus();
            uRam0000000113837110 = uVar12;
          }
        } while (cVar2 != '\0');
        if ((uVar4 & 1) != 0) goto LAB_10ae7b6a0;
      }
      else {
LAB_10ae7b6a0:
        func_0x00010bdb3254(0x113837110);
      }
LAB_10ae7b6a8:
      *puVar7 = uVar15;
      puVar7[1] = (ulong)puVar7 ^ 0x4c833e95;
      puVar7[2] = 0x113837110;
      FUN_10ae7b368(puVar7 + 4,0x113837110);
    } while( true );
  }
  FUN_10ae87b7c(3,&UNK_10f6d1c52,0x1b5,&UNK_10f6d1c65);
LAB_10ae7b904:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ae7b908);
  (*pcVar5)();
LAB_10ae7b8dc:
  ___error();
  FUN_10ae87b7c(3,&UNK_10f6d1c52,0x239,&UNK_10f6d1dd7);
  goto LAB_10ae7b904;
}



/* Entry: 10ae7b4e8; end: 10ae7b947;  */

ulong * FUN_10ae7b4e8(ulong param_1,ulong *param_2,uint *param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong auStack_170 [2];
  uint auStack_160 [60];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) {
    puVar8 = (ulong *)0x0;
    puVar9 = (ulong *)0x0;
LAB_10ae7b74c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return puVar8;
    }
    ___stack_chk_fail();
    FUN_10ae7b310(auStack_170);
    __Unwind_Resume();
    puVar8 = puVar9 + -5;
    if (param_2 < puVar9) {
      iVar7 = 0;
      do {
        iVar7 = iVar7 + 1;
        puVar9 = (ulong *)((ulong)puVar9 >> 1);
      } while (param_2 < puVar9);
    }
    else {
      iVar7 = 0;
    }
    if (param_3 == (uint *)0x0) {
      iVar13 = 1;
    }
    else {
      iVar13 = 0;
      uVar12 = *param_3;
      do {
        uVar12 = uVar12 * 0x41c64e6d + 0x3039;
        iVar13 = iVar13 + 1;
      } while ((uVar12 >> 0x1e & 1) == 0);
      *param_3 = uVar12;
    }
    uVar14 = (ulong)puVar8 >> 3;
    if ((ulong)(long)(iVar13 + iVar7) <= (ulong)puVar8 >> 3) {
      uVar14 = (long)(iVar13 + iVar7);
    }
    uVar12 = (uint)uVar14;
    if ((int)uVar12 < 1) {
      FUN_10ae87b7c(3,&UNK_10f6d1c52,0x94,&UNK_10f6d1c65);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10ae7ba0c);
      (*pcVar6)();
    }
    if (0x1c < uVar12) {
      uVar12 = 0x1d;
    }
    return (ulong *)(ulong)uVar12;
  }
  FUN_10ae7b12c(auStack_170);
  if (param_1 < 0xffffffffffffffe0) {
    uVar14 = param_1 + param_2[0x26] + 0x1f;
    if (param_1 + 0x20 <= uVar14) {
      uVar14 = uVar14 & -param_2[0x26];
      puVar9 = param_2 + 1;
      do {
        uVar15 = uVar14;
        FUN_10ae7b948(uVar14,param_2[0x27],0);
        iVar7 = (int)uVar15;
        if (iVar7 <= (int)(uint)param_2[5]) {
          puVar10 = puVar9;
          do {
            if ((int)(uint)puVar10[4] < iVar7) {
              uVar11 = 0x1c5;
LAB_10ae7b7ec:
              FUN_10ae87b7c(3,&UNK_10f6d1c52,uVar11,&UNK_10f6d1c65);
              goto LAB_10ae7b904;
            }
            puVar8 = (ulong *)puVar10[(ulong)(iVar7 - 1) + 5];
            if (puVar8 == (ulong *)0x0) break;
            if ((puVar8[1] ^ (ulong)puVar8) != 0xffffffffb37cc16a) {
              uVar11 = 0x1ca;
              goto LAB_10ae7b7ec;
            }
            if ((ulong *)puVar8[2] != param_2) {
              uVar11 = 0x1cb;
              goto LAB_10ae7b7ec;
            }
            if (puVar9 != puVar10) {
              if (puVar10 < puVar8) {
                if ((ulong *)((long)puVar10 + *puVar10) < puVar8) goto LAB_10ae7b684;
                uVar11 = 0x1d0;
              }
              else {
                uVar11 = 0x1cd;
              }
              goto LAB_10ae7b7ec;
            }
LAB_10ae7b684:
            puVar10 = puVar8;
            if (uVar14 <= *puVar8) {
              param_3 = auStack_160;
              FUN_10ae7bb74(puVar9);
              if (CARRY8(param_2[0x27],uVar14)) {
                FUN_10ae87b7c(3,&UNK_10f6d1c52,0x1b5,&UNK_10f6d1c65);
                goto LAB_10ae7b904;
              }
              if (param_2[0x27] + uVar14 <= *puVar8) {
                plVar1 = (long *)((long)puVar8 + uVar14);
                *plVar1 = *puVar8 - uVar14;
                plVar1[1] = (ulong)plVar1 ^ 0x4c833e95;
                plVar1[2] = (long)param_2;
                *puVar8 = uVar14;
                puVar10 = param_2;
                FUN_10ae7b368(plVar1 + 4);
              }
              puVar8[1] = (ulong)puVar8 ^ 0x4c833e95;
              if ((ulong *)puVar8[2] != param_2) {
                FUN_10ae87b7c(3,&UNK_10f6d1c52,0x25f,&UNK_10f6d1c65);
                goto LAB_10ae7b904;
              }
              *(uint *)(param_2 + 0x24) = (uint)param_2[0x24] + 1;
              func_0x00010ae7b1c4(auStack_170);
              puVar8 = puVar8 + 4;
              puVar9 = auStack_170;
              FUN_10ae7b310();
              param_2 = puVar10;
              goto LAB_10ae7b74c;
            }
          } while( true );
        }
        uVar15 = *param_2;
        do {
          uVar5 = *param_2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar4) {
            *(uint *)param_2 = (uint)uVar15 & 2;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (7 < (uint)uVar5) {
          func_0x00010bdb33e0(param_2);
        }
        uVar15 = (uVar14 - 1) + param_2[0x25] * 0x10;
        if (uVar15 < uVar14) {
          FUN_10ae87b7c(3,&UNK_10f6d1c52,0x1b5,&UNK_10f6d1c65);
          goto LAB_10ae7b904;
        }
        uVar15 = uVar15 & param_2[0x25] * -0x10;
        puVar8 = (ulong *)0x0;
        _mmap(0,uVar15,3,0x1002,0xffffffff,0);
        if (puVar8 == (ulong *)0xffffffffffffffff) goto LAB_10ae7b8dc;
        uVar12 = (uint)*param_2;
        if ((uVar12 & 1) == 0) {
          do {
            uVar2 = (uint)*param_2;
            if (uVar2 != uVar12) {
              ClearExclusiveLocal();
              if ((uVar2 & 1) == 0) goto LAB_10ae7b6a8;
              goto LAB_10ae7b6a0;
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
            if (bVar4) {
              *(uint *)param_2 = uVar12 | 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar2 & 1) != 0) goto LAB_10ae7b6a0;
        }
        else {
LAB_10ae7b6a0:
          func_0x00010bdb3254(param_2);
        }
LAB_10ae7b6a8:
        *puVar8 = uVar15;
        puVar8[1] = (ulong)puVar8 ^ 0x4c833e95;
        puVar8[2] = (ulong)param_2;
        FUN_10ae7b368(puVar8 + 4,param_2);
      } while( true );
    }
  }
  FUN_10ae87b7c(3,&UNK_10f6d1c52,0x1b5,&UNK_10f6d1c65);
LAB_10ae7b904:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ae7b908);
  (*pcVar6)();
LAB_10ae7b8dc:
  ___error();
  FUN_10ae87b7c(3,&UNK_10f6d1c52,0x239,&UNK_10f6d1dd7);
  goto LAB_10ae7b904;
}



/* Entry: 10ae7b948; end: 10ae7ba0b;  */

uint FUN_10ae7b948(ulong param_1,ulong param_2,uint *param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  
  uVar4 = param_1 - 0x28;
  if (param_2 < param_1) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      param_1 = param_1 >> 1;
    } while (param_2 < param_1);
  }
  else {
    iVar2 = 0;
  }
  uVar4 = uVar4 >> 3;
  if (param_3 == (uint *)0x0) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
    uVar3 = *param_3;
    do {
      uVar3 = uVar3 * 0x41c64e6d + 0x3039;
      iVar5 = iVar5 + 1;
    } while ((uVar3 >> 0x1e & 1) == 0);
    *param_3 = uVar3;
  }
  if ((ulong)(long)(iVar5 + iVar2) <= uVar4) {
    uVar4 = (long)(iVar5 + iVar2);
  }
  uVar3 = (uint)uVar4;
  if ((int)uVar3 < 1) {
    FUN_10ae87b7c(3,&UNK_10f6d1c52,0x94,&UNK_10f6d1c65);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ae7ba0c);
    (*pcVar1)();
  }
  if (0x1c < uVar3) {
    uVar3 = 0x1d;
  }
  return uVar3;
}



/* Entry: 10ae7ba0c; end: 10ae7baaf;  */

void FUN_10ae7ba0c(ulong param_1,ulong param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar4 = (ulong)uVar3;
  lVar2 = (long)(int)uVar3;
  uVar8 = param_1;
  if (0 < (int)uVar3) {
    do {
      uVar6 = uVar4 - 1;
      do {
        uVar7 = uVar8;
        uVar8 = *(ulong *)(uVar7 + uVar6 * 8 + 0x28);
      } while (uVar8 != 0 && uVar8 < param_2);
      param_3[uVar6] = uVar7;
      bVar1 = 1 < uVar4;
      uVar4 = uVar6;
      uVar8 = uVar7;
    } while (bVar1);
  }
  uVar5 = *(uint *)(param_2 + 0x20);
  if ((int)uVar3 < (int)uVar5) {
    do {
      uVar3 = uVar3 + 1;
      param_3[lVar2] = param_1;
      lVar2 = lVar2 + 1;
      *(uint *)(param_1 + 0x20) = uVar3;
      uVar5 = *(uint *)(param_2 + 0x20);
    } while (lVar2 < (int)uVar5);
  }
  if (uVar5 != 0) {
    uVar4 = (ulong)uVar5;
    lVar2 = 5;
    do {
      *(undefined8 *)(param_2 + lVar2 * 8) = *(undefined8 *)(*param_3 + lVar2 * 8);
      *(ulong *)(*param_3 + lVar2 * 8) = param_2;
      lVar2 = lVar2 + 1;
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 1;
    } while (uVar4 != 0);
  }
  return;
}



/* Entry: 10ae7bab0; end: 10ae7bb73;  */

void FUN_10ae7bab0(long *param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long alStack_128 [30];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)param_1[5];
  plVar4 = param_1;
  if ((plVar5 != (long *)0x0) && ((long *)((long)param_1 + *param_1) == plVar5)) {
    lVar11 = param_1[2];
    *param_1 = *plVar5 + *param_1;
    plVar5[1] = 0;
    plVar5[2] = 0;
    FUN_10ae7bb74(lVar11 + 8,plVar5,alStack_128);
    FUN_10ae7bb74(lVar11 + 8,param_1,alStack_128);
    lVar3 = *param_1;
    FUN_10ae7b948(lVar3,*(undefined8 *)(lVar11 + 0x138),lVar11 + 0x140);
    *(int *)(param_1 + 4) = (int)lVar3;
    plVar4 = (long *)(lVar11 + 8);
    param_3 = alStack_128;
    FUN_10ae7ba0c();
    plVar5 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(uint *)(plVar4 + 4);
  uVar6 = (ulong)uVar8;
  uVar7 = uVar6;
  plVar10 = plVar4;
  if (0 < (int)uVar8) {
    do {
      do {
        plVar9 = plVar10;
        plVar10 = (long *)plVar9[uVar7 + 4];
      } while (plVar10 != (long *)0x0 && plVar10 < plVar5);
      param_3[uVar7 - 1] = (long)plVar9;
      bVar1 = 1 < uVar7;
      uVar7 = uVar7 - 1;
      plVar10 = plVar9;
    } while (bVar1);
  }
  if (uVar8 == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = *(long **)(*param_3 + 0x28);
  }
  if (plVar10 != plVar5) {
    FUN_10ae87b7c(3,&UNK_10f6d1c52,0xbc,&UNK_10f6d1c65);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10ae7bc84);
    (*pcVar2)();
  }
  uVar7 = (ulong)*(uint *)(plVar5 + 4);
  if (*(uint *)(plVar5 + 4) != 0) {
    lVar3 = 5;
    do {
      if (*(long **)(*param_3 + lVar3 * 8) != plVar5) break;
      *(long *)(*param_3 + lVar3 * 8) = plVar5[lVar3];
      lVar3 = lVar3 + 1;
      uVar7 = uVar7 - 1;
      param_3 = param_3 + 1;
    } while (uVar7 != 0);
  }
  if (0 < (int)uVar8) {
    uVar7 = uVar6 + 1;
    plVar5 = plVar4 + uVar6 + 4;
    do {
      uVar8 = uVar8 - 1;
      if (*plVar5 != 0) {
        return;
      }
      *(uint *)(plVar4 + 4) = uVar8;
      uVar7 = uVar7 - 1;
      plVar5 = plVar5 + -1;
    } while (1 < uVar7);
  }
  return;
}



/* Entry: 10ae7bb74; end: 10ae7bc83;  */

void FUN_10ae7bb74(ulong param_1,ulong param_2,long *param_3)

{
  bool bVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar6 = *(uint *)(param_1 + 0x20);
  uVar3 = (ulong)uVar6;
  uVar5 = uVar3;
  uVar10 = param_1;
  if (0 < (int)uVar6) {
    do {
      uVar8 = uVar5 - 1;
      do {
        uVar9 = uVar10;
        uVar10 = *(ulong *)(uVar9 + uVar8 * 8 + 0x28);
      } while (uVar10 != 0 && uVar10 < param_2);
      param_3[uVar8] = uVar9;
      bVar1 = 1 < uVar5;
      uVar5 = uVar8;
      uVar10 = uVar9;
    } while (bVar1);
  }
  if (uVar6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(ulong *)(*param_3 + 0x28);
  }
  if (uVar5 != param_2) {
    FUN_10ae87b7c(3,&UNK_10f6d1c52,0xbc,&UNK_10f6d1c65);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10ae7bc84);
    (*pcVar2)();
  }
  uVar5 = (ulong)*(uint *)(param_2 + 0x20);
  if (*(uint *)(param_2 + 0x20) != 0) {
    lVar7 = 5;
    do {
      if (*(ulong *)(*param_3 + lVar7 * 8) != param_2) break;
      *(undefined8 *)(*param_3 + lVar7 * 8) = *(undefined8 *)(param_2 + lVar7 * 8);
      lVar7 = lVar7 + 1;
      uVar5 = uVar5 - 1;
      param_3 = param_3 + 1;
    } while (uVar5 != 0);
  }
  if (0 < (int)uVar6) {
    uVar5 = uVar3 + 1;
    plVar4 = (long *)(param_1 + uVar3 * 8 + 0x20);
    do {
      uVar6 = uVar6 - 1;
      if (*plVar4 != 0) {
        return;
      }
      *(uint *)(param_1 + 0x20) = uVar6;
      uVar5 = uVar5 - 1;
      plVar4 = plVar4 + -1;
    } while (1 < uVar5);
  }
  return;
}



/* Entry: 10ae7bc84; end: 10ae7bf57;  */

void FUN_10ae7bc84(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 ***pppuVar10;
  undefined8 **ppuStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  long lStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 **ppuStack_458;
  undefined8 **ppuStack_450;
  long lStack_58;
  
  uVar4 = 0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_470 = param_1;
  if ((param_1 == 0) || ((int)param_3 < 1)) {
LAB_10ae7bed4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail(uVar4);
  }
  else {
    plVar5 = &lStack_470;
    _backtrace_symbols(plVar5,1);
    if (plVar5 == (long *)0x0) {
      uVar4 = 0;
      goto LAB_10ae7bed4;
    }
    pppuVar10 = (undefined8 ***)*plVar5;
    pppuVar6 = pppuVar10;
    _strlen();
    pppuVar7 = &ppuStack_458;
    ppuStack_458 = pppuVar10;
    ppuStack_450 = pppuVar6;
    func_0x00010923a9a8(pppuVar7,&UNK_10f4ef2f4,0);
    if (pppuVar7 == (undefined8 ***)0xffffffffffffffff) {
LAB_10ae7bdbc:
      ppuStack_488 = (undefined8 ***)0x0;
      plStack_480 = (long *)0x0;
      uStack_478 = 0;
      pppuVar7 = &ppuStack_488;
LAB_10ae7be24:
      _free(plVar5);
      FUN_10ae78290(pppuVar7,&ppuStack_458,0x400);
      if ((int)pppuVar7 == 0) {
        pppuVar7 = (undefined8 ***)ppuStack_488;
        if (-1 < (long)uStack_478) {
          pppuVar7 = &ppuStack_488;
        }
        _strncpy(param_2,pppuVar7,param_3);
      }
      else {
        pppuVar7 = &ppuStack_458;
        _strlen();
        if ((long)pppuVar7 + 1U <= (ulong)param_3) {
          _memcpy(param_2,&ppuStack_458);
        }
      }
      param_2 = param_2 + (ulong)param_3;
      if (*(char *)(param_2 + -1) != '\0') {
        uVar9 = (ulong)param_3 - 1;
        if (2 < uVar9) {
          uVar9 = 3;
        }
        _memcpy((param_2 + -1) - uVar9,&UNK_10f6d1f6b);
        *(undefined1 *)(param_2 + -1) = 0;
      }
      if ((long)uStack_478 < 0) {
        __ZdlPv(ppuStack_488);
      }
      uVar4 = 1;
      goto LAB_10ae7bed4;
    }
    if (pppuVar7 < ppuStack_450) {
      lStack_468 = (long)ppuStack_458 + (long)pppuVar7 + 1;
      plStack_460 = (long *)((long)ppuStack_450 - ((long)pppuVar7 + 1));
      plVar8 = &lStack_468;
      func_0x00010923a9a8(plVar8," ",0);
      if (plVar8 == (long *)0xffffffffffffffff) goto LAB_10ae7bdbc;
      if (plStack_460 <= plVar8) {
        func_0x000109262df8(&UNK_10f2fca6e);
        goto LAB_10ae7bf30;
      }
      lStack_468 = lStack_468 + (long)plVar8 + 1;
      plStack_460 = (long *)((long)plStack_460 - ((long)plVar8 + 1));
      plVar8 = &lStack_468;
      func_0x00010923a9a8(plVar8,&UNK_10f5aeb6c,0);
      lVar2 = lStack_468;
      if (plVar8 == (long *)0xffffffffffffffff) goto LAB_10ae7bdbc;
      plVar1 = plStack_460;
      if (plVar8 <= plStack_460) {
        plVar1 = plVar8;
      }
      plStack_460 = plVar1;
      if ((long *)0x7ffffffffffffff7 < plVar1) {
        func_0x000104c4f6b8();
        goto LAB_10ae7bf30;
      }
      if (plVar1 < (long *)0x17) {
        uStack_478 = CONCAT17((char)plVar1,(undefined7)uStack_478);
        pppuVar6 = &ppuStack_488;
        if (plVar1 != (long *)0x0) goto LAB_10ae7bdfc;
      }
      else {
        pppuVar7 = (undefined8 ***)0x19;
        if (((ulong)plVar1 | 7) != 0x17) {
          pppuVar7 = (undefined8 ***)(((ulong)plVar1 | 7) + 1);
        }
        pppuVar6 = pppuVar7;
        __Znwm();
        uStack_478 = (ulong)pppuVar7 | 0x8000000000000000;
        ppuStack_488 = pppuVar6;
        plStack_480 = plVar1;
LAB_10ae7bdfc:
        _memmove(pppuVar6,lVar2,plVar1);
      }
      *(undefined1 *)((long)pppuVar6 + (long)plVar1) = 0;
      pppuVar7 = (undefined8 ***)ppuStack_488;
      if (-1 < (long)uStack_478) {
        pppuVar7 = &ppuStack_488;
      }
      goto LAB_10ae7be24;
    }
  }
  func_0x000109262df8(&UNK_10f2fca6e);
LAB_10ae7bf30:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ae7bf34);
  (*pcVar3)();
}



/* Entry: 10ae7bf58; end: 10ae7c0df;  */

undefined8 * FUN_10ae7bf58(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  
  uVar8 = uRam0000000113837268;
  if ((uRam0000000113837268 & 1) == 0) {
    uVar9 = uRam0000000113837268 | 1;
    do {
      uVar4 = uRam0000000113837268;
      if (uRam0000000113837268 != uVar8) {
        ClearExclusiveLocal();
        if ((uRam0000000113837268 & 1) != 0) goto LAB_10ae7c084;
        goto LAB_10ae7bf98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113837268,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        uRam0000000113837268 = uVar9;
      }
    } while (cVar1 != '\0');
    if ((uVar4 & 1) == 0) goto LAB_10ae7bf98;
  }
LAB_10ae7c084:
  func_0x00010bdb3254(0x113837268);
LAB_10ae7bf98:
  puVar10 = puRam0000000113837260;
  if (puRam0000000113837260 != (undefined8 *)0x0) {
    puRam0000000113837260 = (undefined8 *)puRam0000000113837260[0x2b];
  }
  uVar8 = uRam0000000113837268 & 2;
  do {
    uVar9 = uRam0000000113837268;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113837268,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      uRam0000000113837268 = uVar8;
    }
  } while (cVar1 != '\0');
  if (7 < uVar9) {
    func_0x00010bdb33e0(0x113837268);
  }
  if (puVar10 == (undefined8 *)0x0) {
    lVar5 = 0x25f;
    FUN_10ae7b490();
    puVar10 = (undefined8 *)(lVar5 + 0xffU & 0xffffffffffffff00);
    FUN_10ae7c1a8(puVar10);
    *(undefined4 *)(puVar10 + 0x29) = 0;
    *(undefined4 *)((long)puVar10 + 0x14c) = 0;
    *(undefined1 *)(puVar10 + 0x2a) = 0;
  }
  *(undefined1 *)((long)puVar10 + 0x14) = 0;
  *(undefined4 *)(puVar10 + 3) = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined1 *)(puVar10 + 2) = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[4] = 0;
  *(undefined4 *)((long)puVar10 + 0x1c) = 0;
  *(undefined1 *)((long)puVar10 + 0x13) = 0;
  *(undefined2 *)((long)puVar10 + 0x11) = 0;
  puVar10[7] = 0;
  puVar10[0x28] = 0;
  *(undefined4 *)(puVar10 + 0x29) = 0;
  *(undefined4 *)((long)puVar10 + 0x14c) = 0;
  *(undefined1 *)(puVar10 + 0x2a) = 0;
  puVar10[0x2b] = 0;
  puVar3 = PTR___tlv_bootstrap_11340e080;
  ppuVar7 = &PTR___tlv_bootstrap_11340e080;
  ppuVar6 = ppuVar7;
  (*(code *)PTR___tlv_bootstrap_11340e080)();
  if (((ulong)*ppuVar6 & 1) == 0) {
    ppuVar6 = &PTR___tlv_bootstrap_11340e068;
    (*(code *)PTR___tlv_bootstrap_11340e068)();
    *ppuVar6 = (undefined *)puVar10;
    ppuVar6[1] = FUN_10ae7c0e0;
    __tlv_atexit(FUN_10ae87adc,ppuVar6,0x100000000);
    (*(code *)puVar3)();
    *(undefined1 *)ppuVar7 = 1;
  }
  ppuVar7 = &PTR___tlv_bootstrap_11340d8a0;
  (*(code *)PTR___tlv_bootstrap_11340d8a0)();
  *ppuVar7 = (undefined *)puVar10;
  return puVar10;
}



/* Entry: 10ae7c0e0; end: 10ae7c1a7;  */

void FUN_10ae7c0e0(long param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined **ppuVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10ae7b25c();
  }
  ppuVar4 = &PTR___tlv_bootstrap_11340d8a0;
  (*(code *)PTR___tlv_bootstrap_11340d8a0)();
  *ppuVar4 = (undefined *)0x0;
  uVar5 = uRam0000000113837268;
  if ((uRam0000000113837268 & 1) == 0) {
    uVar6 = uRam0000000113837268 | 1;
    do {
      uVar3 = uRam0000000113837268;
      if (uRam0000000113837268 != uVar5) {
        ClearExclusiveLocal();
        if ((uRam0000000113837268 & 1) != 0) goto LAB_10ae7c194;
        goto LAB_10ae7c144;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113837268,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        uRam0000000113837268 = uVar6;
      }
    } while (cVar1 != '\0');
    if ((uVar3 & 1) == 0) goto LAB_10ae7c144;
  }
LAB_10ae7c194:
  func_0x00010bdb3254(0x113837268);
LAB_10ae7c144:
  *(long *)(param_1 + 0x158) = lRam0000000113837260;
  uVar5 = uRam0000000113837268 & 2;
  do {
    uVar6 = uRam0000000113837268;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113837268,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      uRam0000000113837268 = uVar5;
    }
  } while (cVar1 != '\0');
  lRam0000000113837260 = param_1;
  if (7 < uVar6) {
    func_0x00010bdb33e0(0x113837268);
  }
  return;
}



/* Entry: 10ae7c1a8; end: 10ae7c1b7;  */

long FUN_10ae7c1a8(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0x40;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  lVar3 = lVar1;
  _pthread_mutex_init(lVar1,0);
  if ((int)lVar3 == 0) {
    param_1 = param_1 + 0x80;
    _pthread_cond_init(param_1,0);
    if ((int)param_1 == 0) {
      return lVar1;
    }
    puVar5 = &UNK_10f6d2038;
    uVar4 = 0x49;
  }
  else {
    puVar5 = &UNK_10f6d201a;
    uVar4 = 0x44;
  }
  FUN_10ae87b7c(3,&UNK_10f6d2008,uVar4,puVar5);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ae7c2dc);
  (*pcVar2)();
}



/* Entry: 10ae7c1b8; end: 10ae7c33f;  */

void FUN_10ae7c1b8(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  int *piVar5;
  undefined **ppuVar6;
  
  ppuVar4 = &PTR___tlv_bootstrap_11340d8a0;
  (*(code *)PTR___tlv_bootstrap_11340d8a0)();
  ppuVar6 = (undefined **)*ppuVar4;
  if ((undefined **)*ppuVar4 == (undefined **)0x0) {
    FUN_10ae7bf58();
    ppuVar6 = ppuVar4;
  }
  uVar1 = *(uint *)(ppuVar6 + 0x29);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  *(uint *)((long)ppuVar6 + 0x14c) = uVar1;
  *(undefined1 *)(ppuVar6 + 0x2a) = 0;
  piVar5 = (int *)ppuVar6[0x28];
  if (piVar5 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10ae7c340(ppuVar6 + 8,param_1);
  piVar5 = (int *)ppuVar6[0x28];
  if (piVar5 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(ppuVar6 + 0x2a) = 0;
  *(undefined4 *)((long)ppuVar6 + 0x14c) = 0;
  return;
}



/* Entry: 10ae7c340; end: 10ae7c49b;  */

undefined8 FUN_10ae7c340(long param_1,long param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_38 [8];
  
  FUN_10ae7c49c(auStack_38,param_1);
  iVar4 = *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  if (iVar4 == 0) {
    ppuVar2 = &PTR___tlv_bootstrap_11340d8a0;
    (*(code *)PTR___tlv_bootstrap_11340d8a0)();
LAB_10ae7c3c8:
    if (param_2 == -1) {
      lVar3 = param_1 + 0x40;
      _pthread_cond_wait(lVar3,param_1);
      if ((int)lVar3 != 0) {
        FUN_10ae87b7c(3,&UNK_10f6d2008,0x7b,&UNK_10f6d2055);
        goto LAB_10ae7c478;
      }
    }
    else {
      lVar3 = param_1;
      func_0x00010ae7c2dc(param_1,param_2);
      if ((int)lVar3 != 0) {
        if ((int)lVar3 != 0x3c) {
          FUN_10ae87b7c(3,&UNK_10f6d2008,0x84,&UNK_10f6d2072);
LAB_10ae7c478:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10ae7c47c);
          (*pcVar1)();
        }
        uVar6 = 0;
        goto LAB_10ae7c384;
      }
    }
    iVar4 = *(int *)(param_1 + 0x74);
    if (iVar4 == 0) {
      puVar5 = *ppuVar2;
      if (((puVar5[0x150] & 1) == 0) && (0x3c < *(int *)(puVar5 + 0x148) - *(int *)(puVar5 + 0x14c))
         ) {
        puVar5[0x150] = 1;
      }
      goto LAB_10ae7c3c8;
    }
  }
  *(int *)(param_1 + 0x74) = iVar4 + -1;
  uVar6 = 1;
LAB_10ae7c384:
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
  FUN_10ae7c4f8(auStack_38);
  return uVar6;
}



/* Entry: 10ae7c49c; end: 10ae7c4f7;  */

undefined8 * FUN_10ae7c49c(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  *param_1 = param_2;
  _pthread_mutex_lock();
  if ((int)param_2 == 0) {
    return param_1;
  }
  FUN_10ae87b7c(3,&UNK_10f6d2008,0x2a,&UNK_10f6d20b7);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ae7c4f8);
  (*pcVar1)();
}



/* Entry: 10ae7c4f8; end: 10ae7c553;  */

undefined8 * FUN_10ae7c4f8(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = (int)*param_1;
  _pthread_mutex_unlock();
  if (iVar2 == 0) {
    return param_1;
  }
  FUN_10ae87b7c(3,&UNK_10f6d2008,0x34,&UNK_10f6d20d5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ae7c550);
  (*pcVar1)();
}



/* Entry: 10ae7c554; end: 10ae7c5b3;  */

void FUN_10ae7c554(long param_1)

{
  undefined1 auStack_28 [8];
  
  FUN_10ae7c49c(auStack_28,param_1);
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  FUN_10ae7c5b4(param_1);
  FUN_10ae7c4f8(auStack_28);
  return;
}



/* Entry: 10ae7c5b4; end: 10ae7c603;  */

void FUN_10ae7c5b4(long param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar2 = (int)param_1 + 0x40;
    _pthread_cond_signal();
    if (iVar2 != 0) {
      FUN_10ae87b7c(3,&UNK_10f6d2008,0x9e,&UNK_10f6d2098);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ae7c604);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 10ae7c604; end: 10ae7c6c7;  */

int FUN_10ae7c604(int param_1,ulong param_2)

{
  int iVar1;
  
  if (iRam0000000113837280 != 0xdd) {
    FUN_10ae7da70(0x113837280);
  }
  iVar1 = *(int *)((param_2 & 0xffffffff) * 4 + 0x113837288);
  if (iRam0000000113837280 != 0xdd) {
    FUN_10ae7da70(0x113837280);
  }
  if (iVar1 <= param_1) {
    if (iVar1 != param_1) {
      FUN_10ae86758(uRam0000000113837290,uRam0000000113837298);
      return 0;
    }
    _sched_yield();
  }
  return param_1 + 1;
}



/* Entry: 10ae7c6c8; end: 10ae7c71f;  */

void FUN_10ae7c6c8(int *param_1)

{
  code *pcVar1;
  
  if (*param_1 == 0) {
    return;
  }
  FUN_10ae87b7c(3,&UNK_10f6d2597,0x7f,&UNK_10f6d18c6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ae7c71c);
  (*pcVar1)();
}



/* Entry: 10ae7c720; end: 10ae7c75b;  */

undefined8 * FUN_10ae7c720(undefined8 *param_1)

{
  if (((uint)*param_1 >> 4 & 1) != 0) {
    FUN_10ae7c75c(param_1,0x10,0x40);
  }
  return param_1;
}



/* Entry: 10ae7c75c; end: 10ae7c977;  */

/* WARNING: Possible PIC construction at 0x00010ae7c96c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae7c970) */
/* WARNING: Removing unreachable block (ram,0x00010ae7c974) */

undefined1  [16] FUN_10ae7c75c(ulong *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong *puVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar8 = uRam00000001138392f8;
  if ((uRam00000001138392f8 & 1) == 0) {
    uVar10 = uRam00000001138392f8 | 1;
    do {
      uVar4 = uRam00000001138392f8;
      if (uRam00000001138392f8 != uVar8) {
        ClearExclusiveLocal();
        break;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x1138392f8,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        uRam00000001138392f8 = uVar10;
      }
    } while (cVar2 != '\0');
    puVar7 = param_1;
    if ((uVar4 & 1) != 0) goto LAB_10ae7c934;
  }
  else {
LAB_10ae7c934:
    puVar7 = (ulong *)0x1138392f8;
    func_0x00010bdb3254(0x1138392f8);
  }
  piVar9 = (int *)(((ulong)param_1 % 0x407) * 8 + 0x1138372c0);
  piVar13 = *(int **)piVar9;
  if (piVar13 == (int *)0x0) {
LAB_10ae7c8b4:
    uVar11 = *param_1;
    if ((uVar11 & param_2) != 0) {
      do {
        if ((uVar11 & param_3) == 0) {
          if (*param_1 == uVar11) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar3) {
              *param_1 = uVar11 & ~param_2;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
        }
        uVar11 = *param_1;
      } while ((uVar11 & param_2) != 0);
    }
    uVar8 = uRam00000001138392f8 & 2;
    do {
      uVar10 = uRam00000001138392f8;
      uVar11 = (ulong)uRam00000001138392f8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x1138392f8,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        uRam00000001138392f8 = uVar8;
      }
    } while (cVar2 != '\0');
    if (7 < uVar10) {
FUN_10ae87860:
      return ZEXT816(0x1138392f8);
    }
  }
  else {
    if ((*(ulong *)(piVar13 + 4) ^ (ulong)param_1) != 0xf03a5f7bf03a5f7b) {
      do {
        piVar9 = piVar13;
        piVar13 = *(int **)(piVar9 + 2);
        if (piVar13 == (int *)0x0) goto LAB_10ae7c8b4;
      } while ((*(ulong *)(piVar13 + 4) ^ (ulong)param_1) != 0xf03a5f7bf03a5f7b);
      piVar9 = piVar9 + 2;
    }
    *(undefined8 *)piVar9 = *(undefined8 *)(piVar13 + 2);
    iVar1 = *piVar13;
    *piVar13 = iVar1 + -1;
    uVar11 = *param_1;
    if ((uVar11 & param_2) != 0) {
      do {
        if ((uVar11 & param_3) == 0) {
          if (*param_1 == uVar11) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar3) {
              *param_1 = uVar11 & ~param_2;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
        }
        uVar11 = *param_1;
      } while ((uVar11 & param_2) != 0);
    }
    uVar8 = uRam00000001138392f8 & 2;
    do {
      uVar10 = uRam00000001138392f8;
      uVar11 = (ulong)uRam00000001138392f8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x1138392f8,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        uRam00000001138392f8 = uVar8;
      }
    } while (cVar2 != '\0');
    if (7 < uVar10) goto FUN_10ae87860;
    if (iVar1 + -1 == 0) {
      puVar6 = (undefined1 *)0x0;
      if (piVar13 != (int *)0x0) {
        uVar12 = *(ulong *)(piVar13 + -4);
        FUN_10ae7b12c(&stack0xffffffffffffffd0,uVar12);
        uVar11 = uVar12;
        FUN_10ae7b368(piVar13,uVar12);
        if (*(int *)(uVar12 + 0x120) < 1) {
          FUN_10ae87b7c(3,&UNK_10f6d1c52,0x203,&UNK_10f6d1c65);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ae7b2f8);
          (*pcVar5)();
        }
        *(int *)(uVar12 + 0x120) = *(int *)(uVar12 + 0x120) + -1;
        func_0x00010ae7b1c4(&stack0xffffffffffffffd0);
        puVar6 = &stack0xffffffffffffffd0;
        FUN_10ae7b310(puVar6);
      }
      auVar14._8_8_ = uVar11;
      auVar14._0_8_ = puVar6;
      return auVar14;
    }
  }
  auVar15._8_8_ = uVar11;
  auVar15._0_8_ = puVar7;
  return auVar15;
}



/* Entry: 10ae7c978; end: 10ae7c97b;  */

undefined8 * FUN_10ae7c978(undefined8 *param_1)

{
  if (((uint)*param_1 >> 4 & 1) != 0) {
    FUN_10ae7c75c(param_1,0x10,0x40);
  }
  return param_1;
}



/* Entry: 10ae7c97c; end: 10ae7cadf;  */

void FUN_10ae7c97c(ulong *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  uVar7 = *param_1;
  if ((uVar7 & 0x4d) != 4) {
    return;
  }
  do {
    if (*param_1 != uVar7) {
      ClearExclusiveLocal();
      return;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar7 | 0x48;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar4 = (undefined8 *)(uVar7 & 0xffffffffffffff00);
  if (puVar4 != (undefined8 *)0x0) {
    puVar6 = puVar4;
    puVar10 = (undefined8 *)*puVar4;
    if ((undefined8 *)*puVar4 != param_2) {
      do {
        puVar6 = puVar10;
        puVar10 = param_2;
        FUN_10ae7cae0(param_2,puVar6);
        puVar8 = (undefined8 *)puVar6[1];
        if (((ulong)puVar10 & 1) == 0) {
          if (puVar8 != (undefined8 *)0x0) {
            puVar3 = puVar6;
            for (puVar10 = (undefined8 *)puVar8[1]; puVar5 = puVar8, puVar8 = puVar5,
                puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)puVar10[1]) {
              puVar3[1] = puVar10;
              puVar8 = puVar10;
              puVar3 = puVar5;
            }
            goto LAB_10ae7ca50;
          }
        }
        else if (puVar8 == param_2) {
          puVar5 = puVar6;
          puVar8 = (undefined8 *)param_2[1];
          if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)0x0;
            if ((undefined8 *)*puVar6 != param_2) {
              puVar8 = (undefined8 *)*puVar6;
            }
          }
LAB_10ae7ca50:
          puVar6[1] = puVar8;
          puVar6 = puVar5;
        }
        puVar10 = (undefined8 *)*puVar6;
      } while ((puVar6 != puVar4) && (puVar10 != param_2));
      if (puVar10 != param_2) goto LAB_10ae7caa0;
    }
    FUN_10ae7cb74(puVar4,puVar6);
    *param_2 = 0;
    *(undefined4 *)((long)param_2 + 0x1c) = 0;
  }
LAB_10ae7caa0:
  do {
    while( true ) {
      uVar9 = *param_1;
      uVar7 = uVar9 & 0x12;
      if (puVar4 != (undefined8 *)0x0) {
        uVar7 = uVar7 | (ulong)puVar4 | 4;
        puVar4[5] = 0;
        *(undefined1 *)((long)puVar4 + 0x13) = 0;
      }
      if (*param_1 == uVar9) break;
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}



/* Entry: 10ae7cae0; end: 10ae7cb73;  */

bool FUN_10ae7cae0(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  
  if ((**(long **)(param_1 + 0x20) != **(long **)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18))) {
    return false;
  }
  plVar3 = (long *)(*(long **)(param_1 + 0x20))[1];
  plVar2 = (long *)(*(long **)(param_2 + 0x20))[1];
  if ((plVar3 == (long *)0x0) || (plVar3[2] == 0)) {
    if (plVar2 == (long *)0x0) {
      return true;
    }
    bVar1 = plVar2[2] == 0;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return false;
    }
    if (plVar3[2] != plVar2[2]) {
      return false;
    }
    if (plVar3[3] != plVar2[3]) {
      return false;
    }
    bVar1 = *plVar3 == *plVar2 && plVar3[1] == plVar2[1];
  }
  return bVar1;
}



/* Entry: 10ae7cb74; end: 10ae7ccdb;  */

long * FUN_10ae7cb74(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_2;
  lVar3 = *plVar2;
  *param_2 = lVar3;
  if (plVar2 == param_1) {
    plVar2 = (long *)0x0;
    if (param_1 != param_2) {
      plVar2 = param_2;
    }
  }
  else {
    plVar2 = param_1;
    if ((param_1 != param_2) && (plVar1 = param_2, FUN_10ae7cae0(param_2,lVar3), (int)plVar1 != 0))
    {
      if (*(long *)(lVar3 + 8) == 0) {
        param_2[1] = lVar3;
      }
      else {
        param_2[1] = *(long *)(lVar3 + 8);
      }
    }
  }
  return plVar2;
}



/* Entry: 10ae7ccdc; end: 10ae7cd1f;  */

void FUN_10ae7ccdc(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  if ((uVar4 & 0x1c) == 0) {
    while (*param_1 == uVar4) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = (uVar4 | 1) + 0x100;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  }
  FUN_10ae7cd20(param_1,&UNK_10e52c1a0,0,0xffffffffffffffff,0);
  if (((ulong)param_1 & 1) != 0) {
    return;
  }
  FUN_10ae87b7c(3,&UNK_10f6d2185,0x719,&UNK_10f6d18c6);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10bdb2ae8);
  (*pcVar3)();
}



/* Entry: 10ae7cd20; end: 10ae7d25f;  */

ulong FUN_10ae7cd20(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  undefined8 uVar13;
  ulong *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 uStack_68;
  
  uVar10 = *param_1;
  if ((*param_2 & uVar10) == 0) {
    uVar8 = 0xfffffffffffffffd;
    if ((param_5 & 1) == 0) {
      uVar8 = 0xffffffffffffffff;
    }
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    do {
      if (*param_1 != uVar10) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_10ae7cdc4;
      }
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar12) {
        *param_1 = (uVar2 | uVar10 & uVar8) + uVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((param_3 == 0) || (*(code **)(param_3 + 0x10) == (code *)0x0)) {
      return 1;
    }
    uVar10 = param_3;
    (**(code **)(param_3 + 0x10))();
    bVar12 = true;
    if ((uVar10 & 1) != 0) {
      return 1;
    }
  }
  else {
    bVar12 = false;
  }
LAB_10ae7cdc4:
  ppuVar6 = &PTR___tlv_bootstrap_11340d8a0;
  (*(code *)PTR___tlv_bootstrap_11340d8a0)();
  puVar7 = *ppuVar6;
  if (puVar7 == (undefined *)0x0) {
    FUN_10ae7bf58();
  }
  uStack_88 = 0;
  uStack_78 = 0;
  puStack_a0 = param_2;
  uStack_98 = param_3;
  uStack_90 = param_4;
  puStack_80 = puVar7;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_68 = 0;
  if (param_3 != 0) {
    uVar1 = (uint)param_5;
    if (*(long *)(param_3 + 0x10) != 0) {
      uVar1 = (uint)param_5 | 2;
    }
    param_5 = (ulong)uVar1;
  }
  puStack_70 = puVar7;
  if (bVar12) {
    func_0x00010bdb2ae8(param_1,&puStack_a0);
    func_0x00010ae7cbec(param_1,puStack_80);
    param_5 = (ulong)((uint)param_5 | 1);
  }
  if (((uint)*param_1 >> 4 & 1) != 0) {
    uVar9 = 4;
    if (puStack_a0 != (ulong *)&UNK_10e52c178) {
      uVar9 = 6;
    }
    FUN_10ae7d2c4(param_1,uVar9);
  }
  if ((*(long *)(puStack_80 + 0x20) == 0) || ((puStack_80[0x14] & 1) != 0)) {
    uVar13 = 0;
LAB_10ae7ce68:
    uVar10 = *param_1;
    FUN_10ae7d524(uVar10,&UNK_10f6d22c8);
    if ((puStack_a0[3] & uVar10) != 0) {
      if ((uVar10 & 0x44) == 0) {
        uVar8 = 0;
        FUN_10ae7d5b8(0,&puStack_a0,uVar10,param_5);
        if (uVar8 != 0) {
          uVar2 = 0xbb;
          if ((param_5 & 1) != 0) {
            uVar2 = 0xb9;
          }
          uVar11 = uVar2 & uVar10 | 4;
          uVar3 = uVar11;
          if ((uVar10 & 1) != 0) {
            uVar3 = uVar2 & uVar10 | 0x24;
          }
          if (puStack_a0 != (ulong *)&UNK_10e52c178) {
            uVar3 = uVar11;
          }
          do {
            if (*param_1 != uVar10) {
              ClearExclusiveLocal();
              *(undefined8 *)(puStack_80 + 0x20) = 0;
              goto LAB_10ae7d090;
            }
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar12) {
              *param_1 = uVar3 | uVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_10ae7cff8;
        }
        uVar13 = 0x7d2;
      }
      else {
        uVar8 = 0xffffffffffffffdf;
        if ((param_5 & 1) == 0) {
          uVar8 = 0xffffffffffffffff;
        }
        if ((uVar8 & uVar10 & puStack_a0[4]) == 0) {
          uVar8 = 0xffffffffffffffbe;
          if ((param_5 & 1) != 0) {
            uVar8 = 0xffffffffffffffbc;
          }
          do {
            if (*param_1 != uVar10) goto LAB_10ae7d07c;
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar12) {
              *param_1 = uVar8 & uVar10 | 0x41;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          *(long *)((uVar10 & 0xffffffffffffff00) + 0x28) =
               *(long *)((uVar10 & 0xffffffffffffff00) + 0x28) + 0x100;
          do {
            while (uVar10 = *param_1, *param_1 != uVar10) {
              ClearExclusiveLocal();
            }
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar12) {
              *param_1 = uVar10 & 0xffffffffffffffbf | 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_10ae7cf68;
        }
        if (((uint)uVar10 >> 6 & 1) != 0) goto LAB_10ae7d090;
        uVar8 = 0xffffffffffffffbb;
        if ((param_5 & 1) != 0) {
          uVar8 = 0xffffffffffffffb9;
        }
        do {
          if (*param_1 != uVar10) goto LAB_10ae7d07c;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar12) {
            *param_1 = uVar8 & uVar10 | 0x44;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar8 = uVar10 & 0xffffffffffffff00;
        FUN_10ae7d5b8(uVar8,&puStack_a0,uVar10,param_5);
        if (uVar8 != 0) {
          uVar10 = (uVar10 & 1) << 5;
          if (puStack_a0 != (ulong *)&UNK_10e52c178) {
            uVar10 = 0;
          }
          do {
            while (*param_1 != *param_1) {
              ClearExclusiveLocal();
            }
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar12) {
              *param_1 = *param_1 & 0xbb | uVar10 | uVar8 | 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_10ae7cff8;
        }
        uVar13 = 0x801;
      }
      goto LAB_10ae7d258;
    }
    uVar8 = 0xfffffffffffffffd;
    if ((param_5 & 1) == 0) {
      uVar8 = 0xffffffffffffffff;
    }
    uVar2 = puStack_a0[1];
    uVar3 = puStack_a0[2];
    do {
      if (*param_1 != uVar10) goto LAB_10ae7d07c;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar12) {
        *param_1 = (uVar2 | uVar8 & uVar10) + uVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_10ae7cf68:
    if (((uStack_98 == 0) || (*(code **)(uStack_98 + 0x10) == (code *)0x0)) ||
       (uVar8 = uStack_98, (**(code **)(uStack_98 + 0x10))(), (uVar8 & 1) != 0)) {
      if ((*(long *)(puStack_80 + 0x20) == 0) || ((puStack_80[0x14] & 1) != 0)) {
        if (((uint)uVar10 >> 4 & 1) != 0) {
          uVar9 = 5;
          if (puStack_a0 != (ulong *)&UNK_10e52c178) {
            uVar9 = 7;
          }
          FUN_10ae7d2c4(param_1,uVar9);
        }
        if (param_3 == 0) {
          return 1;
        }
        if (uStack_98 != 0) {
          return 1;
        }
        if (*(code **)(param_3 + 0x10) == (code *)0x0) {
          return 1;
        }
        (**(code **)(param_3 + 0x10))(param_3);
        return param_3;
      }
      uVar13 = 0x81c;
      goto LAB_10ae7d258;
    }
    func_0x00010bdb2ae8(param_1,&puStack_a0);
LAB_10ae7cff8:
    func_0x00010ae7cbec(param_1,puStack_80);
    uVar13 = 0;
    param_5 = (ulong)((uint)param_5 | 1);
    goto LAB_10ae7d090;
  }
  uVar13 = 0x7b5;
LAB_10ae7d258:
  FUN_10ae87b7c(3,&UNK_10f6d2185,uVar13,&UNK_10f6d18c6);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ae7d260);
  (*pcVar5)();
LAB_10ae7d07c:
  ClearExclusiveLocal();
LAB_10ae7d090:
  if ((*(long *)(puStack_80 + 0x20) != 0) && ((puStack_80[0x14] & 1) == 0)) goto LAB_10ae7d16c;
  FUN_10ae7c604(uVar13,1);
  goto LAB_10ae7ce68;
LAB_10ae7d16c:
  uVar13 = 0x816;
  goto LAB_10ae7d258;
}



/* Entry: 10ae7d260; end: 10ae7d2c3;  */

void FUN_10ae7d260(ulong *param_1)

{
  code *pcVar1;
  
  if ((*param_1 & 9) != 0) {
    return;
  }
  FUN_10ae7d970();
  FUN_10ae87b7c(3,&UNK_10f6d2185,0x9b0,&UNK_10f6d24d2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ae7d2c4);
  (*pcVar1)();
}



/* Entry: 10ae7d2c4; end: 10ae7d4db;  */

/* WARNING: Removing unreachable block (ram,0x00010bdb2ff0) */
/* WARNING: Removing unreachable block (ram,0x00010bdb3224) */
/* WARNING: Removing unreachable block (ram,0x00010bdb3008) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2fa8) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2b4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2b58) */
/* WARNING: Removing unreachable block (ram,0x00010bdb3130) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2eb0) */
/* WARNING: Removing unreachable block (ram,0x00010bdb300c) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e0c) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e20) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e2c) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e58) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e34) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e60) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e64) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e74) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e84) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e90) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e98) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e9c) */

void FUN_10ae7d2c4(undefined8 **param_1,ulong param_2)

{
  char cVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  uint uVar17;
  undefined *puVar18;
  ulong unaff_x23;
  undefined8 **ppuVar19;
  ulong unaff_x24;
  bool bVar20;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *puVar21;
  undefined8 **ppuVar22;
  undefined8 **ppuVar23;
  undefined2 *unaff_x27;
  undefined8 **ppuVar24;
  undefined8 unaff_x28;
  undefined8 **ppuVar25;
  ulong uStack_600;
  undefined8 *puStack_5f8;
  undefined8 uStack_5f0;
  undefined2 *puStack_5e8;
  undefined8 *puStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  undefined *puStack_5c0;
  undefined8 **ppuStack_5b8;
  ulong uStack_5b0;
  undefined8 **ppuStack_5a8;
  undefined1 *puStack_5a0;
  code *pcStack_598;
  undefined *puStack_590;
  undefined8 **ppuStack_588;
  undefined *puStack_580;
  undefined2 *puStack_578;
  undefined2 uStack_570;
  undefined1 uStack_56e;
  undefined8 auStack_1b0 [40];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_1;
  FUN_10ae7d970();
  ppuVar8 = ppuVar9;
  if ((ppuVar9 == (undefined8 **)0x0) || (*(char *)(ppuVar9 + 5) == '\x01')) {
    puVar12 = auStack_1b0;
    FUN_10ae781a4(puVar12,0x28,1);
    uStack_56e = 0;
    uStack_570 = 0x4020;
    if ((int)puVar12 != 0) {
      unaff_x24 = (ulong)puVar12 & 0xffffffff;
      unaff_x25 = 2;
      unaff_x27 = &uStack_570;
      unaff_x28 = 0x3c0;
      puVar12 = auStack_1b0;
      do {
        uVar7 = (long)unaff_x27 + unaff_x25;
        unaff_x26 = puVar12 + 1;
        puStack_590 = (undefined *)*puVar12;
        unaff_x23 = 0x3c0 - unaff_x25;
        _snprintf(uVar7,unaff_x23,&UNK_10f6d25e5);
        if (((int)uVar7 < 0) || (unaff_x23 <= (uVar7 & 0xffffffff))) break;
        unaff_x25 = (ulong)(uint)((int)uVar7 + (int)unaff_x25);
        unaff_x24 = unaff_x24 - 1;
        puVar12 = unaff_x26;
      } while (unaff_x24 != 0);
    }
    puVar18 = &UNK_110c8b6c0;
    puStack_590 = (&PTR_DAT_110c8b6c8)[(param_2 & 0xffffffff) * 2];
    puStack_580 = &UNK_10f6d24d1;
    if (ppuVar9 != (undefined8 **)0x0) {
      puStack_580 = (undefined *)((long)ppuVar9 + 0x29);
    }
    puStack_578 = &uStack_570;
    ppuVar8 = (undefined8 **)0x0;
    ppuStack_588 = param_1;
    FUN_10ae87b7c(0,&UNK_10f6d2185,0x1c5,&UNK_10f6d25e9);
    if ((ppuVar9 != (undefined8 **)0x0) &&
       ((*(uint *)(&UNK_110c8b6c0 + (param_2 & 0xffffffff) * 0x10) >> 1 & 1) != 0))
    goto LAB_10ae7d404;
    if (ppuVar9 == (undefined8 **)0x0) goto LAB_10ae7d49c;
  }
  else if (((byte)(&UNK_110c8b6c0)[(param_2 & 0xffffffff) * 0x10] >> 1 & 1) != 0) {
LAB_10ae7d404:
    if ((code *)ppuVar9[3] != (code *)0x0) {
      ppuVar8 = (undefined8 **)ppuVar9[4];
      (*(code *)ppuVar9[3])();
    }
  }
  uVar17 = uRam00000001138392f8;
  param_1 = (undefined8 **)0x113839000;
  if ((uRam00000001138392f8 & 1) == 0) {
    uVar13 = uRam00000001138392f8 | 1;
    do {
      uVar5 = uRam00000001138392f8;
      if (uRam00000001138392f8 != uVar17) {
        ClearExclusiveLocal();
        break;
      }
      cVar1 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(0x1138392f8,0x10);
      if (bVar20) {
        cVar1 = ExclusiveMonitorsStatus();
        uRam00000001138392f8 = uVar13;
      }
    } while (cVar1 != '\0');
    if ((uVar5 & 1) != 0) goto LAB_10ae7d450;
  }
  else {
LAB_10ae7d450:
    ppuVar8 = (undefined8 **)0x1138392f8;
    func_0x00010bdb3254();
  }
  uVar17 = *(uint *)ppuVar9 - 1;
  puVar18 = (undefined *)(ulong)uVar17;
  *(uint *)ppuVar9 = uVar17;
  uVar13 = uRam00000001138392f8 & 2;
  do {
    uVar5 = uRam00000001138392f8;
    cVar1 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(0x1138392f8,0x10);
    if (bVar20) {
      cVar1 = ExclusiveMonitorsStatus();
      uRam00000001138392f8 = uVar13;
    }
  } while (cVar1 != '\0');
  if (7 < uVar5) {
    ppuVar8 = (undefined8 **)0x1138392f8;
    func_0x00010bdb33e0();
  }
  param_2 = 0x1138392f8;
  if (uVar17 == 0) {
    ppuVar8 = ppuVar9;
    FUN_10ae7b25c();
    param_2 = 0x1138392f8;
  }
LAB_10ae7d49c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar12 = *ppuVar8;
  if (((ulong)puVar12 & 0x15) == 1) {
    lVar14 = -0x101;
    if ((undefined8 *)0x1ff < puVar12) {
      lVar14 = -0x100;
    }
    while (*ppuVar8 == puVar12) {
      cVar1 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar20) {
        *ppuVar8 = (undefined8 *)(lVar14 + (long)puVar12);
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  }
  pcStack_598 = FUN_10ae7d4dc;
  ppuVar15 = (undefined8 **)*ppuVar8;
  uStack_5f0 = unaff_x28;
  puStack_5e8 = unaff_x27;
  puStack_5e0 = unaff_x26;
  uStack_5d8 = unaff_x25;
  uStack_5d0 = unaff_x24;
  uStack_5c8 = unaff_x23;
  puStack_5c0 = puVar18;
  ppuStack_5b8 = param_1;
  uStack_5b0 = param_2;
  ppuStack_5a8 = ppuVar9;
  puStack_5a0 = &stack0xfffffffffffffff0;
  FUN_10ae7d260();
  ppuVar9 = ppuVar15;
  FUN_10ae7d524(ppuVar15,&DAT_10f2ff744);
  if (((uint)ppuVar15 >> 4 & 1) != 0) {
    uVar11 = 8;
    if (((ulong)ppuVar15 & 8) == 0) {
      uVar11 = 9;
    }
    ppuVar9 = ppuVar8;
    FUN_10ae7d2c4(ppuVar8,uVar11);
  }
  puStack_5f8 = (undefined8 *)0x1;
  uStack_600 = 0;
  ppuVar24 = (undefined8 **)0x0;
  ppuVar19 = (undefined8 **)0x0;
  ppuVar25 = (undefined8 **)0x0;
  ppuVar23 = (undefined8 **)0x0;
  ppuVar15 = (undefined8 **)0x0;
code_r0x00010bdb2b80:
  do {
    puVar12 = *ppuVar8;
    uVar17 = (uint)puVar12;
    if (((uVar17 >> 3 & 1) == 0) || (((ulong)puVar12 & 6) == 4)) {
      if (((ulong)puVar12 & 5) == 1) {
        lVar14 = -0x101;
        if ((undefined8 *)0x1ff < puVar12) {
          lVar14 = -0x100;
        }
        while (*ppuVar8 == puVar12) {
          cVar1 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
          if (bVar20) {
            *ppuVar8 = (undefined8 *)(lVar14 + (long)puVar12);
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') {
            return;
          }
        }
        goto code_r0x00010bdb2c0c;
      }
      if ((uVar17 >> 6 & 1) != 0) goto code_r0x00010bdb2c10;
      do {
        if (*ppuVar8 != puVar12) goto code_r0x00010bdb2c0c;
        cVar1 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar20) {
          *ppuVar8 = (undefined8 *)((ulong)puVar12 | 0x40);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uVar17 >> 2 & 1) == 0) {
        uVar10 = 0x85e;
        goto code_r0x00010bdb318c;
      }
      ppuVar16 = (undefined8 **)((ulong)puVar12 & 0xffffffffffffff00);
      if ((((ulong)puVar12 & 1) != 0) && (0x100 < (long)((ulong)ppuVar16[5] & 0xffffffffffffff00)))
      {
        ppuVar16[5] = ppuVar16[5] + -0x20;
        goto code_r0x00010bdb3028;
      }
      if (ppuVar15 != (undefined8 **)0x0) {
        if ((*(byte *)((long)ppuVar16 + 0x13) & 1) == 0) {
          uVar10 = 0x896;
          goto code_r0x00010bdb318c;
        }
        if (((ulong)ppuVar15[2] & 1) == 0) {
          *(undefined1 *)(ppuVar15 + 2) = 1;
          if (ppuVar15[1] != (undefined8 *)0x0) {
            uVar10 = 0x89c;
            goto code_r0x00010bdb318c;
          }
          if (ppuVar15 != ppuVar16) {
            puVar21 = *ppuVar15;
            ppuVar9 = ppuVar15;
            FUN_10ae7cae0(ppuVar15,puVar21);
            if ((int)ppuVar9 != 0) {
              ppuVar15[1] = puVar21;
            }
          }
        }
      }
      puVar21 = (undefined8 *)(*ppuVar16)[4];
      ppuVar22 = ppuVar16;
      if (((undefined *)*puVar21 != &UNK_10e52c178) ||
         ((lVar14 = puVar21[1], lVar14 != 0 && (*(long *)(lVar14 + 0x10) != 0)))) {
        if ((ppuVar25 == (undefined8 **)0x0) ||
           ((ppuVar15 != ppuVar16 && ((undefined *)*ppuVar25[4] != &UNK_10e52c178)))) {
          if (ppuVar15 != ppuVar16) {
            if (ppuVar15 != (undefined8 **)0x0) {
              ppuVar22 = ppuVar15;
            }
            ppuVar22 = (undefined8 **)*ppuVar22;
            *(undefined1 *)(ppuVar16 + 2) = 0;
            if (ppuVar16[1] == (undefined8 *)0x0) {
              *(undefined1 *)((long)ppuVar16 + 0x13) = 1;
              *ppuVar8 = puVar12;
              do {
                *(undefined1 *)((long)ppuVar22 + 0x11) = 0;
                ppuVar9 = (undefined8 **)ppuVar22[4][1];
                if (ppuVar9 == (undefined8 **)0x0) {
code_r0x00010bdb2d30:
                  if (ppuVar25 == (undefined8 **)0x0) {
                    *(undefined1 *)((long)ppuVar22 + 0x11) = 1;
                    ppuVar23 = ppuVar15;
                    ppuVar25 = ppuVar22;
                    if ((undefined *)*ppuVar22[4] == &UNK_10e52c178) {
                      uStack_600 = 0x20;
                      ppuVar15 = ppuVar16;
                      goto code_r0x00010bdb2b80;
                    }
                  }
                  else if ((undefined *)*ppuVar22[4] == &UNK_10e52c1a0) {
                    *(undefined1 *)((long)ppuVar22 + 0x11) = 1;
                  }
                  else {
                    uStack_600 = 0x20;
                  }
                }
                else if (ppuVar9 != ppuVar24) {
                  if (((code *)ppuVar9[2] == (code *)0x0) ||
                     ((*(code *)ppuVar9[2])(), ((ulong)ppuVar9 & 1) != 0))
                  goto code_r0x00010bdb2d30;
                  ppuVar24 = (undefined8 **)ppuVar22[4][1];
                }
                if (((*(byte *)((long)ppuVar22 + 0x11) & 1) == 0) &&
                   (ppuVar15 = (undefined8 **)ppuVar22[1], ppuVar15 != (undefined8 **)0x0)) {
                  ppuVar4 = ppuVar22;
                  for (ppuVar3 = (undefined8 **)ppuVar15[1]; ppuVar2 = ppuVar15,
                      ppuVar3 != (undefined8 **)0x0; ppuVar3 = (undefined8 **)ppuVar3[1]) {
                    ppuVar4[1] = ppuVar3;
                    ppuVar15 = ppuVar3;
                    ppuVar9 = ppuVar2;
                    ppuVar4 = ppuVar2;
                  }
                  ppuVar22[1] = ppuVar2;
                  ppuVar22 = ppuVar2;
                }
                ppuVar15 = ppuVar16;
                if (ppuVar22 == ppuVar16) goto code_r0x00010bdb2b80;
                ppuVar15 = ppuVar22;
                ppuVar22 = (undefined8 **)*ppuVar22;
              } while( true );
            }
            uVar10 = 0x8dc;
            goto code_r0x00010bdb318c;
          }
          ppuVar16[5] = (undefined8 *)0x0;
          *(undefined1 *)((long)ppuVar16 + 0x13) = 0;
          puVar12 = (undefined8 *)((ulong)puVar12 & 0xffffffffffffff96);
          goto code_r0x00010bdb3028;
        }
        if (ppuVar23 != (undefined8 **)0x0) {
          ppuVar22 = ppuVar23;
        }
        if ((undefined8 **)*ppuVar22 == ppuVar25) goto code_r0x00010bdb2ef8;
        uVar10 = 0x919;
        goto code_r0x00010bdb318c;
      }
      *(undefined1 *)((long)*ppuVar16 + 0x11) = 1;
      uStack_600 = 0x20;
code_r0x00010bdb2ef8:
      bVar20 = false;
      ppuVar9 = ppuVar16;
      ppuVar15 = &puStack_5f8;
      break;
    }
    while (*ppuVar8 == puVar12) {
      cVar1 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar20) {
        *ppuVar8 = (undefined8 *)((ulong)puVar12 & 0xffffffffffffffd7);
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        return;
      }
    }
code_r0x00010bdb2c0c:
    ClearExclusiveLocal();
code_r0x00010bdb2c10:
    FUN_10ae7c604(ppuVar19,0);
    ppuVar9 = ppuVar19;
  } while( true );
  while ((ppuVar15 = ppuVar23, ppuVar22 != ppuVar9 || (!bVar20))) {
    ppuVar23 = (undefined8 **)*ppuVar22;
    if (*(char *)((long)ppuVar23 + 0x11) == '\x01') {
      if (ppuVar22[1] != (undefined8 *)0x0) {
        uVar10 = 0x41a;
        goto code_r0x00010bdb318c;
      }
      FUN_10ae7cb74();
      *ppuVar23 = *ppuVar15;
      *ppuVar15 = ppuVar23;
      if ((ppuVar9 != ppuVar16) || ((undefined *)*ppuVar23[4] == &UNK_10e52c178)) break;
    }
    else {
      ppuVar22 = (undefined8 **)ppuVar23[1];
      if (ppuVar22 == (undefined8 **)0x0) {
        bVar20 = true;
        ppuVar22 = ppuVar23;
        ppuVar23 = ppuVar15;
      }
      else {
        ppuVar25 = ppuVar23;
        for (ppuVar19 = (undefined8 **)ppuVar22[1]; ppuVar19 != (undefined8 **)0x0;
            ppuVar19 = (undefined8 **)ppuVar19[1]) {
          ppuVar25[1] = ppuVar19;
          ppuVar25 = ppuVar22;
          ppuVar22 = ppuVar19;
        }
        ppuVar23[1] = ppuVar22;
        bVar20 = true;
        ppuVar23 = ppuVar15;
      }
    }
  }
  if (puStack_5f8 != (undefined8 *)0x1) {
    if (ppuVar9 == (undefined8 **)0x0) {
      puVar12 = (undefined8 *)((ulong)puVar12 & 0x10 | 2);
    }
    else {
      ppuVar9[5] = (undefined8 *)0x0;
      *(undefined1 *)((long)ppuVar9 + 0x13) = 0;
      puVar12 = (undefined8 *)(uStack_600 | (ulong)ppuVar9 | (ulong)puVar12 & 0x10 | 6);
    }
code_r0x00010bdb3028:
    puVar21 = puStack_5f8;
    *ppuVar8 = puVar12;
    if (puStack_5f8 != (undefined8 *)0x1) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      do {
        if ((*(byte *)((long)puVar21 + 0x12) & 1) == 0) {
          lVar14 = puVar21[4];
          *(undefined8 ***)(lVar14 + 0x30) = ppuVar9;
          *(undefined1 *)(lVar14 + 0x38) = 1;
        }
        puVar12 = (undefined8 *)*puVar21;
        *puVar21 = 0;
        *(undefined4 *)((long)puVar21 + 0x1c) = 0;
        func_0x00010ae7c1b0(puVar21);
        puVar21 = puVar12;
        puStack_5f8 = puVar12;
      } while (puVar12 != (undefined8 *)0x1);
    }
    return;
  }
  uVar10 = 0x930;
code_r0x00010bdb318c:
  FUN_10ae87b7c(3,&UNK_10f6d2185,uVar10,&UNK_10f6d18c6);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10bdb3194);
  (*pcVar6)();
}



/* Entry: 10ae7d4dc; end: 10ae7d523;  */

/* WARNING: Removing unreachable block (ram,0x00010bdb2ff0) */
/* WARNING: Removing unreachable block (ram,0x00010bdb3224) */
/* WARNING: Removing unreachable block (ram,0x00010bdb3008) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2fa8) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2b4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2b58) */
/* WARNING: Removing unreachable block (ram,0x00010bdb3130) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2eb0) */
/* WARNING: Removing unreachable block (ram,0x00010bdb300c) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e0c) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e20) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e2c) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e58) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e34) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e60) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e64) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e74) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e84) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e90) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e98) */
/* WARNING: Removing unreachable block (ram,0x00010bdb2e9c) */

void FUN_10ae7d4dc(undefined8 **param_1)

{
  char cVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  code *pcVar5;
  undefined8 **ppuVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  uint uVar13;
  undefined8 **ppuVar14;
  bool bVar15;
  undefined8 *puVar16;
  undefined8 **ppuVar17;
  undefined8 **ppuVar18;
  undefined8 **ppuVar19;
  undefined8 **ppuVar20;
  ulong uStack_70;
  undefined8 *puStack_68;
  
  puVar9 = *param_1;
  if (((ulong)puVar9 & 0x15) == 1) {
    lVar10 = -0x101;
    if ((undefined8 *)0x1ff < puVar9) {
      lVar10 = -0x100;
    }
    while (*param_1 == puVar9) {
      cVar1 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar15) {
        *param_1 = (undefined8 *)(lVar10 + (long)puVar9);
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  }
  ppuVar11 = (undefined8 **)*param_1;
  FUN_10ae7d260();
  ppuVar6 = ppuVar11;
  FUN_10ae7d524(ppuVar11,&DAT_10f2ff744);
  if (((uint)ppuVar11 >> 4 & 1) != 0) {
    uVar8 = 8;
    if (((ulong)ppuVar11 & 8) == 0) {
      uVar8 = 9;
    }
    ppuVar6 = param_1;
    FUN_10ae7d2c4(param_1,uVar8);
  }
  puStack_68 = (undefined8 *)0x1;
  uStack_70 = 0;
  ppuVar19 = (undefined8 **)0x0;
  ppuVar14 = (undefined8 **)0x0;
  ppuVar20 = (undefined8 **)0x0;
  ppuVar18 = (undefined8 **)0x0;
  ppuVar11 = (undefined8 **)0x0;
code_r0x00010bdb2b80:
  do {
    puVar9 = *param_1;
    uVar13 = (uint)puVar9;
    if (((uVar13 >> 3 & 1) == 0) || (((ulong)puVar9 & 6) == 4)) {
      if (((ulong)puVar9 & 5) == 1) {
        lVar10 = -0x101;
        if ((undefined8 *)0x1ff < puVar9) {
          lVar10 = -0x100;
        }
        while (*param_1 == puVar9) {
          cVar1 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar15) {
            *param_1 = (undefined8 *)(lVar10 + (long)puVar9);
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') {
            return;
          }
        }
        goto code_r0x00010bdb2c0c;
      }
      if ((uVar13 >> 6 & 1) != 0) goto code_r0x00010bdb2c10;
      do {
        if (*param_1 != puVar9) goto code_r0x00010bdb2c0c;
        cVar1 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar15) {
          *param_1 = (undefined8 *)((ulong)puVar9 | 0x40);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uVar13 >> 2 & 1) == 0) {
        uVar7 = 0x85e;
        goto code_r0x00010bdb318c;
      }
      ppuVar12 = (undefined8 **)((ulong)puVar9 & 0xffffffffffffff00);
      if ((((ulong)puVar9 & 1) != 0) && (0x100 < (long)((ulong)ppuVar12[5] & 0xffffffffffffff00))) {
        ppuVar12[5] = ppuVar12[5] + -0x20;
        goto code_r0x00010bdb3028;
      }
      if (ppuVar11 != (undefined8 **)0x0) {
        if ((*(byte *)((long)ppuVar12 + 0x13) & 1) == 0) {
          uVar7 = 0x896;
          goto code_r0x00010bdb318c;
        }
        if (((ulong)ppuVar11[2] & 1) == 0) {
          *(undefined1 *)(ppuVar11 + 2) = 1;
          if (ppuVar11[1] != (undefined8 *)0x0) {
            uVar7 = 0x89c;
            goto code_r0x00010bdb318c;
          }
          if (ppuVar11 != ppuVar12) {
            puVar16 = *ppuVar11;
            ppuVar6 = ppuVar11;
            FUN_10ae7cae0(ppuVar11,puVar16);
            if ((int)ppuVar6 != 0) {
              ppuVar11[1] = puVar16;
            }
          }
        }
      }
      puVar16 = (undefined8 *)(*ppuVar12)[4];
      ppuVar17 = ppuVar12;
      if (((undefined *)*puVar16 != &UNK_10e52c178) ||
         ((lVar10 = puVar16[1], lVar10 != 0 && (*(long *)(lVar10 + 0x10) != 0)))) {
        if ((ppuVar20 == (undefined8 **)0x0) ||
           ((ppuVar11 != ppuVar12 && ((undefined *)*ppuVar20[4] != &UNK_10e52c178)))) {
          if (ppuVar11 != ppuVar12) {
            if (ppuVar11 != (undefined8 **)0x0) {
              ppuVar17 = ppuVar11;
            }
            ppuVar17 = (undefined8 **)*ppuVar17;
            *(undefined1 *)(ppuVar12 + 2) = 0;
            if (ppuVar12[1] == (undefined8 *)0x0) {
              *(undefined1 *)((long)ppuVar12 + 0x13) = 1;
              *param_1 = puVar9;
              do {
                *(undefined1 *)((long)ppuVar17 + 0x11) = 0;
                ppuVar6 = (undefined8 **)ppuVar17[4][1];
                if (ppuVar6 == (undefined8 **)0x0) {
code_r0x00010bdb2d30:
                  if (ppuVar20 == (undefined8 **)0x0) {
                    *(undefined1 *)((long)ppuVar17 + 0x11) = 1;
                    ppuVar18 = ppuVar11;
                    ppuVar20 = ppuVar17;
                    if ((undefined *)*ppuVar17[4] == &UNK_10e52c178) {
                      uStack_70 = 0x20;
                      ppuVar11 = ppuVar12;
                      goto code_r0x00010bdb2b80;
                    }
                  }
                  else if ((undefined *)*ppuVar17[4] == &UNK_10e52c1a0) {
                    *(undefined1 *)((long)ppuVar17 + 0x11) = 1;
                  }
                  else {
                    uStack_70 = 0x20;
                  }
                }
                else if (ppuVar6 != ppuVar19) {
                  if (((code *)ppuVar6[2] == (code *)0x0) ||
                     ((*(code *)ppuVar6[2])(), ((ulong)ppuVar6 & 1) != 0))
                  goto code_r0x00010bdb2d30;
                  ppuVar19 = (undefined8 **)ppuVar17[4][1];
                }
                if (((*(byte *)((long)ppuVar17 + 0x11) & 1) == 0) &&
                   (ppuVar11 = (undefined8 **)ppuVar17[1], ppuVar11 != (undefined8 **)0x0)) {
                  ppuVar4 = ppuVar17;
                  for (ppuVar3 = (undefined8 **)ppuVar11[1]; ppuVar2 = ppuVar11,
                      ppuVar3 != (undefined8 **)0x0; ppuVar3 = (undefined8 **)ppuVar3[1]) {
                    ppuVar4[1] = ppuVar3;
                    ppuVar11 = ppuVar3;
                    ppuVar6 = ppuVar2;
                    ppuVar4 = ppuVar2;
                  }
                  ppuVar17[1] = ppuVar2;
                  ppuVar17 = ppuVar2;
                }
                ppuVar11 = ppuVar12;
                if (ppuVar17 == ppuVar12) goto code_r0x00010bdb2b80;
                ppuVar11 = ppuVar17;
                ppuVar17 = (undefined8 **)*ppuVar17;
              } while( true );
            }
            uVar7 = 0x8dc;
            goto code_r0x00010bdb318c;
          }
          ppuVar12[5] = (undefined8 *)0x0;
          *(undefined1 *)((long)ppuVar12 + 0x13) = 0;
          puVar9 = (undefined8 *)((ulong)puVar9 & 0xffffffffffffff96);
          goto code_r0x00010bdb3028;
        }
        if (ppuVar18 != (undefined8 **)0x0) {
          ppuVar17 = ppuVar18;
        }
        if ((undefined8 **)*ppuVar17 == ppuVar20) goto code_r0x00010bdb2ef8;
        uVar7 = 0x919;
        goto code_r0x00010bdb318c;
      }
      *(undefined1 *)((long)*ppuVar12 + 0x11) = 1;
      uStack_70 = 0x20;
code_r0x00010bdb2ef8:
      bVar15 = false;
      ppuVar6 = ppuVar12;
      ppuVar11 = &puStack_68;
      break;
    }
    while (*param_1 == puVar9) {
      cVar1 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar15) {
        *param_1 = (undefined8 *)((ulong)puVar9 & 0xffffffffffffffd7);
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        return;
      }
    }
code_r0x00010bdb2c0c:
    ClearExclusiveLocal();
code_r0x00010bdb2c10:
    FUN_10ae7c604(ppuVar14,0);
    ppuVar6 = ppuVar14;
  } while( true );
  do {
    ppuVar18 = (undefined8 **)*ppuVar17;
    if (*(char *)((long)ppuVar18 + 0x11) == '\x01') {
      if (ppuVar17[1] != (undefined8 *)0x0) {
        uVar7 = 0x41a;
        goto code_r0x00010bdb318c;
      }
      FUN_10ae7cb74();
      *ppuVar18 = *ppuVar11;
      *ppuVar11 = ppuVar18;
      if ((ppuVar6 != ppuVar12) || ((undefined *)*ppuVar18[4] == &UNK_10e52c178)) break;
    }
    else {
      ppuVar17 = (undefined8 **)ppuVar18[1];
      if (ppuVar17 == (undefined8 **)0x0) {
        bVar15 = true;
        ppuVar17 = ppuVar18;
        ppuVar18 = ppuVar11;
      }
      else {
        ppuVar20 = ppuVar18;
        for (ppuVar14 = (undefined8 **)ppuVar17[1]; ppuVar14 != (undefined8 **)0x0;
            ppuVar14 = (undefined8 **)ppuVar14[1]) {
          ppuVar20[1] = ppuVar14;
          ppuVar20 = ppuVar17;
          ppuVar17 = ppuVar14;
        }
        ppuVar18[1] = ppuVar17;
        bVar15 = true;
        ppuVar18 = ppuVar11;
      }
    }
    ppuVar11 = ppuVar18;
  } while ((ppuVar17 != ppuVar6) || (!bVar15));
  if (puStack_68 != (undefined8 *)0x1) {
    if (ppuVar6 == (undefined8 **)0x0) {
      puVar9 = (undefined8 *)((ulong)puVar9 & 0x10 | 2);
    }
    else {
      ppuVar6[5] = (undefined8 *)0x0;
      *(undefined1 *)((long)ppuVar6 + 0x13) = 0;
      puVar9 = (undefined8 *)(uStack_70 | (ulong)ppuVar6 | (ulong)puVar9 & 0x10 | 6);
    }
code_r0x00010bdb3028:
    puVar16 = puStack_68;
    *param_1 = puVar9;
    if (puStack_68 != (undefined8 *)0x1) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      do {
        if ((*(byte *)((long)puVar16 + 0x12) & 1) == 0) {
          lVar10 = puVar16[4];
          *(undefined8 ***)(lVar10 + 0x30) = ppuVar6;
          *(undefined1 *)(lVar10 + 0x38) = 1;
        }
        puVar9 = (undefined8 *)*puVar16;
        *puVar16 = 0;
        *(undefined4 *)((long)puVar16 + 0x1c) = 0;
        func_0x00010ae7c1b0(puVar16);
        puVar16 = puVar9;
        puStack_68 = puVar9;
      } while (puVar9 != (undefined8 *)0x1);
    }
    return;
  }
  uVar7 = 0x930;
code_r0x00010bdb318c:
  FUN_10ae87b7c(3,&UNK_10f6d2185,uVar7,&UNK_10f6d18c6);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10bdb3194);
  (*pcVar5)();
}



/* Entry: 10ae7d524; end: 10ae7d5b7;  */

void FUN_10ae7d524(uint param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if ((param_1 & (param_1 << 3 ^ 0x20) & 0x28) == 0) {
    return;
  }
  if ((~param_1 & 9) == 0) {
    puVar3 = &UNK_10f6d26d8;
    uVar2 = 0x7a4;
  }
  else {
    if ((param_1 & 0x24) != 0x20) {
      return;
    }
    puVar3 = &UNK_10f6d2757;
    uVar2 = 0x7a7;
  }
  FUN_10ae87b7c(3,&UNK_10f6d2185,uVar2,puVar3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ae7d5b8);
  (*pcVar1)();
}



/* Entry: 10ae7d5b8; end: 10ae7d913;  */

undefined8 * FUN_10ae7d5b8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  ulong *puVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 uStack_4c;
  undefined8 *puVar9;
  
  puVar16 = (ulong *)param_2[5];
  if (puVar16 != (ulong *)0x0) {
    param_2[5] = 0;
    do {
      uVar11 = *puVar16;
      if ((uVar11 & 1) == 0) {
        if (*puVar16 == uVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar16,0x10);
          if (bVar5) {
            *puVar16 = uVar11 | 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_10ae7d61c;
        }
        else {
          ClearExclusiveLocal();
        }
      }
      FUN_10ae7c604();
    } while( true );
  }
  puVar17 = (undefined8 *)param_2[4];
  if (((undefined8 *)puVar17[4] != (undefined8 *)0x0 && (undefined8 *)puVar17[4] != param_2) &&
     ((*(byte *)((long)puVar17 + 0x14) & 1) == 0)) {
    uVar10 = 0x394;
    goto LAB_10ae7d8dc;
  }
  puVar17[4] = param_2;
  puVar17[1] = 0;
  *(undefined2 *)(puVar17 + 2) = 1;
  *(byte *)((long)puVar17 + 0x12) = (byte)(param_4 >> 1) & 1;
  puVar13 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  if ((long)puVar17[6] < (long)puVar13) {
    puVar9 = puVar13;
    _pthread_self();
    iVar8 = (int)puVar9;
    _pthread_getschedparam();
    if (iVar8 == 0) {
      *(undefined4 *)(puVar17 + 3) = uStack_4c;
      puVar17[6] = puVar13 + 125000000;
    }
    else {
      FUN_10ae87b7c(2,&UNK_10f6d2185,0x3a4,&UNK_10f6d2809);
    }
  }
  puVar13 = puVar17;
  if (param_1 == (undefined8 *)0x0) {
    *puVar17 = puVar17;
    puVar17[5] = param_3;
    *(undefined1 *)((long)puVar17 + 0x13) = 0;
    goto LAB_10ae7d83c;
  }
  iVar8 = *(int *)(puVar17 + 3);
  bVar3 = *(byte *)((long)param_1 + 0x13);
  if (*(int *)(param_1 + 3) < iVar8) {
    puVar9 = param_1;
    if ((bVar3 & 1) == 0) {
      do {
        puVar18 = puVar9;
        puVar13 = (undefined8 *)*puVar18;
        puVar14 = (undefined8 *)puVar13[1];
        puVar9 = puVar13;
        if (puVar14 != (undefined8 *)0x0) {
          puVar6 = puVar13;
          puVar9 = puVar14;
          for (puVar14 = (undefined8 *)puVar14[1]; puVar14 != (undefined8 *)0x0;
              puVar14 = (undefined8 *)puVar14[1]) {
            puVar6[1] = puVar14;
            puVar6 = puVar9;
            puVar9 = puVar14;
          }
          puVar13[1] = puVar9;
        }
      } while (iVar8 <= *(int *)(puVar9 + 3));
    }
    else if (((undefined *)*param_2 != &UNK_10e52c178) ||
            ((puVar18 = param_1, param_2[1] != 0 && (*(long *)(param_2[1] + 0x10) != 0))))
    goto LAB_10ae7d714;
    lVar2 = puVar18[1];
    *puVar17 = *puVar18;
    *puVar18 = puVar17;
    if ((lVar2 != 0) &&
       (puVar13 = puVar18, FUN_10ae7cae0(puVar18,puVar17), ((ulong)puVar13 & 1) == 0)) {
      uVar10 = 0x3db;
LAB_10ae7d8dc:
      FUN_10ae87b7c(3,&UNK_10f6d2185,uVar10,&UNK_10f6d18c6);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10ae7d8e4);
      (*pcVar7)();
    }
    if (((puVar18 != param_1) && (*(char *)(puVar18 + 2) == '\x01')) &&
       (puVar13 = puVar18, FUN_10ae7cae0(puVar18,puVar17), (int)puVar13 != 0)) {
      puVar18[1] = puVar17;
    }
    uVar10 = *puVar17;
    puVar9 = puVar17;
    FUN_10ae7cae0(puVar17,uVar10);
    puVar13 = param_1;
    if ((int)puVar9 != 0) {
      puVar17[1] = uVar10;
    }
  }
  else {
LAB_10ae7d714:
    *puVar17 = *param_1;
    *param_1 = puVar17;
    puVar17[5] = param_1[5];
    *(byte *)((long)puVar17 + 0x13) = bVar3;
    if ((*(char *)(param_1 + 2) == '\x01') &&
       (puVar9 = param_1, FUN_10ae7cae0(param_1,puVar17), (int)puVar9 != 0)) {
      param_1[1] = puVar17;
    }
  }
LAB_10ae7d83c:
  *(undefined4 *)((long)puVar17 + 0x1c) = 1;
  return puVar13;
LAB_10ae7d61c:
  puVar12 = (ulong *)param_2[4];
  if (puVar12[4] == 0) {
    puVar12[4] = (ulong)param_2;
    puVar1 = (ulong *)(uVar11 & 0xfffffffffffffffc);
    puVar15 = puVar12;
    if (puVar1 != (ulong *)0x0) {
      *puVar12 = *puVar1;
      puVar15 = puVar1;
    }
    *puVar15 = (ulong)puVar12;
    *(undefined4 *)((long)puVar12 + 0x1c) = 1;
    *puVar16 = uVar11 & 2 | param_2[4];
    return param_1;
  }
  uVar10 = 0xa13;
  goto LAB_10ae7d8dc;
}



/* Entry: 10ae7d914; end: 10ae7d96f;  */

void FUN_10ae7d914(undefined8 *param_1)

{
  code *pcVar1;
  
  if (((uint)*param_1 >> 3 & 1) != 0) {
    return;
  }
  FUN_10ae7d970();
  FUN_10ae87b7c(3,&UNK_10f6d2185,0x9a7,&UNK_10f6d24a4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ae7d970);
  (*pcVar1)();
}



/* Entry: 10ae7d970; end: 10ae7da6f;  */

int * FUN_10ae7d970(ulong param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  uVar4 = uRam00000001138392f8;
  if ((uRam00000001138392f8 & 1) == 0) {
    uVar5 = uRam00000001138392f8 | 1;
    do {
      uVar3 = uRam00000001138392f8;
      if (uRam00000001138392f8 != uVar4) {
        ClearExclusiveLocal();
        if ((uRam00000001138392f8 & 1) != 0) goto LAB_10ae7da14;
        goto LAB_10ae7d9d4;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1138392f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        uRam00000001138392f8 = uVar5;
      }
    } while (cVar1 != '\0');
    if ((uVar3 & 1) == 0) goto LAB_10ae7d9d4;
  }
LAB_10ae7da14:
  func_0x00010bdb3254(0x1138392f8);
LAB_10ae7d9d4:
  piVar6 = *(int **)((param_1 % 0x407) * 8 + 0x1138372c0);
  do {
    if (piVar6 == (int *)0x0) {
LAB_10ae7da30:
      uVar4 = uRam00000001138392f8 & 2;
      do {
        uVar5 = uRam00000001138392f8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x1138392f8,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          uRam00000001138392f8 = uVar4;
        }
      } while (cVar1 != '\0');
      if (7 < uVar5) {
        func_0x00010bdb33e0(0x1138392f8);
      }
      return piVar6;
    }
    if ((*(ulong *)(piVar6 + 4) ^ param_1) == 0xf03a5f7bf03a5f7b) {
      *piVar6 = *piVar6 + 1;
      goto LAB_10ae7da30;
    }
    piVar6 = *(int **)(piVar6 + 2);
  } while( true );
}



/* Entry: 10ae7da70; end: 10ae7dc57;  */

void FUN_10ae7da70(int *param_1,ulong param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int **ppiVar6;
  undefined4 uVar7;
  int *piStack_40;
  undefined4 uStack_38;
  
  ppiVar6 = &piStack_40;
  do {
    piVar4 = param_1;
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      param_2 = 3;
      FUN_10ae87864(param_1,3,&UNK_10e52c1c8,0);
      if ((int)piVar4 != 0) {
        return;
      }
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0x65c2937b;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iRam000000011383931c != 0xdd) {
    piVar4 = (int *)0x11383931c;
    func_0x00010ae87a44();
  }
  if (iRam0000000113839318 < 2) {
    uRam0000000113837284 = 0;
    uRam000000011383728c = 0;
    FUN_10ae866ac();
    uVar7 = (undefined4)param_2;
    piVar5 = piVar4;
    _sched_yield();
    FUN_10ae866ac();
    piStack_40 = piVar5;
    uStack_38 = uVar7;
    func_0x00010ae86c8c(&piStack_40,piVar4,param_2 & 0xffffffff);
    FUN_10ae86d0c(&piStack_40,5);
    piStack_40 = (int *)0x0;
    uStack_38 = 4000000;
    bVar3 = 4000000 < *(uint *)(ppiVar6 + 1);
    if (*ppiVar6 != (int *)0x0) {
      bVar3 = 0 < (long)*ppiVar6;
    }
    ppiVar6 = &piStack_40;
    if (!bVar3) {
      ppiVar6 = (int **)(long *)0x113837290;
    }
    piStack_40 = (int *)0x0;
    uStack_38 = 40000;
    bVar3 = *(uint *)(ppiVar6 + 1) >> 6 < 0x271;
    if (*ppiVar6 != (int *)0x0) {
      bVar3 = (long)*ppiVar6 < 0;
    }
    ppiVar6 = &piStack_40;
    if (!bVar3) {
      ppiVar6 = (int **)(long *)0x113837290;
    }
    uRam0000000113837298 = SUB84(ppiVar6[1],0);
    lRam0000000113837290 = (long)*ppiVar6;
  }
  else {
    uRam0000000113837284 = 0x1388000005dc;
    uRam000000011383728c = 0xfa;
    lRam0000000113837290 = 0;
    uRam0000000113837298 = 40000;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0xdd;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 0x5a308d2) {
    FUN_10ae87860(param_1,1);
  }
  return;
}



/* Entry: 10ae7dc58; end: 10ae7dc8f;  */

void FUN_10ae7dc58(long param_1)

{
  func_0x000107c2b9f0();
  *(undefined1 *)(param_1 + 8) = 1;
  func_0x000107c2b9fc(param_1);
  return;
}



/* Entry: 10ae7dc90; end: 10ae7dcc3;  */

undefined8 * FUN_10ae7dc90(undefined8 *param_1)

{
  func_0x000107c2b9f0();
  func_0x000107c2b9fc(param_1);
  if (((uint)*param_1 >> 4 & 1) != 0) {
    FUN_10ae7c75c(param_1,0x10,0x40);
  }
  return param_1;
}



/* Entry: 10ae7dcc4; end: 10ae7dd57;  */

byte * FUN_10ae7dcc4(byte *param_1)

{
  code *pcStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  byte *pbStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1[8] & 1) == 0) {
    pcStack_38 = FUN_10ae7de18;
    pcStack_48 = FUN_10ae7dd58;
    uStack_40 = 0;
    pbStack_30 = param_1 + 8;
    func_0x00010bdb2a8c(param_1,&UNK_10e52c178,&pcStack_48,0);
    func_0x000107c2b9fc();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  return (byte *)(ulong)(*param_1 & 1);
}



/* Entry: 10ae7dd58; end: 10ae7dd63;  */

byte FUN_10ae7dd58(byte *param_1)

{
  return *param_1 & 1;
}



/* Entry: 10ae7dd64; end: 10ae7de17;  */

undefined8 * FUN_10ae7dd64(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  byte *pbStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    pcStack_38 = FUN_10ae7de18;
    pcStack_48 = FUN_10ae7dd58;
    uStack_40 = 0;
    pbStack_30 = (byte *)(param_1 + 1);
    FUN_10ae77fa4(&uStack_50,param_2,param_3);
    puVar1 = param_1;
    FUN_10ae7cd20(param_1,&UNK_10e52c178,&pcStack_48,uStack_50,0);
    func_0x000107c2b9fc();
  }
  else {
    puVar1 = (undefined8 *)0x1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)param_1[3];
                    /* WARNING: Could not recover jumptable at 0x00010ae7de20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(puVar1);
  return puVar1;
}



/* Entry: 10ae7de18; end: 10ae7de23;  */

void FUN_10ae7de18(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ae7de20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_1[3]);
  return;
}



/* Entry: 10ae7de24; end: 10ae7dfcf;  */

undefined8 FUN_10ae7de24(long *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  cVar1 = *(char *)((long)param_1 + 0x17);
  if (cVar1 < '\0') {
    lVar5 = param_1[1];
    if (lVar5 == 3) {
      if (*(short *)*param_1 != 0x5455 || (char)((short *)*param_1)[1] != 'C') {
        return 0;
      }
    }
    else {
      if (lVar5 != 4) {
        if (lVar5 != 0x12) {
          return 0;
        }
        param_1 = (long *)*param_1;
        goto LAB_10ae7deb8;
      }
      if (*(int *)*param_1 != 0x30435455) {
        return 0;
      }
    }
  }
  else if (cVar1 == '\x03') {
    if ((short)*param_1 != 0x5455 || *(char *)((long)param_1 + 2) != 'C') {
      return 0;
    }
  }
  else if (cVar1 != '\x04' || (int)*param_1 != 0x30435455) {
    if (cVar1 != '\x12') {
      return 0;
    }
LAB_10ae7deb8:
    if (((*param_1 != 0x54552f6465786946 || (char)param_1[1] != 'C') ||
        (((cVar1 = *(char *)((long)param_1 + 9), cVar1 != '-' && (cVar1 != '+')) ||
         (*(char *)((long)param_1 + 0xc) != ':')))) || (*(char *)((long)param_1 + 0xf) != ':')) {
      return 0;
    }
    iVar4 = (int)param_1;
    iVar2 = iVar4 + 10;
    FUN_10ae7dfd0();
    if (iVar2 == -1) {
      return 0;
    }
    iVar3 = iVar4 + 0xd;
    FUN_10ae7dfd0();
    if (iVar3 == -1) {
      return 0;
    }
    iVar4 = iVar4 + 0x10;
    FUN_10ae7dfd0();
    if (iVar4 == -1) {
      return 0;
    }
    iVar4 = iVar4 + (iVar3 + iVar2 * 0x3c) * 0x3c;
    if (0x15180 < iVar4) {
      return 0;
    }
    iVar2 = -iVar4;
    if (cVar1 != '-') {
      iVar2 = iVar4;
    }
    lVar5 = (long)iVar2;
    goto LAB_10ae7dfb4;
  }
  lVar5 = 0;
LAB_10ae7dfb4:
  *param_2 = lVar5;
  return 1;
}



/* Entry: 10ae7dfd0; end: 10ae7e03f;  */

int FUN_10ae7dfd0(char *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_10e52c1f6;
  _memchr(&UNK_10e52c1f6,(long)*param_1,0xb);
  if (puVar1 != (undefined *)0x0) {
    puVar2 = &UNK_10e52c1f6;
    _memchr(&UNK_10e52c1f6,(long)param_1[1],0xb);
    if (puVar2 != (undefined *)0x0) {
      return (int)puVar1 * 10 + 0x6271aa6e + (int)puVar2;
    }
  }
  return -1;
}



/* Entry: 10ae7e040; end: 10ae7e227;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae7e1f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */
/* WARNING: Removing unreachable block (ram,0x00010ae7e1fc) */
/* WARNING: Removing unreachable block (ram,0x00010ae7e214) */

ulong * FUN_10ae7e040(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *extraout_x8;
  ulong *puVar12;
  ulong uVar13;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar14;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  ulong uStack_30;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  long lStack_18;
  
  puVar12 = &uStack_30;
  puVar14 = &stack0xfffffffffffffff0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = *param_2;
  if ((uVar13 == 0) || (uVar13 - 0x15181 < 0xfffffffffffd5cff)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
      ___stack_chk_fail();
      __Unwind_Resume();
      FUN_10ae7e040();
      uVar13 = extraout_x8[1];
      if (-1 < (char)*(byte *)((long)extraout_x8 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)extraout_x8 + 0x17);
      }
      if (uVar13 == 0x12) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm(extraout_x8,0,9);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm(extraout_x8,6,1);
        param_2 = extraout_x8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm(extraout_x8,3,1);
        if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
          puVar12 = (ulong *)*extraout_x8;
          cVar4 = *(char *)((long)puVar12 + 5);
        }
        else {
          cVar4 = *(char *)((long)extraout_x8 + 5);
          puVar12 = extraout_x8;
        }
        if ((cVar4 == '0') && (*(char *)((long)puVar12 + 6) == '0')) {
          param_2 = extraout_x8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm(extraout_x8,5,2)
          ;
          if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
            puVar12 = (ulong *)*extraout_x8;
            cVar4 = *(char *)((long)puVar12 + 3);
          }
          else {
            cVar4 = *(char *)((long)extraout_x8 + 3);
            puVar12 = extraout_x8;
          }
          if ((cVar4 == '0') && (*(char *)((long)puVar12 + 4) == '0')) {
            param_2 = extraout_x8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
                      (extraout_x8,3,2);
          }
        }
      }
      return param_2;
    }
    puVar12 = (ulong *)register0x00000008;
    puVar9 = (ulong *)&UNK_10f6d28f4;
    puVar14 = unaff_x29;
  }
  else {
    uStack_27 = 0x2d;
    if (-1 < (long)uVar13) {
      uStack_27 = 0x2b;
    }
    iVar7 = (int)uVar13 / 0x3c;
    iVar5 = (int)uVar13 % 0x3c;
    bVar1 = 0 < iVar5;
    iVar3 = iVar5 + -0x3c;
    if (iVar5 < 1) {
      iVar3 = iVar5;
    }
    if ((uVar13 & 0x8000000000000000) != 0) {
      iVar5 = -iVar3;
      iVar7 = -iVar7 - (uint)bVar1;
    }
    uVar2 = iVar7 + ((uint)((short)iVar7 * -0x7777) >> 0x10);
    iVar3 = ((int)(uVar2 * 0x10000) >> 0x15) + ((uVar2 & 0x8000) >> 0xf);
    iVar6 = iVar7 + iVar3 * -0x3c;
    uStack_28 = 0x43;
    uStack_30 = 0x54552f6465786946;
    uVar2 = iVar7 + ((uint)(iVar7 * -0x258b) >> 0x10);
    uStack_26 = (&UNK_10e52c1f6)
                [(int)(((int)(uVar2 * 0x10000) >> 0x19) + ((uVar2 & 0x8000) >> 0xf))];
    uStack_25 = (&UNK_10e52c1f6)
                [(char)((char)iVar3 +
                       (((byte)((uint)(iVar3 * 0x67) >> 0xf) & 1) +
                       (char)((uint)(iVar3 * 0x670000 >> 0x18) >> 2)) * -10)];
    uStack_24 = 0x3a;
    iVar3 = (int)(short)iVar6;
    iVar3 = ((uint)(iVar3 * 0x67) >> 0xf & 1) + (iVar3 * 0x670000 >> 0x1a);
    uStack_23 = (&UNK_10e52c1f6)[iVar3];
    uStack_22 = (&UNK_10e52c1f6)[(char)((char)iVar6 + (char)iVar3 * -10)];
    uStack_21 = 0x3a;
    iVar3 = (int)(char)iVar5 / 10;
    uStack_20 = (&UNK_10e52c1f6)[iVar3];
    uStack_1f = (&UNK_10e52c1f6)[(char)((char)iVar5 + (char)iVar3 * -10)];
    uStack_1e = 0;
    unaff_x30 = (undefined *)0x10ae7e1fc;
    puVar9 = &uStack_30;
  }
  while( true ) {
    puVar11 = puVar9;
    puVar8 = param_1;
    *(undefined8 *)((long)puVar12 + -0x40) = unaff_x24;
    *(undefined8 *)((long)puVar12 + -0x38) = unaff_x23;
    *(undefined8 *)((long)puVar12 + -0x30) = unaff_x22;
    *(ulong **)((long)puVar12 + -0x28) = unaff_x21;
    *(undefined8 *)((long)puVar12 + -0x20) = unaff_x20;
    *(ulong **)((long)puVar12 + -0x18) = unaff_x19;
    *(undefined1 **)((long)puVar12 + -0x10) = puVar14;
    *(undefined **)((long)puVar12 + -8) = unaff_x30;
    puVar9 = puVar11;
    func_0x000107c613d0();
    if (puVar9 < (ulong *)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(undefined8 *)((long)puVar12 + -0x60) = unaff_x20;
    *(ulong **)((long)puVar12 + -0x58) = puVar8;
    *(undefined1 **)((long)puVar12 + -0x50) = (undefined1 *)((long)puVar12 + -0x10);
    *(undefined **)((long)puVar12 + -0x48) = &UNK_10002d57c;
    puVar14 = (undefined1 *)((long)puVar12 + -0x50);
    if ((bRam00000001132dfb00 & 1) != 0) {
      return puVar9;
    }
    puVar9 = (ulong *)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)puVar9 == 0) {
      return puVar9;
    }
    unaff_x30 = &UNK_10002d5bc;
    puVar12 = (ulong *)((long)puVar12 + -0x60);
    param_1 = (ulong *)0x1132dfae8;
    puVar9 = (ulong *)&UNK_10f5738ce;
    unaff_x19 = puVar8;
    unaff_x21 = puVar11;
  }
  if (puVar9 < (ulong *)0x17) {
    *(char *)((long)puVar8 + 0x17) = (char)puVar9;
    puVar10 = puVar8;
    if (puVar9 == (ulong *)0x0) goto code_r0x00010002d55c;
  }
  else {
    puVar12 = (ulong *)0x19;
    if (((ulong)puVar9 | 7) != 0x17) {
      puVar12 = (ulong *)(((ulong)puVar9 | 7) + 1);
    }
    puVar10 = puVar12;
    func_0x000107c60e20();
    puVar8[1] = (ulong)puVar9;
    puVar8[2] = (ulong)puVar12 | 0x8000000000000000;
    *puVar8 = (ulong)puVar10;
  }
  func_0x000107c610b8(puVar10,puVar11,puVar9);
code_r0x00010002d55c:
  *(undefined1 *)((long)puVar10 + (long)puVar9) = 0;
  return puVar8;
}



/* Entry: 10ae7e228; end: 10ae7e32f;  */

void FUN_10ae7e228(long *param_1)

{
  ulong uVar1;
  char cVar2;
  long *plVar3;
  
  FUN_10ae7e040();
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0x12) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm(param_1,0,9);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm(param_1,6,1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm(param_1,3,1);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      plVar3 = (long *)*param_1;
      cVar2 = *(char *)((long)plVar3 + 5);
    }
    else {
      cVar2 = *(char *)((long)param_1 + 5);
      plVar3 = param_1;
    }
    if ((cVar2 == '0') && (*(char *)((long)plVar3 + 6) == '0')) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm(param_1,5,2);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        plVar3 = (long *)*param_1;
        cVar2 = *(char *)((long)plVar3 + 3);
      }
      else {
        cVar2 = *(char *)((long)param_1 + 3);
        plVar3 = param_1;
      }
      if ((cVar2 == '0') && (*(char *)((long)plVar3 + 4) == '0')) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm(param_1,3,2);
      }
    }
  }
  return;
}



/* Entry: 10ae7e330; end: 10ae7f0d3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10ae7e330(byte *******param_1,byte *******param_2,byte *******param_3,byte *******param_4,
                  byte *******param_5)

{
  byte *pbVar1;
  byte *******pppppppbVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  byte ******ppppppbVar8;
  byte *******pppppppbVar9;
  byte *******pppppppbVar10;
  long lVar11;
  byte *******pppppppbVar12;
  undefined8 uVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  char cVar16;
  ulong uVar17;
  int iVar18;
  byte *******pppppppbVar19;
  byte *******pppppppbVar20;
  long lVar21;
  byte *******unaff_x24;
  byte *******pppppppbVar22;
  uint uVar23;
  byte *******pppppppbVar24;
  undefined1 auVar25 [16];
  long lStack_178;
  long lStack_170;
  byte *******pppppppbStack_160;
  byte *******pppppppbStack_158;
  byte *******pppppppbStack_150;
  byte *******pppppppbStack_148;
  byte *******pppppppbStack_140;
  byte *******pppppppbStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_118;
  byte *******pppppppbStack_110;
  byte *******pppppppbStack_108;
  uint uStack_fc;
  byte *******pppppppbStack_f8;
  uint uStack_f0;
  undefined1 uStack_ec;
  char cStack_e1;
  byte ******ppppppbStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte *******pppppppbStack_a8;
  char cStack_a0;
  char cStack_9f;
  char cStack_9e;
  char cStack_9d;
  char cStack_9c;
  undefined4 uStack_98;
  byte bStack_94;
  byte *******pppppppbStack_90;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 auStack_70 [16];
  
  auStack_70._0_8_ = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (byte ******)0x0;
  param_1[1] = (byte ******)0x0;
  param_1[2] = (byte ******)0x0;
  ppppppbVar8 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    ppppppbVar8 = (byte ******)(ulong)*(byte *)((long)param_2 + 0x17);
  }
  pppppppbVar14 = param_4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1,ppppppbVar8);
  ppppppbVar8 = *param_5;
  if (ppppppbVar8 == (byte ******)0x0) {
    FUN_10ae81440();
  }
  pppppppbVar9 = (byte *******)ppppppbVar8[3];
  pppppppbVar12 = param_3;
  (*(code *)(*pppppppbVar9)[2])(&pppppppbStack_a8);
  uStack_b8 = 0;
  uStack_b0 = 0;
  auVar25._0_4_ = (int)(short)cStack_9f;
  auVar25._4_4_ = (int)(short)cStack_9e;
  auVar25._8_4_ = (int)(short)cStack_9d;
  auVar25._12_4_ = (int)(short)cStack_9c;
  auVar25 = NEON_rev64(auVar25,4);
  auVar25 = NEON_ext(auVar25,auVar25,8,1);
  uStack_d8 = auVar25._8_8_;
  ppppppbStack_e0 = auVar25._0_8_;
  iVar18 = (int)cStack_a0;
  iStack_d0 = iVar18 + -1;
  if ((long)pppppppbStack_a8 < -0x7ffff894) {
    iStack_cc = -0x80000000;
  }
  else if ((long)pppppppbStack_a8 < 0x8000076c) {
    iStack_cc = (int)pppppppbStack_a8 + -0x76c;
  }
  else {
    iStack_cc = 0x7fffffff;
  }
  uVar23 = 0;
  lVar21 = 0x95f;
  if (2 < iVar18) {
    lVar21 = 0x960;
  }
  uVar17 = (long)pppppppbStack_a8 % 400 + lVar21;
  lVar21 = (long)(((uVar17 + (uVar17 >> 2)) - (ulong)(((uint)uVar17 >> 2 & 0x3fff) / 0x19)) +
                 (ulong)(((uint)uVar17 >> 4 & 0xfff) / 0x19) +
                 (long)*(int *)(&UNK_10e52c35c + (long)iVar18 * 4) + (long)(int)cStack_9f) % 7;
  iStack_c8 = 0;
  if (lVar21 != 0) {
    iStack_c8 = *(int *)(&UNK_10e52c340 + lVar21 * 4) + 1;
  }
  if ((2 < iVar18) && (((ulong)pppppppbStack_a8 & 3) == 0)) {
    if (((long)pppppppbStack_a8 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8U >> 2 |
        (long)pppppppbStack_a8 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
      uVar23 = (uint)((long)pppppppbStack_a8 % 400 == 0);
    }
    else {
      uVar23 = 1;
    }
  }
  iStack_c4 = (int)cStack_9f + uVar23 + *(int *)(&UNK_10e52c390 + (long)iVar18 * 4) + -1;
  uStack_c0 = (ulong)bStack_94;
  ppppppbVar8 = param_2[1];
  pppppppbVar22 = (byte *******)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    ppppppbVar8 = (byte ******)(ulong)*(byte *)((long)param_2 + 0x17);
    pppppppbVar22 = param_2;
  }
  pppppppbVar2 = (byte *******)((long)pppppppbVar22 + (long)ppppppbVar8);
  pppppppbVar20 = param_3;
  if (ppppppbVar8 != (byte ******)0x0) {
    param_5 = (byte *******)auStack_70;
    pppppppbStack_108 = (byte *******)&uStack_72;
    pppppppbVar20 = (byte *******)((long)pppppppbVar22 + (long)ppppppbVar8);
    pppppppbStack_120 = (byte *******)(auStack_70 + 1);
    unaff_x24 = (byte *******)&UNK_10f6d28f8;
    pppppppbVar15 = pppppppbVar22;
    pppppppbStack_110 = param_3;
    pppppppbStack_118 = param_4;
    pppppppbVar10 = pppppppbVar22;
LAB_10ae7e5b0:
    do {
      pppppppbVar24 = pppppppbVar15;
      if (*(byte *)pppppppbVar15 != 0x25) {
        pppppppbVar15 = (byte *******)((long)pppppppbVar15 + 1);
        pppppppbVar24 = pppppppbVar20;
        if (pppppppbVar15 != pppppppbVar2) goto LAB_10ae7e5b0;
      }
      pppppppbVar14 = (byte *******)((long)pppppppbVar24 - (long)pppppppbVar10);
      if ((pppppppbVar14 != (byte *******)0x0) && (pppppppbVar22 == pppppppbVar10)) {
        pppppppbVar9 = param_1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,pppppppbVar22,pppppppbVar14);
        pppppppbVar12 = pppppppbVar22;
        pppppppbVar10 = pppppppbVar24;
        pppppppbVar22 = pppppppbVar24;
      }
      pppppppbVar15 = pppppppbVar24;
      if (pppppppbVar24 == pppppppbVar2) {
        bVar7 = true;
        pppppppbVar19 = pppppppbVar24;
      }
      else {
        do {
          bVar7 = *(byte *)pppppppbVar15 == 0x25;
          pppppppbVar19 = pppppppbVar15;
          if (!bVar7) break;
          pppppppbVar15 = (byte *******)((long)pppppppbVar15 + 1);
          pppppppbVar19 = pppppppbVar20;
        } while (pppppppbVar15 != pppppppbVar2);
      }
      if ((pppppppbVar19 != pppppppbVar10) && (pppppppbVar22 == pppppppbVar10)) {
        pppppppbVar14 = (byte *******)((ulong)((long)pppppppbVar19 - (long)pppppppbVar22) >> 1);
        pppppppbVar9 = param_1;
        pppppppbVar12 = pppppppbVar22;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,pppppppbVar22,pppppppbVar14);
        pppppppbVar15 =
             (byte *******)
             ((long)pppppppbVar22 +
             ((long)pppppppbVar19 - (long)pppppppbVar22 & 0xfffffffffffffffeU));
        bVar3 = (bool)(bVar7 ^ 1);
        if (pppppppbVar15 == pppppppbVar19) {
          bVar3 = true;
        }
        pppppppbVar22 = pppppppbVar15;
        if (!bVar3) {
          pppppppbVar22 = (byte *******)((long)pppppppbVar15 + 1);
          pppppppbVar12 = (byte *******)(long)(char)*(byte *)pppppppbVar15;
          pppppppbVar9 = param_1;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
        }
      }
      pppppppbVar15 = pppppppbVar19;
      if ((bVar7) || (((int)pppppppbVar19 - (int)pppppppbVar24 & 1U) == 0)) goto LAB_10ae7eb18;
      pppppppbVar12 = (byte *******)(long)(char)*(byte *)pppppppbVar19;
      uVar23 = (uint)*(byte *)pppppppbVar19;
      pppppppbVar14 = (byte *******)0x10;
      pppppppbVar9 = unaff_x24;
      _memchr(&UNK_10f6d28f8,pppppppbVar12,0x10);
      if (pppppppbVar9 == (byte *******)0x0) {
        if (uVar23 == 0x45) {
          pppppppbVar15 = (byte *******)((long)pppppppbVar19 + 1);
          if (pppppppbVar15 != pppppppbVar2) {
            bVar4 = *(byte *)pppppppbVar15;
            if (bVar4 < 0x54) {
              if (bVar4 == 0x2a) {
                pppppppbVar10 = (byte *******)((long)pppppppbVar19 + 2);
                if (pppppppbVar10 != pppppppbVar2) {
                  bVar5 = *(byte *)pppppppbVar10;
                  if ((bVar5 == 0x53) || (bVar5 == 0x66)) {
                    lVar21 = ((long)pppppppbVar19 + -1) - (long)pppppppbVar22;
                    if (lVar21 != 0) {
                      func_0x0001092b29f8(&pppppppbStack_f8,pppppppbVar22,
                                          (byte *)((long)pppppppbVar19 + -1),lVar21);
                      FUN_10ae7f0d4(param_1,&pppppppbStack_f8,&ppppppbStack_e0);
                      if (cStack_e1 < '\0') {
                        __ZdlPv(pppppppbStack_f8);
                      }
                    }
                    pppppppbVar12 = param_5;
                    FUN_10ae7f1bc(param_5,0xf,*pppppppbStack_118);
                    pppppppbVar9 = pppppppbStack_120;
                    do {
                      pppppppbVar22 = (byte *******)((long)pppppppbVar9 + -1);
                      pppppppbVar14 = pppppppbVar12;
                      if (pppppppbVar22 == pppppppbVar12) break;
                      pbVar1 = (byte *)((long)pppppppbVar9 + -2);
                      pppppppbVar14 = pppppppbVar22;
                      pppppppbVar9 = pppppppbVar22;
                    } while (*pbVar1 == 0x30);
                    if (*(byte *)pppppppbVar10 == 0x66) {
                      if (pppppppbVar22 == pppppppbVar12) {
                        pppppppbVar12 = (byte *******)((long)pppppppbVar12 + -1);
                        *(byte *)pppppppbVar12 = 0x30;
                      }
                    }
                    else if (*(byte *)pppppppbVar10 == 0x53) {
                      pppppppbVar9 = pppppppbVar12;
                      if (pppppppbVar22 != pppppppbVar12) {
                        pppppppbVar9 = (byte *******)((long)pppppppbVar12 + -1);
                        *(byte *)pppppppbVar9 = 0x2e;
                      }
                      cVar16 = (char)((int)cStack_9c / 10);
                      bVar4 = (&UNK_10e52c3c4)[(char)(cStack_9c + cVar16 * -10)];
                      uVar23 = ((int)cStack_9c / 10) * 0x67;
                      pppppppbVar12 = (byte *******)((long)pppppppbVar9 + -2);
                      *(undefined *)pppppppbVar12 =
                           (&UNK_10e52c3c4)
                           [(char)(cVar16 + ((char)(uVar23 >> 10) - (char)((int)uVar23 >> 0x1f)) *
                                            -10)];
                      *(byte *)((long)pppppppbVar9 + -1) = bVar4;
                    }
                    pppppppbVar14 = (byte *******)((long)pppppppbVar14 - (long)pppppppbVar12);
                    pppppppbVar9 = param_1;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (param_1,pppppppbVar12,pppppppbVar14);
                  }
                  else {
                    if (bVar5 != 0x7a) goto LAB_10ae7ec38;
                    lVar21 = ((long)pppppppbVar19 + -1) - (long)pppppppbVar22;
                    if (lVar21 != 0) {
                      func_0x0001092b29f8(&pppppppbStack_f8,pppppppbVar22,
                                          (byte *)((long)pppppppbVar19 + -1),lVar21);
                      FUN_10ae7f0d4(param_1,&pppppppbStack_f8,&ppppppbStack_e0);
                      if (cStack_e1 < '\0') {
                        __ZdlPv(pppppppbStack_f8);
                      }
                    }
                    pppppppbVar12 = param_5;
                    FUN_10ae7f364(param_5,uStack_98,&UNK_10f6d2908);
                    pppppppbVar14 = (byte *******)((long)param_5 - (long)pppppppbVar12);
                    pppppppbVar9 = param_1;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (param_1,pppppppbVar12,pppppppbVar14);
                  }
LAB_10ae7eef8:
                  pppppppbVar15 = (byte *******)((long)pppppppbVar19 + 3);
                  pppppppbVar22 = pppppppbVar15;
                  goto LAB_10ae7eb18;
                }
              }
              else {
                if (bVar4 != 0x34) goto LAB_10ae7eba8;
                if (((byte *******)((long)pppppppbVar19 + 2) != pppppppbVar2) &&
                   (*(byte *)((long)pppppppbVar19 + 2) == 0x59)) {
                  lVar21 = ((long)pppppppbVar19 + -1) - (long)pppppppbVar22;
                  if (lVar21 != 0) {
                    func_0x0001092b29f8(&pppppppbStack_f8,pppppppbVar22,
                                        (byte *)((long)pppppppbVar19 + -1),lVar21);
                    FUN_10ae7f0d4(param_1,&pppppppbStack_f8,&ppppppbStack_e0);
                    if (cStack_e1 < '\0') {
                      __ZdlPv(pppppppbStack_f8);
                    }
                  }
                  pppppppbVar12 = param_5;
                  FUN_10ae7f1bc(param_5,4,pppppppbStack_a8);
                  pppppppbVar14 = (byte *******)((long)param_5 - (long)pppppppbVar12);
                  pppppppbVar9 = param_1;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (param_1,pppppppbVar12,pppppppbVar14);
                  goto LAB_10ae7eef8;
                }
              }
LAB_10ae7ec38:
              if ((*(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (ulong)bVar4 * 4 + 0x3c) >> 10 & 1)
                  != 0) {
                uStack_fc = 0;
                pppppppbVar12 = (byte *******)0x0;
                pppppppbVar14 = (byte *******)0x0;
                pppppppbVar10 = pppppppbVar15;
                FUN_10ae7f4f4(pppppppbVar15,0,0,0x400,&uStack_fc);
                pppppppbVar9 = pppppppbVar10;
                if ((pppppppbVar10 != (byte *******)0x0) &&
                   ((*(byte *)pppppppbVar10 == 0x66 || (*(byte *)pppppppbVar10 == 0x53)))) {
                  lVar21 = ((long)pppppppbVar19 + -1) - (long)pppppppbVar22;
                  if (lVar21 != 0) {
                    func_0x0001092b29f8(&pppppppbStack_f8,pppppppbVar22,
                                        (byte *)((long)pppppppbVar19 + -1),lVar21);
                    FUN_10ae7f0d4(param_1,&pppppppbStack_f8,&ppppppbStack_e0);
                    if (cStack_e1 < '\0') {
                      __ZdlPv(pppppppbStack_f8);
                    }
                  }
                  uVar17 = (ulong)uStack_fc;
                  pppppppbVar14 = param_5;
                  if ((int)uStack_fc < 1) {
LAB_10ae7ef44:
                    pppppppbVar12 = pppppppbVar14;
                    if (*(byte *)pppppppbVar10 == 0x53) {
                      cVar16 = (char)((int)cStack_9c / 10);
                      bVar4 = (&UNK_10e52c3c4)[(char)(cStack_9c + cVar16 * -10)];
                      uVar23 = ((int)cStack_9c / 10) * 0x67;
                      pppppppbVar12 = (byte *******)((long)pppppppbVar14 + -2);
                      *(undefined *)pppppppbVar12 =
                           (&UNK_10e52c3c4)
                           [(char)(cVar16 + ((char)(uVar23 >> 10) - (char)((int)uVar23 >> 0x1f)) *
                                            -10)];
                      *(byte *)((long)pppppppbVar14 + -1) = bVar4;
                    }
                  }
                  else {
                    if (uStack_fc < 0x13) {
                      if (0xf < uStack_fc) goto LAB_10ae7eebc;
                      lVar21 = 0;
                      if (*(long *)(&UNK_10e52c290 + (0xf - uVar17) * 8) != 0) {
                        lVar21 = (long)*pppppppbStack_118 /
                                 *(long *)(&UNK_10e52c290 + (0xf - uVar17) * 8);
                      }
                    }
                    else {
                      uVar17 = 0x12;
                      uStack_fc = 0x12;
LAB_10ae7eebc:
                      lVar21 = *(long *)(&UNK_10e52c290 + (ulong)((int)uVar17 - 0xf) * 8) *
                               (long)*pppppppbStack_118;
                    }
                    pppppppbVar12 = param_5;
                    FUN_10ae7f1bc(param_5,uVar17,lVar21);
                    if (*(byte *)pppppppbVar10 == 0x53) {
                      pppppppbVar14 = (byte *******)((long)pppppppbVar12 + -1);
                      *(byte *)pppppppbVar14 = 0x2e;
                      goto LAB_10ae7ef44;
                    }
                  }
                  pppppppbVar14 = (byte *******)((long)param_5 - (long)pppppppbVar12);
                  pppppppbVar9 = param_1;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (param_1,pppppppbVar12,pppppppbVar14);
                  pppppppbVar15 = (byte *******)((long)pppppppbVar10 + 1);
                  pppppppbVar22 = pppppppbVar15;
                }
              }
            }
            else {
              if (bVar4 == 0x7a) {
                lVar21 = ((long)pppppppbVar19 + -1) - (long)pppppppbVar22;
                if (lVar21 != 0) {
                  func_0x0001092b29f8(&pppppppbStack_f8,pppppppbVar22,
                                      (byte *)((long)pppppppbVar19 + -1),lVar21);
                  FUN_10ae7f0d4(param_1,&pppppppbStack_f8,&ppppppbStack_e0);
                  if (cStack_e1 < '\0') {
                    __ZdlPv(pppppppbStack_f8);
                  }
                }
                pppppppbVar12 = param_5;
                FUN_10ae7f364(param_5,uStack_98,":");
                pppppppbVar14 = (byte *******)((long)param_5 - (long)pppppppbVar12);
                pppppppbVar9 = param_1;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (param_1,pppppppbVar12,pppppppbVar14);
              }
              else {
                if (bVar4 != 0x54) {
LAB_10ae7eba8:
                  if (-1 < (char)bVar4) goto LAB_10ae7ec38;
                  goto LAB_10ae7eb18;
                }
                lVar21 = ((long)pppppppbVar19 + -1) - (long)pppppppbVar22;
                if (lVar21 != 0) {
                  func_0x0001092b29f8(&pppppppbStack_f8,pppppppbVar22,
                                      (byte *)((long)pppppppbVar19 + -1),lVar21);
                  FUN_10ae7f0d4(param_1,&pppppppbStack_f8,&ppppppbStack_e0);
                  if (cStack_e1 < '\0') {
                    __ZdlPv(pppppppbStack_f8);
                  }
                }
                pppppppbVar12 = (byte *******)&DAT_10f62bbec;
                pppppppbVar14 = (byte *******)0x1;
                pppppppbVar9 = param_1;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (param_1,&DAT_10f62bbec,1);
              }
LAB_10ae7ed3c:
              pppppppbVar15 = (byte *******)((long)pppppppbVar19 + 2);
              pppppppbVar22 = pppppppbVar15;
            }
          }
        }
        else if ((uVar23 == 0x3a) && ((byte *******)((long)pppppppbVar19 + 1) != pppppppbVar2)) {
          bVar4 = *(byte *)((long)pppppppbVar19 + 1);
          if (bVar4 == 0x3a) {
            if ((byte *******)((long)pppppppbVar19 + 2) != pppppppbVar2) {
              bVar4 = *(byte *)((long)pppppppbVar19 + 2);
              if (bVar4 == 0x3a) {
                if (((byte *******)((long)pppppppbVar19 + 3) != pppppppbVar2) &&
                   (*(byte *)((long)pppppppbVar19 + 3) == 0x7a)) {
                  lVar21 = ((long)pppppppbVar19 + -1) - (long)pppppppbVar22;
                  if (lVar21 != 0) {
                    func_0x0001092b29f8(&pppppppbStack_f8,pppppppbVar22,
                                        (byte *)((long)pppppppbVar19 + -1),lVar21);
                    FUN_10ae7f0d4(param_1,&pppppppbStack_f8,&ppppppbStack_e0);
                    if (cStack_e1 < '\0') {
                      __ZdlPv(pppppppbStack_f8);
                    }
                  }
                  pppppppbVar12 = param_5;
                  FUN_10ae7f364(param_5,uStack_98,&UNK_10f6d290b);
                  pppppppbVar14 = (byte *******)((long)param_5 - (long)pppppppbVar12);
                  pppppppbVar9 = param_1;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (param_1,pppppppbVar12,pppppppbVar14);
                  pppppppbVar15 = (byte *******)((long)pppppppbVar19 + 4);
                  pppppppbVar22 = pppppppbVar15;
                }
              }
              else if (bVar4 == 0x7a) {
                lVar21 = ((long)pppppppbVar19 + -1) - (long)pppppppbVar22;
                if (lVar21 != 0) {
                  func_0x0001092b29f8(&pppppppbStack_f8,pppppppbVar22,
                                      (byte *)((long)pppppppbVar19 + -1),lVar21);
                  FUN_10ae7f0d4(param_1,&pppppppbStack_f8,&ppppppbStack_e0);
                  if (cStack_e1 < '\0') {
                    __ZdlPv(pppppppbStack_f8);
                  }
                }
                pppppppbVar12 = param_5;
                FUN_10ae7f364(param_5,uStack_98,&UNK_10f6d2908);
                pppppppbVar14 = (byte *******)((long)param_5 - (long)pppppppbVar12);
                pppppppbVar9 = param_1;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (param_1,pppppppbVar12,pppppppbVar14);
                goto LAB_10ae7eef8;
              }
            }
          }
          else if (bVar4 == 0x7a) {
            lVar21 = ((long)pppppppbVar19 + -1) - (long)pppppppbVar22;
            if (lVar21 != 0) {
              func_0x0001092b29f8(&pppppppbStack_f8,pppppppbVar22,(byte *)((long)pppppppbVar19 + -1)
                                  ,lVar21);
              FUN_10ae7f0d4(param_1,&pppppppbStack_f8,&ppppppbStack_e0);
              if (cStack_e1 < '\0') {
                __ZdlPv(pppppppbStack_f8);
              }
            }
            pppppppbVar12 = param_5;
            FUN_10ae7f364(param_5,uStack_98,":");
            pppppppbVar14 = (byte *******)((long)param_5 - (long)pppppppbVar12);
            pppppppbVar9 = param_1;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (param_1,pppppppbVar12,pppppppbVar14);
            goto LAB_10ae7ed3c;
          }
        }
      }
      else {
        pppppppbVar14 = (byte *******)((long)pppppppbVar19 + -1);
        if ((long)pppppppbVar14 - (long)pppppppbVar22 != 0) {
          func_0x0001092b29f8(&pppppppbStack_f8,pppppppbVar22,pppppppbVar14,
                              (long)pppppppbVar14 - (long)pppppppbVar22);
          pppppppbVar12 = (byte *******)&pppppppbStack_f8;
          pppppppbVar14 = &ppppppbStack_e0;
          pppppppbVar9 = param_1;
          FUN_10ae7f0d4(param_1,pppppppbVar12,pppppppbVar14);
          if (cStack_e1 < '\0') {
            pppppppbVar9 = pppppppbStack_f8;
            __ZdlPv();
          }
          uVar23 = (uint)*(byte *)pppppppbVar19;
        }
        pppppppbVar22 = pppppppbStack_90;
        if (uVar23 < 100) {
          if (0x54 < uVar23) {
            if (uVar23 < 0x59) {
              if (uVar23 == 0x55) {
                uVar13 = 6;
              }
              else {
                if (uVar23 != 0x57) goto LAB_10ae7eb10;
                uVar13 = 0;
              }
              uStack_f0 = (uint)CONCAT11(cStack_9f,cStack_a0);
              uStack_ec = 0;
              pppppppbStack_f8 = pppppppbStack_a8;
              pppppppbVar14 = (byte *******)&pppppppbStack_f8;
              FUN_10ae7f2a4(pppppppbVar14,uVar13);
              uStack_71 = (&UNK_10e52c3c4)[(int)pppppppbVar14 % 10];
              uStack_72 = (&UNK_10e52c3c4)[((int)pppppppbVar14 / 10) % 10];
LAB_10ae7eac4:
              pppppppbVar14 = (byte *******)0x2;
              pppppppbVar12 = pppppppbStack_108;
            }
            else {
              pppppppbVar15 = pppppppbStack_a8;
              if (uVar23 == 0x59) goto LAB_10ae7eaf0;
              if (uVar23 != 0x5a) goto LAB_10ae7eb10;
              pppppppbVar14 = pppppppbStack_90;
              _strlen(pppppppbStack_90);
              pppppppbVar12 = pppppppbVar22;
            }
            goto LAB_10ae7eb04;
          }
          if (uVar23 < 0x4d) {
            if (uVar23 == 0x25) {
              pppppppbVar12 = (byte *******)0x25;
              pppppppbVar9 = param_1;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
            }
            else {
              cVar16 = cStack_9e;
              if (uVar23 == 0x48) goto LAB_10ae7ea7c;
            }
          }
          else {
            cVar16 = cStack_9d;
            if ((uVar23 == 0x4d) || (cVar16 = cStack_9c, uVar23 == 0x53)) {
LAB_10ae7ea7c:
              cVar6 = (char)((int)cVar16 / 10);
              uStack_71 = (&UNK_10e52c3c4)[(char)(cVar16 + cVar6 * -10)];
              uVar23 = ((int)cVar16 / 10) * 0x67;
              uStack_72 = (&UNK_10e52c3c4)
                          [(char)(cVar6 + ((char)(uVar23 >> 10) - (char)((int)uVar23 >> 0x1f)) * -10
                                 )];
              goto LAB_10ae7eac4;
            }
          }
        }
        else {
          if (uVar23 < 0x75) {
            if (uVar23 - 100 < 2) {
              iVar18 = (int)cStack_9f / 10;
              uStack_71 = (&UNK_10e52c3c4)[(char)(cStack_9f + (char)iVar18 * -10)];
              uVar23 = iVar18 + ((iVar18 * 0x67 >> 10) - (iVar18 * 0x67 >> 0x1f)) * -10;
              uStack_72 = 0x20;
              if (*(byte *)pppppppbVar19 != 0x65 || (uVar23 & 0xff) != 0) {
                uStack_72 = (&UNK_10e52c3c4)[(char)uVar23];
              }
              goto LAB_10ae7eac4;
            }
            cVar16 = cStack_a0;
            if (uVar23 == 0x6d) goto LAB_10ae7ea7c;
            if (uVar23 != 0x73) goto LAB_10ae7eb10;
            lVar21 = 0;
            __ZNSt3__16chrono12system_clock11from_time_tEl(0);
            lVar21 = SUB168(SEXT816(lVar21) * SEXT816(-0x431bde82d7b634db),8);
            pppppppbVar15 =
                 (byte *******)((long)*pppppppbStack_110 + ((lVar21 >> 0x12) - (lVar21 >> 0x3f)));
LAB_10ae7eaf0:
            pppppppbVar12 = param_5;
            FUN_10ae7f1bc(param_5,0,pppppppbVar15);
          }
          else {
            if (uVar23 == 0x75) {
              iVar18 = 7;
              if (iStack_c8 != 0) {
                iVar18 = iStack_c8;
              }
              pppppppbVar15 = (byte *******)(long)iVar18;
              goto LAB_10ae7eaf0;
            }
            if (uVar23 == 0x77) {
              pppppppbVar15 = (byte *******)(long)iStack_c8;
              goto LAB_10ae7eaf0;
            }
            if (uVar23 != 0x7a) goto LAB_10ae7eb10;
            pppppppbVar12 = param_5;
            FUN_10ae7f364(param_5,uStack_98,"");
          }
          pppppppbVar14 = (byte *******)((long)param_5 - (long)pppppppbVar12);
LAB_10ae7eb04:
          pppppppbVar9 = param_1;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,pppppppbVar12,pppppppbVar14);
        }
LAB_10ae7eb10:
        pppppppbVar15 = (byte *******)((long)pppppppbVar19 + 1);
        pppppppbVar22 = pppppppbVar15;
      }
LAB_10ae7eb18:
      pppppppbVar10 = pppppppbVar15;
    } while (pppppppbVar15 != pppppppbVar2);
  }
  if ((long)pppppppbVar2 - (long)pppppppbVar22 != 0) {
    func_0x0001092b29f8(&pppppppbStack_f8,pppppppbVar22,pppppppbVar2,
                        (long)pppppppbVar2 - (long)pppppppbVar22);
    pppppppbVar12 = (byte *******)&pppppppbStack_f8;
    pppppppbVar14 = &ppppppbStack_e0;
    pppppppbVar9 = param_1;
    FUN_10ae7f0d4(param_1,pppppppbVar12,pppppppbVar14);
    if (cStack_e1 < '\0') {
      pppppppbVar9 = pppppppbStack_f8;
      __ZdlPv();
    }
  }
  if (*(byte *******)PTR____stack_chk_guard_11034bdc0 != (byte ******)auStack_70._0_8_) {
    ___stack_chk_fail();
    if (cStack_e1 < '\0') {
      __ZdlPv(pppppppbStack_f8);
    }
    if ((char)*(byte *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    pppppppbVar22 = pppppppbVar9;
    __Unwind_Resume(pppppppbVar9);
    pcStack_128 = FUN_10ae7f0d4;
    lVar21 = 2;
    pppppppbStack_160 = unaff_x24;
    pppppppbStack_158 = param_5;
    pppppppbStack_150 = pppppppbVar2;
    pppppppbStack_148 = pppppppbVar20;
    pppppppbStack_140 = pppppppbVar9;
    pppppppbStack_138 = param_1;
    puStack_130 = &stack0xfffffffffffffff0;
    while( true ) {
      ppppppbVar8 = pppppppbVar12[1];
      if (-1 < (char)*(byte *)((long)pppppppbVar12 + 0x17)) {
        ppppppbVar8 = (byte ******)(ulong)*(byte *)((long)pppppppbVar12 + 0x17);
      }
      func_0x0001092a38dc(&lStack_178,(long)ppppppbVar8 * lVar21);
      pppppppbVar9 = (byte *******)*pppppppbVar12;
      if (-1 < (char)*(byte *)((long)pppppppbVar12 + 0x17)) {
        pppppppbVar9 = pppppppbVar12;
      }
      lVar11 = lStack_178;
      _strftime(lStack_178,(long)ppppppbVar8 * lVar21,pppppppbVar9,pppppppbVar14);
      if (lVar11 != 0) break;
      if (lStack_178 != 0) {
        lStack_170 = lStack_178;
        __ZdlPv(lStack_178);
      }
      lVar21 = lVar21 * 2;
      if (lVar21 == 0x20) {
        return;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppbVar22,lStack_178,lVar11);
    if (lStack_178 == 0) {
      return;
    }
    lStack_170 = lStack_178;
    __ZdlPv();
    return;
  }
  return;
}



/* Entry: 10ae7f0d4; end: 10ae7f1bb;  */

void FUN_10ae7f0d4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_58;
  long lStack_50;
  
  lVar4 = 2;
  while( true ) {
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    func_0x0001092a38dc(&lStack_58,uVar1 * lVar4);
    plVar2 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar2 = param_2;
    }
    lVar3 = lStack_58;
    _strftime(lStack_58,uVar1 * lVar4,plVar2,param_3);
    if (lVar3 != 0) break;
    if (lStack_58 != 0) {
      lStack_50 = lStack_58;
      __ZdlPv(lStack_58);
    }
    lVar4 = lVar4 * 2;
    if (lVar4 == 0x20) {
      return;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,lStack_58,lVar3);
  if (lStack_58 == 0) {
    return;
  }
  lStack_50 = lStack_58;
  __ZdlPv();
  return;
}



/* Entry: 10ae7f1bc; end: 10ae7f2a3;  */

undefined1 * FUN_10ae7f1bc(undefined1 *param_1,uint param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = param_3;
  if ((long)param_3 < 0) {
    if (param_3 == 0x8000000000000000) {
      param_2 = param_2 - 2;
      param_1 = param_1 + -1;
      *param_1 = 0x38;
      uVar2 = 0xf333333333333334;
    }
    else {
      param_2 = param_2 - 1;
    }
    uVar2 = -uVar2;
  }
  lVar3 = 0;
  uVar4 = param_2 - 1;
  do {
    param_1[lVar3 + -1] = (&UNK_10e52c3c4)[uVar2 % 10];
    lVar3 = lVar3 + -1;
    uVar4 = uVar4 - 1;
    bVar1 = 9 < uVar2;
    uVar2 = uVar2 / 10;
  } while (bVar1);
  if ((int)(lVar3 + (ulong)param_2) + 1 < 2) {
    param_1 = param_1 + lVar3;
  }
  else {
    param_1 = param_1 + (lVar3 - (ulong)uVar4) + -1;
    _memset(param_1,0x30,lVar3 + (ulong)param_2 & 0xffffffff);
  }
  if ((long)param_3 < 0) {
    param_1 = param_1 + -1;
    *param_1 = 0x2d;
  }
  return param_1;
}



/* Entry: 10ae7f2a4; end: 10ae7f363;  */

int FUN_10ae7f2a4(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1 % 400;
  lVar3 = (long)(char)param_1[1];
  func_0x00010ae80b44(lVar4,lVar3,(long)*(char *)((long)param_1 + 9),0,0,0);
  iVar2 = 0x101;
  lVar1 = lVar4;
  func_0x00010ae80a30();
  FUN_10ae81174(lVar4,(int)(char)lVar3,((int)lVar3 << 0x10) >> 0x18,lVar1,(int)(char)iVar2,
                (iVar2 << 0x10) >> 0x18);
  return (int)(SUB168(SEXT816(lVar4) * SEXT816(0x4924924924924925),8) >> 1) -
         (SUB164(SEXT816(lVar4) * SEXT816(0x4924924924924925),0xc) >> 0x1f);
}



/* Entry: 10ae7f364; end: 10ae7f4f3;  */

void FUN_10ae7f364(char *param_1,uint param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  char *pcVar8;
  char cVar9;
  char *pcVar10;
  bool bVar11;
  
  cVar9 = '-';
  if (-1 < (int)param_2) {
    cVar9 = '+';
  }
  uVar1 = -param_2;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  uVar5 = uVar1 % 0x3c;
  iVar6 = uVar1 / 0x3c + (uVar1 / 0xe10) * -0x3c;
  cVar2 = *param_3;
  if ((cVar2 == '\0') || (param_3[1] != '*')) {
    bVar7 = uVar5 != 0;
    bVar11 = true;
LAB_10ae7f3f4:
    cVar3 = '+';
    if (iVar6 != 0 || 0xe0f < uVar1) {
      cVar3 = cVar9;
    }
    cVar9 = cVar3;
    pcVar8 = param_1;
    if (!bVar11) {
LAB_10ae7f40c:
      pcVar10 = pcVar8;
      if (iVar6 == 0 && !bVar7) goto LAB_10ae7f458;
    }
  }
  else {
    cVar3 = param_3[2];
    bVar7 = uVar5 != 0;
    if ((cVar3 == ':') && (uVar5 == 0)) {
      bVar7 = false;
      bVar11 = false;
      goto LAB_10ae7f3f4;
    }
    cVar4 = (&UNK_10e52c3c4)[uVar5 % 10];
    pcVar8 = param_1 + -3;
    *pcVar8 = cVar2;
    param_1[-1] = cVar4;
    param_1[-2] = (&UNK_10e52c3c4)[uVar5 / 10];
    if (cVar3 == ':') goto LAB_10ae7f40c;
  }
  cVar3 = (&UNK_10e52c3c4)[(ulong)(iVar6 + ((uint)(iVar6 * 0xcd) >> 0xb & 0x1f) * -10) & 0xff];
  pcVar10 = pcVar8 + -2;
  *pcVar10 = (&UNK_10e52c3c4)[(ulong)((uint)(iVar6 * 0xcd) >> 0xb) & 0x1f];
  pcVar8[-1] = cVar3;
  if (cVar2 != '\0') {
    pcVar10 = pcVar8 + -3;
    *pcVar10 = cVar2;
  }
LAB_10ae7f458:
  cVar2 = (&UNK_10e52c3c4)[uVar1 / 0xe10 + (uVar1 / 36000) * -10];
  pcVar10[-3] = cVar9;
  pcVar10[-1] = cVar2;
  pcVar10[-2] = (&UNK_10e52c3c4)
                [(ulong)(uVar1 / 36000 + ((uVar1 / 36000) * 0xcccd >> 0x13) * -10) & 0xffff];
  return;
}



/* Entry: 10ae7f4f4; end: 10ae7f6a7;  */

char * FUN_10ae7f4f4(char *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  
  pcVar7 = param_1;
  if (param_1 != (char *)0x0) {
    cVar2 = *param_1;
    cVar5 = cVar2;
    if (cVar2 == '-') {
      if (param_2 != 0) {
        if (param_2 == 1) {
          return (char *)0x0;
        }
        param_2 = 1;
      }
      param_1 = param_1 + 1;
      cVar5 = *param_1;
    }
    puVar6 = &UNK_10e52c3c4;
    _memchr(&UNK_10e52c3c4,(int)cVar5,0xb);
    iVar8 = 0;
    pcVar10 = param_1;
    if (puVar6 == (undefined *)0x0) {
      bVar4 = true;
    }
    else {
      pcVar7 = param_1;
      do {
        pcVar11 = pcVar7 + 1;
        uVar3 = (int)puVar6 + 0xf1ad3c3c;
        pcVar9 = pcVar7;
        if (9 < (int)uVar3) break;
        if (iVar8 < -0xccccccc) {
          bVar4 = false;
          goto LAB_10ae7f62c;
        }
        if (iVar8 * 10 < (int)(uVar3 | 0x80000000)) {
          bVar4 = false;
          iVar8 = -0x7ffffff8;
          goto LAB_10ae7f62c;
        }
        iVar8 = iVar8 * 10 - uVar3;
        if (param_2 != 0) {
          if (param_2 == 1) {
            bVar4 = true;
            pcVar10 = pcVar11;
            goto LAB_10ae7f62c;
          }
          param_2 = 1;
        }
        pcVar10 = pcVar10 + 1;
        puVar6 = &UNK_10e52c3c4;
        _memchr(&UNK_10e52c3c4,(long)*pcVar11,0xb);
        pcVar9 = pcVar10;
        pcVar7 = pcVar11;
      } while (puVar6 != (undefined *)0x0);
      bVar4 = true;
      pcVar10 = pcVar9;
    }
LAB_10ae7f62c:
    pcVar7 = (char *)0x0;
    if ((((bVar4) && (pcVar10 != param_1)) && (iVar8 != -0x80000000 || cVar2 == '-')) &&
       (iVar8 != 0 || cVar2 != '-')) {
      iVar1 = -iVar8;
      if (cVar2 == '-') {
        iVar1 = iVar8;
      }
      pcVar7 = (char *)0x0;
      if ((param_3 <= iVar1) && (iVar1 <= param_4)) {
        *param_5 = iVar1;
        pcVar7 = pcVar10;
      }
    }
  }
  return pcVar7;
}



/* Entry: 10ae7f6a8; end: 10ae805c3;  */

undefined8
FUN_10ae7f6a8(byte *param_1,long *param_2,ulong *param_3,ulong *param_4,undefined8 *param_5,
             undefined8 *param_6)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  long *plVar16;
  long lVar17;
  short *****pppppsVar18;
  undefined8 *****pppppuVar19;
  short ****ppppsVar20;
  long *plVar21;
  char cVar22;
  short *****pppppsVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  int iVar26;
  uint *puVar27;
  uint *puVar28;
  int iVar29;
  undefined8 uVar30;
  bool bVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  undefined4 uStack_16c;
  short ***pppsStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 ****ppppuStack_118;
  ulong uStack_110;
  char cStack_101;
  short ****ppppsStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  long lStack_e8;
  int iStack_dc;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  ulong uStack_d0;
  byte bStack_c1;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  short ****appppsStack_70 [2];
  
  puVar7 = PTR___DefaultRuneLocale_11034bcf8;
  plVar16 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar16 = param_2;
  }
  pbVar33 = (byte *)((long)plVar16 + -1);
  do {
    bVar3 = pbVar33[1];
    lVar12 = (long)(char)bVar3;
    if ((char)bVar3 < 0) {
      ___maskrune(lVar12,0x4000);
      uVar11 = (uint)lVar12;
    }
    else {
      uVar11 = *(uint *)(puVar7 + (ulong)(uint)(int)(char)bVar3 * 4 + 0x3c) & 0x4000;
    }
    pbVar33 = pbVar33 + 1;
  } while (uVar11 != 0);
  appppsStack_70[0] = (short ****)0x7b2;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  iStack_a8 = 0;
  iStack_a4 = 1;
  uStack_b0 = 0;
  uStack_98 = 4;
  uStack_a0 = 0x4600000000;
  uStack_b8 = 0;
  uStack_bc = 0;
  func_0x000107c31940(&uStack_d8,&DAT_10f3c625e);
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar10 = false;
  bVar31 = false;
  pbVar32 = *(byte **)param_1;
  if (-1 < (char)param_1[0x17]) {
    pbVar32 = param_1;
  }
  iStack_dc = -1;
  lStack_e8 = 0;
  uStack_16c = 6;
LAB_10ae7f790:
  bVar3 = *pbVar32;
  bVar8 = bVar3 == 0;
  pbVar14 = pbVar33;
  pbVar34 = pbVar32;
  if (bVar3 != 0) {
    do {
      uVar13 = (ulong)(uint)(int)(char)bVar3;
      if ((char)bVar3 < '\0') {
        ___maskrune(uVar13,0x4000);
        uVar11 = (uint)uVar13;
      }
      else {
        uVar11 = *(uint *)(puVar7 + uVar13 * 4 + 0x3c) & 0x4000;
      }
      if (uVar11 == 0) {
        if (*pbVar34 == 0x25) goto LAB_10ae7f840;
        if (*pbVar14 != *pbVar34) {
          bVar8 = false;
          pbVar33 = (byte *)0x0;
          if (bVar4) goto LAB_10ae7ff84;
          goto LAB_10ae7ffa8;
        }
        pbVar34 = pbVar34 + 1;
        pbVar33 = pbVar14 + 1;
      }
      else {
        while( true ) {
          bVar3 = *pbVar14;
          lVar12 = (long)(char)bVar3;
          if ((char)bVar3 < 0) {
            ___maskrune(lVar12,0x4000);
            uVar11 = (uint)lVar12;
          }
          else {
            uVar11 = *(uint *)(puVar7 + (ulong)(uint)(int)(char)bVar3 * 4 + 0x3c) & 0x4000;
          }
          if (uVar11 == 0) break;
          pbVar14 = pbVar14 + 1;
        }
        do {
          pbVar34 = pbVar34 + 1;
          bVar3 = *pbVar34;
          lVar12 = (long)(char)bVar3;
          if ((char)bVar3 < 0) {
            ___maskrune(lVar12,0x4000);
            uVar11 = (uint)lVar12;
          }
          else {
            uVar11 = *(uint *)(puVar7 + (ulong)(uint)(int)(char)bVar3 * 4 + 0x3c) & 0x4000;
          }
          pbVar33 = pbVar14;
        } while (uVar11 != 0);
      }
      bVar3 = *pbVar34;
      pbVar14 = pbVar33;
      if (bVar3 == 0) {
        bVar8 = true;
        break;
      }
    } while( true );
  }
  goto LAB_10ae7ff70;
LAB_10ae7f840:
  bVar3 = pbVar34[1];
  if (bVar3 == 0) {
LAB_10ae80380:
    if ((bVar4) && ((bool)(bVar10 & iStack_a8 < 0xc))) {
      iStack_a8 = iStack_a8 + 0xc;
    }
    goto LAB_10ae7ffac;
  }
  pbVar32 = pbVar34 + 2;
  pbVar33 = pbVar14;
  switch(bVar3) {
  case 0x45:
    bVar3 = *pbVar32;
    uVar13 = (ulong)bVar3;
    if (bVar3 < 0x54) {
      if (bVar3 == 0x2a) {
        bVar3 = pbVar34[3];
        if (bVar3 == 0x53) {
          FUN_10ae7f4f4(pbVar14,2,0,0x3c,&uStack_b0);
          pbVar33 = pbVar14;
          if ((pbVar14 != (byte *)0x0) && (*pbVar14 == 0x2e)) {
            pbVar33 = pbVar14 + 1;
            FUN_10ae808d4(pbVar33,&uStack_b8);
          }
code_r0x00010ae7ff38:
          pbVar32 = pbVar34 + 4;
          break;
        }
        if (bVar3 == 0x66) {
          if ((-1 < (long)(char)*pbVar14) &&
             ((*(uint *)(puVar7 + (long)(char)*pbVar14 * 4 + 0x3c) >> 10 & 1) != 0)) {
            FUN_10ae808d4(pbVar14,&uStack_b8);
            pbVar33 = pbVar14;
          }
          pbVar32 = pbVar34 + 4;
          break;
        }
        if (bVar3 == 0x7a) goto code_r0x00010ae7fcc8;
      }
      else {
        if (bVar3 != 0x34) goto code_r0x00010ae7fca4;
        if (pbVar34[3] == 0x59) {
          FUN_10ae805c4(pbVar14,4,0xfffffffffffffc19,9999,appppsStack_70);
          if (pbVar33 == (byte *)0x0) {
            pbVar33 = (byte *)0x0;
          }
          else {
            bVar9 = (long)pbVar33 - (long)pbVar14 == 4;
            bVar6 = (bool)(bVar9 | bVar6);
            if (!bVar9) {
              pbVar33 = (byte *)0x0;
            }
          }
          goto code_r0x00010ae7ff38;
        }
      }
code_r0x00010ae7fd04:
      if ((*(uint *)(puVar7 + uVar13 * 4 + 0x3c) >> 10 & 1) != 0) {
        pppsStack_150 = (short ***)((ulong)pppsStack_150 & 0xffffffff00000000);
        pbVar15 = pbVar32;
        FUN_10ae7f4f4(pbVar32,0,0,0x400,&pppsStack_150);
        if (pbVar15 != (byte *)0x0) {
          if (*pbVar15 == 0x66) {
            if ((-1 < (long)(char)*pbVar14) &&
               ((*(uint *)(puVar7 + (long)(char)*pbVar14 * 4 + 0x3c) >> 10 & 1) != 0)) {
code_r0x00010ae7ff54:
              FUN_10ae808d4(pbVar14,&uStack_b8);
              pbVar33 = pbVar14;
            }
          }
          else {
            if (*pbVar15 != 0x53) goto code_r0x00010ae7fd80;
            FUN_10ae7f4f4(pbVar14,2,0,0x3c,&uStack_b0);
            pbVar33 = pbVar14;
            if ((pbVar14 != (byte *)0x0) && (*pbVar14 == 0x2e)) {
              pbVar14 = pbVar14 + 1;
              goto code_r0x00010ae7ff54;
            }
          }
          pbVar32 = pbVar15 + 1;
          break;
        }
code_r0x00010ae7fd80:
        uVar13 = (ulong)*pbVar32;
      }
    }
    else {
      if (bVar3 == 0x7a) {
code_r0x00010ae7fcc8:
        FUN_10ae80770(pbVar14,0x3a,&uStack_bc);
        bVar5 = (bool)(pbVar14 != (byte *)0x0 | bVar5);
        lVar12 = 1;
        if (*pbVar32 != 0x7a) {
          lVar12 = 2;
        }
        pbVar32 = pbVar32 + lVar12;
        pbVar33 = pbVar14;
        break;
      }
      if (bVar3 == 0x54) {
        if ((*pbVar14 | 0x20) != 0x74) goto LAB_10ae80380;
        pbVar33 = pbVar14 + 1;
        pbVar32 = pbVar34 + 3;
        break;
      }
code_r0x00010ae7fca4:
      if (-1 < (char)bVar3) goto code_r0x00010ae7fd04;
    }
    iVar26 = (int)uVar13;
    bVar4 = (bool)((iVar26 != 0x58 && iVar26 != 99) & bVar4);
    if (iVar26 != 0) {
      pbVar32 = pbVar34 + 3;
    }
  case 0x46:
  case 0x47:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4e:
  case 0x50:
  case 0x51:
  case 0x56:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x74:
  case 0x76:
  case 0x78:
  case 0x79:
    goto LAB_10ae7fda8;
  case 0x48:
    FUN_10ae7f4f4(pbVar14,2,0,0x17,(ulong)&uStack_b0 | 8);
    bVar4 = false;
    pbVar33 = pbVar14;
    break;
  case 0x49:
  case 0x6c:
  case 0x72:
    bVar4 = true;
    goto LAB_10ae7fda8;
  case 0x4d:
    puVar25 = (undefined8 *)((ulong)&uStack_b0 | 4);
    uVar30 = 2;
    uVar24 = 0x3b;
    goto code_r0x00010ae7fa64;
  case 0x4f:
    bVar3 = pbVar34[2];
    if (bVar3 != 0) {
      pbVar32 = pbVar34 + 3;
    }
    bVar4 = (bool)(bVar3 != 0x48 & bVar4);
    if (bVar3 == 0x49) {
      bVar4 = true;
    }
    goto LAB_10ae7fda8;
  case 0x52:
  case 0x54:
  case 0x58:
  case 99:
    bVar4 = false;
    goto LAB_10ae7fda8;
  case 0x53:
    puVar25 = &uStack_b0;
    uVar30 = 2;
    uVar24 = 0x3c;
    goto code_r0x00010ae7fa64;
  case 0x55:
    FUN_10ae7f4f4(pbVar14,0,0,0x35,&iStack_dc);
    uStack_16c = 6;
    pbVar33 = pbVar14;
    break;
  case 0x57:
    FUN_10ae7f4f4(pbVar14,0,0,0x35,&iStack_dc);
    uStack_16c = 0;
    pbVar33 = pbVar14;
    break;
  case 0x59:
    FUN_10ae805c4(pbVar14,0,0x8000000000000000,0x7fffffffffffffff,appppsStack_70);
    bVar6 = (bool)(pbVar14 != (byte *)0x0 | bVar6);
    pbVar33 = pbVar14;
    break;
  case 0x5a:
    if ((char)bStack_c1 < '\0') {
      *(undefined1 *)CONCAT71(uStack_d7,uStack_d8) = 0;
      uStack_d0 = 0;
    }
    else {
      uStack_d8 = 0;
      bStack_c1 = 0;
    }
    bVar3 = *pbVar14;
    while (bVar3 != 0) {
      uVar13 = (ulong)(uint)(int)(char)bVar3;
      if ((char)bVar3 < '\0') {
        ___maskrune(uVar13,0x4000);
        uVar11 = (uint)uVar13;
      }
      else {
        uVar11 = *(uint *)(puVar7 + uVar13 * 4 + 0x3c) & 0x4000;
      }
      if (uVar11 != 0) break;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&uStack_d8,(long)(char)*pbVar33);
      pbVar33 = pbVar33 + 1;
      bVar3 = *pbVar33;
    }
    uVar13 = uStack_d0;
    if (-1 < (char)bStack_c1) {
      uVar13 = (ulong)bStack_c1;
    }
    if (uVar13 == 0) goto LAB_10ae80380;
    break;
  case 100:
  case 0x65:
    FUN_10ae7f4f4(pbVar14,2,1,0x1f,(ulong)&uStack_b0 | 0xc);
    goto code_r0x00010ae7f95c;
  case 0x6d:
    FUN_10ae7f4f4(pbVar14,2,1,0xc,&uStack_a0);
    if (pbVar14 != (byte *)0x0) {
      uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)uStack_a0 + -1);
    }
code_r0x00010ae7f95c:
    iStack_dc = -1;
    pbVar33 = pbVar14;
    break;
  case 0x73:
    FUN_10ae805c4(pbVar14,0,0x8000000000000000,0x7fffffffffffffff,&lStack_e8);
    bVar31 = (bool)(pbVar14 != (byte *)0x0 | bVar31);
    pbVar33 = pbVar14;
    break;
  case 0x75:
    FUN_10ae7f4f4(pbVar14,0,1,7,&uStack_98);
    if (pbVar14 == (byte *)0x0) goto LAB_10ae80380;
    uStack_98 = CONCAT44(uStack_98._4_4_,(int)uStack_98 % 7);
    pbVar33 = pbVar14;
    break;
  case 0x77:
    puVar25 = &uStack_98;
    uVar30 = 0;
    uVar24 = 6;
code_r0x00010ae7fa64:
    FUN_10ae7f4f4(pbVar14,uVar30,0,uVar24,puVar25);
    pbVar33 = pbVar14;
    break;
  case 0x7a:
    FUN_10ae80770(pbVar14,0,&uStack_bc);
    bVar5 = (bool)(pbVar14 != (byte *)0x0 | bVar5);
    pbVar33 = pbVar14;
    break;
  default:
    if (bVar3 == 0x25) {
      pbVar33 = pbVar14 + 1;
      if (*pbVar14 != 0x25) goto LAB_10ae80380;
      break;
    }
    if ((bVar3 == 0x3a) &&
       ((*pbVar32 == 0x7a ||
        ((*pbVar32 == 0x3a &&
         ((pbVar34[3] == 0x7a || ((pbVar34[3] == 0x3a && (pbVar34[4] == 0x7a)))))))))) {
      FUN_10ae80770(pbVar14,0x3a,&uStack_bc);
      if (*pbVar32 == 0x7a) {
        lVar12 = 1;
      }
      else {
        lVar12 = 2;
        if (pbVar34[3] != 0x7a) {
          lVar12 = 3;
        }
      }
      bVar5 = (bool)(pbVar14 != (byte *)0x0 | bVar5);
      pbVar32 = pbVar32 + lVar12;
      pbVar33 = pbVar14;
      break;
    }
LAB_10ae7fda8:
    func_0x000104c54c8c(&ppppsStack_100,pbVar34,(long)pbVar32 - (long)pbVar34);
    pppppsVar18 = (short *****)ppppsStack_100;
    if (-1 < (char)bStack_e9) {
      pppppsVar18 = &ppppsStack_100;
    }
    _strptime(pbVar14,pppppsVar18,&uStack_b0);
    uVar11 = (uint)(char)bStack_e9;
    if ((char)bStack_e9 < '\0') {
      pppppsVar18 = (short *****)ppppsStack_100;
      if (uStack_f8 == 2) goto LAB_10ae7fe04;
    }
    else {
      if (bStack_e9 != 2) break;
      pppppsVar18 = &ppppsStack_100;
LAB_10ae7fe04:
      if ((*(short *)pppppsVar18 == 0x7025) && (pbVar33 != (byte *)0x0)) {
        func_0x000107c31940(&ppppuStack_118,"1");
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&ppppuStack_118,pbVar14,(long)pbVar33 - (long)pbVar14);
        if (cStack_101 < '\0') {
          uStack_120 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_148 = 0;
          pppsStack_150 = (short ***)0x0;
          pppppuVar19 = (undefined8 *****)ppppuStack_118;
          if ((undefined8 *****)ppppuStack_118 != (undefined8 *****)0x0) goto LAB_10ae7fe70;
          bVar10 = false;
LAB_10ae7fea0:
          __ZdlPv(ppppuStack_118);
        }
        else {
          pppppuVar19 = &ppppuStack_118;
LAB_10ae7fe70:
          uStack_120 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_148 = 0;
          pppsStack_150 = (short ***)0x0;
          _strptime(pppppuVar19,&UNK_10f6d290f,&pppsStack_150);
          bVar10 = (int)uStack_148 == 0xd;
          if (cStack_101 < '\0') goto LAB_10ae7fea0;
        }
        uVar11 = (uint)bStack_e9;
      }
      if ((uVar11 >> 7 & 1) == 0) break;
    }
    __ZdlPv(ppppsStack_100);
  }
  if (pbVar33 == (byte *)0x0) goto LAB_10ae7ff70;
  goto LAB_10ae7f790;
LAB_10ae7ff70:
  if (bVar4) {
LAB_10ae7ff84:
    if (!(bool)(bVar10 & iStack_a8 < 0xc)) goto LAB_10ae7ffa8;
    iStack_a8 = iStack_a8 + 0xc;
    if (bVar8) goto LAB_10ae7ffc8;
LAB_10ae7ffac:
    if (param_6 != (undefined8 *)0x0) {
      if (*(char *)((long)param_6 + 0x17) < '\0') {
        param_6[1] = 0x15;
        param_6 = (undefined8 *)*param_6;
      }
      else {
        *(undefined1 *)((long)param_6 + 0x17) = 0x15;
      }
      uVar30 = 0;
      param_6[1] = 0x206573726170206f;
      *param_6 = 0x742064656c696146;
      *(undefined8 *)((long)param_6 + 0xd) = 0x7475706e69206573;
      *(undefined1 *)((long)param_6 + 0x15) = 0;
      goto LAB_10ae80088;
    }
  }
  else {
LAB_10ae7ffa8:
    if (!bVar8) goto LAB_10ae7ffac;
LAB_10ae7ffc8:
    while( true ) {
      bVar3 = *pbVar33;
      plVar16 = (long *)(long)(char)bVar3;
      if ((char)bVar3 < 0) {
        ___maskrune(plVar16,0x4000);
      }
      else {
        plVar16 = (long *)(ulong)(*(uint *)(puVar7 + (ulong)(uint)(int)(char)bVar3 * 4 + 0x3c) &
                                 0x4000);
      }
      lVar12 = lStack_e8;
      if ((int)plVar16 == 0) break;
      pbVar33 = pbVar33 + 1;
    }
    if (*pbVar33 == 0) {
      if (bVar31) {
        lVar17 = 0;
        __ZNSt3__16chrono12system_clock11from_time_tEl();
        *param_4 = lVar17 / 1000000 + lVar12;
        *param_5 = 0;
LAB_10ae80054:
        uVar30 = 1;
        goto LAB_10ae80088;
      }
      if (bVar5) {
        FUN_10ae81440();
      }
      else {
        plVar16 = (long *)*param_3;
      }
      iVar26 = (int)uStack_b0;
      if ((int)uStack_b0 == 0x3c) {
        iVar26 = 0x3b;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,0x3b);
        uStack_bc = uStack_bc - 1;
        uStack_b8 = 0;
      }
      if (!bVar6) {
        appppsStack_70[0] = (short ****)((long)uStack_a0._4_4_ + 0x76c);
      }
      pppppsVar18 = (short *****)appppsStack_70[0];
      if (iStack_dc == -1) {
        iVar29 = (int)uStack_a0 + 1;
LAB_10ae802f0:
        lVar12 = (long)iVar29;
        func_0x00010ae80b44(pppppsVar18,lVar12,(long)iStack_a4,(long)iStack_a8,(long)uStack_b0._4_4_
                            ,(long)iVar26);
        uStack_f8._0_5_ = (undefined5)lVar12;
        ppppsStack_100 = (short ****)pppppsVar18;
        if ((iVar29 == (char)lVar12) && (iStack_a4 == ((int)lVar12 << 0x10) >> 0x18)) {
          lVar12 = (long)(int)uStack_bc;
          if ((int)uStack_bc < 0) {
            ppppsVar20 = (short ****)0x7fffffffffffffff;
            uVar13 = 0xc;
            func_0x00010ae80b44(0x7fffffffffffffff,0xc,0x1f,0x17,0x3b,0x3b);
            uVar13 = uVar13 & 0xffffffffff;
            FUN_10ae81334();
            uStack_148 = uVar13 & 0xffffffffff;
            pppppsVar18 = (short *****)&pppsStack_150;
            pppppsVar23 = &ppppsStack_100;
            pppsStack_150 = (short ***)ppppsVar20;
LAB_10ae803e0:
            FUN_10ae809a8(pppppsVar18,pppppsVar23);
            if (((ulong)pppppsVar18 & 1) != 0) goto LAB_10ae803e8;
          }
          else if (uStack_bc != 0) {
            pppppuVar19 = (undefined8 *****)0x8000000000000000;
            uVar13 = 1;
            func_0x00010ae80b44(0x8000000000000000,1,1,0,(ulong)uStack_bc / 0x3c,uStack_bc % 0x3c);
            uStack_110 = uVar13 & 0xffffffffff;
            pppppsVar18 = &ppppsStack_100;
            pppppsVar23 = (short *****)&ppppuStack_118;
            ppppuStack_118 = pppppuVar19;
            goto LAB_10ae803e0;
          }
          FUN_10ae81334(ppppsStack_100,uStack_f8,-lVar12);
          uStack_f8 = uStack_f8 & 0xffffffffff;
          plVar21 = plVar16;
          if (plVar16 == (long *)0x0) {
            FUN_10ae81440();
          }
          plVar21 = (long *)plVar21[3];
          (**(code **)(*plVar21 + 0x18))(&pppsStack_150,plVar21,&ppppsStack_100);
          uVar13 = uStack_148;
          if (uStack_148 == 0x8000000000000000) {
            ppppuStack_118 = (undefined8 *****)0x8000000000000000;
            if (plVar16 == (long *)0x0) {
              FUN_10ae81440();
              plVar16 = plVar21;
            }
            (**(code **)(*(long *)plVar16[3] + 0x10))
                      (&pppsStack_150,(long *)plVar16[3],&ppppuStack_118);
            pppppsVar18 = &ppppsStack_100;
            pppppsVar23 = (short *****)&pppsStack_150;
LAB_10ae804e8:
            FUN_10ae809a8(pppppsVar18,pppppsVar23);
            if ((int)pppppsVar18 != 0) {
              if (param_6 != (undefined8 *)0x0) {
                if (*(char *)((long)param_6 + 0x17) < '\0') {
                  param_6[1] = 0x12;
                  param_6 = (undefined8 *)*param_6;
                }
                else {
                  *(undefined1 *)((long)param_6 + 0x17) = 0x12;
                }
                *(undefined2 *)(param_6 + 2) = 0x646c;
                param_6[1] = 0x6569662065676e61;
                *param_6 = 0x722d666f2d74754f;
                *(undefined1 *)((long)param_6 + 0x12) = 0;
              }
              goto LAB_10ae8000c;
            }
          }
          else if (uStack_148 == 0x7fffffffffffffff) {
            ppppuStack_118 = (undefined8 *****)0x7fffffffffffffff;
            if (plVar16 == (long *)0x0) {
              FUN_10ae81440();
              plVar16 = plVar21;
            }
            (**(code **)(*(long *)plVar16[3] + 0x10))
                      (&pppsStack_150,(long *)plVar16[3],&ppppuStack_118);
            pppppsVar18 = (short *****)&pppsStack_150;
            pppppsVar23 = &ppppsStack_100;
            goto LAB_10ae804e8;
          }
          *param_4 = uVar13;
          *param_5 = uStack_b8;
          goto LAB_10ae80054;
        }
      }
      else {
        lVar17 = (long)appppsStack_70[0] % 400;
        cVar22 = '\x01';
        lVar12 = lVar17;
        FUN_10ae80a30(lVar17,0x101,uStack_16c);
        iVar26 = (int)cVar22;
        FUN_10ae80dac();
        uVar11 = (int)uStack_98 - 1;
        if (5 < uVar11) {
          uVar11 = 6;
        }
        cVar22 = (char)iVar26;
        uVar13 = (lVar12 % 400 - (ulong)(cVar22 < '\x03')) + 0x960;
        lVar1 = ((uVar13 + (uVar13 >> 2)) - (ulong)(((uint)uVar13 >> 2 & 0x3fff) / 0x19)) +
                (ulong)(((uint)uVar13 >> 4 & 0xfff) / 0x19) +
                (long)*(int *)(&UNK_10e52c35c + (long)cVar22 * 4) + (long)((iVar26 << 0x10) >> 0x18)
        ;
        uVar13 = SUB168(SEXT816(lVar1) * SEXT816(0x4924924924924925),8);
        puVar27 = (uint *)&UNK_10e52c43c;
        do {
          puVar28 = puVar27 + 1;
          uVar2 = *puVar27;
          puVar27 = puVar28;
        } while (*(uint *)(&UNK_10e52c340 +
                          (lVar1 + ((uVar13 >> 1) - ((long)uVar13 >> 0x3f)) * -7) * 4) != uVar2);
        do {
          uVar2 = *puVar28;
          puVar28 = puVar28 + 1;
        } while (uVar2 != uVar11);
        FUN_10ae80dac();
        iVar26 = (int)cVar22;
        FUN_10ae80dac();
        uVar13 = lVar12 - lVar17;
        if (uVar13 == 0) {
LAB_10ae802dc:
          iVar29 = (int)(char)iVar26;
          iStack_a4 = (iVar26 << 0x10) >> 0x18;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar29 + -1);
          iVar26 = (int)uStack_b0;
          goto LAB_10ae802f0;
        }
        if ((long)uVar13 < 1) {
          if ((long)(-0x8000000000000000 - uVar13) <= (long)pppppsVar18) goto LAB_10ae802d8;
        }
        else if ((long)pppppsVar18 <= (long)(uVar13 ^ 0x7fffffffffffffff)) {
LAB_10ae802d8:
          pppppsVar18 = (short *****)(uVar13 + (long)pppppsVar18);
          goto LAB_10ae802dc;
        }
      }
LAB_10ae803e8:
      if (param_6 != (undefined8 *)0x0) {
        if (*(char *)((long)param_6 + 0x17) < '\0') {
          param_6[1] = 0x12;
          param_6 = (undefined8 *)*param_6;
        }
        else {
          *(undefined1 *)((long)param_6 + 0x17) = 0x12;
        }
        uVar30 = 0;
        *(undefined2 *)(param_6 + 2) = 0x646c;
        param_6[1] = 0x6569662065676e61;
        *param_6 = 0x722d666f2d74754f;
        *(undefined1 *)((long)param_6 + 0x12) = 0;
        goto LAB_10ae80088;
      }
    }
    else if (param_6 != (undefined8 *)0x0) {
      func_0x000107c2c4d8(param_6,&UNK_10f6d292a,0x25);
    }
  }
LAB_10ae8000c:
  uVar30 = 0;
LAB_10ae80088:
  if ((char)bStack_c1 < '\0') {
    __ZdlPv(CONCAT71(uStack_d7,uStack_d8));
  }
  return uVar30;
}



/* Entry: 10ae805c4; end: 10ae8076f;  */

char * FUN_10ae805c4(char *param_1,int param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  
  cVar2 = *param_1;
  cVar5 = cVar2;
  if (cVar2 == '-') {
    if ((param_2 != 0) && (param_2 = param_2 + -1, param_2 == 0)) {
      return (char *)0x0;
    }
    param_1 = param_1 + 1;
    cVar5 = *param_1;
  }
  puVar6 = &UNK_10e52c3c4;
  _memchr(&UNK_10e52c3c4,(int)cVar5,0xb);
  lVar8 = 0;
  pcVar10 = param_1;
  if (puVar6 == (undefined *)0x0) {
    bVar4 = true;
  }
  else {
    pcVar7 = param_1;
    do {
      pcVar11 = pcVar7 + 1;
      iVar3 = (int)puVar6 + -0xe52c3c4;
      pcVar9 = pcVar7;
      if (9 < iVar3) break;
      if (lVar8 < -0xccccccccccccccc) {
        bVar4 = false;
        goto LAB_10ae806f4;
      }
      if (lVar8 * 10 < (long)((long)iVar3 | 0x8000000000000000U)) {
        bVar4 = false;
        lVar8 = -0x7ffffffffffffff8;
        goto LAB_10ae806f4;
      }
      lVar8 = lVar8 * 10 - (long)iVar3;
      iVar3 = param_2 + -1;
      if (param_2 < 1) {
        param_2 = 0;
      }
      else {
        param_2 = iVar3;
        if (iVar3 == 0) {
          bVar4 = true;
          pcVar10 = pcVar11;
          goto LAB_10ae806f4;
        }
      }
      pcVar10 = pcVar10 + 1;
      puVar6 = &UNK_10e52c3c4;
      _memchr(&UNK_10e52c3c4,(long)*pcVar11,0xb);
      pcVar9 = pcVar10;
      pcVar7 = pcVar11;
    } while (puVar6 != (undefined *)0x0);
    bVar4 = true;
    pcVar10 = pcVar9;
  }
LAB_10ae806f4:
  pcVar7 = (char *)0x0;
  if ((((bVar4) && (pcVar10 != param_1)) && (lVar8 != -0x8000000000000000 || cVar2 == '-')) &&
     (lVar8 != 0 || cVar2 != '-')) {
    lVar1 = -lVar8;
    if (cVar2 == '-') {
      lVar1 = lVar8;
    }
    pcVar7 = (char *)0x0;
    if ((param_3 <= lVar1) && (lVar1 <= param_4)) {
      *param_5 = lVar1;
      pcVar7 = pcVar10;
    }
  }
  return pcVar7;
}


