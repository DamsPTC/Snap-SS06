/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10777c9d4; end: 10777ca2b;  */

undefined2 FUN_10777c9d4(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f32e8();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777cbf4; end: 10777cc4b;  */

undefined2 FUN_10777cbf4(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f342c();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777ce14; end: 10777ce6b;  */

undefined2 FUN_10777ce14(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f3504();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777d128; end: 10777d177;  */

undefined8 FUN_10777d128(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x00010775e080(&uStack_18,param_1);
  return uStack_18;
}



/* Entry: 10777e4b0; end: 10777e6f7;  */

/* WARNING: Possible PIC construction at 0x00010777e7b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010777e7b8) */
/* WARNING: Removing unreachable block (ram,0x00010777e814) */
/* WARNING: Removing unreachable block (ram,0x00010777e828) */
/* WARNING: Removing unreachable block (ram,0x00010777e864) */
/* WARNING: Removing unreachable block (ram,0x00010777e874) */
/* WARNING: Removing unreachable block (ram,0x00010777e884) */
/* WARNING: Removing unreachable block (ram,0x00010777e8b4) */
/* WARNING: Removing unreachable block (ram,0x00010777e850) */

undefined ** FUN_10777e4b0(undefined8 param_1,undefined **param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined **ppuVar3;
  undefined8 extraout_x8;
  undefined4 uVar4;
  undefined4 *unaff_x19;
  undefined **unaff_x20;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_240 [24];
  long lStack_228;
  undefined1 uStack_219;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *apuStack_1f8 [7];
  undefined1 auStack_1c0 [128];
  uint auStack_140 [2];
  long lStack_138;
  short sStack_12a;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *apuStack_90 [3];
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  func_0x00010777fa9c();
  func_0x00010777f8f4();
  uVar1 = *(ushort *)(param_3 + 0x16);
  uStack_38 = extraout_x8;
  if ((uVar1 >> 4 & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      if ((uVar1 >> 10 & 1) == 0) {
        if (uVar1 == 3) {
          puStack_c0 = &UNK_10e52b660;
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          puVar6 = unaff_x20[1] + 0x18;
          lVar5 = (ulong)*(uint *)unaff_x20 * 0x30;
          in_ZR = 1;
          lVar7 = (ulong)*(uint *)unaff_x20 * 3;
          while (lVar7 != 0) {
            if ((*(ushort *)(puVar6 + -2) >> 0xc & 1) == 0) {
              puStack_c8 = *(undefined **)(puVar6 + -0x10);
            }
            else {
              puStack_c8 = puVar6 + -0x18;
            }
            FUN_10777e4b0(auStack_78,puVar6);
            func_0x00010774b118(auStack_e0,&puStack_c0,&puStack_c8,auStack_78);
            func_0x00010777fa1c();
            puVar6 = puVar6 + 0x30;
            lVar5 = lVar5 + -0x30;
            lVar7 = lVar5;
          }
          func_0x000104c33260(&uStack_f0,&puStack_c0);
          *unaff_x19 = 1;
          *(undefined8 *)(unaff_x19 + 4) = uStack_e8;
          *(undefined8 *)(unaff_x19 + 2) = uStack_f0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          func_0x00010777fa7c();
          param_2 = &puStack_c0;
          func_0x000104c33548();
        }
        else {
          in_ZR = uVar1 == 4;
          if ((bool)in_ZR) {
            puStack_c0 = (undefined *)0x0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            func_0x0001072ac134(&puStack_c0,*(uint *)unaff_x20);
            puVar6 = unaff_x20[1];
            lVar5 = (ulong)*(uint *)unaff_x20 * 0x18;
            lVar7 = (ulong)*(uint *)unaff_x20 * 3;
            while (lVar7 != 0) {
              FUN_10777e4b0(auStack_78,puVar6);
              func_0x0001072aad1c(&puStack_c0,auStack_78);
              func_0x00010777fa1c();
              puVar6 = puVar6 + 0x18;
              lVar5 = lVar5 + -0x18;
              lVar7 = lVar5;
            }
            func_0x000107327958(&uStack_a0,&puStack_c0);
            *unaff_x19 = 0;
            *(undefined8 *)(unaff_x19 + 4) = uStack_98;
            *(undefined8 *)(unaff_x19 + 2) = uStack_a0;
            uStack_a0 = 0;
            uStack_98 = 0;
            func_0x000104c33108(&uStack_a0);
            param_2 = &puStack_c0;
            func_0x000107269124();
          }
          else {
            *unaff_x19 = 7;
          }
        }
      }
      else {
        in_ZR = (uVar1 & 0x1000) == 0;
        ppuVar3 = (undefined **)unaff_x20[1];
        if (!(bool)in_ZR) {
          ppuVar3 = unaff_x20;
        }
        func_0x00010002b838(apuStack_90,ppuVar3);
        func_0x000107268798();
        param_2 = apuStack_90;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
    }
    else {
      in_ZR = uVar1 == 10;
      *unaff_x19 = 6;
      *(undefined1 *)(unaff_x19 + 2) = in_ZR;
    }
  }
  else {
    if ((uVar1 >> 7 & 1) == 0) {
      if ((uVar1 >> 8 & 1) == 0) {
        func_0x0001073274d0();
        *unaff_x19 = 3;
        *(undefined8 *)(unaff_x19 + 2) = param_1;
        param_2 = unaff_x20;
        goto LAB_10777e5f0;
      }
      puVar6 = *unaff_x20;
      uVar4 = 5;
    }
    else {
      puVar6 = *unaff_x20;
      uVar4 = 4;
    }
    *unaff_x19 = uVar4;
    *(undefined **)(unaff_x19 + 2) = puVar6;
  }
LAB_10777e5f0:
  func_0x00010777f8e0(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    ppuVar3 = &puStack_c0;
    func_0x000107269124(ppuVar3);
    func_0x00010777f924();
    func_0x00010777f8f4();
    puStack_218 = &UNK_10e52b660;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    func_0x00010787075c(auStack_140,ppuVar3 + 9,&uStack_219);
    if (sStack_12a == 3) {
      lVar5 = lStack_138 + 0x18;
      lVar7 = (ulong)auStack_140[0] * 0x30;
      lVar2 = (ulong)auStack_140[0] * 3;
      while (lVar2 != 0) {
        if ((*(ushort *)(lVar5 + -2) >> 0xc & 1) == 0) {
          lStack_228 = *(long *)(lVar5 + -0x10);
        }
        else {
          lStack_228 = lVar5 + -0x18;
        }
        FUN_10777e4b0(auStack_1c0,lVar5);
        func_0x00010774b118(auStack_240,&puStack_218,&lStack_228,auStack_1c0);
        func_0x000104c3323c(auStack_1c0);
        lVar5 = lVar5 + 0x30;
        lVar7 = lVar7 + -0x30;
        lVar2 = lVar7;
      }
    }
    func_0x000100060934(apuStack_1f8,"within");
    return apuStack_1f8;
  }
  return param_2;
}



/* Entry: 10777ea64; end: 10777f063;  */

bool FUN_10777ea64(long *param_1,char *param_2,undefined1 *param_3,ulong param_4,int *param_5)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  undefined1 uVar6;
  ulong uVar7;
  code *pcVar8;
  bool bVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  short *psVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  double dVar21;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long **pplStack_90;
  
  iVar17 = *param_5;
  lStack_e8 = 0x7fffffffffffffff;
  lStack_f0 = 0x7fffffffffffffff;
  lStack_d8 = -0x8000000000000000;
  lStack_e0 = -0x8000000000000000;
  if (((iVar17 != 7) && (iVar17 != 6)) && (iVar17 != 5)) {
    if (iVar17 == 4) {
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      func_0x00010777fa5c(&plStack_b0,param_5 + 2,param_3,param_4,&lStack_f0);
      func_0x00010777fa44();
      func_0x00010777fa68();
      goto LAB_10777eb10;
    }
    if ((iVar17 != 3 && iVar17 != 2) && iVar17 == 1) {
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      lVar16 = *(long *)(param_5 + 2);
      lVar14 = *(long *)(param_5 + 4);
      if (lVar14 - lVar16 != 0) {
        uVar1 = (lVar14 - lVar16) / 0x18;
        if (0xaaaaaaaaaaaaaaa < uVar1) {
          func_0x00010777f398();
LAB_10777efec:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10777eff0);
          (*pcVar8)();
        }
        func_0x00010777f3a4(&plStack_b0,uVar1,0,&uStack_f8);
        func_0x00010777f358(&uStack_108,&plStack_b0);
        func_0x00010777f418(&plStack_b0);
        lVar16 = *(long *)(param_5 + 2);
        lVar14 = *(long *)(param_5 + 4);
      }
      for (; lVar16 != lVar14; lVar16 = lVar16 + 0x18) {
        func_0x00010777fa5c(&plStack_b0,lVar16);
        func_0x00010777fa44();
        func_0x00010777fa68();
      }
      goto LAB_10777eb10;
    }
  }
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
LAB_10777eb10:
  iVar17 = (int)param_4;
  if (*param_2 == '\x02') {
    plStack_128 = (long *)0x7fffffffffffffff;
    plStack_130 = (long *)0x7fffffffffffffff;
    plStack_118 = (long *)0x8000000000000000;
    plStack_120 = (long *)0x8000000000000000;
    iVar3 = *(int *)(param_3 + 4);
    iVar4 = *(int *)(param_3 + 8);
    plStack_140 = (long *)0x0;
    plStack_138 = (long *)0x0;
    plStack_148 = (long *)0x0;
    plVar10 = (long *)0x60;
    pplStack_90 = &plStack_138;
    __Znwm();
    plStack_98 = plVar10 + 0xc;
    plStack_b0 = plVar10;
    plStack_a8 = plVar10;
    plStack_a0 = plVar10;
    func_0x00010777fa50();
    func_0x00010777f638(&plStack_b0);
    plVar18 = (long *)0x7fffffffffffffff;
    plVar20 = (long *)0x8000000000000000;
    plVar12 = (long *)param_1[1];
    plVar19 = (long *)0x8000000000000000;
    plVar10 = (long *)0x7fffffffffffffff;
    for (param_1 = (long *)*param_1; param_1 != plVar12; param_1 = param_1 + 3) {
      lStack_c8 = 0;
      lStack_c0 = 0;
      lStack_d0 = 0;
      func_0x00010777f460(&lStack_d0,param_1[1] - *param_1 >> 2);
      psVar5 = (short *)param_1[1];
      for (psVar15 = (short *)*param_1; psVar15 != psVar5; psVar15 = psVar15 + 2) {
        plStack_b0 = (long *)((long)*psVar15 + (ulong)(uint)(iVar3 * iVar17));
        plStack_a8 = (long *)((long)psVar15[1] + (ulong)(uint)(iVar4 * iVar17));
        if ((long)plStack_b0 <= (long)plVar10) {
          plVar10 = plStack_b0;
        }
        if ((long)plStack_a8 <= (long)plVar18) {
          plVar18 = plStack_a8;
        }
        plVar11 = plStack_b0;
        if ((long)plStack_b0 <= (long)plVar19) {
          plVar11 = plVar19;
        }
        plVar2 = plStack_a8;
        if ((long)plStack_a8 <= (long)plVar20) {
          plVar2 = plVar20;
        }
        plStack_130 = plVar10;
        plStack_128 = plVar18;
        plStack_120 = plVar11;
        plStack_118 = plVar2;
        FUN_10777f4cc(&lStack_d0,&plStack_b0);
        plVar19 = plVar11;
        plVar20 = plVar2;
      }
      if (plStack_140 < plStack_138) {
        *plStack_140 = 0;
        plStack_140[1] = 0;
        plStack_140[2] = 0;
        plStack_140[1] = lStack_c8;
        *plStack_140 = lStack_d0;
        plStack_140[2] = lStack_c0;
        lStack_d0 = 0;
        lStack_c8 = 0;
        lStack_c0 = 0;
        plVar11 = plStack_140 + 3;
      }
      else {
        lVar16 = (long)plStack_140 - (long)plStack_148;
        uVar1 = lVar16 / 0x18 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar1) {
          func_0x00010777f5ec();
          goto LAB_10777efec;
        }
        uVar7 = ((long)plStack_138 - (long)plStack_148) / 0x18;
        uVar13 = uVar7 * 2;
        if (uVar13 < uVar1 || uVar13 - uVar1 == 0) {
          uVar13 = uVar1;
        }
        if (0x555555555555554 < uVar7) {
          uVar13 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar13 == 0) {
          plVar11 = (long *)0x0;
          pplStack_90 = &plStack_138;
        }
        else {
          if (0xaaaaaaaaaaaaaaa < uVar13) {
            pplStack_90 = &plStack_138;
            func_0x000104bd35f4();
            goto LAB_10777efec;
          }
          plVar11 = (long *)(uVar13 * 0x18);
          pplStack_90 = &plStack_138;
          __Znwm();
        }
        plStack_a8 = (long *)((long)plVar11 + lVar16);
        plStack_98 = plVar11 + uVar13 * 3;
        plStack_a8[1] = lStack_c8;
        *plStack_a8 = lStack_d0;
        plStack_a8[2] = lStack_c0;
        lStack_d0 = 0;
        lStack_c8 = 0;
        lStack_c0 = 0;
        plStack_a0 = plStack_a8 + 3;
        plStack_b0 = plVar11;
        func_0x00010777fa50();
        plVar11 = plStack_140;
        func_0x00010777f638(&plStack_b0);
      }
      plStack_140 = plVar11;
      func_0x0001073c66e0(&lStack_d0);
    }
    dVar21 = 1.0;
    _ldexp(*param_3);
    plVar18 = plStack_140;
    dVar21 = dVar21 * (double)(param_4 & 0xffffffff);
    if ((double)((long)plVar19 - (long)plVar10) <= dVar21 * 0.5) {
      plStack_128 = (long *)0x7fffffffffffffff;
      plStack_130 = (long *)0x7fffffffffffffff;
      plStack_118 = (long *)0x8000000000000000;
      plStack_120 = (long *)0x8000000000000000;
      for (plVar12 = plStack_148; plVar10 = plStack_130, plVar12 != plVar18; plVar12 = plVar12 + 3)
      {
        lVar14 = plVar12[1];
        for (lVar16 = *plVar12; lVar16 != lVar14; lVar16 = lVar16 + 0x10) {
          func_0x00010777f584(lVar16,&plStack_130,lStack_f0,lStack_e0,(long)dVar21);
        }
      }
    }
    plVar18 = plStack_140;
    if (((lStack_f0 < (long)plVar10) && ((long)plStack_120 < lStack_e0)) &&
       ((lStack_e8 < (long)plStack_128 && (plVar10 = plStack_148, (long)plStack_118 < lStack_d8))))
    {
      do {
        bVar9 = plVar10 == plVar18;
        if (bVar9) break;
        plVar12 = plVar10;
        func_0x0001078719a8(plVar10,&uStack_108);
        plVar10 = plVar10 + 3;
      } while (((ulong)plVar12 & 1) != 0);
    }
    else {
      bVar9 = false;
    }
    func_0x00010777f680(&plStack_148);
  }
  else if (*param_2 == '\x01') {
    plStack_a8 = (long *)0x7fffffffffffffff;
    plStack_b0 = (long *)0x7fffffffffffffff;
    plStack_98 = (long *)0x8000000000000000;
    plStack_a0 = (long *)0x8000000000000000;
    func_0x0001073f18d4(param_1,0);
    iVar3 = *(int *)(param_3 + 4);
    iVar4 = *(int *)(param_3 + 8);
    uVar6 = *param_3;
    plStack_128 = (long *)0x0;
    plStack_120 = (long *)0x0;
    plStack_130 = (long *)0x0;
    func_0x00010777f460(&plStack_130,param_1[1] - *param_1 >> 2);
    dVar21 = 1.0;
    _ldexp(0x3ff0000000000000,uVar6);
    psVar5 = (short *)param_1[1];
    for (psVar15 = (short *)*param_1; plVar10 = plStack_128, psVar15 != psVar5;
        psVar15 = psVar15 + 2) {
      lStack_d0 = (long)*psVar15 + (ulong)(uint)(iVar3 * iVar17);
      lStack_c8 = (long)psVar15[1] + (ulong)(uint)(iVar4 * iVar17);
      func_0x00010777f584(&lStack_d0,&plStack_b0,lStack_f0,lStack_e0,
                          (long)(dVar21 * (double)(param_4 & 0xffffffff)));
      FUN_10777f4cc(&plStack_130,&lStack_d0);
    }
    if (((lStack_f0 < (long)plStack_b0) && ((long)plStack_a0 < lStack_e0)) &&
       ((lStack_e8 < (long)plStack_a8 && (plVar18 = plStack_130, (long)plStack_98 < lStack_d8)))) {
      do {
        bVar9 = plVar18 == plVar10;
        if (bVar9) break;
        plVar12 = plVar18;
        FUN_1078718b0(plVar18,&uStack_108,0);
        plVar18 = plVar18 + 2;
      } while (((ulong)plVar12 & 1) != 0);
    }
    else {
      bVar9 = false;
    }
    func_0x0001073c66e0(&plStack_130);
  }
  else {
    bVar9 = false;
  }
  func_0x00010777f6c0(&uStack_108);
  return bVar9;
}



/* Entry: 10777f4cc; end: 10777f583;  */

void FUN_10777f4cc(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010777fa9c();
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
    uVar3 = *unaff_x20;
    puVar2[1] = unaff_x20[1];
    *puVar2 = uVar3;
    puVar2 = puVar2 + 2;
  }
  else {
    plVar1 = unaff_x19;
    func_0x0001074b331c();
    func_0x0001074b33ac(auStack_58,plVar1,unaff_x19[1] - *unaff_x19 >> 4,(ulong *)(param_1 + 0x10));
    uVar3 = *unaff_x20;
    puStack_48[1] = unaff_x20[1];
    *puStack_48 = uVar3;
    puStack_48 = puStack_48 + 2;
    func_0x00010777fa24();
    puVar2 = (undefined8 *)unaff_x19[1];
    func_0x00010777f9fc();
  }
  unaff_x19[1] = (long)puVar2;
  return;
}



/* Entry: 10777f888; end: 10777f89b;  */

void FUN_10777f888(void)

{
  func_0x00010777f8a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10777fcb8; end: 10777fd37;  */

undefined8
FUN_10777fcb8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined1 auStack_40 [27];
  undefined1 uStack_25;
  undefined4 uStack_24;
  
  uStack_25 = param_5;
  uStack_24 = param_1;
  func_0x00010777fd08(auStack_40,param_3,param_4,&uStack_24,&uStack_25);
  func_0x00010777ffd4();
  return param_2;
}



/* Entry: 107780154; end: 10778021b;  */

void FUN_107780154(long param_1)

{
  undefined8 *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar1;
  long unaff_x19;
  undefined1 unaff_w24;
  long unaff_x25;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *in_stack_00000000;
  
  func_0x000107781450();
  func_0x0001073243b8(param_1 + 0x20,unaff_x25 + 8);
  *(undefined1 *)(unaff_x19 + 0x90) = unaff_w24;
  uVar2 = in_x4[1];
  uVar1 = *in_x4;
  uVar3 = in_x4[2];
  *(undefined8 *)(unaff_x19 + 0xb0) = in_x4[3];
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x98) = uVar1;
  func_0x000107780cbc(unaff_x19 + 0xb8,in_x5);
  func_0x00010727fe7c(unaff_x19 + 0xf8,in_x6);
  func_0x000107780dfc(unaff_x19 + 0x130,in_x7);
  uVar1 = *in_stack_00000000;
  *in_stack_00000000 = 0;
  *(undefined8 *)(unaff_x19 + 0x1c8) = uVar1;
  return;
}



/* Entry: 107780974; end: 107780b4b;  */

/* WARNING: Possible PIC construction at 0x000107780b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107780b70) */
/* WARNING: Removing unreachable block (ram,0x000107780b9c) */
/* WARNING: Removing unreachable block (ram,0x000107780b74) */

undefined8 ** FUN_107780974(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 **ppuVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  undefined1 auStack_e0 [32];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *apuStack_a0 [2];
  undefined8 *apuStack_90 [2];
  undefined1 auStack_80 [56];
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_2;
  func_0x000107781398();
  uVar2 = *(char *)(lVar3 + 0x1c0) == '\x01';
  if ((bool)uVar2) {
    auStack_80[0] = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = extraout_x8;
    func_0x0001072d124c(auStack_e0);
    func_0x000107781440(apuStack_90,param_2 + 0x130);
    func_0x000107781418();
    func_0x000107781438();
    auStack_80[0] = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x0001072d124c(auStack_e0);
    func_0x000107781440(apuStack_a0,param_2 + 0x178);
    func_0x000107781418();
    func_0x000107781438();
    func_0x0001077808d4(auStack_80,*apuStack_90[0],apuStack_90[0][1]);
    func_0x0001077509dc(&uStack_b0,auStack_80);
    param_1[1] = uStack_a8;
    *param_1 = uStack_b0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    *(undefined4 *)(param_1 + 2) = 2;
    func_0x0001077808d4(auStack_e0,*apuStack_a0[0],apuStack_a0[0][1]);
    func_0x0001077509dc(&uStack_c0,auStack_e0);
    param_1[4] = uStack_b8;
    param_1[3] = uStack_c0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    *(undefined4 *)(param_1 + 5) = 2;
    *(undefined4 *)(param_1 + 8) = 1;
    func_0x0001073e0028(&uStack_c0);
    func_0x000107261dac(auStack_e0);
    func_0x0001073e0028(&uStack_b0);
    func_0x000107261dac(auStack_80);
    func_0x00010726b09c(apuStack_a0);
    ppuVar4 = apuStack_90;
    func_0x00010726b09c();
    func_0x000107781384(uStack_38);
    if ((bool)uVar2) {
      return ppuVar4;
    }
  }
  else {
    ppuVar4 = *(undefined8 ***)(param_2 + 0x1c8);
    UNRECOVERED_JUMPTABLE = (code *)(*ppuVar4)[3];
    func_0x000107781384(extraout_x8);
    if ((bool)uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000107780adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return ppuVar4;
    }
  }
  ___stack_chk_fail();
  func_0x0001073ebb78(param_1);
  func_0x0001073e0028(&uStack_b0);
  func_0x000107261dac(auStack_80);
  func_0x00010726b09c(apuStack_a0);
  ppuVar4 = apuStack_90;
  func_0x00010726b09c();
  func_0x000107781400();
  if (*(char *)(ppuVar4 + 0x38) == '\x01') {
    if (*(int *)(ppuVar4 + 0x2e) != 0) {
      uVar1 = *(byte *)(ppuVar4 + 0x28) >> 1 & 1;
      if (*(int *)(ppuVar4 + 0x2e) == 1) {
        uVar1 = 1;
      }
      return (undefined8 **)(ulong)uVar1;
    }
    return (undefined8 **)0x1;
  }
  ppuVar4 = (undefined8 **)ppuVar4[0x39];
                    /* WARNING: Could not recover jumptable at 0x000107780b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*ppuVar4)[4])();
  return ppuVar4;
}



/* Entry: 107780dd0; end: 107780dfb;  */

void FUN_107780dd0(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  func_0x00010727d6bc();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  return;
}



/* Entry: 107780f64; end: 107780f7f;  */

void FUN_107780f64(long param_1)

{
  func_0x000107780f80();
  *(undefined4 *)(param_1 + 0x78) = 1;
  return;
}



/* Entry: 107781174; end: 10778118f;  */

void FUN_107781174(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109d6cc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107781280; end: 1077812ab;  */

void FUN_107781280(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x000107781484();
  *param_1 = &PTR_DAT_1109d6da0;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 1077814e8; end: 10778191f;  */

long FUN_1077814e8(float param_1,long param_2,undefined8 param_3,ulong *param_4,undefined1 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 *param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uStack_150;
  long lStack_148;
  ulong uStack_138;
  undefined8 uStack_130;
  ulong uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  undefined1 uStack_e4;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  func_0x000104c318bc();
  uStack_100 = *param_4;
  uStack_f8 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  uStack_f0 = CONCAT62(uStack_f0._2_6_,(short)param_4[2]);
  *(undefined1 *)(param_4 + 2) = 1;
  fStack_e8 = param_1;
  uStack_e4 = param_5;
  func_0x00010724e660(auStack_e0,param_6);
  func_0x00010724e660(auStack_c8,param_7);
  uVar11 = uStack_f8;
  uVar7 = uStack_100;
  uStack_a8 = param_8[1];
  uStack_b0 = *param_8;
  uStack_a0 = CONCAT31(uStack_a0._1_3_,*(undefined1 *)(param_8 + 2));
  uStack_9c = (undefined4)param_10;
  uStack_98 = (undefined4)((ulong)param_10 >> 0x20);
  uStack_94 = (undefined4)param_11;
  uStack_90 = (undefined4)((ulong)param_11 >> 0x20);
  *(float *)(param_2 + 0x50) = fStack_e8;
  uStack_100 = 0;
  uStack_f8 = 0;
  *(ulong *)(param_2 + 0x38) = uVar7;
  *(ulong *)(param_2 + 0x40) = uVar11;
  *(undefined2 *)(param_2 + 0x48) = (undefined2)uStack_f0;
  uStack_f0 = CONCAT71(uStack_f0._1_7_,1);
  *(undefined1 *)(param_2 + 0x54) = uStack_e4;
  func_0x00010724e660(param_2 + 0x58,auStack_e0);
  func_0x00010724e660(param_2 + 0x70,auStack_c8);
  *(undefined8 *)(param_2 + 0x90) = uStack_a8;
  *(undefined8 *)(param_2 + 0x88) = uStack_b0;
  *(ulong *)(param_2 + 0xa0) = CONCAT44(uStack_94,uStack_98);
  *(ulong *)(param_2 + 0x98) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined4 *)(param_2 + 0xa8) = uStack_90;
  *(undefined4 *)(param_2 + 0xb0) = 0;
  func_0x000107273c58(&uStack_100);
  if (*(int *)(param_2 + 0xb0) != 0) {
    func_0x00010563ab98();
    goto LAB_10778187c;
  }
  fVar16 = *(float *)(param_2 + 0x50);
  func_0x00010724e660(&uStack_138,param_2 + 0x58);
  lVar10 = param_2 + 0x70;
  func_0x00010724e660(&uStack_150);
  uVar12 = *(ulong *)(param_2 + 0x9c);
  uVar11 = *(ulong *)(param_2 + 0xa4);
  uVar7 = param_2 + 0x38;
  func_0x0001074344b4();
  if ((uVar7 & 1) == 0) {
    func_0x000107781b50();
    uStack_80 = uVar7;
    lStack_78 = lVar10;
    func_0x0001003a91d4(&UNK_10f427295);
    func_0x000107781b38();
LAB_107781768:
    lStack_118 = uStack_f8;
    uStack_120 = uStack_100;
    uStack_110 = uStack_f0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    puVar8 = &uStack_100;
  }
  else {
    if (fVar16 <= 0.0) {
      func_0x000107781b50();
      uStack_80 = uVar7;
      lStack_78 = lVar10;
      func_0x0001003a91d4(&UNK_10f4272b8);
      func_0x000107781b38();
      goto LAB_107781768;
    }
    uVar2 = *(uint *)(param_2 + 0x38);
    fVar16 = (float)uVar2;
    func_0x000107781924(fVar16,uStack_138,uStack_130);
    if ((uStack_138 & 1) == 0) {
      func_0x000107781b50();
      func_0x000107781b88(*(undefined4 *)(param_2 + 0x38));
      func_0x0001003a91d4(&UNK_10f4272db);
      func_0x000107781b58();
    }
    else {
      uVar1 = *(uint *)(param_2 + 0x3c);
      fVar17 = (float)uVar1;
      func_0x000107781924(fVar17);
      if ((uStack_150 & 1) == 0) {
        func_0x000107781b50();
        func_0x000107781b88(*(undefined4 *)(param_2 + 0x3c));
        func_0x0001003a91d4(&UNK_10f427316);
        func_0x000107781b58();
      }
      else {
        if (*(char *)(param_2 + 0x98) == '\x01') {
          fVar13 = *(float *)(param_2 + 0x88);
          bVar4 = false;
          bVar5 = false;
          bVar6 = false;
          if (0.0 <= fVar13) {
            bVar4 = false;
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar13) && !NAN(fVar16)) {
              bVar4 = fVar13 < fVar16;
              bVar5 = fVar13 == fVar16;
              bVar6 = false;
            }
          }
          if (bVar5 || bVar4 != bVar6) {
            fVar14 = *(float *)(param_2 + 0x8c);
            bVar4 = false;
            bVar5 = false;
            bVar6 = false;
            if (0.0 <= fVar14) {
              bVar4 = false;
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar14) && !NAN(fVar17)) {
                bVar4 = fVar14 < fVar17;
                bVar5 = fVar14 == fVar17;
                bVar6 = false;
              }
            }
            if (bVar5 || bVar4 != bVar6) {
              fVar15 = *(float *)(param_2 + 0x90);
              bVar4 = false;
              bVar5 = false;
              bVar6 = false;
              if (0.0 <= fVar15) {
                bVar4 = false;
                bVar5 = false;
                bVar6 = true;
                if (!NAN(fVar15) && !NAN(fVar16)) {
                  bVar4 = fVar15 < fVar16;
                  bVar5 = fVar15 == fVar16;
                  bVar6 = false;
                }
              }
              if (bVar5 || bVar4 != bVar6) {
                fVar16 = *(float *)(param_2 + 0x94);
                bVar4 = true;
                if ((fVar14 <= fVar16) && (bVar4 = false, !NAN(fVar15) && !NAN(fVar13))) {
                  bVar4 = fVar15 < fVar13;
                }
                if (!bVar4) {
                  bVar4 = false;
                  bVar5 = false;
                  bVar6 = false;
                  if (0.0 <= fVar16) {
                    bVar4 = false;
                    bVar5 = false;
                    bVar6 = true;
                    if (!NAN(fVar16) && !NAN(fVar17)) {
                      bVar4 = fVar16 < fVar17;
                      bVar5 = fVar16 == fVar17;
                      bVar6 = false;
                    }
                  }
                  if (bVar5 || bVar4 != bVar6) goto LAB_1077816bc;
                }
              }
            }
          }
          func_0x000107781b50();
          uStack_80 = uStack_150;
          lStack_78 = lStack_148;
          func_0x0001003a91d4(&UNK_10f427352);
          func_0x000107781b38();
          goto LAB_107781768;
        }
LAB_1077816bc:
        if (((uVar12 >> 0x20 & 1) == 0) || (uVar2 <= (uint)uVar12)) {
          if (((uVar11 >> 0x20 & 1) == 0) || (uVar1 <= (uint)uVar11)) {
            uStack_108 = 1;
            func_0x000107781b78();
            func_0x000107781b80();
            func_0x000107781abc(&uStack_120);
            return param_2;
          }
          func_0x000107781b50();
          func_0x000107781b88(*(undefined4 *)(param_2 + 0x3c));
          uStack_d8 = 0;
          func_0x0001003a91d4(&UNK_10f4273af);
          func_0x000107781b68();
        }
        else {
          func_0x000107781b50();
          func_0x000107781b88(*(undefined4 *)(param_2 + 0x38));
          uStack_d8 = 0;
          func_0x0001003a91d4(&UNK_10f427372);
          func_0x000107781b68();
        }
      }
    }
    lStack_118 = lStack_78;
    uStack_120 = uStack_80;
    uStack_110 = uStack_70;
    uStack_80 = 0;
    lStack_78 = 0;
    uStack_70 = 0;
    puVar8 = &uStack_80;
  }
  uStack_108 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8);
  func_0x000107781b78();
  func_0x000107781b80();
  puVar9 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x000107781a84();
  *puVar9 = &PTR_DAT_1109d6e20;
  ___cxa_throw(puVar9,&PTR_DAT_1109b95f0,&DAT_107781920);
LAB_10778187c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x107781880);
  (*pcVar3)();
}



/* Entry: 107781c1c; end: 107781c5f;  */

undefined8 * FUN_107781c1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d6e58;
  func_0x00010778350c(param_1 + 6);
  func_0x000107783268(param_1 + 3);
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 1077822dc; end: 107782347;  */

void FUN_1077822dc(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long unaff_x24;
  
  puVar1 = param_2;
  func_0x000107783824();
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001077838cc(param_2[1]);
    func_0x00010724ae4c(unaff_x24 + 0x38,*(undefined8 *)(param_3 + 8));
  }
  func_0x000107783804(*param_2);
  *(char *)(param_1 + 0x10) = (char)puVar1;
  return;
}



/* Entry: 1077830c4; end: 1077831c3;  */

void FUN_1077830c4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 auStack_80 [40];
  int iStack_58;
  undefined8 uStack_48;
  
  func_0x000107783740();
  uStack_48 = extraout_x8;
  if ((bRam00000001131ad3b0 & 1) == 0) {
    func_0x0001077837ec();
    func_0x000107264c5c(auStack_80);
    func_0x0001077838dc();
  }
  func_0x000107783970(auStack_80,param_2,param_4,param_5);
  if (iStack_58 == 0) {
    (**(code **)(*param_2 + 0x58))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    puVar1 = auStack_80;
    func_0x000107783430(puVar1);
    func_0x000107783450(param_1,puVar1);
  }
  func_0x00010778375c();
  func_0x00010778372c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077838dc();
  func_0x0001077837a0();
  *extraout_x8_00 = 0;
  extraout_x8_00[0x18] = 0;
  return;
}



/* Entry: 1077832f8; end: 10778334b;  */

void FUN_1077832f8(long param_1,long param_2)

{
  func_0x0001072995d0();
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return;
}



/* Entry: 10778348c; end: 10778349f;  */

void FUN_10778348c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 10778358c; end: 1077835bf;  */

void FUN_10778358c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x0001077835c0(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 107783a88; end: 107783a93;  */

void FUN_107783a88(void)

{
  return;
}



/* Entry: 107783cf8; end: 107783d0b;  */

void FUN_107783cf8(void)

{
  FUN_107781c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077848c0; end: 1077848f7;  */

void FUN_1077848c0(void)

{
  func_0x000107786598();
  func_0x000107556034();
  return;
}



/* Entry: 107784c7c; end: 107784cb7;  */

/* WARNING: Possible PIC construction at 0x000107784d04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107784d08) */
/* WARNING: Removing unreachable block (ram,0x000107784d24) */
/* WARNING: Removing unreachable block (ram,0x000107784d1c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_107784c7c(float *param_1,float *param_2,float *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  float *pfVar5;
  float *pfVar6;
  float *extraout_x8;
  undefined8 extraout_x8_00;
  float *extraout_x8_01;
  float *pfVar7;
  float *extraout_x8_02;
  undefined8 extraout_x8_03;
  float *extraout_x8_04;
  float *pfVar8;
  float *extraout_x8_05;
  float *extraout_x8_06;
  undefined4 *extraout_x8_07;
  float *unaff_x20;
  long lVar9;
  undefined8 *******pppppppuVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  code *pcVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_180;
  undefined8 uStack_178;
  float afStack_170 [8];
  double dStack_150;
  undefined8 uStack_118;
  undefined8 *******pppppppuStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_d8 [72];
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [80];
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)auStack_70;
  pppppppuVar10 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x000107786360();
  func_0x00010778657c();
  func_0x000107786470();
  func_0x00010778643c();
  func_0x000107786334();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar12 = &UNK_107784cb8;
  __Unwind_Resume();
  pfVar6 = extraout_x8;
  if (param_2[0xe] != 0.0) {
    uVar4 = 0;
    pfVar5 = param_2;
    pfVar7 = extraout_x8;
    if (param_2[0xe] == 1.4013e-45) {
      puStack_78 = &UNK_107784cb8;
      pppppppuStack_80 = pppppppuVar10;
      func_0x000107786380();
      puVar2 = &uStack_180;
      puStack_e8 = &UNK_107784d08;
      pppppppuVar10 = &pppppppuStack_f0;
      pppppppuStack_f0 = &pppppppuStack_80;
      func_0x000107786398(auStack_d8);
      afStack_170[0] = 0.0;
      afStack_170[1] = 0.0;
      afStack_170[2] = 0.0;
      afStack_170[3] = 0.0;
      afStack_170[4] = 0.0;
      afStack_170[5] = 0.0;
      uStack_118 = extraout_x8_00;
      func_0x0001072ac134(afStack_170,2);
      for (lVar9 = 0; uVar4 = lVar9 == 8, !(bool)uVar4; lVar9 = lVar9 + 4) {
        dStack_150 = (double)*(float *)((long)param_2 + lVar9);
        afStack_170[6] = 4.2039e-45;
        func_0x0001072aad1c(afStack_170,afStack_170 + 6);
        func_0x000104c3323c(afStack_170 + 6);
      }
      pfVar5 = afStack_170;
      func_0x000107327958(&uStack_180);
      *param_1 = 0.0;
      *(undefined8 *)(param_1 + 4) = uStack_178;
      *(undefined8 *)(param_1 + 2) = uStack_180;
      uStack_180 = 0;
      uStack_178 = 0;
      func_0x000104c33108(&uStack_180);
      param_1 = afStack_170;
      func_0x000107269124();
      func_0x00010778634c(uStack_118);
      if ((bool)uVar4) {
        return;
      }
      ___stack_chk_fail();
      param_3 = afStack_170;
      func_0x000107269124();
      puVar12 = &UNK_107784e0c;
      func_0x000107786550();
      pfVar7 = extraout_x8_01;
      unaff_x20 = param_2;
    }
    puVar1 = (undefined1 *)((long)puVar2 + -0x70);
    *(float **)((long)puVar2 + -0x20) = unaff_x20;
    *(float **)((long)puVar2 + -0x18) = param_1;
    *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar10;
    *(undefined **)((long)puVar2 + -8) = puVar12;
    puVar11 = (undefined1 *)((long)puVar2 + -0x10);
    func_0x000107786360();
    func_0x00010778657c();
    func_0x000107786470();
    func_0x00010778643c();
    func_0x000107786334();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    puVar12 = &UNK_107784e48;
    __Unwind_Resume();
    pfVar6 = extraout_x8_02;
    if (param_3[0xc] != 0.0) {
      uVar4 = param_3[0xc] == 1.4013e-45;
      pfVar8 = extraout_x8_02;
      if ((bool)uVar4) {
        puVar1 = (undefined1 *)((long)puVar2 + -0xd0);
        *(undefined1 **)((long)puVar2 + -0x80) = puVar11;
        *(undefined **)((long)puVar2 + -0x78) = &UNK_107784e48;
        puVar11 = (undefined1 *)((long)puVar2 + -0x80);
        pfVar5 = extraout_x8_02;
        func_0x000107786418();
        *(undefined8 *)((long)puVar2 + -0x88) = extraout_x8_03;
        fVar14 = *param_3;
        *(undefined4 *)((long)puVar2 + -200) = 3;
        *(double *)((long)puVar2 + -0xc0) = (double)fVar14;
        param_3 = (float *)((long)puVar2 + -200);
        func_0x000104c32a18();
        *(undefined1 *)(pfVar5 + 0x10) = 1;
        func_0x000107786500();
        func_0x00010778634c(*(undefined8 *)((long)puVar2 + -0x88));
        if ((bool)uVar4) {
          return;
        }
        puVar12 = &UNK_107784ed0;
        ___stack_chk_fail();
        pfVar8 = extraout_x8_04;
      }
      puVar3 = puVar1 + -0x70;
      *(float **)(puVar1 + -0x20) = unaff_x20;
      *(float **)(puVar1 + -0x18) = pfVar7;
      *(undefined1 **)(puVar1 + -0x10) = puVar11;
      *(undefined **)(puVar1 + -8) = puVar12;
      puVar11 = puVar1 + -0x10;
      func_0x000107786360();
      func_0x00010778657c();
      func_0x000107786470();
      func_0x00010778643c();
      func_0x000107786334();
      if (!(bool)uVar4) {
        ___stack_chk_fail();
        pcVar13 = FUN_107784f0c;
        __Unwind_Resume();
        pfVar6 = extraout_x8_05;
        if (pfVar5[0x26] == 0.0) goto LAB_1077863ac;
        pfVar6 = pfVar5 + 2;
        uVar4 = pfVar5[0x26] == 1.4013e-45;
        pfVar5 = extraout_x8_05;
        if ((bool)uVar4) {
          puVar3 = puVar1 + -0xe0;
          *(float **)(puVar1 + -0x90) = unaff_x20;
          *(float **)(puVar1 + -0x88) = pfVar8;
          *(undefined1 **)(puVar1 + -0x80) = puVar11;
          *(code **)(puVar1 + -0x78) = FUN_107784f0c;
          puVar11 = puVar1 + -0x80;
          func_0x000107786380();
          func_0x00010775f12c(puVar1 + -0xd8);
          func_0x000107786470();
          func_0x00010778647c(1);
          func_0x000107786334();
          if ((bool)uVar4) {
            return;
          }
          ___stack_chk_fail();
          pcVar13 = (code *)&LAB_107784f80;
          __Unwind_Resume();
          param_3 = pfVar6;
          pfVar5 = extraout_x8_06;
        }
        *(float **)(puVar3 + -0x20) = unaff_x20;
        *(float **)(puVar3 + -0x18) = pfVar8;
        *(undefined1 **)(puVar3 + -0x10) = puVar11;
        *(code **)(puVar3 + -8) = pcVar13;
        func_0x000107786360();
        func_0x00010778657c();
        func_0x000107786470();
        func_0x00010778643c();
        func_0x000107786334();
        if (!(bool)uVar4) {
          ___stack_chk_fail();
          __Unwind_Resume();
          *(float **)(puVar3 + -0x90) = unaff_x20;
          *(float **)(puVar3 + -0x88) = pfVar5;
          *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x78) = &UNK_107784fbc;
          func_0x000107269c1c(puVar3 + -0xa0);
          if (*(char *)(param_3 + 2) == '\x01') {
            func_0x0001077867e0(*(undefined8 *)param_3);
            func_0x000107785078(puVar3 + -0xc0);
          }
          if (*(char *)(param_3 + 6) == '\x01') {
            func_0x0001077867e0(*(undefined8 *)(param_3 + 4));
            func_0x0001077850a0(puVar3 + -0xc0,puVar3 + -0xa0,"delay",puVar3 + -0xa8);
          }
          uVar16 = *(undefined8 *)(puVar3 + -0x98);
          uVar15 = *(undefined8 *)(puVar3 + -0xa0);
          *(undefined8 *)(puVar3 + -0xa0) = 0;
          *(undefined8 *)(puVar3 + -0x98) = 0;
          *extraout_x8_07 = 1;
          *(undefined8 *)(extraout_x8_07 + 4) = uVar16;
          *(undefined8 *)(extraout_x8_07 + 2) = uVar15;
          *(undefined8 *)(puVar3 + -0xd0) = 0;
          *(undefined8 *)(puVar3 + -200) = 0;
          func_0x000104c335c0(puVar3 + -0xd0);
          func_0x000104c335c0(puVar3 + -0xa0);
          return;
        }
      }
      return;
    }
  }
LAB_1077863ac:
  pfVar6[0x10] = 0.0;
  pfVar6[0x11] = 0.0;
  pfVar6[10] = 0.0;
  pfVar6[0xb] = 0.0;
  pfVar6[8] = 0.0;
  pfVar6[9] = 0.0;
  pfVar6[0xe] = 0.0;
  pfVar6[0xf] = 0.0;
  pfVar6[0xc] = 0.0;
  pfVar6[0xd] = 0.0;
  pfVar6[2] = 0.0;
  pfVar6[3] = 0.0;
  pfVar6[0] = 0.0;
  pfVar6[1] = 0.0;
  pfVar6[6] = 0.0;
  pfVar6[7] = 0.0;
  pfVar6[4] = 0.0;
  pfVar6[5] = 0.0;
  *pfVar6 = 9.80909e-45;
  return;
}



/* Entry: 107784f0c; end: 107784f3b;  */

void FUN_107784f0c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [72];
  
  if (*(int *)(param_2 + 0x98) == 0) {
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)param_1 = 7;
    return;
  }
  puVar2 = (undefined8 *)(param_2 + 8);
  uVar1 = *(int *)(param_2 + 0x98) == 1;
  if ((bool)uVar1) {
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x000107786380();
    func_0x00010775f12c(auStack_68);
    func_0x000107786470();
    func_0x00010778647c(1);
    func_0x000107786334();
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = &LAB_107784f80;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_70;
    param_3 = puVar2;
    param_1 = extraout_x8;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107786360();
  func_0x00010778657c();
  func_0x000107786470();
  func_0x00010778643c();
  func_0x000107786334();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x88) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x78) = &UNK_107784fbc;
  func_0x000107269c1c((undefined1 *)((long)register0x00000008 + -0xa0));
  if (*(char *)(param_3 + 1) == '\x01') {
    func_0x0001077867e0(*param_3);
    func_0x000107785078((undefined1 *)((long)register0x00000008 + -0xc0));
  }
  if (*(char *)(param_3 + 3) == '\x01') {
    func_0x0001077867e0(param_3[2]);
    func_0x0001077850a0((undefined1 *)((long)register0x00000008 + -0xc0),
                        (undefined1 *)((long)register0x00000008 + -0xa0),"delay",
                        (undefined1 *)((long)register0x00000008 + -0xa8));
  }
  uVar4 = *(undefined8 *)((long)register0x00000008 + -0x98);
  uVar3 = *(undefined8 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
  *extraout_x8_00 = 1;
  *(undefined8 *)(extraout_x8_00 + 4) = uVar4;
  *(undefined8 *)(extraout_x8_00 + 2) = uVar3;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
  *(undefined8 *)((long)register0x00000008 + -200) = 0;
  func_0x000104c335c0((undefined1 *)((long)register0x00000008 + -0xd0));
  func_0x000104c335c0((undefined1 *)((long)register0x00000008 + -0xa0));
  return;
}



/* Entry: 107785108; end: 107785147;  */

void FUN_107785108(undefined8 param_1,ulong param_2)

{
  func_0x000107786630();
  func_0x00010775e288();
  if ((param_2 & 1) != 0) {
    func_0x0001077866c4();
    func_0x000107785148();
  }
  func_0x0001077865ec();
  return;
}



/* Entry: 107785230; end: 107785257;  */

void FUN_107785230(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_4;
  uStack_20 = *param_5;
  func_0x00010778527c(*(long *)(param_1 + 8) + param_2 * 0x78,&uStack_18,&uStack_20);
  return;
}



/* Entry: 107785428; end: 107785477;  */

uint FUN_107785428(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  func_0x00010750c678();
  uVar2 = uVar1;
  func_0x00010750c678(param_2);
  func_0x00010006725c(param_1,uVar1,param_2,uVar2);
  return (uint)param_1 >> 7 & 1;
}



/* Entry: 1077855c4; end: 1077855d3;  */

void FUN_1077855c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001077855cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1077858cc; end: 1077858eb;  */

void FUN_1077858cc(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001077858ec(&uStack_18);
  return;
}



/* Entry: 107785a50; end: 107785adf;  */

void FUN_107785a50(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 107785cb0; end: 107785cc3;  */

void FUN_107785cb0(long *param_1)

{
  if (*(int *)(*param_1 + 0x40) != 0) {
    func_0x000107786568();
    func_0x000107785cec();
  }
  return;
}



/* Entry: 107785d90; end: 107785dc3;  */

void FUN_107785d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x40) == 2) {
    func_0x000107494560(param_2,param_3);
    func_0x0001072f6188();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
    *(undefined1 *)(unaff_x20 + 0x38) = uVar1;
    return;
  }
  func_0x000107786568();
  func_0x000107785dc4();
  return;
}



/* Entry: 107785ef8; end: 107785f1b;  */

void FUN_107785ef8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x0001072ca524(lVar1);
  *(undefined4 *)(lVar1 + 0x38) = 0;
  return;
}



/* Entry: 107786000; end: 10778600b;  */

void FUN_107786000(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000107786544(*param_1,param_1[1]);
  func_0x0001072ca524();
  func_0x0001077866f4();
  func_0x000107339958();
  *(undefined4 *)(unaff_x20 + 0x38) = 2;
  return;
}



/* Entry: 10778617c; end: 1077861a3;  */

void FUN_10778617c(long param_1)

{
  if (*(int *)(param_1 + 0x90) != 0) {
    func_0x000107786568();
    func_0x0001077861a4();
  }
  return;
}



/* Entry: 1077862d0; end: 107786333;  */

/* WARNING: Possible PIC construction at 0x000107786300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107786304) */
/* WARNING: Removing unreachable block (ram,0x000107786318) */
/* WARNING: Removing unreachable block (ram,0x000107786330) */
/* WARNING: Removing unreachable block (ram,0x000107786308) */

void FUN_1077862d0(long param_1)

{
  undefined1 auStack_b8 [152];
  
  func_0x0001077863c8();
  func_0x0001073dee98(auStack_b8,*(undefined8 *)(param_1 + 8));
  func_0x000107786538();
  func_0x0001074832ec();
  func_0x0001072ca3d4(auStack_b8);
  return;
}



/* Entry: 107786964; end: 107786977;  */

void FUN_107786964(void)

{
  func_0x000107786938();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107786b1c; end: 107786b1f;  */

undefined8 * FUN_107786b1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d6e58;
  func_0x00010778350c(param_1 + 6);
  func_0x000107783268(param_1 + 3);
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 107786d88; end: 107786db7;  */

undefined8 * FUN_107786d88(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xa3d70a3d70a3d8) {
    puVar1 = (undefined8 *)(param_2 * 400);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d7408;
  func_0x000107786e24(param_1 + 3);
  return param_1;
}



/* Entry: 107786ed8; end: 107786f2f;  */

void FUN_107786ed8(void)

{
  long in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1077870c8; end: 1077870cb;  */

void FUN_1077870c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077871e4; end: 1077871f7;  */

void FUN_1077871e4(void)

{
  FUN_107781c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10778ac78; end: 10778acaf;  */

void FUN_10778ac78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  undefined1 uStack_11;
  
  func_0x00010755ac94(&uStack_11,param_1,param_2,param_3,*param_4,*param_5);
  return;
}



/* Entry: 10778b19c; end: 10778b1c3;  */

undefined1 *
FUN_10778b19c(undefined1 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  uVar2 = *param_2 == '\0';
  puVar1 = &DAT_10f42a7a5;
  if ((bool)uVar2) {
    puVar1 = &DAT_10f42a7a1;
  }
  uVar4 = SUB81(auStack_60,0);
  puVar3 = auStack_60;
  func_0x00010724cc70(param_1,puVar1);
  uStack_28 = extraout_x8;
  func_0x000100060964(auStack_60);
  func_0x000104c33004(param_1);
  func_0x000104c2f714();
  func_0x00010724cc40(uStack_28);
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  *puVar3 = uVar4;
  puVar3[1] = param_6;
  *(undefined2 *)(puVar3 + 2) = 0;
  func_0x000104c2fe00(puVar3 + 8,param_4);
  puVar3[0x40] = 0;
  puVar3[0x78] = 0;
  func_0x00010724af54(puVar3 + 0x80,param_5);
  func_0x00010724afdc(puVar3 + 0xd0,param_7);
  puVar3[0x110] = 0;
  puVar3[0x118] = 0;
  puVar3[0x120] = 0;
  puVar3[0x128] = 0;
  puVar3[0x130] = 0;
  puVar3[0x148] = 0;
  puVar3[0x170] = 0;
  puVar3[0x1a8] = 0;
  *(undefined2 *)(puVar3 + 0x1b0) = 0;
  *(undefined8 *)(puVar3 + 0x158) = 0;
  *(undefined8 *)(puVar3 + 0x160) = 0;
  *(undefined8 *)(puVar3 + 0x150) = 0;
  puVar3[0x168] = 0;
  *(undefined8 *)(puVar3 + 0x1c0) = 0;
  *(undefined8 *)(puVar3 + 0x1b8) = 0;
  *(undefined8 *)(puVar3 + 0x1d0) = 0;
  *(undefined8 *)(puVar3 + 0x1c8) = 0;
  *(undefined8 *)(puVar3 + 0x1e0) = 0;
  *(undefined8 *)(puVar3 + 0x1d8) = 0;
  *(undefined8 *)(puVar3 + 0x1e8) = 0;
  *(undefined4 *)(puVar3 + 0x1f0) = 0x3f800000;
  return puVar3;
}



/* Entry: 10778b3e8; end: 10778b43f;  */

undefined1 * FUN_10778b3e8(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined8 uStack_88;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar1 = auStack_60;
  func_0x00010778c620(param_1,param_1);
  uStack_28 = extraout_x8;
  func_0x000104c2fe00(auStack_60);
  func_0x000104c33004();
  func_0x000104c2f714();
  func_0x00010778c57c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010778c620();
  func_0x00010778c7e0();
  func_0x00010778c980();
  func_0x00010778c758();
  func_0x00010778c738(2);
  func_0x00010778c57c(uStack_88);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (puVar1[0x38] == '\x01') {
    func_0x00010748aaa4(puVar1);
  }
  return puVar1;
}



/* Entry: 10778b64c; end: 10778b64f;  */

void FUN_10778b64c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d7e58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10778bbf8; end: 10778bc17;  */

void FUN_10778bbf8(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x00010778bc18(&uStack_18);
  return;
}



/* Entry: 10778bd90; end: 10778bdef;  */

void FUN_10778bd90(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 10778bfc0; end: 10778bfeb;  */

void FUN_10778bfc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    lStack_20 = param_1;
    uStack_18 = param_3;
    func_0x00010778bfec(&lStack_20);
  }
  return;
}



/* Entry: 10778c0cc; end: 10778c0f3;  */

void FUN_10778c0cc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010778c87c();
  func_0x0001072f6188();
  *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 10778c270; end: 10778c2e7;  */

void FUN_10778c270(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x30) != 0) {
    func_0x00010748a94c(lVar1);
    *(undefined4 *)(lVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10778c4f8; end: 10778c563;  */

void FUN_10778c4f8(long *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x50) == 2) {
    func_0x00010778ca54();
    uVar1 = *(undefined1 *)(param_3 + 0x48);
    uVar4 = *(undefined8 *)(param_3 + 0x40);
    uVar3 = *(undefined8 *)(param_3 + 0x38);
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(param_2 + 0x28) = uVar5;
    *(undefined8 *)(param_2 + 0x40) = uVar4;
    *(undefined8 *)(param_2 + 0x38) = uVar3;
    *(undefined1 *)(param_2 + 0x48) = uVar1;
  }
  else {
    func_0x00010748a890(lVar2);
    func_0x00010748d914(lVar2,param_3);
    *(undefined4 *)(lVar2 + 0x50) = 2;
  }
  return;
}



/* Entry: 10778d1ec; end: 10778d263;  */

uint FUN_10778d1ec(uint param_1)

{
  func_0x000107786038();
  return param_1 ^ 1;
}



/* Entry: 10778d47c; end: 10778d4e7;  */

undefined8 * FUN_10778d47c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x00010778d4e8(auStack_40,param_2,param_3);
  FUN_10778f000(auStack_30,auStack_40);
  func_0x000107781b94(param_1,auStack_30);
  func_0x00010778fa34();
  func_0x00010778f8f0();
  *param_1 = &PTR_DAT_1109d8080;
  return param_1;
}



/* Entry: 10778dba0; end: 10778dc67;  */

/* WARNING: Possible PIC construction at 0x00010778dbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010778df94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778dbf4) */
/* WARNING: Removing unreachable block (ram,0x00010778dbfc) */
/* WARNING: Removing unreachable block (ram,0x00010778dc14) */
/* WARNING: Removing unreachable block (ram,0x00010778df98) */
/* WARNING: Removing unreachable block (ram,0x00010778dfb0) */
/* WARNING: Removing unreachable block (ram,0x00010778dfbc) */
/* WARNING: Removing unreachable block (ram,0x00010778e068) */
/* WARNING: Removing unreachable block (ram,0x00010778e074) */
/* WARNING: Removing unreachable block (ram,0x00010778e684) */
/* WARNING: Removing unreachable block (ram,0x00010778e68c) */
/* WARNING: Removing unreachable block (ram,0x00010778e6a0) */
/* WARNING: Removing unreachable block (ram,0x00010778e088) */
/* WARNING: Removing unreachable block (ram,0x00010778e6a8) */
/* WARNING: Removing unreachable block (ram,0x00010778e6b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e6c0) */
/* WARNING: Removing unreachable block (ram,0x00010778e9d0) */
/* WARNING: Removing unreachable block (ram,0x00010778e6c8) */
/* WARNING: Removing unreachable block (ram,0x00010778e9dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e094) */
/* WARNING: Removing unreachable block (ram,0x00010778e6e8) */
/* WARNING: Removing unreachable block (ram,0x00010778e6f8) */
/* WARNING: Removing unreachable block (ram,0x00010778e700) */
/* WARNING: Removing unreachable block (ram,0x00010778e9e8) */
/* WARNING: Removing unreachable block (ram,0x00010778e708) */
/* WARNING: Removing unreachable block (ram,0x00010778e9f4) */
/* WARNING: Removing unreachable block (ram,0x00010778e09c) */
/* WARNING: Removing unreachable block (ram,0x00010778e0ac) */
/* WARNING: Removing unreachable block (ram,0x00010778e0b4) */
/* WARNING: Removing unreachable block (ram,0x00010778e9b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e0bc) */
/* WARNING: Removing unreachable block (ram,0x00010778e9c4) */
/* WARNING: Removing unreachable block (ram,0x00010778e9fc) */
/* WARNING: Removing unreachable block (ram,0x00010778ea00) */
/* WARNING: Removing unreachable block (ram,0x00010778dfd4) */
/* WARNING: Removing unreachable block (ram,0x00010778e044) */
/* WARNING: Removing unreachable block (ram,0x00010778e04c) */
/* WARNING: Removing unreachable block (ram,0x00010778e060) */
/* WARNING: Removing unreachable block (ram,0x00010778dff0) */
/* WARNING: Removing unreachable block (ram,0x00010778e120) */
/* WARNING: Removing unreachable block (ram,0x00010778e134) */
/* WARNING: Removing unreachable block (ram,0x00010778e13c) */
/* WARNING: Removing unreachable block (ram,0x00010778e7dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e144) */
/* WARNING: Removing unreachable block (ram,0x00010778e7e8) */
/* WARNING: Removing unreachable block (ram,0x00010778dff8) */
/* WARNING: Removing unreachable block (ram,0x00010778e0dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e0f0) */
/* WARNING: Removing unreachable block (ram,0x00010778e0f8) */
/* WARNING: Removing unreachable block (ram,0x00010778e7c4) */
/* WARNING: Removing unreachable block (ram,0x00010778e100) */
/* WARNING: Removing unreachable block (ram,0x00010778e7d0) */
/* WARNING: Removing unreachable block (ram,0x00010778e000) */
/* WARNING: Removing unreachable block (ram,0x00010778e164) */
/* WARNING: Removing unreachable block (ram,0x00010778e17c) */
/* WARNING: Removing unreachable block (ram,0x00010778e194) */
/* WARNING: Removing unreachable block (ram,0x00010778e1fc) */
/* WARNING: Removing unreachable block (ram,0x00010778e204) */
/* WARNING: Removing unreachable block (ram,0x00010778e218) */
/* WARNING: Removing unreachable block (ram,0x00010778e1a8) */
/* WARNING: Removing unreachable block (ram,0x00010778e220) */
/* WARNING: Removing unreachable block (ram,0x00010778e234) */
/* WARNING: Removing unreachable block (ram,0x00010778e23c) */
/* WARNING: Removing unreachable block (ram,0x00010778e860) */
/* WARNING: Removing unreachable block (ram,0x00010778e244) */
/* WARNING: Removing unreachable block (ram,0x00010778e86c) */
/* WARNING: Removing unreachable block (ram,0x00010778e1b0) */
/* WARNING: Removing unreachable block (ram,0x00010778e264) */
/* WARNING: Removing unreachable block (ram,0x00010778e2e4) */
/* WARNING: Removing unreachable block (ram,0x00010778e360) */
/* WARNING: Removing unreachable block (ram,0x00010778e368) */
/* WARNING: Removing unreachable block (ram,0x00010778e2f8) */
/* WARNING: Removing unreachable block (ram,0x00010778e30c) */
/* WARNING: Removing unreachable block (ram,0x00010778e314) */
/* WARNING: Removing unreachable block (ram,0x00010778e728) */
/* WARNING: Removing unreachable block (ram,0x00010778e31c) */
/* WARNING: Removing unreachable block (ram,0x00010778e734) */
/* WARNING: Removing unreachable block (ram,0x00010778e278) */
/* WARNING: Removing unreachable block (ram,0x00010778e280) */
/* WARNING: Removing unreachable block (ram,0x00010778e33c) */
/* WARNING: Removing unreachable block (ram,0x00010778e344) */
/* WARNING: Removing unreachable block (ram,0x00010778e358) */
/* WARNING: Removing unreachable block (ram,0x00010778e294) */
/* WARNING: Removing unreachable block (ram,0x00010778e378) */
/* WARNING: Removing unreachable block (ram,0x00010778e38c) */
/* WARNING: Removing unreachable block (ram,0x00010778e394) */
/* WARNING: Removing unreachable block (ram,0x00010778e828) */
/* WARNING: Removing unreachable block (ram,0x00010778e39c) */
/* WARNING: Removing unreachable block (ram,0x00010778e830) */
/* WARNING: Removing unreachable block (ram,0x00010778e29c) */
/* WARNING: Removing unreachable block (ram,0x00010778e3b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e4b0) */
/* WARNING: Removing unreachable block (ram,0x00010778e5f8) */
/* WARNING: Removing unreachable block (ram,0x00010778e600) */
/* WARNING: Removing unreachable block (ram,0x00010778e614) */
/* WARNING: Removing unreachable block (ram,0x00010778e4c4) */
/* WARNING: Removing unreachable block (ram,0x00010778e4d8) */
/* WARNING: Removing unreachable block (ram,0x00010778e4e0) */
/* WARNING: Removing unreachable block (ram,0x00010778e764) */
/* WARNING: Removing unreachable block (ram,0x00010778e4e8) */
/* WARNING: Removing unreachable block (ram,0x00010778e76c) */
/* WARNING: Removing unreachable block (ram,0x00010778e774) */
/* WARNING: Removing unreachable block (ram,0x00010778e778) */
/* WARNING: Removing unreachable block (ram,0x00010778e3cc) */
/* WARNING: Removing unreachable block (ram,0x00010778e450) */
/* WARNING: Removing unreachable block (ram,0x00010778e5d4) */
/* WARNING: Removing unreachable block (ram,0x00010778e5dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e5e8) */
/* WARNING: Removing unreachable block (ram,0x00010778e5f0) */
/* WARNING: Removing unreachable block (ram,0x00010778e46c) */
/* WARNING: Removing unreachable block (ram,0x00010778e480) */
/* WARNING: Removing unreachable block (ram,0x00010778e488) */
/* WARNING: Removing unreachable block (ram,0x00010778e740) */
/* WARNING: Removing unreachable block (ram,0x00010778e490) */
/* WARNING: Removing unreachable block (ram,0x00010778e74c) */
/* WARNING: Removing unreachable block (ram,0x00010778e754) */
/* WARNING: Removing unreachable block (ram,0x00010778e758) */
/* WARNING: Removing unreachable block (ram,0x00010778e3d4) */
/* WARNING: Removing unreachable block (ram,0x00010778e504) */
/* WARNING: Removing unreachable block (ram,0x00010778e61c) */
/* WARNING: Removing unreachable block (ram,0x00010778e624) */
/* WARNING: Removing unreachable block (ram,0x00010778e638) */
/* WARNING: Removing unreachable block (ram,0x00010778e520) */
/* WARNING: Removing unreachable block (ram,0x00010778e534) */
/* WARNING: Removing unreachable block (ram,0x00010778e53c) */
/* WARNING: Removing unreachable block (ram,0x00010778e784) */
/* WARNING: Removing unreachable block (ram,0x00010778e544) */
/* WARNING: Removing unreachable block (ram,0x00010778e78c) */
/* WARNING: Removing unreachable block (ram,0x00010778e794) */
/* WARNING: Removing unreachable block (ram,0x00010778e798) */
/* WARNING: Removing unreachable block (ram,0x00010778e3dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e560) */
/* WARNING: Removing unreachable block (ram,0x00010778e664) */
/* WARNING: Removing unreachable block (ram,0x00010778e584) */
/* WARNING: Removing unreachable block (ram,0x00010778e590) */
/* WARNING: Removing unreachable block (ram,0x00010778e8f0) */
/* WARNING: Removing unreachable block (ram,0x00010778e8f8) */
/* WARNING: Removing unreachable block (ram,0x00010778ea58) */
/* WARNING: Removing unreachable block (ram,0x00010778e900) */
/* WARNING: Removing unreachable block (ram,0x00010778e974) */
/* WARNING: Removing unreachable block (ram,0x00010778e97c) */
/* WARNING: Removing unreachable block (ram,0x00010778eaa8) */
/* WARNING: Removing unreachable block (ram,0x00010778e984) */
/* WARNING: Removing unreachable block (ram,0x00010778e940) */
/* WARNING: Removing unreachable block (ram,0x00010778e948) */
/* WARNING: Removing unreachable block (ram,0x00010778ea8c) */
/* WARNING: Removing unreachable block (ram,0x00010778e950) */
/* WARNING: Removing unreachable block (ram,0x00010778e884) */
/* WARNING: Removing unreachable block (ram,0x00010778e88c) */
/* WARNING: Removing unreachable block (ram,0x00010778ea34) */
/* WARNING: Removing unreachable block (ram,0x00010778e894) */
/* WARNING: Removing unreachable block (ram,0x00010778e8cc) */
/* WARNING: Removing unreachable block (ram,0x00010778e8d4) */
/* WARNING: Removing unreachable block (ram,0x00010778ea4c) */
/* WARNING: Removing unreachable block (ram,0x00010778e8dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e8a8) */
/* WARNING: Removing unreachable block (ram,0x00010778e8b0) */
/* WARNING: Removing unreachable block (ram,0x00010778ea40) */
/* WARNING: Removing unreachable block (ram,0x00010778e8b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e914) */
/* WARNING: Removing unreachable block (ram,0x00010778e91c) */
/* WARNING: Removing unreachable block (ram,0x00010778ea78) */
/* WARNING: Removing unreachable block (ram,0x00010778e924) */
/* WARNING: Removing unreachable block (ram,0x00010778e5a8) */
/* WARNING: Removing unreachable block (ram,0x00010778e5b0) */
/* WARNING: Removing unreachable block (ram,0x00010778ea64) */
/* WARNING: Removing unreachable block (ram,0x00010778ea9c) */
/* WARNING: Removing unreachable block (ram,0x00010778e5b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e968) */
/* WARNING: Removing unreachable block (ram,0x00010778e994) */
/* WARNING: Removing unreachable block (ram,0x00010778e9a8) */
/* WARNING: Removing unreachable block (ram,0x00010778e9ac) */
/* WARNING: Removing unreachable block (ram,0x00010778e3e4) */
/* WARNING: Removing unreachable block (ram,0x00010778e640) */
/* WARNING: Removing unreachable block (ram,0x00010778e648) */
/* WARNING: Removing unreachable block (ram,0x00010778e65c) */
/* WARNING: Removing unreachable block (ram,0x00010778e410) */
/* WARNING: Removing unreachable block (ram,0x00010778e424) */
/* WARNING: Removing unreachable block (ram,0x00010778e42c) */
/* WARNING: Removing unreachable block (ram,0x00010778e7a4) */
/* WARNING: Removing unreachable block (ram,0x00010778e434) */
/* WARNING: Removing unreachable block (ram,0x00010778e7ac) */
/* WARNING: Removing unreachable block (ram,0x00010778e7b4) */
/* WARNING: Removing unreachable block (ram,0x00010778e7b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e2a4) */
/* WARNING: Removing unreachable block (ram,0x00010778e2b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e2c0) */
/* WARNING: Removing unreachable block (ram,0x00010778e814) */
/* WARNING: Removing unreachable block (ram,0x00010778e2c8) */
/* WARNING: Removing unreachable block (ram,0x00010778e81c) */
/* WARNING: Removing unreachable block (ram,0x00010778e838) */
/* WARNING: Removing unreachable block (ram,0x00010778e83c) */
/* WARNING: Removing unreachable block (ram,0x00010778e1b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e1cc) */
/* WARNING: Removing unreachable block (ram,0x00010778e1d4) */
/* WARNING: Removing unreachable block (ram,0x00010778e848) */
/* WARNING: Removing unreachable block (ram,0x00010778e1dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e854) */
/* WARNING: Removing unreachable block (ram,0x00010778e874) */
/* WARNING: Removing unreachable block (ram,0x00010778e878) */
/* WARNING: Removing unreachable block (ram,0x00010778e004) */
/* WARNING: Removing unreachable block (ram,0x00010778e018) */
/* WARNING: Removing unreachable block (ram,0x00010778e020) */
/* WARNING: Removing unreachable block (ram,0x00010778e7f4) */
/* WARNING: Removing unreachable block (ram,0x00010778e028) */
/* WARNING: Removing unreachable block (ram,0x00010778e7fc) */
/* WARNING: Removing unreachable block (ram,0x00010778e804) */
/* WARNING: Removing unreachable block (ram,0x00010778e808) */
/* WARNING: Removing unreachable block (ram,0x00010778ea08) */
/* WARNING: Removing unreachable block (ram,0x00010778ea0c) */
/* WARNING: Removing unreachable block (ram,0x00010778dfa4) */
/* WARNING: Removing unreachable block (ram,0x00010778ea10) */
/* WARNING: Removing unreachable block (ram,0x00010778eab4) */
/* WARNING: Removing unreachable block (ram,0x00010778eabc) */
/* WARNING: Removing unreachable block (ram,0x00010778eb8c) */
/* WARNING: Removing unreachable block (ram,0x00010778ebc8) */
/* WARNING: Removing unreachable block (ram,0x00010778ea1c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Removing unreachable block (ram,0x00010778dc24) */
/* WARNING: Removing unreachable block (ram,0x00010778dc30) */
/* WARNING: Removing unreachable block (ram,0x00010778dc48) */

long * FUN_10778dba0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long alStack_280 [2];
  long *plStack_270;
  undefined1 ***pppuStack_260;
  undefined *puStack_258;
  long lStack_220;
  ulong uStack_218;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  long alStack_90 [8];
  undefined1 uStack_50;
  
  plVar5 = alStack_90;
  func_0x00010778f7e4();
  func_0x000107781de4(param_1);
  uVar8 = 8;
  lVar7 = *(long *)(param_2 + 8);
  plVar6 = &lStack_100;
  uStack_98 = 0x10778dbf4;
  lStack_b0 = param_2;
  uStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010778f7e4();
  uVar4 = (int)uVar8 == 0x16;
  switch(uVar8 & 0xffffffff) {
  case 0:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(lVar7 + 0x3b0);
code_r0x000107784bf0:
      func_0x000107785298(alStack_90,plVar5,(long)&uStack_a8 + 7);
      return plVar5;
    }
    break;
  case 1:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(lVar7 + 0x410);
code_r0x000107784b28:
      func_0x000107784c0c(alStack_90,plVar5,(long)&uStack_a8 + 7);
      return plVar5;
    }
    break;
  case 2:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(lVar7 + 0x480);
code_r0x000107784b44:
      func_0x000107784cb8(alStack_90,plVar5,(long)&uStack_a8 + 7);
      return plVar5;
    }
    break;
  case 3:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(lVar7 + 0x4e8);
code_r0x000107784b60:
      func_0x000107784e48(alStack_90,plVar5,(long)&uStack_a8 + 7);
      return plVar5;
    }
    break;
  case 4:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(lVar7 + 0x548);
      goto code_r0x000107784b28;
    }
    break;
  case 5:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(lVar7 + 0x5b8);
      FUN_107784f0c(alStack_90,plVar5,(long)&uStack_a8 + 7);
      return plVar5;
    }
    break;
  case 6:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(lVar7 + 0x680);
      goto code_r0x000107784b44;
    }
    break;
  case 7:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(lVar7 + 0x6e8);
      func_0x00010778b120(alStack_90,plVar5,(long)&uStack_a8 + 7);
      return plVar5;
    }
    break;
  case 8:
    func_0x00010778f978(lVar7 + 1000);
    func_0x00010778f7d8();
    goto code_r0x00010778df38;
  case 9:
    func_0x00010778f978(lVar7 + 0x458);
    func_0x00010778f7d8();
    goto code_r0x00010778df38;
  case 10:
    uStack_f8 = *(undefined8 *)(lVar7 + 0x4c8);
    lStack_100 = *(long *)(lVar7 + 0x4c0);
    uStack_e8 = *(undefined8 *)(lVar7 + 0x4d8);
    uStack_f0 = *(undefined8 *)(lVar7 + 0x4d0);
    uStack_e0 = *(undefined8 *)(lVar7 + 0x4e0);
    func_0x00010778f7d8();
    goto code_r0x00010778df38;
  case 0xb:
    uStack_f8 = *(undefined8 *)(lVar7 + 0x528);
    lStack_100 = *(long *)(lVar7 + 0x520);
    uStack_e8 = *(undefined8 *)(lVar7 + 0x538);
    uStack_f0 = *(undefined8 *)(lVar7 + 0x530);
    uStack_e0 = *(undefined8 *)(lVar7 + 0x540);
    func_0x00010778f7d8();
    goto code_r0x00010778df38;
  case 0xc:
    uStack_f8 = *(undefined8 *)(lVar7 + 0x598);
    lStack_100 = *(long *)(lVar7 + 0x590);
    uStack_e8 = *(undefined8 *)(lVar7 + 0x5a8);
    uStack_f0 = *(undefined8 *)(lVar7 + 0x5a0);
    uStack_e0 = *(undefined8 *)(lVar7 + 0x5b0);
    func_0x00010778f7d8();
    goto code_r0x00010778df38;
  case 0xd:
    func_0x00010778f978(lVar7 + 0x658);
    func_0x00010778f7d8();
    goto code_r0x00010778df38;
  case 0xe:
    uStack_f8 = *(undefined8 *)(lVar7 + 0x6c8);
    lStack_100 = *(long *)(lVar7 + 0x6c0);
    uStack_e8 = *(undefined8 *)(lVar7 + 0x6d8);
    uStack_f0 = *(undefined8 *)(lVar7 + 0x6d0);
    uStack_e0 = *(undefined8 *)(lVar7 + 0x6e0);
    func_0x00010778f7d8();
    goto code_r0x00010778df38;
  case 0xf:
    uStack_f8 = *(undefined8 *)(lVar7 + 0x728);
    lStack_100 = *(long *)(lVar7 + 0x720);
    uStack_e8 = *(undefined8 *)(lVar7 + 0x738);
    uStack_f0 = *(undefined8 *)(lVar7 + 0x730);
    uStack_e0 = *(undefined8 *)(lVar7 + 0x740);
    func_0x00010778f7d8();
    goto code_r0x00010778df38;
  case 0x10:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(lVar7 + 0x168);
      goto code_r0x000107784bf0;
    }
    break;
  case 0x11:
    if (*(int *)(lVar7 + 0x1d0) == 0) goto code_r0x00010778de08;
    uVar4 = *(int *)(lVar7 + 0x1d0) == 1;
    if ((bool)uVar4) {
      puVar1 = &UNK_1109df618;
      if (*(char *)(lVar7 + 0x1a0) != '\x01') {
        puVar1 = &UNK_1109df628;
      }
      uVar4 = *(char *)(lVar7 + 0x1a0) == '\0';
      puVar2 = &UNK_1109df608;
      if (!(bool)uVar4) {
        puVar2 = puVar1;
      }
      lVar7 = *(long *)(puVar2 + 8);
      func_0x00010724ae4c();
      func_0x00010778fa28();
      uStack_50 = 1;
    }
    else {
      plVar6 = *(long **)(lVar7 + 0x1a0);
      (**(code **)(*plVar6 + 0x28))(&lStack_100);
      func_0x00010778fa28();
      uStack_50 = 2;
    }
    func_0x00010778fa10();
    plVar5 = plVar6;
    goto code_r0x00010778df38;
  case 0x12:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(lVar7 + 0x1d8);
      goto code_r0x000107784bf0;
    }
    break;
  case 0x13:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(lVar7 + 0x210);
      goto code_r0x000107784b60;
    }
    break;
  case 0x14:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(lVar7 + 0x248);
code_r0x00010778b104:
      func_0x00010778b36c(alStack_90,plVar5,(long)&uStack_a8 + 7);
      return plVar5;
    }
    break;
  case 0x15:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(lVar7 + 0x2c0);
      goto code_r0x00010778b104;
    }
    break;
  case 0x16:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(lVar7 + 0x338);
      goto code_r0x00010778b104;
    }
    break;
  default:
code_r0x00010778de08:
    func_0x00010778f944();
code_r0x00010778df38:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      return plVar5;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_108 = &DAT_10778df50;
  ppuStack_110 = &puStack_a0;
  func_0x00010778f7e4();
  plVar6 = alStack_280;
  iVar3 = (int)alStack_280;
  puStack_258 = &UNK_10778df98;
  plStack_270 = plVar5;
  pppuStack_260 = &ppuStack_110;
  lStack_220 = lVar7;
  uStack_218 = uVar8;
  func_0x00010772d2fc(alStack_280,&lStack_220);
  func_0x00010778f938();
  func_0x000107785358();
  if ((plVar6 == (long *)&UNK_1109d8320) || (func_0x000107785400(alStack_280,plVar6), iVar3 != 0)) {
    plVar6 = (long *)&UNK_1109d8320;
  }
  return plVar6;
}



/* Entry: 10778eedc; end: 10778ef03;  */

long FUN_10778eedc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x00010778ef04();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10778f000; end: 10778f037;  */

undefined8 * FUN_10778f000(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001073dcd34(&uStack_30);
  return param_1;
}



/* Entry: 10778f25c; end: 10778f293;  */

undefined8 FUN_10778f25c(undefined8 param_1,ulong *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong extraout_x8;
  long extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  byte *pbVar5;
  undefined1 *puVar6;
  char *pcVar7;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar8;
  
  uVar8 = *param_2;
  uVar4 = uVar8;
  _strlen();
  func_0x00010734ac28(param_1,uVar8,uVar4,0);
  func_0x000107349544();
  func_0x00010734ac10();
  func_0x000107349658();
  func_0x00010734ab28(0);
  *(undefined8 *)(extraout_x9 + 0x18) = extraout_x11;
  *extraout_x10 = 0x22;
  for (uVar8 = extraout_x8; uVar8 < (uVar4 & 0xffffffff); uVar8 = uVar8 + 1) {
    bVar1 = *(byte *)(unaff_x20 + uVar8);
    cVar2 = (&UNK_10de4e441)[bVar1];
    pbVar5 = *(byte **)(*unaff_x19 + 0x18);
    *(byte **)(*unaff_x19 + 0x18) = pbVar5 + 1;
    if (cVar2 == '\0') {
      *pbVar5 = bVar1;
    }
    else {
      *pbVar5 = 0x5c;
      pcVar7 = *(char **)(*unaff_x19 + 0x18);
      *(char **)(*unaff_x19 + 0x18) = pcVar7 + 1;
      *pcVar7 = cVar2;
      if (cVar2 == 'u') {
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = 0x30;
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = 0x30;
        uVar3 = (&UNK_10de4e431)[bVar1 >> 4];
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = uVar3;
        uVar3 = (&UNK_10de4e431)[(ulong)bVar1 & 0xf];
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = uVar3;
      }
    }
  }
  func_0x00010734aa78();
  *extraout_x9_00 = 0x22;
  return 1;
}



/* Entry: 10778f418; end: 10778f45f;  */

void FUN_10778f418(undefined8 param_1,undefined8 *param_2)

{
  func_0x000107785b28(*param_2);
  func_0x00010778f884();
  return;
}



/* Entry: 10778f6dc; end: 10778facf;  */

void FUN_10778f6dc(void)

{
  return;
}



/* Entry: 10778fdc8; end: 10778fdef;  */

undefined8 * FUN_10778fdc8(undefined8 *param_1)

{
  func_0x0001073df8c4(param_1 + 5);
  *param_1 = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 10778ff3c; end: 10778ff63;  */

long FUN_10778ff3c(long param_1)

{
  long lVar1;
  
  _bzero(param_1,0xc0);
  lVar1 = param_1;
  func_0x0001073df1c8();
  func_0x0001073df1c8(lVar1 + 0x60);
  return param_1;
}



/* Entry: 107790410; end: 1077905b3;  */

undefined8 FUN_107790410(long param_1,undefined8 *param_2)

{
  func_0x00010734936c(param_2);
  if (*(int *)(param_1 + 0x198) != 0) {
    FUN_10779189c(&DAT_10f428710);
    func_0x000107791924();
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    FUN_10779189c(&DAT_10f4286bc);
    func_0x000107791924();
  }
  if (*(int *)(param_1 + 0x208) != 0) {
    FUN_10779189c(&DAT_10f428776);
    func_0x000107791924();
  }
  if (*(int *)(param_1 + 0x240) != 0) {
    FUN_10779189c(&DAT_10f428837);
    func_0x000107791924();
  }
  if (*(int *)(param_1 + 0x278) != 0) {
    FUN_10779189c(&DAT_10f4287c6);
    func_0x000107791924();
  }
  if (*(int *)(param_1 + 0x2b0) != 0) {
    FUN_10779189c(&DAT_10f428695);
    func_0x000107791924();
  }
  if (*(int *)(param_1 + 0x2e8) != 0) {
    FUN_10779189c(&DAT_10f428823);
    func_0x000107791924();
  }
  if (*(int *)(param_1 + 800) != 0) {
    FUN_10779189c(&DAT_10f428756);
    func_0x000107791924();
  }
  if (*(int *)(param_1 + 0x358) != 0) {
    FUN_10779189c(&DAT_10f4286f0);
    func_0x000107791924();
  }
  if (*(int *)(param_1 + 0x390) != 0) {
    FUN_10779189c(&DAT_10f428736);
    func_0x000107791924();
  }
  if (*(int *)(param_1 + 0x3c8) != 0) {
    FUN_10779189c(&DAT_10f428798);
    func_0x000107791924();
  }
  if (*(int *)(param_1 + 0x400) != 0) {
    FUN_10779189c(&DAT_10f428869);
    func_0x000107791924();
  }
  if (*(int *)(param_1 + 0x438) != 0) {
    FUN_10779189c(&DAT_10f428686);
    func_0x000107791924();
  }
  param_2[4] = param_2[4] + -0x10;
  func_0x000107349610(*param_2,0x7d);
  return 1;
}



/* Entry: 107791374; end: 1077913af;  */

void FUN_107791374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  undefined1 uStack_11;
  
  func_0x000107532864(&uStack_11,param_1,param_2,param_3,*param_4,*param_5);
  return;
}



/* Entry: 107791680; end: 1077916af;  */

undefined8 * FUN_107791680(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x33d91d2a2067b3) {
    puVar1 = (undefined8 *)(param_2 * 0x4f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d8730;
  func_0x000107791718(param_1 + 3);
  return param_1;
}



/* Entry: 10779189c; end: 107791a87;  */

undefined8 FUN_10779189c(ulong param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  ulong extraout_x8;
  ulong uVar4;
  long extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  byte *pbVar5;
  undefined1 *puVar6;
  char *pcVar7;
  long *unaff_x19;
  long unaff_x20;
  ulong uStack0000000000000008;
  
  uStack0000000000000008 = param_1;
  _strlen();
  func_0x00010734ac28();
  func_0x000107349544();
  func_0x00010734ac10();
  func_0x000107349658();
  func_0x00010734ab28(0);
  *(undefined8 *)(extraout_x9 + 0x18) = extraout_x11;
  *extraout_x10 = 0x22;
  for (uVar4 = extraout_x8; uVar4 < (param_1 & 0xffffffff); uVar4 = uVar4 + 1) {
    bVar1 = *(byte *)(unaff_x20 + uVar4);
    cVar2 = (&UNK_10de4e441)[bVar1];
    pbVar5 = *(byte **)(*unaff_x19 + 0x18);
    *(byte **)(*unaff_x19 + 0x18) = pbVar5 + 1;
    if (cVar2 == '\0') {
      *pbVar5 = bVar1;
    }
    else {
      *pbVar5 = 0x5c;
      pcVar7 = *(char **)(*unaff_x19 + 0x18);
      *(char **)(*unaff_x19 + 0x18) = pcVar7 + 1;
      *pcVar7 = cVar2;
      if (cVar2 == 'u') {
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = 0x30;
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = 0x30;
        uVar3 = (&UNK_10de4e431)[bVar1 >> 4];
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = uVar3;
        uVar3 = (&UNK_10de4e431)[(ulong)bVar1 & 0xf];
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = uVar3;
      }
    }
  }
  func_0x00010734aa78();
  *extraout_x9_00 = 0x22;
  return 1;
}



/* Entry: 107791c08; end: 107791c4b;  */

undefined8 FUN_107791c08(void)

{
  return 0;
}



/* Entry: 1077923ec; end: 107792523;  */

long FUN_1077923ec(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar1;
  ulong uVar2;
  long *plStack_48;
  long lStack_40;
  undefined8 **ppuStack_38;
  
  uVar1 = 0x9e3779b97f4a7c15;
  lStack_40 = 0;
  uVar2 = uVar1;
  if (*(int *)(param_1 + 0x198) != 0) {
    plStack_48 = &lStack_40;
    func_0x0001073e43f4(param_1 + 0x168);
    ppuStack_38 = &plStack_48;
    func_0x000107794bb0(*(undefined4 *)(param_1 + 0x198));
    (*(code *)(&PTR_DAT_1109d8c78)[extraout_x8])(&ppuStack_38,param_1 + 0x168);
    uVar2 = lStack_40 + 0x9e3779b97f4a7c15;
  }
  lStack_40 = 0;
  if (*(int *)(param_1 + 0x1d0) != 0) {
    plStack_48 = &lStack_40;
    func_0x0001073e4550(param_1 + 0x1a0);
    ppuStack_38 = &plStack_48;
    func_0x000107794bb0(*(undefined4 *)(param_1 + 0x1d0));
    (*(code *)(&PTR_DAT_1109d8c90)[extraout_x8_00])(&ppuStack_38,param_1 + 0x1a0);
    uVar1 = lStack_40 + 0x9e3779b97f4a7c15;
  }
  uVar2 = (uVar2 >> 4) + uVar2 * 0x1000 + uVar1 ^ uVar2;
  func_0x0001077859c4(param_1 + 0x1d8);
  func_0x000107794894();
  func_0x00010778f398(param_1 + 0x210);
  func_0x000107794894();
  func_0x00010778f398(param_1 + 0x248);
  func_0x000107794894();
  func_0x0001077859c4(param_1 + 0x280);
  func_0x000107794894();
  param_1 = param_1 + 0x2b8;
  func_0x00010778f398(param_1);
  return (param_1 + -0x61c8864680b583eb + uVar2 * 0x1000 + (uVar2 >> 4) ^ uVar2) +
         0x9e3779b97f4a7c15;
}



/* Entry: 107793bbc; end: 107793c03;  */

/* WARNING: Possible PIC construction at 0x000107793c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107793c28) */
/* WARNING: Removing unreachable block (ram,0x000107793c4c) */
/* WARNING: Removing unreachable block (ram,0x000107793c44) */

long * FUN_107793bbc(undefined8 *param_1,long *param_2)

{
  float *pfVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *unaff_x19;
  float *unaff_x20;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  long lStack_110;
  long lStack_108;
  long alStack_100 [3];
  undefined4 auStack_e8 [2];
  double dStack_e0;
  undefined8 uStack_a8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_68 [72];
  
  if ((int)param_2[8] == 0) {
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)param_1 = 7;
    return param_2;
  }
  uVar2 = 0;
  if ((int)param_2[8] == 1) {
    func_0x0001077947e4();
    puStack_78 = &UNK_107793c28;
    unaff_x29 = &puStack_80;
    plVar3 = param_2;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x0001077947e4(auStack_68);
    alStack_100[1] = 0;
    alStack_100[2] = 0;
    alStack_100[0] = 0;
    uStack_a8 = extraout_x8;
    func_0x0001072ac134(alStack_100,((long *)*plVar3)[1] - *(long *)*plVar3 >> 2);
    pfVar1 = (float *)((long *)*param_2)[1];
    for (unaff_x20 = *(float **)*param_2; uVar2 = unaff_x20 == pfVar1, !(bool)uVar2;
        unaff_x20 = unaff_x20 + 1) {
      dStack_e0 = (double)*unaff_x20;
      auStack_e8[0] = 3;
      func_0x0001072aad1c(alStack_100,auStack_e8);
      func_0x000104c3323c(auStack_e8);
    }
    param_2 = alStack_100;
    func_0x000107327958(&lStack_110);
    *(undefined4 *)unaff_x19 = 0;
    unaff_x19[2] = lStack_108;
    unaff_x19[1] = lStack_110;
    lStack_110 = 0;
    lStack_108 = 0;
    func_0x000104c33108(&lStack_110);
    unaff_x19 = alStack_100;
    func_0x000107269124();
    func_0x000107794738(uStack_a8);
    if ((bool)uVar2) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    func_0x000107269124(alStack_100);
    unaff_x30 = &LAB_107793d40;
    func_0x000107794960();
    register0x00000008 = (BADSPACEBASE *)&lStack_110;
  }
  *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001077947e4();
  *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8_00;
  param_2 = (long *)*param_2;
  func_0x000107794aa4();
  func_0x000107794ae0();
  func_0x000107794940();
  func_0x000104c32a18();
  *(undefined1 *)(unaff_x19 + 8) = 2;
  func_0x0001077949a0();
  func_0x000107794700();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    __Unwind_Resume();
    *(float **)((long)register0x00000008 + -0x90) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x88) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x78) = &UNK_107793d90;
    if ((char)param_2[9] == '\x01') {
      func_0x0001072dbce8(param_2);
    }
    return param_2;
  }
  return param_2;
}



/* Entry: 107793eec; end: 107793f1b;  */

undefined8 * FUN_107793eec(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x1eae807aba01eb) {
    puVar1 = (undefined8 *)(param_2 * 0x858);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d8bd8;
  func_0x000107793f88(param_1 + 3);
  return param_1;
}



/* Entry: 107794024; end: 10779402b;  */

void FUN_107794024(void)

{
  return;
}



/* Entry: 107794228; end: 10779427f;  */

undefined8 * FUN_107794228(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  func_0x000107794804();
  func_0x0001077949e4();
  func_0x000107794aa4();
  func_0x000107794ae0();
  func_0x000107794940();
  func_0x0001077778dc();
  func_0x0001077949a0();
  func_0x000107794700();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077949a0();
  func_0x000107794960();
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return (undefined8 *)0x1;
}



/* Entry: 107794360; end: 1077943af;  */

void FUN_107794360(long param_1,long param_2)

{
  int iVar1;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != -1 && *(int *)(param_2 + 0x30) == iVar1) {
    puStack_18 = &uStack_19;
    func_0x0001077949c0(*(int *)(param_2 + 0x30) == iVar1,param_1);
  }
  return;
}



/* Entry: 1077945ac; end: 10779465b;  */

void FUN_1077945ac(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x30) != 0) {
    func_0x000107794b6c();
    *(undefined4 *)(lVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 107794dac; end: 107794dd7;  */

undefined ** FUN_107794dac(void)

{
  return &PTR_DAT_1109d8838;
}



/* Entry: 107794fd4; end: 107795087;  */

undefined8 * FUN_107794fd4(undefined8 *param_1)

{
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000107795088(param_1 + 0x10);
  _bzero(param_1 + 0x14,0x130);
  func_0x000107795094(param_1 + 0x3a);
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  return param_1;
}



/* Entry: 1077951d8; end: 1077951eb;  */

void FUN_1077951d8(void)

{
  FUN_107781c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107797a58; end: 107797a8f;  */

void FUN_107797a58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  undefined1 uStack_11;
  
  func_0x000107555700(&uStack_11,param_1,param_2,param_3,*param_4,*param_5);
  return;
}



/* Entry: 107797dfc; end: 107797e2b;  */

/* WARNING: Possible PIC construction at 0x000107797e4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107797e50) */
/* WARNING: Removing unreachable block (ram,0x000107797e70) */
/* WARNING: Removing unreachable block (ram,0x000107797e68) */

undefined8 * FUN_107797dfc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [64];
  undefined8 uStack_a8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_68 [72];
  
  if (*(int *)(param_2 + 8) == 0) {
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)param_1 = 7;
    return param_2;
  }
  uVar1 = 0;
  if (*(int *)(param_2 + 8) == 1) {
    func_0x0001077991a8();
    puStack_78 = &UNK_107797e50;
    unaff_x29 = &puStack_80;
    puVar2 = param_2;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x0001077991a8(auStack_68);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
    unaff_x19 = &uStack_100;
    uStack_a8 = extraout_x8;
    func_0x0001072ac134(unaff_x19,(((long *)*puVar2)[1] - *(long *)*puVar2) / 0x38);
    puVar2 = (undefined8 *)((undefined8 *)*param_2)[1];
    for (unaff_x20 = *(undefined8 **)*param_2; uVar1 = unaff_x20 == puVar2, !(bool)uVar1;
        unaff_x20 = unaff_x20 + 7) {
      unaff_x19 = unaff_x20;
      FUN_10778b3e8(auStack_e8);
      func_0x000107799574();
      func_0x000107799450();
    }
    func_0x000107799530();
    func_0x0001077993b0();
    func_0x0001077994c4();
    func_0x0001077990c8(uStack_a8);
    if ((bool)uVar1) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    param_3 = unaff_x19;
    func_0x0001077994c4();
    unaff_x30 = &LAB_107797f28;
    func_0x00010779934c();
    register0x00000008 = (BADSPACEBASE *)auStack_110;
  }
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001077991a8();
  func_0x0001077992bc();
  func_0x000107799434();
  func_0x0001077992a8();
  func_0x000104c32a18();
  func_0x0001077992f4(2);
  func_0x0001077990b0();
  if ((bool)uVar1) {
    return param_3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 **)((long)register0x00000008 + -0x90) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x88) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x78) = &UNK_107797f6c;
  if (*(char *)(param_3 + 7) == '\x01') {
    func_0x00010779954c();
  }
  return param_3;
}



/* Entry: 10779806c; end: 10779809b;  */

undefined8 * FUN_10779806c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x134679ace01347) {
    puVar1 = (undefined8 *)(param_2 * 0xd48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d9338;
  func_0x000107798104(param_1 + 3);
  return param_1;
}



/* Entry: 1077981a0; end: 1077981b3;  */

void FUN_1077981a0(void)

{
  return;
}



/* Entry: 1077984d8; end: 10779851f;  */

undefined8 FUN_1077984d8(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001077994e4();
  lVar1 = ((long *)*unaff_x20)[1];
  for (lVar2 = *(long *)*unaff_x20; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    func_0x000107777a44();
  }
  unaff_x19[4] = unaff_x19[4] + -0x10;
  func_0x000107349610(*unaff_x19,0x5d);
  return 1;
}



/* Entry: 107798660; end: 107798683;  */

void FUN_107798660(void)

{
  func_0x0001077992d0();
  func_0x000107799328();
  return;
}



/* Entry: 10779880c; end: 10779883b;  */

void FUN_10779880c(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 1077989b8; end: 107798a17;  */

void FUN_1077989b8(void)

{
  func_0x000107799588();
  func_0x00010779917c();
  return;
}



/* Entry: 107798b64; end: 107798b6b;  */

void FUN_107798b64(long *param_1,long *param_2,long *param_3)

{
  long lStack_20;
  long *plStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x40) == 1) {
    if (param_2 != param_3) {
      plStack_18 = (long *)param_3[1];
      lStack_20 = *param_3;
      *param_3 = 0;
      param_3[1] = 0;
      func_0x000107295ce8(param_2,&lStack_20);
      func_0x00010726b120(&lStack_20);
    }
    return;
  }
  plStack_18 = param_3;
  func_0x000107798ba4(&lStack_20);
  return;
}



/* Entry: 107798cd0; end: 107798d8f;  */

void FUN_107798cd0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x30) != 0) {
    func_0x00010779954c();
    *(undefined4 *)(lVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 107799050; end: 1077990af;  */

void FUN_107799050(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001077994d8();
  if (*(int *)(unaff_x20 + 0x38) == 2) {
    func_0x000107799470();
    uVar1 = *(undefined8 *)(unaff_x19 + 0x2d);
    *(undefined8 *)(unaff_x21 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x21 + 0x2d) = uVar1;
  }
  else {
    func_0x0001073e64d8();
    func_0x00010779941c();
    func_0x000107438460();
    *(undefined4 *)(unaff_x20 + 0x38) = 2;
  }
  return;
}



/* Entry: 107799ae0; end: 107799ae3;  */

undefined8 * FUN_107799ae0(undefined8 *param_1)

{
  func_0x0001074ae9e8(param_1 + 4);
  *param_1 = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 10779a748; end: 10779a7c3;  */

undefined8 * FUN_10779a748(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x00010779a7c4(auStack_40,param_2,param_3);
  FUN_10779b904(auStack_30,auStack_40);
  func_0x000107781b94(param_1,auStack_30);
  func_0x0001073ad4c4(auStack_30);
  func_0x00010779ba64();
  *param_1 = &PTR_DAT_1109d9630;
  return param_1;
}



/* Entry: 10779b140; end: 10779b24f;  */

void FUN_10779b140(undefined8 *param_1,undefined1 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  puVar7 = auStack_d0;
  puVar5 = param_2;
  func_0x00010779b9e8();
  uStack_38 = extraout_x8;
  func_0x000107781de4(param_1);
  uVar4 = *(long *)(*(long *)(param_2 + 8) + 0x168) == *(long *)(*(long *)(param_2 + 8) + 0x170);
  if (!(bool)uVar4) {
    puVar6 = param_1;
    func_0x000107782568(param_1);
    func_0x000107267ef0();
    func_0x00010002b838(auStack_d0,&DAT_10f41019d);
    func_0x00010779ac1c(auStack_80,param_2,auStack_d0);
    func_0x000100060964(auStack_b8,&DAT_10f41019d);
    func_0x000107267f10(puVar6,auStack_b8);
    func_0x0001072d80fc();
    func_0x000104c2f714(auStack_b8);
    func_0x000104c3323c(auStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    puVar5 = puVar7;
  }
  func_0x00010779b9a0(uStack_38);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c3323c(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  func_0x000104c3323c(param_1);
  func_0x00010779baa0();
  puStack_d8 = &DAT_10779b250;
  puStack_f0 = puVar5;
  puStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010779baa8();
  if (lStack_108 != 0) {
    plVar1 = (long *)(lStack_108 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = lStack_108;
  *param_1 = uStack_110;
  uStack_100 = 0;
  uStack_f8 = 0;
  func_0x0001077832b8(&uStack_100);
  func_0x00010779ba64();
  return;
}



/* Entry: 10779b408; end: 10779b46f;  */

/* WARNING: Possible PIC construction at 0x00010779b430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010779b434) */
/* WARNING: Removing unreachable block (ram,0x00010779ba40) */

long FUN_10779b408(void)

{
  long lVar1;
  int extraout_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010779bb04();
  if (extraout_w8 == 4) {
    func_0x00010779bac4();
    func_0x00010727dfac(unaff_x20 + 0x38,unaff_x19 + 0x38);
    return unaff_x20 + 0x38;
  }
  func_0x00010779bb54();
  lVar1 = unaff_x21;
  func_0x0001074e157c();
  *(undefined4 *)(unaff_x21 + 0x128) = 4;
  return lVar1;
}



/* Entry: 10779b59c; end: 10779b5a7;  */

void FUN_10779b59c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010779bb7c(*param_1,param_1[1]);
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  uVar4 = unaff_x19[3];
  uVar3 = unaff_x19[2];
  *(undefined4 *)(unaff_x20 + 4) = *(undefined4 *)(unaff_x19 + 4);
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  unaff_x20[3] = uVar4;
  unaff_x20[2] = uVar3;
  *(undefined4 *)(unaff_x20 + 10) = 1;
  return;
}



/* Entry: 10779b79c; end: 10779b7c3;  */

long FUN_10779b79c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x00010779b7c4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10779b904; end: 10779b96f;  */

undefined8 * FUN_10779b904(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001073e65f8(&uStack_30);
  return param_1;
}



/* Entry: 10779bf64; end: 10779bf6f;  */

void FUN_10779bf64(void)

{
  return;
}



/* Entry: 10779cc60; end: 10779cc87;  */

long FUN_10779cc60(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x00010779cc88();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}


