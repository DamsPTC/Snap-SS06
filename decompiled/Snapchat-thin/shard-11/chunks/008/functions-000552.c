/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10894c5cc; end: 10894c5f7;  */

void FUN_10894c5cc(long param_1)

{
  code *extraout_x8;
  
  func_0x00010894c988();
  if (param_1 != 0) {
    func_0x00010894c970();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 10894c5f8; end: 10894c64b;  */

void FUN_10894c5f8(long *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010894c988();
  *unaff_x19 = 0;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x20))();
  }
  return;
}



/* Entry: 10894c64c; end: 10894c663;  */

void FUN_10894c64c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10894c690(lVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10894c664; end: 10894c68f;  */

void FUN_10894c664(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10894c690(param_2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10894c690; end: 10894c6b7;  */

void FUN_10894c690(long param_1)

{
  func_0x00010894c988();
  if (param_1 != 0) {
    FUN_10894c6b8();
  }
  return;
}



/* Entry: 10894c6b8; end: 10894c81f;  */

void FUN_10894c6b8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  
  plVar1 = param_1 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    piVar5 = (int *)((long)param_1 + 0xc);
    (**(code **)(*param_1 + 0x10))(param_1);
    do {
      iVar4 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010894c71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10894c820; end: 10894c837;  */

void FUN_10894c820(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x20);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 10894c838; end: 10894c883;  */

bool FUN_10894c838(long *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  plVar1 = param_1 + 4;
  do {
    iVar2 = (int)*plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((param_1 != (long *)0x0) && (iVar2 == 1)) {
    (**(code **)(*param_1 + 0x18))();
  }
  return iVar2 != 1;
}



/* Entry: 10894c884; end: 10894c887;  */

undefined8 * FUN_10894c884(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_110a9c710;
  func_0x000107c27914(param_1 + 1);
  return param_1;
}



/* Entry: 10894c888; end: 10894c89b;  */

void FUN_10894c888(void)

{
  func_0x00010894c7f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10894c89c; end: 10894c8c3;  */

undefined8 FUN_10894c89c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10894c8c4; end: 10894c8ef;  */

void FUN_10894c8c4(long param_1)

{
  code *extraout_x8;
  
  func_0x00010894c988();
  if (param_1 != 0) {
    func_0x00010894c970();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 10894c8f0; end: 10894c91b;  */

void FUN_10894c8f0(long param_1)

{
  code *extraout_x8;
  
  func_0x00010894c988();
  if (param_1 != 0) {
    func_0x00010894c970();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 10894c91c; end: 10894c9fb;  */

void FUN_10894c91c(void)

{
  return;
}



/* Entry: 10894c9fc; end: 10894caf3;  */

undefined8 * FUN_10894c9fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  
  *param_1 = &PTR_FUN_110a9c750;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x00010b290850(&puStack_48);
  for (puVar3 = puStack_48; puVar3 != puStack_40; puVar3 = puVar3 + 3) {
    lVar2 = (long)*(char *)((long)puVar3 + 0x17);
    puVar1 = puVar3;
    if (lVar2 < 0) {
      lVar2 = puVar3[1];
      puVar1 = (undefined8 *)*puVar3;
    }
    func_0x000107c2b1e0(puVar1,lVar2);
    puStack_50 = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      func_0x00010ae46814();
      puStack_58 = puVar1;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_10894d090(param_1 + 1,&puStack_58);
      }
      func_0x000107c2b290();
      func_0x00010894d274(&puStack_58);
    }
    func_0x00010894d250(&puStack_50);
  }
  func_0x000107c278a8(&puStack_48);
  return param_1;
}



/* Entry: 10894caf4; end: 10894cafb;  */

undefined8 FUN_10894caf4(void)

{
  return 1;
}



/* Entry: 10894cafc; end: 10894ceff;  */

bool FUN_10894cafc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 in_x7;
  undefined8 **ppuVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  ulong uStack_d0;
  undefined8 *apuStack_c8 [3];
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  ppuVar4 = &puStack_100;
  func_0x000107c27fa8(in_x7);
  puVar6 = (undefined8 *)*param_4;
  puVar12 = (undefined8 *)param_4[1];
  if ((ulong)(((long)puVar12 - (long)puVar6) / 0x18) < 2) {
    func_0x00010894d330();
    func_0x00010894d340();
    bVar2 = true;
  }
  else {
    if (puVar6 == puVar12) {
      puStack_e0 = (undefined8 *)0x0;
      puStack_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
    }
    else {
      puStack_90 = (undefined8 *)0x0;
      puStack_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      for (; puVar6 != puVar12; puVar6 = puVar6 + 3) {
        lVar11 = (long)*(char *)((long)puVar6 + 0x17);
        puVar13 = puVar6;
        if (lVar11 < 0) {
          lVar11 = puVar6[1];
          puVar13 = (undefined8 *)*puVar6;
        }
        func_0x000107c2b290();
        puVar3 = (undefined8 *)0x0;
        apuStack_c8[0] = puVar13;
        func_0x00010ae4eca8(0,apuStack_c8,lVar11);
        puStack_100 = puVar3;
        if (puVar3 == (undefined8 *)0x0) {
          func_0x00010894d338();
          break;
        }
        FUN_10894d090(&puStack_90,&puStack_100);
        func_0x00010894d338();
      }
      if ((param_4[1] - *param_4) / 0x18 == (long)puStack_88 - (long)puStack_90 >> 3) {
        puStack_e0 = puStack_90;
        puStack_d8 = puStack_88;
        uStack_d0 = uStack_80;
        ppuVar8 = &puStack_90;
      }
      else {
        ppuVar8 = &puStack_e0;
      }
      *ppuVar8 = (undefined8 *)0x0;
      ppuVar8[1] = (undefined8 *)0x0;
      ppuVar8[2] = (undefined8 *)0x0;
      FUN_10894d194(&puStack_90);
    }
    puVar6 = puStack_d8;
    if ((ulong)((long)puStack_d8 - (long)puStack_e0) < 9) {
      func_0x00010894d330();
      func_0x00010894d340();
      bVar2 = true;
    }
    else {
      uStack_e8 = *puStack_e0;
      *puStack_e0 = 0;
      puVar12 = puStack_e0;
      while (puVar13 = puVar12 + 1, puVar13 != puVar6) {
        uVar7 = *puVar13;
        *puVar13 = 0;
        FUN_10894d204(puVar12,uVar7);
        puVar12 = puVar13;
      }
      iVar10 = 0x60017;
      func_0x00010894d1c8(&puStack_e0,puVar12);
      puStack_f8 = puStack_d8;
      puStack_100 = puStack_e0;
      uStack_f0 = uStack_d0;
      puStack_e0 = (undefined8 *)0x0;
      puStack_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      plVar9 = (long *)(param_1 + 8);
      if (*plVar9 == *(long *)(param_1 + 0x10)) {
        func_0x00010894d330();
      }
      else {
        FUN_10894cfc8();
        plStack_98 = plVar9;
        FUN_10894cfc8();
        puStack_a0 = (undefined1 *)ppuVar4;
        if ((plVar9 == (long *)0x0) || (ppuVar4 == (undefined8 **)0x0)) {
          func_0x00010894d330();
        }
        else {
          func_0x000107c2b5e8();
          puStack_a8 = (undefined1 *)ppuVar4;
          func_0x000107c2b610();
          puVar5 = (undefined1 *)ppuVar4;
          puStack_b0 = (undefined1 *)ppuVar4;
          func_0x000107c2b618();
          if ((int)puVar5 == 1) {
            *(long **)((long)ppuVar4 + 0x28) = plVar9;
            *(undefined **)((long)ppuVar4 + 0x40) = &UNK_10ae4ccd4;
            func_0x000107c2b620();
            if (puVar5 == (undefined1 *)0x0) {
              func_0x00010894d330();
            }
            else {
              *(undefined4 *)(puVar5 + 0x28) = 2;
              func_0x00010ae4d7f8();
              func_0x00010ae4cda4(ppuVar4,puVar5);
              func_0x000107c2b290();
              puVar5 = (undefined1 *)ppuVar4;
              func_0x000107c2b608();
              if ((int)puVar5 == 1) {
                iVar10 = 0x60013;
              }
              else {
                uVar1 = *(uint *)((long)ppuVar4 + 0xb0);
                puVar6 = (undefined8 *)(long)(int)uVar1;
                func_0x00010ae4c59c();
                uStack_70 = (ulong)*(uint *)((long)ppuVar4 + 0xac);
                puStack_88 = (undefined8 *)0x0;
                uStack_78 = 0;
                uStack_68 = 0;
                puStack_90 = puVar6;
                uStack_80 = (ulong)uVar1;
                func_0x000107c2793c(&UNK_10f4ed49e);
                func_0x000107c3173c(apuStack_c8);
                func_0x000107c27b9c(in_x7,apuStack_c8);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_c8);
                iVar10 = 0x60015;
              }
            }
          }
          else {
            func_0x00010894d330();
          }
          FUN_10894d2f4(&puStack_b0);
          func_0x00010894d298(&puStack_a8);
        }
        func_0x00010894d2bc(&puStack_a0);
        func_0x00010894d2bc(&plStack_98);
      }
      FUN_10894cf00(iVar10);
      bVar2 = iVar10 != 0x60013;
      FUN_10894d194(&puStack_100);
      func_0x00010894d274(&uStack_e8);
    }
    FUN_10894d194(&puStack_e0);
  }
  return bVar2;
}



/* Entry: 10894cf00; end: 10894cfc7;  */

void FUN_10894cf00(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 auStack_38 [24];
  
  pppuVar2 = &ppuStack_60;
  puVar1 = param_1;
  FUN_1089a3c0c();
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_60 = &PTR_DAT_1107eac58;
  uStack_58 = 0;
  uStack_40 = 0x4f;
  func_0x000107c278b8(auStack_38,PTR_DAT_113289a90);
  FUN_108949f78(&ppuStack_60,auStack_38,(&PTR_DAT_113289ad8)[(uint)param_1 & 0x17]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  (**(code **)(*(long *)*puVar1 + 8))((long *)*puVar1,pppuVar2,1);
  func_0x000104c03ee4(&ppuStack_60);
  return;
}



/* Entry: 10894cfc8; end: 10894d043;  */

undefined8 * FUN_10894cfc8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puStack_38;
  
  puVar3 = param_1;
  func_0x00010ae48cd0();
  puStack_38 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    for (param_1 = (undefined8 *)*param_1; param_1 != puVar1; param_1 = param_1 + 1) {
      puVar2 = puVar3;
      func_0x00010ae48e30(puVar3,*param_1);
      if (puVar2 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_10894d024;
      }
      func_0x00010ae4ecb4(*param_1);
    }
    puStack_38 = (undefined8 *)0x0;
  }
LAB_10894d024:
  func_0x00010894d2bc(&puStack_38);
  return puVar3;
}



/* Entry: 10894d044; end: 10894d047;  */

undefined8 * FUN_10894d044(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9c750;
  FUN_10894d194(param_1 + 1);
  return param_1;
}



/* Entry: 10894d048; end: 10894d05b;  */

void FUN_10894d048(void)

{
  FUN_10894d21c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10894d05c; end: 10894d08f;  */

void FUN_10894d05c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *puVar1 = &PTR_FUN_110a9c7b0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10894d090; end: 10894d17f;  */

long * FUN_10894d090(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar6 = *param_2;
    *param_2 = 0;
    puVar11 = puVar2 + 1;
    *puVar2 = uVar6;
    plVar4 = param_1;
  }
  else {
    lVar9 = (long)puVar2 - *param_1;
    uVar1 = (lVar9 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10894d180();
LAB_10894d17c:
      func_0x000104bd35f4();
      plVar5 = (long *)&DAT_10f62a4d8;
      func_0x000104bd47e8();
      if (*plVar5 != 0) {
        func_0x00010894d1c8(plVar5);
        __ZdlPv(*plVar5);
      }
      return plVar5;
    }
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar8 >> 0x3d != 0) goto LAB_10894d17c;
      lVar3 = uVar8 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar3 + lVar9);
    uVar6 = *param_2;
    *param_2 = 0;
    plVar5 = (long *)*param_1;
    plVar10 = (long *)((long)puVar2 - (param_1[1] - (long)plVar5));
    puVar11 = puVar2 + 1;
    *puVar2 = uVar6;
    plVar4 = plVar10;
    _memcpy(plVar10,plVar5);
    *param_1 = (long)plVar10;
    param_1[1] = (long)puVar11;
    param_1[2] = lVar3 + uVar8 * 8;
    if (plVar5 != (long *)0x0) {
      __ZdlPv(plVar5);
      plVar4 = plVar5;
    }
  }
  param_1[1] = (long)puVar11;
  return plVar4;
}



/* Entry: 10894d180; end: 10894d193;  */

long * FUN_10894d180(void)

{
  long *plVar1;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (*plVar1 != 0) {
    func_0x00010894d1c8(plVar1);
    __ZdlPv(*plVar1);
  }
  return plVar1;
}



/* Entry: 10894d194; end: 10894d203;  */

long * FUN_10894d194(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010894d1c8(param_1);
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10894d204; end: 10894d21b;  */

void FUN_10894d204(long *param_1,long param_2)

{
  long lStack_18;
  
  lStack_18 = *param_1;
  *param_1 = param_2;
  if (lStack_18 != 0) {
    func_0x0001004d164c(&lStack_18,&UNK_110c87868,0);
    return;
  }
  return;
}



/* Entry: 10894d21c; end: 10894d247;  */

undefined8 * FUN_10894d21c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9c750;
  FUN_10894d194(param_1 + 1);
  return param_1;
}



/* Entry: 10894d248; end: 10894d24f;  */

void FUN_10894d248(void)

{
  return;
}



/* Entry: 10894d250; end: 10894d2eb;  */

void FUN_10894d250(long param_1)

{
  func_0x00010894d320();
  if (param_1 != 0) {
    func_0x000107c2b1cc();
  }
  return;
}



/* Entry: 10894d2ec; end: 10894d2f3;  */

void FUN_10894d2ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x0001004d164c(&uStack_18,&UNK_110c87868,0);
  return;
}



/* Entry: 10894d2f4; end: 10894d317;  */

void FUN_10894d2f4(long param_1)

{
  func_0x00010894d320();
  if (param_1 != 0) {
    func_0x00010ae4c760();
  }
  return;
}



/* Entry: 10894d318; end: 10894d34b;  */

void FUN_10894d318(void)

{
  return;
}



/* Entry: 10894d34c; end: 10894d3b7;  */

void FUN_10894d34c(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long lStack_28;
  
  func_0x000108950518();
  FUN_10894d3b8(&lStack_28);
  func_0x00010894d3ec();
  lVar1 = lStack_28;
  lStack_28 = 0;
  if (lVar1 != 0) {
    func_0x000108950628();
  }
  *unaff_x19 = &PTR_FUN_110a9c7f8;
  unaff_x19[3] = unaff_x20;
  return;
}



/* Entry: 10894d3b8; end: 10894d40b;  */

void FUN_10894d3b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *puVar1 = &PTR_FUN_110a9c628;
  *param_1 = puVar1;
  return;
}



/* Entry: 10894d40c; end: 10894d50b;  */

undefined8 * FUN_10894d40c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long alStack_a0 [5];
  undefined8 uStack_78;
  undefined8 *apuStack_70 [5];
  undefined8 uStack_48;
  
  func_0x000108950524();
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  puVar1 = (undefined8 *)0xd8;
  uStack_48 = extraout_x8;
  __Znwm();
  uVar3 = *param_3;
  (**(code **)(param_3[1] + 0x10))(alStack_a0,param_3 + 1);
  uStack_78 = uVar3;
  (**(code **)(alStack_a0[0] + 0x10))(apuStack_70,alStack_a0);
  FUN_1089a466c(puVar1,&uStack_78,uVar4);
  (*(code *)*apuStack_70[0])(apuStack_70);
  puVar2 = puVar1 + 10;
  *puVar1 = &PTR_SUB_110a9c8d0;
  FUN_10894d820(puVar2,uVar5,0);
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  func_0x000108950494();
  *param_1 = puVar1;
  func_0x000108950440(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001089503fc();
  func_0x000108950494();
  __ZdlPv(puVar1);
  func_0x00010895041c();
  func_0x00010895068c();
  func_0x00010894d60c();
  return puVar1;
}



/* Entry: 10894d50c; end: 10894d50f;  */

void FUN_10894d50c(void)

{
  func_0x00010895068c();
  func_0x00010894d60c();
  return;
}



/* Entry: 10894d510; end: 10894d523;  */

void FUN_10894d510(void)

{
  FUN_10894d5ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10894d524; end: 10894d52b;  */

void FUN_10894d524(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10894d528);
  (*pcVar1)();
}



/* Entry: 10894d52c; end: 10894d57f;  */

void FUN_10894d52c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000108950518();
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    *puVar1 = &PTR_FUN_110a9c870;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = lVar2;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  *unaff_x20 = 0;
  return;
}



/* Entry: 10894d580; end: 10894d583;  */

void FUN_10894d580(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10894d584; end: 10894d597;  */

void FUN_10894d584(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10894d598; end: 10894d5af;  */

void FUN_10894d598(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010894d5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10894d5b0; end: 10894d5e7;  */

long FUN_10894d5b0(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a9c8b0);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10894d5e8; end: 10894d5eb;  */

void FUN_10894d5e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10894d5ec; end: 10894d66b;  */

void FUN_10894d5ec(void)

{
  func_0x00010895068c();
  func_0x00010894d60c();
  return;
}



/* Entry: 10894d66c; end: 10894d67f;  */

void FUN_10894d66c(void)

{
  func_0x00010894d634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10894d680; end: 10894d7e3;  */

void FUN_10894d680(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_69;
  ulong uStack_68;
  long *plStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  
  uStack_68 = *(ulong *)(param_1 + 8) &
              ((long)*(ulong *)(param_1 + 8) >> 0x3f ^ 0xffffffffffffffffU);
  uStack_69 = 0;
  func_0x0001078a4e94(&lStack_90,&uStack_69);
  uVar4 = uStack_88;
  lVar7 = lStack_90;
  lStack_90 = 0;
  uStack_88 = 0;
  puStack_58 = *(undefined8 **)(param_1 + 0xd0);
  plStack_60 = *(long **)(param_1 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  *(long *)(param_1 + 200) = lVar7;
  func_0x0001078a52b0(&plStack_60);
  func_0x0001078a52b0(&lStack_90);
  FUN_10894f5a8(param_1 + 0x50,&uStack_68);
  uStack_80 = *(undefined8 *)(param_1 + 0xd0);
  uStack_88 = *(undefined8 *)(param_1 + 200);
  if (*(long *)(param_1 + 0xd0) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0xd0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6 = (undefined8 *)((ulong)&lStack_90 | 8);
  lVar7 = *(long *)(param_1 + 0x50);
  puVar5 = (undefined8 *)0x88;
  lStack_90 = param_1;
  plStack_60 = &lStack_90;
  func_0x00010bd3faa4();
  *puVar5 = 0;
  puVar5[1] = FUN_10894f7a8;
  *(undefined4 *)(puVar5 + 2) = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[8] = uStack_88;
  puVar5[7] = lStack_90;
  puVar5[9] = uStack_80;
  *puVar6 = 0;
  puVar6[1] = 0;
  puStack_58 = puVar5;
  FUN_10894fe4c(puVar5 + 10,0,0,param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x60) = 1;
  puStack_50 = puVar5;
  FUN_10894f6c4(*(undefined8 *)(lVar7 + 0x58),lVar7 + 0x28,param_1 + 0x58,param_1 + 0x68,puVar5);
  puStack_58 = (undefined8 *)0x0;
  puStack_50 = (undefined8 *)0x0;
  FUN_10894f784(&plStack_60);
  func_0x00010895047c();
  return;
}



/* Entry: 10894d7e4; end: 10894d81f;  */

undefined8 FUN_10894d7e4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0xd0);
  uStack_30 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  func_0x0001078a52b0(&uStack_30);
  puVar2 = (undefined8 *)(param_1 + 0x50);
  func_0x00010895066c();
  uVar1 = *puVar2;
  FUN_10894f024(uVar1,puVar2 + 1,auStack_38);
  func_0x000107c2a674(auStack_38,&UNK_10f4ed4fe);
  return uVar1;
}



/* Entry: 10894d820; end: 10894d82f;  */

undefined8 * FUN_10894d820(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_10894d898(param_2,0,0);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0xffffffffffffffff;
  param_1[8] = param_2;
  param_1[0xb] = &PTR_FUN_110a9cb70;
  param_1[0xc] = param_1 + 8;
  param_1[0xd] = &PTR_FUN_110a9cad0;
  param_1[0xe] = &PTR_DAT_110a9cb90;
  *param_1 = uVar1;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



/* Entry: 10894d830; end: 10894d897;  */

undefined8 *
FUN_10894d830(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  FUN_10894d898();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0xffffffffffffffff;
  param_1[8] = param_4;
  param_1[0xb] = &PTR_FUN_110a9cb70;
  param_1[0xc] = param_1 + 8;
  param_1[0xd] = &PTR_FUN_110a9cad0;
  param_1[0xe] = &PTR_DAT_110a9cb90;
  *param_1 = uVar1;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



/* Entry: 10894d898; end: 10894d8a3;  */

void FUN_10894d898(undefined8 *param_1)

{
  undefined **ppuStack_20;
  undefined8 uStack_18;
  
  ppuStack_20 = &PTR_DAT_110a9c908;
  uStack_18 = 0;
  func_0x00010bd41e70(*param_1,&ppuStack_20,FUN_10894d8d8,param_1);
  return;
}



/* Entry: 10894d8a4; end: 10894d8d7;  */

void FUN_10894d8a4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_20;
  undefined8 uStack_18;
  
  ppuStack_20 = &PTR_DAT_110a9c908;
  uStack_18 = 0;
  func_0x00010bd41e70(param_1,&ppuStack_20,FUN_10894d8d8,param_2);
  return;
}



/* Entry: 10894d8d8; end: 10894d90f;  */

undefined8 FUN_10894d8d8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm(0x60);
  FUN_10894d910();
  return uVar1;
}



/* Entry: 10894d910; end: 10894d993;  */

undefined8 * FUN_10894d910(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  *param_1 = &PTR_DAT_110a9c928;
  param_1[1] = 0;
  param_1[5] = &PTR_DAT_110a9c988;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  FUN_10894d994();
  param_1[0xb] = param_2;
  func_0x00010bd40268();
  func_0x00010bd40ea4(param_1[0xb],param_1 + 5);
  return param_1;
}



/* Entry: 10894d994; end: 10894d9a3;  */

void FUN_10894d994(long *param_1)

{
  undefined **ppuStack_20;
  undefined8 uStack_18;
  
  ppuStack_20 = &PTR_DAT_110a9cfd0;
  uStack_18 = 0;
  func_0x00010bd41e70(*param_1,&ppuStack_20,FUN_10894de38,*(undefined8 *)(*param_1 + 0x48));
  return;
}



/* Entry: 10894d9a4; end: 10894d9b7;  */

void FUN_10894d9a4(void)

{
  FUN_10894deec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10894d9b8; end: 10894d9bb;  */

void FUN_10894d9b8(void)

{
  return;
}



/* Entry: 10894d9bc; end: 10894d9cf;  */

void FUN_10894d9bc(void)

{
  FUN_10894de70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10894d9d0; end: 10894d9df;  */

bool FUN_10894d9d0(long param_1)

{
  return *(long *)(param_1 + 0x10) == 0;
}



/* Entry: 10894d9e0; end: 10894dab3;  */

ulong FUN_10894d9e0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = param_2;
  if (uVar1 != *(ulong *)(param_1 + 0x20)) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    lStack_28 = param_1;
    FUN_10894db98(uVar1,&lStack_28);
    if ((long)uVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar1 / 1000000;
      if ((long)param_2 <= (long)(uVar1 / 1000000)) {
        uVar2 = param_2;
      }
      if (uVar1 < 1000000) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



/* Entry: 10894dab4; end: 10894db53;  */

void FUN_10894dab4(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)) {
    func_0x000107c34bb4();
    __ZNSt3__16chrono12steady_clock3nowEv();
    while ((plVar2 = *(long **)(unaff_x20 + 0x18), plVar2 != *(long **)(unaff_x20 + 0x20) &&
           (*plVar2 <= param_1))) {
      puVar3 = (undefined8 *)plVar2[1];
      while (puVar4 = (undefined8 *)*puVar3, puVar4 != (undefined8 *)0x0) {
        func_0x00010894dbf8(puVar3);
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        *puVar4 = 0;
        puVar1 = unaff_x19;
        if ((undefined8 *)unaff_x19[1] != (undefined8 *)0x0) {
          puVar1 = (undefined8 *)unaff_x19[1];
        }
        *puVar1 = puVar4;
        unaff_x19[1] = puVar4;
      }
      FUN_10894dc18();
    }
  }
  return;
}



/* Entry: 10894db54; end: 10894db97;  */

void FUN_10894db54(void)

{
  long unaff_x19;
  long lVar1;
  
  func_0x000108950518();
  while (lVar1 = *(long *)(unaff_x19 + 0x10), lVar1 != 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(lVar1 + 0x18);
    func_0x000108950660();
    FUN_10894dddc();
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
  }
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10894db98; end: 10894dc17;  */

long FUN_10894db98(ulong *param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar4 = *param_1;
  uVar5 = *param_2;
  lVar6 = uVar4 - uVar5;
  lVar1 = -0x8000000000000000;
  if (-uVar4 <= (uVar5 ^ 0x7fffffffffffffff)) {
    lVar1 = lVar6;
  }
  lVar3 = -0x8000000000000000;
  if (uVar4 != 0x8000000000000000) {
    lVar3 = lVar1;
  }
  if ((uVar5 & 0x8000000000000000) != 0) {
    lVar3 = lVar6;
  }
  lVar1 = 0x7fffffffffffffff;
  if (-uVar5 <= (uVar4 ^ 0x7fffffffffffffff)) {
    lVar1 = lVar6;
  }
  lVar2 = 0x7fffffffffffffff;
  if (uVar5 != 0x8000000000000000) {
    lVar2 = lVar1;
  }
  if ((uVar5 & 0x8000000000000000) == 0) {
    lVar2 = lVar6;
  }
  if ((uVar4 & 0x8000000000000000) == 0) {
    lVar3 = lVar2;
  }
  return lVar3;
}



/* Entry: 10894dc18; end: 10894dcdb;  */

void FUN_10894dc18(long param_1)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  ulong uVar5;
  
  func_0x000107c34bb4();
  if (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)) {
    uVar5 = *(ulong *)(unaff_x19 + 0x10);
    uVar3 = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 4;
    if (uVar5 < uVar3) {
      uVar3 = uVar3 - 1;
      cVar1 = SBORROW8(uVar5,uVar3);
      cVar2 = (long)(uVar5 - uVar3) < 0;
      if (uVar5 == uVar3) {
        func_0x000108950544();
      }
      else {
        func_0x000108950660();
        FUN_10894dcdc();
        func_0x000108950544();
        if ((uVar5 == 0) || (func_0x000108950534(*(undefined8 *)(unaff_x20 + 0x18)), cVar2 == cVar1)
           ) {
          func_0x000108950660();
          func_0x00010894dd64();
        }
        else {
          func_0x000108950660();
          FUN_10894dd20();
        }
      }
    }
  }
  lVar4 = *(long *)(unaff_x19 + 0x18);
  if (*(long *)(unaff_x20 + 0x10) == unaff_x19) {
    *(long *)(unaff_x20 + 0x10) = lVar4;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    *(long *)(*(long *)(unaff_x19 + 0x20) + 0x18) = lVar4;
  }
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  }
  *(long *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  return;
}



/* Entry: 10894dcdc; end: 10894dd1f;  */

void FUN_10894dcdc(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 0x18);
  puVar1 = (undefined8 *)(lVar3 + param_2 * 0x10);
  uVar5 = puVar1[1];
  uVar4 = *puVar1;
  puVar1 = (undefined8 *)(lVar3 + param_3 * 0x10);
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)(lVar3 + param_2 * 0x10);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar6;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + param_3 * 0x10);
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
  *(long *)(*(long *)(*(long *)(param_1 + 0x18) + param_2 * 0x10 + 8) + 0x10) = param_2;
  *(long *)(*(long *)(*(long *)(param_1 + 0x18) + param_3 * 0x10 + 8) + 0x10) = param_3;
  return;
}



/* Entry: 10894dd20; end: 10894dddb;  */

void FUN_10894dd20(long param_1,ulong param_2)

{
  char in_NG;
  char in_OV;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    param_2 = param_2 - 1 >> 1;
    func_0x000108950534(*(undefined8 *)(param_1 + 0x18));
    if (in_NG == in_OV) break;
    func_0x00010895063c();
  }
  return;
}



/* Entry: 10894dddc; end: 10894de03;  */

void FUN_10894dddc(long *param_1,long *param_2)

{
  long *plVar1;
  
  if (*param_2 != 0) {
    plVar1 = param_1;
    if ((long *)param_1[1] != (long *)0x0) {
      plVar1 = (long *)param_1[1];
    }
    *plVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}



/* Entry: 10894de04; end: 10894de37;  */

void FUN_10894de04(long param_1)

{
  undefined **ppuStack_20;
  undefined8 uStack_18;
  
  ppuStack_20 = &PTR_DAT_110a9cfd0;
  uStack_18 = 0;
  func_0x00010bd41e70(param_1,&ppuStack_20,FUN_10894de38,*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 10894de38; end: 10894de6f;  */

undefined8 FUN_10894de38(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x108;
  __Znwm(0x108);
  func_0x00010bd3fd84();
  return uVar1;
}



/* Entry: 10894de70; end: 10894decb;  */

undefined8 * FUN_10894de70(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a9c988;
  func_0x00010894dea0(param_1 + 3);
  return param_1;
}



/* Entry: 10894decc; end: 10894deeb;  */

void FUN_10894decc(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10894deec; end: 10894df2f;  */

undefined8 * FUN_10894deec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a9c928;
  func_0x00010bd40ed8(param_1[0xb],param_1 + 5);
  FUN_10894de70(param_1 + 5);
  return param_1;
}



/* Entry: 10894df30; end: 10894df47;  */

undefined ** FUN_10894df30(void)

{
  return &PTR_DAT_110a9caf0;
}



/* Entry: 10894df48; end: 10894dfeb;  */

void FUN_10894df48(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  func_0x000108950518();
  if (((*(ulong *)CONCAT44(uVar2,iVar1) & 1) == 0) && (func_0x0001089505d0(), iVar1 != 0)) {
    func_0x00010895055c();
    if (CONCAT44(uVar2,iVar1) != 0) {
      func_0x0001089505c8(*(undefined8 *)CONCAT44(uVar2,iVar1));
    }
    DataMemoryBarrier(2,3);
    func_0x000108950454();
  }
  else {
    func_0x0001089505bc();
    func_0x0001089503c0();
    func_0x00010bd4058c();
    func_0x000108950508();
  }
  return;
}



/* Entry: 10894dfec; end: 10894e00b;  */

void FUN_10894dfec(void)

{
  undefined1 uStack_11;
  
  FUN_10894e040(&uStack_11,1);
  return;
}



/* Entry: 10894e00c; end: 10894e03f;  */

long * FUN_10894e00c(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (*(code *)*puVar1)(puVar1,0);
  }
  return param_1;
}



/* Entry: 10894e040; end: 10894e06b;  */

byte * FUN_10894e040(byte *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  
  func_0x00010bd42e30();
  func_0x000108950678();
  if (param_1 != (byte *)0x0) {
    for (lVar4 = 0; lVar4 != 0x10; lVar4 = lVar4 + 8) {
      pbVar2 = *(byte **)(param_1 + lVar4);
      if ((pbVar2 != (byte *)0x0) && (unaff_x21 <= *pbVar2)) {
        uVar1 = 0;
        if (unaff_x20 != 0) {
          uVar1 = (ulong)pbVar2 / unaff_x20;
        }
        if (pbVar2 == (byte *)(uVar1 * unaff_x20)) {
          param_1 = param_1 + lVar4;
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          bVar3 = *pbVar2;
          param_1 = pbVar2;
          goto LAB_10894e0e8;
        }
      }
    }
    if ((*(long *)param_1 != 0) || (*(long *)(param_1 + 8) != 0)) {
      func_0x000108950614();
    }
  }
  func_0x0001089504e8();
  bVar3 = (byte)unaff_x21;
  if (0x3ff < unaff_x22) {
    bVar3 = 0;
  }
LAB_10894e0e8:
  param_1[unaff_x19] = bVar3;
  return param_1;
}



/* Entry: 10894e06c; end: 10894e103;  */

byte * FUN_10894e06c(byte *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  
  func_0x000108950678();
  if (param_1 != (byte *)0x0) {
    for (lVar4 = 0; lVar4 != 0x10; lVar4 = lVar4 + 8) {
      pbVar2 = *(byte **)(param_1 + lVar4);
      if ((pbVar2 != (byte *)0x0) && (unaff_x21 <= *pbVar2)) {
        uVar1 = 0;
        if (unaff_x20 != 0) {
          uVar1 = (ulong)pbVar2 / unaff_x20;
        }
        if (pbVar2 == (byte *)(uVar1 * unaff_x20)) {
          param_1 = param_1 + lVar4;
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          bVar3 = *pbVar2;
          param_1 = pbVar2;
          goto LAB_10894e0e8;
        }
      }
    }
    if ((*(long *)param_1 != 0) || (*(long *)(param_1 + 8) != 0)) {
      func_0x000108950614();
    }
  }
  func_0x0001089504e8();
  bVar3 = (byte)unaff_x21;
  if (0x3ff < unaff_x22) {
    bVar3 = 0;
  }
LAB_10894e0e8:
  param_1[unaff_x19] = bVar3;
  return param_1;
}



/* Entry: 10894e104; end: 10894e15b;  */

void FUN_10894e104(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined1 auStack_28 [8];
  
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = param_2 / param_1;
  }
  lVar4 = param_2 - uVar2 * param_1;
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = param_1 - lVar4;
  }
  FUN_10894e16c(param_1,lVar1 + param_2);
  if (param_1 != 0) {
    return;
  }
  __ZNSt9bad_allocC1Ev(auStack_28);
  FUN_10894e1dc(auStack_28);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10894e150);
  (*pcVar3)();
}



/* Entry: 10894e15c; end: 10894e16b;  */

void FUN_10894e15c(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_1 + -8));
    return;
  }
  return;
}



/* Entry: 10894e16c; end: 10894e1db;  */

void FUN_10894e16c(ulong param_1,long param_2)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  if (param_1 < 9) {
    param_1 = 8;
  }
  lVar1 = param_2 + param_1;
  lStack_38 = lVar1 + -8;
  _malloc();
  if (lVar1 != 0) {
    lStack_40 = lVar1 + 8;
    __ZNSt3__15alignEmmRPvRm(param_1,param_2,&lStack_40,&lStack_38);
    *(long *)(lStack_40 + -8) = lVar1;
  }
  return;
}



/* Entry: 10894e1dc; end: 10894e223;  */

void FUN_10894e1dc(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x0001089504c0();
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *param_1 = &PTR_FUN_110a9ca68;
  param_1[1] = &PTR_FUN_110a9ca98;
  param_1[2] = &PTR_DAT_110a9cac0;
  param_1[3] = 0;
  ___cxa_throw();
  func_0x000108950654();
  __ZNSt9bad_allocD2Ev(unaff_x19 + 8);
  return;
}



/* Entry: 10894e224; end: 10894e227;  */

void FUN_10894e224(void)

{
  long unaff_x19;
  
  func_0x000108950654();
  __ZNSt9bad_allocD2Ev(unaff_x19 + 8);
  return;
}



/* Entry: 10894e228; end: 10894e263;  */

undefined8 FUN_10894e228(undefined8 param_1)

{
  func_0x0001089505e8();
  FUN_10894e2dc();
  func_0x000108950600();
  return param_1;
}



/* Entry: 10894e264; end: 10894e2a3;  */

void FUN_10894e264(undefined8 param_1)

{
  func_0x0001089504c0();
  func_0x00010894e2d8();
  ___cxa_throw(param_1,&PTR_DAT_110a9ca10,FUN_10894e224);
  func_0x0001089505dc();
  func_0x00010895041c();
  FUN_10894e32c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10894e2a4; end: 10894e2b7;  */

void FUN_10894e2a4(void)

{
  FUN_10894e32c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10894e2b8; end: 10894e2db;  */

void FUN_10894e2b8(long param_1)

{
  long unaff_x19;
  
  func_0x000108950654(param_1 + -8);
  __ZNSt9bad_allocD2Ev(unaff_x19 + 8);
  return;
}



/* Entry: 10894e2dc; end: 10894e32b;  */

void FUN_10894e2dc(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000108950598();
  *(undefined **)(unaff_x19 + 8) = PTR___ZTVSt9bad_alloc_110346b80 + 0x10;
  func_0x000105301370(param_1,param_2 + 0x10);
  func_0x0001089504a4(&UNK_110a9ca58);
  return;
}



/* Entry: 10894e32c; end: 10894e34f;  */

void FUN_10894e32c(void)

{
  long unaff_x19;
  
  func_0x000108950654();
  __ZNSt9bad_allocD2Ev(unaff_x19 + 8);
  return;
}



/* Entry: 10894e350; end: 10894e3d7;  */

void FUN_10894e350(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 *puStack_40;
  long lStack_38;
  long lStack_30;
  undefined1 uStack_21;
  
  puStack_40 = &uStack_21;
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  lStack_38 = param_2;
  lStack_30 = param_2;
  FUN_10894e3d8(&puStack_40);
  if (param_1 != 0) {
    if (puVar1 != (undefined8 *)0x0) {
      func_0x0001089505c8(*puVar1,puVar1);
    }
    DataMemoryBarrier(2,3);
  }
  func_0x000108950454();
  FUN_10894e47c(&puStack_40);
  return;
}



/* Entry: 10894e3d8; end: 10894e44f;  */

void FUN_10894e3d8(long param_1)

{
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10894e00c(*(long *)(param_1 + 0x10) + 0x18);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010894e420(&uStack_21,*(long *)(param_1 + 8),1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 10894e450; end: 10894e47b;  */

void FUN_10894e450(long *param_1,undefined1 *param_2,ulong param_3)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (param_3 < 0x3fd)) {
    lVar1 = 0;
    if (*param_1 != 0) {
      if (param_1[1] != 0) goto FUN_10894e15c;
      lVar1 = 1;
    }
    *param_2 = param_2[param_3];
    param_1[lVar1] = (long)param_2;
    return;
  }
FUN_10894e15c:
  if (param_2 != (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_2 + -8));
    return;
  }
  return;
}



/* Entry: 10894e47c; end: 10894e49f;  */

undefined8 FUN_10894e47c(undefined8 param_1)

{
  FUN_10894e3d8();
  return param_1;
}



/* Entry: 10894e4a0; end: 10894e4f3;  */

void FUN_10894e4a0(void)

{
  return;
}



/* Entry: 10894e4f4; end: 10894e517;  */

void FUN_10894e4f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001089503b8();
  *(undefined4 *)puVar1 = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10894e518; end: 10894e523;  */

void FUN_10894e518(long param_1)

{
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110a9cc38;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110a9cc58;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110a9cd38;
  return;
}



/* Entry: 10894e524; end: 10894e547;  */

void FUN_10894e524(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001089503b8();
  *(undefined4 *)puVar1 = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10894e548; end: 10894e5af;  */

void FUN_10894e548(long param_1)

{
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110a9cc38;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110a9cc58;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110a9cd38;
  return;
}



/* Entry: 10894e5b0; end: 10894e5d3;  */

void FUN_10894e5b0(void)

{
  code *pcVar1;
  
  func_0x0001089502cc();
  func_0x000108950368();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10894e5cc);
  (*pcVar1)();
}



/* Entry: 10894e5d4; end: 10894e5f7;  */

void FUN_10894e5d4(void)

{
  code *pcVar1;
  
  func_0x0001089502cc();
  func_0x000108950368();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10894e5f0);
  (*pcVar1)();
}


