/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a7e2370; end: 10a7e26a3;  */

undefined8 FUN_10a7e2370(long param_1,char param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  char *pcStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  char cStack_41;
  
  ppuVar7 = &puStack_c0;
  pcStack_70 = &cStack_41;
  lVar9 = param_1 + 0x20;
  cStack_41 = param_2;
  FUN_10a814778(lVar9,&cStack_41,&UNK_10dd5b8f9,&pcStack_70,&uStack_90);
  lVar5 = *(long *)(lVar9 + 0x18);
  plVar2 = *(long **)(lVar9 + 0x20);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_58 = lVar5;
  plStack_50 = plVar2;
  FUN_10a7e20bc(param_1);
  FUN_10a7f8334(param_1,cStack_41);
  if (param_1 != 0) {
    uVar10 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
    lVar9 = (long)*(char *)(uVar10 + 0x17);
    if (lVar9 < 0) {
      lVar9 = *(long *)(uVar10 + 8);
    }
    if ((lVar9 == 0 && lVar5 != 0) && (func_0x00010aae9fd8(), lVar5 != 0)) {
      lVar9 = lVar5;
      func_0x00010ad031c0();
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      uVar10 = *(ulong *)(param_1 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x40,lVar9,uVar10);
      FUN_10a08d2e0(auStack_a8,lVar5 + 0x10);
      puVar6 = auStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar6,"/",1);
      uStack_88 = puVar6[1];
      uStack_90 = *puVar6;
      lStack_80 = puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      if (cStack_41 == '\x03') {
        ppuVar7 = (undefined1 **)0x20;
        __Znwm();
        uStack_b0 = 0x8000000000000020;
        uStack_b8 = 0x18;
        puVar8 = &UNK_10f67a01b;
        lVar9 = 0x18;
        puStack_c0 = (undefined1 *)ppuVar7;
      }
      else {
        if (cStack_41 == '\x02') {
          puVar8 = &UNK_10f67a008;
          lVar9 = 0x12;
        }
        else if (cStack_41 == '\x01') {
          puVar8 = &UNK_10f679fff;
          lVar9 = 8;
        }
        else {
          puVar8 = &UNK_10f5722f7;
          lVar9 = 9;
        }
        uStack_b0 = CONCAT17((char)lVar9,(undefined7)uStack_b0);
      }
      _memcpy(ppuVar7,puVar8,lVar9);
      *(undefined1 *)((long)ppuVar7 + lVar9) = 0;
      uVar10 = uStack_b8;
      ppuVar7 = (undefined1 **)puStack_c0;
      if (-1 < (long)uStack_b0) {
        uVar10 = uStack_b0 >> 0x38;
        ppuVar7 = &puStack_c0;
      }
      puVar6 = &uStack_90;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar6,ppuVar7,uVar10);
      uStack_68 = puVar6[1];
      pcStack_70 = (char *)*puVar6;
      lStack_60 = puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      uVar10 = *(ulong *)(param_1 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000107c3024c((ulong *)(param_1 + 0x38),&pcStack_70,uVar10);
      if (lStack_60 < 0) {
        __ZdlPv(pcStack_70);
      }
      if ((long)uStack_b0 < 0) {
        __ZdlPv(puStack_c0);
      }
      if (lStack_80 < 0) {
        __ZdlPv(uStack_90);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(auStack_a8[0]);
      }
      uVar11 = 1;
      goto joined_r0x00010a7e24b0;
    }
  }
  uVar11 = 0;
joined_r0x00010a7e24b0:
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return uVar11;
}



/* Entry: 10a7e26a4; end: 10a7e26fb;  */

void FUN_10a7e26a4(void)

{
  FUN_10a7f8334();
  return;
}



/* Entry: 10a7e26fc; end: 10a7e2763;  */

undefined8 * FUN_10a7e26fc(undefined8 *param_1)

{
  func_0x00010a052434(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a7e2764; end: 10a7e2843;  */

undefined1  [16] FUN_10a7e2764(long param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_1 != 0) {
    if ((int)param_2 == 1) {
      puVar5 = &DAT_10f679d63;
      lVar6 = 9;
    }
    else {
      if ((int)param_2 != 2) {
        FUN_10a00946c(&UNK_10f679d78);
        auVar10._8_8_ = 0x21;
        auVar10._0_8_ = &UNK_10f662131;
        return auVar10;
      }
      puVar5 = &DAT_10f679d6d;
      lVar6 = 10;
    }
    ppuVar1 = &PTR_PTR_1132cfc60;
    if (*(undefined ***)(param_1 + 0x68) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_1 + 0x68);
    }
    puVar4 = ppuVar1[0xc];
    ppuVar7 = ppuVar1 + 0xc;
    if (((ulong)puVar4 & 1) != 0) {
      ppuVar7 = (undefined **)(puVar4 + 7);
    }
    if (*(int *)(ppuVar1 + 0xd) != 0) {
      lVar8 = (long)*(int *)(ppuVar1 + 0xd) << 3;
      do {
        puVar4 = *ppuVar7;
        param_2 = (undefined8 *)(*(ulong *)(puVar4 + 200) & 0xfffffffffffffffc);
        lVar3 = (long)*(char *)((long)param_2 + 0x17);
        if (lVar3 < 0) {
          lVar3 = param_2[1];
          param_2 = (undefined8 *)*param_2;
        }
        if ((lVar6 == lVar3) && (puVar2 = puVar5, _memcmp(puVar5,param_2,lVar6), (int)puVar2 == 0))
        goto LAB_10a7e2820;
        ppuVar7 = ppuVar7 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
  }
  puVar4 = (undefined *)0x0;
LAB_10a7e2820:
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = puVar4;
  return auVar9;
}



/* Entry: 10a7e2844; end: 10a7e2863;  */

undefined1  [16] FUN_10a7e2844(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x21;
  auVar1._0_8_ = &UNK_10f662131;
  return auVar1;
}



/* Entry: 10a7e2864; end: 10a7e28cb;  */

bool FUN_10a7e2864(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf662131;
    _memcmp(&UNK_10f662131,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x21) {
    iVar2 = 0xf69fa3d;
    _memcmp(&UNK_10f69fa3d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a7e28cc; end: 10a7e28d3;  */

bool FUN_10a7e28cc(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf662131;
    _memcmp(&UNK_10f662131,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x21) {
    iVar2 = 0xf69fa3d;
    _memcmp(&UNK_10f69fa3d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a7e28d4; end: 10a7e2c23;  */

void FUN_10a7e28d4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662131,0x21);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c1df50;
  pppuVar2 = (undefined8 ***)&UNK_10f678718;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x16600000174;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c1df50;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c67f30;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644824,FUN_10a80ada8,FUN_10a80ae60);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f678e40,FUN_10a80b5b4,FUN_10a80b674);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f678e4a,FUN_10a80b738,FUN_10a80b7f4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f678e60,FUN_10a80b98c,FUN_10a80ba7c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f678e72,FUN_10a80bb34,FUN_10a80bc28);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f65daa6,FUN_10a80bce0,FUN_10a80bd9c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662131,0x21);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7e2c08);
  (*pcVar6)();
}



/* Entry: 10a7e2c24; end: 10a7e2e9f;  */

/* WARNING: Removing unreachable block (ram,0x00010a7e2dfc) */

void FUN_10a7e2c24(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long *extraout_x8;
  long lVar5;
  undefined1 uStack_19a;
  undefined1 uStack_199;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined8 *puStack_188;
  undefined1 *puStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  puVar2 = &uStack_160;
  puVar4 = &uStack_160;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  FUN_10ab6e728();
  if (*(char *)((long)puVar1 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_160,*puVar1,puVar1[1]);
  }
  else {
    uStack_158 = puVar1[1];
    uStack_160 = *puVar1;
    uStack_150 = puVar1[2];
    puVar2 = puVar1;
  }
  uStack_148 = puVar1[3];
  uStack_130 = *(undefined4 *)(puVar1 + 6);
  uStack_138 = puVar1[5];
  uStack_140 = puVar1[4];
  puVar1 = &uStack_128;
  FUN_10ab6e9d8();
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*puVar2,puVar2[1]);
  }
  else {
    uStack_118 = puVar2[2];
    uStack_120 = puVar2[1];
    uStack_128 = *puVar2;
    puVar1 = puVar2;
  }
  uStack_110 = puVar2[3];
  uStack_100 = puVar2[5];
  uStack_108 = puVar2[4];
  uStack_f8 = *(undefined4 *)(puVar2 + 6);
  puVar2 = &uStack_f0;
  FUN_10ab6eb18();
  if (*(char *)((long)puVar1 + 0x17) < '\0') {
    func_0x000107c3192c(puVar2,*puVar1,puVar1[1]);
  }
  else {
    uStack_e0 = puVar1[2];
    uStack_e8 = puVar1[1];
    uStack_f0 = *puVar1;
    puVar2 = puVar1;
  }
  uStack_d8 = puVar1[3];
  uStack_c8 = puVar1[5];
  uStack_d0 = puVar1[4];
  uStack_c0 = *(undefined4 *)(puVar1 + 6);
  puVar1 = &uStack_b8;
  FUN_10ab6ec58();
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*puVar2,puVar2[1]);
  }
  else {
    uStack_a8 = puVar2[2];
    uStack_b0 = puVar2[1];
    uStack_b8 = *puVar2;
    puVar1 = puVar2;
  }
  uStack_a0 = puVar2[3];
  uStack_90 = puVar2[5];
  uStack_98 = puVar2[4];
  uStack_88 = *(undefined4 *)(puVar2 + 6);
  FUN_10ab6f020();
  if (*(char *)((long)puVar1 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_80,*puVar1,puVar1[1]);
  }
  else {
    uStack_70 = puVar1[2];
    uStack_78 = puVar1[1];
    uStack_80 = *puVar1;
  }
  uStack_68 = puVar1[3];
  uStack_58 = puVar1[5];
  uStack_60 = puVar1[4];
  uStack_50 = *(undefined4 *)(puVar1 + 6);
  FUN_10ab6f520(param_1,&uStack_160,5);
  lVar5 = 0x118;
  do {
    lVar5 = lVar5 + -0x38;
  } while (lVar5 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    __Unwind_Resume(param_1);
    pcStack_168 = FUN_10a7e2ea0;
    puStack_190 = (undefined1 *)&uStack_160;
    puStack_188 = puVar1;
    puStack_180 = (undefined1 *)&uStack_160;
    puStack_178 = param_1;
    puStack_170 = &stack0xfffffffffffffff0;
    FUN_10a7e5a88();
    lVar5 = *extraout_x8;
    *(undefined1 *)(lVar5 + 0x140) = 1;
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)(lVar5 + 0xe0) = *(undefined4 *)((long)puVar4 + 0xe0);
      FUN_10a7e1f90(lVar5 + 0xf8,(undefined1 *)((long)puVar4 + 0xf8));
      lVar5 = *extraout_x8;
      uStack_19a = 0;
      puStack_198 = &uStack_19a;
      puVar3 = (undefined1 *)((long)puVar4 + 0x118);
      FUN_10a814778(puVar3,&uStack_19a,&UNK_10dd5b8f9,&puStack_198,&uStack_199);
      func_0x00010a7e2008(lVar5 + 0xf8,0,puVar3 + 0x18);
    }
    return;
  }
  return;
}



/* Entry: 10a7e2ea0; end: 10a7e2f4b;  */

void FUN_10a7e2ea0(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  FUN_10a7e5a88();
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + 0x140) = 1;
  if (param_3 != 0) {
    *(undefined4 *)(lVar1 + 0xe0) = *(undefined4 *)(param_3 + 0xe0);
    FUN_10a7e1f90(lVar1 + 0xf8,param_3 + 0xf8);
    lVar1 = *param_1;
    uStack_3a = 0;
    puStack_38 = &uStack_3a;
    param_3 = param_3 + 0x118;
    FUN_10a814778(param_3,&uStack_3a,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
    func_0x00010a7e2008(lVar1 + 0xf8,0,param_3 + 0x18);
  }
  return;
}



/* Entry: 10a7e2f4c; end: 10a7e2faf;  */

undefined8 * FUN_10a7e2f4c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a7e2fb0; end: 10a7e32a3;  */

long * FUN_10a7e2fb0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long *plStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long **pplStack_48;
  
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2e] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x31) = 0x100;
  plVar5 = param_1;
  FUN_10ac63ebc(param_1,&PTR_PTR_110c1ba00,param_2);
  FUN_10a0040d0(plVar5 + 0x1d,&PTR_PTR_110c1ba30);
  *param_1 = (long)&PTR_DAT_110c1b7d0;
  param_1[2] = (long)&PTR_FUN_110c1b8b8;
  param_1[5] = (long)&PTR_DAT_110c1b8e8;
  param_1[0x2e] = (long)&PTR_FUN_110c1b9c0;
  param_1[0x1d] = (long)&PTR_DAT_110c1b948;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 2;
  plVar5 = param_1 + 0x25;
  param_1[0x26] = 0;
  *plVar5 = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x31) = 1;
    param_1[0x30] = param_2;
    if (param_2 != 0) {
      param_1[0x2f] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
  }
  FUN_10a5ae998(param_1[0x20],&PTR_DAT_110b99f08,param_2,param_1 + 0x1d);
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  FUN_10a0d0194(&uStack_90,&pplStack_48);
  func_0x00010a19b5ac(plVar5,&uStack_90);
  plVar4 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  *(undefined8 *)(*plVar5 + 0xe8) = 1;
  FUN_10a7e2c24(&uStack_90);
  lVar6 = *plVar5;
  *(undefined4 *)(lVar6 + 0xf0) = uStack_90;
  if ((undefined4 *)(lVar6 + 0xf0) != &uStack_90) {
    FUN_10a1903c4(lVar6 + 0xf8,plStack_88,lStack_80,
                  (lStack_80 - (long)plStack_88 >> 3) * 0x6db6db6db6db6db7);
  }
  *(undefined8 *)(lVar6 + 0x118) = uStack_68;
  *(undefined8 *)(lVar6 + 0x110) = uStack_70;
  *(undefined8 *)(lVar6 + 0x128) = uStack_58;
  *(undefined8 *)(lVar6 + 0x120) = uStack_60;
  *(undefined8 *)(lVar6 + 0x130) = uStack_50;
  pplStack_48 = &plStack_88;
  func_0x00010a190844(&pplStack_48);
  if (*(char *)((long)param_1 + 0xba) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xba) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if (*(char *)((long)param_1 + 0xb9) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xb9) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  FUN_10a7e5a88(&uStack_90,param_2);
  *(undefined1 *)(CONCAT44(uStack_8c,uStack_90) + 0x140) = 1;
  FUN_10a7e2f4c(param_1 + 0x22,&uStack_90);
  if (plStack_88 != (long *)0x0) {
    plVar5 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  return param_1;
}



/* Entry: 10a7e32a4; end: 10a7e33e7;  */

void FUN_10a7e32a4(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f678e7c,0x26);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_10a002568();
  FUN_10a002568();
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7e33e8; end: 10a7e33ef;  */

void FUN_10a7e33e8(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f678e7c,0x26);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_10a002568();
  FUN_10a002568();
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7e33f0; end: 10a7e353b;  */

undefined *** FUN_10a7e33f0(long param_1,long *param_2)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  code **ppcVar8;
  undefined8 uVar9;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f2;
  undefined1 uStack_1f1;
  undefined ***pppuStack_1f0;
  undefined8 **ppuStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined8 auStack_1c8 [2];
  char cStack_1b1;
  code *pcStack_1b0;
  undefined8 *apuStack_1a8 [7];
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined8 *puStack_148;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c1ba50,2);
  if (*(int *)(param_1 + 0x120) != (int)plVar1) {
    *(int *)(param_1 + 0x120) = (int)plVar1;
    func_0x000107c283f4(param_1 + 0x148);
  }
  lStack_68 = param_1 + 0x110;
  pcStack_78 = FUN_10a80c374;
  ppuStack_70 = &PTR_FUN_110c1fe48;
  FUN_10a80beec(param_2,&PTR_DAT_110bb3700,&pcStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  pcStack_b8 = FUN_10a80c6bc;
  ppuStack_b0 = &PTR_FUN_110c1fe60;
  ppuVar7 = &PTR_DAT_110c1ba70;
  ppcVar8 = &pcStack_b8;
  uVar9 = 0;
  lStack_a8 = param_1;
  FUN_10a7e353c(param_2,&PTR_DAT_110c1ba70,ppcVar8,0);
  pppuVar2 = &ppuStack_b0;
  (*(code *)*ppuStack_b0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  __Unwind_Resume();
  pcStack_c8 = FUN_10a7e353c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_1b0 = *ppcVar8;
  puStack_d0 = &stack0xfffffffffffffff0;
  (**(code **)(ppcVar8[1] + 0x10))(apuStack_1a8,ppcVar8 + 1);
  FUN_109ffe064(&uStack_170,*ppuVar7,ppuVar7[1]);
  pcStack_158 = FUN_10a80c400;
  ppuStack_150 = &PTR_FUN_110c20600;
  puVar3 = (undefined8 *)0x58;
  __Znwm();
  *puVar3 = pcStack_1b0;
  (*(code *)apuStack_1a8[0][2])(puVar3 + 1,apuStack_1a8);
  puVar3[9] = uStack_168;
  puVar3[8] = uStack_170;
  puVar3[10] = lStack_160;
  uStack_168 = 0;
  lStack_160 = 0;
  uStack_170 = 0;
  puStack_148 = puVar3;
  func_0x000107c2b054(auStack_1c8,&UNK_10f678718);
  pppuVar6 = (undefined ***)ppuVar7;
  (*(code *)(*pppuVar2)[0x4a])(pppuVar2,ppuVar7,&pcStack_158,uVar9,auStack_1c8);
  if (cStack_1b1 < '\0') {
    __ZdlPv(auStack_1c8[0]);
  }
  (*(code *)*ppuStack_150)(&ppuStack_150);
  if (lStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
  ppuVar4 = apuStack_1a8;
  (*(code *)*apuStack_1a8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  if (cStack_1b1 < '\0') {
    __ZdlPv(auStack_1c8[0]);
  }
  (*(code *)*ppuStack_150)(&ppuStack_150);
  if (lStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
  (*(code *)*apuStack_1a8[0])(apuStack_1a8);
  ppuVar5 = ppuVar4;
  __Unwind_Resume();
  pcStack_1d8 = FUN_10a7e3708;
  puStack_208 = &UNK_10f662131;
  uStack_200 = 0x21;
  pppuStack_1f0 = (undefined ***)ppuVar7;
  ppuStack_1e8 = ppuVar4;
  ppuStack_1e0 = &puStack_d0;
  (*(code *)(*pppuVar6)[6])(pppuVar6,&PTR_DAT_110c1f658,&puStack_208);
  (*(code *)(*pppuVar6)[8])(pppuVar6,&PTR_DAT_110c1ba50,*(undefined4 *)(ppuVar5 + 0x24));
  FUN_10a80c70c(pppuVar6,&PTR_DAT_110bb3700,ppuVar5 + 0x22,&UNK_10f662153,0x17);
  uStack_1f2 = 1;
  puStack_208 = &uStack_1f2;
  puVar3 = ppuVar5[0x22] + 0x23;
  FUN_10a814778(puVar3,&uStack_1f2,&UNK_10dd5b8f9,&puStack_208,&uStack_1f1);
  FUN_10a009b20(pppuVar6,&PTR_DAT_110c1ba70,puVar3 + 3,&UNK_10f63349d,0xe);
  return pppuVar6;
}



/* Entry: 10a7e353c; end: 10a7e3707;  */

long * FUN_10a7e353c(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  long *plVar4;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined1 uStack_132;
  undefined1 uStack_131;
  long *plStack_130;
  undefined8 **ppuStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_e8,param_3 + 1);
  FUN_109ffe064(&uStack_b0,*param_2,param_2[1]);
  pcStack_98 = FUN_10a80c400;
  ppuStack_90 = &PTR_FUN_110c20600;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  *puVar1 = uStack_f0;
  (*(code *)apuStack_e8[0][2])(puVar1 + 1,apuStack_e8);
  puVar1[9] = uStack_a8;
  puVar1[8] = uStack_b0;
  puVar1[10] = lStack_a0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b0 = 0;
  puStack_88 = puVar1;
  func_0x000107c2b054(auStack_108,&UNK_10f678718);
  plVar4 = param_2;
  (**(code **)(*param_1 + 0x250))(param_1,param_2,&pcStack_98,param_4,auStack_108);
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  ppuVar2 = apuStack_e8;
  (*(code *)*apuStack_e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  pcStack_118 = FUN_10a7e3708;
  puStack_148 = &UNK_10f662131;
  uStack_140 = 0x21;
  plStack_130 = param_2;
  ppuStack_128 = ppuVar2;
  puStack_120 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar4 + 0x30))(plVar4,&PTR_DAT_110c1f658,&puStack_148);
  (**(code **)(*plVar4 + 0x40))(plVar4,&PTR_DAT_110c1ba50,*(undefined4 *)(ppuVar3 + 0x24));
  FUN_10a80c70c(plVar4,&PTR_DAT_110bb3700,ppuVar3 + 0x22,&UNK_10f662153,0x17);
  uStack_132 = 1;
  puStack_148 = &uStack_132;
  puVar1 = ppuVar3[0x22] + 0x23;
  FUN_10a814778(puVar1,&uStack_132,&UNK_10dd5b8f9,&puStack_148,&uStack_131);
  FUN_10a009b20(plVar4,&PTR_DAT_110c1ba70,puVar1 + 3,&UNK_10f63349d,0xe);
  return plVar4;
}



/* Entry: 10a7e3708; end: 10a7e37e7;  */

void FUN_10a7e3708(long param_1,long *param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  puStack_38 = &UNK_10f662131;
  uStack_30 = 0x21;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c1f658,&puStack_38);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c1ba50,*(undefined4 *)(param_1 + 0x120));
  FUN_10a80c70c(param_2,&PTR_DAT_110bb3700,param_1 + 0x110,&UNK_10f662153,0x17);
  uStack_22 = 1;
  puStack_38 = &uStack_22;
  lVar1 = *(long *)(param_1 + 0x110) + 0x118;
  FUN_10a814778(lVar1,&uStack_22,&UNK_10dd5b8f9,&puStack_38,&uStack_21);
  FUN_10a009b20(param_2,&PTR_DAT_110c1ba70,lVar1 + 0x18,&UNK_10f63349d,0xe);
  return;
}



/* Entry: 10a7e37e8; end: 10a7e385f;  */

void FUN_10a7e37e8(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = param_2;
  while( true ) {
    if (plVar5 == (long *)0x0) {
      lVar1 = param_2[0x26];
      *param_1 = param_2[0x25];
      param_1[1] = lVar1;
      if (lVar1 != 0) {
        plVar5 = (long *)(lVar1 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
    plVar4 = plVar5;
    (**(code **)(*plVar5 + 0x80))();
    if ((int)plVar4 != 2) break;
    plVar5 = (long *)plVar5[0x13];
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a7e3860; end: 10a7e3993;  */

void FUN_10a7e3860(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_1 + 0x110);
  FUN_10a7e20bc(lVar6 + 0xf8);
  FUN_10a7e2370(lVar6 + 0xf8,0);
  FUN_10a7e2370(lVar6 + 0xf8,1);
  lStack_50 = *(long *)(lVar6 + 0x108);
  plVar2 = *(long **)(lVar6 + 0x110);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(param_1 + 0x138) == lStack_50) {
      return;
    }
    plStack_48 = (long *)0x0;
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
    lVar7 = *(long *)(param_1 + 0x138);
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
    if (lVar7 == lStack_50) {
      return;
    }
    plStack_48 = *(long **)(lVar6 + 0x110);
    lStack_50 = *(long *)(lVar6 + 0x108);
    if (*(long *)(lVar6 + 0x110) != 0) {
      plVar2 = (long *)(*(long *)(lVar6 + 0x110) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  FUN_10a009fa8(param_1 + 0x138,&lStack_50);
  plVar2 = plStack_48;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  func_0x000107c283f4(param_1 + 0x148);
  return;
}



/* Entry: 10a7e3994; end: 10a7e3b97;  */

void FUN_10a7e3994(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_78;
  long *plStack_70;
  char cStack_61;
  undefined8 uStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  
  FUN_10a7e3860();
  lVar7 = *(long *)(param_1 + 0x110);
  uStack_78 = *(long *)(lVar7 + 0x108);
  plVar2 = *(long **)(lVar7 + 0x110);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_70 = plVar2;
  if (uStack_78 != 0) {
    lVar6 = lVar7 + 0xf8;
    FUN_10a7e26a4(lVar6,0);
    if ((int)lVar6 != 0) {
      uVar5 = lVar7 + 0xf8;
      FUN_10a7e26a4(uVar5,1);
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 1;
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
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      if ((uVar5 & 1) == 0) {
        return;
      }
      cStack_61 = '\x04';
      uVar5 = (ulong)uStack_78 >> 0x28;
      uStack_78 = CONCAT35((int3)uVar5,0x646e6168);
      plStack_58 = *(long **)(lVar7 + 0x110);
      uStack_60 = *(undefined8 *)(lVar7 + 0x108);
      if (*(long *)(lVar7 + 0x110) != 0) {
        plVar2 = (long *)(*(long *)(lVar7 + 0x110) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_50 = *(undefined4 *)(*(long *)(param_1 + 0x110) + 0xe0);
      uStack_4c = 0x40;
      uStack_48 = 0;
      if (*(int *)(param_1 + 0x120) == 1) {
        uStack_4c = 0x41;
      }
      else if (*(int *)(param_1 + 0x120) == 2) {
        uStack_4c = 0x42;
      }
      if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
        *(undefined8 *)(param_2 + 0x298) = 0;
        *(undefined8 *)(param_2 + 0x2a0) = 0;
        *(undefined8 *)(param_2 + 0x2a8) = 0;
        *(undefined1 *)(param_2 + 0x2b0) = 1;
      }
      FUN_10aad0050((undefined8 *)(param_2 + 0x298),&uStack_78);
      plVar2 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar1 = plStack_58 + 1;
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
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      if (-1 < cStack_61) {
        return;
      }
      __ZdlPv(uStack_78);
      return;
    }
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return;
}



/* Entry: 10a7e3b98; end: 10a7e3b9f;  */

void FUN_10a7e3b98(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_78;
  long *plStack_70;
  char cStack_61;
  undefined8 uStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  
  FUN_10a7e3860();
  lVar7 = *(long *)(param_1 + 0x28);
  uStack_78 = *(long *)(lVar7 + 0x108);
  plVar2 = *(long **)(lVar7 + 0x110);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_70 = plVar2;
  if (uStack_78 != 0) {
    lVar6 = lVar7 + 0xf8;
    FUN_10a7e26a4(lVar6,0);
    if ((int)lVar6 != 0) {
      uVar5 = lVar7 + 0xf8;
      FUN_10a7e26a4(uVar5,1);
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 1;
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
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      if ((uVar5 & 1) == 0) {
        return;
      }
      cStack_61 = '\x04';
      uVar5 = (ulong)uStack_78 >> 0x28;
      uStack_78 = CONCAT35((int3)uVar5,0x646e6168);
      plStack_58 = *(long **)(lVar7 + 0x110);
      uStack_60 = *(undefined8 *)(lVar7 + 0x108);
      if (*(long *)(lVar7 + 0x110) != 0) {
        plVar2 = (long *)(*(long *)(lVar7 + 0x110) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_50 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0xe0);
      uStack_4c = 0x40;
      uStack_48 = 0;
      if (*(int *)(param_1 + 0x38) == 1) {
        uStack_4c = 0x41;
      }
      else if (*(int *)(param_1 + 0x38) == 2) {
        uStack_4c = 0x42;
      }
      if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
        *(undefined8 *)(param_2 + 0x298) = 0;
        *(undefined8 *)(param_2 + 0x2a0) = 0;
        *(undefined8 *)(param_2 + 0x2a8) = 0;
        *(undefined1 *)(param_2 + 0x2b0) = 1;
      }
      FUN_10aad0050((undefined8 *)(param_2 + 0x298),&uStack_78);
      plVar2 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar1 = plStack_58 + 1;
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
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      if (-1 < cStack_61) {
        return;
      }
      __ZdlPv(uStack_78);
      return;
    }
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return;
}



/* Entry: 10a7e3ba0; end: 10a7e3e7b;  */

void FUN_10a7e3ba0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong *puVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  lVar4 = *(long *)(param_1[0x22] + 0x108);
  plVar1 = *(long **)(param_1[0x22] + 0x110);
  if (plVar1 != (long *)0x0) {
    plVar7 = plVar1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_90 = lVar4;
  plStack_88 = plVar1;
  FUN_10a7e2764(lVar4,(int)param_1[0x24]);
  if (plVar1 != (long *)0x0) {
    plVar7 = plVar1 + 1;
    do {
      lVar12 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (lVar4 != 0) {
    lVar12 = *(long *)(param_2 + 0x78);
    func_0x00010aacfd38(lVar12,&UNK_10f570f7f,4,*(undefined4 *)(param_1[0x22] + 0xe0));
    if (lVar12 != 0) {
      puVar9 = (undefined8 *)(*(ulong *)(lVar4 + 200) & 0xfffffffffffffffc);
      puVar14 = (undefined *)(long)*(char *)((long)puVar9 + 0x17);
      if ((long)puVar14 < 0) {
        puVar14 = (undefined *)puVar9[1];
        puVar9 = (undefined8 *)*puVar9;
      }
      uVar10 = *(ulong *)(lVar12 + 0x48);
      puVar15 = (ulong *)(lVar12 + 0x48);
      if ((uVar10 & 1) != 0) {
        puVar15 = (ulong *)(uVar10 + 7);
      }
      if (*(int *)(lVar12 + 0x50) != 0) {
        lVar12 = (long)*(int *)(lVar12 + 0x50) << 3;
        do {
          uVar10 = *puVar15;
          if ((*(ulong *)(uVar10 + 0xb0) & 3) == 0) {
            ppuVar6 = ppuRam00000001132d06b0;
            if (ppuRam00000001132d06b0 == (undefined **)0x0) {
              ppuVar6 = &PTR_DAT_1132d0698;
              func_0x00010b4befb0();
            }
          }
          else {
            ppuVar6 = (undefined **)(*(ulong *)(uVar10 + 0xb0) & 0xfffffffffffffffc);
          }
          puVar11 = (undefined *)(long)*(char *)((long)ppuVar6 + 0x17);
          ppuVar8 = ppuVar6;
          if ((long)puVar11 < 0) {
            ppuVar8 = (undefined **)*ppuVar6;
            puVar11 = ppuVar6[1];
          }
          if ((puVar14 == puVar11) &&
             (puVar5 = puVar9, _memcmp(puVar9,ppuVar8,puVar14), (int)puVar5 == 0)) {
            if ((*(int *)(uVar10 + 0x38) != 0) && ((*(byte *)(uVar10 + 0x10) >> 4 & 1) != 0)) {
              plStack_88 = (long *)0x0;
              lStack_90 = 0;
              uStack_78 = 0;
              uStack_80 = 0;
              uStack_70 = 0x3f800000;
              uVar13 = *(ulong *)(lVar4 + 0x98);
              puVar15 = (ulong *)(lVar4 + 0x98);
              if ((uVar13 & 1) != 0) {
                puVar15 = (ulong *)(uVar13 + 7);
              }
              if (*(int *)(lVar4 + 0xa0) != 0) {
                lVar12 = (long)*(int *)(lVar4 + 0xa0) << 3;
                do {
                  func_0x000107c2827c(&lStack_90,*(ulong *)(*puVar15 + 0x30) & 0xfffffffffffffffc,
                                      *(ulong *)(*puVar15 + 0x30) & 0xfffffffffffffffc);
                  lVar12 = lVar12 + -8;
                  puVar15 = puVar15 + 1;
                } while (lVar12 != 0);
              }
              plVar1 = param_1 + 0x29;
              plVar7 = &lStack_90;
              FUN_10a513e58(plVar7,plVar1);
              if ((((ulong)plVar7 & 1) == 0) &&
                 (FUN_10a7e3e7c(param_1[0x25],lVar4,&lStack_90), plVar1 != &lStack_90)) {
                *(undefined4 *)(param_1 + 0x2d) = uStack_70;
                func_0x00010729c334(plVar1,uStack_80,0);
              }
              uStack_a0 = 0x3f3504f3;
              uVar18 = 0x35;
              uVar17 = 4;
              uVar16 = 0xf3;
              if ((int)param_1[0x24] != 1) {
                uStack_a0 = 0;
                uVar16 = 0;
                uVar17 = 0;
                uVar18 = 0x80;
              }
              uStack_9c = 0;
              uStack_98 = 0;
              uStack_94 = CONCAT13(0x3f,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)));
              FUN_10a7e4114(param_1[0x25],uVar10,lVar4,&uStack_a0);
              *(undefined4 *)((long)param_1 + 0x74) = 2;
              func_0x000107c2826c(&lStack_90);
            }
            break;
          }
          puVar15 = puVar15 + 1;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
    }
  }
  (**(code **)(*param_1 + 0xa0))(param_1);
  return;
}



/* Entry: 10a7e3e7c; end: 10a7e4113;  */

void FUN_10a7e3e7c(undefined8 param_1,long param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar14 = (ulong *)(param_2 + 0x98);
  puVar13 = puVar14;
  if ((*puVar14 & 1) != 0) {
    puVar13 = (ulong *)(*puVar14 + 7);
  }
  if (*(int *)(param_2 + 0xa0) == 0) {
    lVar12 = 0;
  }
  else {
    iVar15 = 0;
    puVar1 = puVar13 + *(int *)(param_2 + 0xa0);
    do {
      uVar17 = *puVar13;
      lVar12 = param_3;
      func_0x0001067e045c(param_3,*(ulong *)(uVar17 + 0x30) & 0xfffffffffffffffc);
      if (lVar12 != 0) {
        uVar10 = *(ulong *)(uVar17 + 0x18);
        puVar11 = (ulong *)(uVar17 + 0x18);
        if ((uVar10 & 1) != 0) {
          puVar11 = (ulong *)(uVar10 + 7);
        }
        if (*(int *)(uVar17 + 0x20) != 0) {
          lVar12 = (long)*(int *)(uVar17 + 0x20) << 3;
          do {
            ppuVar3 = &PTR_PTR_1132d7ff8;
            if (*(undefined ***)(*puVar11 + 0x28) != (undefined **)0x0) {
              ppuVar3 = *(undefined ***)(*puVar11 + 0x28);
            }
            iVar15 = (*(int *)((long)ppuVar3 + 0x1c) - *(int *)(ppuVar3 + 3)) + iVar15;
            lVar12 = lVar12 + -8;
            puVar11 = puVar11 + 1;
          } while (lVar12 != 0);
        }
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar1);
    lVar12 = (long)(iVar15 * 3);
  }
  FUN_10ab4cb54(param_1,lVar12);
  FUN_10ab4ccac(auStack_b0,param_1);
  if ((*(ulong *)(param_2 + 0x98) & 1) != 0) {
    puVar14 = (ulong *)(*(ulong *)(param_2 + 0x98) + 7);
  }
  if (*(int *)(param_2 + 0xa0) != 0) {
    iVar15 = 0;
    puVar1 = puVar14 + *(int *)(param_2 + 0xa0);
    puVar13 = (ulong *)(param_2 + 0x48);
    do {
      uVar17 = *puVar14;
      lVar12 = param_3;
      func_0x0001067e045c(param_3,*(ulong *)(uVar17 + 0x30) & 0xfffffffffffffffc);
      if (lVar12 != 0) {
        uVar10 = *(ulong *)(uVar17 + 0x18);
        puVar11 = (ulong *)(uVar17 + 0x18);
        if ((uVar10 & 1) != 0) {
          puVar11 = (ulong *)(uVar10 + 7);
        }
        if (*(int *)(uVar17 + 0x20) != 0) {
          puVar2 = puVar11 + *(int *)(uVar17 + 0x20);
          do {
            ppuVar3 = &PTR_PTR_1132d7ff8;
            if (*(undefined ***)(*puVar11 + 0x28) != (undefined **)0x0) {
              ppuVar3 = *(undefined ***)(*puVar11 + 0x28);
            }
            iVar5 = *(int *)(ppuVar3 + 3);
            iVar6 = *(int *)((long)ppuVar3 + 0x1c);
            iVar9 = iVar15;
            if (iVar5 < iVar6) {
              iVar8 = iVar15 - iVar5;
              iVar16 = iVar6 - iVar5;
              lVar12 = (long)iVar5 * 8;
              do {
                lVar12 = lVar12 + 8;
                puVar4 = puVar13;
                if ((*puVar13 & 1) != 0) {
                  puVar4 = (ulong *)(*puVar13 + lVar12 + -1);
                }
                uVar7 = *(undefined4 *)(*puVar4 + 0x18);
                FUN_10ab4e710(auStack_90,auStack_b0,iVar15);
                FUN_10ab4e794(auStack_78,auStack_90,0);
                FUN_10a557ab0(auStack_78,uVar7);
                puVar4 = puVar13;
                if ((*puVar13 & 1) != 0) {
                  puVar4 = (ulong *)(*puVar13 + lVar12 + -1);
                }
                uVar7 = *(undefined4 *)(*puVar4 + 0x1c);
                FUN_10ab4e710(auStack_90,auStack_b0,iVar15);
                FUN_10ab4e794(auStack_78,auStack_90,1);
                FUN_10a557ab0(auStack_78,uVar7);
                puVar4 = puVar13;
                if ((*puVar13 & 1) != 0) {
                  puVar4 = (ulong *)(*puVar13 + lVar12 + -1);
                }
                uVar7 = *(undefined4 *)(*puVar4 + 0x20);
                FUN_10ab4e710(auStack_90,auStack_b0,iVar15);
                FUN_10ab4e794(auStack_78,auStack_90,2);
                FUN_10a557ab0(auStack_78,uVar7);
                iVar15 = iVar15 + 1;
                iVar16 = iVar16 + -1;
                iVar9 = iVar8 + iVar6;
              } while (iVar16 != 0);
            }
            iVar15 = iVar9;
            puVar11 = puVar11 + 1;
          } while (puVar11 != puVar2);
        }
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar1);
  }
  return;
}



/* Entry: 10a7e4114; end: 10a7e4deb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a7e4114(long param_1,long param_2,long param_3,float *param_4)

{
  undefined **ppuVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int **ppiVar11;
  int **ppiVar12;
  code *pcVar13;
  bool bVar14;
  undefined8 *******pppppppuVar15;
  int *piVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined1 uVar19;
  int iVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  int *piVar24;
  undefined8 *puVar25;
  ulong *puVar26;
  ulong uVar27;
  int *piVar28;
  ulong uVar29;
  undefined4 *puVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  undefined4 *puVar35;
  float *pfVar36;
  float *pfVar37;
  ulong *puVar38;
  ulong uVar39;
  undefined8 *******pppppppuVar40;
  undefined8 *puVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  undefined8 *******pppppppuVar44;
  long *plVar45;
  long *plVar46;
  ulong uVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  float fVar55;
  long lStack_230;
  uint *puStack_210;
  uint *puStack_208;
  float fStack_1f8;
  float fStack_1f4;
  int *piStack_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *******pppppppuStack_198;
  undefined8 *******pppppppuStack_190;
  undefined8 *******pppppppuStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  int **ppiStack_168;
  int **ppiStack_160;
  undefined1 auStack_128 [8];
  float fStack_120;
  undefined8 uStack_118;
  float fStack_110;
  undefined8 uStack_108;
  float fStack_100;
  undefined8 uStack_f8;
  float fStack_f0;
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [8];
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  ulong uStack_88;
  undefined8 **appuStack_80 [2];
  
  lVar21 = 0;
  uStack_dc = 0;
  ppuVar1 = &PTR_PTR_1132d6de0;
  if (*(undefined ***)(param_2 + 0xd0) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0xd0);
  }
  auStack_e4 = (undefined1  [8])0x0;
  auStack_e8 = (undefined1  [4])0x3f800000;
  uStack_d4 = 0x3f800000;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0x3f800000;
  uStack_ac = 0x3f800000;
  puVar30 = (undefined4 *)ppuVar1[10];
  do {
    lVar31 = 0;
    lVar33 = 0;
    puVar35 = puVar30;
    do {
      puVar22 = (undefined8 *)((long)auStack_e4 + lVar33 * 0x10 + 4);
      if ((int)lVar21 != 2) {
        puVar22 = (undefined8 *)((long)auStack_e8 + lVar31);
      }
      puVar41 = (undefined8 *)((long)auStack_e4 + lVar33 * 2 * 8);
      if ((int)lVar21 != 1) {
        puVar41 = puVar22;
      }
      *(undefined4 *)puVar41 = *puVar35;
      lVar33 = lVar33 + 1;
      lVar31 = lVar31 + 0x10;
      puVar35 = puVar35 + 1;
    } while (lVar31 != 0x30);
    lVar21 = lVar21 + 1;
    puVar30 = puVar30 + 3;
  } while (lVar21 != 3);
  uStack_b0 = *(undefined4 *)((long)ppuVar1[8] + 8);
  uStack_b8 = *(undefined8 *)ppuVar1[8];
  fVar48 = *param_4;
  fVar49 = param_4[1];
  fVar51 = param_4[2];
  fVar52 = param_4[3];
  fStack_1f8 = (fVar49 * fVar49 + fVar51 * fVar51) * -2.0 + 1.0;
  fStack_1f4 = fVar48 * fVar49 + fVar51 * fVar52;
  fStack_1f4 = fStack_1f4 + fStack_1f4;
  fVar55 = fVar48 * fVar51 - fVar49 * fVar52;
  fStack_1e8 = fVar48 * fVar49 - fVar51 * fVar52;
  fStack_1e8 = fStack_1e8 + fStack_1e8;
  fStack_1e4 = (fVar48 * fVar48 + fVar51 * fVar51) * -2.0 + 1.0;
  fStack_1e0 = fVar49 * fVar51 + fVar48 * fVar52;
  fStack_1e0 = fStack_1e0 + fStack_1e0;
  fStack_1d8 = fVar48 * fVar51 + fVar49 * fVar52;
  fStack_1d8 = fStack_1d8 + fStack_1d8;
  fStack_1d4 = fVar49 * fVar51 - fVar48 * fVar52;
  fStack_1d4 = fStack_1d4 + fStack_1d4;
  piStack_1f0 = (int *)(ulong)(uint)(fVar55 + fVar55);
  uStack_1dc = 0;
  fStack_1d0 = (fVar48 * fVar48 + fVar49 * fVar49) * -2.0 + 1.0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1bc = 0x3f800000;
  func_0x0001094f5708(&ppiStack_168,auStack_e8);
  func_0x000109519fd0(auStack_128,&fStack_1f8,&ppiStack_168);
  FUN_10a1322a0(&puStack_180,(long)*(int *)(param_2 + 0x38));
  puVar38 = (ulong *)(param_2 + 0x30);
  puVar26 = puVar38;
  if ((*puVar38 & 1) != 0) {
    puVar26 = (ulong *)(*puVar38 + 7);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    lVar21 = (long)*(int *)(param_2 + 0x38) << 3;
    puVar22 = puStack_180;
    do {
      uVar32 = *puVar26;
      fVar48 = *(float *)(uVar32 + 0x18);
      fVar49 = *(float *)(uVar32 + 0x1c);
      fVar51 = *(float *)(uVar32 + 0x20);
      *puVar22 = CONCAT44(auStack_128._4_4_ * fVar48 + (float)((ulong)uStack_118 >> 0x20) * fVar49 +
                          (float)((ulong)uStack_108 >> 0x20) * fVar51 +
                          (float)((ulong)uStack_f8 >> 0x20),
                          auStack_128._0_4_ * fVar48 + (float)uStack_118 * fVar49 +
                          (float)uStack_108 * fVar51 + (float)uStack_f8);
      *(float *)(puVar22 + 1) =
           fVar48 * fStack_120 + fVar49 * fStack_110 + fVar51 * fStack_100 + fStack_f0;
      puVar22 = (undefined8 *)((long)puVar22 + 0xc);
      lVar21 = lVar21 + -8;
      puVar26 = puVar26 + 1;
    } while (lVar21 != 0);
  }
  pppppppuStack_198 = (undefined8 *******)0x0;
  pppppppuStack_190 = (undefined8 *******)0x0;
  pppppppuStack_188 = (undefined8 *******)0x0;
  func_0x000107458bb4(&pppppppuStack_198,
                      ((long)puStack_178 - (long)puStack_180 >> 2) * -0x5555555555555555);
  if (puStack_178 != puStack_180) {
    uVar32 = 0;
    do {
      uVar53 = *(undefined4 *)(*(long *)(param_3 + 0x80) + uVar32 * 4);
      uVar54 = *(undefined4 *)(*(long *)(param_3 + 0x90) + uVar32 * 4);
      if (pppppppuStack_190 < pppppppuStack_188) {
        pppppppuVar44 = pppppppuStack_190 + 1;
        *(undefined4 *)pppppppuStack_190 = uVar53;
        *(undefined4 *)((long)pppppppuStack_190 + 4) = uVar54;
      }
      else {
        lVar21 = (long)pppppppuStack_190 - (long)pppppppuStack_198;
        uVar23 = (lVar21 >> 3) + 1;
        if (uVar23 >> 0x3d != 0) {
          FUN_10a050828();
          goto LAB_10a7e4cf0;
        }
        uVar27 = (long)pppppppuStack_188 - (long)pppppppuStack_198 >> 2;
        if (uVar27 <= uVar23) {
          uVar27 = uVar23;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppppuStack_188 - (long)pppppppuStack_198)) {
          uVar27 = 0x1fffffffffffffff;
        }
        pppppppuVar15 = &pppppppuStack_198;
        FUN_10a05083c();
        puVar30 = (undefined4 *)((long)pppppppuVar15 + lVar21);
        *puVar30 = uVar53;
        puVar30[1] = uVar54;
        pppppppuVar44 = (undefined8 *******)(puVar30 + 2);
        pppppppuVar40 =
             (undefined8 *******)
             ((long)puVar30 - ((long)pppppppuStack_190 - (long)pppppppuStack_198));
        _memcpy(pppppppuVar40);
        bVar14 = pppppppuStack_198 != (undefined8 *******)0x0;
        pppppppuStack_198 = pppppppuVar40;
        pppppppuStack_188 = pppppppuVar15 + uVar27;
        if (bVar14) {
          pppppppuStack_190 = pppppppuVar44;
          __ZdlPv();
        }
      }
      uVar32 = uVar32 + 1;
      uVar23 = ((long)puStack_178 - (long)puStack_180 >> 2) * -0x5555555555555555;
      pppppppuStack_190 = pppppppuVar44;
    } while (uVar32 <= uVar23 && uVar23 - uVar32 != 0);
  }
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  func_0x000104becb10(&lStack_1b0,(long)*(int *)(param_2 + 0x38));
  if ((*(ulong *)(param_2 + 0x30) & 1) != 0) {
    puVar38 = (ulong *)(*(ulong *)(param_2 + 0x30) + 7);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    lVar21 = (long)*(int *)(param_2 + 0x38) << 3;
    do {
      if ((*(byte *)(*puVar38 + 0x10) >> 4 & 1) == 0) {
        uVar19 = 1;
      }
      else {
        uVar19 = *(undefined1 *)(*puVar38 + 0x28);
      }
      fStack_1f8 = (float)(CONCAT31(fStack_1f8._1_3_,uVar19) & 0xffffff01);
      func_0x0001078db3d4(&lStack_1b0,&fStack_1f8);
      puVar38 = puVar38 + 1;
      lVar21 = lVar21 + -8;
    } while (lVar21 != 0);
  }
  FUN_10a7e2c24(&fStack_1f8);
  *(float *)(param_1 + 0xf0) = fStack_1f8;
  if ((float *)(param_1 + 0xf0) != &fStack_1f8) {
    FUN_10a1903c4(param_1 + 0xf8,piStack_1f0,CONCAT44(fStack_1e4,fStack_1e8),
                  (CONCAT44(fStack_1e4,fStack_1e8) - (long)piStack_1f0 >> 3) * 0x6db6db6db6db6db7);
  }
  *(ulong *)(param_1 + 0x118) = CONCAT44(uStack_1cc,fStack_1d0);
  *(ulong *)(param_1 + 0x110) = CONCAT44(fStack_1d4,fStack_1d8);
  *(ulong *)(param_1 + 0x128) = CONCAT44(uStack_1bc,uStack_1c0);
  *(ulong *)(param_1 + 0x120) = CONCAT44(uStack_1c4,uStack_1c8);
  *(undefined8 *)(param_1 + 0x130) = uStack_1b8;
  ppiStack_168 = &piStack_1f0;
  func_0x00010a190844(&ppiStack_168);
  puVar22 = puStack_180;
  puVar3 = *(ushort **)(param_1 + 0x28);
  puVar4 = *(ushort **)(param_1 + 0x30);
  bVar14 = *(int *)(param_1 + 0xe8) != 0;
  uVar32 = 0;
  if (bVar14 && puVar4 != puVar3) {
    uVar32 = (ulong)((long)puVar4 - (long)puVar3) >> 1;
  }
  FUN_109ffe1f4(&puStack_210,uVar32);
  pppppppuVar44 = pppppppuStack_190;
  pppppppuVar15 = pppppppuStack_198;
  puVar10 = puStack_208;
  puVar9 = puStack_210;
  uVar23 = ((long)puStack_178 - (long)puVar22 >> 2) * -0x5555555555555555;
  puVar2 = (ushort *)0x0;
  if (bVar14 && puVar4 != puVar3) {
    puVar2 = puVar3;
  }
  uVar27 = uVar32 << 1;
  puVar8 = puStack_210;
  while (uVar32 != 0) {
    *puVar8 = (uint)*puVar2;
    uVar27 = uVar27 - 2;
    puVar2 = puVar2 + 1;
    puVar8 = puVar8 + 1;
    uVar32 = uVar27;
  }
  FUN_10a1322a0(&ppiStack_168,uVar23);
  ppiVar12 = ppiStack_160;
  ppiVar11 = ppiStack_168;
  puStack_90 = puVar22;
  uStack_88 = uVar23;
  FUN_109ffe1f4(&fStack_1f8,uVar23);
  piVar16 = (int *)CONCAT44(fStack_1f4,fStack_1f8);
  if (piVar16 != piStack_1f0) {
    iVar20 = 0;
    piVar24 = piVar16;
    do {
      piVar28 = piVar24 + 1;
      *piVar24 = iVar20;
      iVar20 = iVar20 + 1;
      piVar24 = piVar28;
    } while (piVar28 != piStack_1f0);
  }
  appuStack_80[0] = &puStack_90;
  lVar21 = 0;
  if (piStack_1f0 != piVar16) {
    lVar21 = LZCOUNT((long)piStack_1f0 - (long)piVar16 >> 2) * -2 + 0x7e;
  }
  FUN_10a7fea54(piVar16,piStack_1f0,appuStack_80,lVar21,1);
  uStack_a0._0_4_ = 0;
  uStack_a0._4_4_ = 0;
  uStack_98 = (long *)0x0;
  lStack_a8 = 0;
  piVar16 = (int *)CONCAT44(fStack_1f4,fStack_1f8);
  plVar45 = (long *)0x0;
  lVar21 = (long)piStack_1f0 - (long)piVar16;
  if (lVar21 != 0) {
    piVar24 = piStack_1f0;
    uVar32 = 0;
    uStack_98 = (long *)0x0;
    do {
      uVar27 = uVar32 + 1;
      if (uVar27 < (ulong)(lVar21 >> 2)) {
        iVar20 = piVar16[uVar32];
        pfVar36 = (float *)((long)puStack_90 + (long)iVar20 * 0xc);
        uVar32 = uVar27;
        do {
          iVar5 = piVar16[uVar32];
          if ((uStack_88 <= (ulong)(long)iVar5) || (uStack_88 <= (ulong)(long)iVar20))
          goto LAB_10a7e4cf0;
          pfVar37 = (float *)((long)puStack_90 + (long)iVar5 * 0xc);
          if (0.001 <= *pfVar37 - *pfVar36) break;
          if (((ABS(*pfVar36 - *pfVar37) < 0.001) && (ABS(pfVar36[1] - pfVar37[1]) < 0.001)) &&
             (ABS(pfVar36[2] - pfVar37[2]) < 0.001)) {
            if (plVar45 < uStack_98) {
              plVar46 = plVar45 + 1;
              *(int *)plVar45 = iVar20;
              *(int *)((long)plVar45 + 4) = iVar5;
            }
            else {
              lVar21 = (long)plVar45 - lStack_a8;
              uVar32 = (lVar21 >> 3) + 1;
              if (uVar32 >> 0x3d != 0) {
                FUN_10a050dc0();
                goto LAB_10a7e4cf0;
              }
              uVar39 = (long)uStack_98 - lStack_a8 >> 2;
              if (uVar39 <= uVar32) {
                uVar39 = uVar32;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)uStack_98 - lStack_a8)) {
                uVar39 = 0x1fffffffffffffff;
              }
              plVar45 = &lStack_a8;
              FUN_10a050dd4();
              lVar33 = lStack_a8;
              lVar31 = CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0) - lStack_a8;
              piVar16 = (int *)((long)plVar45 + lVar21);
              *piVar16 = iVar20;
              piVar16[1] = iVar5;
              plVar46 = (long *)(piVar16 + 2);
              lVar31 = (long)piVar16 - lVar31;
              _memcpy(lVar31,lVar33);
              bVar14 = lStack_a8 != 0;
              lStack_a8 = lVar31;
              uStack_98 = plVar45 + uVar39;
              if (bVar14) {
                uStack_a0 = plVar46;
                __ZdlPv();
              }
            }
            uStack_a0._0_4_ = SUB84(plVar46,0);
            uStack_a0._4_4_ = (undefined4)((ulong)plVar46 >> 0x20);
            piVar16 = (int *)CONCAT44(fStack_1f4,fStack_1f8);
            piVar24 = piStack_1f0;
            plVar45 = plVar46;
            break;
          }
          uVar32 = uVar32 + 1;
        } while (lVar21 >> 2 != uVar32);
      }
      lVar21 = (long)piVar24 - (long)piVar16;
      uVar32 = uVar27;
    } while (uVar27 < (ulong)(lVar21 >> 2));
  }
  uVar32 = (ulong)((long)puVar10 - (long)puVar9) >> 2 & 0xffffffff;
  if (piVar16 != (int *)0x0) {
    piStack_1f0 = piVar16;
    __ZdlPv();
    plVar45 = (long *)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
  }
  func_0x000109699628((int)((ulong)((long)ppiVar12 - (long)ppiVar11) >> 2) * -0x55555555,ppiVar11,
                      uVar32,puVar9,uVar23 & 0xffffffff,puVar22,
                      (ulong)((long)plVar45 - lStack_a8) >> 3 & 0xffffffff);
  if (lStack_a8 != 0) {
    uStack_a0._0_4_ = (undefined4)lStack_a8;
    uStack_a0._4_4_ = (undefined4)((ulong)lStack_a8 >> 0x20);
    __ZdlPv();
  }
  FUN_10a5e3a78(&fStack_1f8,uVar23);
  func_0x000109699804((ulong)((long)piStack_1f0 - CONCAT44(fStack_1f4,fStack_1f8)) >> 4 & 0xffffffff
                      ,CONCAT44(fStack_1f4,fStack_1f8),uVar32,puVar9,uVar23 & 0xffffffff,puVar22,
                      (int)((ulong)((long)ppiStack_160 - (long)ppiStack_168) >> 2) * -0x55555555,
                      ppiStack_168,
                      (ulong)((long)pppppppuVar44 - (long)pppppppuVar15) >> 3 & 0xffffffff,
                      pppppppuVar15);
  FUN_10ab4a154(param_1,uVar23);
  FUN_10ab6e728();
  lVar21 = *(long *)(param_1 + 0xf8);
  lVar33 = lVar21;
  for (; (lVar21 != *(long *)(param_1 + 0x100) &&
         (lVar33 = lVar21, *(long *)(lVar21 + 0x18) != lRam00000001138356d8));
      lVar21 = lVar21 + 0x38) {
    lVar33 = *(long *)(param_1 + 0x100);
  }
  uVar6 = *(int *)(lVar33 + 0x24) - 1;
  if (uVar6 < 7) {
    iVar20 = *(int *)(&UNK_10e4dcfd0 + (ulong)uVar6 * 4);
  }
  else {
    iVar20 = 0;
  }
  if (*(int *)(lVar33 + 0x28) * iVar20 == 0xc) {
    puVar41 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(lVar33 + 0x30));
    uVar32 = (ulong)*(uint *)(param_1 + 0xf0);
  }
  else {
    puVar41 = (undefined8 *)0x0;
    uVar32 = 0;
  }
  FUN_10ab6e9d8();
  lVar21 = *(long *)(param_1 + 0xf8);
  lVar33 = lVar21;
  for (; (lVar21 != *(long *)(param_1 + 0x100) &&
         (lVar33 = lVar21, *(long *)(lVar21 + 0x18) != lRam0000000113835758));
      lVar21 = lVar21 + 0x38) {
    lVar33 = *(long *)(param_1 + 0x100);
  }
  uVar6 = *(int *)(lVar33 + 0x24) - 1;
  if (uVar6 < 7) {
    iVar20 = *(int *)(&UNK_10e4dcfd0 + (ulong)uVar6 * 4);
  }
  else {
    iVar20 = 0;
  }
  if (*(int *)(lVar33 + 0x28) * iVar20 == 0xc) {
    puVar43 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(lVar33 + 0x30));
    uVar27 = (ulong)*(uint *)(param_1 + 0xf0);
  }
  else {
    puVar43 = (undefined8 *)0x0;
    uVar27 = 0;
  }
  FUN_10ab6eb18();
  lVar21 = *(long *)(param_1 + 0xf8);
  lVar33 = lVar21;
  for (; (lVar21 != *(long *)(param_1 + 0x100) &&
         (lVar33 = lVar21, *(long *)(lVar21 + 0x18) != lRam0000000113835798));
      lVar21 = lVar21 + 0x38) {
    lVar33 = *(long *)(param_1 + 0x100);
  }
  uVar6 = *(int *)(lVar33 + 0x24) - 1;
  if (uVar6 < 7) {
    iVar20 = *(int *)(&UNK_10e4dcfd0 + (ulong)uVar6 * 4);
  }
  else {
    iVar20 = 0;
  }
  if (*(int *)(lVar33 + 0x28) * iVar20 == 0x10) {
    puVar42 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(lVar33 + 0x30));
    uVar39 = (ulong)*(uint *)(param_1 + 0xf0);
  }
  else {
    puVar42 = (undefined8 *)0x0;
    uVar39 = 0;
  }
  FUN_10ab6ec58();
  lVar21 = *(long *)(param_1 + 0xf8);
  lVar33 = lVar21;
  for (; (lVar21 != *(long *)(param_1 + 0x100) &&
         (lVar33 = lVar21, *(long *)(lVar21 + 0x18) != lRam00000001138357d8));
      lVar21 = lVar21 + 0x38) {
    lVar33 = *(long *)(param_1 + 0x100);
  }
  uVar6 = *(int *)(lVar33 + 0x24) - 1;
  if (uVar6 < 7) {
    iVar20 = *(int *)(&UNK_10e4dcfd0 + (ulong)uVar6 * 4);
  }
  else {
    iVar20 = 0;
  }
  if (*(int *)(lVar33 + 0x28) * iVar20 == 0x10) {
    lStack_230 = *(long *)(param_1 + 0x10) + (ulong)*(uint *)(lVar33 + 0x30);
    uVar47 = (ulong)*(uint *)(param_1 + 0xf0);
  }
  else {
    lStack_230 = 0;
    uVar47 = 0;
  }
  FUN_10ab6f020();
  lVar21 = *(long *)(param_1 + 0xf8);
  lVar33 = lVar21;
  for (; (lVar21 != *(long *)(param_1 + 0x100) &&
         (lVar33 = lVar21, *(long *)(lVar21 + 0x18) != lRam0000000113835898));
      lVar21 = lVar21 + 0x38) {
    lVar33 = *(long *)(param_1 + 0x100);
  }
  uVar6 = *(int *)(lVar33 + 0x24) - 1;
  if (uVar6 < 7) {
    iVar20 = *(int *)(&UNK_10e4dcfd0 + (ulong)uVar6 * 4);
  }
  else {
    iVar20 = 0;
  }
  if (*(int *)(lVar33 + 0x28) * iVar20 == 8) {
    puVar25 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(lVar33 + 0x30));
    uVar29 = (ulong)*(uint *)(param_1 + 0xf0);
  }
  else {
    puVar25 = (undefined8 *)0x0;
    uVar29 = 0;
  }
  if (puStack_178 != puVar22) {
    lVar33 = 0;
    lVar21 = 0;
    uVar34 = 0;
    puVar30 = (undefined4 *)(lStack_230 + 0xc);
    uVar50 = NEON_fmov(0x3f800000,4);
    do {
      uVar17 = *(undefined8 *)((long)puVar22 + lVar33);
      *(undefined4 *)(puVar41 + 1) = *(undefined4 *)((undefined8 *)((long)puVar22 + lVar33) + 1);
      *puVar41 = uVar17;
      uVar18 = ((long)ppiStack_160 - (long)ppiStack_168 >> 2) * -0x5555555555555555;
      if (uVar18 < uVar34 || uVar18 - uVar34 == 0) {
LAB_10a7e4cf0:
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10a7e4cf4);
        (*pcVar13)();
      }
      uVar17 = *(undefined8 *)((long)ppiStack_168 + lVar33);
      *(undefined4 *)(puVar43 + 1) =
           *(undefined4 *)((undefined8 *)((long)ppiStack_168 + lVar33) + 1);
      *puVar43 = uVar17;
      if ((ulong)((long)piStack_1f0 - CONCAT44(fStack_1f4,fStack_1f8) >> 4) <= uVar34)
      goto LAB_10a7e4cf0;
      puVar7 = (undefined8 *)(CONCAT44(fStack_1f4,fStack_1f8) + lVar21);
      uVar17 = *puVar7;
      puVar42[1] = puVar7[1];
      *puVar42 = uVar17;
      if (uStack_1a8 <= uVar34) goto LAB_10a7e4cf0;
      uVar18 = *(ulong *)(lStack_1b0 + (uVar34 >> 6) * 8);
      *(undefined8 *)(puVar30 + -3) = uVar50;
      uVar53 = 0;
      if ((uVar18 >> (uVar34 & 0x3f) & 1) != 0) {
        uVar53 = 0x3f800000;
      }
      puVar30[-1] = 0x3f800000;
      *puVar30 = uVar53;
      if ((long)pppppppuVar44 - (long)pppppppuVar15 >> 3 == uVar34) goto LAB_10a7e4cf0;
      pppppppuVar40 = pppppppuVar15 + uVar34;
      uVar34 = uVar34 + 1;
      *puVar25 = *pppppppuVar40;
      puVar25 = (undefined8 *)((long)puVar25 + uVar29);
      puVar30 = (undefined4 *)((long)puVar30 + uVar47);
      lVar21 = lVar21 + 0x10;
      puVar42 = (undefined8 *)((long)puVar42 + uVar39);
      lVar33 = lVar33 + 0xc;
      puVar43 = (undefined8 *)((long)puVar43 + uVar27);
      puVar41 = (undefined8 *)((long)puVar41 + uVar32);
    } while (uVar23 - uVar34 != 0);
  }
  func_0x00010a008f4c(&lStack_a8,puVar22,uVar23);
  *(long *)(param_1 + 0x144) = lStack_a8;
  *(undefined4 *)(param_1 + 0x14c) = (undefined4)uStack_a0;
  *(ulong *)(param_1 + 0x138) = CONCAT44((undefined4)uStack_98,uStack_a0._4_4_);
  *(undefined4 *)(param_1 + 0x140) = uStack_98._4_4_;
  if ((int *)CONCAT44(fStack_1f4,fStack_1f8) != (int *)0x0) {
    piStack_1f0 = (int *)CONCAT44(fStack_1f4,fStack_1f8);
    __ZdlPv();
  }
  if (ppiStack_168 != (int **)0x0) {
    ppiStack_160 = ppiStack_168;
    __ZdlPv();
  }
  if (puStack_210 != (uint *)0x0) {
    puStack_208 = puStack_210;
    __ZdlPv();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  if (pppppppuStack_198 != (undefined8 *******)0x0) {
    pppppppuStack_190 = pppppppuStack_198;
    __ZdlPv();
  }
  if (puStack_180 != (undefined8 *)0x0) {
    puStack_178 = puStack_180;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a7e4dec; end: 10a7e4df3;  */

void FUN_10a7e4dec(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong *puVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  *(undefined4 *)(param_1 + -0x74) = 0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x108);
  plVar1 = *(long **)(*(long *)(param_1 + 0x28) + 0x110);
  if (plVar1 != (long *)0x0) {
    plVar7 = plVar1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_90 = lVar4;
  plStack_88 = plVar1;
  FUN_10a7e2764(lVar4,*(undefined4 *)(param_1 + 0x38));
  if (plVar1 != (long *)0x0) {
    plVar7 = plVar1 + 1;
    do {
      lVar12 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (lVar4 != 0) {
    lVar12 = *(long *)(param_2 + 0x78);
    func_0x00010aacfd38(lVar12,&UNK_10f570f7f,4,*(undefined4 *)(*(long *)(param_1 + 0x28) + 0xe0));
    if (lVar12 != 0) {
      puVar9 = (undefined8 *)(*(ulong *)(lVar4 + 200) & 0xfffffffffffffffc);
      puVar14 = (undefined *)(long)*(char *)((long)puVar9 + 0x17);
      if ((long)puVar14 < 0) {
        puVar14 = (undefined *)puVar9[1];
        puVar9 = (undefined8 *)*puVar9;
      }
      uVar10 = *(ulong *)(lVar12 + 0x48);
      puVar15 = (ulong *)(lVar12 + 0x48);
      if ((uVar10 & 1) != 0) {
        puVar15 = (ulong *)(uVar10 + 7);
      }
      if (*(int *)(lVar12 + 0x50) != 0) {
        lVar12 = (long)*(int *)(lVar12 + 0x50) << 3;
        do {
          uVar10 = *puVar15;
          if ((*(ulong *)(uVar10 + 0xb0) & 3) == 0) {
            ppuVar6 = ppuRam00000001132d06b0;
            if (ppuRam00000001132d06b0 == (undefined **)0x0) {
              ppuVar6 = &PTR_DAT_1132d0698;
              func_0x00010b4befb0();
            }
          }
          else {
            ppuVar6 = (undefined **)(*(ulong *)(uVar10 + 0xb0) & 0xfffffffffffffffc);
          }
          puVar11 = (undefined *)(long)*(char *)((long)ppuVar6 + 0x17);
          ppuVar8 = ppuVar6;
          if ((long)puVar11 < 0) {
            ppuVar8 = (undefined **)*ppuVar6;
            puVar11 = ppuVar6[1];
          }
          if ((puVar14 == puVar11) &&
             (puVar5 = puVar9, _memcmp(puVar9,ppuVar8,puVar14), (int)puVar5 == 0)) {
            if ((*(int *)(uVar10 + 0x38) != 0) && ((*(byte *)(uVar10 + 0x10) >> 4 & 1) != 0)) {
              plStack_88 = (long *)0x0;
              lStack_90 = 0;
              uStack_78 = 0;
              uStack_80 = 0;
              uStack_70 = 0x3f800000;
              uVar13 = *(ulong *)(lVar4 + 0x98);
              puVar15 = (ulong *)(lVar4 + 0x98);
              if ((uVar13 & 1) != 0) {
                puVar15 = (ulong *)(uVar13 + 7);
              }
              if (*(int *)(lVar4 + 0xa0) != 0) {
                lVar12 = (long)*(int *)(lVar4 + 0xa0) << 3;
                do {
                  func_0x000107c2827c(&lStack_90,*(ulong *)(*puVar15 + 0x30) & 0xfffffffffffffffc,
                                      *(ulong *)(*puVar15 + 0x30) & 0xfffffffffffffffc);
                  lVar12 = lVar12 + -8;
                  puVar15 = puVar15 + 1;
                } while (lVar12 != 0);
              }
              plVar1 = (long *)(param_1 + 0x60);
              plVar7 = &lStack_90;
              FUN_10a513e58(plVar7,plVar1);
              if ((((ulong)plVar7 & 1) == 0) &&
                 (FUN_10a7e3e7c(*(undefined8 *)(param_1 + 0x40),lVar4,&lStack_90),
                 plVar1 != &lStack_90)) {
                *(undefined4 *)(param_1 + 0x80) = uStack_70;
                func_0x00010729c334(plVar1,uStack_80,0);
              }
              uStack_a0 = 0x3f3504f3;
              uVar18 = 0x35;
              uVar17 = 4;
              uVar16 = 0xf3;
              if (*(int *)(param_1 + 0x38) != 1) {
                uStack_a0 = 0;
                uVar16 = 0;
                uVar17 = 0;
                uVar18 = 0x80;
              }
              uStack_9c = 0;
              uStack_98 = 0;
              uStack_94 = CONCAT13(0x3f,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)));
              FUN_10a7e4114(*(undefined8 *)(param_1 + 0x40),uVar10,lVar4,&uStack_a0);
              *(undefined4 *)(param_1 + -0x74) = 2;
              func_0x000107c2826c(&lStack_90);
            }
            break;
          }
          puVar15 = puVar15 + 1;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
    }
  }
  (**(code **)(*(long *)(param_1 + -0xe8) + 0xa0))((long *)(param_1 + -0xe8));
  return;
}



/* Entry: 10a7e4df4; end: 10a7e4e1f;  */

void FUN_10a7e4df4(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_50;
  long *plStack_48;
  
  FUN_10a7e1f90(*(long *)(param_1 + 0x110) + 0xf8);
  lVar6 = *(long *)(param_1 + 0x110);
  FUN_10a7e20bc(lVar6 + 0xf8);
  FUN_10a7e2370(lVar6 + 0xf8,0);
  FUN_10a7e2370(lVar6 + 0xf8,1);
  lStack_50 = *(long *)(lVar6 + 0x108);
  plVar2 = *(long **)(lVar6 + 0x110);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(param_1 + 0x138) == lStack_50) {
      return;
    }
    plStack_48 = (long *)0x0;
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
    lVar7 = *(long *)(param_1 + 0x138);
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
    if (lVar7 == lStack_50) {
      return;
    }
    plStack_48 = *(long **)(lVar6 + 0x110);
    lStack_50 = *(long *)(lVar6 + 0x108);
    if (*(long *)(lVar6 + 0x110) != 0) {
      plVar2 = (long *)(*(long *)(lVar6 + 0x110) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  FUN_10a009fa8(param_1 + 0x138,&lStack_50);
  plVar2 = plStack_48;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  func_0x000107c283f4(param_1 + 0x148);
  return;
}



/* Entry: 10a7e4e20; end: 10a7e4e27;  */

void FUN_10a7e4e20(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_10a7f82b8();
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_10a009fa8(param_1 + 0x108,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  FUN_10a7e20bc(param_1 + 0xf8);
  return;
}



/* Entry: 10a7e4e28; end: 10a7e4e5b;  */

void FUN_10a7e4e28(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_50;
  long *plStack_48;
  
  func_0x00010a7e2008(*(long *)(param_1 + 0x110) + 0xf8,0,param_2);
  lVar6 = *(long *)(param_1 + 0x110);
  FUN_10a7e20bc(lVar6 + 0xf8);
  FUN_10a7e2370(lVar6 + 0xf8,0);
  FUN_10a7e2370(lVar6 + 0xf8,1);
  lStack_50 = *(long *)(lVar6 + 0x108);
  plVar2 = *(long **)(lVar6 + 0x110);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(param_1 + 0x138) == lStack_50) {
      return;
    }
    plStack_48 = (long *)0x0;
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
    lVar7 = *(long *)(param_1 + 0x138);
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
    if (lVar7 == lStack_50) {
      return;
    }
    plStack_48 = *(long **)(lVar6 + 0x110);
    lStack_50 = *(long *)(lVar6 + 0x108);
    if (*(long *)(lVar6 + 0x110) != 0) {
      plVar2 = (long *)(*(long *)(lVar6 + 0x110) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  FUN_10a009fa8(param_1 + 0x138,&lStack_50);
  plVar2 = plStack_48;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  func_0x000107c283f4(param_1 + 0x148);
  return;
}



/* Entry: 10a7e4e5c; end: 10a7e4e6b;  */

void FUN_10a7e4e5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  lVar1 = param_1 + 0xf8;
  uStack_2a = 0;
  puStack_28 = &uStack_2a;
  param_1 = param_1 + 0x118;
  FUN_10a814778(param_1,&uStack_2a,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  FUN_10a7f82b8(param_1 + 0x18,param_2);
  lVar2 = lVar1;
  FUN_10a7f8334(lVar1,uStack_2a);
  if (lVar2 != 0) {
    if ((*(ulong *)(lVar2 + 0x38) & 3) != 0) {
      puVar3 = (undefined8 *)(*(ulong *)(lVar2 + 0x38) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar3 + 0x17) < '\0') {
        *(undefined1 *)*puVar3 = 0;
        puVar3[1] = 0;
      }
      else {
        *(undefined1 *)puVar3 = 0;
        *(undefined1 *)((long)puVar3 + 0x17) = 0;
      }
    }
    *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) & 0xfffffffd;
  }
  FUN_10a7e2370(lVar1,uStack_2a);
  return;
}



/* Entry: 10a7e4e6c; end: 10a7e4e9f;  */

void FUN_10a7e4e6c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_50;
  long *plStack_48;
  
  func_0x00010a7e2008(*(long *)(param_1 + 0x110) + 0xf8,1,param_2);
  lVar6 = *(long *)(param_1 + 0x110);
  FUN_10a7e20bc(lVar6 + 0xf8);
  FUN_10a7e2370(lVar6 + 0xf8,0);
  FUN_10a7e2370(lVar6 + 0xf8,1);
  lStack_50 = *(long *)(lVar6 + 0x108);
  plVar2 = *(long **)(lVar6 + 0x110);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(param_1 + 0x138) == lStack_50) {
      return;
    }
    plStack_48 = (long *)0x0;
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
    lVar7 = *(long *)(param_1 + 0x138);
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
    if (lVar7 == lStack_50) {
      return;
    }
    plStack_48 = *(long **)(lVar6 + 0x110);
    lStack_50 = *(long *)(lVar6 + 0x108);
    if (*(long *)(lVar6 + 0x110) != 0) {
      plVar2 = (long *)(*(long *)(lVar6 + 0x110) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  FUN_10a009fa8(param_1 + 0x138,&lStack_50);
  plVar2 = plStack_48;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  func_0x000107c283f4(param_1 + 0x148);
  return;
}



/* Entry: 10a7e4ea0; end: 10a7e5017;  */

void FUN_10a7e4ea0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  long *plStack_38;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  puStack_40 = (undefined1 *)*param_2;
  plStack_38 = (long *)param_2[1];
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
  if (puStack_40 == (undefined1 *)0x0) {
    FUN_10a7e2ea0(&puStack_50,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x110));
    plVar1 = plStack_38;
    plStack_38 = plStack_48;
    puStack_40 = puStack_50;
    puStack_50 = (undefined1 *)0x0;
    plStack_48 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  puVar5 = puStack_40;
  uStack_22 = 1;
  puStack_50 = &uStack_22;
  lVar6 = *(long *)(param_1 + 0x110) + 0x118;
  FUN_10a814778(lVar6,&uStack_22,&UNK_10dd5b8f9,&puStack_50,&uStack_21);
  func_0x00010a7e2008(puVar5 + 0xf8,1,lVar6 + 0x18);
  FUN_10a7e5018(param_1 + 0x110,&puStack_40);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a7e5018; end: 10a7e5093;  */

undefined8 * FUN_10a7e5018(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a7e5094; end: 10a7e5187;  */

undefined8 * FUN_10a7e5094(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  *param_1 = &PTR_DAT_110c1baa0;
  lVar5 = param_2[1];
  uVar4 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar4;
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
  uVar4 = 0x148;
  __Znwm();
  FUN_10a7e8138();
  param_1[3] = uVar4;
  uVar4 = 0x38;
  __Znwm();
  FUN_10a7e5b3c();
  param_1[4] = uVar4;
  return param_1;
}



/* Entry: 10a7e5188; end: 10a7e5217;  */

void FUN_10a7e5188(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (((lVar1 == 0) || (*(long *)(*(long *)(lVar1 + 0xf0) + 0xf8) == 0)) ||
     ((*(char *)(lVar1 + 0x171) == '\x01' && (*(char *)(lVar1 + 0x170) == '\x01')))) {
    lVar1 = 0x18;
  }
  else {
    lVar1 = 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a7e51cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + lVar1) + 0x10))();
  return;
}



/* Entry: 10a7e5218; end: 10a7e5257;  */

void FUN_10a7e5218(long param_1,undefined8 param_2)

{
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00010a7e5254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(*(long **)(param_1 + 0x18),param_2);
  return;
}



/* Entry: 10a7e5258; end: 10a7e5317;  */

void FUN_10a7e5258(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  if (((lVar1 != 0) && (*(long *)(*(long *)(lVar1 + 0xf0) + 0xf8) != 0)) &&
     ((*(char *)(lVar1 + 0x171) != '\x01' || ((*(byte *)(lVar1 + 0x170) & 1) == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00010a7e5294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x20) + 0x30))();
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a7e5318; end: 10a7e543f;  */

void FUN_10a7e5318(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plStack_40;
  undefined8 uStack_38;
  
  lVar2 = 0x28;
  __Znwm();
  plStack_40 = (long *)0x0;
  uStack_38 = 0;
  FUN_10a7e5094();
  (**(code **)(**(long **)(param_2 + 0x18) + 0x28))(&plStack_40,*(long **)(param_2 + 0x18),param_3);
  plVar1 = plStack_40;
  plStack_40 = (long *)0x0;
  plVar3 = *(long **)(lVar2 + 0x18);
  *(long **)(lVar2 + 0x18) = plVar1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    plVar1 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  (**(code **)(**(long **)(param_2 + 0x20) + 0x28))(&plStack_40,*(long **)(param_2 + 0x20),param_3);
  plVar1 = plStack_40;
  plStack_40 = (long *)0x0;
  plVar3 = *(long **)(lVar2 + 0x20);
  *(long **)(lVar2 + 0x20) = plVar1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    plVar1 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10a7e5440; end: 10a7e54c3;  */

undefined1  [16] FUN_10a7e5440(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f662153;
  return auVar1;
}



/* Entry: 10a7e54c4; end: 10a7e5793;  */

void FUN_10a7e54c4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662153,0x17);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c20590;
  pppuVar2 = (undefined8 ***)&UNK_10f678718;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x17100000174;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c20590;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c4efc0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f678e4a,FUN_10a80c80c,FUN_10a80c8c4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f678e60,FUN_10a80cb2c,FUN_10a80cc18);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f678e40,FUN_10a80ccd0,FUN_10a80cd8c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f678eb0,FUN_10a80ce4c,FUN_10a80cf04);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662153,0x17);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7e5778);
  (*pcVar6)();
}



/* Entry: 10a7e5794; end: 10a7e5833;  */

void FUN_10a7e5794(long param_1,long *param_2)

{
  long *plVar1;
  
  func_0x00010aa70acc();
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c1bae8);
  *(int *)(param_1 + 0xe0) = (int)plVar1;
  FUN_10a7e5834(param_1 + 0xf8,param_2,&PTR_DAT_110c1bb08);
  FUN_10a7e58e4(param_1 + 0xf8,param_2,0,&PTR_DAT_110c1bb28);
  FUN_10a20248c(param_2,&PTR_DAT_110c20520,param_1 + 0xe8);
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_isDefault_110c1bb48,0);
  *(char *)(param_1 + 0x140) = (char)param_2;
  return;
}



/* Entry: 10a7e5834; end: 10a7e58e3;  */

void FUN_10a7e5834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long *plVar3;
  undefined1 uStack_11a;
  undefined1 uStack_119;
  undefined1 *puStack_118;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined ***pppuStack_c8;
  undefined1 uStack_c0;
  long lStack_98;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a81462c;
  ppuStack_60 = &PTR_FUN_110c201e0;
  uStack_c0 = SUB81(&pcStack_68,0);
  plVar3 = (long *)0x0;
  uStack_58 = param_1;
  FUN_10a7e353c(param_2,param_3);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_d8 = FUN_10a8146d0;
  ppuStack_d0 = &PTR_FUN_110c201f8;
  pppuStack_c8 = pppuVar1;
  FUN_10a7e353c(param_3,plVar3,&pcStack_d8,0);
  pppuVar1 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  __Unwind_Resume();
  func_0x00010aa70b70();
  (**(code **)(*plVar3 + 0x40))(plVar3,&PTR_DAT_110c1bae8,*(undefined4 *)(pppuVar1 + 0x1c));
  FUN_10a009b20(plVar3,&PTR_DAT_110c1bb08,pppuVar1 + 0x1f,&UNK_10f63349d,0xe);
  uStack_11a = 0;
  puStack_118 = &uStack_11a;
  pppuVar2 = pppuVar1 + 0x23;
  FUN_10a814778(pppuVar2,&uStack_11a,&UNK_10dd5b8f9,&puStack_118,&uStack_119);
  FUN_10a009b20(plVar3,&PTR_DAT_110c1bb28,pppuVar2 + 3,&UNK_10f63349d,0xe);
  FUN_10a202aac(plVar3,&PTR_DAT_110c20520,pppuVar1 + 0x1d,&UNK_10f645f59,0x1a);
  (**(code **)(*plVar3 + 0x70))(plVar3,&PTR_s_isDefault_110c1bb48,*(undefined1 *)(pppuVar1 + 0x28));
  return;
}



/* Entry: 10a7e58e4; end: 10a7e5993;  */

void FUN_10a7e58e4(undefined8 param_1,undefined8 param_2,undefined1 param_3,long *param_4)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 *puStack_a8;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a8146d0;
  ppuStack_60 = &PTR_FUN_110c201f8;
  uStack_58 = param_1;
  uStack_50 = param_3;
  FUN_10a7e353c(param_2,param_4,&pcStack_68,0);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  func_0x00010aa70b70();
  (**(code **)(*param_4 + 0x40))(param_4,&PTR_DAT_110c1bae8,*(undefined4 *)(pppuVar1 + 0x1c));
  FUN_10a009b20(param_4,&PTR_DAT_110c1bb08,pppuVar1 + 0x1f,&UNK_10f63349d,0xe);
  uStack_aa = 0;
  puStack_a8 = &uStack_aa;
  pppuVar2 = pppuVar1 + 0x23;
  FUN_10a814778(pppuVar2,&uStack_aa,&UNK_10dd5b8f9,&puStack_a8,&uStack_a9);
  FUN_10a009b20(param_4,&PTR_DAT_110c1bb28,pppuVar2 + 3,&UNK_10f63349d,0xe);
  FUN_10a202aac(param_4,&PTR_DAT_110c20520,pppuVar1 + 0x1d,&UNK_10f645f59,0x1a);
  (**(code **)(*param_4 + 0x70))
            (param_4,&PTR_s_isDefault_110c1bb48,*(undefined1 *)(pppuVar1 + 0x28));
  return;
}



/* Entry: 10a7e5994; end: 10a7e5a87;  */

void FUN_10a7e5994(long param_1,long *param_2)

{
  long lVar1;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c1bae8,*(undefined4 *)(param_1 + 0xe0));
  FUN_10a009b20(param_2,&PTR_DAT_110c1bb08,param_1 + 0xf8,&UNK_10f63349d,0xe);
  uStack_3a = 0;
  puStack_38 = &uStack_3a;
  lVar1 = param_1 + 0x118;
  FUN_10a814778(lVar1,&uStack_3a,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
  FUN_10a009b20(param_2,&PTR_DAT_110c1bb28,lVar1 + 0x18,&UNK_10f63349d,0xe);
  FUN_10a202aac(param_2,&PTR_DAT_110c20520,param_1 + 0xe8,&UNK_10f645f59,0x1a);
  (**(code **)(*param_2 + 0x70))
            (param_2,&PTR_s_isDefault_110c1bb48,*(undefined1 *)(param_1 + 0x140));
  return;
}



/* Entry: 10a7e5a88; end: 10a7e5b3b;  */

void FUN_10a7e5a88(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if (param_1 == 0) {
    uStack_40 = 0;
    FUN_10a80d2b0(&uStack_40);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x858);
    plStack_30 = *(long **)(param_1 + 0x860);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a80d010(&uStack_38,&lStack_28);
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a7e5b3c; end: 10a7e5c53;  */

undefined8 * FUN_10a7e5b3c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_DAT_110c1bb78;
  *(undefined4 *)(param_1 + 1) = 0;
  lVar6 = param_2[1];
  uVar7 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5 = (undefined8 *)0x88;
  __Znwm();
  uVar7 = *param_2;
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    *puVar5 = uVar7;
    puVar5[1] = 0;
  }
  else {
    plVar2 = plVar1 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *puVar5 = uVar7;
    puVar5[1] = plVar1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  *(undefined4 *)(puVar5 + 6) = 0x3f800000;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  *(undefined4 *)(puVar5 + 0xb) = 0x3f800000;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x10] = 0;
  param_1[4] = puVar5;
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



/* Entry: 10a7e5c54; end: 10a7e5c6b;  */

void FUN_10a7e5c54(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10a7e5c6c; end: 10a7e5ce3;  */

void FUN_10a7e5c6c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010930f628(param_3);
    FUN_10a1c3d88(param_1,param_2,lVar1);
    func_0x00010b4d1758(param_3,*(undefined8 *)*param_1,*(undefined4 *)((undefined8 *)*param_1 + 1))
    ;
  }
  return;
}



/* Entry: 10a7e5ce4; end: 10a7e5d0f;  */

void FUN_10a7e5ce4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(param_2 + 0x20);
  lVar4 = *(long *)(lVar5 + 0x80);
  uVar6 = *(undefined8 *)(lVar5 + 0x78);
  param_1[1] = *(undefined8 *)(lVar5 + 0x80);
  *param_1 = uVar6;
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



/* Entry: 10a7e5d10; end: 10a7e5f1b;  */

void FUN_10a7e5d10(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  ulong auStack_90 [2];
  undefined1 uStack_79;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  uint uStack_64;
  undefined1 uStack_60;
  byte bStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar11 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(lVar11 + 0xf0);
  FUN_10a7e20bc(lVar12 + 0xf8);
  FUN_10a7e2370(lVar12 + 0xf8,0);
  lStack_50 = *(long *)(lVar12 + 0x108);
  plVar2 = *(long **)(lVar12 + 0x110);
  plStack_48 = plVar2;
  if (plVar2 == (long *)0x0) {
    if (lStack_50 != 0) goto LAB_10a7e5da4;
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lStack_50 == 0) {
      do {
        lVar11 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    else {
LAB_10a7e5da4:
      lVar7 = lVar12 + 0xf8;
      FUN_10a7e26a4(lVar7,0);
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 1;
        do {
          lVar9 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      if ((int)lVar7 != 0) {
        uStack_70 = *(undefined8 *)(lVar12 + 0x110);
        uStack_78 = *(undefined8 *)(lVar12 + 0x108);
        if (*(long *)(lVar12 + 0x110) != 0) {
          plVar2 = (long *)(*(long *)(lVar12 + 0x110) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_68 = *(undefined4 *)(lVar12 + 0xe0);
        auStack_90[0] = 0x646e6168;
        uStack_79 = 4;
        uStack_64 = 0;
        uStack_60 = 0;
        bStack_58 = 1;
        uVar8 = *(long *)(lVar11 + 0xf0) + 0xf8;
        FUN_10a7e26a4(uVar8,1);
        if ((uVar8 & 1) != 0) {
          lVar11 = *(long *)(param_1 + 0x10);
          if ((lVar11 == 0) || ((*(byte *)(*(long *)(lVar11 + 0xf0) + 0x140) & 1) != 0)) {
            puVar10 = (undefined4 *)(param_1 + 8);
          }
          else {
            puVar10 = (undefined4 *)(*(long *)(lVar11 + 0xf0) + 0xe0);
          }
          if ((bStack_58 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7e5ef8);
            (*pcVar6)();
          }
          uStack_68 = *puVar10;
          uVar3 = *(uint *)(*(long *)(lVar11 + 0xe0) + 0x28);
          if (uVar3 - 1 < 2) {
            uStack_64 = uStack_64 | uVar3;
          }
          if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
            *(undefined8 *)(param_2 + 0x298) = 0;
            *(undefined8 *)(param_2 + 0x2a0) = 0;
            *(undefined8 *)(param_2 + 0x2a8) = 0;
            *(undefined1 *)(param_2 + 0x2b0) = 1;
          }
          FUN_10aad0050((undefined8 *)(param_2 + 0x298),auStack_90);
        }
        goto LAB_10a7e5e78;
      }
    }
  }
  auStack_90[0] = auStack_90[0] & 0xffffffffffffff00;
  bStack_58 = 0;
LAB_10a7e5e78:
  func_0x00010a7fd678(auStack_90);
  return;
}



/* Entry: 10a7e5f1c; end: 10a7e61e7;  */

void FUN_10a7e5f1c(float param_1,float param_2,float param_3,float param_4,long param_5,long param_6
                  ,undefined8 param_7,undefined8 param_8,undefined8 param_9,undefined4 *param_10)

{
  long *plVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  long *plVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  int *piVar16;
  ulong *puVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  float fVar23;
  undefined8 uStack_70;
  long *plStack_68;
  
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  func_0x00010a504104(param_5 + 0x28,&uStack_70);
  plVar12 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar18 = *plVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar18 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (*(long *)(param_5 + 0x10) != 0) {
    lVar18 = *(long *)(*(long *)(param_5 + 0x10) + 0x168);
    FUN_10a7e61e8();
    if (lVar18 != 0) {
      lVar13 = *(long *)(param_6 + 0x78);
      FUN_10aacfcb0(lVar13,&UNK_10f570f7f,4);
      if ((lVar13 != 0) && (*(long *)(lVar13 + 0x18) != 0)) {
        FUN_10a7e628c(param_5 + 0x28,*(long *)(lVar13 + 0x18),*(undefined8 *)(lVar13 + 0x20));
        if ((*(long *)(param_5 + 0x10) == 0) ||
           (lVar13 = *(long *)(*(long *)(param_5 + 0x10) + 0xf0),
           (*(byte *)(lVar13 + 0x140) & 1) != 0)) {
          piVar16 = (int *)(param_5 + 8);
        }
        else {
          piVar16 = (int *)(lVar13 + 0xe0);
        }
        puVar19 = (ulong *)(*(long *)(param_5 + 0x28) + 0x18);
        uVar21 = *puVar19;
        if ((uVar21 & 1) != 0) {
          puVar19 = (ulong *)(uVar21 + 7);
        }
        iVar9 = *(int *)(*(long *)(param_5 + 0x28) + 0x20);
        if (iVar9 != 0) {
          iVar6 = *piVar16;
          puVar2 = puVar19 + iVar9;
          do {
            uVar21 = *puVar19;
            if (((*(uint *)(uVar21 + 0x10) >> 0x15 & 1) != 0) && (*(int *)(uVar21 + 0x144) == iVar6)
               ) {
              if (((*(uint *)(uVar21 + 0x10) >> 0x13 & 1) != 0) &&
                 (*(char *)(uVar21 + 0x13c) != '\x01')) {
                return;
              }
              uVar20 = *(ulong *)(uVar21 + 0x48);
              puVar22 = (ulong *)(uVar21 + 0x48);
              if ((uVar20 & 1) != 0) {
                puVar22 = (ulong *)(uVar20 + 7);
              }
              if (*(int *)(uVar21 + 0x50) != 0) {
                lVar13 = (long)*(int *)(uVar21 + 0x50) << 3;
                do {
                  uVar20 = *puVar22;
                  uVar21 = *(ulong *)(uVar20 + 0xb0);
                  if ((uVar21 & 3) == 0) {
                    ppuVar15 = ppuRam00000001132d06b0;
                    if (ppuRam00000001132d06b0 == (undefined **)0x0) {
                      ppuVar15 = &PTR_DAT_1132d0698;
                      func_0x00010b4befb0();
                    }
                  }
                  else {
                    ppuVar15 = (undefined **)(uVar21 & 0xfffffffffffffffc);
                  }
                  puVar17 = (ulong *)(*(ulong *)(lVar18 + 200) & 0xfffffffffffffffc);
                  bVar7 = *(byte *)((long)ppuVar15 + 0x17);
                  puVar3 = ppuVar15[1];
                  if (-1 < (char)bVar7) {
                    puVar3 = (undefined *)(ulong)bVar7;
                  }
                  bVar8 = *(byte *)((long)puVar17 + 0x17);
                  puVar4 = (undefined *)puVar17[1];
                  if (-1 < (char)bVar8) {
                    puVar4 = (undefined *)(ulong)bVar8;
                  }
                  if (puVar3 == puVar4) {
                    ppuVar14 = (undefined **)*ppuVar15;
                    if (-1 < (char)bVar7) {
                      ppuVar14 = ppuVar15;
                    }
                    puVar5 = (ulong *)*puVar17;
                    if (-1 < (char)bVar8) {
                      puVar5 = puVar17;
                    }
                    _memcmp(ppuVar14,puVar5);
                    if ((int)ppuVar14 == 0) {
                      (**(code **)(**(long **)(param_5 + 0x10) + 0xb0))
                                (*(long **)(param_5 + 0x10),*param_10);
                      fVar23 = param_4 * param_4 + param_1 * param_1 +
                               param_2 * param_2 + param_3 * param_3;
                      plStack_68 = (long *)CONCAT44(param_4 / fVar23,-param_3 / fVar23);
                      uStack_70 = CONCAT44(-param_2 / fVar23,-param_1 / fVar23);
                      ppuVar15 = &PTR_PTR_1132d70f0;
                      if (*(undefined ***)(lVar18 + 0xd0) != (undefined **)0x0) {
                        ppuVar15 = *(undefined ***)(lVar18 + 0xd0);
                      }
                      FUN_10a7e6300(*(undefined8 *)(param_5 + 0x20),uVar20,ppuVar15,param_7,param_8,
                                    param_9,param_10,&uStack_70);
                      return;
                    }
                  }
                  puVar22 = puVar22 + 1;
                  lVar13 = lVar13 + -8;
                } while (lVar13 != 0);
              }
            }
            puVar19 = puVar19 + 1;
          } while (puVar19 != puVar2);
        }
      }
    }
  }
  return;
}



/* Entry: 10a7e61e8; end: 10a7e628b;  */

undefined8 FUN_10a7e61e8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar5 = *(undefined8 *)(param_1[2] + 0x108);
  plVar2 = *(long **)(param_1[2] + 0x110);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a7e2764(uVar5,*(undefined4 *)(*param_1 + 0x28));
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return uVar5;
}



/* Entry: 10a7e628c; end: 10a7e62ff;  */

undefined8 * FUN_10a7e628c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a7e6300; end: 10a7e77df;  */

/* WARNING: Removing unreachable block (ram,0x00010a7e6e2c) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_10a7e6300(ulong *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
             int *param_7,float *param_8)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float *pfVar5;
  undefined **ppuVar6;
  ulong *puVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  ulong uVar11;
  undefined8 *******pppppppuVar12;
  byte bVar13;
  undefined8 *puVar14;
  code *pcVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong *puVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined4 *puVar26;
  float *pfVar27;
  ulong uVar28;
  undefined8 *puVar29;
  ulong uVar30;
  long lVar31;
  float *pfVar32;
  undefined4 *puVar33;
  long *plVar34;
  ulong uVar35;
  ulong uVar36;
  undefined8 *puVar37;
  long lVar38;
  long *plVar39;
  undefined8 uVar40;
  float fVar41;
  uint uVar42;
  ulong uVar43;
  ulong uVar44;
  undefined8 uVar45;
  float fVar46;
  undefined8 *puVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_24c [64];
  int iStack_20c;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  float fStack_188;
  float fStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  ulong uStack_170;
  float fStack_168;
  undefined4 uStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  undefined8 *******pppppppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  long lStack_100;
  ulong uStack_f8;
  long *plStack_f0;
  long lStack_e8;
  float fStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  
  uStack_d0 = (undefined8 *)0x0;
  uStack_c8 = (long *)0x0;
  func_0x00010a36f2e0(param_1 + 0xf,&uStack_d0);
  plVar34 = uStack_c8;
  if (uStack_c8 != (long *)0x0) {
    plVar39 = uStack_c8 + 1;
    do {
      lVar24 = *plVar39;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar39,0x10);
      if (bVar10) {
        *plVar39 = lVar24 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar34);
    }
  }
  uVar42 = *(uint *)(param_2 + 0x10);
  if ((uVar42 >> 0x13 & 1) == 0) {
    if ((uVar42 >> 4 & 1) == 0) {
      return 0;
    }
  }
  else {
    if ((uVar42 >> 4 & 1) == 0) {
      return 0;
    }
    if ((*(byte *)(param_2 + 0x13c) & 1) == 0) {
      return 0;
    }
  }
  plVar34 = *(long **)(param_4 + 0x10);
  if (plVar34 != (long *)0x0) {
    do {
      plVar19 = (long *)plVar34[6];
      for (plVar39 = (long *)plVar34[5]; plVar39 != plVar19; plVar39 = plVar39 + 2) {
        plVar16 = (long *)plVar39[1];
        __ZNSt3__119__shared_weak_count4lockEv();
        lVar24 = *plVar39;
        plVar17 = plVar16 + 1;
        do {
          lVar25 = *plVar17;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar10) {
            *plVar17 = lVar25 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
        puVar20 = param_1 + 2;
        FUN_10a80de84(puVar20,*(undefined8 *)(lVar24 + 0x40),*(undefined8 *)(lVar24 + 0x48));
        if (puVar20 != (ulong *)0x0) {
          func_0x00010a3e8440(*(undefined8 *)(lVar24 + 0x140),puVar20 + 4);
        }
      }
      plVar34 = (long *)*plVar34;
    } while (plVar34 != (long *)0x0);
    for (plVar34 = *(long **)(param_4 + 0x10); plVar34 != (long *)0x0; plVar34 = (long *)*plVar34) {
      plVar19 = (long *)plVar34[6];
      for (plVar39 = (long *)plVar34[5]; plVar39 != plVar19; plVar39 = plVar39 + 2) {
        plVar17 = (long *)plVar39[1];
        if ((plVar17 == (long *)0x0) ||
           (__ZNSt3__119__shared_weak_count4lockEv(), plVar17 == (long *)0x0)) {
          lVar24 = 0;
        }
        else {
          lVar24 = *plVar39;
          plVar16 = plVar17 + 1;
          do {
            lVar25 = *plVar16;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar10) {
              *plVar16 = lVar25 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        puVar20 = param_1 + 2;
        FUN_10a80da1c(puVar20,*(undefined8 *)(lVar24 + 0x40),*(undefined8 *)(lVar24 + 0x48));
        if (puVar20 == (ulong *)0x0) {
          lVar25 = *(long *)(lVar24 + 0x140);
          func_0x00010a3e90b8(lVar25);
          uStack_d0 = *(undefined8 **)(lVar24 + 0x40);
          uStack_c8 = *(long **)(lVar24 + 0x48);
          puVar20 = param_1 + 2;
          FUN_10a80dabc();
          uVar44 = *(ulong *)(lVar25 + 0x7c);
          uVar43 = *(ulong *)(lVar25 + 0x74);
          uVar35 = *(ulong *)(lVar25 + 0x84);
          uVar23 = *(ulong *)(lVar25 + 0x9c);
          uVar36 = *(ulong *)(lVar25 + 0x94);
          uVar22 = *(ulong *)(lVar25 + 0x6c);
          uVar28 = *(ulong *)(lVar25 + 100);
          puVar20[9] = *(ulong *)(lVar25 + 0x8c);
          puVar20[8] = uVar35;
          puVar20[0xb] = uVar23;
          puVar20[10] = uVar36;
          puVar20[5] = uVar22;
          puVar20[4] = uVar28;
          puVar20[7] = uVar44;
          puVar20[6] = uVar43;
          if (param_6 == 0) {
LAB_10a7e7690:
            FUN_10a00946c(&UNK_10f67a050);
            goto LAB_10a7e769c;
          }
          if (lVar24 == param_6) {
            fVar56 = 0.0;
            fVar46 = 1.0;
            fVar41 = 0.0;
            fVar48 = 0.0;
          }
          else {
            fVar56 = 0.0;
            lVar25 = lVar24;
            fVar50 = 1.0;
            fVar52 = 0.0;
            fVar54 = 0.0;
            do {
              if (lVar25 == 0) {
                fVar46 = fVar50;
                fVar41 = fVar52;
                fVar48 = fVar54;
                if ((bRam000000011330a9e8 & 1) != 0) {
                  func_0x00010ae06f08(0,1,&UNK_10f67a093,&UNK_10f67a0d0,0x98,&UNK_10f67a15f);
                }
                break;
              }
              if ((*(ushort *)(lVar25 + 0x118) >> 3 & 1) != 0) {
                FUN_10a00946c(&UNK_10f67a1f0);
                goto LAB_10a7e7690;
              }
              lVar38 = *(long *)(lVar25 + 0x140);
              func_0x00010a0d8ae0(lVar38);
              fVar49 = *(float *)(lVar38 + 0x54);
              fVar51 = *(float *)(lVar38 + 0x58);
              fVar53 = *(float *)(lVar38 + 0x5c);
              fVar55 = *(float *)(lVar38 + 0x60);
              fVar46 = ((-(fVar49 * fVar52) + fVar50 * fVar55) - fVar54 * fVar51) - fVar56 * fVar53;
              fVar41 = (fVar50 * fVar49 + fVar52 * fVar55 + fVar56 * fVar51) - fVar54 * fVar53;
              fVar48 = (fVar50 * fVar51 + fVar54 * fVar55 + fVar52 * fVar53) - fVar56 * fVar49;
              fVar56 = (fVar50 * fVar53 + fVar56 * fVar55 + fVar54 * fVar49) - fVar52 * fVar51;
              lVar25 = *(long *)(lVar25 + 0x188);
              fVar50 = fVar46;
              fVar52 = fVar41;
              fVar54 = fVar48;
            } while (lVar25 != param_6);
          }
          fVar50 = *param_8;
          fVar52 = param_8[1];
          fVar54 = param_8[2];
          fVar49 = param_8[3];
          uStack_d0 = *(undefined8 **)(lVar24 + 0x40);
          uStack_c8 = *(long **)(lVar24 + 0x48);
          puVar20 = param_1 + 7;
          FUN_10a80df24();
          *(float *)(puVar20 + 4) =
               (fVar46 * fVar50 + fVar41 * fVar49 + fVar56 * fVar52) - fVar48 * fVar54;
          *(float *)((long)puVar20 + 0x24) =
               (fVar46 * fVar52 + fVar48 * fVar49 + fVar41 * fVar54) - fVar56 * fVar50;
          *(float *)(puVar20 + 5) =
               (fVar46 * fVar54 + fVar56 * fVar49 + fVar48 * fVar50) - fVar41 * fVar52;
          *(float *)((long)puVar20 + 0x2c) =
               ((-(fVar50 * fVar41) + fVar46 * fVar49) - fVar48 * fVar52) - fVar56 * fVar54;
        }
      }
    }
  }
  ppuVar1 = &PTR_PTR_1132d6de0;
  if (*(undefined ***)(param_2 + 0xd0) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0xd0);
  }
  FUN_10a7f416c(&uStack_d0,*(undefined8 *)(*(long *)(param_6 + 0x120) + 0x870),ppuVar1);
  func_0x00010a36f2e0(param_1 + 0xf,&uStack_d0);
  plVar34 = uStack_c8;
  if (uStack_c8 != (long *)0x0) {
    plVar39 = uStack_c8 + 1;
    do {
      lVar24 = *plVar39;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar39,0x10);
      if (bVar10) {
        *plVar39 = lVar24 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar34);
    }
  }
  lVar24 = 0;
  uVar18 = *(undefined8 *)(param_6 + 0x140);
  uStack_c8 = (long *)0x0;
  uStack_d0 = (undefined8 *)0x3f800000;
  uStack_b8 = 0;
  uStack_c0 = 0x3f800000;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,0x3f800000);
  puVar26 = (undefined4 *)ppuVar1[10];
  do {
    lVar38 = 0;
    lVar25 = 0;
    puVar33 = puVar26;
    do {
      puVar2 = (undefined4 *)((long)&uStack_c8 + lVar25 * 0xc);
      if ((int)lVar24 != 2) {
        puVar2 = (undefined4 *)((long)&uStack_d0 + lVar38);
      }
      puVar3 = (undefined4 *)((long)&uStack_d0 + lVar25 * 0xc + 4);
      if ((int)lVar24 != 1) {
        puVar3 = puVar2;
      }
      *puVar3 = *puVar33;
      lVar25 = lVar25 + 1;
      lVar38 = lVar38 + 0xc;
      puVar33 = puVar33 + 1;
    } while (lVar38 != 0x24);
    lVar24 = lVar24 + 1;
    puVar26 = puVar26 + 3;
  } while (lVar24 != 3);
  fVar50 = ((float)uStack_d0 - (float)uStack_c0) - (float)uStack_b0;
  fVar41 = ((float)uStack_c0 - (float)uStack_d0) - (float)uStack_b0;
  fVar48 = ((float)uStack_b0 - (float)uStack_d0) - (float)uStack_c0;
  fVar56 = (float)uStack_d0 + (float)uStack_c0 + (float)uStack_b0;
  fVar46 = fVar50;
  if (fVar50 <= fVar56) {
    fVar46 = fVar56;
  }
  bVar8 = 2;
  if (fVar41 <= fVar46) {
    fVar41 = fVar46;
    bVar8 = fVar56 < fVar50;
  }
  bVar13 = 3;
  if (fVar48 <= fVar41) {
    fVar48 = fVar41;
    bVar13 = bVar8;
  }
  fVar46 = SQRT(fVar48 + 1.0) * 0.5;
  uVar43 = (ulong)(uint)fVar46;
  fVar41 = 0.25 / fVar46;
  if (bVar13 < 2) {
    if (bVar13 == 0) {
      fVar56 = uStack_d0._4_4_ - uStack_c8._4_4_;
      uVar44 = (ulong)(uint)(fVar41 * (uStack_c0._4_4_ - uStack_b8._4_4_));
      uVar43 = (ulong)(uint)(fVar41 * ((float)uStack_b8 - (float)uStack_c8));
      fVar48 = fVar46;
    }
    else {
      fVar48 = fVar41 * (uStack_c0._4_4_ - uStack_b8._4_4_);
      fVar56 = (float)uStack_b8 + (float)uStack_c8;
      uVar44 = uVar43;
      uVar43 = (ulong)(uint)(fVar41 * (uStack_d0._4_4_ + uStack_c8._4_4_));
    }
  }
  else {
    if (bVar13 != 2) {
      fVar48 = fVar41 * (uStack_d0._4_4_ - uStack_c8._4_4_);
      uVar44 = (ulong)(uint)(fVar41 * ((float)uStack_b8 + (float)uStack_c8));
      uVar43 = (ulong)(uint)(fVar41 * (uStack_c0._4_4_ + uStack_b8._4_4_));
      goto LAB_10a7e68e0;
    }
    fVar48 = fVar41 * ((float)uStack_b8 - (float)uStack_c8);
    uVar44 = (ulong)(uint)(fVar41 * (uStack_d0._4_4_ + uStack_c8._4_4_));
    fVar56 = uStack_c0._4_4_ + uStack_b8._4_4_;
  }
  fVar46 = fVar41 * fVar56;
LAB_10a7e68e0:
  fVar41 = *param_8;
  puVar47 = (undefined8 *)(ulong)(uint)fVar41;
  fVar52 = param_8[1];
  fVar54 = param_8[2];
  fVar49 = param_8[3];
  fVar56 = (float)uVar44;
  fVar50 = (float)uVar43;
  uStack_d0 = (undefined8 *)
              CONCAT44((fVar50 * fVar49 + fVar52 * fVar48 + fVar41 * fVar46) - fVar54 * fVar56,
                       (fVar56 * fVar49 + fVar41 * fVar48 + fVar54 * fVar50) - fVar52 * fVar46);
  uStack_c8 = (long *)CONCAT44(((-(fVar56 * fVar41) + fVar49 * fVar48) - fVar52 * fVar50) -
                               fVar54 * fVar46,
                               (fVar46 * fVar49 + fVar54 * fVar48 + fVar52 * fVar56) -
                               fVar41 * fVar50);
  FUN_10a3e82bc(uVar18,&uStack_d0);
  if ((*(byte *)(param_7 + 1) & 1) != 0) {
    puVar47 = *(undefined8 **)ppuVar1[8];
    uStack_c8 = (long *)CONCAT44(uStack_c8._4_4_,(int)*(long *)((long)ppuVar1[8] + 8));
    uStack_d0 = puVar47;
    FUN_10a3e3894(*(undefined8 *)(param_6 + 0x140),&uStack_d0);
  }
  puVar20 = param_1 + 0xc;
  param_1[0xd] = *puVar20;
  func_0x00010983cad8(puVar20,(long)*(int *)(param_3 + 0x20));
  if (*(int *)(param_3 + 0x20) < 1) {
    uStack_f8 = 0;
    lStack_100 = 0;
    lStack_e8 = 0;
    plStack_f0 = (long *)0x0;
    fStack_e0 = 1.0;
  }
  else {
    uVar35 = 0;
    lVar24 = 0;
    uStack_278 = 0x3f80000000000000;
    uStack_280 = 0;
    do {
      fVar46 = (float)uVar44;
      fVar41 = (float)uVar43;
      iVar21 = *(int *)(*(long *)(param_3 + 0x38) + lVar24 * 4);
      uVar18 = uStack_280;
      uVar45 = uStack_278;
      if (iVar21 != -1) {
        if ((ulong)((long)(param_1[0xd] - param_1[0xc]) >> 4) <= (ulong)(long)iVar21)
        goto LAB_10a7e76b8;
        puVar47 = (undefined8 *)(param_1[0xc] + (long)iVar21 * 0x10);
        uVar18 = *puVar47;
        uVar45 = puVar47[1];
      }
      fStack_188 = (float)uVar45;
      fStack_184 = (float)((ulong)uVar45 >> 0x20);
      uStack_190._0_4_ = (float)uVar18;
      uStack_190._4_4_ = (float)((ulong)uVar18 >> 0x20);
      lVar25 = 0;
      ppuVar6 = &PTR_PTR_1132d6d90;
      if (*(undefined ***)(param_3 + 0x118) != (undefined **)0x0) {
        ppuVar6 = *(undefined ***)(param_3 + 0x118);
      }
      pfVar27 = (float *)(ppuVar6[4] + (-(uVar35 >> 0x1f) & 0xfffffffc00000000 | uVar35 << 2));
      uStack_c8 = (long *)0x0;
      uStack_d0 = (undefined8 *)0x3f800000;
      uStack_b8 = 0;
      uStack_c0 = 0x3f80000000000000;
      fVar48 = 0.0;
      fStack_a8 = 1.0;
      uStack_a4 = 0;
      uStack_b0 = 0;
      fStack_98 = 0.0;
      uStack_94 = 0x3f800000;
      fStack_a0 = 0.0;
      fStack_9c = 0.0;
      do {
        lVar31 = 0;
        lVar38 = 0;
        pfVar32 = pfVar27;
        do {
          fVar56 = *pfVar32;
          iVar21 = (int)lVar25;
          pfVar5 = (float *)((long)&uStack_c8 + lVar38 * 0x10 + 4);
          if (iVar21 != 3) {
            pfVar5 = (float *)((long)&uStack_d0 + lVar31);
          }
          pfVar4 = (float *)(&uStack_c8 + lVar38 * 2);
          if (iVar21 != 2) {
            pfVar4 = pfVar5;
          }
          pfVar5 = (float *)((long)&uStack_d0 + lVar38 * 0x10 + 4);
          if (iVar21 != 1) {
            pfVar5 = pfVar4;
          }
          *pfVar5 = fVar56;
          lVar38 = lVar38 + 1;
          lVar31 = lVar31 + 0x10;
          pfVar32 = pfVar32 + 1;
        } while (lVar31 != 0x40);
        lVar25 = lVar25 + 1;
        pfVar27 = pfVar27 + 4;
      } while (lVar25 != 4);
      FUN_10a7f8bd0(&uStack_d0);
      fVar52 = fVar48 * fStack_188;
      fVar50 = fVar56 * fStack_188;
      fVar54 = fVar46 * (float)uStack_190;
      fVar53 = (float)uStack_190 * fVar56;
      fVar49 = fVar48 * uStack_190._4_4_;
      fVar51 = fVar46 * fStack_188;
      uVar43 = (ulong)(uint)(fVar41 * fStack_188);
      fStack_188 = fVar41 * fStack_188 + fVar46 * fStack_184;
      uVar44 = (ulong)(uint)fStack_188;
      fStack_188 = fStack_188 + fVar48 * (float)uStack_190;
      puVar47 = (undefined8 *)(ulong)(uint)fStack_188;
      fStack_188 = fStack_188 - fVar56 * uStack_190._4_4_;
      uStack_190._0_4_ =
           ((float)uStack_190 * fVar41 + fVar56 * fStack_184 + fVar46 * uStack_190._4_4_) - fVar52;
      uStack_190._4_4_ = (fVar41 * uStack_190._4_4_ + fVar48 * fStack_184 + fVar50) - fVar54;
      fStack_184 = ((-fVar53 + fVar41 * fStack_184) - fVar49) - fVar51;
      FUN_10a7e9944(puVar20,&uStack_190);
      lVar24 = lVar24 + 1;
      uVar35 = (ulong)((int)uVar35 + 0x10);
    } while (lVar24 < *(int *)(param_3 + 0x20));
    uStack_f8 = 0;
    lStack_100 = 0;
    lStack_e8 = 0;
    plStack_f0 = (long *)0x0;
    fStack_e0 = 1.0;
    if (0 < *(int *)(param_3 + 0x20)) {
      lVar24 = 0;
      do {
        uVar35 = *(ulong *)(param_3 + 0x18);
        puVar20 = (ulong *)(param_3 + 0x18);
        if ((uVar35 & 1) != 0) {
          puVar20 = (ulong *)(uVar35 + lVar24 * 8 + 7);
        }
        FUN_10a7f8ae4(&uStack_d0,*puVar20);
        bVar8 = ppuVar1[0x14][lVar24];
        uVar35 = (ulong)bVar8;
        uStack_190 = &uStack_d0;
        lVar25 = param_5;
        FUN_10a80e76c(param_5,&uStack_d0,&UNK_10dd5b8f9,&uStack_190,auStack_1d0);
        *(byte *)(lVar25 + 0x28) = bVar8;
        lVar25 = param_4;
        FUN_10a2fda74(param_4,&uStack_d0);
        if (lVar25 != 0) {
          lVar25 = param_4;
          FUN_10a2fda74(param_4,&uStack_d0);
          if (lVar25 == 0) goto LAB_10a7e769c;
          puVar7 = *(ulong **)(lVar25 + 0x30);
          for (puVar20 = *(ulong **)(lVar25 + 0x28); puVar20 != puVar7; puVar20 = puVar20 + 2) {
            uStack_190._0_4_ = 0.0;
            uStack_190._4_4_ = 0.0;
            fStack_188 = 0.0;
            fStack_184 = 0.0;
            plVar34 = (long *)puVar20[1];
            if (plVar34 == (long *)0x0) {
              plVar34 = (long *)0x0;
LAB_10a7e6bd8:
              uVar36 = 0;
            }
            else {
              __ZNSt3__119__shared_weak_count4lockEv();
              fStack_188 = SUB84(plVar34,0);
              fStack_184 = (float)((ulong)plVar34 >> 0x20);
              if (plVar34 == (long *)0x0) goto LAB_10a7e6bd8;
              uVar36 = *puVar20;
              uStack_190._0_4_ = (float)uVar36;
              uStack_190._4_4_ = (float)(uVar36 >> 0x20);
            }
            uVar23 = uStack_f8;
            uVar28 = ((ulong)(uint)((int)uVar36 << 3) + 8 ^ uVar36 >> 0x20) * -0x622015f714c7d297;
            uVar28 = (uVar36 >> 0x20 ^ uVar28 >> 0x2f ^ uVar28) * -0x622015f714c7d297;
            uVar28 = (uVar28 ^ uVar28 >> 0x2f) * -0x622015f714c7d297;
            if (uStack_f8 != 0) {
              uVar22 = uStack_f8 - 1;
              if ((uStack_f8 & uVar22) == 0) {
                uVar35 = uVar28 & uVar22;
              }
              else {
                uVar35 = uVar28;
                if (uStack_f8 <= uVar28) {
                  uVar35 = 0;
                  if (uStack_f8 != 0) {
                    uVar35 = uVar28 / uStack_f8;
                  }
                  uVar35 = uVar28 - uVar35 * uStack_f8;
                }
              }
              puVar29 = *(undefined8 **)(lStack_100 + uVar35 * 8);
              if (puVar29 != (undefined8 *)0x0) {
                for (plVar39 = (long *)*puVar29; plVar39 != (long *)0x0; plVar39 = (long *)*plVar39)
                {
                  uVar30 = plVar39[1];
                  if (uVar30 == uVar28) {
                    if (plVar39[2] == uVar36) goto LAB_10a7e6dc8;
                  }
                  else {
                    if ((uStack_f8 & uVar22) == 0) {
                      uVar30 = uVar30 & uVar22;
                    }
                    else if (uStack_f8 <= uVar30) {
                      uVar11 = 0;
                      if (uStack_f8 != 0) {
                        uVar11 = uVar30 / uStack_f8;
                      }
                      uVar30 = uVar30 - uVar11 * uStack_f8;
                    }
                    if (uVar30 != uVar35) break;
                  }
                }
              }
            }
            plVar39 = (long *)0x20;
            __Znwm();
            *plVar39 = 0;
            plVar39[1] = uVar28;
            plVar39[2] = uVar36;
            *(undefined4 *)(plVar39 + 3) = 0;
            puVar47 = (undefined8 *)(ulong)(uint)fStack_e0;
            if ((uVar23 == 0) ||
               (uVar44 = (ulong)(uint)(fStack_e0 * (float)uVar23),
               fStack_e0 * (float)uVar23 < (float)(lStack_e8 + 1))) {
              uVar35 = 1;
              if (2 < uVar23) {
                uVar35 = (ulong)((uVar23 & uVar23 - 1) != 0);
              }
              uVar35 = uVar35 | uVar23 << 1;
              uVar36 = (ulong)((float)(lStack_e8 + 1) / fStack_e0);
              if (uVar35 <= uVar36) {
                uVar35 = uVar36;
              }
              FUN_10a80e554(&lStack_100,uVar35);
              uVar23 = uStack_f8;
              if ((uStack_f8 & uStack_f8 - 1) == 0) {
                uVar35 = uStack_f8 - 1 & uVar28;
              }
              else {
                uVar35 = uVar28;
                if (uStack_f8 <= uVar28) {
                  uVar35 = 0;
                  if (uStack_f8 != 0) {
                    uVar35 = uVar28 / uStack_f8;
                  }
                  uVar35 = uVar28 - uVar35 * uStack_f8;
                }
              }
            }
            plVar19 = *(long **)(lStack_100 + uVar35 * 8);
            if (plVar19 == (long *)0x0) {
              *plVar39 = (long)plStack_f0;
              *(long ***)(lStack_100 + uVar35 * 8) = &plStack_f0;
              plStack_f0 = plVar39;
              if (*plVar39 != 0) {
                uVar36 = *(ulong *)(*plVar39 + 8);
                if ((uVar23 & uVar23 - 1) == 0) {
                  uVar36 = uVar36 & uVar23 - 1;
                }
                else if (uVar23 <= uVar36) {
                  uVar28 = 0;
                  if (uVar23 != 0) {
                    uVar28 = uVar36 / uVar23;
                  }
                  uVar36 = uVar36 - uVar28 * uVar23;
                }
                plVar19 = (long *)(lStack_100 + uVar36 * 8);
                goto LAB_10a7e6db8;
              }
            }
            else {
              *plVar39 = *plVar19;
LAB_10a7e6db8:
              *plVar19 = (long)plVar39;
            }
            lStack_e8 = lStack_e8 + 1;
LAB_10a7e6dc8:
            *(int *)(plVar39 + 3) = (int)lVar24;
            if (plVar34 != (long *)0x0) {
              plVar39 = plVar34 + 1;
              do {
                lVar25 = *plVar39;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar39,0x10);
                if (bVar10) {
                  *plVar39 = lVar25 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (lVar25 == 0) {
                (**(code **)(*plVar34 + 0x10))(plVar34);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar34);
              }
            }
          }
        }
        lVar24 = lVar24 + 1;
      } while (lVar24 < *(int *)(param_3 + 0x20));
    }
  }
  FUN_10a7fda98(&uStack_d0);
  auStack_1d0._0_4_ = 1;
  if (1 < *(int *)(param_3 + 0x20)) {
    iVar21 = 1;
    do {
      uVar35 = *(ulong *)(param_3 + 0x18);
      puVar20 = (ulong *)(param_3 + 0x18);
      if ((uVar35 & 1) != 0) {
        puVar20 = (ulong *)(uVar35 + (long)iVar21 * 8 + 7);
      }
      FUN_10a7f8ae4(&uStack_190,*puVar20);
      plVar34 = (long *)*param_1;
      uVar35 = CONCAT44(fStack_184,fStack_188);
      puVar29 = uStack_190;
      if (-1 < uStack_17c) {
        uVar35 = (ulong)uStack_17c._3_1_;
        puVar29 = &uStack_190;
      }
      (**(code **)(*plVar34 + 0xa8))(plVar34,puVar29,uVar35);
      if ((int)plVar34 != 0) {
        iVar21 = *(int *)(*(long *)(param_3 + 0x38) + (long)(int)auStack_1d0._0_4_ * 4);
        uVar35 = ((long)uStack_c8 - (long)uStack_d0 >> 3) * -0x5555555555555555;
        if (uVar35 < (ulong)(long)iVar21 || uVar35 - (long)iVar21 == 0) goto LAB_10a7e76b8;
        func_0x000109febdc8(uStack_d0 + (long)iVar21 * 3,auStack_1d0);
      }
      if (uStack_17c < 0) {
        __ZdlPv(uStack_190);
      }
      iVar21 = auStack_1d0._0_4_ + 1;
      auStack_1d0._0_4_ = iVar21;
    } while (iVar21 < *(int *)(param_3 + 0x20));
  }
  uVar35 = 0;
  uStack_128 = 0;
  lStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_110 = 0x3f800000;
  for (plVar34 = plStack_f0; plVar34 != (long *)0x0; plVar34 = (long *)*plVar34) {
    if ((int)plVar34[3] == 0) {
      FUN_10a7f8ebc(&uStack_190,plVar34[2],&lStack_100,&uStack_d0);
      puVar14 = uStack_190;
      puVar29 = (undefined8 *)CONCAT44(fStack_184,fStack_188);
      for (puVar37 = uStack_190; puVar37 != puVar29; puVar37 = puVar37 + 1) {
        FUN_10a80eb3c(&lStack_130,*puVar37,*puVar37);
      }
      if (puVar14 != (undefined8 *)0x0) {
        __ZdlPv(puVar14);
      }
    }
  }
  uStack_190 = &uStack_d0;
  func_0x00010a1f4bf4(&uStack_190);
  if (0 < *(int *)(param_3 + 0x20)) {
    uVar36 = 0;
    do {
      uVar23 = *(ulong *)(param_3 + 0x18);
      puVar20 = (ulong *)(param_3 + 0x18);
      if ((uVar23 & 1) != 0) {
        puVar20 = (ulong *)(uVar23 + uVar36 * 8 + 7);
      }
      FUN_10a7f8ae4(&pppppppuStack_148,*puVar20);
      lVar24 = param_4;
      FUN_10a2fda74(param_4,&pppppppuStack_148);
      if (lVar24 != 0) {
        plVar34 = (long *)*param_1;
        uVar23 = uStack_140;
        pppppppuVar12 = pppppppuStack_148;
        if (-1 < (char)bStack_131) {
          uVar23 = (ulong)bStack_131;
          pppppppuVar12 = &pppppppuStack_148;
        }
        (**(code **)(*plVar34 + 0xa8))(plVar34,pppppppuVar12,uVar23);
        if (((ulong)plVar34 & 1) != 0) {
          lVar24 = param_4;
          FUN_10a2fda74(param_4,&pppppppuStack_148);
          if (lVar24 == 0) {
            FUN_109ffdddc(&UNK_10f639994);
            goto LAB_10a7e76b8;
          }
          plVar34 = *(long **)(lVar24 + 0x28);
          plVar39 = *(long **)(lVar24 + 0x30);
          while( true ) {
            fVar46 = (float)uVar35;
            if (plVar34 == plVar39) break;
            plVar19 = (long *)plVar34[1];
            if (plVar19 == (long *)0x0) {
LAB_10a7e70c4:
              lVar24 = 0;
            }
            else {
              __ZNSt3__119__shared_weak_count4lockEv();
              if (plVar19 == (long *)0x0) goto LAB_10a7e70c4;
              lVar24 = *plVar34;
              plVar17 = plVar19 + 1;
              do {
                lVar25 = *plVar17;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar10) {
                  *plVar17 = lVar25 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (lVar25 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
              }
            }
            fVar41 = (float)uVar44;
            if ((*(byte *)((long)param_7 + 7) & 1) == 0) {
              lVar25 = lStack_130;
              FUN_10a80ea70(lStack_130,uStack_128,lVar24);
              fVar41 = (float)uVar44;
              puVar29 = puVar47;
              uVar35 = uVar43;
              if (lVar25 != 0) goto LAB_10a7e732c;
              uVar35 = 0;
              uStack_1f8 = 0;
              uStack_200 = 0;
              uStack_1e8 = 0;
              uStack_1f0 = 0;
              uStack_1e0 = 0x3f800000;
              lVar38 = lStack_100;
              for (lVar25 = *(long *)(lVar24 + 0x188); lStack_100 = lVar38, lVar25 != 0;
                  lVar25 = *(long *)(lVar25 + 0x188)) {
                lStack_208 = lVar25;
                FUN_10a7fdc3c(lVar38,uStack_f8,lVar25);
                if (lVar38 != 0) {
                  plVar19 = &lStack_100;
                  FUN_10a80e324(plVar19,lVar25,&lStack_208);
                  func_0x000107c2ab1c(&uStack_200,plVar19 + 3,plVar19 + 3);
                }
                lVar38 = lStack_100;
              }
              fStack_184 = 0.0;
              uStack_180 = 0;
              uStack_190._4_4_ = 0.0;
              fStack_188 = 0.0;
              uStack_190._0_4_ = 1.0;
              uStack_17c = 0x3f800000;
              uStack_178 = 0;
              uStack_170 = 0;
              fStack_15c = 0.0;
              fStack_158 = 0.0;
              uStack_164 = 0;
              fStack_160 = 0.0;
              fStack_168 = 1.0;
              uStack_154 = 0x3f800000;
              iStack_20c = (int)uVar36;
              lStack_208 = 0;
              do {
                puVar29 = &uStack_200;
                func_0x00010925b970(puVar29,&iStack_20c);
                if (puVar29 != (undefined8 *)0x0) break;
                lVar25 = 0;
                ppuVar6 = &PTR_PTR_1132d6d90;
                if (*(undefined ***)(param_3 + 0x118) != (undefined **)0x0) {
                  ppuVar6 = *(undefined ***)(param_3 + 0x118);
                }
                auStack_1c8 = (undefined1  [8])0x0;
                auStack_1d0 = (undefined1  [8])0x3f800000;
                uStack_1b8 = 0;
                uStack_1c0 = 0x3f80000000000000;
                uStack_1a8 = 0x3f800000;
                uStack_1b0 = 0;
                uStack_198 = 0x3f80000000000000;
                uStack_1a0 = 0;
                puVar26 = (undefined4 *)(ppuVar6[4] + (long)iStack_20c * 0x40);
                do {
                  lVar31 = 0;
                  lVar38 = 0;
                  puVar33 = puVar26;
                  do {
                    iVar21 = (int)lVar25;
                    puVar47 = (undefined8 *)((long)auStack_1c8 + lVar38 * 0x10 + 4);
                    if (iVar21 != 3) {
                      puVar47 = (undefined8 *)((long)auStack_1d0 + lVar31);
                    }
                    puVar29 = (undefined8 *)((long)auStack_1c8 + lVar38 * 2 * 8);
                    if (iVar21 != 2) {
                      puVar29 = puVar47;
                    }
                    puVar47 = (undefined8 *)((long)auStack_1d0 + lVar38 * 0x10 + 4);
                    if (iVar21 != 1) {
                      puVar47 = puVar29;
                    }
                    *(undefined4 *)puVar47 = *puVar33;
                    lVar38 = lVar38 + 1;
                    lVar31 = lVar31 + 0x10;
                    puVar33 = puVar33 + 1;
                  } while (lVar31 != 0x40);
                  lVar25 = lVar25 + 1;
                  puVar26 = puVar26 + 4;
                } while (lVar25 != 4);
                FUN_10a7f8dc4(auStack_24c,ppuVar1[6],ppuVar1[0xc]);
                func_0x000109519fd0(&uStack_d0,auStack_1d0,auStack_24c);
                auStack_1c8 = (undefined1  [8])uStack_c8;
                auStack_1d0 = (undefined1  [8])uStack_d0;
                uStack_1a8 = CONCAT44(uStack_a4,fStack_a8);
                uStack_198 = CONCAT44(uStack_94,fStack_98);
                uVar44 = CONCAT44(fStack_9c,fStack_a0);
                uStack_1b8 = uStack_b8;
                uStack_1c0 = uStack_c0;
                uStack_1b0 = uStack_b0;
                uStack_1a0 = uVar44;
                func_0x000109519fd0(&uStack_d0,auStack_1d0,&uStack_190);
                uStack_178 = uStack_b8;
                fStack_188 = SUB84(uStack_c8,0);
                fStack_184 = (float)((ulong)uStack_c8 >> 0x20);
                uStack_190._0_4_ = SUB84(uStack_d0,0);
                uStack_190._4_4_ = (float)((ulong)uStack_d0 >> 0x20);
                uStack_180 = (undefined4)uStack_c0;
                uStack_17c = (int)(uStack_c0 >> 0x20);
                uStack_170 = uStack_b0;
                puVar47 = (undefined8 *)CONCAT44(fStack_9c,fStack_a0);
                fStack_168 = fStack_a8;
                uStack_164 = uStack_a4;
                fStack_158 = fStack_98;
                uStack_154 = uStack_94;
                fStack_160 = fStack_a0;
                fStack_15c = fStack_9c;
                iStack_20c = *(int *)(*(long *)(param_3 + 0x38) + (long)iStack_20c * 4);
                uVar35 = uStack_b0;
              } while (iStack_20c != -1);
              uVar18 = *(undefined8 *)(lVar24 + 0x140);
              if (*param_7 == 1) {
                FUN_10a7f8bd0(&uStack_190);
                uStack_d0 = (undefined8 *)CONCAT44((int)puVar47,(int)uVar35);
                uStack_c8 = (long *)CONCAT44((int)uVar43,(int)uVar44);
                FUN_10a3e82bc(uVar18,&uStack_d0);
              }
              else {
                func_0x00010a3e8440(uVar18,&uStack_190);
              }
              func_0x000107c2ab24(&uStack_200);
            }
            else {
              puVar29 = puVar47;
              uVar35 = uVar43;
              if (*param_7 == 2) {
                *(undefined8 *)((ulong)&uStack_d0 | 4) = 0;
                ((undefined8 *)((ulong)&uStack_d0 | 4))[1] = 0;
                uStack_d0 = (undefined8 *)CONCAT44(uStack_d0._4_4_,0x3f800000);
                uStack_c0 = CONCAT44(0x3f800000,(float)uStack_c0);
                uStack_b8 = 0;
                uStack_b0 = 0;
                fStack_9c = 0.0;
                fStack_98 = 0.0;
                uStack_a4 = 0;
                fStack_a0 = 0.0;
                fStack_a8 = 1.0;
                uStack_94 = 0x3f800000;
                uVar35 = uVar36;
                do {
                  FUN_10a7f8dc4(auStack_1d0,ppuVar1[6],ppuVar1[0xc],uVar35);
                  func_0x000109519fd0(&uStack_190,auStack_1d0,&uStack_d0);
                  lVar25 = 0;
                  uStack_c8 = (long *)CONCAT44(fStack_184,fStack_188);
                  uStack_d0 = uStack_190;
                  uStack_c0 = CONCAT44(uStack_17c,uStack_180);
                  uStack_b8 = uStack_178;
                  fStack_a8 = fStack_168;
                  uStack_a4 = uStack_164;
                  uStack_b0 = uStack_170;
                  fStack_98 = fStack_158;
                  uStack_94 = uStack_154;
                  fStack_a0 = fStack_160;
                  fStack_9c = fStack_15c;
                  ppuVar6 = &PTR_PTR_1132d6d90;
                  if (*(undefined ***)(param_3 + 0x118) != (undefined **)0x0) {
                    ppuVar6 = *(undefined ***)(param_3 + 0x118);
                  }
                  auStack_1c8 = (undefined1  [8])0x0;
                  auStack_1d0 = (undefined1  [8])0x3f800000;
                  uVar44 = 0;
                  uStack_1b8 = 0;
                  uStack_1c0 = 0x3f80000000000000;
                  uStack_1a8 = 0x3f800000;
                  uStack_1b0 = 0;
                  uStack_198 = 0x3f80000000000000;
                  uStack_1a0 = 0;
                  puVar26 = (undefined4 *)(ppuVar6[4] + (long)(int)uVar35 * 0x40);
                  do {
                    lVar31 = 0;
                    lVar38 = 0;
                    puVar33 = puVar26;
                    do {
                      iVar21 = (int)lVar25;
                      puVar47 = (undefined8 *)((long)auStack_1c8 + lVar38 * 0x10 + 4);
                      if (iVar21 != 3) {
                        puVar47 = (undefined8 *)((long)auStack_1d0 + lVar31);
                      }
                      puVar29 = (undefined8 *)((long)auStack_1c8 + lVar38 * 2 * 8);
                      if (iVar21 != 2) {
                        puVar29 = puVar47;
                      }
                      puVar47 = (undefined8 *)((long)auStack_1d0 + lVar38 * 0x10 + 4);
                      if (iVar21 != 1) {
                        puVar47 = puVar29;
                      }
                      *(undefined4 *)puVar47 = *puVar33;
                      lVar38 = lVar38 + 1;
                      lVar31 = lVar31 + 0x10;
                      puVar33 = puVar33 + 1;
                    } while (lVar31 != 0x40);
                    lVar25 = lVar25 + 1;
                    puVar26 = puVar26 + 4;
                  } while (lVar25 != 4);
                  func_0x000109519fd0(&uStack_190,auStack_1d0,&uStack_d0);
                  uStack_c8 = (long *)CONCAT44(fStack_184,fStack_188);
                  uStack_d0 = uStack_190;
                  uStack_b8 = uStack_178;
                  uStack_c0 = CONCAT44(uStack_17c,uStack_180);
                  uStack_b0 = uStack_170;
                  fStack_a8 = fStack_168;
                  uStack_a4 = uStack_164;
                  fStack_98 = fStack_158;
                  uStack_94 = uStack_154;
                  fStack_a0 = fStack_160;
                  fStack_9c = fStack_15c;
                  uVar42 = *(uint *)(*(long *)(param_3 + 0x38) + (long)(int)uVar35 * 4);
                  uVar35 = (ulong)uVar42;
                } while (uVar42 != 0xffffffff);
                lVar25 = *(long *)(param_6 + 0x140);
                if ((*(byte *)(lVar25 + 0x2a) & 0x24) != 0) {
                  func_0x00010a3e8fd4(lVar25);
                }
                func_0x000109519fd0(&uStack_190,lVar25 + 0xc0,&uStack_d0);
                uStack_c8 = (long *)CONCAT44(fStack_184,fStack_188);
                uStack_d0 = uStack_190;
                uStack_c0 = CONCAT44(uStack_17c,uStack_180);
                uStack_b8 = uStack_178;
                fStack_a8 = fStack_168;
                uStack_a4 = uStack_164;
                uStack_b0 = uStack_170;
                fStack_98 = fStack_158;
                uStack_94 = uStack_154;
                fStack_a0 = fStack_160;
                fStack_9c = fStack_15c;
                uVar35 = (ulong)(uint)fStack_158;
                puVar47 = (undefined8 *)CONCAT44(fStack_15c,fStack_160);
                uStack_190._0_4_ = fStack_160;
                uStack_190._4_4_ = fStack_15c;
                fStack_188 = fStack_158;
                FUN_10a3e8ad4(*(undefined8 *)(lVar24 + 0x140),&uStack_190);
                if (*(char *)((long)param_7 + 5) == '\x01') {
                  fStack_188 = SQRT((float)uStack_b0 * (float)uStack_b0 +
                                    uStack_b0._4_4_ * uStack_b0._4_4_ + fStack_a8 * fStack_a8);
                  uVar35 = (ulong)(uint)fStack_188;
                  fVar46 = (float)((ulong)uStack_d0 >> 0x20);
                  fVar41 = (float)(uStack_c0 >> 0x20);
                  fVar46 = SUB84(uStack_d0,0) * SUB84(uStack_d0,0) + fVar46 * fVar46;
                  fVar41 = (float)uStack_c0 * (float)uStack_c0 + fVar41 * fVar41;
                  uVar44 = CONCAT44(fVar41,fVar46);
                  uStack_190._0_4_ = SQRT(fVar46 + SUB84(uStack_c8,0) * SUB84(uStack_c8,0));
                  uStack_190._4_4_ = SQRT(fVar41 + (float)uStack_b8 * (float)uStack_b8);
                  puVar47 = (undefined8 *)CONCAT44(uStack_190._4_4_,(float)uStack_190);
                  uVar43 = uStack_c0;
                  FUN_10a3e857c(*(undefined8 *)(lVar24 + 0x140),&uStack_190);
                }
                if (*(char *)((long)param_7 + 6) == '\x01') {
                  uVar18 = *(undefined8 *)(lVar24 + 0x140);
                  FUN_10a7f8bd0(&uStack_d0);
                  uStack_190._0_4_ = (float)uVar35;
                  uStack_190._4_4_ = SUB84(puVar47,0);
                  fStack_188 = (float)uVar44;
                  fStack_184 = (float)uVar43;
                  FUN_10a3e8838(uVar18,&uStack_190);
                }
              }
              else {
LAB_10a7e732c:
                uVar43 = param_1[0xc];
                if ((ulong)((long)(param_1[0xd] - uVar43) >> 4) <= uVar36) goto LAB_10a7e76b8;
                FUN_10a7f8b48(ppuVar1[0xc],uVar36);
                uStack_d0 = (undefined8 *)CONCAT44((int)puVar29,fVar46);
                uStack_c8 = (long *)CONCAT44((int)uVar35,fVar41);
                uVar18 = *(undefined8 *)(lVar24 + 0x40);
                uVar45 = *(undefined8 *)(lVar24 + 0x48);
                uStack_190._0_4_ = (float)uVar18;
                uStack_190._4_4_ = (float)((ulong)uVar18 >> 0x20);
                fStack_188 = (float)uVar45;
                fStack_184 = (float)((ulong)uVar45 >> 0x20);
                puVar20 = param_1 + 7;
                FUN_10a80df24(puVar20,uVar18,uVar45,&uStack_190);
                func_0x00010a7e97b8(uVar43 + uVar36 * 0x10,&uStack_d0,puVar20 + 4);
                uVar40 = *(undefined8 *)(lVar24 + 0x140);
                uVar18 = *(undefined8 *)(lVar24 + 0x40);
                uVar45 = *(undefined8 *)(lVar24 + 0x48);
                uStack_190._0_4_ = (float)uVar18;
                uStack_190._4_4_ = (float)((ulong)uVar18 >> 0x20);
                fStack_188 = (float)uVar45;
                fStack_184 = (float)((ulong)uVar45 >> 0x20);
                puVar20 = param_1 + 2;
                puVar47 = puVar29;
                uVar43 = uVar35;
                fVar48 = fVar46;
                fVar56 = fVar41;
                FUN_10a80dabc(puVar20,uVar18,uVar45,&uStack_190);
                FUN_10a7f8bd0(puVar20 + 4);
                fVar54 = (float)uVar43;
                fVar51 = (float)uVar35;
                fVar52 = SUB84(puVar47,0);
                fVar49 = SUB84(puVar29,0);
                fVar50 = fVar51 * fVar56 + fVar41 * fVar54;
                uVar44 = (ulong)(uint)fVar50;
                uStack_d0 = (undefined8 *)
                            CONCAT44((fVar51 * fVar52 + fVar49 * fVar54 + fVar46 * fVar56) -
                                     fVar41 * fVar48,
                                     (fVar51 * fVar48 + fVar46 * fVar54 + fVar41 * fVar52) -
                                     fVar49 * fVar56);
                fVar50 = (fVar50 + fVar49 * fVar48) - fVar46 * fVar52;
                uVar35 = (ulong)(uint)fVar50;
                uStack_c8 = (long *)CONCAT44(((-(fVar48 * fVar46) + fVar51 * fVar54) -
                                             fVar49 * fVar52) - fVar41 * fVar56,fVar50);
                FUN_10a3e82bc(uVar40,&uStack_d0);
                if (*param_7 == 0) {
                  uVar42 = *(uint *)(ppuVar1[6] + uVar36 * 4);
                  uVar35 = (ulong)uVar42;
                  uStack_d0 = (undefined8 *)CONCAT44(uVar42,uVar42);
                  uStack_c8 = (long *)CONCAT44(uStack_c8._4_4_,uVar42);
                  FUN_10a3e814c(*(undefined8 *)(lVar24 + 0x140),&uStack_d0);
                }
              }
            }
            plVar34 = plVar34 + 2;
          }
        }
      }
      if ((char)bStack_131 < '\0') {
        __ZdlPv(pppppppuStack_148);
      }
      uVar36 = uVar36 + 1;
    } while ((long)uVar36 < (long)*(int *)(param_3 + 0x20));
  }
  FUN_10a80e724(&lStack_130);
  FUN_10a80e2dc(&lStack_100);
  return 1;
LAB_10a7e769c:
  FUN_109ffdddc(&UNK_10f639994);
LAB_10a7e76b8:
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10a7e76bc);
  (*pcVar15)();
}



/* Entry: 10a7e77e0; end: 10a7e78db;  */

void FUN_10a7e77e0(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  FUN_10a7e78dc(*(undefined8 *)(param_2 + 0x10),&uStack_40,param_3);
  lVar5 = 0x38;
  __Znwm();
  FUN_10a7e5b3c();
  FUN_10a7e628c(lVar5 + 0x28,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30));
  *(undefined4 *)(lVar5 + 8) = *(undefined4 *)(param_2 + 8);
  FUN_10a7e7b20(*(undefined8 *)(lVar5 + 0x20),param_3,*(undefined8 *)(param_2 + 0x20));
  plVar4 = plStack_38;
  *param_1 = lVar5;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a7e78dc; end: 10a7e7b1f;  */

void FUN_10a7e78dc(undefined8 *****param_1,undefined8 param_2,undefined8 ****param_3)

{
  undefined8 ****ppppuVar1;
  undefined8 *****pppppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 *****pppppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ****ppppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 *****unaff_x20;
  undefined8 *****unaff_x21;
  undefined8 ****unaff_x22;
  undefined8 ***pppuVar13;
  undefined8 ****unaff_x23;
  undefined8 *****unaff_x24;
  undefined8 **ppuVar14;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  undefined8 **ppuVar18;
  undefined8 **ppuVar19;
  undefined8 **ppuVar20;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_128;
  undefined8 ****ppppuStack_120;
  undefined8 ***pppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ****ppppuStack_108;
  undefined8 ****ppppuStack_100;
  undefined ***pppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 ****ppppuStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 ****ppppuStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_d8 = (undefined8 *****)0x10a80d8a8;
  ppuStack_d0 = &PTR_FUN_110c1ff28;
  uStack_c8 = param_2;
  if (param_1 == (undefined8 *****)0x0) {
    ppppuStack_98 = (undefined8 *****)0x0;
    pppppuVar11 = &ppppuStack_98;
    FUN_10a2e9e64(&ppppuStack_d8);
    goto LAB_10a7e7a88;
  }
  unaff_x20 = param_1;
  if (param_3 == (undefined8 ****)0x0) {
    FUN_10a80d818(&ppppuStack_98,param_1);
    pppppuVar11 = &ppppuStack_98;
    FUN_10a80d78c(&ppppuStack_d8);
    if ((undefined8 ****)pppuStack_90 == (undefined8 ****)0x0) goto LAB_10a7e7a88;
    ppppuVar7 = (undefined8 ****)(pppuStack_90 + 1);
    do {
      pppuVar13 = *ppppuVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppuVar7,0x10);
      if (bVar4) {
        *ppppuVar7 = (undefined8 ***)((long)pppuVar13 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_10a7e7a6c:
    pppuVar6 = pppuStack_90;
    if (pppuVar13 == (undefined8 ***)0x0) {
      (*(code *)(*pppuStack_90)[2])(pppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar6);
    }
  }
  else {
    unaff_x21 = (undefined8 *****)param_1[8];
    unaff_x22 = param_1[9];
    if (*(char *)(param_3 + 0x17) == '\x01') {
      ppppuStack_98 = (undefined8 *****)0x10a80d8a8;
      pppuStack_90 = (undefined8 ***)&PTR_FUN_110c1ff28;
      pppppuVar11 = unaff_x21;
      ppppuVar7 = unaff_x22;
      uStack_88 = param_2;
      FUN_10a069d9c(param_3,unaff_x21,unaff_x22,&ppppuStack_98);
    }
    else {
      ppppuVar7 = param_3 + 0x11;
      ppppuVar12 = param_3;
      ppppuStack_98 = unaff_x21;
      pppuStack_90 = unaff_x22;
      func_0x00010a35bf90(ppppuVar7,&ppppuStack_98);
      ppppuVar1 = &pppuStack_90;
      pppppuVar11 = &ppppuStack_98;
      if (ppppuVar7 != (undefined8 ****)0x0) {
        ppppuVar1 = ppppuVar7 + 5;
        pppppuVar11 = (undefined8 *****)(ppppuVar7 + 4);
      }
      unaff_x23 = (undefined8 ****)*ppppuVar1;
      unaff_x24 = (undefined8 *****)*pppppuVar11;
      if (unaff_x21 == unaff_x24 && unaff_x22 == unaff_x23) {
        FUN_10a80d818(&ppppuStack_98,param_1);
        pppppuVar11 = &ppppuStack_98;
        FUN_10a80d78c(&ppppuStack_d8);
        param_3 = ppppuVar12;
        if ((undefined8 ****)pppuStack_90 == (undefined8 ****)0x0) goto LAB_10a7e7a88;
        ppppuVar7 = (undefined8 ****)(pppuStack_90 + 1);
        do {
          pppuVar13 = *ppppuVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppuVar7,0x10);
          if (bVar4) {
            *ppppuVar7 = (undefined8 ***)((long)pppuVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_10a7e7a6c;
      }
      ppppuStack_98 = ppppuStack_d8;
      (*(code *)ppuStack_d0[3])(&pppuStack_90,&ppuStack_d0);
      pppppuVar11 = unaff_x24;
      ppppuVar7 = unaff_x23;
      FUN_10a069d9c(param_3,unaff_x24,unaff_x23,&ppppuStack_98);
    }
    (*(code *)*pppuStack_90)(&pppuStack_90);
    param_3 = ppppuVar7;
    unaff_x20 = &ppppuStack_98;
  }
LAB_10a7e7a88:
  pppuVar8 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10a80c7b4(&ppppuStack_98);
    (*(code *)*ppuStack_d0)(&ppuStack_d0);
    pppuVar9 = pppuVar8;
    __Unwind_Resume();
    pcStack_e8 = FUN_10a7e7b20;
    pppuVar13 = param_3[4];
    ppppuStack_120 = unaff_x24;
    pppuStack_118 = unaff_x23;
    pppuStack_110 = unaff_x22;
    ppppuStack_108 = unaff_x21;
    ppppuStack_100 = unaff_x20;
    pppuStack_f8 = pppuVar8;
    puStack_f0 = &stack0xfffffffffffffff0;
    if (pppuVar13 != (undefined8 ***)0x0) {
      do {
        pppuStack_128 = (undefined8 ***)pppuVar13[3];
        pppuStack_130 = (undefined8 ***)pppuVar13[2];
        pppppuVar10 = pppppuVar11 + 0x11;
        func_0x00010a35bf90(pppppuVar10,&pppuStack_130);
        pppppuVar2 = (undefined8 *****)((ulong)&pppuStack_130 | 8);
        pppppuVar5 = (undefined8 *****)&pppuStack_130;
        if (pppppuVar10 != (undefined8 *****)0x0) {
          pppppuVar2 = pppppuVar10 + 5;
          pppppuVar5 = pppppuVar10 + 4;
        }
        pppuStack_128 = *pppppuVar2;
        pppuStack_130 = *pppppuVar5;
        pppuVar8 = pppuVar9 + 2;
        FUN_10a80dabc();
        ppuVar14 = pppuVar13[8];
        ppuVar16 = pppuVar13[0xb];
        ppuVar15 = pppuVar13[10];
        ppuVar20 = pppuVar13[5];
        ppuVar19 = pppuVar13[4];
        ppuVar18 = pppuVar13[7];
        ppuVar17 = pppuVar13[6];
        pppuVar8[9] = (undefined **)pppuVar13[9];
        pppuVar8[8] = (undefined **)ppuVar14;
        pppuVar8[0xb] = (undefined **)ppuVar16;
        pppuVar8[10] = (undefined **)ppuVar15;
        pppuVar8[5] = (undefined **)ppuVar20;
        pppuVar8[4] = (undefined **)ppuVar19;
        pppuVar8[7] = (undefined **)ppuVar18;
        pppuVar8[6] = (undefined **)ppuVar17;
        pppuVar13 = (undefined8 ***)*pppuVar13;
      } while (pppuVar13 != (undefined8 ***)0x0);
    }
    pppuVar13 = param_3[9];
    if (pppuVar13 != (undefined8 ***)0x0) {
      do {
        pppuStack_128 = (undefined8 ***)pppuVar13[3];
        pppuStack_130 = (undefined8 ***)pppuVar13[2];
        pppppuVar10 = pppppuVar11 + 0x11;
        func_0x00010a35bf90(pppppuVar10,&pppuStack_130);
        pppppuVar2 = (undefined8 *****)((ulong)&pppuStack_130 | 8);
        pppppuVar5 = (undefined8 *****)&pppuStack_130;
        if (pppppuVar10 != (undefined8 *****)0x0) {
          pppppuVar2 = pppppuVar10 + 5;
          pppppuVar5 = pppppuVar10 + 4;
        }
        pppuStack_128 = *pppppuVar2;
        pppuStack_130 = *pppppuVar5;
        pppuVar8 = pppuVar9 + 7;
        FUN_10a80df24();
        ppuVar14 = pppuVar13[4];
        pppuVar8[5] = (undefined **)pppuVar13[5];
        pppuVar8[4] = (undefined **)ppuVar14;
        pppuVar13 = (undefined8 ***)*pppuVar13;
      } while (pppuVar13 != (undefined8 ***)0x0);
    }
    return;
  }
  return;
}



/* Entry: 10a7e7b20; end: 10a7e7c23;  */

void FUN_10a7e7b20(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_50;
  long lStack_48;
  
  plVar4 = *(long **)(param_3 + 0x20);
  if (plVar4 != (long *)0x0) {
    do {
      lStack_48 = plVar4[3];
      lStack_50 = plVar4[2];
      lVar3 = param_2 + 0x88;
      func_0x00010a35bf90(lVar3,&lStack_50);
      puVar1 = (undefined8 *)((ulong)&lStack_50 | 8);
      plVar2 = &lStack_50;
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(lVar3 + 0x28);
        plVar2 = (long *)(lVar3 + 0x20);
      }
      lStack_48 = *puVar1;
      lStack_50 = *plVar2;
      lVar3 = param_1 + 0x10;
      FUN_10a80dabc();
      lVar5 = plVar4[8];
      lVar7 = plVar4[0xb];
      lVar6 = plVar4[10];
      lVar11 = plVar4[5];
      lVar10 = plVar4[4];
      lVar9 = plVar4[7];
      lVar8 = plVar4[6];
      *(long *)(lVar3 + 0x48) = plVar4[9];
      *(long *)(lVar3 + 0x40) = lVar5;
      *(long *)(lVar3 + 0x58) = lVar7;
      *(long *)(lVar3 + 0x50) = lVar6;
      *(long *)(lVar3 + 0x28) = lVar11;
      *(long *)(lVar3 + 0x20) = lVar10;
      *(long *)(lVar3 + 0x38) = lVar9;
      *(long *)(lVar3 + 0x30) = lVar8;
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
  plVar4 = *(long **)(param_3 + 0x48);
  if (plVar4 != (long *)0x0) {
    do {
      lStack_48 = plVar4[3];
      lStack_50 = plVar4[2];
      lVar3 = param_2 + 0x88;
      func_0x00010a35bf90(lVar3,&lStack_50);
      puVar1 = (undefined8 *)((ulong)&lStack_50 | 8);
      plVar2 = &lStack_50;
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(lVar3 + 0x28);
        plVar2 = (long *)(lVar3 + 0x20);
      }
      lStack_48 = *puVar1;
      lStack_50 = *plVar2;
      lVar3 = param_1 + 0x38;
      FUN_10a80df24();
      lVar5 = plVar4[4];
      *(long *)(lVar3 + 0x28) = plVar4[5];
      *(long *)(lVar3 + 0x20) = lVar5;
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
  return;
}



/* Entry: 10a7e7c24; end: 10a7e7f1f;  */

void FUN_10a7e7c24(long param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar12 = (long *)(param_1 + 0x20);
  lVar14 = *plVar12;
  lVar13 = *(long *)(param_1 + 0x28);
  while (lVar13 != lVar14) {
    lVar13 = lVar13 + -0x80;
    FUN_10a042100(lVar13);
  }
  *(long *)(param_1 + 0x28) = lVar14;
  func_0x000107c283f4(param_1 + 0x38);
  lVar14 = param_1;
  FUN_10a7e61e8();
  if (lVar14 != 0) {
    ppuVar2 = &PTR_PTR_1132d70f0;
    if (*(undefined ***)(lVar14 + 0xd0) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(lVar14 + 0xd0);
    }
    if (0 < *(int *)(ppuVar2 + 4)) {
      lVar13 = 0;
      lVar14 = 0;
      lVar15 = 8;
      do {
        puVar6 = ppuVar2[3];
        ppuVar3 = ppuVar2 + 3;
        if (((ulong)puVar6 & 1) != 0) {
          ppuVar3 = (undefined **)(puVar6 + lVar15 + -1);
        }
        puVar16 = *ppuVar3;
        uVar17 = (ulong)*(uint *)(ppuVar2[7] + lVar14 * 4);
        if ((int)*(uint *)(ppuVar2[7] + lVar14 * 4) < 0) {
          func_0x000107c2b054(&uStack_a0,&UNK_10f678718);
        }
        else {
          ppuVar3 = ppuVar2 + 3;
          if (((ulong)puVar6 & 1) != 0) {
            ppuVar3 = (undefined **)(puVar6 + uVar17 * 8 + 7);
          }
          puVar7 = (undefined8 *)*ppuVar3;
          if (*(char *)((long)puVar7 + 0x17) < '\0') {
            func_0x000107c3192c(&uStack_a0,*puVar7,puVar7[1]);
          }
          else {
            uStack_98 = puVar7[1];
            uStack_a0 = *puVar7;
            lStack_90 = puVar7[2];
          }
        }
        ppuVar3 = &PTR_PTR_1132d6d90;
        if ((undefined **)ppuVar2[0x23] != (undefined **)0x0) {
          ppuVar3 = (undefined **)ppuVar2[0x23];
        }
        puVar1 = (undefined4 *)(ppuVar3[4] + lVar13);
        uStack_e0 = *puVar1;
        uStack_d0 = puVar1[1];
        uStack_c0 = puVar1[2];
        uStack_b0 = puVar1[3];
        uStack_dc = puVar1[4];
        uStack_cc = puVar1[5];
        uStack_bc = puVar1[6];
        uStack_ac = puVar1[7];
        uStack_d8 = puVar1[8];
        uStack_c8 = puVar1[9];
        uStack_b8 = puVar1[10];
        uStack_a8 = puVar1[0xb];
        uStack_d4 = puVar1[0xc];
        uStack_c4 = puVar1[0xd];
        uStack_b4 = puVar1[0xe];
        uStack_a4 = puVar1[0xf];
        uVar4 = *(ulong *)(param_1 + 0x28);
        if (uVar4 < *(ulong *)(param_1 + 0x30)) {
          FUN_10a7fd6bc(uVar4,lVar14,puVar16,&uStack_a0,uVar17,&uStack_e0);
          plVar9 = (long *)(uVar4 + 0x80);
          *(long **)(param_1 + 0x28) = plVar9;
        }
        else {
          lVar18 = uVar4 - *plVar12;
          uVar4 = (lVar18 >> 7) + 1;
          if (uVar4 >> 0x39 != 0) {
            FUN_10a041f68();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a7e7ee4);
            (*pcVar5)();
          }
          uVar8 = *(ulong *)(param_1 + 0x30) - *plVar12;
          uVar10 = (long)uVar8 >> 6;
          if (uVar10 <= uVar4) {
            uVar10 = uVar4;
          }
          if (0x7fffffffffffff7f < uVar8) {
            uVar10 = 0x1ffffffffffffff;
          }
          plStack_68 = plVar12;
          if (uVar10 == 0) {
            plVar9 = (long *)0x0;
          }
          else {
            plVar9 = plVar12;
            FUN_10a041f7c();
          }
          lVar18 = (long)plVar9 + lVar18;
          plStack_70 = plVar9 + uVar10 * 0x10;
          plStack_88 = plVar9;
          plStack_80 = (long *)lVar18;
          plStack_78 = (long *)lVar18;
          FUN_10a7fd6bc(lVar18,lVar14,puVar16,&uStack_a0,uVar17,&uStack_e0);
          plStack_78 = (long *)(lVar18 + 0x80);
          lVar18 = lVar18 + (*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x28));
          FUN_10a7fd788(plVar12,*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x28),lVar18);
          plVar9 = plStack_78;
          plStack_88 = *(long **)(param_1 + 0x20);
          *(long *)(param_1 + 0x20) = lVar18;
          uVar11 = *(undefined8 *)(param_1 + 0x30);
          *(long **)(param_1 + 0x30) = plStack_70;
          *(long **)(param_1 + 0x28) = plStack_78;
          plStack_80 = plStack_88;
          plStack_78 = plStack_88;
          plStack_70 = (long *)uVar11;
          func_0x00010a7fd838(&plStack_88);
        }
        *(long **)(param_1 + 0x28) = plVar9;
        func_0x000107c2827c(param_1 + 0x38,puVar16,puVar16);
        if (lStack_90 < 0) {
          __ZdlPv(uStack_a0);
        }
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x40;
        lVar15 = lVar15 + 8;
      } while (lVar14 < *(int *)(ppuVar2 + 4));
    }
  }
  return;
}



/* Entry: 10a7e7f20; end: 10a7e8053;  */

void FUN_10a7e7f20(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_1 + 0x10);
  FUN_10a7e20bc(lVar6 + 0xf8);
  FUN_10a7e2370(lVar6 + 0xf8,0);
  FUN_10a7e2370(lVar6 + 0xf8,1);
  lStack_50 = *(long *)(lVar6 + 0x108);
  plVar2 = *(long **)(lVar6 + 0x110);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(param_1 + 0x60) == lStack_50) {
      return;
    }
    plStack_48 = (long *)0x0;
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
    lVar7 = *(long *)(param_1 + 0x60);
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
    if (lVar7 == lStack_50) {
      return;
    }
    plStack_48 = *(long **)(lVar6 + 0x110);
    lStack_50 = *(long *)(lVar6 + 0x108);
    if (*(long *)(lVar6 + 0x110) != 0) {
      plVar2 = (long *)(*(long *)(lVar6 + 0x110) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  FUN_10a009fa8(param_1 + 0x60,&lStack_50);
  plVar2 = plStack_48;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  FUN_10a7e7c24(param_1);
  return;
}



/* Entry: 10a7e8054; end: 10a7e8137;  */

undefined8 * FUN_10a7e8054(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 ***pppuVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    if ((long)uStack_48 < 0) {
      __ZdlPv(ppuStack_58);
    }
    __Unwind_Resume();
    *param_1 = &PTR_DAT_110c1bbd0;
    lVar7 = param_2[1];
    uVar8 = *param_2;
    param_1[2] = param_2[1];
    param_1[1] = uVar8;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined1 *)(param_1 + 3) = 0;
    func_0x000107c2b054(param_1 + 4,&UNK_10f678718);
    func_0x000107c2b054(param_1 + 7,&UNK_10f678718);
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xd] = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined1 *)((long)param_1 + 0xcc) = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    param_1[0x1d] = 0;
    param_1[0x1c] = 0;
    param_1[0x20] = 0;
    param_1[0x1f] = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
    param_1[0x22] = 0;
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 0x23) = 0x3f800000;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x24] = 0;
    puVar6 = (undefined8 *)0x70;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_DAT_110ba7638;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = &PTR_FUN_110c6ab60;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xb] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 10) = 0;
    param_1[0x27] = puVar6 + 3;
    param_1[0x28] = puVar6;
    *(undefined1 *)((long)param_1 + 0xa7) = 4;
    *(undefined4 *)(param_1 + 0x12) = 0x646e6148;
    *(undefined1 *)((long)param_1 + 0x94) = 0;
    return param_1;
  }
  if (param_3 < 0x17) {
    uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
    pppuVar5 = &ppuStack_58;
    if (param_3 == 0) goto LAB_10a7e80d4;
  }
  else {
    pppuVar2 = (undefined8 ***)0x19;
    if ((param_3 | 7) != 0x17) {
      pppuVar2 = (undefined8 ***)((param_3 | 7) + 1);
    }
    pppuVar5 = pppuVar2;
    __Znwm();
    uStack_48 = (ulong)pppuVar2 | 0x8000000000000000;
    ppuStack_58 = pppuVar5;
    uStack_50 = param_3;
  }
  _memmove(pppuVar5,param_2,param_3);
LAB_10a7e80d4:
  *(undefined1 *)((long)pppuVar5 + param_3) = 0;
  param_1 = param_1 + 7;
  func_0x0001067e045c(param_1,&ppuStack_58);
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return (undefined8 *)(ulong)(param_1 != (undefined8 *)0x0);
}



/* Entry: 10a7e8138; end: 10a7e82c3;  */

undefined8 * FUN_10a7e8138(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_DAT_110c1bbd0;
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar6;
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
  *(undefined1 *)(param_1 + 3) = 0;
  func_0x000107c2b054(param_1 + 4,&UNK_10f678718);
  func_0x000107c2b054(param_1 + 7,&UNK_10f678718);
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  puVar4 = (undefined8 *)0x70;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110ba7638;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[3] = &PTR_FUN_110c6ab60;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xb] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  *(undefined4 *)(puVar4 + 10) = 0;
  param_1[0x27] = puVar4 + 3;
  param_1[0x28] = puVar4;
  *(undefined1 *)((long)param_1 + 0xa7) = 4;
  *(undefined4 *)(param_1 + 0x12) = 0x646e6148;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  return param_1;
}



/* Entry: 10a7e82c4; end: 10a7e8333;  */

void FUN_10a7e82c4(long param_1,long param_2)

{
  undefined1 uStack_29;
  long lStack_28;
  
  FUN_10a7e8334();
  if (*(char *)(param_1 + 0x4f) < '\0') {
    if (*(long *)(param_1 + 0x40) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x4f) == '\0') {
    return;
  }
  if ((*(byte *)(param_2 + 0x1f8) & 1) == 0) {
    *(undefined8 *)(param_2 + 0x1f0) = 0;
    *(undefined8 *)(param_2 + 0x1d8) = 0;
    *(undefined8 *)(param_2 + 0x1d0) = 0;
    *(undefined8 *)(param_2 + 0x1e8) = 0;
    *(undefined8 *)(param_2 + 0x1e0) = 0;
    *(undefined4 *)(param_2 + 0x1f0) = 0x3f800000;
    *(undefined1 *)(param_2 + 0x1f8) = 1;
  }
  param_2 = param_2 + 0x1d0;
  lStack_28 = param_1 + 0x18;
  FUN_10a507b84(param_2,lStack_28,&UNK_10dd5b8f9,&lStack_28,&uStack_29);
  FUN_10a22f5ac(param_2 + 0x80,param_1 + 0x88,param_1 + 0x88);
  return;
}



/* Entry: 10a7e8334; end: 10a7e8427;  */

void FUN_10a7e8334(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    plVar6 = (long *)0x0;
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x100);
    plVar6 = *(long **)(lVar5 + 0x108);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  FUN_10a32df84(param_1 + 0x18,lVar7);
  if ((lVar7 == 0) || (func_0x00010aae9fd8(), lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 8) + 0xe0) + 0x28);
  }
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10a7e8428; end: 10a7e842f;  */

void FUN_10a7e8428(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x88) = param_2;
  return;
}



/* Entry: 10a7e8430; end: 10a7e9643;  */

/* WARNING: Removing unreachable block (ram,0x00010a7e8668) */

undefined8
FUN_10a7e8430(ulong param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,long param_5,
             long param_6,long param_7,long param_8,long param_9,int *param_10)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined4 *puVar13;
  int *piVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  ulong uVar26;
  long lVar27;
  undefined4 uVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 *puVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uStack_290;
  ulong uStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  int iStack_24c;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined1 auStack_210 [64];
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  float fStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  
  lVar21 = *(long *)(param_6 + 0x108);
  if (lVar21 == 0) {
    return 0;
  }
  FUN_10a7e8334();
  if (*(long *)(param_5 + 8) == 0) {
    return 0;
  }
  iVar6 = *(int *)(*(long *)(*(long *)(param_5 + 8) + 0xe0) + 0x28);
  if (iVar6 - 3U < 0xfffffffe) {
    return 0;
  }
  FUN_10a4d5e30(&lStack_268,lVar21,param_5 + 0x18);
  lVar21 = lStack_268;
  uVar22 = 0;
  if (lStack_268 == 0) goto LAB_10a7e94c4;
  piVar14 = (int *)&UNK_110c1f678;
  if (iVar6 < 3) {
    piVar9 = (int *)&UNK_110c1f690;
  }
  else {
    piVar9 = piVar14;
    piVar14 = (int *)&UNK_110c1f6a8;
  }
  if (iVar6 < 2) {
    piVar14 = piVar9;
  }
  if ((piVar14 == (int *)&UNK_110c1f6a8) || (iVar6 < *piVar14)) {
    func_0x0001093fd0ac(&UNK_10f61d92d);
LAB_10a7e9554:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7e9558);
    (*pcVar4)();
  }
  uVar26 = *(ulong *)(piVar14 + 4);
  if (0x7ffffffffffffff7 < uVar26) {
    func_0x000109ffde50();
    goto LAB_10a7e9554;
  }
  uVar22 = *(undefined8 *)(piVar14 + 2);
  if (uVar26 < 0x17) {
    uStack_dc = (float)CONCAT13((char)uVar26,(undefined3)uStack_dc);
    puVar7 = &uStack_f0;
    if (uVar26 != 0) goto LAB_10a7e8598;
  }
  else {
    puVar24 = (undefined8 *)0x19;
    if ((uVar26 | 7) != 0x17) {
      puVar24 = (undefined8 *)((uVar26 | 7) + 1);
    }
    puVar7 = puVar24;
    __Znwm();
    uStack_dc = (float)((uint)((ulong)puVar24 >> 0x20) | 0x80000000);
    fStack_e8 = (float)uVar26;
    fStack_e4 = (float)(uVar26 >> 0x20);
    fStack_e0 = SUB84(puVar24,0);
    uStack_f0 = puVar7;
LAB_10a7e8598:
    _memmove(puVar7,uVar22,uVar26);
  }
  plVar17 = (long *)(lVar21 + 0x208);
  *(undefined1 *)((long)puVar7 + uVar26) = 0;
  plVar8 = plVar17;
  func_0x000107c2b05c(plVar17,&uStack_f0);
  plVar16 = *(long **)(lVar21 + 0x210);
  if (plVar16 == (long *)0x0) {
LAB_10a7e865c:
    plVar10 = (long *)0x0;
  }
  else {
    uVar26 = (long)plVar16 - 1;
    if (((ulong)plVar16 & uVar26) == 0) {
      plVar20 = (long *)(uVar26 & (ulong)plVar8);
    }
    else {
      plVar20 = plVar8;
      if (plVar16 <= plVar8) {
        uVar12 = 0;
        if (plVar16 != (long *)0x0) {
          uVar12 = (ulong)plVar8 / (ulong)plVar16;
        }
        plVar20 = (long *)((long)plVar8 - uVar12 * (long)plVar16);
      }
    }
    plVar10 = *(long **)(*plVar17 + (long)plVar20 * 8);
    if (plVar10 == (long *)0x0) goto LAB_10a7e865c;
    for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      plVar11 = (long *)plVar10[1];
      if (plVar8 == plVar11) {
        plVar11 = plVar17;
        func_0x000107c2b068(plVar17,plVar10 + 2,&uStack_f0);
        if (((ulong)plVar11 & 1) != 0) break;
      }
      else {
        if (((ulong)plVar16 & uVar26) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar26);
        }
        else if (plVar16 <= plVar11) {
          uVar12 = 0;
          if (plVar16 != (long *)0x0) {
            uVar12 = (ulong)plVar11 / (ulong)plVar16;
          }
          plVar11 = (long *)((long)plVar11 - uVar12 * (long)plVar16);
        }
        if (plVar11 != plVar20) goto LAB_10a7e865c;
      }
    }
  }
  if (plVar10 == (long *)0x0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f678ebc,&UNK_10f678f04,0xc1,&UNK_10f67902c);
    }
    uVar22 = 0;
  }
  else {
    if (lStack_268 != 0) {
      lVar21 = *(long *)(param_5 + 0x138);
      if (*(int *)(lVar21 + 0x38) != *(int *)(lStack_268 + 0x18)) {
        *(int *)(lVar21 + 0x38) = *(int *)(lStack_268 + 0x18);
        if (*(char *)(lStack_268 + 0x37) < '\0') {
          func_0x000107c3192c(&uStack_280,*(undefined8 *)(lStack_268 + 0x20),
                              *(undefined8 *)(lStack_268 + 0x28));
        }
        else {
          uStack_278 = *(undefined8 *)(lStack_268 + 0x28);
          uStack_280 = *(ulong *)(lStack_268 + 0x20);
          uStack_270 = *(ulong *)(lStack_268 + 0x30);
        }
        if (*(char *)(lVar21 + 0x57) < '\0') {
          __ZdlPv(*(undefined8 *)(lVar21 + 0x40));
        }
        param_1 = uStack_280;
        *(undefined8 *)(lVar21 + 0x48) = uStack_278;
        *(ulong *)(lVar21 + 0x40) = uStack_280;
        *(ulong *)(lVar21 + 0x50) = uStack_270;
        uStack_270 = uStack_270 & 0xffffffffffffff;
        uStack_280 = uStack_280 & 0xffffffffffffff00;
      }
    }
    func_0x00010acb1720(*(long *)(param_5 + 0x138) + 0x18,&lStack_268);
    iVar5 = (int)plVar10;
    iVar6 = iVar5 + 0x68;
    FUN_10a7fd884();
    if (iVar6 != 0) {
      iVar6 = iVar5 + 0x58;
      FUN_10a7fd9b4();
      if (iVar6 != 0) {
        iVar5 = iVar5 + 0x74;
        FUN_10a7fd884();
        uVar28 = (undefined4)param_1;
        if (iVar5 != 0) {
          lVar21 = *(long *)((long)plVar10 + 0x48);
          if (*(long *)((long)plVar10 + 0x40) != lVar21) {
            lVar23 = *(long *)((long)plVar10 + 0x40) + 0x1c;
            do {
              if (*(char *)(lVar23 + 0xc) == '\x01') {
                lVar27 = lVar23;
                FUN_10a7fd884();
                if ((int)lVar27 == 0) goto LAB_10a7e94c0;
              }
              iVar6 = (int)lVar23 + -0x1c;
              FUN_10a7fd9b4();
              if (iVar6 == 0) goto LAB_10a7e94c0;
              uVar26 = lVar23 - 0xc;
              FUN_10a7fd884();
              uVar28 = (undefined4)param_1;
              if ((uVar26 & 1) == 0) goto LAB_10a7e94c0;
              lVar27 = lVar23 + 0x10;
              lVar23 = lVar23 + 0x2c;
            } while (lVar27 != lVar21);
          }
          uVar22 = *(undefined8 *)(param_9 + 0x40);
          uVar30 = *(undefined8 *)(param_9 + 0x48);
          lVar21 = param_5 + 0xd0;
          FUN_10a80da1c(lVar21,uVar22,uVar30);
          lVar23 = *(long *)(param_9 + 0x140);
          if (lVar21 == 0) {
            func_0x00010a3e90b8(lVar23);
            uStack_f0 = *(undefined8 **)(param_9 + 0x40);
            fStack_e8 = (float)*(undefined8 *)(param_9 + 0x48);
            fStack_e4 = (float)((ulong)*(undefined8 *)(param_9 + 0x48) >> 0x20);
            lVar21 = param_5 + 0xd0;
            FUN_10a80dabc();
            uVar30 = *(undefined8 *)(lVar23 + 0x6c);
            uVar22 = *(undefined8 *)(lVar23 + 100);
            uVar33 = *(undefined8 *)(lVar23 + 0x7c);
            param_2 = *(undefined8 **)(lVar23 + 0x74);
            param_3 = *(ulong *)(lVar23 + 0x84);
            uVar39 = *(undefined8 *)(lVar23 + 0x9c);
            param_4 = *(undefined8 **)(lVar23 + 0x94);
            *(undefined8 *)(lVar21 + 0x48) = *(undefined8 *)(lVar23 + 0x8c);
            *(ulong *)(lVar21 + 0x40) = param_3;
            *(undefined8 *)(lVar21 + 0x58) = uVar39;
            *(undefined8 **)(lVar21 + 0x50) = param_4;
            *(undefined8 *)(lVar21 + 0x28) = uVar30;
            *(undefined8 *)(lVar21 + 0x20) = uVar22;
            *(undefined8 *)(lVar21 + 0x38) = uVar33;
            *(undefined8 **)(lVar21 + 0x30) = param_2;
          }
          else {
            uStack_190._0_4_ = (float)uVar22;
            uStack_190._4_4_ = (float)((ulong)uVar22 >> 0x20);
            fStack_188 = (float)uVar30;
            fStack_184 = (float)((ulong)uVar30 >> 0x20);
            lVar21 = param_5 + 0xd0;
            FUN_10a80dabc(lVar21,uVar22,uVar30,&uStack_190);
            FUN_10a7e9644(lVar21 + 0x20);
            uStack_f0 = (undefined8 *)CONCAT44((int)param_2,uVar28);
            fStack_e8 = (float)param_3;
            fStack_e4 = SUB84(param_4,0);
            FUN_10a3e82bc(lVar23,&uStack_f0);
          }
          plVar17 = *(long **)(param_7 + 0x10);
          if (plVar17 != (long *)0x0) {
            do {
              plVar16 = (long *)plVar17[6];
              for (plVar8 = (long *)plVar17[5]; plVar8 != plVar16; plVar8 = plVar8 + 2) {
                plVar11 = (long *)plVar8[1];
                __ZNSt3__119__shared_weak_count4lockEv();
                lVar21 = *plVar8;
                plVar20 = plVar11 + 1;
                do {
                  lVar23 = *plVar20;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                  if (bVar3) {
                    *plVar20 = lVar23 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar23 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                }
                lVar23 = param_5 + 0xd0;
                FUN_10a80de84(lVar23,*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x48));
                if (lVar23 != 0) {
                  func_0x00010a3e8440(*(undefined8 *)(lVar21 + 0x140),lVar23 + 0x20);
                }
              }
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
            plVar17 = *(long **)(param_7 + 0x10);
            if (plVar17 != (long *)0x0) {
              puVar25 = &UNK_10f679d8e;
              do {
                plVar16 = (long *)plVar17[6];
                for (plVar8 = (long *)plVar17[5]; plVar8 != plVar16; plVar8 = plVar8 + 2) {
                  plVar20 = (long *)plVar8[1];
                  if ((plVar20 == (long *)0x0) ||
                     (__ZNSt3__119__shared_weak_count4lockEv(), plVar20 == (long *)0x0)) {
                    lVar21 = 0;
                  }
                  else {
                    lVar21 = *plVar8;
                    plVar11 = plVar20 + 1;
                    do {
                      lVar23 = *plVar11;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                      if (bVar3) {
                        *plVar11 = lVar23 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (lVar23 == 0) {
                      (**(code **)(*plVar20 + 0x10))(plVar20);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
                    }
                  }
                  lVar23 = param_5 + 0xd0;
                  FUN_10a80da1c(lVar23,*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x48)
                               );
                  if (lVar23 == 0) {
                    lVar27 = *(long *)(lVar21 + 0x140);
                    func_0x00010a3e90b8(lVar27);
                    uStack_f0 = *(undefined8 **)(lVar21 + 0x40);
                    fStack_e8 = (float)*(undefined8 *)(lVar21 + 0x48);
                    fStack_e4 = (float)((ulong)*(undefined8 *)(lVar21 + 0x48) >> 0x20);
                    lVar23 = param_5 + 0xd0;
                    FUN_10a80dabc();
                    uVar30 = *(undefined8 *)(lVar27 + 0x6c);
                    uVar22 = *(undefined8 *)(lVar27 + 100);
                    uVar33 = *(undefined8 *)(lVar27 + 0x7c);
                    param_2 = *(undefined8 **)(lVar27 + 0x74);
                    param_3 = *(ulong *)(lVar27 + 0x84);
                    uVar39 = *(undefined8 *)(lVar27 + 0x9c);
                    param_4 = *(undefined8 **)(lVar27 + 0x94);
                    *(undefined8 *)(lVar23 + 0x48) = *(undefined8 *)(lVar27 + 0x8c);
                    *(ulong *)(lVar23 + 0x40) = param_3;
                    *(undefined8 *)(lVar23 + 0x58) = uVar39;
                    *(undefined8 **)(lVar23 + 0x50) = param_4;
                    *(undefined8 *)(lVar23 + 0x28) = uVar30;
                    *(undefined8 *)(lVar23 + 0x20) = uVar22;
                    *(undefined8 *)(lVar23 + 0x38) = uVar33;
                    *(undefined8 **)(lVar23 + 0x30) = param_2;
                    if (param_9 == 0) {
LAB_10a7e9514:
                      FUN_10a00946c(puVar25);
                      uStack_190 = (undefined8 *)CONCAT44(uStack_190._4_4_,(float)uStack_190);
                      goto LAB_10a7e9554;
                    }
                    if (lVar21 == param_9) {
                      fVar40 = 1.0;
                      fVar42 = 0.0;
                      fVar43 = 0.0;
                      fVar35 = 0.0;
                    }
                    else {
                      fVar35 = 0.0;
                      lVar23 = lVar21;
                      fVar32 = 1.0;
                      fVar37 = 0.0;
                      fVar41 = 0.0;
                      do {
                        if (lVar23 == 0) {
                          puVar25 = &UNK_10f679dd3;
                          goto LAB_10a7e9514;
                        }
                        if ((*(ushort *)(lVar23 + 0x118) >> 3 & 1) != 0) {
                          puVar25 = &UNK_10f679e68;
                          goto LAB_10a7e9514;
                        }
                        lVar27 = *(long *)(lVar23 + 0x140);
                        func_0x00010a0d8ae0(lVar27);
                        fVar29 = *(float *)(lVar27 + 0x54);
                        fVar31 = *(float *)(lVar27 + 0x58);
                        param_2 = (undefined8 *)(ulong)(uint)fVar31;
                        fVar34 = *(float *)(lVar27 + 0x5c);
                        fVar36 = *(float *)(lVar27 + 0x60);
                        param_4 = (undefined8 *)(ulong)(uint)fVar36;
                        fVar40 = ((-(fVar29 * fVar41) + fVar32 * fVar36) - fVar37 * fVar31) -
                                 fVar35 * fVar34;
                        fVar42 = (fVar32 * fVar29 + fVar41 * fVar36 + fVar35 * fVar31) -
                                 fVar37 * fVar34;
                        fVar43 = (fVar32 * fVar31 + fVar37 * fVar36 + fVar41 * fVar34) -
                                 fVar35 * fVar29;
                        fVar35 = fVar32 * fVar34 + fVar35 * fVar36;
                        param_3 = (ulong)(uint)fVar35;
                        fVar35 = (fVar35 + fVar37 * fVar29) - fVar41 * fVar31;
                        lVar23 = *(long *)(lVar23 + 0x188);
                        fVar32 = fVar40;
                        fVar37 = fVar43;
                        fVar41 = fVar42;
                      } while (lVar23 != param_9);
                    }
                    uStack_f0 = *(undefined8 **)(lVar21 + 0x40);
                    fStack_e8 = (float)*(undefined8 *)(lVar21 + 0x48);
                    fStack_e4 = (float)((ulong)*(undefined8 *)(lVar21 + 0x48) >> 0x20);
                    lVar21 = param_5 + 0xf8;
                    FUN_10a80df24();
                    *(float *)(lVar21 + 0x20) = fVar42;
                    *(float *)(lVar21 + 0x24) = fVar43;
                    *(float *)(lVar21 + 0x28) = fVar35;
                    *(float *)(lVar21 + 0x2c) = fVar40;
                  }
                }
                plVar17 = (long *)*plVar17;
              } while (plVar17 != (long *)0x0);
            }
          }
          uVar22 = *(undefined8 *)(param_9 + 0x140);
          uStack_f0 = *(undefined8 **)((long)plVar10 + 0x74);
          fStack_e8 = *(float *)((long)plVar10 + 0x7c);
          uStack_dc = (float)*(undefined8 *)((long)plVar10 + 0x60);
          uStack_d8 = (undefined4)((ulong)*(undefined8 *)((long)plVar10 + 0x60) >> 0x20);
          fStack_e4 = (float)*(undefined8 *)((long)plVar10 + 0x58);
          fStack_e0 = (float)((ulong)*(undefined8 *)((long)plVar10 + 0x58) >> 0x20);
          FUN_10a3e38dc(uVar22,&uStack_f0);
          if ((*(byte *)(param_10 + 1) & 1) != 0) {
            FUN_10a3e3894(uVar22,(long)plVar10 + 0x68);
          }
          *(undefined8 *)(param_5 + 0x128) = *(undefined8 *)(param_5 + 0x120);
          func_0x00010983cad8(param_5 + 0x120,
                              (*(long *)((long)plVar10 + 0x30) - *(long *)((long)plVar10 + 0x28) >>
                              3) * -0x79435e50d79435e5);
          puVar18 = *(undefined4 **)((long)plVar10 + 0x28);
          puVar13 = *(undefined4 **)((long)plVar10 + 0x30);
          if (puVar13 != puVar18) {
            lVar21 = 0;
            uVar26 = 0;
            uStack_290 = 0;
            do {
              fVar35 = SUB84(param_2,0);
              fVar40 = (float)param_3;
              fVar42 = SUB84(param_4,0);
              iVar6 = *(int *)((long)puVar18 + lVar21 + 4);
              if (iVar6 == -1) {
                fStack_e8 = 0.0;
                fStack_e4 = 1.0;
                fVar43 = 0.0;
                fVar32 = 0.0;
                uVar22 = uStack_290;
              }
              else {
                uStack_190 = (undefined8 *)CONCAT44(uStack_190._4_4_,(float)uStack_190);
                if ((ulong)(*(long *)(param_5 + 0x128) - *(long *)(param_5 + 0x120) >> 4) <=
                    (ulong)(long)iVar6) goto LAB_10a7e9554;
                puVar24 = (undefined8 *)(*(long *)(param_5 + 0x120) + (long)iVar6 * 0x10);
                uVar30 = puVar24[1];
                uVar22 = *puVar24;
                fStack_e8 = (float)uVar30;
                fStack_e4 = (float)((ulong)uVar30 >> 0x20);
                uStack_f0._0_4_ = (float)uVar22;
                uStack_f0._4_4_ = (float)((ulong)uVar22 >> 0x20);
                fVar43 = uStack_f0._4_4_;
                fVar32 = (float)uStack_f0;
              }
              fVar41 = fStack_e4;
              fVar37 = fStack_e8;
              fVar29 = (float)uVar22;
              uStack_f0 = (undefined8 *)uVar22;
              FUN_10a7e9644((long)puVar18 + lVar21 + 0x58);
              uStack_f0 = (undefined8 *)
                          CONCAT44((fVar43 * fVar42 + fVar35 * fVar41 + fVar29 * fVar37) -
                                   fVar40 * fVar32,
                                   (fVar32 * fVar42 + fVar29 * fVar41 + fVar40 * fVar43) -
                                   fVar35 * fVar37);
              fStack_e4 = ((-(fVar32 * fVar29) + fVar42 * fVar41) - fVar35 * fVar43) -
                          fVar40 * fVar37;
              param_4 = (undefined8 *)(ulong)(uint)(fVar37 * fVar42);
              fStack_e8 = fVar37 * fVar42 + fVar40 * fVar41;
              param_3 = (ulong)(uint)fStack_e8;
              fStack_e8 = fStack_e8 + fVar35 * fVar32;
              param_2 = (undefined8 *)(ulong)(uint)fStack_e8;
              fStack_e8 = fStack_e8 - fVar29 * fVar43;
              FUN_10a7e9944(param_5 + 0x120,&uStack_f0);
              uVar26 = uVar26 + 1;
              puVar18 = *(undefined4 **)((long)plVar10 + 0x28);
              puVar13 = *(undefined4 **)((long)plVar10 + 0x30);
              uVar12 = ((long)puVar13 - (long)puVar18 >> 3) * -0x79435e50d79435e5;
              lVar21 = lVar21 + 0x98;
            } while (uVar26 <= uVar12 && uVar12 - uVar26 != 0);
          }
          uStack_118 = 0;
          lStack_120 = 0;
          uStack_108 = 0;
          lStack_110 = 0;
          uStack_100 = 0x3f800000;
          puVar19 = puVar13;
          if (puVar18 != puVar13) {
            do {
              lVar21 = param_7;
              FUN_10a2fda74(param_7,puVar18 + 4);
              if (lVar21 != 0) {
                lVar21 = param_7;
                FUN_10a2fda74(param_7,puVar18 + 4);
                if (lVar21 == 0) {
                  FUN_109ffdddc(&UNK_10f639994);
                  goto LAB_10a7e9554;
                }
                plVar8 = *(long **)(lVar21 + 0x30);
                for (plVar17 = *(long **)(lVar21 + 0x28); plVar17 != plVar8; plVar17 = plVar17 + 2)
                {
                  plVar16 = (long *)plVar17[1];
                  if ((plVar16 == (long *)0x0) ||
                     (__ZNSt3__119__shared_weak_count4lockEv(), plVar16 == (long *)0x0)) {
                    puVar24 = (undefined8 *)0x0;
                  }
                  else {
                    puVar24 = (undefined8 *)*plVar17;
                    plVar20 = plVar16 + 1;
                    do {
                      lVar21 = *plVar20;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                      if (bVar3) {
                        *plVar20 = lVar21 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (lVar21 == 0) {
                      (**(code **)(*plVar16 + 0x10))(plVar16);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
                    }
                  }
                  uVar28 = *puVar18;
                  plVar16 = &lStack_120;
                  uStack_f0 = puVar24;
                  FUN_10a80e324(plVar16,puVar24,&uStack_f0);
                  *(undefined4 *)(plVar16 + 3) = uVar28;
                }
              }
              puVar18 = puVar18 + 0x26;
            } while (puVar18 != puVar13);
            puVar13 = *(undefined4 **)((long)plVar10 + 0x30);
            puVar19 = *(undefined4 **)((long)plVar10 + 0x28);
          }
          FUN_10a7fda98(&uStack_f0,((long)puVar13 - (long)puVar19 >> 3) * -0x79435e50d79435e5);
          uStack_190._0_4_ = 1.4013e-45;
          lVar21 = *(long *)((long)plVar10 + 0x28);
          if (1 < (ulong)((*(long *)((long)plVar10 + 0x30) - lVar21 >> 3) * -0x79435e50d79435e5)) {
            uVar26 = 1;
            do {
              iVar6 = *(int *)(lVar21 + uVar26 * 0x98 + 4);
              uVar26 = (CONCAT44(fStack_e4,fStack_e8) - (long)uStack_f0 >> 3) * -0x5555555555555555;
              uStack_190 = (undefined8 *)CONCAT44(uStack_190._4_4_,(float)uStack_190);
              if (uVar26 < (ulong)(long)iVar6 || uVar26 - (long)iVar6 == 0) goto LAB_10a7e9554;
              func_0x000109febdc8(uStack_f0 + (long)iVar6 * 3,&uStack_190);
              uVar26 = (long)(int)(float)uStack_190 + 1;
              uStack_190._0_4_ = (float)uVar26;
              lVar21 = *(long *)((long)plVar10 + 0x28);
              uVar12 = (*(long *)((long)plVar10 + 0x30) - lVar21 >> 3) * -0x79435e50d79435e5;
            } while (uVar26 <= uVar12 && uVar12 - uVar26 != 0);
          }
          uStack_148 = 0;
          lStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_130 = 0x3f800000;
          for (plVar17 = (long *)lStack_110; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
            if (*(int *)(plVar17 + 3) == 0) {
              FUN_10a7e9a0c(&uStack_190,plVar17[2],&lStack_120,&uStack_f0);
              puVar7 = (undefined8 *)CONCAT44(fStack_184,fStack_188);
              puVar24 = (undefined8 *)CONCAT44(uStack_190._4_4_,(float)uStack_190);
              for (puVar38 = puVar24; puVar38 != puVar7; puVar38 = puVar38 + 1) {
                FUN_10a80eb3c(&lStack_150,*puVar38,*puVar38);
              }
              if (puVar24 != (undefined8 *)0x0) {
                __ZdlPv(puVar24);
              }
            }
          }
          uStack_190 = &uStack_f0;
          func_0x00010a1f4bf4(&uStack_190);
          lVar21 = *(long *)((long)plVar10 + 0x28);
          if (*(long *)((long)plVar10 + 0x30) != lVar21) {
            uVar26 = 0;
            do {
              puVar24 = (undefined8 *)(lVar21 + uVar26 * 0x98 + 0x10);
              lVar21 = param_8;
              uStack_f0 = puVar24;
              FUN_10a80e76c(param_8,puVar24,&UNK_10dd5b8f9,&uStack_f0,&uStack_190);
              *(undefined1 *)(lVar21 + 0x28) = 1;
              lVar21 = param_7;
              FUN_10a2fda74(param_7,puVar24);
              if (lVar21 != 0) {
                lVar21 = param_7;
                FUN_10a2fda74(param_7,puVar24);
                if (lVar21 == 0) {
                  FUN_109ffdddc(&UNK_10f639994);
                  goto LAB_10a7e9554;
                }
                plVar8 = *(long **)(lVar21 + 0x30);
                for (plVar17 = *(long **)(lVar21 + 0x28); plVar17 != plVar8; plVar17 = plVar17 + 2)
                {
                  plVar16 = (long *)plVar17[1];
                  if (plVar16 == (long *)0x0) {
LAB_10a7e8e6c:
                    lVar21 = 0;
                    puVar24 = uStack_190;
                  }
                  else {
                    __ZNSt3__119__shared_weak_count4lockEv();
                    if (plVar16 == (long *)0x0) goto LAB_10a7e8e6c;
                    lVar21 = *plVar17;
                    plVar20 = plVar16 + 1;
                    do {
                      lVar23 = *plVar20;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                      if (bVar3) {
                        *plVar20 = lVar23 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    puVar24 = uStack_190;
                    if (lVar23 == 0) {
                      (**(code **)(*plVar16 + 0x10))(plVar16);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
                      puVar24 = uStack_190;
                    }
                  }
                  uStack_190._4_4_ = (float)((ulong)puVar24 >> 0x20);
                  fVar35 = (float)param_3;
                  if ((*(byte *)((long)param_10 + 7) & 1) == 0) {
                    lVar23 = lStack_150;
                    uStack_190 = puVar24;
                    FUN_10a80ea70(lStack_150,uStack_148,lVar21);
                    fVar35 = (float)param_3;
                    puVar7 = param_2;
                    puVar38 = param_4;
                    puVar24 = uStack_190;
                    if (lVar23 != 0) goto LAB_10a7e90ec;
                    uVar12 = 0;
                    uStack_238 = 0;
                    uStack_240 = 0;
                    uStack_228 = 0;
                    uStack_230 = 0;
                    uStack_220 = 0x3f800000;
                    for (lVar23 = *(long *)(lVar21 + 0x188); lVar23 != 0;
                        lVar23 = *(long *)(lVar23 + 0x188)) {
                      lVar27 = lStack_120;
                      lStack_248 = lVar23;
                      FUN_10a7fdc3c(lStack_120,uStack_118,lVar23);
                      if (lVar27 != 0) {
                        plVar16 = &lStack_120;
                        FUN_10a80e324(plVar16,lVar23,&lStack_248);
                        func_0x000107c2ab1c(&uStack_240,plVar16 + 3,plVar16 + 3);
                      }
                    }
                    fStack_184 = 0.0;
                    fStack_180 = 0.0;
                    fStack_188 = 0.0;
                    fStack_17c = 1.0;
                    uStack_178 = 0;
                    uStack_170 = 0;
                    uStack_15c = 0;
                    fStack_158 = 0.0;
                    uStack_164 = 0;
                    uStack_160 = 0;
                    fStack_168 = 1.0;
                    uStack_154 = 0x3f800000;
                    iStack_24c = (int)uVar26;
                    lStack_248 = 0;
                    uStack_190 = (undefined8 *)0x3f800000;
                    do {
                      puVar24 = &uStack_240;
                      func_0x00010925b970(puVar24,&iStack_24c);
                      if (puVar24 != (undefined8 *)0x0) break;
                      uVar12 = (ulong)iStack_24c;
                      uVar15 = (*(long *)((long)plVar10 + 0x30) - *(long *)((long)plVar10 + 0x28) >>
                               3) * -0x79435e50d79435e5;
                      uStack_190 = uStack_190;
                      if (uVar15 < uVar12 || uVar15 - uVar12 == 0) goto LAB_10a7e9554;
                      lVar23 = *(long *)((long)plVar10 + 0x28) + (long)iStack_24c * 0x98;
                      uStack_1c8 = *(undefined8 *)(lVar23 + 0x60);
                      puStack_1d0 = *(undefined8 **)(lVar23 + 0x58);
                      uStack_1b8 = *(undefined8 *)(lVar23 + 0x70);
                      uStack_1c0 = *(undefined8 *)(lVar23 + 0x68);
                      uStack_1a8 = *(undefined8 *)(lVar23 + 0x80);
                      param_3 = *(ulong *)(lVar23 + 0x78);
                      uStack_198 = *(undefined8 *)(lVar23 + 0x90);
                      param_4 = *(undefined8 **)(lVar23 + 0x88);
                      uVar15 = (*(long *)((long)plVar10 + 0x48) - *(long *)((long)plVar10 + 0x40) >>
                               2) * 0x2e8ba2e8ba2e8ba3;
                      uStack_1b0 = param_3;
                      puStack_1a0 = param_4;
                      uStack_190 = uStack_190;
                      if (uVar15 < uVar12 || uVar15 - uVar12 == 0) goto LAB_10a7e9554;
                      lVar23 = *(long *)((long)plVar10 + 0x40) + (long)iStack_24c * 0x2c;
                      if (*(char *)(lVar23 + 0x28) == '\x01') {
                        uStack_258 = *(undefined8 *)(lVar23 + 0x1c);
                        uStack_250 = *(undefined4 *)(lVar23 + 0x24);
                      }
                      else {
                        uStack_258 = 0;
                        uStack_250 = 0;
                      }
                      FUN_10a45f7b0(auStack_210,&uStack_258,lVar23,lVar23 + 0x10);
                      if (*(char *)(lVar23 + 0x28) == '\x01') {
                        uStack_198 = 0x3f80000000000000;
                        puStack_1a0 = (undefined8 *)0x0;
                      }
                      func_0x000109519fd0(&uStack_f0,&puStack_1d0,auStack_210);
                      uStack_1c8 = CONCAT44(fStack_e4,fStack_e8);
                      uStack_1b8 = CONCAT44(uStack_d4,uStack_d8);
                      uStack_1c0 = CONCAT44(uStack_dc,fStack_e0);
                      puStack_1d0 = uStack_f0;
                      uStack_1a8 = uStack_c8;
                      uStack_1b0 = uStack_d0;
                      uStack_198 = uStack_b8;
                      puStack_1a0 = puStack_c0;
                      func_0x000109519fd0(&uStack_f0,&puStack_1d0,&uStack_190);
                      uStack_178 = CONCAT44(uStack_d4,uStack_d8);
                      fStack_188 = fStack_e8;
                      fStack_184 = fStack_e4;
                      fStack_180 = fStack_e0;
                      fStack_17c = uStack_dc;
                      uStack_170 = uStack_d0;
                      fStack_168 = (float)uStack_c8;
                      uStack_164 = (undefined4)((ulong)uStack_c8 >> 0x20);
                      fStack_158 = (float)uStack_b8;
                      uStack_154 = (undefined4)((ulong)uStack_b8 >> 0x20);
                      uStack_160 = SUB84(puStack_c0,0);
                      uStack_15c = (undefined4)((ulong)puStack_c0 >> 0x20);
                      uVar12 = (*(long *)((long)plVar10 + 0x30) - *(long *)((long)plVar10 + 0x28) >>
                               3) * -0x79435e50d79435e5;
                      uStack_190 = uStack_f0;
                      if (uVar12 < (ulong)(long)iStack_24c || uVar12 - (long)iStack_24c == 0)
                      goto LAB_10a7e9554;
                      iStack_24c = *(int *)(*(long *)((long)plVar10 + 0x28) +
                                            (long)iStack_24c * 0x98 + 4);
                      uVar12 = uStack_d0;
                      param_2 = puStack_c0;
                    } while (iStack_24c != -1);
                    uVar28 = (undefined4)uVar12;
                    uVar22 = *(undefined8 *)(lVar21 + 0x140);
                    if (*param_10 == 1) {
                      FUN_10a7e9644(&uStack_190);
                      uStack_f0 = (undefined8 *)CONCAT44((int)param_2,uVar28);
                      fStack_e8 = (float)param_3;
                      fStack_e4 = SUB84(param_4,0);
                      FUN_10a3e82bc(uVar22,&uStack_f0);
                    }
                    else {
                      func_0x00010a3e8440(uVar22,&uStack_190);
                    }
                    func_0x000107c2ab24(&uStack_240);
                  }
                  else {
                    puVar7 = param_2;
                    puVar38 = param_4;
                    if (*param_10 == 2) {
                      *(undefined8 *)((ulong)&uStack_190 | 4) = 0;
                      ((undefined8 *)((ulong)&uStack_190 | 4))[1] = 0;
                      fStack_17c = 1.0;
                      uStack_178 = 0;
                      uStack_170 = 0;
                      uStack_15c = 0;
                      fStack_158 = 0.0;
                      uStack_164 = 0;
                      uStack_160 = 0;
                      fStack_168 = 1.0;
                      uStack_154 = 0x3f800000;
                      lVar23 = *(long *)((long)plVar10 + 0x28);
                      lVar27 = *(long *)((long)plVar10 + 0x30);
                      uVar12 = uVar26;
                      uStack_190 = (undefined8 *)CONCAT44(uStack_190._4_4_,0x3f800000);
                      do {
                        uVar15 = (lVar27 - lVar23 >> 3) * -0x79435e50d79435e5;
                        iVar6 = (int)uVar12;
                        if (uVar15 < (ulong)(long)iVar6 || uVar15 - (long)iVar6 == 0)
                        goto LAB_10a7e9554;
                        uVar15 = (ulong)iVar6;
                        lVar23 = lVar23 + (long)iVar6 * 0x98;
                        uStack_1c8 = *(undefined8 *)(lVar23 + 0x60);
                        puStack_1d0 = *(undefined8 **)(lVar23 + 0x58);
                        uStack_1b8 = *(undefined8 *)(lVar23 + 0x70);
                        uStack_1c0 = *(undefined8 *)(lVar23 + 0x68);
                        uStack_1a8 = *(undefined8 *)(lVar23 + 0x80);
                        param_3 = *(ulong *)(lVar23 + 0x78);
                        uStack_198 = *(undefined8 *)(lVar23 + 0x90);
                        param_4 = *(undefined8 **)(lVar23 + 0x88);
                        uVar12 = (*(long *)((long)plVar10 + 0x48) - *(long *)((long)plVar10 + 0x40)
                                 >> 2) * 0x2e8ba2e8ba2e8ba3;
                        uStack_1b0 = param_3;
                        puStack_1a0 = param_4;
                        if (uVar12 < uVar15 || uVar12 - uVar15 == 0) goto LAB_10a7e9554;
                        lVar23 = *(long *)((long)plVar10 + 0x40) + (long)iVar6 * 0x2c;
                        if (*(char *)(lVar23 + 0x28) == '\x01') {
                          uStack_240 = *(undefined8 *)(lVar23 + 0x1c);
                          uStack_238 = CONCAT44(uStack_238._4_4_,*(undefined4 *)(lVar23 + 0x24));
                        }
                        else {
                          uStack_240 = 0;
                          uStack_238 = (ulong)uStack_238._4_4_ << 0x20;
                        }
                        FUN_10a45f7b0(auStack_210,&uStack_240,lVar23,lVar23 + 0x10);
                        if (*(char *)(lVar23 + 0x28) == '\x01') {
                          uStack_198 = 0x3f80000000000000;
                          puStack_1a0 = (undefined8 *)0x0;
                        }
                        func_0x000109519fd0(&uStack_f0,&puStack_1d0,auStack_210);
                        uStack_1c8 = CONCAT44(fStack_e4,fStack_e8);
                        uStack_1b8 = CONCAT44(uStack_d4,uStack_d8);
                        uStack_1c0 = CONCAT44(uStack_dc,fStack_e0);
                        puStack_1d0 = uStack_f0;
                        uStack_1a8 = uStack_c8;
                        uStack_1b0 = uStack_d0;
                        uStack_198 = uStack_b8;
                        puStack_1a0 = puStack_c0;
                        func_0x000109519fd0(&uStack_f0,&puStack_1d0,&uStack_190);
                        uStack_178 = CONCAT44(uStack_d4,uStack_d8);
                        fStack_188 = fStack_e8;
                        fStack_184 = fStack_e4;
                        fStack_180 = fStack_e0;
                        fStack_17c = uStack_dc;
                        uStack_170 = uStack_d0;
                        fStack_168 = (float)uStack_c8;
                        uStack_164 = (undefined4)((ulong)uStack_c8 >> 0x20);
                        fStack_158 = (float)uStack_b8;
                        uStack_154 = (undefined4)((ulong)uStack_b8 >> 0x20);
                        uStack_160 = SUB84(puStack_c0,0);
                        uStack_15c = (undefined4)((ulong)puStack_c0 >> 0x20);
                        lVar23 = *(long *)((long)plVar10 + 0x28);
                        lVar27 = *(long *)((long)plVar10 + 0x30);
                        uVar12 = (lVar27 - lVar23 >> 3) * -0x79435e50d79435e5;
                        uStack_190 = uStack_f0;
                        if (uVar12 < uVar15 || uVar12 - uVar15 == 0) goto LAB_10a7e9554;
                        uVar1 = *(uint *)(lVar23 + (long)iVar6 * 0x98 + 4);
                        uVar12 = (ulong)uVar1;
                      } while (uVar1 != 0xffffffff);
                      lVar23 = *(long *)(param_9 + 0x140);
                      if ((*(byte *)(lVar23 + 0x2a) & 0x24) != 0) {
                        func_0x00010a3e8fd4(lVar23);
                      }
                      func_0x000109519fd0(&uStack_f0,lVar23 + 0xc0,&uStack_190);
                      uStack_178 = CONCAT44(uStack_d4,uStack_d8);
                      fStack_188 = fStack_e8;
                      fStack_184 = fStack_e4;
                      uStack_190._0_4_ = SUB84(uStack_f0,0);
                      uStack_190._4_4_ = (float)((ulong)uStack_f0 >> 0x20);
                      fStack_180 = fStack_e0;
                      fStack_17c = uStack_dc;
                      fStack_168 = (float)uStack_c8;
                      uStack_164 = (undefined4)((ulong)uStack_c8 >> 0x20);
                      uStack_170 = uStack_d0;
                      fStack_158 = (float)uStack_b8;
                      uStack_154 = (undefined4)((ulong)uStack_b8 >> 0x20);
                      uStack_160 = SUB84(puStack_c0,0);
                      uStack_15c = (undefined4)((ulong)puStack_c0 >> 0x20);
                      uStack_f0 = puStack_c0;
                      fStack_e8 = fStack_158;
                      param_2 = puStack_c0;
                      fVar35 = fStack_158;
                      FUN_10a3e8ad4(*(undefined8 *)(lVar21 + 0x140),&uStack_f0);
                      if (*(char *)((long)param_10 + 5) == '\x01') {
                        fStack_e8 = SQRT((float)uStack_170 * (float)uStack_170 +
                                         uStack_170._4_4_ * uStack_170._4_4_ +
                                         fStack_168 * fStack_168);
                        param_4 = (undefined8 *)CONCAT44(fStack_17c,fStack_180);
                        fVar35 = (float)uStack_190 * (float)uStack_190 +
                                 uStack_190._4_4_ * uStack_190._4_4_;
                        fVar40 = fStack_180 * fStack_180 + fStack_17c * fStack_17c;
                        param_3 = CONCAT44(fVar40,fVar35);
                        param_2 = (undefined8 *)
                                  CONCAT44(SQRT(fVar40 + (float)uStack_178 * (float)uStack_178),
                                           SQRT(fVar35 + fStack_188 * fStack_188));
                        uStack_f0 = param_2;
                        fVar35 = fStack_e8;
                        FUN_10a3e857c(*(undefined8 *)(lVar21 + 0x140),&uStack_f0);
                      }
                      if (*(char *)((long)param_10 + 6) == '\x01') {
                        uVar22 = *(undefined8 *)(lVar21 + 0x140);
                        FUN_10a7e9644(&uStack_190);
                        uStack_f0 = (undefined8 *)CONCAT44((int)param_2,fVar35);
                        fStack_e8 = (float)param_3;
                        fStack_e4 = SUB84(param_4,0);
                        FUN_10a3e8838(uVar22,&uStack_f0);
                      }
                    }
                    else {
LAB_10a7e90ec:
                      uVar12 = (*(long *)((long)plVar10 + 0x48) - *(long *)((long)plVar10 + 0x40) >>
                               2) * 0x2e8ba2e8ba2e8ba3;
                      uStack_190 = puVar24;
                      if (uVar12 < uVar26 || uVar12 - uVar26 == 0) goto LAB_10a7e9554;
                      plVar16 = (long *)(*(long *)((long)plVar10 + 0x40) + uVar26 * 0x2c);
                      lVar23 = plVar16[1];
                      puVar24 = (undefined8 *)*plVar16;
                      fStack_e8 = (float)lVar23;
                      fStack_e4 = (float)((ulong)lVar23 >> 0x20);
                      lVar23 = *(long *)(param_5 + 0x120);
                      uStack_f0 = puVar24;
                      if ((ulong)(*(long *)(param_5 + 0x128) - lVar23 >> 4) <= uVar26)
                      goto LAB_10a7e9554;
                      uVar22 = *(undefined8 *)(lVar21 + 0x40);
                      uVar30 = *(undefined8 *)(lVar21 + 0x48);
                      uStack_190._0_4_ = (float)uVar22;
                      uStack_190._4_4_ = (float)((ulong)uVar22 >> 0x20);
                      fStack_188 = (float)uVar30;
                      fStack_184 = (float)((ulong)uVar30 >> 0x20);
                      lVar27 = param_5 + 0xf8;
                      FUN_10a80df24(lVar27,uVar22,uVar30,&uStack_190);
                      fVar43 = SUB84(puVar24,0);
                      func_0x00010a7e97b8(lVar23 + uVar26 * 0x10,&uStack_f0,lVar27 + 0x20);
                      uVar22 = *(undefined8 *)(lVar21 + 0x140);
                      puStack_1d0 = *(undefined8 **)(lVar21 + 0x40);
                      uStack_1c8 = *(undefined8 *)(lVar21 + 0x48);
                      lVar23 = param_5 + 0xd0;
                      param_2 = puVar7;
                      param_4 = puVar38;
                      fVar40 = fVar43;
                      fVar42 = fVar35;
                      FUN_10a80dabc(lVar23,puStack_1d0,uStack_1c8,&puStack_1d0);
                      FUN_10a7e9644(lVar23 + 0x20);
                      fVar37 = SUB84(param_4,0);
                      fVar29 = SUB84(puVar38,0);
                      fVar32 = SUB84(param_2,0);
                      fVar41 = SUB84(puVar7,0);
                      fStack_184 = ((-(fVar40 * fVar43) + fVar29 * fVar37) - fVar41 * fVar32) -
                                   fVar35 * fVar42;
                      uStack_190._0_4_ =
                           (fVar29 * fVar40 + fVar43 * fVar37 + fVar35 * fVar32) - fVar41 * fVar42;
                      uStack_190._4_4_ =
                           (fVar29 * fVar32 + fVar41 * fVar37 + fVar43 * fVar42) - fVar35 * fVar40;
                      fVar35 = fVar29 * fVar42 + fVar35 * fVar37;
                      param_3 = (ulong)(uint)fVar35;
                      fStack_188 = (fVar35 + fVar41 * fVar40) - fVar43 * fVar32;
                      FUN_10a3e82bc(uVar22,&uStack_190);
                      if (*param_10 == 0) {
                        uVar12 = (*(long *)((long)plVar10 + 0x48) - *(long *)((long)plVar10 + 0x40)
                                 >> 2) * 0x2e8ba2e8ba2e8ba3;
                        if (uVar12 < uVar26 || uVar12 - uVar26 == 0) goto LAB_10a7e9554;
                        FUN_10a3e814c(*(undefined8 *)(lVar21 + 0x140),
                                      *(long *)((long)plVar10 + 0x40) + uVar26 * 0x2c + 0x10);
                        uVar12 = (*(long *)((long)plVar10 + 0x48) - *(long *)((long)plVar10 + 0x40)
                                 >> 2) * 0x2e8ba2e8ba2e8ba3;
                        if (uVar12 < uVar26 || uVar12 - uVar26 == 0) goto LAB_10a7e9554;
                        lVar23 = *(long *)((long)plVar10 + 0x40) + uVar26 * 0x2c;
                        if (*(char *)(lVar23 + 0x28) == '\x01') {
                          FUN_10a3e3894(*(undefined8 *)(lVar21 + 0x140),lVar23 + 0x1c);
                        }
                      }
                    }
                  }
                }
              }
              uVar26 = uVar26 + 1;
              lVar21 = *(long *)((long)plVar10 + 0x28);
              uVar12 = (*(long *)((long)plVar10 + 0x30) - lVar21 >> 3) * -0x79435e50d79435e5;
            } while (uVar26 <= uVar12 && uVar12 - uVar26 != 0);
          }
          FUN_10a80e724(&lStack_150);
          FUN_10a80e2dc(&lStack_120);
        }
      }
    }
LAB_10a7e94c0:
    uVar22 = 1;
  }
LAB_10a7e94c4:
  if (plStack_260 == (long *)0x0) {
    return uVar22;
  }
  plVar17 = plStack_260 + 1;
  do {
    lVar21 = *plVar17;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *plVar17 = lVar21 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar21 == 0) {
    (**(code **)(*plStack_260 + 0x10))(plStack_260);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_260);
    return uVar22;
  }
  return uVar22;
}



/* Entry: 10a7e9644; end: 10a7e9943;  */

float FUN_10a7e9644(float *param_1)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[6];
  fVar7 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar8 * fVar8);
  fVar5 = fVar5 / fVar7;
  fVar10 = param_1[10];
  fVar3 = (float)*(undefined8 *)(param_1 + 8);
  fVar4 = (float)*(undefined8 *)(param_1 + 4);
  fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar12 = NEON_fmaxnm(CONCAT44(SQRT(fVar4 * fVar4 + fVar14 * fVar14 + fVar9 * fVar9),
                                SQRT(fVar3 * fVar3 + fVar17 * fVar17 + fVar10 * fVar10)),
                       0x33d6bf9533d6bf95,4);
  fVar13 = (float)((ulong)uVar12 >> 0x20);
  fVar11 = (float)uVar12;
  fVar10 = fVar10 / fVar11;
  fVar14 = fVar14 / fVar13;
  fVar15 = (fVar5 - fVar14) - fVar10;
  fVar16 = (fVar14 - fVar5) - fVar10;
  fVar17 = (fVar10 - fVar5) - fVar14;
  fVar10 = fVar5 + fVar14 + fVar10;
  fVar14 = fVar15;
  if (fVar15 <= fVar10) {
    fVar14 = fVar10;
  }
  bVar1 = 2;
  if (fVar16 <= fVar14) {
    fVar16 = fVar14;
    bVar1 = fVar10 < fVar15;
  }
  bVar2 = 3;
  if (fVar17 <= fVar16) {
    fVar17 = fVar16;
    bVar2 = bVar1;
  }
  fVar16 = SQRT(fVar17 + 1.0) * 0.5;
  fVar14 = 0.25 / fVar16;
  fVar17 = fVar6 / fVar7 + fVar4 / fVar13;
  if (bVar2 != 2) {
    fVar17 = fVar8 / fVar7 + fVar3 / fVar11;
  }
  fVar3 = (fVar9 / fVar13 - param_1[9] / fVar11) * fVar14;
  if (bVar2 != 0) {
    fVar3 = fVar16;
  }
  fVar17 = fVar17 * fVar14;
  if (bVar2 < 2) {
    fVar17 = fVar3;
  }
  return fVar17;
}



/* Entry: 10a7e9944; end: 10a7e9a0b;  */

void FUN_10a7e9944(long *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lStack_100;
  long lStack_f8;
  undefined4 uStack_e4;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  
  puVar14 = (undefined8 *)param_1[1];
  if (puVar14 < (undefined8 *)param_1[2]) {
    uVar15 = *param_2;
    puVar14[1] = param_2[1];
    *puVar14 = uVar15;
    puVar14 = puVar14 + 2;
  }
  else {
    lVar12 = (long)puVar14 - *param_1;
    uVar10 = (lVar12 >> 4) + 1;
    if (uVar10 >> 0x3c != 0) {
      FUN_10a1320a4();
      uStack_b8 = 0;
      lStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_a0 = 0x3f800000;
      for (puVar14 = (undefined8 *)param_2[0x33]; puVar14 != param_2 + 0x32;
          puVar14 = (undefined8 *)puVar14[1]) {
        lVar11 = puVar14[2];
        lVar12 = *param_3;
        FUN_10a7fdc3c(lVar12,param_3[1],lVar11);
        if (lVar12 != 0) {
          uVar3 = *(undefined4 *)(lVar12 + 0x18);
          lVar6 = lStack_c0;
          func_0x00010a7fdd08(lStack_c0,uStack_b8,uVar3);
          if (lVar6 != 0) {
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            goto LAB_10a7e9bc8;
          }
          plVar7 = &lStack_c0;
          FUN_10a7fdda0(plVar7,uVar3,(undefined4 *)(lVar12 + 0x18));
          plVar7[3] = lVar11;
        }
      }
      lStack_e0 = 0;
      lStack_d8 = 0;
      lStack_d0 = 0;
      FUN_10a7fdb80(&lStack_e0,param_2);
      lVar12 = *param_3;
      FUN_10a7fdc3c(lVar12,param_3[1],param_2);
      if (lVar12 == 0) {
        FUN_109ffdddc(&UNK_10f639994);
      }
      else {
        iVar4 = *(int *)(lVar12 + 0x18);
        uVar10 = (param_4[1] - *param_4 >> 3) * -0x5555555555555555;
        if ((ulong)(long)iVar4 <= uVar10 && uVar10 - (long)iVar4 != 0) {
          puVar14 = (undefined8 *)(*param_4 + (long)iVar4 * 0x18);
          puVar13 = (undefined4 *)*puVar14;
          puVar2 = (undefined4 *)puVar14[1];
          do {
            if (puVar13 == puVar2) {
              param_1[1] = lStack_d8;
              *param_1 = lStack_e0;
              param_1[2] = lStack_d0;
LAB_10a7e9bc8:
              FUN_10a7fe398(&lStack_c0);
              return;
            }
            uVar3 = *puVar13;
            lVar12 = lStack_c0;
            uStack_e4 = uVar3;
            func_0x00010a7fdd08(lStack_c0,uStack_b8,uVar3);
            if (lVar12 == 0) {
              *param_1 = 0;
              param_1[1] = 0;
              param_1[2] = 0;
LAB_10a7e9bb8:
              if (lStack_e0 != 0) {
                lStack_d8 = lStack_e0;
                __ZdlPv();
              }
              goto LAB_10a7e9bc8;
            }
            plVar7 = &lStack_c0;
            FUN_10a7fdda0(plVar7,uVar3,&uStack_e4);
            FUN_10a7e9a0c(&lStack_100,plVar7[3],param_3,param_4);
            lVar11 = lStack_f8;
            lVar12 = lStack_100;
            if (lStack_100 == lStack_f8) {
              *param_1 = 0;
              param_1[1] = 0;
              param_1[2] = 0;
            }
            else {
              FUN_10a7fe150(&lStack_e0,lStack_d8,lStack_100,lStack_f8,lStack_f8 - lStack_100 >> 3);
            }
            if (lVar12 != 0) {
              __ZdlPv(lVar12);
            }
            if (lVar12 == lVar11) goto LAB_10a7e9bb8;
            puVar13 = puVar13 + 1;
          } while( true );
        }
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a7e9c00);
      (*pcVar5)();
    }
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 3;
    if (uVar9 <= uVar10) {
      uVar9 = uVar10;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar9 = 0xfffffffffffffff;
    }
    plVar7 = param_1;
    FUN_10a1320b8();
    puVar1 = (undefined8 *)((long)plVar7 + lVar12);
    uVar15 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar15;
    puVar14 = puVar1 + 2;
    lVar11 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar11);
    lVar12 = *param_1;
    *param_1 = lVar11;
    param_1[1] = (long)puVar14;
    param_1[2] = (long)(plVar7 + uVar9 * 2);
    if (lVar12 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar14;
  return;
}



/* Entry: 10a7e9a0c; end: 10a7e9c47;  */

void FUN_10a7e9a0c(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  long lStack_d0;
  long lStack_c8;
  undefined4 uStack_b4;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  uStack_88 = 0;
  lStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0x3f800000;
  for (lVar12 = *(long *)(param_2 + 0x198); lVar12 != param_2 + 400; lVar12 = *(long *)(lVar12 + 8))
  {
    lVar10 = *(long *)(lVar12 + 0x10);
    lVar5 = *param_3;
    FUN_10a7fdc3c(lVar5,param_3[1],lVar10);
    if (lVar5 != 0) {
      uVar2 = *(undefined4 *)(lVar5 + 0x18);
      lVar6 = lStack_90;
      func_0x00010a7fdd08(lStack_90,uStack_88,uVar2);
      if (lVar6 != 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_10a7e9bc8;
      }
      plVar7 = &lStack_90;
      FUN_10a7fdda0(plVar7,uVar2,(undefined4 *)(lVar5 + 0x18));
      plVar7[3] = lVar10;
    }
  }
  lStack_b0 = 0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  FUN_10a7fdb80(&lStack_b0,param_2);
  lVar12 = *param_3;
  FUN_10a7fdc3c(lVar12,param_3[1],param_2);
  if (lVar12 == 0) {
    FUN_109ffdddc(&UNK_10f639994);
  }
  else {
    iVar3 = *(int *)(lVar12 + 0x18);
    uVar9 = (param_4[1] - *param_4 >> 3) * -0x5555555555555555;
    if ((ulong)(long)iVar3 <= uVar9 && uVar9 - (long)iVar3 != 0) {
      puVar8 = (undefined8 *)(*param_4 + (long)iVar3 * 0x18);
      puVar11 = (undefined4 *)*puVar8;
      puVar1 = (undefined4 *)puVar8[1];
      do {
        if (puVar11 == puVar1) {
          param_1[1] = lStack_a8;
          *param_1 = lStack_b0;
          param_1[2] = lStack_a0;
LAB_10a7e9bc8:
          FUN_10a7fe398(&lStack_90);
          return;
        }
        uVar2 = *puVar11;
        lVar12 = lStack_90;
        uStack_b4 = uVar2;
        func_0x00010a7fdd08(lStack_90,uStack_88,uVar2);
        if (lVar12 == 0) {
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
LAB_10a7e9bb8:
          if (lStack_b0 != 0) {
            lStack_a8 = lStack_b0;
            __ZdlPv();
          }
          goto LAB_10a7e9bc8;
        }
        plVar7 = &lStack_90;
        FUN_10a7fdda0(plVar7,uVar2,&uStack_b4);
        FUN_10a7e9a0c(&lStack_d0,plVar7[3],param_3,param_4);
        lVar5 = lStack_c8;
        lVar12 = lStack_d0;
        if (lStack_d0 == lStack_c8) {
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
        }
        else {
          FUN_10a7fe150(&lStack_b0,lStack_a8,lStack_d0,lStack_c8,lStack_c8 - lStack_d0 >> 3);
        }
        if (lVar12 != 0) {
          __ZdlPv(lVar12);
        }
        if (lVar12 == lVar5) goto LAB_10a7e9bb8;
        puVar11 = puVar11 + 1;
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7e9c00);
  (*pcVar4)();
}



/* Entry: 10a7e9c48; end: 10a7e9e13;  */

void FUN_10a7e9c48(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x148;
  __Znwm();
  lStack_60 = 0;
  uStack_58 = 0;
  FUN_10a7e8138();
  if (*(long *)(param_2 + 8) != 0) {
    FUN_10a7e78dc(*(long *)(param_2 + 8),lVar1 + 8,param_3);
  }
  *(undefined1 *)(lVar1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar1 + 0x20,param_2 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar1 + 0x38,param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(lVar1 + 0x50) = uVar4;
  *(undefined1 *)(lVar1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  if (lVar1 != param_2) {
    FUN_10a0ea4a0(lVar1 + 0x68,*(long *)(param_2 + 0x68),*(long *)(param_2 + 0x70),
                  *(long *)(param_2 + 0x70) - *(long *)(param_2 + 0x68) >> 2);
  }
  *(undefined2 *)(lVar1 + 0x80) = *(undefined2 *)(param_2 + 0x80);
  for (plVar3 = *(long **)(param_2 + 0xe0); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    uStack_58 = plVar3[3];
    lStack_60 = plVar3[2];
    func_0x00010a35bf90(param_3 + 0x88,&lStack_60);
    lVar2 = lVar1 + 0xd0;
    FUN_10a80dabc();
    uVar5 = plVar3[5];
    uVar4 = plVar3[4];
    uVar7 = plVar3[7];
    uVar6 = plVar3[6];
    uVar8 = plVar3[8];
    uVar10 = plVar3[0xb];
    uVar9 = plVar3[10];
    *(long *)(lVar2 + 0x48) = plVar3[9];
    *(undefined8 *)(lVar2 + 0x40) = uVar8;
    *(undefined8 *)(lVar2 + 0x58) = uVar10;
    *(undefined8 *)(lVar2 + 0x50) = uVar9;
    *(undefined8 *)(lVar2 + 0x28) = uVar5;
    *(undefined8 *)(lVar2 + 0x20) = uVar4;
    *(undefined8 *)(lVar2 + 0x38) = uVar7;
    *(undefined8 *)(lVar2 + 0x30) = uVar6;
  }
  for (plVar3 = *(long **)(param_2 + 0x108); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    uStack_58 = plVar3[3];
    lStack_60 = plVar3[2];
    func_0x00010a35bf90(param_3 + 0x88,&lStack_60);
    lVar2 = lVar1 + 0xf8;
    FUN_10a80df24();
    uVar4 = plVar3[4];
    *(long *)(lVar2 + 0x28) = plVar3[5];
    *(undefined8 *)(lVar2 + 0x20) = uVar4;
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10a7e9e14; end: 10a7e9e33;  */

undefined1  [16] FUN_10a7e9e14(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x21;
  auVar1._0_8_ = &UNK_10f6621c9;
  return auVar1;
}



/* Entry: 10a7e9e34; end: 10a7e9e9b;  */

bool FUN_10a7e9e34(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf6621c9;
    _memcmp(&UNK_10f6621c9,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a7e9e9c; end: 10a7e9ea3;  */

bool FUN_10a7e9e9c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf6621c9;
    _memcmp(&UNK_10f6621c9,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a7e9ea4; end: 10a7ea26b;  */

void FUN_10a7e9ea4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6621c9,0x21);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c1e368;
  pppuVar2 = (undefined8 ***)&UNK_10f678718;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xab;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c1e368;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f678e4a,FUN_10a80ef0c,FUN_10a80efbc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f679074,FUN_10a80f2e0,FUN_10a80f390);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f67907e,FUN_10a80f448,FUN_10a80f4f8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f679092,FUN_10a80f5b0,FUN_10a80f670);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67909c,FUN_10a80f734,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6790a2,FUN_10a80f7e8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6790a7,FUN_10a80f8a0,FUN_10a80f95c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644824,FUN_10a80fa4c,FUN_10a80fb04);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6621c9,0x21);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7ea250);
  (*pcVar6)();
}



/* Entry: 10a7ea26c; end: 10a7ea4bf;  */

void FUN_10a7ea26c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined1 uStack_51;
  long *plStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined2 uStack_32;
  
  FUN_10a1da3a4(param_1,1,1,0,0,0x2e,0,0);
  FUN_10a7eb444(&plStack_50,1,1,0x20,0);
  FUN_10a00e5c4(param_1 + 0x318,&plStack_50);
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  uStack_32 = 0xe3d0;
  (**(code **)(**(long **)(param_1 + 0x318) + 0xa0))
            (*(long **)(param_1 + 0x318),0,0,0,1,1,0,&uStack_32,0);
  FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x328),param_1 + 0x318);
  FUN_10a7eb444(&plStack_50,1,1,1,0);
  puVar2 = (undefined8 *)(param_1 + 0x370);
  FUN_10a00e5c4(puVar2,&plStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
    do {
      lVar5 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  plVar6 = (long *)*puVar2;
  uStack_51 = 0;
  plStack_48 = (long *)0x0;
  uStack_40 = 0;
  plStack_50 = (long *)0x0;
  func_0x000107c2b048(&plStack_50,&uStack_51,&plStack_50,1);
  (**(code **)(*plVar6 + 0xa0))(plVar6,0,0,0,1,1,0,plStack_50,0);
  if (plStack_50 != (long *)0x0) {
    plStack_48 = plStack_50;
    __ZdlPv();
  }
  FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x380),puVar2);
  FUN_10a7eb444(&plStack_50,1,1,0x2e,1);
  FUN_10a00e5c4(param_1 + 0x308,&plStack_50);
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x368) = 0x3f800000;
  return;
}



/* Entry: 10a7ea4c0; end: 10a7eaa0b;  */

/* WARNING: Removing unreachable block (ram,0x00010a7ea7e4) */

void FUN_10a7ea4c0(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  
  lVar10 = *(long *)(param_2 + 0x858);
  plVar9 = *(long **)(param_2 + 0x860);
  if (plVar9 != (long *)0x0) {
    plVar6 = plVar9 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4 = (undefined8 *)0x148;
  lVar7 = param_3;
  __Znwm();
  puVar5 = puVar4;
  func_0x00010a0fda30();
  FUN_10aa7093c(puVar4,param_2,puVar5,lVar7);
  *puVar4 = &PTR_DAT_110c203c0;
  puVar4[2] = &PTR_FUN_110c20468;
  puVar4[7] = &PTR_DAT_110c204c0;
  *(undefined4 *)(puVar4 + 0x1c) = 0;
  puVar4[0x25] = 0;
  puVar4[0x26] = 0;
  puVar4[0x20] = 0;
  puVar4[0x1f] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x22] = 0;
  puVar4[0x21] = 0;
  puVar4[0x24] = 0;
  puVar4[0x23] = 0;
  *(undefined4 *)(puVar4 + 0x25) = 0x3f800000;
  puVar4[0x27] = 0;
  *(undefined1 *)(puVar4 + 0x28) = 0;
  if (plVar9 != (long *)0x0) {
    plVar6 = plVar9 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = plVar9 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
  plVar6 = (long *)0x30;
  puStack_80 = puVar4;
  __Znwm();
  plVar11 = plVar6 + 1;
  *plVar11 = 0;
  *plVar6 = (long)&PTR_FUN_110c20220;
  plVar6[2] = 0;
  plVar6[3] = (long)puVar4;
  plVar6[4] = lVar10;
  plVar6[5] = (long)plVar9;
  plStack_78 = plVar6;
  if (puVar4[6] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar6 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar4[5] = puVar4;
    puVar4[6] = plVar6;
  }
  else {
    if (*(long *)(puVar4[6] + 8) != -1) goto LAB_10a7ea690;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar6 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar4[5] = puVar4;
    puVar4[6] = plVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar7 = *plVar11;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10a7ea690:
  plVar6 = (long *)0x90;
  __Znwm();
  puStack_70 = puStack_80;
  plVar11 = plVar6 + 1;
  *plVar11 = 0;
  plVar6[2] = 0;
  ppuStack_60 = (undefined8 **)(plVar6 + 3);
  plVar6[4] = (long)plStack_78;
  *ppuStack_60 = puStack_80;
  *plVar6 = (long)&PTR_FUN_110b9fe30;
  puStack_80 = (undefined8 *)0x0;
  plStack_78 = (long *)0x0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0x32aaaba7;
  plVar6[9] = 0;
  plVar6[8] = 0;
  plVar6[0xb] = 0;
  plVar6[10] = 0;
  plVar6[0xd] = 0;
  plVar6[0xc] = 0;
  plVar6[0xf] = 0;
  plVar6[0xe] = 0;
  plVar6[0x11] = 0;
  plVar6[0x10] = 0;
  *param_1 = (long)puStack_70;
  param_1[1] = (long)plVar6;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = *plVar11 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = *plVar11 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_68 = plVar6;
  plStack_58 = plVar6;
  func_0x00010a053e8c(ppuStack_60,&puStack_70);
  plVar6 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar11 = plStack_68 + 1;
    do {
      lVar7 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (*ppuStack_60 != (undefined8 *)0x0) {
    func_0x00010a053ee8(*ppuStack_60,&ppuStack_60);
  }
  plVar6 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar11 = plStack_58 + 1;
    do {
      lVar7 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar11 = plStack_78 + 1;
    do {
      lVar7 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar6 = plVar9 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if ((lVar10 != 0) && (ppuVar8 = (undefined8 **)*param_1, ppuVar8 != (undefined8 **)0x0)) {
    plStack_58 = (long *)param_1[1];
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_60 = ppuVar8;
    FUN_10aa88c30(lVar10,&ppuStack_60);
    plVar6 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar11 = plStack_58 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar6 = plVar9 + 1;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  lVar10 = *param_1;
  *(undefined1 *)(lVar10 + 0x140) = 1;
  if (param_3 != 0) {
    *(undefined4 *)(lVar10 + 0xe0) = *(undefined4 *)(param_3 + 0xe0);
    FUN_10a7e1f90(lVar10 + 0xe8,param_3 + 0xe8);
    lVar10 = *param_1;
    puStack_80 = (undefined8 *)((ulong)puStack_80 & 0xffffffffffffff00);
    ppuStack_60 = &puStack_80;
    param_3 = param_3 + 0x108;
    FUN_10a814778(param_3,&puStack_80,&UNK_10dd5b8f9,&ppuStack_60,&puStack_70);
    func_0x00010a7e2008(lVar10 + 0xe8,0,param_3 + 0x18);
  }
  return;
}



/* Entry: 10a7eaa0c; end: 10a7eadfb;  */

undefined8 * FUN_10a7eaa0c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined4 in_s3;
  undefined2 auStack_60 [4];
  long *plStack_58;
  
  param_1[0x73] = &PTR_FUN_110c383b8;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  *(undefined2 *)(param_1 + 0x76) = 0x100;
  puVar4 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c1bf40,param_2);
  puVar4[0x51] = &PTR_FUN_110c205d0;
  puVar4 = puVar4 + 0x52;
  FUN_10a0040d0(puVar4,&PTR_PTR_110c1bf60);
  auStack_60[0] = 0;
  FUN_10a00db68(param_1 + 0x57,param_2,auStack_60);
  *param_1 = &PTR_DAT_110c1bc30;
  param_1[2] = &PTR_FUN_110c1bd88;
  param_1[5] = &PTR_FUN_110c1bdb8;
  param_1[0x73] = &PTR_FUN_110c1bf00;
  param_1[0x15] = &PTR_FUN_110c1be10;
  param_1[0x51] = &PTR_FUN_110c1be30;
  param_1[0x52] = &PTR_DAT_110c1be60;
  param_1[0x57] = &PTR_DAT_110c1bea8;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0x3f000000;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  puVar5 = (undefined8 *)0x2b8;
  __Znwm();
  puVar5[0x53] = &PTR_FUN_110c383b8;
  puVar5[0x55] = 0;
  puVar5[0x54] = 0;
  *(undefined2 *)(puVar5 + 0x56) = 0x100;
  FUN_10a1da04c();
  *puVar5 = &PTR_FUN_110bb3440;
  puVar5[2] = &PTR_FUN_110bb3570;
  puVar5[5] = &PTR_FUN_110bb35a0;
  puVar5[0x53] = &PTR_FUN_110bb3648;
  puVar5[0x15] = &PTR_FUN_110bb35f8;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  puVar5[0x52] = 0;
  puVar5[0x51] = 0;
  param_1[0x65] = puVar5;
  param_1[0x66] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0x3f800000;
  param_1[0x6a] = 0;
  param_1[0x69] = 0x3f800000;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0x3f800000;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  puVar5 = (undefined8 *)0x2b8;
  __Znwm();
  puVar5[0x53] = &PTR_FUN_110c383b8;
  puVar5[0x55] = 0;
  puVar5[0x54] = 0;
  *(undefined2 *)(puVar5 + 0x56) = 0x100;
  FUN_10a1da04c();
  *puVar5 = &PTR_FUN_110bb3440;
  puVar5[2] = &PTR_FUN_110bb3570;
  puVar5[5] = &PTR_FUN_110bb35a0;
  puVar5[0x53] = &PTR_FUN_110bb3648;
  puVar5[0x15] = &PTR_FUN_110bb35f8;
  puVar5[0x52] = 0;
  puVar5[0x51] = 0;
  param_1[0x70] = puVar5;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  plVar1 = (long *)((long)puVar4 + *(long *)(param_1[0x52] + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_2;
    if (param_2 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  FUN_10a5ae998(param_1[0x55],&PTR_DAT_110b99f08,param_2,puVar4);
  param_1[0x58] = param_2;
  FUN_10a5ae998(param_1[0x5a],&PTR_DAT_110b9f720,param_2,param_1 + 0x57);
  *(undefined1 *)(param_1[0x65] + 8) = 1;
  *(undefined1 *)(param_1[0x70] + 8) = 1;
  FUN_10a7ea26c(param_1);
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  uVar8 = 0x447a0000;
  uVar7 = 0x3f800000;
  FUN_10ac628bc(0);
  *(undefined4 *)(param_1 + 0x5c) = uVar7;
  *(undefined4 *)((long)param_1 + 0x2e4) = uVar8;
  *(uint *)(param_1 + 0x5d) = CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9)));
  *(undefined4 *)((long)param_1 + 0x2ec) = in_s3;
  FUN_10a7ea4c0(auStack_60,param_2,0);
  func_0x00010a4c390c(param_1 + 0x5f,auStack_60);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  return param_1;
}



/* Entry: 10a7eadfc; end: 10a7eaf1f;  */

void FUN_10a7eadfc(undefined8 param_1,long param_2)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f6790b9,0x26);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_2 + 0x2f0));
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7eaf20; end: 10a7eaf27;  */

void FUN_10a7eaf20(undefined8 param_1,long param_2)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f6790b9,0x26);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_2 + 0x2c8));
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7eaf28; end: 10a7eb02b;  */

void FUN_10a7eaf28(long param_1,long *param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  undefined1 *puStack_128;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long *plStack_d8;
  undefined1 uStack_d0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2;
  FUN_10a80fc44(param_2,(undefined8 *)(param_1 + 0x2f8));
  if (((ulong)plVar3 & 1) == 0) {
    FUN_10a7eb02c(*(undefined8 *)(param_1 + 0x2f8),param_2);
  }
  pcStack_78 = FUN_10a810104;
  ppuStack_70 = &PTR_FUN_110c1ff78;
  lStack_68 = param_1;
  FUN_10a7e353c(param_2,&PTR_DAT_110c1bf80,&pcStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  ppuVar6 = &PTR_DAT_110c1bfa0;
  uVar7 = 0x3f000000;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x48))();
  *(undefined4 *)(param_1 + 0x2f0) = uVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  plVar4 = plVar3;
  __Unwind_Resume();
  pcStack_88 = FUN_10a7eb02c;
  ppuVar5 = ppuVar6;
  plStack_a0 = param_2;
  plStack_98 = plVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  (**(code **)(*ppuVar6 + 0x30))(ppuVar6,&PTR_DAT_110c1d6b0);
  *(int *)(plVar4 + 0x1c) = (int)ppuVar5;
  FUN_10a7e5834(plVar4 + 0x1d,ppuVar6,&PTR_DAT_110c1d2f0);
  ppuVar5 = &PTR_DAT_110c1d310;
  plStack_d8 = plVar4 + 0x1d;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_e8 = FUN_10a8146d0;
  ppuStack_e0 = &PTR_FUN_110c201f8;
  uStack_d0 = 0;
  FUN_10a7e353c(ppuVar6,&PTR_DAT_110c1d310,&pcStack_e8,0);
  pppuVar1 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  __Unwind_Resume();
  func_0x00010aa70b70();
  (**(code **)(*ppuVar5 + 0x40))(ppuVar5,&PTR_DAT_110c1bae8,*(undefined4 *)(pppuVar1 + 0x1c));
  FUN_10a009b20(ppuVar5,&PTR_DAT_110c1bb08,pppuVar1 + 0x1f,&UNK_10f63349d,0xe);
  uStack_12a = 0;
  puStack_128 = &uStack_12a;
  pppuVar2 = pppuVar1 + 0x23;
  FUN_10a814778(pppuVar2,&uStack_12a,&UNK_10dd5b8f9,&puStack_128,&uStack_129);
  FUN_10a009b20(ppuVar5,&PTR_DAT_110c1bb28,pppuVar2 + 3,&UNK_10f63349d,0xe);
  FUN_10a202aac(ppuVar5,&PTR_DAT_110c20520,pppuVar1 + 0x1d,&UNK_10f645f59,0x1a);
  (**(code **)(*ppuVar5 + 0x70))
            (ppuVar5,&PTR_s_isDefault_110c1bb48,*(undefined1 *)(pppuVar1 + 0x28));
  return;
}



/* Entry: 10a7eb02c; end: 10a7eb08f;  */

void FUN_10a7eb02c(long param_1,long *param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 *puStack_a8;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined1 uStack_50;
  long lStack_28;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c1d6b0);
  *(int *)(param_1 + 0xe0) = (int)plVar3;
  FUN_10a7e5834(param_1 + 0xe8,param_2,&PTR_DAT_110c1d2f0);
  ppuVar4 = &PTR_DAT_110c1d310;
  lStack_58 = param_1 + 0xe8;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a8146d0;
  ppuStack_60 = &PTR_FUN_110c201f8;
  uStack_50 = 0;
  FUN_10a7e353c(param_2,&PTR_DAT_110c1d310,&pcStack_68,0);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  func_0x00010aa70b70();
  (**(code **)(*ppuVar4 + 0x40))(ppuVar4,&PTR_DAT_110c1bae8,*(undefined4 *)(pppuVar1 + 0x1c));
  FUN_10a009b20(ppuVar4,&PTR_DAT_110c1bb08,pppuVar1 + 0x1f,&UNK_10f63349d,0xe);
  uStack_aa = 0;
  puStack_a8 = &uStack_aa;
  pppuVar2 = pppuVar1 + 0x23;
  FUN_10a814778(pppuVar2,&uStack_aa,&UNK_10dd5b8f9,&puStack_a8,&uStack_a9);
  FUN_10a009b20(ppuVar4,&PTR_DAT_110c1bb28,pppuVar2 + 3,&UNK_10f63349d,0xe);
  FUN_10a202aac(ppuVar4,&PTR_DAT_110c20520,pppuVar1 + 0x1d,&UNK_10f645f59,0x1a);
  (**(code **)(*ppuVar4 + 0x70))
            (ppuVar4,&PTR_s_isDefault_110c1bb48,*(undefined1 *)(pppuVar1 + 0x28));
  return;
}



/* Entry: 10a7eb090; end: 10a7eb19f;  */

void FUN_10a7eb090(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined *puStack_40;
  long *plStack_38;
  
  puStack_40 = &UNK_10f6621c9;
  plStack_38 = (long *)0x21;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c1f658,&puStack_40);
  FUN_10a4c3afc(param_2,&PTR_DAT_110bb3700,param_1 + 0x2f8,&UNK_10f65ce18,0x19);
  FUN_10a7eb1a0(&puStack_40,param_1);
  FUN_10a009b20(param_2,&PTR_DAT_110c1bf80,&puStack_40,&UNK_10f63349d,0xe);
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x2f0),param_2,&PTR_DAT_110c1bfa0);
  return;
}



/* Entry: 10a7eb1a0; end: 10a7eb217;  */

void FUN_10a7eb1a0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  uStack_2a = 2;
  puStack_28 = &uStack_2a;
  lVar4 = *(long *)(param_2 + 0x2f8) + 0x108;
  FUN_10a814778(lVar4,&uStack_2a,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  lVar5 = *(long *)(lVar4 + 0x20);
  uVar6 = *(undefined8 *)(lVar4 + 0x18);
  param_1[1] = *(undefined8 *)(lVar4 + 0x20);
  *param_1 = uVar6;
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



/* Entry: 10a7eb218; end: 10a7eb23b;  */

long FUN_10a7eb218(long param_1)

{
  return param_1 + 0x308;
}



/* Entry: 10a7eb23c; end: 10a7eb2e7;  */

void FUN_10a7eb23c(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auStack_60 [44];
  uint uStack_34;
  byte bStack_28;
  
  FUN_10a7eb2e8(auStack_60,*(undefined8 *)(param_1 + 0x2f8));
  if (bStack_28 == 1) {
    uVar2 = *(long *)(param_1 + 0x2f8) + 0xe8;
    FUN_10a7e26a4(uVar2,2);
    if ((uVar2 & 1) != 0) {
      if ((bStack_28 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7eb2d4);
        (*pcVar1)();
      }
      uStack_34 = uStack_34 | 8;
      if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
        *(undefined8 *)(param_2 + 0x298) = 0;
        *(undefined8 *)(param_2 + 0x2a0) = 0;
        *(undefined8 *)(param_2 + 0x2a8) = 0;
        *(undefined1 *)(param_2 + 0x2b0) = 1;
      }
      FUN_10aad0050((undefined8 *)(param_2 + 0x298),auStack_60);
    }
  }
  func_0x00010a7fd678(auStack_60);
  return;
}



/* Entry: 10a7eb2e8; end: 10a7eb43b;  */

void FUN_10a7eb2e8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_10a7e20bc(param_2 + 0xe8);
  FUN_10a7e2370(param_2 + 0xe8,0);
  lVar7 = *(long *)(param_2 + 0xf8);
  plVar2 = *(long **)(param_2 + 0x100);
  if (plVar2 == (long *)0x0) {
    if (lVar7 != 0) goto LAB_10a7eb370;
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    else {
LAB_10a7eb370:
      lVar7 = param_2 + 0xe8;
      FUN_10a7e26a4(lVar7,0);
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 1;
        do {
          lVar8 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      if ((int)lVar7 != 0) {
        uVar10 = *(undefined8 *)(param_2 + 0x100);
        uVar9 = *(undefined8 *)(param_2 + 0xf8);
        if (*(long *)(param_2 + 0x100) != 0) {
          plVar2 = (long *)(*(long *)(param_2 + 0x100) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar3 = *(undefined4 *)(param_2 + 0xe0);
        *param_1 = 0x79646f62;
        *(undefined1 *)((long)param_1 + 0x17) = 4;
        param_1[4] = uVar10;
        param_1[3] = uVar9;
        *(undefined4 *)(param_1 + 5) = uVar3;
        *(undefined4 *)((long)param_1 + 0x2c) = 0;
        *(undefined1 *)(param_1 + 6) = 0;
        uVar6 = 1;
        goto LAB_10a7eb410;
      }
    }
  }
  uVar6 = 0;
  *(undefined1 *)param_1 = 0;
LAB_10a7eb410:
  *(undefined1 *)(param_1 + 7) = uVar6;
  return;
}



/* Entry: 10a7eb43c; end: 10a7eb443;  */

void FUN_10a7eb43c(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auStack_60 [44];
  uint uStack_34;
  byte bStack_28;
  
  FUN_10a7eb2e8(auStack_60,*(undefined8 *)(param_1 + 0x68));
  if (bStack_28 == 1) {
    uVar2 = *(long *)(param_1 + 0x68) + 0xe8;
    FUN_10a7e26a4(uVar2,2);
    if ((uVar2 & 1) != 0) {
      if ((bStack_28 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7eb2d4);
        (*pcVar1)();
      }
      uStack_34 = uStack_34 | 8;
      if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
        *(undefined8 *)(param_2 + 0x298) = 0;
        *(undefined8 *)(param_2 + 0x2a0) = 0;
        *(undefined8 *)(param_2 + 0x2a8) = 0;
        *(undefined1 *)(param_2 + 0x2b0) = 1;
      }
      FUN_10aad0050((undefined8 *)(param_2 + 0x298),auStack_60);
    }
  }
  func_0x00010a7fd678(auStack_60);
  return;
}



/* Entry: 10a7eb444; end: 10a7eb4c7;  */

void FUN_10a7eb444(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  long lVar1;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined8 uStack_48;
  
  lVar1 = 0;
  FUN_10a2421c8();
  uStack_48 = 0x100000000;
  uStack_5c = 1;
  uStack_50 = 1;
  uStack_4c = 0;
  uStack_64 = param_2;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_54 = param_5;
  FUN_10a048f04(param_1,*(undefined8 *)(lVar1 + 0x1e0),&uStack_64);
  *(undefined1 *)(*param_1 + 0x19) = 1;
  return;
}



/* Entry: 10a7eb4c8; end: 10a7eb9d7;  */

void FUN_10a7eb4c8(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  long *plVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  FUN_10a7ea26c();
  lVar13 = 0;
  FUN_10a2421c8();
  plVar14 = *(long **)(lVar13 + 0x228);
  (**(code **)(*plVar14 + 0x68))();
  if ((char)plVar14[0x10] != '\x01' || *(int *)((long)plVar14 + 0x7c) < 2) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    if ((bRam000000011330a9e8 >> 2 & 1) == 0) {
      return;
    }
    FUN_10ae06f30(1,4,&UNK_10f6790fa,&UNK_10f679144,0xa2,&UNK_10f6791b1,&stack0x00000000);
    return;
  }
  *(undefined4 *)(param_1 + 0x74) = 2;
  FUN_10a7eb9d8(*(undefined8 *)(param_1 + 0x2f8));
  lVar13 = *(long *)(param_2 + 0x78);
  FUN_10aacfcb0(lVar13,"body",4);
  if (lVar13 == 0) {
    return;
  }
  lVar16 = *(long *)(lVar13 + 0x18);
  plVar14 = *(long **)(lVar13 + 0x20);
  if (plVar14 != (long *)0x0) {
    plVar22 = plVar14 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar10) {
        *plVar22 = *plVar22 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  if ((lVar16 == 0) ||
     (lVar13 = lVar16, FUN_10aacfdd8(lVar16,*(undefined4 *)(*(long *)(param_1 + 0x2f8) + 0xe0)),
     lVar13 == 0)) goto LAB_10a7eb970;
  ppuVar3 = &PTR_PTR_1132d7f38;
  if (*(undefined ***)(lVar13 + 0xf8) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(lVar13 + 0xf8);
  }
  if ((*(int *)(ppuVar3 + 10) == 0) || (*(int *)((long)ppuVar3 + 0x54) == 0)) goto LAB_10a7eb970;
  uVar4 = *(uint *)(lVar16 + 0xa0);
  uVar6 = *(uint *)(lVar16 + 0xa4);
  FUN_10a1da3a4(param_1,uVar4,uVar6,0,0,0x2e,0,0);
  plVar22 = *(long **)(param_1 + 0x308);
  if (plVar22 == (long *)0x0) {
LAB_10a7eb660:
    FUN_10a7eb444(&uStack_78,uVar4,uVar6,0x2e,1);
    FUN_10a00e5c4(param_1 + 0x308,&uStack_78);
    plVar22 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      plVar15 = plStack_70 + 1;
      do {
        lVar13 = *plVar15;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar10) {
          *plVar15 = lVar13 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
  }
  else {
    plVar15 = plVar22;
    (**(code **)(*plVar22 + 0x28))();
    (**(code **)(*plVar22 + 0x30))();
    uVar23 = (uint)plVar15;
    if (uVar23 < 2) {
      uVar23 = 1;
    }
    uVar12 = (uint)plVar22;
    if (uVar12 < 2) {
      uVar12 = 1;
    }
    if (uVar23 != uVar4 || uVar12 != uVar6) goto LAB_10a7eb660;
  }
  iVar5 = *(int *)(ppuVar3 + 10);
  iVar7 = *(int *)((long)ppuVar3 + 0x54);
  puVar1 = (undefined8 *)(param_1 + 0x318);
  plVar22 = *(long **)(param_1 + 0x318);
  if ((plVar22 == (long *)0x0) || ((**(code **)(*plVar22 + 0x28))(), (int)plVar22 != iVar5)) {
LAB_10a7eb6f8:
    FUN_10a7eb444(&uStack_78,iVar5,iVar7,0x20,0);
    FUN_10a00e5c4(puVar1,&uStack_78);
    plVar22 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      plVar15 = plStack_70 + 1;
      do {
        lVar13 = *plVar15;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar10) {
          *plVar15 = lVar13 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x328),puVar1);
  }
  else {
    plVar22 = (long *)*puVar1;
    (**(code **)(*plVar22 + 0x30))();
    if ((int)plVar22 != iVar7) goto LAB_10a7eb6f8;
  }
  puVar2 = (undefined8 *)(param_1 + 0x370);
  plVar22 = *(long **)(param_1 + 0x370);
  if ((plVar22 == (long *)0x0) || ((**(code **)(*plVar22 + 0x28))(), (int)plVar22 != iVar5)) {
LAB_10a7eb798:
    FUN_10a7eb444(&uStack_78,iVar5,iVar7,1,0);
    FUN_10a00e5c4(puVar2,&uStack_78);
    plVar22 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      plVar15 = plStack_70 + 1;
      do {
        lVar13 = *plVar15;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar10) {
          *plVar15 = lVar13 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x380),puVar2);
  }
  else {
    plVar22 = (long *)*puVar1;
    (**(code **)(*plVar22 + 0x30))();
    if ((int)plVar22 != iVar7) goto LAB_10a7eb798;
  }
  func_0x000108262984(param_1 + 0x330,(long)(iVar7 * iVar5));
  lVar16 = *(long *)(param_1 + 0x330);
  lVar13 = *(long *)(param_1 + 0x338) - lVar16;
  if (lVar13 != 0) {
    uVar17 = 0;
    iVar8 = *(int *)(ppuVar3 + 5);
    puVar18 = ppuVar3[6];
    puVar19 = (ulong *)((ulong)ppuVar3[8] & 0xfffffffffffffffc);
    do {
      if (iVar8 == 0) {
        cVar9 = *(char *)((long)puVar19 + 0x17);
        uVar20 = (ulong)cVar9;
        if ((long)uVar20 < 0) {
          uVar20 = puVar19[1];
          if (uVar20 == 0) goto LAB_10a7eb89c;
        }
        else if (cVar9 == '\0') {
LAB_10a7eb89c:
          fVar24 = 0.0;
          goto LAB_10a7eb8a0;
        }
        if (uVar20 < uVar17) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10a7eb9c4);
          (*pcVar11)();
        }
        puVar21 = puVar19;
        if (cVar9 < '\0') {
          puVar21 = (ulong *)*puVar19;
        }
        dVar27 = (double)NEON_ucvtf((ulong)*(byte *)((long)puVar21 + uVar17));
        fVar24 = (float)(dVar27 / 255.0);
      }
      else {
        fVar24 = *(float *)(puVar18 + uVar17 * 4);
      }
LAB_10a7eb8a0:
      fVar25 = fVar24 * *(float *)((long)ppuVar3 + 0x5c) +
               *(float *)(ppuVar3 + 0xb) * (1.0 - fVar24);
      fVar24 = -1.0;
      if (fVar25 <= -1.0) {
        fVar24 = fVar25;
      }
      fVar26 = -1000.0;
      if (-1000.0 <= fVar25) {
        fVar26 = fVar24;
      }
      *(float2 *)(lVar16 + uVar17 * 2) = (float2)fVar26;
      uVar17 = uVar17 + 1;
    } while (lVar13 >> 1 != uVar17);
  }
  (**(code **)(*(long *)*puVar1 + 0xa0))((long *)*puVar1,0,0,0,iVar5,iVar7,0,lVar16,0);
  puVar19 = (ulong *)((ulong)ppuVar3[7] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar19 + 0x17) < '\0') {
    puVar19 = (ulong *)*puVar19;
  }
  (**(code **)(*(long *)*puVar2 + 0xa0))((long *)*puVar2,0,0,0,iVar5,iVar7,0,puVar19,0);
  FUN_10aaca044(&uStack_78,ppuVar3[4],(long)*(int *)(ppuVar3 + 3));
  *(long **)(param_1 + 0x350) = plStack_70;
  *(undefined8 *)(param_1 + 0x348) = uStack_78;
  *(undefined8 *)(param_1 + 0x360) = uStack_60;
  *(undefined8 *)(param_1 + 0x358) = uStack_68;
  *(undefined4 *)(param_1 + 0x368) = uStack_58;
LAB_10a7eb970:
  if (plVar14 != (long *)0x0) {
    plVar22 = plVar14 + 1;
    do {
      lVar13 = *plVar22;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar10) {
        *plVar22 = lVar13 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  return;
}



/* Entry: 10a7eb9d8; end: 10a7eba0f;  */

undefined8 FUN_10a7eb9d8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 **ppuVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  char *pcStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  char cStack_41;
  
  FUN_10a7e20bc(param_1 + 0xe8);
  FUN_10a7e2370(param_1 + 0xe8,0);
  lVar10 = param_1 + 0xe8;
  ppuVar6 = &puStack_c0;
  cStack_41 = '\x02';
  pcStack_70 = &cStack_41;
  param_1 = param_1 + 0x108;
  FUN_10a814778(param_1,&cStack_41,&UNK_10dd5b8f9,&pcStack_70,&uStack_90);
  lVar12 = *(long *)(param_1 + 0x18);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_58 = lVar12;
  plStack_50 = plVar2;
  FUN_10a7e20bc(lVar10);
  FUN_10a7f8334(lVar10,cStack_41);
  if (lVar10 != 0) {
    uVar9 = *(ulong *)(lVar10 + 0x38) & 0xfffffffffffffffc;
    lVar8 = (long)*(char *)(uVar9 + 0x17);
    if (lVar8 < 0) {
      lVar8 = *(long *)(uVar9 + 8);
    }
    if ((lVar8 == 0 && lVar12 != 0) && (func_0x00010aae9fd8(), lVar12 != 0)) {
      lVar8 = lVar12;
      func_0x00010ad031c0();
      *(uint *)(lVar10 + 0x10) = *(uint *)(lVar10 + 0x10) | 4;
      uVar9 = *(ulong *)(lVar10 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(lVar10 + 0x40,lVar8,uVar9);
      FUN_10a08d2e0(auStack_a8,lVar12 + 0x10);
      puVar5 = auStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar5,"/",1);
      uStack_88 = puVar5[1];
      uStack_90 = *puVar5;
      lStack_80 = puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      if (cStack_41 == '\x03') {
        ppuVar6 = (undefined1 **)0x20;
        __Znwm();
        uStack_b0 = 0x8000000000000020;
        uStack_b8 = 0x18;
        puVar7 = &UNK_10f67a01b;
        lVar12 = 0x18;
        puStack_c0 = (undefined1 *)ppuVar6;
      }
      else {
        if (cStack_41 == '\x02') {
          puVar7 = &UNK_10f67a008;
          lVar12 = 0x12;
        }
        else if (cStack_41 == '\x01') {
          puVar7 = &UNK_10f679fff;
          lVar12 = 8;
        }
        else {
          puVar7 = &UNK_10f5722f7;
          lVar12 = 9;
        }
        uStack_b0 = CONCAT17((char)lVar12,(undefined7)uStack_b0);
      }
      _memcpy(ppuVar6,puVar7,lVar12);
      *(undefined1 *)((long)ppuVar6 + lVar12) = 0;
      uVar9 = uStack_b8;
      ppuVar6 = (undefined1 **)puStack_c0;
      if (-1 < (long)uStack_b0) {
        uVar9 = uStack_b0 >> 0x38;
        ppuVar6 = &puStack_c0;
      }
      puVar5 = &uStack_90;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar5,ppuVar6,uVar9);
      uStack_68 = puVar5[1];
      pcStack_70 = (char *)*puVar5;
      lStack_60 = puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      *(uint *)(lVar10 + 0x10) = *(uint *)(lVar10 + 0x10) | 2;
      uVar9 = *(ulong *)(lVar10 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      func_0x000107c3024c((ulong *)(lVar10 + 0x38),&pcStack_70,uVar9);
      if (lStack_60 < 0) {
        __ZdlPv(pcStack_70);
      }
      if ((long)uStack_b0 < 0) {
        __ZdlPv(puStack_c0);
      }
      if (lStack_80 < 0) {
        __ZdlPv(uStack_90);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(auStack_a8[0]);
      }
      uVar11 = 1;
      goto joined_r0x00010a7e24b0;
    }
  }
  uVar11 = 0;
joined_r0x00010a7e24b0:
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return uVar11;
}



/* Entry: 10a7eba10; end: 10a7eba17;  */

void FUN_10a7eba10(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  long *plVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  FUN_10a7ea26c();
  lVar13 = 0;
  FUN_10a2421c8();
  plVar14 = *(long **)(lVar13 + 0x228);
  (**(code **)(*plVar14 + 0x68))();
  if ((char)plVar14[0x10] != '\x01' || *(int *)((long)plVar14 + 0x7c) < 2) {
    *(undefined4 *)(param_1 + -0x21c) = 0;
    if ((bRam000000011330a9e8 >> 2 & 1) == 0) {
      return;
    }
    FUN_10ae06f30(1,4,&UNK_10f6790fa,&UNK_10f679144,0xa2,&UNK_10f6791b1,&stack0x00000000);
    return;
  }
  *(undefined4 *)(param_1 + -0x21c) = 2;
  FUN_10a7eb9d8(*(undefined8 *)(param_1 + 0x68));
  lVar13 = *(long *)(param_2 + 0x78);
  FUN_10aacfcb0(lVar13,"body",4);
  if (lVar13 == 0) {
    return;
  }
  lVar16 = *(long *)(lVar13 + 0x18);
  plVar14 = *(long **)(lVar13 + 0x20);
  if (plVar14 != (long *)0x0) {
    plVar22 = plVar14 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar10) {
        *plVar22 = *plVar22 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  if ((lVar16 == 0) ||
     (lVar13 = lVar16, FUN_10aacfdd8(lVar16,*(undefined4 *)(*(long *)(param_1 + 0x68) + 0xe0)),
     lVar13 == 0)) goto LAB_10a7eb970;
  ppuVar3 = &PTR_PTR_1132d7f38;
  if (*(undefined ***)(lVar13 + 0xf8) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(lVar13 + 0xf8);
  }
  if ((*(int *)(ppuVar3 + 10) == 0) || (*(int *)((long)ppuVar3 + 0x54) == 0)) goto LAB_10a7eb970;
  uVar4 = *(uint *)(lVar16 + 0xa0);
  uVar6 = *(uint *)(lVar16 + 0xa4);
  FUN_10a1da3a4(param_1 + -0x290,uVar4,uVar6,0,0,0x2e,0,0);
  plVar22 = *(long **)(param_1 + 0x78);
  if (plVar22 == (long *)0x0) {
LAB_10a7eb660:
    FUN_10a7eb444(&uStack_78,uVar4,uVar6,0x2e,1);
    FUN_10a00e5c4(param_1 + 0x78,&uStack_78);
    plVar22 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      plVar15 = plStack_70 + 1;
      do {
        lVar13 = *plVar15;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar10) {
          *plVar15 = lVar13 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
  }
  else {
    plVar15 = plVar22;
    (**(code **)(*plVar22 + 0x28))();
    (**(code **)(*plVar22 + 0x30))();
    uVar23 = (uint)plVar15;
    if (uVar23 < 2) {
      uVar23 = 1;
    }
    uVar12 = (uint)plVar22;
    if (uVar12 < 2) {
      uVar12 = 1;
    }
    if (uVar23 != uVar4 || uVar12 != uVar6) goto LAB_10a7eb660;
  }
  iVar5 = *(int *)(ppuVar3 + 10);
  iVar7 = *(int *)((long)ppuVar3 + 0x54);
  puVar1 = (undefined8 *)(param_1 + 0x88);
  plVar22 = *(long **)(param_1 + 0x88);
  if ((plVar22 == (long *)0x0) || ((**(code **)(*plVar22 + 0x28))(), (int)plVar22 != iVar5)) {
LAB_10a7eb6f8:
    FUN_10a7eb444(&uStack_78,iVar5,iVar7,0x20,0);
    FUN_10a00e5c4(puVar1,&uStack_78);
    plVar22 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      plVar15 = plStack_70 + 1;
      do {
        lVar13 = *plVar15;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar10) {
          *plVar15 = lVar13 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    FUN_10a1db4cc(*(undefined8 *)(param_1 + 0x98),puVar1);
  }
  else {
    plVar22 = (long *)*puVar1;
    (**(code **)(*plVar22 + 0x30))();
    if ((int)plVar22 != iVar7) goto LAB_10a7eb6f8;
  }
  puVar2 = (undefined8 *)(param_1 + 0xe0);
  plVar22 = *(long **)(param_1 + 0xe0);
  if ((plVar22 == (long *)0x0) || ((**(code **)(*plVar22 + 0x28))(), (int)plVar22 != iVar5)) {
LAB_10a7eb798:
    FUN_10a7eb444(&uStack_78,iVar5,iVar7,1,0);
    FUN_10a00e5c4(puVar2,&uStack_78);
    plVar22 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      plVar15 = plStack_70 + 1;
      do {
        lVar13 = *plVar15;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar10) {
          *plVar15 = lVar13 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    FUN_10a1db4cc(*(undefined8 *)(param_1 + 0xf0),puVar2);
  }
  else {
    plVar22 = (long *)*puVar1;
    (**(code **)(*plVar22 + 0x30))();
    if ((int)plVar22 != iVar7) goto LAB_10a7eb798;
  }
  func_0x000108262984(param_1 + 0xa0,(long)(iVar7 * iVar5));
  lVar16 = *(long *)(param_1 + 0xa0);
  lVar13 = *(long *)(param_1 + 0xa8) - lVar16;
  if (lVar13 != 0) {
    uVar17 = 0;
    iVar8 = *(int *)(ppuVar3 + 5);
    puVar18 = ppuVar3[6];
    puVar19 = (ulong *)((ulong)ppuVar3[8] & 0xfffffffffffffffc);
    do {
      if (iVar8 == 0) {
        cVar9 = *(char *)((long)puVar19 + 0x17);
        uVar20 = (ulong)cVar9;
        if ((long)uVar20 < 0) {
          uVar20 = puVar19[1];
          if (uVar20 == 0) goto LAB_10a7eb89c;
        }
        else if (cVar9 == '\0') {
LAB_10a7eb89c:
          fVar24 = 0.0;
          goto LAB_10a7eb8a0;
        }
        if (uVar20 < uVar17) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10a7eb9c4);
          (*pcVar11)();
        }
        puVar21 = puVar19;
        if (cVar9 < '\0') {
          puVar21 = (ulong *)*puVar19;
        }
        dVar27 = (double)NEON_ucvtf((ulong)*(byte *)((long)puVar21 + uVar17));
        fVar24 = (float)(dVar27 / 255.0);
      }
      else {
        fVar24 = *(float *)(puVar18 + uVar17 * 4);
      }
LAB_10a7eb8a0:
      fVar25 = fVar24 * *(float *)((long)ppuVar3 + 0x5c) +
               *(float *)(ppuVar3 + 0xb) * (1.0 - fVar24);
      fVar24 = -1.0;
      if (fVar25 <= -1.0) {
        fVar24 = fVar25;
      }
      fVar26 = -1000.0;
      if (-1000.0 <= fVar25) {
        fVar26 = fVar24;
      }
      *(float2 *)(lVar16 + uVar17 * 2) = (float2)fVar26;
      uVar17 = uVar17 + 1;
    } while (lVar13 >> 1 != uVar17);
  }
  (**(code **)(*(long *)*puVar1 + 0xa0))((long *)*puVar1,0,0,0,iVar5,iVar7,0,lVar16,0);
  puVar19 = (ulong *)((ulong)ppuVar3[7] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar19 + 0x17) < '\0') {
    puVar19 = (ulong *)*puVar19;
  }
  (**(code **)(*(long *)*puVar2 + 0xa0))((long *)*puVar2,0,0,0,iVar5,iVar7,0,puVar19,0);
  FUN_10aaca044(&uStack_78,ppuVar3[4],(long)*(int *)(ppuVar3 + 3));
  *(long **)(param_1 + 0xc0) = plStack_70;
  *(undefined8 *)(param_1 + 0xb8) = uStack_78;
  *(undefined8 *)(param_1 + 0xd0) = uStack_60;
  *(undefined8 *)(param_1 + 200) = uStack_68;
  *(undefined4 *)(param_1 + 0xd8) = uStack_58;
LAB_10a7eb970:
  if (plVar14 != (long *)0x0) {
    plVar22 = plVar14 + 1;
    do {
      lVar13 = *plVar22;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar10) {
        *plVar22 = lVar13 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  return;
}



/* Entry: 10a7eba18; end: 10a7ebbaf;  */

void FUN_10a7eba18(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long lStack_30;
  long *plStack_28;
  
  lStack_30 = *param_2;
  plStack_28 = (long *)param_2[1];
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lStack_30 == 0) {
    FUN_10a7ea4c0(&lStack_40,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x2f8));
    plVar1 = plStack_28;
    plStack_28 = plStack_38;
    lStack_30 = lStack_40;
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
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
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_38;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  lVar5 = lStack_30;
  FUN_10a7eb1a0(&lStack_40,param_1);
  func_0x00010a7e2008(lVar5 + 0xe8,2,&lStack_40);
  plVar1 = plStack_38;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  func_0x00010a3a78dc(param_1 + 0x2f8,&lStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a7ebbb0; end: 10a7ebbdb;  */

undefined8 FUN_10a7ebbb0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 **ppuVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  char *pcStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  char cStack_41;
  
  FUN_10a7e1f90(*(long *)(param_1 + 0x2f8) + 0xe8);
  lVar9 = *(long *)(param_1 + 0x2f8);
  FUN_10a7e20bc(lVar9 + 0xe8);
  FUN_10a7e2370(lVar9 + 0xe8,0);
  lVar5 = lVar9 + 0xe8;
  ppuVar8 = &puStack_c0;
  cStack_41 = '\x02';
  pcStack_70 = &cStack_41;
  lVar9 = lVar9 + 0x108;
  FUN_10a814778(lVar9,&cStack_41,&UNK_10dd5b8f9,&pcStack_70,&uStack_90);
  lVar6 = *(long *)(lVar9 + 0x18);
  plVar2 = *(long **)(lVar9 + 0x20);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_58 = lVar6;
  plStack_50 = plVar2;
  FUN_10a7e20bc(lVar5);
  FUN_10a7f8334(lVar5,cStack_41);
  if (lVar5 != 0) {
    uVar11 = *(ulong *)(lVar5 + 0x38) & 0xfffffffffffffffc;
    lVar9 = (long)*(char *)(uVar11 + 0x17);
    if (lVar9 < 0) {
      lVar9 = *(long *)(uVar11 + 8);
    }
    if ((lVar9 == 0 && lVar6 != 0) && (func_0x00010aae9fd8(), lVar6 != 0)) {
      lVar9 = lVar6;
      func_0x00010ad031c0();
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 4;
      uVar11 = *(ulong *)(lVar5 + 8);
      if ((uVar11 & 1) != 0) {
        uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(lVar5 + 0x40,lVar9,uVar11);
      FUN_10a08d2e0(auStack_a8,lVar6 + 0x10);
      puVar7 = auStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,"/",1);
      uStack_88 = puVar7[1];
      uStack_90 = *puVar7;
      lStack_80 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      if (cStack_41 == '\x03') {
        ppuVar8 = (undefined1 **)0x20;
        __Znwm();
        uStack_b0 = 0x8000000000000020;
        uStack_b8 = 0x18;
        puVar10 = &UNK_10f67a01b;
        lVar9 = 0x18;
        puStack_c0 = (undefined1 *)ppuVar8;
      }
      else {
        if (cStack_41 == '\x02') {
          puVar10 = &UNK_10f67a008;
          lVar9 = 0x12;
        }
        else if (cStack_41 == '\x01') {
          puVar10 = &UNK_10f679fff;
          lVar9 = 8;
        }
        else {
          puVar10 = &UNK_10f5722f7;
          lVar9 = 9;
        }
        uStack_b0 = CONCAT17((char)lVar9,(undefined7)uStack_b0);
      }
      _memcpy(ppuVar8,puVar10,lVar9);
      *(undefined1 *)((long)ppuVar8 + lVar9) = 0;
      uVar11 = uStack_b8;
      ppuVar8 = (undefined1 **)puStack_c0;
      if (-1 < (long)uStack_b0) {
        uVar11 = uStack_b0 >> 0x38;
        ppuVar8 = &puStack_c0;
      }
      puVar7 = &uStack_90;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar7,ppuVar8,uVar11);
      uStack_68 = puVar7[1];
      pcStack_70 = (char *)*puVar7;
      lStack_60 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 2;
      uVar11 = *(ulong *)(lVar5 + 8);
      if ((uVar11 & 1) != 0) {
        uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
      }
      func_0x000107c3024c((ulong *)(lVar5 + 0x38),&pcStack_70,uVar11);
      if (lStack_60 < 0) {
        __ZdlPv(pcStack_70);
      }
      if ((long)uStack_b0 < 0) {
        __ZdlPv(puStack_c0);
      }
      if (lStack_80 < 0) {
        __ZdlPv(uStack_90);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(auStack_a8[0]);
      }
      uVar12 = 1;
      goto joined_r0x00010a7e24b0;
    }
  }
  uVar12 = 0;
joined_r0x00010a7e24b0:
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return uVar12;
}



/* Entry: 10a7ebbdc; end: 10a7ebc0f;  */

void FUN_10a7ebbdc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_10a7f82b8();
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_10a009fa8(param_1 + 0xf8,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  FUN_10a7e20bc(param_1 + 0xe8);
  return;
}



/* Entry: 10a7ebc10; end: 10a7ebc43;  */

undefined8 FUN_10a7ebc10(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 **ppuVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  char *pcStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  char cStack_41;
  
  func_0x00010a7e2008(*(long *)(param_1 + 0x2f8) + 0xe8,0,param_2);
  lVar9 = *(long *)(param_1 + 0x2f8);
  FUN_10a7e20bc(lVar9 + 0xe8);
  FUN_10a7e2370(lVar9 + 0xe8,0);
  lVar5 = lVar9 + 0xe8;
  ppuVar8 = &puStack_c0;
  cStack_41 = '\x02';
  pcStack_70 = &cStack_41;
  lVar9 = lVar9 + 0x108;
  FUN_10a814778(lVar9,&cStack_41,&UNK_10dd5b8f9,&pcStack_70,&uStack_90);
  lVar6 = *(long *)(lVar9 + 0x18);
  plVar2 = *(long **)(lVar9 + 0x20);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_58 = lVar6;
  plStack_50 = plVar2;
  FUN_10a7e20bc(lVar5);
  FUN_10a7f8334(lVar5,cStack_41);
  if (lVar5 != 0) {
    uVar11 = *(ulong *)(lVar5 + 0x38) & 0xfffffffffffffffc;
    lVar9 = (long)*(char *)(uVar11 + 0x17);
    if (lVar9 < 0) {
      lVar9 = *(long *)(uVar11 + 8);
    }
    if ((lVar9 == 0 && lVar6 != 0) && (func_0x00010aae9fd8(), lVar6 != 0)) {
      lVar9 = lVar6;
      func_0x00010ad031c0();
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 4;
      uVar11 = *(ulong *)(lVar5 + 8);
      if ((uVar11 & 1) != 0) {
        uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(lVar5 + 0x40,lVar9,uVar11);
      FUN_10a08d2e0(auStack_a8,lVar6 + 0x10);
      puVar7 = auStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,"/",1);
      uStack_88 = puVar7[1];
      uStack_90 = *puVar7;
      lStack_80 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      if (cStack_41 == '\x03') {
        ppuVar8 = (undefined1 **)0x20;
        __Znwm();
        uStack_b0 = 0x8000000000000020;
        uStack_b8 = 0x18;
        puVar10 = &UNK_10f67a01b;
        lVar9 = 0x18;
        puStack_c0 = (undefined1 *)ppuVar8;
      }
      else {
        if (cStack_41 == '\x02') {
          puVar10 = &UNK_10f67a008;
          lVar9 = 0x12;
        }
        else if (cStack_41 == '\x01') {
          puVar10 = &UNK_10f679fff;
          lVar9 = 8;
        }
        else {
          puVar10 = &UNK_10f5722f7;
          lVar9 = 9;
        }
        uStack_b0 = CONCAT17((char)lVar9,(undefined7)uStack_b0);
      }
      _memcpy(ppuVar8,puVar10,lVar9);
      *(undefined1 *)((long)ppuVar8 + lVar9) = 0;
      uVar11 = uStack_b8;
      ppuVar8 = (undefined1 **)puStack_c0;
      if (-1 < (long)uStack_b0) {
        uVar11 = uStack_b0 >> 0x38;
        ppuVar8 = &puStack_c0;
      }
      puVar7 = &uStack_90;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar7,ppuVar8,uVar11);
      uStack_68 = puVar7[1];
      pcStack_70 = (char *)*puVar7;
      lStack_60 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 2;
      uVar11 = *(ulong *)(lVar5 + 8);
      if ((uVar11 & 1) != 0) {
        uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
      }
      func_0x000107c3024c((ulong *)(lVar5 + 0x38),&pcStack_70,uVar11);
      if (lStack_60 < 0) {
        __ZdlPv(pcStack_70);
      }
      if ((long)uStack_b0 < 0) {
        __ZdlPv(puStack_c0);
      }
      if (lStack_80 < 0) {
        __ZdlPv(uStack_90);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(auStack_a8[0]);
      }
      uVar12 = 1;
      goto joined_r0x00010a7e24b0;
    }
  }
  uVar12 = 0;
joined_r0x00010a7e24b0:
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return uVar12;
}



/* Entry: 10a7ebc44; end: 10a7ebc53;  */

void FUN_10a7ebc44(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  lVar1 = param_1 + 0xe8;
  uStack_2a = 0;
  puStack_28 = &uStack_2a;
  param_1 = param_1 + 0x108;
  FUN_10a814778(param_1,&uStack_2a,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  FUN_10a7f82b8(param_1 + 0x18,param_2);
  lVar2 = lVar1;
  FUN_10a7f8334(lVar1,uStack_2a);
  if (lVar2 != 0) {
    if ((*(ulong *)(lVar2 + 0x38) & 3) != 0) {
      puVar3 = (undefined8 *)(*(ulong *)(lVar2 + 0x38) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar3 + 0x17) < '\0') {
        *(undefined1 *)*puVar3 = 0;
        puVar3[1] = 0;
      }
      else {
        *(undefined1 *)puVar3 = 0;
        *(undefined1 *)((long)puVar3 + 0x17) = 0;
      }
    }
    *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) & 0xfffffffd;
  }
  FUN_10a7e2370(lVar1,uStack_2a);
  return;
}



/* Entry: 10a7ebc54; end: 10a7ebcfb;  */

void FUN_10a7ebc54(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  uStack_2a = 0;
  puStack_28 = &uStack_2a;
  lVar4 = *(long *)(param_2 + 0x2f8) + 0x108;
  FUN_10a814778(lVar4,&uStack_2a,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  lVar5 = *(long *)(lVar4 + 0x20);
  uVar6 = *(undefined8 *)(lVar4 + 0x18);
  param_1[1] = *(undefined8 *)(lVar4 + 0x20);
  *param_1 = uVar6;
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



/* Entry: 10a7ebcfc; end: 10a7ec36b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a7ebcfc(long *******param_1,long *******param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long *plVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long *******ppppppplVar16;
  undefined8 *puVar17;
  long *******ppppppplVar18;
  long ******pppppplVar19;
  long *******ppppppplVar20;
  long ***ppplVar21;
  long ******pppppplVar22;
  long lVar23;
  long *****ppppplVar24;
  long ******pppppplVar25;
  long *******ppppppplVar26;
  long *******unaff_x22;
  long ****pppplVar27;
  long *******unaff_x23;
  long *******unaff_x24;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long *******ppppppplStack_320;
  long *******ppppppplStack_318;
  long *******ppppppplStack_310;
  long *******ppppppplStack_308;
  long *******ppppppplStack_300;
  long *******ppppppplStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  uint uStack_2d0;
  uint uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined8 uStack_2ac;
  undefined8 uStack_2a4;
  undefined4 uStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  long *******ppppppplStack_270;
  long *******ppppppplStack_268;
  undefined1 auStack_260 [7];
  char cStack_259;
  long ******apppppplStack_258 [50];
  long ******pppppplStack_c8;
  long ******pppppplStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar20 = param_2;
  for (ppppppplVar26 = param_1; ppppppplVar26 != (long *******)0x0;
      ppppppplVar26 = (long *******)ppppppplVar26[0x13]) {
    ppppppplVar16 = ppppppplVar26;
    (*(code *)(*ppppppplVar26)[0x10])();
    if ((int)ppppppplVar16 != 2) {
      if ((int)ppppppplVar16 == 0) goto LAB_10a7ec2a4;
      break;
    }
  }
  pppppplVar19 = param_1[0x71];
  if (pppppplVar19 == (long ******)0x0) {
    pppppplVar19 = param_1[0x12];
    puVar17 = (undefined8 *)0x20;
    __Znwm();
    puVar17[1] = 0x625f656c706d6173;
    *puVar17 = 0x2f64336e616d7568;
    *(undefined8 *)((long)puVar17 + 0x16) = 0x6c736c672e687470;
    *(undefined8 *)((long)puVar17 + 0xe) = 0x65645f79646f625f;
    *(undefined1 *)((long)puVar17 + 0x1e) = 0;
    param_3 = (undefined8 *)0x11;
    FUN_10ab451f4(&ppppppplStack_270,pppppplVar19,&UNK_10f6791e7,0x11,&UNK_10f6791f9,0xd,puVar17,
                  0x1e,1);
    ppppppplVar26 = param_1 + 0x71;
    __ZdlPv(puVar17);
    unaff_x24 = (long *******)&ppppppplStack_270;
    ppppppplVar20 = (long *******)&ppppppplStack_270;
    func_0x00010a015c50(ppppppplVar26);
    pppppplVar19 = *ppppppplVar26;
    if (pppppplVar19 != (long ******)0x0) {
      *(undefined1 *)(pppppplVar19 + 1) = 1;
      if (pppppplVar19[0x45] == pppppplVar19[0x46]) {
        pppplVar27 = (long ****)0x0;
      }
      else {
        pppplVar27 = *pppppplVar19[0x45];
      }
      ppplVar21 = pppplVar27[0x4b];
      ppplVar21[6] = (long **)0x0;
      ppplVar21[5] = (long **)0x6;
      ppplVar21[8] = (long **)0x0;
      ppplVar21[7] = (long **)0x0;
      ppplVar21[10] = (long **)0x0;
      ppplVar21[9] = (long **)0x0;
      func_0x00010a3326b8(pppplVar27 + 0x43,0);
      func_0x00010a332748((long)pppplVar27 + 0x219,1);
      func_0x00010a332700((long)pppplVar27 + 0x21a,1);
      func_0x00010a332790(pppplVar27,7);
      ppppppplVar20 = (long *******)0x0;
      func_0x00010a3325d0(pppplVar27);
      *(undefined4 *)((long)pppplVar27 + 0x21e) = 0;
      *(undefined1 *)(pppplVar27 + 1) = 1;
    }
    FUN_10a044790(auStack_260);
    ppppppplVar16 = apppppplStack_258;
    (*(code *)*apppppplStack_258[0])();
    if (ppppppplStack_268 != (long *******)0x0) {
      ppppppplVar18 = ppppppplStack_268 + 1;
      do {
        pppppplVar22 = *ppppppplVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
        if (bVar4) {
          *ppppppplVar18 = (long ******)((long)pppppplVar22 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppplVar22 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_268)[2])(ppppppplStack_268);
        ppppppplVar16 = ppppppplStack_268;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    unaff_x23 = (long *******)0x0;
    unaff_x22 = ppppppplStack_268;
    if (pppppplVar19 == (long ******)0x0) goto LAB_10a7ec2a4;
    pppppplVar19 = *ppppppplVar26;
  }
  ppppppplVar26 = param_2 + 4;
  FUN_10a5dfd94(ppppppplVar26,pppppplVar19);
  ppppppplVar20 = param_2 + 4;
  FUN_10a01eacc(ppppppplVar20,ppppppplVar26);
  func_0x000107c2b074(&ppppppplStack_270,&PTR_DAT_110c1f6b0);
  FUN_10a5e17a8(ppppppplVar20,&ppppppplStack_270,param_1[0x65],&UNK_10e4ac8a8);
  if (cStack_259 < '\0') {
    __ZdlPv(ppppppplStack_270);
  }
  func_0x000107c2b074(&ppppppplStack_270,&PTR_DAT_110c1f6c8);
  FUN_10a5e17a8(ppppppplVar20,&ppppppplStack_270,param_1[0x70],&UNK_10e4ac8a8);
  if (cStack_259 < '\0') {
    __ZdlPv(ppppppplStack_270);
  }
  pppppplVar22 = param_1[0x61];
  pppppplVar19 = pppppplVar22;
  (*(code *)(*pppppplVar22)[5])();
  uVar12 = (uint)pppppplVar19;
  if (uVar12 < 2) {
    uVar12 = 1;
  }
  unaff_x24 = (long *******)(ulong)uVar12;
  (*(code *)(*pppppplVar22)[6])();
  uVar13 = (uint)pppppplVar22;
  if (uVar13 < 2) {
    uVar13 = 1;
  }
  pppppplVar22 = param_1[99];
  pppppplVar19 = pppppplVar22;
  (*(code *)(*pppppplVar22)[5])();
  uVar14 = (uint)pppppplVar19;
  if (uVar14 < 2) {
    uVar14 = 1;
  }
  (*(code *)(*pppppplVar22)[6])();
  uVar15 = (uint)pppppplVar22;
  if (uVar15 < 2) {
    uVar15 = 1;
  }
  FUN_10aaca0a0(&fStack_298,CONCAT44(uVar13,uVar12),CONCAT44(uVar15,uVar14),param_1 + 0x69);
  fVar5 = fStack_280 * 0.0;
  fVar8 = -fStack_28c + fStack_298 * 0.0;
  fVar9 = -fStack_288 + fStack_294 * 0.0;
  fVar28 = fStack_27c * 0.0;
  fVar29 = fStack_278 * 0.0;
  fVar30 = fStack_280 * 0.0;
  fVar31 = fStack_27c * 0.0;
  fVar7 = fStack_290 * 0.0;
  fVar6 = fStack_278 * 0.0;
  fStack_280 = fStack_28c + fStack_298 * 0.0 + fStack_280;
  fStack_27c = fStack_288 + fStack_294 * 0.0 + fStack_27c;
  fStack_278 = fStack_284 + fStack_290 * 0.0 + fStack_278;
  fStack_298 = fStack_298 + fStack_28c * 0.0 + fVar5;
  fStack_294 = fStack_294 + fStack_288 * 0.0 + fVar28;
  fStack_290 = fStack_290 + fStack_284 * 0.0 + fVar29;
  fStack_28c = fVar8 + fVar30;
  fStack_288 = (float)(CONCAT17((char)((uint)fVar9 >> 0x18),
                                CONCAT16((char)((uint)fVar9 >> 0x10),
                                         CONCAT15((char)((uint)fVar9 >> 8),
                                                  CONCAT14(SUB41(fVar9,0),fVar8)))) >> 0x20) +
               fVar31;
  fStack_284 = -fStack_284 + fVar7 + fVar6;
  func_0x000107c2b074(&ppppppplStack_270,&PTR_DAT_110c1f6e0);
  FUN_10a7ec36c(ppppppplVar20,&ppppppplStack_270,&fStack_298);
  if (cStack_259 < '\0') {
    __ZdlPv(ppppppplStack_270);
  }
  func_0x000107c2b074(&ppppppplStack_270,&PTR_DAT_110c1f6f8);
  FUN_10a01671c(ppppppplVar20,&ppppppplStack_270,param_1 + 0x5e);
  if (cStack_259 < '\0') {
    __ZdlPv(ppppppplStack_270);
  }
  func_0x000107c2b074(&ppppppplStack_270,&PTR_DAT_110c1f710);
  ppppppplVar16 = param_1;
  (*(code *)(*param_1)[0x27])(param_1);
  FUN_10a015dcc(ppppppplVar20,&ppppppplStack_270,ppppppplVar16);
  if (cStack_259 < '\0') {
    __ZdlPv(ppppppplStack_270);
  }
  ppppppplStack_270 = (long *******)0x0;
  uStack_a0 = 0;
  uStack_90 = 0;
  plStack_98 = (long *)0x0;
  uStack_88 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  uStack_78 = 0x3f800000;
  uStack_70 = 0x200000002;
  pppppplStack_c8 = param_1[0x61];
  pppppplStack_c0 = param_1[0x62];
  if (pppppplStack_c0 != (long ******)0x0) {
    pppppplVar19 = pppppplStack_c0 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppplVar19,0x10);
      if (bVar4) {
        *pppppplVar19 = (long *****)((long)*pppppplVar19 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_b8 = 0;
  uStack_b0 = 0xffffffffffffffff;
  uStack_a8 = 0xffffffffffffffff;
  (*(code *)(*param_2)[0x11])(param_2,&ppppppplStack_270);
  unaff_x22 = (long *******)param_1[0x61];
  unaff_x23 = unaff_x22;
  (*(code *)(*unaff_x22)[5])();
  ppppppplVar20 = unaff_x22;
  (*(code *)(*unaff_x22)[6])();
  uStack_2d0 = (uint)unaff_x23;
  if (uStack_2d0 < 2) {
    uStack_2d0 = 1;
  }
  uStack_2cc = (uint)ppppppplVar20;
  if (uStack_2cc < 2) {
    uStack_2cc = 1;
  }
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  (*(code *)(*param_2)[0x18])(param_2,&uStack_2d8);
  pppppplVar19 = param_1[0x12];
  FUN_10a2421c8();
  uStack_2d8 = 0x3f800000;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2c4 = 0x3f800000;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0x3f800000;
  uStack_2a4 = 0;
  uStack_2ac = 0;
  uStack_29c = 0x3f800000;
  (*(code *)(*param_2)[0xb])(param_2,pppppplVar19[0x41],ppppppplVar26,&uStack_2d8,3);
  param_3 = (undefined8 *)0x0;
  (*(code *)(*param_2)[0x12])(param_2,3,0,3);
  plVar10 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      lVar23 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  pppppplVar19 = pppppplStack_c0;
  if (pppppplStack_c0 != (long ******)0x0) {
    pppppplVar22 = pppppplStack_c0 + 1;
    do {
      ppppplVar24 = *pppppplVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppplVar22,0x10);
      if (bVar4) {
        *pppppplVar22 = (long *****)((long)ppppplVar24 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppppplVar24 == (long *****)0x0) {
      (*(code *)(*pppppplStack_c0)[2])(pppppplStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar19);
    }
  }
  ppppppplVar16 = (long *******)&ppppppplStack_268;
  ppppppplVar20 = ppppppplStack_270;
  func_0x00010a048e34();
LAB_10a7ec2a4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  __ZdlPv(unaff_x22);
  ppppppplVar18 = ppppppplVar16;
  __Unwind_Resume();
  pcStack_2e8 = FUN_10a7ec36c;
  pppppplVar19 = ppppppplVar18[0x16];
  ppppppplStack_320 = unaff_x24;
  ppppppplStack_318 = unaff_x23;
  ppppppplStack_310 = unaff_x22;
  ppppppplStack_308 = ppppppplVar26;
  ppppppplStack_300 = param_1;
  ppppppplStack_2f8 = ppppppplVar16;
  puStack_2f0 = &stack0xfffffffffffffff0;
  if (pppppplVar19 < ppppppplVar18[0x14]) {
    pppppplVar25 = (long ******)
                   (((long)ppppppplVar18[0x12] - (long)ppppppplVar18[0x11] >> 3) *
                   -0x5555555555555555);
    pppppplVar22 = pppppplVar19;
    if (pppppplVar19 <= pppppplVar25) {
      pppppplVar22 = pppppplVar25;
    }
    pppppplVar25 = ppppppplVar18[0x11] + (long)pppppplVar19 * 3 + 2;
    do {
      if (pppppplVar22 == pppppplVar19) goto LAB_10a7ec594;
      if ((long ******)pppppplVar25[-2] == ppppppplVar20[3]) {
        if (*(short *)(pppppplVar25 + -1) != 10) {
          return;
        }
        if (pppppplVar19 < ppppppplVar18[0x15]) {
          if (*(int *)pppppplVar25 == 0x24) {
            lVar23 = (long)ppppppplVar18[0x17] + (ulong)*(uint *)((long)pppppplVar25 + -4);
            _memcmp(lVar23,param_3,0x24);
            if ((int)lVar23 == 0) {
              return;
            }
          }
          FUN_10a048bc4(ppppppplVar18);
          pppppplVar19 = (long ******)((long)ppppppplVar18[0x16] + (long)pppppplVar19);
        }
        ppppppplVar26 = ppppppplVar18 + 0x17;
        pppppplVar22 = *ppppppplVar26;
        uVar12 = *(uint *)(ppppppplVar18 + 0x1a);
        uVar2 = (ulong)uVar12 + 0x24;
        lVar23 = uVar2 - ((long)ppppppplVar18[0x18] - (long)pppppplVar22);
        if ((ulong)((long)ppppppplVar18[0x18] - (long)pppppplVar22) <= uVar2 && lVar23 != 0) {
          func_0x0001092bf294(ppppppplVar26,lVar23);
          pppppplVar22 = *ppppppplVar26;
        }
        puVar17 = (undefined8 *)((long)pppppplVar22 + (ulong)uVar12);
        uVar33 = param_3[1];
        uVar32 = *param_3;
        uVar35 = param_3[3];
        uVar34 = param_3[2];
        *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(param_3 + 4);
        puVar17[1] = uVar33;
        *puVar17 = uVar32;
        puVar17[3] = uVar35;
        puVar17[2] = uVar34;
        *(int *)(ppppppplVar18 + 0x1a) = (int)uVar2;
        pppppplVar22 = ppppppplVar18[0x11];
        pppppplVar25 = (long ******)
                       (((long)ppppppplVar18[0x12] - (long)pppppplVar22 >> 3) * -0x5555555555555555)
        ;
        if (pppppplVar19 <= pppppplVar25 && (long)pppppplVar25 - (long)pppppplVar19 != 0) {
          *(uint *)((long)pppppplVar22 + (long)pppppplVar19 * 0x18 + 0xc) = uVar12;
          *(undefined4 *)(pppppplVar22 + (long)pppppplVar19 * 3 + 2) = 0x24;
          return;
        }
        goto LAB_10a7ec594;
      }
      pppppplVar19 = (long ******)((long)pppppplVar19 + 1);
      pppppplVar25 = pppppplVar25 + 3;
    } while (ppppppplVar18[0x14] != pppppplVar19);
  }
  ppppppplVar26 = ppppppplVar18 + 0x17;
  pppppplVar19 = *ppppppplVar26;
  uVar12 = *(uint *)(ppppppplVar18 + 0x1a);
  uVar2 = (ulong)uVar12 + 0x24;
  lVar23 = uVar2 - ((long)ppppppplVar18[0x18] - (long)pppppplVar19);
  if ((ulong)((long)ppppppplVar18[0x18] - (long)pppppplVar19) <= uVar2 && lVar23 != 0) {
    func_0x0001092bf294(ppppppplVar26,lVar23);
    pppppplVar19 = *ppppppplVar26;
  }
  puVar17 = (undefined8 *)((long)pppppplVar19 + (ulong)uVar12);
  uVar33 = param_3[1];
  uVar32 = *param_3;
  uVar35 = param_3[3];
  uVar34 = param_3[2];
  *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(param_3 + 4);
  puVar17[1] = uVar33;
  *puVar17 = uVar32;
  puVar17[3] = uVar35;
  puVar17[2] = uVar34;
  pppppplVar22 = ppppppplVar18[0x11];
  *(int *)(ppppppplVar18 + 0x1a) = (int)uVar2;
  pppppplVar19 = ppppppplVar18[0x14];
  if (pppppplVar19 <
      (long ******)(((long)ppppppplVar18[0x12] - (long)pppppplVar22 >> 3) * -0x5555555555555555)) {
    pppppplVar22 = pppppplVar22 + (long)pppppplVar19 * 3;
  }
  else {
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    FUN_10a063efc(ppppppplVar18 + 0x11,&uStack_338);
    if (ppppppplVar18[0x11] == ppppppplVar18[0x12]) {
LAB_10a7ec594:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10a7ec598);
      (*pcVar11)();
    }
    pppppplVar22 = ppppppplVar18[0x12] + -3;
    pppppplVar19 = ppppppplVar18[0x14];
  }
  *pppppplVar22 = (long *****)ppppppplVar20[3];
  *(undefined2 *)(pppppplVar22 + 1) = 10;
  *(uint *)((long)pppppplVar22 + 0xc) = uVar12;
  *(undefined4 *)(pppppplVar22 + 2) = 0x24;
  ppppppplVar18[0x14] = (long ******)((long)pppppplVar19 + 1);
  return;
}



/* Entry: 10a7ec36c; end: 10a7ec597;  */

void FUN_10a7ec36c(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar9 = *(ulong *)(param_1 + 0xb0);
  if (uVar9 < *(ulong *)(param_1 + 0xa0)) {
    uVar4 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
    uVar6 = uVar9;
    if (uVar9 <= uVar4) {
      uVar6 = uVar4;
    }
    piVar5 = (int *)(*(long *)(param_1 + 0x88) + uVar9 * 0x18 + 0x10);
    do {
      if (uVar6 == uVar9) goto LAB_10a7ec594;
      if (*(long *)(piVar5 + -4) == *(long *)(param_2 + 0x18)) {
        if ((short)piVar5[-2] != 10) {
          return;
        }
        if (uVar9 < *(ulong *)(param_1 + 0xa8)) {
          if (*piVar5 == 0x24) {
            lVar7 = *(long *)(param_1 + 0xb8) + (ulong)(uint)piVar5[-1];
            _memcmp(lVar7,param_3,0x24);
            if ((int)lVar7 == 0) {
              return;
            }
          }
          FUN_10a048bc4(param_1);
          uVar9 = *(long *)(param_1 + 0xb0) + uVar9;
        }
        plVar10 = (long *)(param_1 + 0xb8);
        lVar3 = *plVar10;
        uVar1 = *(uint *)(param_1 + 0xd0);
        uVar6 = (ulong)uVar1 + 0x24;
        uVar4 = *(long *)(param_1 + 0xc0) - lVar3;
        lVar7 = uVar6 - uVar4;
        if (uVar4 <= uVar6 && lVar7 != 0) {
          func_0x0001092bf294(plVar10,lVar7);
          lVar3 = *plVar10;
        }
        puVar8 = (undefined8 *)(lVar3 + (ulong)uVar1);
        uVar12 = param_3[1];
        uVar11 = *param_3;
        uVar14 = param_3[3];
        uVar13 = param_3[2];
        *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(param_3 + 4);
        puVar8[1] = uVar12;
        *puVar8 = uVar11;
        puVar8[3] = uVar14;
        puVar8[2] = uVar13;
        *(int *)(param_1 + 0xd0) = (int)uVar6;
        uVar6 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
        if (uVar9 <= uVar6 && uVar6 - uVar9 != 0) {
          lVar7 = *(long *)(param_1 + 0x88) + uVar9 * 0x18;
          *(uint *)(lVar7 + 0xc) = uVar1;
          *(undefined4 *)(lVar7 + 0x10) = 0x24;
          return;
        }
        goto LAB_10a7ec594;
      }
      uVar9 = uVar9 + 1;
      piVar5 = piVar5 + 6;
    } while (*(ulong *)(param_1 + 0xa0) != uVar9);
  }
  plVar10 = (long *)(param_1 + 0xb8);
  lVar3 = *plVar10;
  uVar1 = *(uint *)(param_1 + 0xd0);
  uVar9 = (ulong)uVar1 + 0x24;
  uVar6 = *(long *)(param_1 + 0xc0) - lVar3;
  lVar7 = uVar9 - uVar6;
  if (uVar6 <= uVar9 && lVar7 != 0) {
    func_0x0001092bf294(plVar10,lVar7);
    lVar3 = *plVar10;
  }
  puVar8 = (undefined8 *)(lVar3 + (ulong)uVar1);
  uVar12 = param_3[1];
  uVar11 = *param_3;
  uVar14 = param_3[3];
  uVar13 = param_3[2];
  *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(param_3 + 4);
  puVar8[1] = uVar12;
  *puVar8 = uVar11;
  puVar8[3] = uVar14;
  puVar8[2] = uVar13;
  lVar7 = *(long *)(param_1 + 0x88);
  *(int *)(param_1 + 0xd0) = (int)uVar9;
  uVar9 = *(ulong *)(param_1 + 0xa0);
  if (uVar9 < (ulong)((*(long *)(param_1 + 0x90) - lVar7 >> 3) * -0x5555555555555555)) {
    puVar8 = (undefined8 *)(lVar7 + uVar9 * 0x18);
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10a063efc((long *)(param_1 + 0x88),&uStack_58);
    if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x90)) {
LAB_10a7ec594:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7ec598);
      (*pcVar2)();
    }
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x90) + -0x18);
    uVar9 = *(ulong *)(param_1 + 0xa0);
  }
  *puVar8 = *(undefined8 *)(param_2 + 0x18);
  *(undefined2 *)(puVar8 + 1) = 10;
  *(uint *)((long)puVar8 + 0xc) = uVar1;
  *(undefined4 *)(puVar8 + 2) = 0x24;
  *(ulong *)(param_1 + 0xa0) = uVar9 + 1;
  return;
}



/* Entry: 10a7ec598; end: 10a7ec5bf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a7ec598(long param_1,long *******param_2,undefined8 *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long *******ppppppplVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  long ******pppppplVar20;
  long *******ppppppplVar21;
  long ***ppplVar22;
  long ******pppppplVar23;
  long ******pppppplVar24;
  long *******ppppppplVar25;
  undefined8 uVar26;
  long ****pppplVar27;
  long *******unaff_x22;
  long *plVar28;
  long *******unaff_x23;
  long *******unaff_x24;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long *******ppppppplStack_320;
  long *******ppppppplStack_318;
  long *******ppppppplStack_310;
  long *******ppppppplStack_308;
  long *******ppppppplStack_300;
  long *******ppppppplStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  uint uStack_2d0;
  uint uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined8 uStack_2ac;
  undefined8 uStack_2a4;
  undefined4 uStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  long *******ppppppplStack_270;
  long *******ppppppplStack_268;
  undefined1 auStack_260 [7];
  char cStack_259;
  long ******apppppplStack_258 [50];
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar19 = (long *******)(param_1 + -0x2b8);
  ppppppplVar21 = param_2;
  for (ppppppplVar25 = ppppppplVar19; ppppppplVar25 != (long *******)0x0;
      ppppppplVar25 = (long *******)ppppppplVar25[0x13]) {
    ppppppplVar14 = ppppppplVar25;
    (*(code *)(*ppppppplVar25)[0x10])();
    if ((int)ppppppplVar14 != 2) {
      if ((int)ppppppplVar14 == 0) goto LAB_10a7ec2a4;
      break;
    }
  }
  pppppplVar20 = *(long *******)(param_1 + 0xd0);
  if (pppppplVar20 == (long ******)0x0) {
    uVar26 = *(undefined8 *)(param_1 + -0x228);
    puVar15 = (undefined8 *)0x20;
    __Znwm();
    puVar15[1] = 0x625f656c706d6173;
    *puVar15 = 0x2f64336e616d7568;
    *(undefined8 *)((long)puVar15 + 0x16) = 0x6c736c672e687470;
    *(undefined8 *)((long)puVar15 + 0xe) = 0x65645f79646f625f;
    *(undefined1 *)((long)puVar15 + 0x1e) = 0;
    param_3 = (undefined8 *)0x11;
    FUN_10ab451f4(&ppppppplStack_270,uVar26,&UNK_10f6791e7,0x11,&UNK_10f6791f9,0xd,puVar15,0x1e,1);
    ppppppplVar25 = (long *******)(param_1 + 0xd0);
    __ZdlPv(puVar15);
    unaff_x24 = (long *******)&ppppppplStack_270;
    ppppppplVar21 = (long *******)&ppppppplStack_270;
    func_0x00010a015c50(ppppppplVar25);
    pppppplVar20 = *ppppppplVar25;
    if (pppppplVar20 != (long ******)0x0) {
      *(undefined1 *)(pppppplVar20 + 1) = 1;
      if (pppppplVar20[0x45] == pppppplVar20[0x46]) {
        pppplVar27 = (long ****)0x0;
      }
      else {
        pppplVar27 = *pppppplVar20[0x45];
      }
      ppplVar22 = pppplVar27[0x4b];
      ppplVar22[6] = (long **)0x0;
      ppplVar22[5] = (long **)0x6;
      ppplVar22[8] = (long **)0x0;
      ppplVar22[7] = (long **)0x0;
      ppplVar22[10] = (long **)0x0;
      ppplVar22[9] = (long **)0x0;
      func_0x00010a3326b8(pppplVar27 + 0x43,0);
      func_0x00010a332748((long)pppplVar27 + 0x219,1);
      func_0x00010a332700((long)pppplVar27 + 0x21a,1);
      func_0x00010a332790(pppplVar27,7);
      ppppppplVar21 = (long *******)0x0;
      func_0x00010a3325d0(pppplVar27);
      *(undefined4 *)((long)pppplVar27 + 0x21e) = 0;
      *(undefined1 *)(pppplVar27 + 1) = 1;
    }
    FUN_10a044790(auStack_260);
    ppppppplVar14 = apppppplStack_258;
    (*(code *)*apppppplStack_258[0])();
    if (ppppppplStack_268 != (long *******)0x0) {
      ppppppplVar18 = ppppppplStack_268 + 1;
      do {
        pppppplVar23 = *ppppppplVar18;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
        if (bVar3) {
          *ppppppplVar18 = (long ******)((long)pppppplVar23 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppplVar23 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_268)[2])(ppppppplStack_268);
        ppppppplVar14 = ppppppplStack_268;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    unaff_x23 = (long *******)0x0;
    unaff_x22 = ppppppplStack_268;
    if (pppppplVar20 == (long ******)0x0) goto LAB_10a7ec2a4;
    pppppplVar20 = *ppppppplVar25;
  }
  ppppppplVar25 = param_2 + 4;
  FUN_10a5dfd94(ppppppplVar25,pppppplVar20);
  ppppppplVar21 = param_2 + 4;
  FUN_10a01eacc(ppppppplVar21,ppppppplVar25);
  func_0x000107c2b074(&ppppppplStack_270,&PTR_DAT_110c1f6b0);
  FUN_10a5e17a8(ppppppplVar21,&ppppppplStack_270,*(undefined8 *)(param_1 + 0x70),&UNK_10e4ac8a8);
  if (cStack_259 < '\0') {
    __ZdlPv(ppppppplStack_270);
  }
  func_0x000107c2b074(&ppppppplStack_270,&PTR_DAT_110c1f6c8);
  FUN_10a5e17a8(ppppppplVar21,&ppppppplStack_270,*(undefined8 *)(param_1 + 200),&UNK_10e4ac8a8);
  if (cStack_259 < '\0') {
    __ZdlPv(ppppppplStack_270);
  }
  plVar28 = *(long **)(param_1 + 0x50);
  plVar16 = plVar28;
  (**(code **)(*plVar28 + 0x28))();
  uVar10 = (uint)plVar16;
  if (uVar10 < 2) {
    uVar10 = 1;
  }
  unaff_x24 = (long *******)(ulong)uVar10;
  (**(code **)(*plVar28 + 0x30))();
  uVar11 = (uint)plVar28;
  if (uVar11 < 2) {
    uVar11 = 1;
  }
  plVar28 = *(long **)(param_1 + 0x60);
  plVar16 = plVar28;
  (**(code **)(*plVar28 + 0x28))();
  uVar12 = (uint)plVar16;
  if (uVar12 < 2) {
    uVar12 = 1;
  }
  (**(code **)(*plVar28 + 0x30))();
  uVar13 = (uint)plVar28;
  if (uVar13 < 2) {
    uVar13 = 1;
  }
  FUN_10aaca0a0(&fStack_298,CONCAT44(uVar11,uVar10),CONCAT44(uVar13,uVar12),param_1 + 0x90);
  fVar4 = fStack_280 * 0.0;
  fVar7 = -fStack_28c + fStack_298 * 0.0;
  fVar8 = -fStack_288 + fStack_294 * 0.0;
  fVar29 = fStack_27c * 0.0;
  fVar30 = fStack_278 * 0.0;
  fVar31 = fStack_280 * 0.0;
  fVar32 = fStack_27c * 0.0;
  fVar6 = fStack_290 * 0.0;
  fVar5 = fStack_278 * 0.0;
  fStack_280 = fStack_28c + fStack_298 * 0.0 + fStack_280;
  fStack_27c = fStack_288 + fStack_294 * 0.0 + fStack_27c;
  fStack_278 = fStack_284 + fStack_290 * 0.0 + fStack_278;
  fStack_298 = fStack_298 + fStack_28c * 0.0 + fVar4;
  fStack_294 = fStack_294 + fStack_288 * 0.0 + fVar29;
  fStack_290 = fStack_290 + fStack_284 * 0.0 + fVar30;
  fStack_28c = fVar7 + fVar31;
  fStack_288 = (float)(CONCAT17((char)((uint)fVar8 >> 0x18),
                                CONCAT16((char)((uint)fVar8 >> 0x10),
                                         CONCAT15((char)((uint)fVar8 >> 8),
                                                  CONCAT14(SUB41(fVar8,0),fVar7)))) >> 0x20) +
               fVar32;
  fStack_284 = -fStack_284 + fVar6 + fVar5;
  func_0x000107c2b074(&ppppppplStack_270,&PTR_DAT_110c1f6e0);
  FUN_10a7ec36c(ppppppplVar21,&ppppppplStack_270,&fStack_298);
  if (cStack_259 < '\0') {
    __ZdlPv(ppppppplStack_270);
  }
  func_0x000107c2b074(&ppppppplStack_270,&PTR_DAT_110c1f6f8);
  FUN_10a01671c(ppppppplVar21,&ppppppplStack_270,param_1 + 0x38);
  if (cStack_259 < '\0') {
    __ZdlPv(ppppppplStack_270);
  }
  func_0x000107c2b074(&ppppppplStack_270,&PTR_DAT_110c1f710);
  ppppppplVar14 = ppppppplVar19;
  (*(code *)(*ppppppplVar19)[0x27])(ppppppplVar19);
  FUN_10a015dcc(ppppppplVar21,&ppppppplStack_270,ppppppplVar14);
  if (cStack_259 < '\0') {
    __ZdlPv(ppppppplStack_270);
  }
  ppppppplStack_270 = (long *******)0x0;
  uStack_a0 = 0;
  uStack_90 = 0;
  plStack_98 = (long *)0x0;
  uStack_88 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  uStack_78 = 0x3f800000;
  uStack_70 = 0x200000002;
  uStack_c8 = *(undefined8 *)(param_1 + 0x50);
  plStack_c0 = *(long **)(param_1 + 0x58);
  if (plStack_c0 != (long *)0x0) {
    plVar16 = plStack_c0 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = *plVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_b8 = 0;
  uStack_b0 = 0xffffffffffffffff;
  uStack_a8 = 0xffffffffffffffff;
  (*(code *)(*param_2)[0x11])(param_2,&ppppppplStack_270);
  unaff_x22 = *(long ********)(param_1 + 0x50);
  unaff_x23 = unaff_x22;
  (*(code *)(*unaff_x22)[5])();
  ppppppplVar21 = unaff_x22;
  (*(code *)(*unaff_x22)[6])();
  uStack_2d0 = (uint)unaff_x23;
  if (uStack_2d0 < 2) {
    uStack_2d0 = 1;
  }
  uStack_2cc = (uint)ppppppplVar21;
  if (uStack_2cc < 2) {
    uStack_2cc = 1;
  }
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  (*(code *)(*param_2)[0x18])(param_2,&uStack_2d8);
  lVar17 = *(long *)(param_1 + -0x228);
  FUN_10a2421c8();
  uStack_2d8 = 0x3f800000;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2c4 = 0x3f800000;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0x3f800000;
  uStack_2a4 = 0;
  uStack_2ac = 0;
  uStack_29c = 0x3f800000;
  (*(code *)(*param_2)[0xb])(param_2,*(undefined8 *)(lVar17 + 0x208),ppppppplVar25,&uStack_2d8,3);
  param_3 = (undefined8 *)0x0;
  (*(code *)(*param_2)[0x12])(param_2,3,0,3);
  plVar16 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar28 = plStack_98 + 1;
    do {
      lVar17 = *plVar28;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar3) {
        *plVar28 = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar16 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar28 = plStack_c0 + 1;
    do {
      lVar17 = *plVar28;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar3) {
        *plVar28 = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  ppppppplVar14 = (long *******)&ppppppplStack_268;
  ppppppplVar21 = ppppppplStack_270;
  func_0x00010a048e34();
LAB_10a7ec2a4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  __ZdlPv(unaff_x22);
  ppppppplVar18 = ppppppplVar14;
  __Unwind_Resume();
  pcStack_2e8 = FUN_10a7ec36c;
  pppppplVar20 = ppppppplVar18[0x16];
  ppppppplStack_320 = unaff_x24;
  ppppppplStack_318 = unaff_x23;
  ppppppplStack_310 = unaff_x22;
  ppppppplStack_308 = ppppppplVar25;
  ppppppplStack_300 = ppppppplVar19;
  ppppppplStack_2f8 = ppppppplVar14;
  puStack_2f0 = &stack0xfffffffffffffff0;
  if (pppppplVar20 < ppppppplVar18[0x14]) {
    pppppplVar24 = (long ******)
                   (((long)ppppppplVar18[0x12] - (long)ppppppplVar18[0x11] >> 3) *
                   -0x5555555555555555);
    pppppplVar23 = pppppplVar20;
    if (pppppplVar20 <= pppppplVar24) {
      pppppplVar23 = pppppplVar24;
    }
    pppppplVar24 = ppppppplVar18[0x11] + (long)pppppplVar20 * 3 + 2;
    do {
      if (pppppplVar23 == pppppplVar20) goto LAB_10a7ec594;
      if ((long ******)pppppplVar24[-2] == ppppppplVar21[3]) {
        if (*(short *)(pppppplVar24 + -1) != 10) {
          return;
        }
        if (pppppplVar20 < ppppppplVar18[0x15]) {
          if (*(int *)pppppplVar24 == 0x24) {
            lVar17 = (long)ppppppplVar18[0x17] + (ulong)*(uint *)((long)pppppplVar24 + -4);
            _memcmp(lVar17,param_3,0x24);
            if ((int)lVar17 == 0) {
              return;
            }
          }
          FUN_10a048bc4(ppppppplVar18);
          pppppplVar20 = (long ******)((long)ppppppplVar18[0x16] + (long)pppppplVar20);
        }
        ppppppplVar25 = ppppppplVar18 + 0x17;
        pppppplVar23 = *ppppppplVar25;
        uVar10 = *(uint *)(ppppppplVar18 + 0x1a);
        uVar1 = (ulong)uVar10 + 0x24;
        lVar17 = uVar1 - ((long)ppppppplVar18[0x18] - (long)pppppplVar23);
        if ((ulong)((long)ppppppplVar18[0x18] - (long)pppppplVar23) <= uVar1 && lVar17 != 0) {
          func_0x0001092bf294(ppppppplVar25,lVar17);
          pppppplVar23 = *ppppppplVar25;
        }
        puVar15 = (undefined8 *)((long)pppppplVar23 + (ulong)uVar10);
        uVar33 = param_3[1];
        uVar26 = *param_3;
        uVar35 = param_3[3];
        uVar34 = param_3[2];
        *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(param_3 + 4);
        puVar15[1] = uVar33;
        *puVar15 = uVar26;
        puVar15[3] = uVar35;
        puVar15[2] = uVar34;
        *(int *)(ppppppplVar18 + 0x1a) = (int)uVar1;
        pppppplVar23 = ppppppplVar18[0x11];
        pppppplVar24 = (long ******)
                       (((long)ppppppplVar18[0x12] - (long)pppppplVar23 >> 3) * -0x5555555555555555)
        ;
        if (pppppplVar20 <= pppppplVar24 && (long)pppppplVar24 - (long)pppppplVar20 != 0) {
          *(uint *)((long)pppppplVar23 + (long)pppppplVar20 * 0x18 + 0xc) = uVar10;
          *(undefined4 *)(pppppplVar23 + (long)pppppplVar20 * 3 + 2) = 0x24;
          return;
        }
        goto LAB_10a7ec594;
      }
      pppppplVar20 = (long ******)((long)pppppplVar20 + 1);
      pppppplVar24 = pppppplVar24 + 3;
    } while (ppppppplVar18[0x14] != pppppplVar20);
  }
  ppppppplVar25 = ppppppplVar18 + 0x17;
  pppppplVar20 = *ppppppplVar25;
  uVar10 = *(uint *)(ppppppplVar18 + 0x1a);
  uVar1 = (ulong)uVar10 + 0x24;
  lVar17 = uVar1 - ((long)ppppppplVar18[0x18] - (long)pppppplVar20);
  if ((ulong)((long)ppppppplVar18[0x18] - (long)pppppplVar20) <= uVar1 && lVar17 != 0) {
    func_0x0001092bf294(ppppppplVar25,lVar17);
    pppppplVar20 = *ppppppplVar25;
  }
  puVar15 = (undefined8 *)((long)pppppplVar20 + (ulong)uVar10);
  uVar33 = param_3[1];
  uVar26 = *param_3;
  uVar35 = param_3[3];
  uVar34 = param_3[2];
  *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(param_3 + 4);
  puVar15[1] = uVar33;
  *puVar15 = uVar26;
  puVar15[3] = uVar35;
  puVar15[2] = uVar34;
  pppppplVar23 = ppppppplVar18[0x11];
  *(int *)(ppppppplVar18 + 0x1a) = (int)uVar1;
  pppppplVar20 = ppppppplVar18[0x14];
  if (pppppplVar20 <
      (long ******)(((long)ppppppplVar18[0x12] - (long)pppppplVar23 >> 3) * -0x5555555555555555)) {
    pppppplVar23 = pppppplVar23 + (long)pppppplVar20 * 3;
  }
  else {
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    FUN_10a063efc(ppppppplVar18 + 0x11,&uStack_338);
    if (ppppppplVar18[0x11] == ppppppplVar18[0x12]) {
LAB_10a7ec594:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10a7ec598);
      (*pcVar9)();
    }
    pppppplVar23 = ppppppplVar18[0x12] + -3;
    pppppplVar20 = ppppppplVar18[0x14];
  }
  *pppppplVar23 = (long *****)ppppppplVar21[3];
  *(undefined2 *)(pppppplVar23 + 1) = 10;
  *(uint *)((long)pppppplVar23 + 0xc) = uVar10;
  *(undefined4 *)(pppppplVar23 + 2) = 0x24;
  ppppppplVar18[0x14] = (long ******)((long)pppppplVar20 + 1);
  return;
}



/* Entry: 10a7ec5c0; end: 10a7ec627;  */

bool FUN_10a7ec5c0(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x30) {
    iVar2 = 0xf66222f;
    _memcmp(&UNK_10f66222f,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a7ec628; end: 10a7ec62f;  */

bool FUN_10a7ec628(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x30) {
    iVar2 = 0xf66222f;
    _memcmp(&UNK_10f66222f,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}


