/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bcd82f0; end: 10bcd851b;  */

undefined8
FUN_10bcd82f0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  long lVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  long alStack_110 [2];
  long lStack_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [48];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  plVar3 = param_1;
  func_0x00010bcdd14c(param_1,&UNK_10f82ffa7);
  if ((int)plVar3 == 0) {
    uVar7 = 0;
  }
  else {
    puVar4 = auStack_98;
    func_0x00010bcdb424(puVar4,*param_1);
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    func_0x00010bcdd570();
    if (((ulong)puVar4 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      puVar4 = auStack_e0;
      func_0x00010bcdb424(puVar4,*param_1 + 0x30);
      iVar2 = (int)puVar4;
      func_0x00010bcdd0d8();
      func_0x00010bcdd1dc();
      FUN_10bcd6520();
      if (iVar2 == 0) {
LAB_10bcd8484:
        uVar7 = 0;
      }
      else {
        bVar8 = true;
        do {
          func_0x00010bcdcea4();
          if ((bool)in_ZR) {
            func_0x00010bcdccd4();
            goto LAB_10bcd8484;
          }
          func_0x00010bcd6730(auStack_f8,param_6,*(undefined4 *)(param_2 + 8));
          lVar5 = param_2;
          func_0x00010bcdc384();
          func_0x00010bcdcf58(alStack_110,auStack_f8);
          lVar1 = lStack_100;
          puVar6 = *(undefined4 **)(lStack_100 + 0x38);
          *puVar6 = uStack_78;
          puVar6[1] = uStack_74;
          FUN_10bcd6800(alStack_110,auStack_e0);
          if (bVar8) {
            FUN_10bcd684c(*(undefined8 *)(alStack_110[0] + 0x18),lVar1,lVar5,3);
          }
          func_0x00010bcdd1b8();
          *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 2;
          if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
            func_0x00010bcdd054();
          }
          func_0x000107c30248(lVar5 + 0x20,&uStack_b0);
          plVar3 = param_1;
          FUN_10bcd9a68(param_1,lVar5,param_3,param_4,param_5,auStack_f8);
          if (((ulong)plVar3 & 1) == 0) {
            func_0x00010bcdd0ac();
          }
          FUN_10bcd67bc(auStack_f8);
          plVar3 = param_1;
          func_0x00010bcdcc58(param_1,&DAT_10f2da10d);
          bVar8 = false;
        } while (((ulong)plVar3 & 1) == 0);
        uVar7 = 1;
      }
      func_0x00010bcdcf44(auStack_e0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
    func_0x00010bcdcf44(auStack_98);
  }
  return uVar7;
}



/* Entry: 10bcd851c; end: 10bcd8af7;  */

ulong FUN_10bcd851c(long *param_1,long param_2,undefined *param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  int *piVar5;
  long *plVar6;
  undefined1 *puVar7;
  ulong uVar8;
  uint uVar9;
  double dVar10;
  ulong uVar11;
  undefined *puVar12;
  int iVar13;
  undefined4 *puVar14;
  double adStack_98 [3];
  long alStack_80 [2];
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_2;
  FUN_10bd2b4f4();
  puVar12 = &UNK_10f830393;
  FUN_10bcee480();
  if (lVar3 == 0) {
    func_0x00010bcdd2c0();
    FUN_10bdb2a08(auStack_68);
    FUN_10bcdad04(auStack_68,&UNK_10f8303ce);
LAB_10bcd8af0:
    puVar7 = auStack_68;
    func_0x00010ae6c700();
    *(uint *)(puVar7 + 0x10) = *(uint *)(puVar7 + 0x10) | 8;
    uVar11 = *(ulong *)(puVar7 + 200);
    if (uVar11 == 0) {
      uVar11 = *(ulong *)(puVar7 + 8);
      if ((uVar11 & 1) != 0) {
        func_0x00010bcdd0e4();
      }
      func_0x000107c31548();
      *(ulong *)(puVar7 + 200) = uVar11;
    }
    return uVar11;
  }
  FUN_10bd2b4f4(param_2);
  uVar1 = *(undefined4 *)(lVar3 + 4);
  FUN_10bd1d250(puVar12,param_2,lVar3);
  FUN_10bcd675c(auStack_68,param_3,uVar1,puVar12);
  if (param_4 != 0) {
    param_3 = &DAT_10f2f4975;
    plVar6 = param_1;
    func_0x00010bcdd14c();
    if (((ulong)plVar6 & 1) == 0) goto LAB_10bcd8660;
  }
  FUN_10bd2b4f4(param_2);
  FUN_10bd20468(param_3,param_2,lVar3,0);
  func_0x00010bcdcf58(alStack_80,auStack_68);
  uVar2 = *(undefined8 *)(alStack_80[0] + 0x18);
  FUN_10bcd684c(uVar2,lStack_70,param_3,7);
  iVar13 = (int)uVar2;
  func_0x00010bcdd4f8();
  func_0x00010bcdcfc8();
  FUN_10bcdab60();
  func_0x00010bcdcfec();
  if (iVar13 != 0) {
LAB_10bcd861c:
    lVar3 = *param_1;
    func_0x00010bcdcf1c(lVar3,&DAT_10f62a9de);
    if ((int)lVar3 != 0) {
      plVar6 = param_1;
      func_0x00010bcdce84(param_1,&DAT_10f62a9de);
      if (((ulong)plVar6 & 1) != 0) goto code_r0x00010bcd863c;
      goto LAB_10bcd865c;
    }
    func_0x00010bcdd188();
    func_0x00010bcdd330();
    plVar6 = param_1;
    func_0x00010bcdce84();
    if (((ulong)plVar6 & 1) == 0) goto LAB_10bcd8660;
    FUN_10bcd66a4(alStack_80,auStack_68);
    FUN_10bcd684c(*(undefined8 *)(alStack_80[0] + 0x18),lStack_70,param_3,8);
    plVar6 = param_1;
    func_0x00010bcdce94(param_1,"-");
    puVar14 = (undefined4 *)*param_1;
    puVar12 = &UNK_10f830441;
    iVar13 = (int)plVar6;
    switch(*puVar14) {
    case 0:
      func_0x00010bcdd2c0();
      FUN_10bdb2a00(adStack_98);
      func_0x00010b4d6358(adStack_98,&UNK_10f83040a);
      break;
    case 1:
      goto code_r0x00010bcd899c;
    case 2:
      uVar11 = lStack_70 + 0x18;
      func_0x000107c2845c(uVar11,3);
      if (((ulong)plVar6 & 1) != 0) {
        puVar12 = &UNK_10f8304f6;
        goto code_r0x00010bcd899c;
      }
      adStack_98[0] = 0.0;
      adStack_98[1] = 0.0;
      adStack_98[2] = 0.0;
      uVar8 = 0;
      func_0x00010bcdd44c();
      func_0x00010bcdcec4();
      if ((uVar11 & 1) == 0) goto code_r0x00010bcd8940;
      func_0x00010bcdd634(*(uint *)(param_3 + 0x10) | 1);
      if ((uVar8 & 1) != 0) {
        func_0x00010bcdd054();
      }
      plVar6 = (long *)(param_3 + 0x30);
      func_0x000107c30248(plVar6,adStack_98);
code_r0x00010bcd8938:
      func_0x00010bcdd044();
      goto LAB_10bcd8970;
    case 3:
      uVar2 = 0x8000000000000000;
      if (iVar13 == 0) {
        uVar2 = 0xffffffffffffffff;
      }
      puVar4 = puVar14 + 2;
      FUN_10bd3e86c(puVar4,uVar2,adStack_98);
      if ((int)puVar4 == 0) goto code_r0x00010bcd8794;
      FUN_10bd3df70(puVar14);
      if (iVar13 == 0) {
        plVar6 = (long *)(lStack_70 + 0x18);
        func_0x000107c2845c(plVar6,4);
        uVar9 = 8;
        lVar3 = 0x48;
        dVar10 = adStack_98[0];
      }
      else {
        plVar6 = (long *)(lStack_70 + 0x18);
        func_0x000107c2845c(plVar6,5);
        uVar9 = 0x10;
        lVar3 = 0x50;
        dVar10 = (double)-(long)adStack_98[0];
      }
      *(double *)(param_3 + lVar3) = dVar10;
      uVar9 = *(uint *)(param_3 + 0x10) | uVar9;
      goto code_r0x00010bcd896c;
    case 4:
code_r0x00010bcd8794:
      plVar6 = (long *)(lStack_70 + 0x18);
      func_0x00010bcdd520();
      adStack_98[0] = 0.0;
      func_0x00010bcdd44c();
      func_0x00010bcd6070();
      if (((ulong)plVar6 & 1) != 0) {
        dVar10 = -adStack_98[0];
        if (iVar13 == 0) {
          dVar10 = adStack_98[0];
        }
        *(double *)(param_3 + 0x58) = dVar10;
        uVar9 = *(uint *)(param_3 + 0x10) | 0x20;
code_r0x00010bcd896c:
        *(uint *)(param_3 + 0x10) = uVar9;
        goto LAB_10bcd8970;
      }
      goto LAB_10bcd865c;
    case 5:
      uVar11 = lStack_70 + 0x18;
      func_0x000107c2845c(uVar11,7);
      if (((ulong)plVar6 & 1) != 0) {
        puVar12 = &UNK_10f83051c;
        goto code_r0x00010bcd899c;
      }
      adStack_98[0] = 0.0;
      adStack_98[1] = 0.0;
      adStack_98[2] = 0.0;
      uVar8 = 0;
      func_0x00010bcdd44c();
      func_0x00010bcdd180();
      if ((uVar11 & 1) != 0) {
        func_0x00010bcdd634(*(uint *)(param_3 + 0x10) | 2);
        if ((uVar8 & 1) != 0) {
          func_0x00010bcdd054();
        }
        plVar6 = (long *)(param_3 + 0x38);
        func_0x000107c30248(plVar6,adStack_98);
        goto code_r0x00010bcd8938;
      }
code_r0x00010bcd8940:
      func_0x00010bcdd044();
      goto LAB_10bcd865c;
    case 6:
      func_0x00010bcdd0d8();
      func_0x00010bcdcf1c();
      if ((int)puVar14 == 0) {
        puVar12 = &UNK_10f83053e;
        goto code_r0x00010bcd899c;
      }
      func_0x000107c2845c(lStack_70 + 0x18,8);
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 4;
      if ((*(ulong *)(param_3 + 8) & 1) != 0) {
        func_0x00010bcdd6a8();
      }
      param_3 = param_3 + 0x40;
      func_0x000107c30250();
      func_0x00010bcdd0d8();
      plVar6 = param_1;
      func_0x00010bcdce84();
      if ((int)plVar6 != 0) {
        iVar13 = 1;
        puVar12 = &UNK_10f83035b;
        goto code_r0x00010bcd8838;
      }
      goto LAB_10bcd865c;
    case 7:
    case 8:
      if (((*(byte *)((long)puVar14 + 0xae) & 1) == 0) &&
         (*(char *)((long)puVar14 + 0xaf) != '\x01')) {
        func_0x00010bcdd2c0();
        FUN_10bdb2a00(adStack_98);
        func_0x00010b4c3120(adStack_98,&UNK_10f8304d7);
      }
      else {
        func_0x00010bcdd2c0();
        FUN_10bdb2a08(adStack_98);
        func_0x00010b4bf630(adStack_98,&UNK_10f8304b1);
      }
      break;
    default:
      goto LAB_10bcd8970;
    }
    func_0x00010ae6c700();
    func_0x00010bcdd188();
    func_0x00010bcdd04c();
    func_0x00010bcdcf24();
    goto LAB_10bcd8af0;
  }
LAB_10bcd865c:
  func_0x00010bcdd188();
LAB_10bcd8660:
  uVar11 = 0;
LAB_10bcd8664:
  func_0x00010bcdd04c();
  return uVar11;
code_r0x00010bcd863c:
  func_0x00010bcdd4f8();
  func_0x00010bcdcfc8();
  FUN_10bcdab60();
  func_0x00010bcdcfec();
  if (((ulong)plVar6 & 1) == 0) goto LAB_10bcd865c;
  goto LAB_10bcd861c;
code_r0x00010bcd8838:
  piVar5 = (int *)*param_1;
  if (*piVar5 == 1) goto code_r0x00010bcd899c;
  func_0x00010bcdcf1c(piVar5,&DAT_10f2da0fd);
  if ((int)piVar5 == 0) {
    lVar3 = *param_1;
    func_0x00010bcdcf1c(lVar3,&DAT_10f2da10d);
    if (((int)lVar3 == 0) || (iVar13 = iVar13 + -1, iVar13 != 0)) goto code_r0x00010bcd8874;
    plVar6 = (long *)*param_1;
    FUN_10bd3df70();
LAB_10bcd8970:
    func_0x00010bcdd188();
    if (param_4 == 0) {
LAB_10bcd8990:
      uVar11 = 1;
      goto LAB_10bcd8664;
    }
    func_0x00010bcdd1dc();
    FUN_10bcd6520();
    if (((ulong)plVar6 & 1) != 0) goto LAB_10bcd8990;
    goto LAB_10bcd8660;
  }
  iVar13 = iVar13 + 1;
code_r0x00010bcd8874:
  lVar3 = (long)(char)param_3[0x17];
  if (lVar3 < 0) {
    lVar3 = *(long *)(param_3 + 8);
  }
  if (lVar3 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_3,0x20);
  }
  func_0x000107c27fc4(param_3,*param_1 + 8);
  FUN_10bd3df70(*param_1);
  goto code_r0x00010bcd8838;
code_r0x00010bcd899c:
  FUN_10bcd5e68(param_1,puVar12,0);
  goto LAB_10bcd865c;
}



/* Entry: 10bcd8af8; end: 10bcd8b07;  */

void FUN_10bcd8af8(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  if (*(long *)(param_1 + 200) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010bcdd0e4();
    }
    func_0x000107c31548();
    *(ulong *)(param_1 + 200) = uVar1;
  }
  return;
}



/* Entry: 10bcd8b08; end: 10bcd9877;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bcd8b08(int param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined ***pppuVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 in_ZR;
  bool bVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  long extraout_x8;
  ulong uVar12;
  long extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  undefined4 uVar13;
  long *extraout_x9;
  ulong extraout_x9_00;
  long lVar14;
  byte bVar15;
  ulong uVar16;
  undefined ***unaff_x19;
  undefined ***unaff_x20;
  undefined **ppuVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  byte bVar21;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined8 uVar22;
  byte bVar28;
  int aiStack_120 [4];
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined1 auStack_100 [8];
  long lStack_f8;
  undefined **appuStack_d8 [2];
  long lStack_c8;
  int iStack_bc;
  undefined **appuStack_b8 [2];
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_6c;
  
  func_0x00010bcdd060();
  func_0x00010bcdceb4();
  FUN_10bcd6520();
  if (param_1 == 0) {
    return;
  }
  pppuVar11 = unaff_x20 + 0x15;
  pppuVar2 = unaff_x20 + 0xc;
LAB_10bcd8b68:
  do {
    pppuVar8 = unaff_x19;
    func_0x00010bcdcc58();
    if (((ulong)pppuVar8 & 1) != 0) {
      if (0 < *(int *)(unaff_x20 + 0xd)) {
        iVar20 = (int)unaff_x20[0x1c];
        FUN_10bcdb9c4();
        lVar19 = 0;
        uVar13 = 0x7fffffff;
        if (iVar20 == 0) {
          uVar13 = 0x20000000;
        }
        lVar14 = 8;
        for (; lVar19 < *(int *)(unaff_x20 + 0xd); lVar19 = lVar19 + 1) {
          pppuVar8 = pppuVar2;
          if (((ulong)*pppuVar2 & 1) != 0) {
            pppuVar8 = (undefined ***)((long)*pppuVar2 + lVar14 + -1);
          }
          ppuVar7 = *pppuVar8;
          if (*(int *)((long)ppuVar7 + 0x24) == -1) {
            *(undefined4 *)((long)ppuVar7 + 0x24) = uVar13;
            *(uint *)(ppuVar7 + 2) = *(uint *)(ppuVar7 + 2) | 4;
          }
          lVar14 = lVar14 + 8;
        }
      }
      if (0 < *(int *)(unaff_x20 + 0x16)) {
        iVar20 = (int)unaff_x20[0x1c];
        FUN_10bcdb9c4();
        lVar19 = 0;
        uVar13 = 0x7fffffff;
        if (iVar20 == 0) {
          uVar13 = 0x20000000;
        }
        lVar14 = 8;
        for (; lVar19 < *(int *)(unaff_x20 + 0x16); lVar19 = lVar19 + 1) {
          pppuVar2 = pppuVar11;
          if (((ulong)*pppuVar11 & 1) != 0) {
            pppuVar2 = (undefined ***)((long)*pppuVar11 + lVar14 + -1);
          }
          ppuVar7 = *pppuVar2;
          if (*(int *)((long)ppuVar7 + 0x1c) == -1) {
            *(undefined4 *)((long)ppuVar7 + 0x1c) = uVar13;
            *(uint *)(ppuVar7 + 2) = *(uint *)(ppuVar7 + 2) | 2;
          }
          lVar14 = lVar14 + 8;
        }
      }
      lVar19 = 0;
      do {
        ppuVar7 = &PTR_PTR_113406168;
        if (unaff_x20[0x1c] != (undefined **)0x0) {
          ppuVar7 = unaff_x20[0x1c];
        }
        if (*(int *)(ppuVar7 + 7) <= lVar19) {
          return;
        }
        func_0x00010bcdd43c();
        ppuVar7 = (undefined **)*extraout_x8_01;
        if ((0 < *(int *)(ppuVar7 + 4)) && (func_0x00010bcdd36c(ppuVar7), (extraout_x9_00 & 1) == 0)
           ) {
          uVar12 = *(ulong *)(extraout_x8_02 + 0x18) & 0xfffffffffffffffc;
          func_0x000107c27cf4(uVar12,&UNK_10f82fe15);
          if ((int)uVar12 != 0) {
            ppuVar17 = unaff_x19[3];
            if (ppuVar17 != (undefined **)0x0) {
              uStack_98 = CONCAT44(uStack_98._4_4_,7);
              Hint_Prefetch(*ppuVar17,0,2,0);
              pppuVar11 = &ppuStack_a0;
              ppuStack_a0 = ppuVar7;
              FUN_10bcdc780(*ppuVar17);
              lVar19 = 0;
              uVar12 = (ulong)*ppuVar17 >> 0xc ^ (ulong)pppuVar11 >> 7;
              bVar15 = (byte)pppuVar11 & 0x7f;
              while( true ) {
                uVar12 = uVar12 & (ulong)ppuVar17[2];
                uVar22 = *(undefined8 *)(*ppuVar17 + uVar12);
                bVar21 = (byte)((ulong)uVar22 >> 8);
                bVar23 = (byte)((ulong)uVar22 >> 0x10);
                bVar24 = (byte)((ulong)uVar22 >> 0x18);
                bVar25 = (byte)((ulong)uVar22 >> 0x20);
                bVar26 = (byte)((ulong)uVar22 >> 0x28);
                bVar27 = (byte)((ulong)uVar22 >> 0x30);
                bVar28 = (byte)((ulong)uVar22 >> 0x38);
                for (uVar16 = CONCAT17(-(bVar28 == bVar15),
                                       CONCAT16(-(bVar27 == bVar15),
                                                CONCAT15(-(bVar26 == bVar15),
                                                         CONCAT14(-(bVar25 == bVar15),
                                                                  CONCAT13(-(bVar24 == bVar15),
                                                                           CONCAT12(-(bVar23 ==
                                                                                     bVar15),
                                                  CONCAT11(-(bVar21 == bVar15),
                                                           -((byte)uVar22 == bVar15)))))))) &
                              0x8080808080808080; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
                  uVar3 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                          (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
                  if (*(undefined ***)
                       (ppuVar17[1] +
                       (uVar12 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) &
                       (ulong)ppuVar17[2]) * 0x18) == ppuStack_a0 &&
                      (int)*(long *)((long)(ppuVar17[1] +
                                           (uVar12 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20)
                                                     >> 3) & (ulong)ppuVar17[2]) * 0x18) + 8) ==
                      (int)uStack_98) goto LAB_10bcd96f4;
                }
                bVar21 = NEON_umaxv(CONCAT17(-(bVar28 == 0x80),
                                             CONCAT16(-(bVar27 == 0x80),
                                                      CONCAT15(-(bVar26 == 0x80),
                                                               CONCAT14(-(bVar25 == 0x80),
                                                                        CONCAT13(-(bVar24 == 0x80),
                                                                                 CONCAT12(-(bVar23 
                                                  == 0x80),CONCAT11(-(bVar21 == 0x80),
                                                                    -((byte)uVar22 == 0x80)))))))),1
                                   );
                if ((bVar21 & 1) != 0) break;
                lVar19 = lVar19 + 8;
                uVar12 = lVar19 + uVar12;
              }
            }
LAB_10bcd96f4:
            FUN_10bcd6568();
            return;
          }
        }
        lVar19 = lVar19 + 1;
      } while( true );
    }
    func_0x00010bcdcea4();
    if ((bool)in_ZR) {
      func_0x00010bcdccd4();
      return;
    }
    func_0x00010bcdcba0();
    FUN_10bcd61e4();
  } while (((ulong)pppuVar8 & 1) != 0);
  ppuVar7 = *unaff_x19;
  func_0x00010bcdd144(ppuVar7,"message");
  pppuVar8 = unaff_x19;
  if ((int)ppuVar7 != 0) {
    func_0x00010bcdd2dc();
    FUN_10bcd675c();
    func_0x00010bcdc378(unaff_x20 + 6);
    FUN_10bcd7904();
LAB_10bcd8c10:
    func_0x00010bcdce8c();
    goto joined_r0x00010bcd8c18;
  }
  ppuVar7 = *unaff_x19;
  func_0x00010bcdd560(ppuVar7,&DAT_10f5af6c7);
  if ((int)ppuVar7 != 0) {
    func_0x00010bcdd2dc();
    FUN_10bcd675c();
    FUN_10bcdb45c(unaff_x20 + 9);
    FUN_10bcd7a84();
    goto LAB_10bcd8c10;
  }
  ppuVar7 = *unaff_x19;
  FUN_10bcd5e00(ppuVar7,&DAT_10f6372be,10);
  if ((int)ppuVar7 != 0) {
    func_0x00010bcd6730(appuStack_d8,param_3,5);
    FUN_10bcd5e7c();
    if ((int)pppuVar8 != 0) {
      iVar20 = *(int *)(unaff_x20 + 0xd);
      lVar19 = (long)iVar20;
      do {
        func_0x00010bcd6730(&ppuStack_108,appuStack_d8,*(undefined4 *)(unaff_x20 + 0xd));
        pppuVar9 = pppuVar2;
        func_0x00010bcdbc8c();
        func_0x00010bcdcf6c(ppuStack_108[3],lStack_f8);
        uStack_98 = 0;
        lStack_90 = 0;
        uStack_88 = 0;
        func_0x00010bcdd660();
        func_0x00010bcdcf34();
        func_0x00010bcdad2c(&ppuStack_a0,*unaff_x19);
        pppuVar8 = unaff_x19;
        func_0x00010bcdd27c();
        iVar18 = aiStack_120[0];
        if (((ulong)pppuVar8 & 1) == 0) {
LAB_10bcd8f54:
          func_0x00010bcdce9c();
          func_0x00010bcdd274();
          func_0x00010bcdd04c();
          goto LAB_10bcd8f64;
        }
        in_ZR = aiStack_120[0] == 0x7fffffff;
        if ((bool)in_ZR) {
          func_0x00010bcdce7c();
          goto LAB_10bcd8f54;
        }
        func_0x00010bcdce9c();
        func_0x00010bcdce0c();
        if ((int)pppuVar8 == 0) {
          func_0x00010bcdd660();
          func_0x00010bcdcf58();
          func_0x00010bcdd0cc(uStack_a8);
          *(undefined4 *)(extraout_x8 + 4) = uStack_7c;
          pppuVar8 = appuStack_b8;
          FUN_10bcd6800(pppuVar8,&ppuStack_a0);
          func_0x00010bcdce9c();
          iVar6 = iVar18;
        }
        else {
          func_0x00010bcdd660();
          func_0x00010bcdcf58();
          func_0x00010bcdcde4();
          if (((ulong)pppuVar8 & 1) == 0) {
            func_0x00010bcdcf08();
            FUN_10bcd5efc();
            if ((int)pppuVar8 != 0) {
              in_ZR = iStack_6c == 0x7fffffff;
              iVar6 = iStack_6c;
              if (!(bool)in_ZR) goto LAB_10bcd8d50;
              func_0x00010bcdce7c();
            }
            goto LAB_10bcd8f54;
          }
          iVar6 = -2;
LAB_10bcd8d50:
          func_0x00010bcdce9c();
        }
        *(int *)(pppuVar9 + 4) = iVar18;
        *(int *)((long)pppuVar9 + 0x24) = iVar6 + 1;
        *(uint *)(pppuVar9 + 2) = *(uint *)(pppuVar9 + 2) | 6;
        func_0x00010bcdd274();
        func_0x00010bcdd04c();
        func_0x00010bcdcc30();
      } while (((ulong)pppuVar8 & 1) != 0);
      pppuVar8 = (undefined ***)*unaff_x19;
      func_0x00010bcdd3c8();
      func_0x00010bcdcf1c();
      if ((int)pppuVar8 == 0) {
LAB_10bcd9458:
        func_0x00010bcdcb28();
        pppuVar9 = appuStack_d8;
        goto LAB_10bcd92e8;
      }
      iVar18 = *(int *)(lStack_c8 + 0x18);
      ppuStack_a0 = &PTR_FUN_110d9c160;
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_7c = 0;
      lStack_90 = 0;
      uStack_78 = 0;
      in_ZR = ((ulong)*pppuVar2 & 1) == 0;
      pppuVar8 = pppuVar2;
      if (!(bool)in_ZR) {
        pppuVar8 = (undefined ***)((long)*pppuVar2 + lVar19 * 8 + 7);
      }
      FUN_10bcdad64(*pppuVar8);
      func_0x00010bcd66c4(&ppuStack_108,appuStack_d8,&ppuStack_a0);
      func_0x000107c2845c(lStack_f8 + 0x18,0);
      func_0x00010bcdd660();
      func_0x00010bcdd19c();
      pppuVar8 = unaff_x19;
      func_0x00010bcdd3c8();
      iVar6 = (int)pppuVar8;
      func_0x00010bcdce84();
      if (iVar6 == 0) {
LAB_10bcd92f4:
        func_0x00010bcdce9c();
        func_0x00010bcdd04c();
      }
      else {
        do {
          pppuVar8 = unaff_x19;
          func_0x00010bcdd544();
          if ((int)pppuVar8 == 0) goto LAB_10bcd92f4;
          func_0x00010bcdcc30();
        } while (((ulong)pppuVar8 & 1) != 0);
        pppuVar8 = unaff_x19;
        func_0x00010bcdce84();
        iVar6 = (int)pppuVar8;
        func_0x00010bcdce9c();
        func_0x00010bcdd04c();
        if (iVar6 != 0) {
          lVar14 = lVar19 * 8 + 0x10;
          while( true ) {
            lVar19 = lVar19 + 1;
            uVar12 = (ulong)*(int *)(unaff_x20 + 0xd);
            if ((long)uVar12 <= lVar19) break;
            pppuVar8 = pppuVar2;
            if (((ulong)*pppuVar2 & 1) != 0) {
              pppuVar8 = (undefined ***)((long)*pppuVar2 + lVar14 + -1);
            }
            pppuVar8 = (undefined ***)*pppuVar8;
            FUN_10bcdad64();
            lVar14 = lVar14 + 8;
            FUN_10bd0e2c8();
          }
          for (; in_ZR = iVar20 == (int)uVar12, iVar20 < (int)uVar12; iVar20 = iVar20 + 1) {
            lVar19 = 0;
            while( true ) {
              bVar5 = lVar19 == (int)uStack_88;
              if ((int)uStack_88 <= lVar19) break;
              func_0x00010bcdd41c(lStack_90);
              plVar1 = &lStack_90;
              if (!bVar5) {
                plVar1 = extraout_x9;
              }
              if (*(int *)(*plVar1 + 0x18) != iVar18 + 1) {
                pppuVar9 = (undefined ***)(unaff_x19[2] + 2);
                FUN_10bcdb348();
                pppuVar8 = pppuVar9;
                func_0x00010bcdd41c(lStack_90);
                FUN_10bd1334c();
                *(int *)((long)pppuVar9[4] + (long)iVar18 * 4) = iVar20;
              }
              lVar19 = lVar19 + 1;
            }
            uVar12 = (ulong)*(uint *)(unaff_x20 + 0xd);
          }
          func_0x00010bcdd488();
          goto LAB_10bcd9458;
        }
      }
      func_0x00010bcdd488();
    }
LAB_10bcd8f64:
    pppuVar8 = appuStack_d8;
LAB_10bcd8f68:
    FUN_10bcd67bc(pppuVar8);
    goto LAB_10bcd93a4;
  }
  ppuVar7 = *unaff_x19;
  func_0x00010bcdd024(ppuVar7,&DAT_10f52a05c);
  if ((int)ppuVar7 != 0) {
    func_0x00010bcdb424(&ppuStack_108,*unaff_x19);
    func_0x00010bcdd534();
    if (((ulong)pppuVar8 & 1) == 0) {
LAB_10bcd939c:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
      goto LAB_10bcd93a4;
    }
    in_ZR = *(int *)*unaff_x19 == 2;
    if ((bool)in_ZR) {
      func_0x00010bcdcd74();
      if (((ulong)pppuVar8 & 1) == 0) goto LAB_10bcd9398;
      func_0x00010bcdd3e4();
      func_0x00010bcdd02c(uStack_a8);
      do {
        func_0x00010bcdd490();
        func_0x000107c303b4(unaff_x20 + 0x18);
        pppuVar9 = unaff_x19;
        func_0x00010bcdcec4();
        pppuVar8 = pppuVar9;
        func_0x00010bcdce8c();
        if (((ulong)pppuVar9 & 1) == 0) goto LAB_10bcd9370;
        func_0x00010bcdcc30();
      } while (((ulong)pppuVar8 & 1) != 0);
      func_0x00010bcdcb28();
      goto LAB_10bcd9374;
    }
    in_ZR = *(int *)*unaff_x19 == 5;
    if ((bool)in_ZR) {
      func_0x00010bcdcd74();
      if (((ulong)pppuVar8 & 1) == 0) {
        func_0x00010bcdd3e4();
        func_0x00010bcdd02c(uStack_a8);
        do {
          func_0x00010bcdd490();
          func_0x000107c303b4(unaff_x20 + 0x18);
          pppuVar9 = unaff_x19;
          FUN_10bcdad74();
          pppuVar8 = pppuVar9;
          func_0x00010bcdce8c();
          if (((ulong)pppuVar9 & 1) == 0) goto LAB_10bcd9370;
          func_0x00010bcdcc30();
        } while (((ulong)pppuVar8 & 1) != 0);
        func_0x00010bcdcb28();
        goto LAB_10bcd9374;
      }
LAB_10bcd9398:
      func_0x00010bcdd584();
      goto LAB_10bcd939c;
    }
    func_0x00010bcd6730(aiStack_120,param_3,9);
    func_0x00010bcdd02c(uStack_110);
    bVar5 = true;
    do {
      func_0x00010bcdd458();
      func_0x00010bcd6730();
      pppuVar9 = pppuVar11;
      FUN_10bcdbd38();
      func_0x00010bcdd1c0();
      func_0x00010bcdcf6c();
      uStack_98 = 0;
      lStack_90 = 0;
      uStack_88 = 0;
      func_0x00010bcdcf34(appuStack_d8,appuStack_b8);
      func_0x00010bcdad2c(&ppuStack_a0,*unaff_x19);
      in_ZR = !bVar5;
      pppuVar10 = unaff_x19;
      func_0x00010bcdd27c();
      pppuVar8 = pppuVar10;
      func_0x00010bcdd248();
      iVar20 = (int)pppuVar8;
      if (((ulong)pppuVar10 & 1) == 0) {
LAB_10bcd9294:
        bVar4 = false;
      }
      else {
        func_0x00010bcdce0c();
        if (iVar20 == 0) {
          func_0x00010bcdcf58(appuStack_d8,appuStack_b8);
          func_0x00010bcdd0cc(lStack_c8);
          *(undefined4 *)(extraout_x8_00 + 4) = uStack_7c;
          pppuVar8 = appuStack_d8;
          FUN_10bcd6800(pppuVar8,&ppuStack_a0);
          iVar20 = iStack_6c;
          func_0x00010bcdd248();
          iVar18 = iVar20;
        }
        else {
          pppuVar8 = appuStack_d8;
          func_0x00010bcdcf58(pppuVar8,appuStack_b8);
          func_0x00010bcdcde4();
          if (((ulong)pppuVar8 & 1) == 0) {
            func_0x00010bcdcf08();
            FUN_10bcd5efc();
            iVar18 = iStack_bc;
            if ((int)pppuVar8 == 0) {
              func_0x00010bcdd248();
              goto LAB_10bcd9294;
            }
          }
          else {
            iVar18 = -2;
          }
          func_0x00010bcdd248();
          iVar20 = iStack_6c;
        }
        bVar5 = false;
        iStack_bc = iVar18 + 1;
        *(int *)(pppuVar9 + 3) = iVar20;
        *(int *)((long)pppuVar9 + 0x1c) = iStack_bc;
        *(uint *)(pppuVar9 + 2) = *(uint *)(pppuVar9 + 2) | 3;
        bVar4 = true;
      }
      func_0x00010bcdd274();
      func_0x00010bcdce9c();
      if (!bVar4) {
        pppuVar8 = (undefined ***)0x0;
        goto LAB_10bcd930c;
      }
      func_0x00010bcdcc30();
    } while (((ulong)pppuVar8 & 1) != 0);
    func_0x00010bcdcb28();
LAB_10bcd930c:
    pppuVar9 = (undefined ***)aiStack_120;
    goto LAB_10bcd9378;
  }
  pppuVar8 = (undefined ***)*unaff_x19;
  func_0x00010bcdcf3c(pppuVar8,&UNK_10f82ffa7);
  if ((int)pppuVar8 != 0) {
    func_0x00010bcdd2dc();
    func_0x00010bcdd54c();
    func_0x00010bcdcff4();
    FUN_10bcd82f0();
LAB_10bcd92e0:
    pppuVar9 = &ppuStack_a0;
LAB_10bcd92e8:
    FUN_10bcd67bc(pppuVar9);
    goto joined_r0x00010bcd8c18;
  }
  iVar20 = (int)*unaff_x19;
  func_0x00010bcdccc4();
  if (iVar20 != 0) {
    func_0x00010bcdd2dc();
    func_0x00010bcdd504();
    pppuVar8 = unaff_x20;
    FUN_10bcd9a58();
    func_0x00010bcdcdd8();
    goto LAB_10bcd92e0;
  }
  ppuVar7 = *unaff_x19;
  FUN_10bcd5e00(ppuVar7,&UNK_10f830063,5);
  if ((int)ppuVar7 == 0) {
    func_0x00010bcdd2dc();
    func_0x00010bcdd3c0();
    pppuVar8 = unaff_x20 + 3;
    func_0x00010bcdc384();
    func_0x00010bcdcff4();
    FUN_10bcd9a68();
    goto LAB_10bcd92e0;
  }
  uVar13 = *(undefined4 *)(unaff_x20 + 0x13);
  FUN_10bcd675c(&ppuStack_108,param_3,8,uVar13);
  pppuVar8 = unaff_x20 + 0x12;
  FUN_10bcdbb08();
  pppuVar9 = unaff_x19;
  FUN_10bcd5e7c();
  if ((int)pppuVar9 != 0) {
    uVar12 = 0;
    func_0x00010bcdcf34(&ppuStack_a0);
    func_0x00010bcdd1a4();
    if ((uVar12 & 1) != 0) {
      func_0x00010bcdd6a8();
    }
    func_0x000107c30250(pppuVar8 + 3);
    pppuVar9 = unaff_x19;
    func_0x00010bcdcec4();
    iVar20 = (int)pppuVar9;
    func_0x00010bcdce8c();
    if ((((ulong)pppuVar9 & 1) != 0) && (func_0x00010bcdcdf8(), iVar20 != 0)) {
      do {
        ppuVar7 = *unaff_x19;
        in_ZR = *(int *)ppuVar7 == 1;
        if ((bool)in_ZR) {
          func_0x00010bcdce7c();
          goto LAB_10bcd9480;
        }
        func_0x00010bcdccc4();
        if ((int)ppuVar7 == 0) {
          ppuVar7 = *unaff_x19;
          func_0x00010bcdcf88();
          if (((ulong)ppuVar7 & 1) == 0) {
            ppuVar7 = *unaff_x19;
            func_0x00010bcdcf78();
            if (((ulong)ppuVar7 & 1) != 0) goto LAB_10bcd9084;
            ppuVar7 = *unaff_x19;
            func_0x00010bcdd024(ppuVar7,&DAT_10f52a065);
            if ((int)ppuVar7 != 0) goto LAB_10bcd9084;
          }
          else {
LAB_10bcd9084:
            func_0x00010bcdce7c();
            FUN_10bd3df70(*unaff_x19);
          }
          func_0x00010bcdd2dc();
          func_0x00010bcdd3c0();
          pppuVar9 = unaff_x20 + 3;
          func_0x00010bcdc384();
          *(undefined4 *)((long)pppuVar9 + 0x54) = 1;
          *(undefined4 *)((long)pppuVar9 + 0x4c) = uVar13;
          *(uint *)(pppuVar9 + 2) = *(uint *)(pppuVar9 + 2) | 0x280;
          func_0x00010bcdcff4();
          FUN_10bcd9be4();
          if (((ulong)pppuVar9 & 1) == 0) {
            func_0x00010bcdd0ac();
          }
          func_0x00010bcdce8c();
        }
        else {
          func_0x00010bcdcf58(&ppuStack_a0,&ppuStack_108);
          pppuVar9 = pppuVar8;
          FUN_10bcdaef0();
          func_0x00010bcdcdd8();
          func_0x00010bcdce8c();
          if (((ulong)pppuVar9 & 1) == 0) goto LAB_10bcd9480;
        }
        pppuVar9 = unaff_x19;
        func_0x00010bcdcc58();
      } while ((int)pppuVar9 == 0);
      func_0x00010bcdd04c();
      goto LAB_10bcd8b68;
    }
  }
LAB_10bcd9480:
  pppuVar8 = &ppuStack_108;
  goto LAB_10bcd8f68;
LAB_10bcd9370:
  pppuVar8 = (undefined ***)0x0;
LAB_10bcd9374:
  pppuVar9 = appuStack_b8;
LAB_10bcd9378:
  FUN_10bcd67bc(pppuVar9);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
joined_r0x00010bcd8c18:
  if (((ulong)pppuVar8 & 1) == 0) {
LAB_10bcd93a4:
    func_0x00010bcdd0ac();
  }
  goto LAB_10bcd8b68;
}



/* Entry: 10bcd9878; end: 10bcd9a57;  */

void FUN_10bcd9878(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined **ppuVar2;
  undefined8 *puVar3;
  char ****ppppcVar4;
  long *extraout_x9;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_90 [24];
  char ***pppcStack_78;
  long lStack_70;
  char cStack_61;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_60 = &UNK_10e52b660;
  uStack_58 = 0;
  plVar6 = (long *)(param_1 + 0x18);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010bcdd23c(*plVar6);
  for (lVar7 = (long)*(int *)(param_1 + 0x20) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    func_0x00010bcdd308();
  }
  puVar5 = (undefined8 *)(param_1 + 0x90);
  func_0x00010bcdd23c(*puVar5);
  for (lVar7 = (long)*(int *)(param_1 + 0x98) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    func_0x00010bcdd308();
  }
  func_0x00010bcdd23c(*(undefined8 *)(param_1 + 0x18));
  if (!(bool)in_ZR) {
    plVar6 = extraout_x9;
  }
  plVar1 = plVar6 + *(int *)(param_1 + 0x20);
  do {
    if (plVar6 == plVar1) {
      FUN_10bcdb950(&puStack_60);
      return;
    }
    lVar7 = *plVar6;
    if (*(char *)(lVar7 + 0x50) == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&pppcStack_78,*(ulong *)(lVar7 + 0x18) & 0xfffffffffffffffc);
      if (cStack_61 < '\0') {
        ppppcVar4 = (char ****)pppcStack_78;
        if (lStack_70 != 0) goto LAB_10bcd9960;
      }
      else if (cStack_61 != '\0') {
        ppppcVar4 = &pppcStack_78;
LAB_10bcd9960:
        if (*(char *)ppppcVar4 == '_') goto LAB_10bcd9990;
      }
      func_0x00010b2e1da8(auStack_90,0x5f,&pppcStack_78);
      while( true ) {
        func_0x000107c27b9c(&pppcStack_78,auStack_90);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
LAB_10bcd9990:
        ppuVar2 = &puStack_60;
        FUN_10bcdb86c(ppuVar2,&pppcStack_78);
        if (ppuVar2 == (undefined **)0x0) break;
        func_0x00010b2e1da8(auStack_90,0x58,&pppcStack_78);
      }
      FUN_10bcdb4e8(auStack_90,&puStack_60,&pppcStack_78);
      *(undefined4 *)(lVar7 + 0x4c) = *(undefined4 *)(param_1 + 0x98);
      *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) | 0x80;
      puVar3 = puVar5;
      FUN_10bcdbb08(puVar5);
      func_0x00010bcdd0f0();
      if ((param_3 & 1) != 0) {
        func_0x00010bcdd054();
      }
      func_0x000107c3024c(puVar3 + 3,&pppcStack_78);
      func_0x00010bcdd404();
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



/* Entry: 10bcd9a58; end: 10bcd9a67;  */

void FUN_10bcd9a58(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if (*(long *)(param_1 + 0xe0) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010bcdd0e4();
    }
    func_0x00010bcdbacc();
    *(ulong *)(param_1 + 0xe0) = uVar1;
  }
  return;
}



/* Entry: 10bcd9a68; end: 10bcd9be3;  */

byte * FUN_10bcd9a68(ulong *param_1,long param_2,ulong *param_3,undefined8 param_4,
                    undefined8 param_5,ulong *param_6)

{
  char *pcVar1;
  byte bVar2;
  undefined **ppuVar3;
  byte bVar4;
  undefined1 in_ZR;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  char *pcVar12;
  ulong *puVar13;
  undefined8 extraout_x8;
  byte *pbVar14;
  undefined4 *puVar15;
  long extraout_x8_00;
  byte *pbVar16;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  uint uVar17;
  long extraout_x9;
  long extraout_x9_00;
  byte *pbVar18;
  undefined4 *puVar19;
  ulong uVar20;
  ulong *unaff_x19;
  ulong *unaff_x20;
  long lVar21;
  long lVar22;
  ulong *puVar23;
  undefined4 uVar24;
  bool bVar25;
  ulong *puStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  byte abStack_130 [4];
  undefined4 uStack_12c;
  undefined4 auStack_128 [2];
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong auStack_f0 [3];
  ulong auStack_d8 [3];
  ulong uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  uVar7 = *param_1;
  func_0x00010bcdcf78();
  if ((uVar7 & 1) == 0) {
    uVar7 = *param_1;
    func_0x00010bcdd024(uVar7,&DAT_10f52a065);
    if ((uVar7 & 1) != 0) goto LAB_10bcd9ac8;
    iVar6 = (int)*param_1;
    func_0x00010bcdcf88();
    if (iVar6 != 0) goto LAB_10bcd9ac8;
  }
  else {
LAB_10bcd9ac8:
    iVar6 = (int)*param_1;
    func_0x00010bcdcf78();
    if (iVar6 != 0) {
      func_0x00010bcdd0b4();
      func_0x00010bcdd464();
      if (iVar6 != 0) {
        func_0x00010bcdce7c(param_1,&UNK_10f83091d);
      }
    }
    iVar6 = (int)*param_1;
    func_0x00010bcdcf88();
    if (iVar6 != 0) {
      func_0x00010bcdd0b4();
      func_0x00010bcdd464();
      if (iVar6 != 0) {
        func_0x00010bcdce7c(param_1,&UNK_10f8309a1);
      }
    }
    puVar8 = auStack_68;
    func_0x00010bcdd5ac(puVar8,param_6);
    func_0x00010bcdd5bc();
    iVar6 = (int)puVar8;
    if (((ulong)puVar8 & 1) == 0) {
      func_0x00010bcdd5bc();
      iVar5 = (int)puVar8;
      if (((ulong)puVar8 & 1) == 0) {
        puVar13 = param_1;
        func_0x00010bcdd534(param_1,&DAT_10f505822);
        iVar5 = (int)puVar13;
        uVar24 = 2;
      }
      else {
        uVar24 = 3;
      }
    }
    else {
      uVar24 = 1;
      iVar5 = iVar6;
    }
    func_0x00010bcdcfec();
    *(undefined4 *)(param_2 + 0x54) = uVar24;
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x200;
    if (iVar6 != 0) {
      func_0x00010bcdd5e0();
      func_0x00010bcdd464();
      if (iVar5 != 0) {
        *(undefined1 *)(param_2 + 0x50) = 1;
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x100;
      }
    }
  }
  puVar13 = param_6;
  func_0x00010bcdd2b4(param_1,param_2);
  func_0x00010bcdcc7c();
  abStack_130[0] = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_70 = extraout_x8;
  FUN_10bcd66a4(&uStack_a0,puVar13);
  lVar21 = lStack_90;
  FUN_10bcd684c(*(undefined8 *)(uStack_a0 + 0x18),lStack_90,unaff_x19,2);
  uStack_b8 = 5;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  puVar13 = (ulong *)0x3;
  puVar11 = unaff_x20;
  func_0x00010bcd5dcc(unaff_x20,"map");
  iVar6 = 0;
  if ((int)puVar11 != 0) {
    uVar7 = *unaff_x20;
    func_0x00010bcdcf1c(uVar7,"<");
    iVar6 = (int)uVar7;
    if (iVar6 == 0) {
      puVar11 = &uStack_160;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puVar11,"map");
      iVar6 = (int)puVar11;
      bVar25 = true;
      goto LAB_10bcd9d3c;
    }
    abStack_130[0] = 1;
    uVar17 = (uint)unaff_x19[2];
    if ((uVar17 >> 7 & 1) == 0) {
      if ((uVar17 >> 9 & 1) != 0) {
        pcVar12 = &UNK_10f830143;
        goto LAB_10bcda5ec;
      }
      if ((uVar17 >> 1 & 1) != 0) {
        pcVar12 = &UNK_10f83018c;
        goto LAB_10bcda5ec;
      }
      pcVar12 = (char *)((long)unaff_x19 + 0x54);
      pcVar12[0] = '\x03';
      pcVar12[1] = '\0';
      pcVar12[2] = '\0';
      pcVar12[3] = '\0';
      *(uint *)(unaff_x19 + 2) = uVar17 | 0x200;
      pcVar12 = "<";
      func_0x00010bcdcce0();
      if (iVar6 != 0) {
        pcVar12 = (char *)((ulong)abStack_130 | 4);
        puVar13 = &uStack_120;
        func_0x00010bcdd518();
        if (iVar6 != 0) {
          pcVar12 = &DAT_10f68e8ee;
          func_0x00010bcdcce0();
          if (iVar6 != 0) {
            pcVar12 = (char *)auStack_128;
            puVar13 = &uStack_108;
            func_0x00010bcdd518();
            if (iVar6 != 0) {
              pcVar12 = ">";
              func_0x00010bcdcce0();
              if (iVar6 != 0) {
                iVar6 = (int)lVar21 + 0x18;
                func_0x00010bcdd520();
                goto LAB_10bcd9d20;
              }
            }
          }
        }
      }
    }
    else {
      pcVar12 = &UNK_10f83011d;
LAB_10bcda5ec:
      puVar13 = (ulong *)0x0;
      FUN_10bcd5e68(unaff_x20,pcVar12,0);
    }
LAB_10bcda5f4:
    func_0x00010bcdd53c();
    func_0x00010bcdce8c();
    pbVar16 = (byte *)0x0;
    goto LAB_10bcda628;
  }
LAB_10bcd9d20:
  bVar25 = false;
LAB_10bcd9d3c:
  if ((abStack_130[0] & 1) == 0) {
    uVar17 = (uint)unaff_x19[2];
    if ((uVar17 >> 9 & 1) == 0) {
      func_0x00010bcdd0b4();
      iVar6 = (int)unaff_x20 + 0x28;
      func_0x000107c27cf4();
      if (iVar6 == 0) {
        func_0x00010bcdd5e0();
        iVar6 = (int)unaff_x20 + 0x28;
        func_0x000107c27cf4();
        uVar17 = (uint)unaff_x19[2];
        if (iVar6 == 0) goto LAB_10bcd9d98;
      }
      else {
        uVar17 = (uint)unaff_x19[2];
      }
      pcVar12 = (char *)((long)unaff_x19 + 0x54);
      pcVar12[0] = '\x01';
      pcVar12[1] = '\0';
      pcVar12[2] = '\0';
      pcVar12[3] = '\0';
      uVar17 = uVar17 | 0x200;
      *(uint *)(unaff_x19 + 2) = uVar17;
    }
LAB_10bcd9d98:
    if ((uVar17 >> 9 & 1) == 0) {
      puVar11 = unaff_x20;
      func_0x00010bcdce7c(unaff_x20,&UNK_10f830069);
      iVar6 = (int)puVar11;
      pcVar12 = (char *)((long)unaff_x19 + 0x54);
      pcVar12[0] = '\x01';
      pcVar12[1] = '\0';
      pcVar12[2] = '\0';
      pcVar12[3] = '\0';
      *(uint *)(unaff_x19 + 2) = (uint)unaff_x19[2] | 0x200;
    }
    if (!bVar25) {
      pcVar12 = (char *)&uStack_b8;
      puVar13 = &uStack_160;
      func_0x00010bcdd518();
      if (iVar6 == 0) goto LAB_10bcda5f4;
    }
    in_ZR = uStack_150._7_1_ == 0;
    uVar7 = uStack_158;
    if (-1 < uStack_150) {
      uVar7 = (ulong)uStack_150._7_1_;
    }
    if (uVar7 == 0) {
      func_0x000107c2845c(lVar21 + 0x18,5);
      *(undefined4 *)(unaff_x19 + 0xb) = uStack_b8;
      *(uint *)(unaff_x19 + 2) = (uint)unaff_x19[2] | 0x400;
    }
    else {
      func_0x00010bcdd520(lVar21 + 0x18);
      func_0x00010bcdd66c();
      if (((ulong)puVar13 & 1) != 0) {
        func_0x00010bcdd054();
      }
      func_0x000107c30248(unaff_x19 + 5,&uStack_160);
    }
  }
  func_0x00010bcdd53c();
  func_0x00010bcdce8c();
  func_0x00010bcdb424(&uStack_160,*unaff_x20);
  func_0x00010bcdcf34(&uStack_a0,param_6);
  func_0x00010bcdd134();
  func_0x00010bcdd06c();
  pcVar12 = (char *)unaff_x19;
  func_0x00010bcdbb14();
  puVar13 = (ulong *)&UNK_10f830099;
  puVar11 = unaff_x20;
  func_0x00010bcdcec4(unaff_x20,pcVar12,&UNK_10f830099);
  if (((ulong)puVar11 & 1) == 0) {
LAB_10bcda614:
    puVar9 = &uStack_a0;
LAB_10bcda618:
    FUN_10bcd67bc(puVar9);
    goto LAB_10bcda61c;
  }
  pbVar14 = (byte *)(unaff_x19[3] & 0xfffffffffffffffc);
  uVar7 = (ulong)(char)pbVar14[0x17];
  pbVar16 = pbVar14;
  uVar20 = uVar7;
  if ((long)uVar7 < 0) {
    pbVar16 = *(byte **)pbVar14;
    uVar20 = *(ulong *)(pbVar14 + 8);
  }
  do {
    if (uVar20 == 0) goto LAB_10bcd9ee8;
    pbVar18 = pbVar16 + 1;
    bVar4 = *pbVar16;
    uVar20 = uVar20 - 1;
    pbVar16 = pbVar18;
  } while ((bVar4 - 0x30 < 10) || (bVar4 == 0x5f || bVar4 - 0x61 < 0x1a));
  pcVar12 = (char *)(ulong)*(uint *)(*unaff_x20 + 0x24);
  FUN_10bcd6690(*(undefined4 *)(*unaff_x20 + 0x20),pcVar12,unaff_x20[1],unaff_x19,0x10bcdc65c);
  pbVar14 = (byte *)(unaff_x19[3] & 0xfffffffffffffffc);
  uVar7 = (ulong)pbVar14[0x17];
LAB_10bcd9ee8:
  if (((uint)uVar7 >> 7 & 1) == 0) {
    uVar7 = uVar7 & 0xff;
    pbVar16 = pbVar14;
  }
  else {
    pbVar16 = *(byte **)pbVar14;
    uVar7 = *(ulong *)(pbVar14 + 8);
  }
  uVar20 = 1;
  while( true ) {
    in_ZR = uVar7 == uVar20;
    if (uVar7 <= uVar20) break;
    if ((pbVar16[1] - 0x30 < 10) && (in_ZR = *pbVar16 == 0x5f, (bool)in_ZR)) {
      pcVar12 = (char *)(ulong)*(uint *)(*unaff_x20 + 0x24);
      FUN_10bcd6690(*(undefined4 *)(*unaff_x20 + 0x20),pcVar12,unaff_x20[1],unaff_x19,0x10bcdc6a8);
      break;
    }
    uVar20 = uVar20 + 1;
    pbVar16 = pbVar16 + 1;
  }
  func_0x00010bcdce8c();
  func_0x00010bcdd330();
  puVar13 = (ulong *)0x1;
  puVar11 = unaff_x20;
  func_0x00010bcdd4b4();
  if (((ulong)puVar11 & 1) == 0) goto LAB_10bcda61c;
  func_0x00010bcdd19c(&uStack_a0,param_6);
  func_0x00010bcdd134();
  FUN_10bcd684c();
  puVar13 = (ulong *)&UNK_10f8300c4;
  pcVar12 = (char *)&uStack_b8;
  puVar11 = unaff_x20;
  func_0x00010bcdd27c(unaff_x20,pcVar12,&UNK_10f8300c4);
  if (((ulong)puVar11 & 1) == 0) goto LAB_10bcda614;
  *(undefined4 *)(unaff_x19 + 9) = uStack_b8;
  *(uint *)(unaff_x19 + 2) = (uint)unaff_x19[2] | 0x40;
  func_0x00010bcdce8c();
  iVar6 = (int)*unaff_x20;
  func_0x00010bcdd3c8();
  func_0x00010bcdcf1c();
  if (iVar6 != 0) {
    puVar11 = auStack_f0;
    puVar13 = (ulong *)0x8;
    pcVar12 = (char *)param_6;
    func_0x00010bcd6730(puVar11,param_6,8);
    iVar6 = (int)puVar11;
    func_0x00010bcdd3c8();
    func_0x00010bcdcce0();
    puVar11 = puVar13;
    if (iVar6 != 0) {
      puStack_168 = (ulong *)&UNK_10f8302e3;
      do {
        uVar7 = *unaff_x20;
        func_0x00010bcdd144(uVar7,"default");
        if ((int)uVar7 == 0) {
          uVar7 = *unaff_x20;
          FUN_10bcd5e00(uVar7,&UNK_10f8301c6,9);
          puVar9 = unaff_x20;
          if ((int)uVar7 != 0) {
            if (((byte)unaff_x19[2] >> 4 & 1) != 0) {
              func_0x00010bcdce7c(unaff_x20,&UNK_10f830307);
              func_0x000107c3025c(unaff_x19 + 7);
              *(uint *)(unaff_x19 + 2) = (uint)unaff_x19[2] & 0xffffffef;
            }
            func_0x00010bcd6730(&uStack_a0,param_6,10);
            func_0x00010bcdd134();
            FUN_10bcd684c();
            pcVar12 = &UNK_10f8301c6;
            puVar11 = (ulong *)0x9;
            puVar13 = unaff_x20;
            FUN_10bcd5e7c(unaff_x20,&UNK_10f8301c6,9);
            if (((ulong)puVar13 & 1) != 0) {
              puVar13 = unaff_x20;
              func_0x00010bcdd330();
              iVar6 = (int)puVar13;
              func_0x00010bcdce84();
              if (iVar6 != 0) {
                FUN_10bcd66a4(&uStack_b8,&uStack_a0);
                FUN_10bcd684c(*(undefined8 *)(CONCAT44(uStack_b4,uStack_b8) + 0x18),lStack_a8,
                              unaff_x19,8);
                *(uint *)(unaff_x19 + 2) = (uint)unaff_x19[2] | 0x10;
                if ((unaff_x19[1] & 1) != 0) {
                  func_0x00010bcdd6a8();
                }
                pcVar12 = (char *)(unaff_x19 + 7);
                func_0x000107c30250();
                puVar13 = (ulong *)&UNK_10f830327;
                func_0x00010bcdd180(unaff_x20,pcVar12,&UNK_10f830327);
                func_0x00010bcdd178();
                func_0x00010bcdce8c();
                goto joined_r0x00010bcda1ac;
              }
            }
            lVar21 = -0x90;
            goto LAB_10bcda99c;
          }
          pcVar12 = (char *)unaff_x19;
          FUN_10bcdab50();
          puVar13 = auStack_f0;
          func_0x00010bcdd544(unaff_x20,pcVar12,puVar13);
joined_r0x00010bcda1ac:
          puVar11 = puVar13;
          if (((ulong)puVar9 & 1) != 0) goto LAB_10bcda3b0;
          goto LAB_10bcda9a0;
        }
        if (((byte)unaff_x19[2] >> 3 & 1) != 0) {
          func_0x00010bcdce7c(unaff_x20,&UNK_10f8301d0);
          func_0x000107c3025c(unaff_x19 + 6);
          *(uint *)(unaff_x19 + 2) = (uint)unaff_x19[2] & 0xfffffff7;
        }
        pcVar12 = "default";
        puVar9 = unaff_x20;
        func_0x00010bcdd26c();
        puVar11 = puVar13;
        if ((int)puVar9 == 0) goto LAB_10bcda9a0;
        puVar11 = unaff_x20;
        func_0x00010bcdd330();
        iVar6 = (int)puVar11;
        func_0x00010bcdce84();
        puVar11 = puVar13;
        if (iVar6 == 0) goto LAB_10bcda9a0;
        func_0x00010bcdd504(&uStack_b8,param_6);
        puVar13 = unaff_x19;
        FUN_10bcd684c(*(undefined8 *)(CONCAT44(uStack_b4,uStack_b8) + 0x18),lStack_a8,unaff_x19,4);
        *(uint *)(unaff_x19 + 2) = (uint)unaff_x19[2] | 8;
        if ((unaff_x19[1] & 1) != 0) {
          func_0x00010bcdd6a8();
        }
        puVar9 = unaff_x19 + 6;
        func_0x000107c30250();
        if ((*(byte *)((long)unaff_x19 + 0x11) >> 2 & 1) == 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (puVar9,*unaff_x20 + 8);
          FUN_10bd3df70(*unaff_x20);
          goto LAB_10bcda3ac;
        }
        iVar6 = (int)unaff_x19[0xb] + -1;
        in_ZR = iVar6 == 0x11;
        puVar11 = (ulong *)0x0;
        pcVar12 = (char *)0xffffffffffffffff;
        puVar23 = (ulong *)0x7fffffffffffffff;
        puVar10 = unaff_x20;
        switch(iVar6) {
        case 0:
        case 1:
          puVar13 = unaff_x20;
          func_0x00010bcdcd34();
          if ((int)puVar13 != 0) {
            func_0x00010bcdd398();
          }
          auStack_d8[0] = 0;
          pcVar12 = (char *)auStack_d8;
          puVar13 = unaff_x20;
          func_0x00010bcd6070();
          if (((ulong)puVar13 & 1) == 0) goto code_r0x00010bcda998;
          func_0x00010bd3d0bc(&uStack_a0,auStack_d8[0]);
          func_0x000107c27fc4(puVar9,&uStack_a0);
code_r0x00010bcda3a4:
          puVar13 = &uStack_a0;
          goto code_r0x00010bcda3a8;
        case 2:
        case 0xf:
        case 0x11:
          goto code_r0x00010bcda20c;
        case 3:
        case 5:
          goto code_r0x00010bcda294;
        case 4:
        case 0xe:
        case 0x10:
          puVar23 = (ulong *)0x7fffffff;
code_r0x00010bcda20c:
          puVar13 = unaff_x20;
          func_0x00010bcdcd34();
          if ((int)puVar13 != 0) {
            func_0x00010bcdd398();
            puVar23 = (ulong *)((long)puVar23 + 1);
          }
          puVar11 = &uStack_c0;
          puVar13 = unaff_x20;
          func_0x00010bcdd34c(unaff_x20,puVar23,puVar11);
          pcVar12 = (char *)puVar23;
          if (((ulong)puVar13 & 1) == 0) goto code_r0x00010bcda998;
          func_0x0001089b4628(&uStack_a0,uStack_c0);
          func_0x0001089ddc68(auStack_d8);
          func_0x00010bcdd4d4();
code_r0x00010bcda2dc:
          puVar13 = auStack_d8;
code_r0x00010bcda3a8:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar13);
          puVar13 = puVar11;
          break;
        case 6:
        case 0xc:
          pcVar12 = (char *)0xffffffff;
code_r0x00010bcda294:
          puVar13 = unaff_x20;
          func_0x00010bcdcd34();
          if ((int)puVar13 != 0) {
            func_0x00010bcdce7c(unaff_x20,&UNK_10f830218);
          }
          puVar11 = &uStack_c0;
          puVar13 = unaff_x20;
          func_0x00010bcdd34c(unaff_x20,pcVar12,puVar11);
          if (((ulong)puVar13 & 1) == 0) goto code_r0x00010bcda998;
          func_0x0001089b4628(&uStack_a0,uStack_c0);
          func_0x0001089ddc68(auStack_d8);
          func_0x00010bcdd4d4();
          goto code_r0x00010bcda2dc;
        case 7:
          puVar13 = (ulong *)0x4;
          puVar11 = unaff_x20;
          func_0x00010bcd5dcc(unaff_x20,"true",4);
          pcVar12 = "true";
          if (((ulong)puVar11 & 1) == 0) {
            puVar13 = (ulong *)0x5;
            puVar11 = unaff_x20;
            func_0x00010bcd5dcc(unaff_x20,&DAT_10f6842c6,5);
            pcVar12 = "false";
            if ((int)puVar11 == 0) {
              puStack_168 = (ulong *)&UNK_10f83025b;
              goto code_r0x00010bcda98c;
            }
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                    (puVar9,pcVar12);
          break;
        case 8:
          puVar11 = (ulong *)&UNK_10f830277;
          func_0x00010bcdd180(unaff_x20,puVar9,&UNK_10f830277);
          goto code_r0x00010bcda384;
        case 9:
        case 10:
code_r0x00010bcda98c:
          puVar11 = (ulong *)0x0;
          FUN_10bcd5e68(unaff_x20,puStack_168,0);
          pcVar12 = (char *)puStack_168;
          goto code_r0x00010bcda998;
        case 0xb:
          puVar11 = (ulong *)&UNK_10f8302a0;
          puVar13 = unaff_x20;
          pcVar12 = (char *)puVar9;
          func_0x00010bcdd180(unaff_x20,puVar9,&UNK_10f8302a0);
          if ((int)puVar13 != 0) {
            uVar7 = (ulong)*(char *)((long)puVar9 + 0x17);
            puVar13 = puVar9;
            if ((long)uVar7 < 0) {
              uVar7 = puVar9[1];
              puVar13 = (ulong *)*puVar9;
            }
            func_0x00010ae897f0(&uStack_a0,puVar13,uVar7);
            func_0x000107c27b9c(puVar9,&uStack_a0);
            goto code_r0x00010bcda3a4;
          }
code_r0x00010bcda998:
          lVar21 = -0xa8;
LAB_10bcda99c:
          FUN_10bcd67bc(&stack0xfffffffffffffff0 + lVar21);
          goto LAB_10bcda9a0;
        case 0xd:
          puVar11 = (ulong *)&UNK_10f8302b1;
          func_0x00010bcdcec4(unaff_x20,puVar9,&UNK_10f8302b1);
code_r0x00010bcda384:
          pcVar12 = (char *)puVar9;
          puVar13 = puVar11;
          if (((ulong)puVar10 & 1) == 0) goto code_r0x00010bcda998;
        }
LAB_10bcda3ac:
        func_0x00010bcdd178();
LAB_10bcda3b0:
        puVar11 = unaff_x20;
        func_0x00010bcdce94(unaff_x20,&DAT_10f68e8ee);
      } while (((ulong)puVar11 & 1) != 0);
      pcVar12 = &DAT_10f62a9ea;
      func_0x00010bcdcce0();
      func_0x00010bcdcf2c();
      if (((ulong)puVar11 & 1) == 0) goto LAB_10bcda61c;
      goto LAB_10bcda3dc;
    }
LAB_10bcda9a0:
    puVar9 = auStack_f0;
    puVar13 = puVar11;
    goto LAB_10bcda618;
  }
LAB_10bcda3dc:
  if (((*(byte *)((long)unaff_x19 + 0x11) >> 2 & 1) == 0) || (in_ZR = 0, (int)unaff_x19[0xb] != 10))
  {
    pcVar12 = ";";
    puVar13 = (ulong *)0x1;
    puVar11 = unaff_x20;
    FUN_10bcd6520();
    if ((int)puVar11 == 0) goto LAB_10bcda61c;
LAB_10bcda5b0:
    in_ZR = 0;
    if (abStack_130[0] == 1) {
      func_0x00010bcdc378();
      pbVar16 = (byte *)(unaff_x19[3] & 0xfffffffffffffffc);
      lVar21 = (long)(char)pbVar16[0x17];
      if (lVar21 < 0) {
        lVar21 = *(long *)(pbVar16 + 8);
        pbVar16 = *(byte **)pbVar16;
      }
      uStack_a0 = 0;
      uStack_98 = 0;
      lStack_90 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                (&uStack_a0,lVar21 + 6);
      bVar25 = true;
      for (; lVar21 != 0; lVar21 = lVar21 + -1) {
        bVar4 = *pbVar16;
        uVar17 = (uint)bVar4;
        if (uVar17 != 0x5f) {
          bVar2 = bVar4 - 0x20;
          if (!(bool)(bVar25 & uVar17 - 0x61 < 0x1a)) {
            bVar2 = bVar4;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (&uStack_a0,(int)(char)bVar2);
        }
        pbVar16 = pbVar16 + 1;
        bVar25 = uVar17 == 0x5f;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&uStack_a0,&UNK_10e60651c);
      func_0x00010bcdd66c();
      if (((ulong)puVar13 & 1) != 0) {
        func_0x00010bcdd054();
      }
      func_0x000107c30248(unaff_x19 + 5,&uStack_a0);
      func_0x00010bcdd634((uint)param_3[2] | 1);
      if (((ulong)puVar13 & 1) != 0) {
        func_0x00010bcdd054();
      }
      func_0x000107c30248(param_3 + 0x1b,&uStack_a0);
      puVar11 = param_3;
      FUN_10bcd9a58();
      *(char *)((long)puVar11 + 0x53) = '\x01';
      *(uint *)(puVar11 + 5) = (uint)puVar11[5] | 0x10;
      unaff_x20 = param_3 + 3;
      func_0x00010bcdc384();
      func_0x00010bcdd0f0();
      if (((ulong)puVar13 & 1) != 0) {
        func_0x00010bcdd054();
      }
      func_0x0001056439e0(unaff_x20 + 3,"key");
      pcVar12 = (char *)((long)unaff_x20 + 0x54);
      pcVar12[0] = '\x01';
      pcVar12[1] = '\0';
      pcVar12[2] = '\0';
      pcVar12[3] = '\0';
      uVar17 = (uint)unaff_x20[2];
      *(undefined4 *)(unaff_x20 + 9) = 1;
      *(uint *)(unaff_x20 + 2) = uVar17 | 0x240;
      uVar7 = uStack_118;
      if (-1 < (long)uStack_110) {
        uVar7 = uStack_110 >> 0x38;
      }
      if (uVar7 == 0) {
        *(undefined4 *)(unaff_x20 + 0xb) = uStack_12c;
        *(uint *)(unaff_x20 + 2) = uVar17 | 0x640;
      }
      else {
        *(uint *)(unaff_x20 + 2) = uVar17 | 0x244;
        puVar13 = (ulong *)unaff_x20[1];
        if (((ulong)puVar13 & 1) != 0) {
          func_0x00010bcdd054();
        }
        func_0x000107c30248(unaff_x20 + 5,&uStack_120);
      }
      param_3 = param_3 + 3;
      func_0x00010bcdc384();
      func_0x00010bcdd0f0();
      if (((ulong)puVar13 & 1) != 0) {
        func_0x00010bcdd054();
      }
      pcVar12 = "value";
      puVar11 = param_3 + 3;
      func_0x0001056439e0();
      pcVar1 = (char *)((long)param_3 + 0x54);
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar17 = (uint)param_3[2];
      *(undefined4 *)(param_3 + 9) = 2;
      *(uint *)(param_3 + 2) = uVar17 | 0x240;
      uVar7 = uStack_100;
      if (-1 < (long)uStack_f8) {
        uVar7 = uStack_f8 >> 0x38;
      }
      if (uVar7 == 0) {
        *(undefined4 *)(param_3 + 0xb) = auStack_128[0];
        *(uint *)(param_3 + 2) = uVar17 | 0x640;
      }
      else {
        func_0x00010bcdd634(uVar17 | 0x244);
        lVar21 = extraout_x9;
        if (((ulong)puVar13 & 1) != 0) {
          func_0x00010bcdd054();
          lVar21 = extraout_x9_00;
        }
        puVar11 = param_3 + 5;
        pcVar12 = (char *)(lVar21 + 0x28);
        func_0x000107c30248();
      }
      lVar21 = 0;
      while( true ) {
        iVar6 = (int)puVar11;
        ppuVar3 = &PTR_PTR_113406270;
        if ((undefined **)unaff_x19[8] != (undefined **)0x0) {
          ppuVar3 = (undefined **)unaff_x19[8];
        }
        in_ZR = lVar21 == *(int *)(ppuVar3 + 0xc);
        if (*(int *)(ppuVar3 + 0xc) <= lVar21) break;
        func_0x00010bcdd43c();
        lVar22 = *extraout_x8_01;
        if (*(int *)(lVar22 + 0x20) == 1) {
          func_0x00010bcdcecc(*(undefined8 *)(lVar22 + 0x18));
          func_0x00010bcdd33c();
          if ((iVar6 != 0) &&
             (func_0x00010bcdcecc(*(undefined8 *)(lVar22 + 0x18)),
             (*(byte *)(extraout_x8_02 + 0x20) & 1) == 0)) {
            if ((int)unaff_x20[0xb] == 9) {
              FUN_10bcdab50(unaff_x20);
              func_0x00010bcdd3dc();
              func_0x00010bcdd3b8();
            }
            if ((int)param_3[0xb] == 9) {
              FUN_10bcdab50(param_3);
              func_0x00010bcdd3dc();
              func_0x00010bcdd3b8();
            }
          }
        }
        func_0x00010bcdcecc(*(undefined8 *)(lVar22 + 0x18));
        puVar11 = (ulong *)(*(ulong *)(extraout_x8_03 + 0x18) & 0xfffffffffffffffc);
        pcVar12 = &DAT_10f2dd3d4;
        func_0x000107c27cf4();
        if (((int)puVar11 != 0) &&
           (func_0x00010bcdcecc(*(undefined8 *)(lVar22 + 0x18)),
           (*(byte *)(extraout_x8_04 + 0x20) & 1) == 0)) {
          FUN_10bcdab50(unaff_x20);
          func_0x00010bcdd3dc();
          func_0x00010bcdd3b8();
          puVar11 = param_3;
          FUN_10bcdab50();
          func_0x00010bcdd3dc();
          func_0x00010bcdd3b8();
        }
        lVar21 = lVar21 + 1;
      }
      func_0x00010bcdd088();
    }
    pbVar16 = (byte *)0x1;
  }
  else {
    FUN_10bcd66a4(&uStack_a0,param_4);
    lVar21 = lStack_90;
    puVar15 = *(undefined4 **)(param_6[2] + 0x38);
    puVar19 = *(undefined4 **)(lStack_90 + 0x38);
    *puVar19 = *puVar15;
    puVar19[1] = puVar15[1];
    func_0x000107c2845c(lStack_90 + 0x18,param_5);
    func_0x000107c2845c(lVar21 + 0x18,(int)param_3[1]);
    pcVar12 = (char *)param_3;
    func_0x00010bcdc378();
    uVar20 = unaff_x19[3];
    *(uint *)((long)pcVar12 + 0x10) = (uint)*(ulong *)((long)pcVar12 + 0x10) | 1;
    uVar7 = *(ulong *)((long)pcVar12 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000107c30248((ulong *)((long)pcVar12 + 0xd8),uVar20 & 0xfffffffffffffffc,uVar7);
    func_0x00010bcdcf34(&uStack_b8,&uStack_a0);
    lVar21 = lStack_a8;
    puVar15 = *(undefined4 **)(lStack_a8 + 0x38);
    *puVar15 = uStack_140;
    puVar15[1] = uStack_13c;
    FUN_10bcd6800();
    func_0x00010bcdd06c(*(undefined8 *)(CONCAT44(uStack_b4,uStack_b8) + 0x18),lVar21,pcVar12);
    func_0x00010bcdd178();
    func_0x00010bcdd54c();
    func_0x00010bcdd0cc(lStack_a8);
    *(undefined4 *)(extraout_x8_00 + 4) = uStack_13c;
    FUN_10bcd6800();
    func_0x00010bcdd178();
    pbVar16 = (byte *)(*(ulong *)((long)pcVar12 + 0xd8) & 0xfffffffffffffffc);
    if ((char)pbVar16[0x17] < '\0') {
      pbVar16 = *(byte **)pbVar16;
    }
    bVar4 = *pbVar16;
    in_ZR = bVar4 == 0x41;
    if (((char)bVar4 < 'A') || (in_ZR = bVar4 == 0x5b, 0x5a < bVar4)) {
      FUN_10bcd6568(unaff_x20,uStack_140,uStack_13c,&UNK_10f8300db,0);
    }
    func_0x00010bcdbb14(unaff_x19);
    func_0x00010ae87db0();
    uVar7 = *(ulong *)((long)pcVar12 + 0xd8);
    *(uint *)(unaff_x19 + 2) = (uint)unaff_x19[2] | 4;
    puVar13 = (ulong *)unaff_x19[1];
    if (((ulong)puVar13 & 1) != 0) {
      puVar13 = *(ulong **)((ulong)puVar13 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x19 + 5,uVar7 & 0xfffffffffffffffc,puVar13);
    iVar6 = (int)*unaff_x20;
    func_0x00010bcdceb4();
    FUN_10bcd5e00();
    if (iVar6 == 0) {
      pcVar12 = &UNK_10f830109;
      func_0x00010bcdce7c(unaff_x20);
      goto LAB_10bcda614;
    }
    puVar13 = &uStack_a0;
    FUN_10bcd8b08();
    func_0x00010bcdce8c();
    if (((ulong)unaff_x20 & 1) != 0) goto LAB_10bcda5b0;
LAB_10bcda61c:
    pbVar16 = (byte *)0x0;
  }
  func_0x00010bcdcf44(&uStack_160);
LAB_10bcda628:
  pbVar14 = abStack_130;
  FUN_10bcdbb3c();
  func_0x00010bcdcb14(uStack_70);
  if ((bool)in_ZR) {
    return pbVar16;
  }
  ___stack_chk_fail();
  FUN_10bcd67bc(&uStack_b8);
  FUN_10bcd67bc(auStack_f0);
  func_0x00010bcdcf44(&uStack_160);
  pbVar16 = abStack_130;
  FUN_10bcdbb3c();
  func_0x00010bcdcf24();
  func_0x00010bcdd060();
  FUN_10bcdaf40();
  func_0x00010bcdd47c();
  if (pbVar16 == (byte *)0x0) {
    FUN_10bcdade4(pbVar14,puVar13);
    if ((int)pbVar14 == 0) {
      return pbVar14;
    }
  }
  else {
    func_0x00010bcdd0b4();
    iVar6 = (int)pbVar16;
    func_0x00010bcdd5a4();
    if ((iVar6 != 0) && ((int)*(ulong *)((long)pcVar12 + 0x10) == 10)) {
      func_0x00010bcdccd4();
    }
    *(int *)unaff_x20 = (int)*(ulong *)((long)pcVar12 + 0x10);
    func_0x00010bcdd074();
  }
  return (byte *)0x1;
}



/* Entry: 10bcd9be4; end: 10bcdaad7;  */

byte * FUN_10bcd9be4(undefined8 param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,
                    undefined8 param_5,ulong *param_6)

{
  char *pcVar1;
  byte bVar2;
  undefined **ppuVar3;
  byte bVar4;
  undefined1 in_ZR;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  char *pcVar10;
  ulong *puVar11;
  undefined8 extraout_x8;
  byte *pbVar12;
  undefined4 *puVar13;
  long extraout_x8_00;
  byte *pbVar14;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  uint uVar15;
  long extraout_x9;
  long extraout_x9_00;
  byte *pbVar16;
  undefined4 *puVar17;
  ulong uVar18;
  ulong *unaff_x19;
  ulong *unaff_x20;
  long lVar19;
  long lVar20;
  ulong *puVar21;
  bool bVar22;
  ulong *puStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  byte abStack_130 [4];
  undefined4 uStack_12c;
  undefined4 auStack_128 [2];
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong auStack_f0 [3];
  ulong auStack_d8 [3];
  ulong uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_70;
  
  puVar11 = param_6;
  func_0x00010bcdd2b4();
  func_0x00010bcdcc7c();
  abStack_130[0] = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_70 = extraout_x8;
  FUN_10bcd66a4(&uStack_a0,puVar11);
  lVar19 = lStack_90;
  FUN_10bcd684c(*(undefined8 *)(uStack_a0 + 0x18),lStack_90);
  uStack_b8 = 5;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  puVar11 = (ulong *)0x3;
  puVar9 = unaff_x20;
  func_0x00010bcd5dcc();
  iVar5 = 0;
  if ((int)puVar9 != 0) {
    uVar6 = *unaff_x20;
    func_0x00010bcdcf1c(uVar6,"<");
    iVar5 = (int)uVar6;
    if (iVar5 == 0) {
      puVar9 = &uStack_160;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puVar9,"map");
      iVar5 = (int)puVar9;
      bVar22 = true;
      goto LAB_10bcd9d3c;
    }
    abStack_130[0] = 1;
    uVar15 = (uint)unaff_x19[2];
    if ((uVar15 >> 7 & 1) == 0) {
      if ((uVar15 >> 9 & 1) != 0) {
        pcVar10 = &UNK_10f830143;
        goto LAB_10bcda5ec;
      }
      if ((uVar15 >> 1 & 1) != 0) {
        pcVar10 = &UNK_10f83018c;
        goto LAB_10bcda5ec;
      }
      pcVar10 = (char *)((long)unaff_x19 + 0x54);
      pcVar10[0] = '\x03';
      pcVar10[1] = '\0';
      pcVar10[2] = '\0';
      pcVar10[3] = '\0';
      *(uint *)(unaff_x19 + 2) = uVar15 | 0x200;
      pcVar10 = "<";
      func_0x00010bcdcce0();
      if (iVar5 != 0) {
        pcVar10 = (char *)((ulong)abStack_130 | 4);
        puVar11 = &uStack_120;
        func_0x00010bcdd518();
        if (iVar5 != 0) {
          pcVar10 = &DAT_10f68e8ee;
          func_0x00010bcdcce0();
          if (iVar5 != 0) {
            pcVar10 = (char *)auStack_128;
            puVar11 = &uStack_108;
            func_0x00010bcdd518();
            if (iVar5 != 0) {
              pcVar10 = ">";
              func_0x00010bcdcce0();
              if (iVar5 != 0) {
                iVar5 = (int)lVar19 + 0x18;
                func_0x00010bcdd520();
                goto LAB_10bcd9d20;
              }
            }
          }
        }
      }
    }
    else {
      pcVar10 = &UNK_10f83011d;
LAB_10bcda5ec:
      puVar11 = (ulong *)0x0;
      FUN_10bcd5e68();
    }
LAB_10bcda5f4:
    func_0x00010bcdd53c();
    func_0x00010bcdce8c();
    pbVar14 = (byte *)0x0;
    goto LAB_10bcda628;
  }
LAB_10bcd9d20:
  bVar22 = false;
LAB_10bcd9d3c:
  if ((abStack_130[0] & 1) == 0) {
    uVar15 = (uint)unaff_x19[2];
    if ((uVar15 >> 9 & 1) == 0) {
      func_0x00010bcdd0b4();
      iVar5 = (int)unaff_x20 + 0x28;
      func_0x000107c27cf4();
      if (iVar5 == 0) {
        func_0x00010bcdd5e0();
        iVar5 = (int)unaff_x20 + 0x28;
        func_0x000107c27cf4();
        uVar15 = (uint)unaff_x19[2];
        if (iVar5 == 0) goto LAB_10bcd9d98;
      }
      else {
        uVar15 = (uint)unaff_x19[2];
      }
      pcVar10 = (char *)((long)unaff_x19 + 0x54);
      pcVar10[0] = '\x01';
      pcVar10[1] = '\0';
      pcVar10[2] = '\0';
      pcVar10[3] = '\0';
      uVar15 = uVar15 | 0x200;
      *(uint *)(unaff_x19 + 2) = uVar15;
    }
LAB_10bcd9d98:
    if ((uVar15 >> 9 & 1) == 0) {
      puVar9 = unaff_x20;
      func_0x00010bcdce7c();
      iVar5 = (int)puVar9;
      pcVar10 = (char *)((long)unaff_x19 + 0x54);
      pcVar10[0] = '\x01';
      pcVar10[1] = '\0';
      pcVar10[2] = '\0';
      pcVar10[3] = '\0';
      *(uint *)(unaff_x19 + 2) = (uint)unaff_x19[2] | 0x200;
    }
    if (!bVar22) {
      pcVar10 = (char *)&uStack_b8;
      puVar11 = &uStack_160;
      func_0x00010bcdd518();
      if (iVar5 == 0) goto LAB_10bcda5f4;
    }
    in_ZR = uStack_150._7_1_ == 0;
    uVar6 = uStack_158;
    if (-1 < uStack_150) {
      uVar6 = (ulong)uStack_150._7_1_;
    }
    if (uVar6 == 0) {
      func_0x000107c2845c(lVar19 + 0x18,5);
      *(undefined4 *)(unaff_x19 + 0xb) = uStack_b8;
      *(uint *)(unaff_x19 + 2) = (uint)unaff_x19[2] | 0x400;
    }
    else {
      func_0x00010bcdd520(lVar19 + 0x18);
      func_0x00010bcdd66c();
      if (((ulong)puVar11 & 1) != 0) {
        func_0x00010bcdd054();
      }
      func_0x000107c30248(unaff_x19 + 5,&uStack_160);
    }
  }
  func_0x00010bcdd53c();
  func_0x00010bcdce8c();
  func_0x00010bcdb424(&uStack_160,*unaff_x20);
  func_0x00010bcdcf34(&uStack_a0,param_6);
  func_0x00010bcdd134();
  func_0x00010bcdd06c();
  pcVar10 = (char *)unaff_x19;
  func_0x00010bcdbb14();
  puVar11 = (ulong *)&UNK_10f830099;
  puVar9 = unaff_x20;
  func_0x00010bcdcec4();
  if (((ulong)puVar9 & 1) == 0) {
LAB_10bcda614:
    puVar7 = &uStack_a0;
LAB_10bcda618:
    FUN_10bcd67bc(puVar7);
    goto LAB_10bcda61c;
  }
  pbVar12 = (byte *)(unaff_x19[3] & 0xfffffffffffffffc);
  uVar6 = (ulong)(char)pbVar12[0x17];
  pbVar14 = pbVar12;
  uVar18 = uVar6;
  if ((long)uVar6 < 0) {
    pbVar14 = *(byte **)pbVar12;
    uVar18 = *(ulong *)(pbVar12 + 8);
  }
  do {
    if (uVar18 == 0) goto LAB_10bcd9ee8;
    pbVar16 = pbVar14 + 1;
    bVar4 = *pbVar14;
    uVar18 = uVar18 - 1;
    pbVar14 = pbVar16;
  } while ((bVar4 - 0x30 < 10) || (bVar4 == 0x5f || bVar4 - 0x61 < 0x1a));
  pcVar10 = (char *)(ulong)*(uint *)(*unaff_x20 + 0x24);
  FUN_10bcd6690(*(undefined4 *)(*unaff_x20 + 0x20),pcVar10,unaff_x20[1]);
  pbVar12 = (byte *)(unaff_x19[3] & 0xfffffffffffffffc);
  uVar6 = (ulong)pbVar12[0x17];
LAB_10bcd9ee8:
  if (((uint)uVar6 >> 7 & 1) == 0) {
    uVar6 = uVar6 & 0xff;
    pbVar14 = pbVar12;
  }
  else {
    pbVar14 = *(byte **)pbVar12;
    uVar6 = *(ulong *)(pbVar12 + 8);
  }
  uVar18 = 1;
  while( true ) {
    in_ZR = uVar6 == uVar18;
    if (uVar6 <= uVar18) break;
    if ((pbVar14[1] - 0x30 < 10) && (in_ZR = *pbVar14 == 0x5f, (bool)in_ZR)) {
      pcVar10 = (char *)(ulong)*(uint *)(*unaff_x20 + 0x24);
      FUN_10bcd6690(*(undefined4 *)(*unaff_x20 + 0x20),pcVar10,unaff_x20[1]);
      break;
    }
    uVar18 = uVar18 + 1;
    pbVar14 = pbVar14 + 1;
  }
  func_0x00010bcdce8c();
  func_0x00010bcdd330();
  puVar11 = (ulong *)0x1;
  puVar9 = unaff_x20;
  func_0x00010bcdd4b4();
  if (((ulong)puVar9 & 1) == 0) goto LAB_10bcda61c;
  func_0x00010bcdd19c(&uStack_a0,param_6);
  func_0x00010bcdd134();
  FUN_10bcd684c();
  puVar11 = (ulong *)&UNK_10f8300c4;
  pcVar10 = (char *)&uStack_b8;
  puVar9 = unaff_x20;
  func_0x00010bcdd27c();
  if (((ulong)puVar9 & 1) == 0) goto LAB_10bcda614;
  *(undefined4 *)(unaff_x19 + 9) = uStack_b8;
  *(uint *)(unaff_x19 + 2) = (uint)unaff_x19[2] | 0x40;
  func_0x00010bcdce8c();
  iVar5 = (int)*unaff_x20;
  func_0x00010bcdd3c8();
  func_0x00010bcdcf1c();
  if (iVar5 != 0) {
    puVar9 = auStack_f0;
    puVar11 = (ulong *)0x8;
    pcVar10 = (char *)param_6;
    func_0x00010bcd6730(puVar9,param_6,8);
    iVar5 = (int)puVar9;
    func_0x00010bcdd3c8();
    func_0x00010bcdcce0();
    puVar9 = puVar11;
    if (iVar5 != 0) {
      puStack_168 = (ulong *)&UNK_10f8302e3;
      do {
        uVar6 = *unaff_x20;
        func_0x00010bcdd144(uVar6,"default");
        if ((int)uVar6 == 0) {
          uVar6 = *unaff_x20;
          FUN_10bcd5e00(uVar6,&UNK_10f8301c6,9);
          puVar7 = unaff_x20;
          if ((int)uVar6 != 0) {
            if (((byte)unaff_x19[2] >> 4 & 1) != 0) {
              func_0x00010bcdce7c();
              func_0x000107c3025c(unaff_x19 + 7);
              *(uint *)(unaff_x19 + 2) = (uint)unaff_x19[2] & 0xffffffef;
            }
            func_0x00010bcd6730(&uStack_a0,param_6,10);
            func_0x00010bcdd134();
            FUN_10bcd684c();
            pcVar10 = &UNK_10f8301c6;
            puVar9 = (ulong *)0x9;
            puVar11 = unaff_x20;
            FUN_10bcd5e7c();
            if (((ulong)puVar11 & 1) != 0) {
              puVar11 = unaff_x20;
              func_0x00010bcdd330();
              iVar5 = (int)puVar11;
              func_0x00010bcdce84();
              if (iVar5 != 0) {
                FUN_10bcd66a4(&uStack_b8,&uStack_a0);
                FUN_10bcd684c(*(undefined8 *)(CONCAT44(uStack_b4,uStack_b8) + 0x18),lStack_a8);
                *(uint *)(unaff_x19 + 2) = (uint)unaff_x19[2] | 0x10;
                if ((unaff_x19[1] & 1) != 0) {
                  func_0x00010bcdd6a8();
                }
                pcVar10 = (char *)(unaff_x19 + 7);
                func_0x000107c30250();
                puVar11 = (ulong *)&UNK_10f830327;
                func_0x00010bcdd180();
                func_0x00010bcdd178();
                func_0x00010bcdce8c();
                goto joined_r0x00010bcda1ac;
              }
            }
            lVar19 = -0x90;
            goto LAB_10bcda99c;
          }
          pcVar10 = (char *)unaff_x19;
          FUN_10bcdab50();
          puVar11 = auStack_f0;
          func_0x00010bcdd544();
joined_r0x00010bcda1ac:
          puVar9 = puVar11;
          if (((ulong)puVar7 & 1) != 0) goto LAB_10bcda3b0;
          goto LAB_10bcda9a0;
        }
        if (((byte)unaff_x19[2] >> 3 & 1) != 0) {
          func_0x00010bcdce7c();
          func_0x000107c3025c(unaff_x19 + 6);
          *(uint *)(unaff_x19 + 2) = (uint)unaff_x19[2] & 0xfffffff7;
        }
        pcVar10 = "default";
        puVar7 = unaff_x20;
        func_0x00010bcdd26c();
        puVar9 = puVar11;
        if ((int)puVar7 == 0) goto LAB_10bcda9a0;
        puVar9 = unaff_x20;
        func_0x00010bcdd330();
        iVar5 = (int)puVar9;
        func_0x00010bcdce84();
        puVar9 = puVar11;
        if (iVar5 == 0) goto LAB_10bcda9a0;
        func_0x00010bcdd504(&uStack_b8,param_6);
        puVar11 = unaff_x19;
        FUN_10bcd684c(*(undefined8 *)(CONCAT44(uStack_b4,uStack_b8) + 0x18),lStack_a8);
        *(uint *)(unaff_x19 + 2) = (uint)unaff_x19[2] | 8;
        if ((unaff_x19[1] & 1) != 0) {
          func_0x00010bcdd6a8();
        }
        puVar7 = unaff_x19 + 6;
        func_0x000107c30250();
        if ((*(byte *)((long)unaff_x19 + 0x11) >> 2 & 1) == 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (puVar7,*unaff_x20 + 8);
          FUN_10bd3df70(*unaff_x20);
          goto LAB_10bcda3ac;
        }
        iVar5 = (int)unaff_x19[0xb] + -1;
        in_ZR = iVar5 == 0x11;
        puVar9 = (ulong *)0x0;
        pcVar10 = (char *)0xffffffffffffffff;
        puVar21 = (ulong *)0x7fffffffffffffff;
        puVar8 = unaff_x20;
        switch(iVar5) {
        case 0:
        case 1:
          puVar11 = unaff_x20;
          func_0x00010bcdcd34();
          if ((int)puVar11 != 0) {
            func_0x00010bcdd398();
          }
          auStack_d8[0] = 0;
          pcVar10 = (char *)auStack_d8;
          puVar11 = unaff_x20;
          func_0x00010bcd6070();
          if (((ulong)puVar11 & 1) == 0) goto code_r0x00010bcda998;
          func_0x00010bd3d0bc(&uStack_a0,auStack_d8[0]);
          func_0x000107c27fc4(puVar7,&uStack_a0);
code_r0x00010bcda3a4:
          puVar11 = &uStack_a0;
          goto code_r0x00010bcda3a8;
        case 2:
        case 0xf:
        case 0x11:
          goto code_r0x00010bcda20c;
        case 3:
        case 5:
          goto code_r0x00010bcda294;
        case 4:
        case 0xe:
        case 0x10:
          puVar21 = (ulong *)0x7fffffff;
code_r0x00010bcda20c:
          puVar11 = unaff_x20;
          func_0x00010bcdcd34();
          if ((int)puVar11 != 0) {
            func_0x00010bcdd398();
            puVar21 = (ulong *)((long)puVar21 + 1);
          }
          puVar9 = &uStack_c0;
          puVar11 = unaff_x20;
          func_0x00010bcdd34c();
          pcVar10 = (char *)puVar21;
          if (((ulong)puVar11 & 1) == 0) goto code_r0x00010bcda998;
          func_0x0001089b4628(&uStack_a0,uStack_c0);
          func_0x0001089ddc68(auStack_d8);
          func_0x00010bcdd4d4();
code_r0x00010bcda2dc:
          puVar11 = auStack_d8;
code_r0x00010bcda3a8:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar11);
          puVar11 = puVar9;
          break;
        case 6:
        case 0xc:
          pcVar10 = (char *)0xffffffff;
code_r0x00010bcda294:
          puVar11 = unaff_x20;
          func_0x00010bcdcd34();
          if ((int)puVar11 != 0) {
            func_0x00010bcdce7c();
          }
          puVar9 = &uStack_c0;
          puVar11 = unaff_x20;
          func_0x00010bcdd34c();
          if (((ulong)puVar11 & 1) == 0) goto code_r0x00010bcda998;
          func_0x0001089b4628(&uStack_a0,uStack_c0);
          func_0x0001089ddc68(auStack_d8);
          func_0x00010bcdd4d4();
          goto code_r0x00010bcda2dc;
        case 7:
          puVar11 = (ulong *)0x4;
          puVar9 = unaff_x20;
          func_0x00010bcd5dcc();
          pcVar10 = "true";
          if (((ulong)puVar9 & 1) == 0) {
            puVar11 = (ulong *)0x5;
            puVar9 = unaff_x20;
            func_0x00010bcd5dcc();
            pcVar10 = "false";
            if ((int)puVar9 == 0) {
              puStack_168 = (ulong *)&UNK_10f83025b;
              goto code_r0x00010bcda98c;
            }
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                    (puVar7,pcVar10);
          break;
        case 8:
          puVar9 = (ulong *)&UNK_10f830277;
          func_0x00010bcdd180();
          goto code_r0x00010bcda384;
        case 9:
        case 10:
code_r0x00010bcda98c:
          puVar9 = (ulong *)0x0;
          FUN_10bcd5e68();
          pcVar10 = (char *)puStack_168;
          goto code_r0x00010bcda998;
        case 0xb:
          puVar9 = (ulong *)&UNK_10f8302a0;
          puVar11 = unaff_x20;
          pcVar10 = (char *)puVar7;
          func_0x00010bcdd180();
          if ((int)puVar11 != 0) {
            uVar6 = (ulong)*(char *)((long)puVar7 + 0x17);
            puVar11 = puVar7;
            if ((long)uVar6 < 0) {
              uVar6 = puVar7[1];
              puVar11 = (ulong *)*puVar7;
            }
            func_0x00010ae897f0(&uStack_a0,puVar11,uVar6);
            func_0x000107c27b9c(puVar7,&uStack_a0);
            goto code_r0x00010bcda3a4;
          }
code_r0x00010bcda998:
          lVar19 = -0xa8;
LAB_10bcda99c:
          FUN_10bcd67bc(&stack0xfffffffffffffff0 + lVar19);
          goto LAB_10bcda9a0;
        case 0xd:
          puVar9 = (ulong *)&UNK_10f8302b1;
          func_0x00010bcdcec4();
code_r0x00010bcda384:
          pcVar10 = (char *)puVar7;
          puVar11 = puVar9;
          if (((ulong)puVar8 & 1) == 0) goto code_r0x00010bcda998;
        }
LAB_10bcda3ac:
        func_0x00010bcdd178();
LAB_10bcda3b0:
        puVar9 = unaff_x20;
        func_0x00010bcdce94();
      } while (((ulong)puVar9 & 1) != 0);
      pcVar10 = &DAT_10f62a9ea;
      func_0x00010bcdcce0();
      func_0x00010bcdcf2c();
      if (((ulong)puVar9 & 1) == 0) goto LAB_10bcda61c;
      goto LAB_10bcda3dc;
    }
LAB_10bcda9a0:
    puVar7 = auStack_f0;
    puVar11 = puVar9;
    goto LAB_10bcda618;
  }
LAB_10bcda3dc:
  if (((*(byte *)((long)unaff_x19 + 0x11) >> 2 & 1) == 0) || (in_ZR = 0, (int)unaff_x19[0xb] != 10))
  {
    pcVar10 = ";";
    puVar11 = (ulong *)0x1;
    puVar9 = unaff_x20;
    FUN_10bcd6520();
    if ((int)puVar9 == 0) goto LAB_10bcda61c;
LAB_10bcda5b0:
    in_ZR = 0;
    if (abStack_130[0] == 1) {
      func_0x00010bcdc378();
      pbVar14 = (byte *)(unaff_x19[3] & 0xfffffffffffffffc);
      lVar19 = (long)(char)pbVar14[0x17];
      if (lVar19 < 0) {
        lVar19 = *(long *)(pbVar14 + 8);
        pbVar14 = *(byte **)pbVar14;
      }
      uStack_a0 = 0;
      uStack_98 = 0;
      lStack_90 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                (&uStack_a0,lVar19 + 6);
      bVar22 = true;
      for (; lVar19 != 0; lVar19 = lVar19 + -1) {
        bVar4 = *pbVar14;
        uVar15 = (uint)bVar4;
        if (uVar15 != 0x5f) {
          bVar2 = bVar4 - 0x20;
          if (!(bool)(bVar22 & uVar15 - 0x61 < 0x1a)) {
            bVar2 = bVar4;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (&uStack_a0,(int)(char)bVar2);
        }
        pbVar14 = pbVar14 + 1;
        bVar22 = uVar15 == 0x5f;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&uStack_a0,&UNK_10e60651c);
      func_0x00010bcdd66c();
      if (((ulong)puVar11 & 1) != 0) {
        func_0x00010bcdd054();
      }
      func_0x000107c30248(unaff_x19 + 5,&uStack_a0);
      func_0x00010bcdd634((uint)param_3[2] | 1);
      if (((ulong)puVar11 & 1) != 0) {
        func_0x00010bcdd054();
      }
      func_0x000107c30248(param_3 + 0x1b,&uStack_a0);
      puVar9 = param_3;
      FUN_10bcd9a58();
      *(char *)((long)puVar9 + 0x53) = '\x01';
      *(uint *)(puVar9 + 5) = (uint)puVar9[5] | 0x10;
      unaff_x20 = param_3 + 3;
      func_0x00010bcdc384();
      func_0x00010bcdd0f0();
      if (((ulong)puVar11 & 1) != 0) {
        func_0x00010bcdd054();
      }
      func_0x0001056439e0(unaff_x20 + 3,"key");
      pcVar10 = (char *)((long)unaff_x20 + 0x54);
      pcVar10[0] = '\x01';
      pcVar10[1] = '\0';
      pcVar10[2] = '\0';
      pcVar10[3] = '\0';
      uVar15 = (uint)unaff_x20[2];
      *(undefined4 *)(unaff_x20 + 9) = 1;
      *(uint *)(unaff_x20 + 2) = uVar15 | 0x240;
      uVar6 = uStack_118;
      if (-1 < (long)uStack_110) {
        uVar6 = uStack_110 >> 0x38;
      }
      if (uVar6 == 0) {
        *(undefined4 *)(unaff_x20 + 0xb) = uStack_12c;
        *(uint *)(unaff_x20 + 2) = uVar15 | 0x640;
      }
      else {
        *(uint *)(unaff_x20 + 2) = uVar15 | 0x244;
        puVar11 = (ulong *)unaff_x20[1];
        if (((ulong)puVar11 & 1) != 0) {
          func_0x00010bcdd054();
        }
        func_0x000107c30248(unaff_x20 + 5,&uStack_120);
      }
      param_3 = param_3 + 3;
      func_0x00010bcdc384();
      func_0x00010bcdd0f0();
      if (((ulong)puVar11 & 1) != 0) {
        func_0x00010bcdd054();
      }
      pcVar10 = "value";
      puVar9 = param_3 + 3;
      func_0x0001056439e0();
      pcVar1 = (char *)((long)param_3 + 0x54);
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar15 = (uint)param_3[2];
      *(undefined4 *)(param_3 + 9) = 2;
      *(uint *)(param_3 + 2) = uVar15 | 0x240;
      uVar6 = uStack_100;
      if (-1 < (long)uStack_f8) {
        uVar6 = uStack_f8 >> 0x38;
      }
      if (uVar6 == 0) {
        *(undefined4 *)(param_3 + 0xb) = auStack_128[0];
        *(uint *)(param_3 + 2) = uVar15 | 0x640;
      }
      else {
        func_0x00010bcdd634(uVar15 | 0x244);
        lVar19 = extraout_x9;
        if (((ulong)puVar11 & 1) != 0) {
          func_0x00010bcdd054();
          lVar19 = extraout_x9_00;
        }
        puVar9 = param_3 + 5;
        pcVar10 = (char *)(lVar19 + 0x28);
        func_0x000107c30248();
      }
      lVar19 = 0;
      while( true ) {
        iVar5 = (int)puVar9;
        ppuVar3 = &PTR_PTR_113406270;
        if ((undefined **)unaff_x19[8] != (undefined **)0x0) {
          ppuVar3 = (undefined **)unaff_x19[8];
        }
        in_ZR = lVar19 == *(int *)(ppuVar3 + 0xc);
        if (*(int *)(ppuVar3 + 0xc) <= lVar19) break;
        func_0x00010bcdd43c();
        lVar20 = *extraout_x8_01;
        if (*(int *)(lVar20 + 0x20) == 1) {
          func_0x00010bcdcecc(*(undefined8 *)(lVar20 + 0x18));
          func_0x00010bcdd33c();
          if ((iVar5 != 0) &&
             (func_0x00010bcdcecc(*(undefined8 *)(lVar20 + 0x18)),
             (*(byte *)(extraout_x8_02 + 0x20) & 1) == 0)) {
            if ((int)unaff_x20[0xb] == 9) {
              FUN_10bcdab50(unaff_x20);
              func_0x00010bcdd3dc();
              func_0x00010bcdd3b8();
            }
            if ((int)param_3[0xb] == 9) {
              FUN_10bcdab50(param_3);
              func_0x00010bcdd3dc();
              func_0x00010bcdd3b8();
            }
          }
        }
        func_0x00010bcdcecc(*(undefined8 *)(lVar20 + 0x18));
        puVar9 = (ulong *)(*(ulong *)(extraout_x8_03 + 0x18) & 0xfffffffffffffffc);
        pcVar10 = &DAT_10f2dd3d4;
        func_0x000107c27cf4();
        if (((int)puVar9 != 0) &&
           (func_0x00010bcdcecc(*(undefined8 *)(lVar20 + 0x18)),
           (*(byte *)(extraout_x8_04 + 0x20) & 1) == 0)) {
          FUN_10bcdab50(unaff_x20);
          func_0x00010bcdd3dc();
          func_0x00010bcdd3b8();
          puVar9 = param_3;
          FUN_10bcdab50();
          func_0x00010bcdd3dc();
          func_0x00010bcdd3b8();
        }
        lVar19 = lVar19 + 1;
      }
      func_0x00010bcdd088();
    }
    pbVar14 = (byte *)0x1;
  }
  else {
    FUN_10bcd66a4(&uStack_a0,param_4);
    lVar19 = lStack_90;
    puVar13 = *(undefined4 **)(param_6[2] + 0x38);
    puVar17 = *(undefined4 **)(lStack_90 + 0x38);
    *puVar17 = *puVar13;
    puVar17[1] = puVar13[1];
    func_0x000107c2845c(lStack_90 + 0x18,param_5);
    func_0x000107c2845c(lVar19 + 0x18,(int)param_3[1]);
    pcVar10 = (char *)param_3;
    func_0x00010bcdc378();
    uVar18 = unaff_x19[3];
    *(uint *)((long)pcVar10 + 0x10) = (uint)*(ulong *)((long)pcVar10 + 0x10) | 1;
    uVar6 = *(ulong *)((long)pcVar10 + 8);
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    func_0x000107c30248((ulong *)((long)pcVar10 + 0xd8),uVar18 & 0xfffffffffffffffc,uVar6);
    func_0x00010bcdcf34(&uStack_b8,&uStack_a0);
    lVar19 = lStack_a8;
    puVar13 = *(undefined4 **)(lStack_a8 + 0x38);
    *puVar13 = uStack_140;
    puVar13[1] = uStack_13c;
    FUN_10bcd6800();
    func_0x00010bcdd06c(*(undefined8 *)(CONCAT44(uStack_b4,uStack_b8) + 0x18),lVar19,pcVar10);
    func_0x00010bcdd178();
    func_0x00010bcdd54c();
    func_0x00010bcdd0cc(lStack_a8);
    *(undefined4 *)(extraout_x8_00 + 4) = uStack_13c;
    FUN_10bcd6800();
    func_0x00010bcdd178();
    pbVar14 = (byte *)(*(ulong *)((long)pcVar10 + 0xd8) & 0xfffffffffffffffc);
    if ((char)pbVar14[0x17] < '\0') {
      pbVar14 = *(byte **)pbVar14;
    }
    bVar4 = *pbVar14;
    in_ZR = bVar4 == 0x41;
    if (((char)bVar4 < 'A') || (in_ZR = bVar4 == 0x5b, 0x5a < bVar4)) {
      FUN_10bcd6568();
    }
    func_0x00010bcdbb14();
    func_0x00010ae87db0();
    uVar6 = *(ulong *)((long)pcVar10 + 0xd8);
    *(uint *)(unaff_x19 + 2) = (uint)unaff_x19[2] | 4;
    puVar11 = (ulong *)unaff_x19[1];
    if (((ulong)puVar11 & 1) != 0) {
      puVar11 = *(ulong **)((ulong)puVar11 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x19 + 5,uVar6 & 0xfffffffffffffffc,puVar11);
    iVar5 = (int)*unaff_x20;
    func_0x00010bcdceb4();
    FUN_10bcd5e00();
    if (iVar5 == 0) {
      pcVar10 = &UNK_10f830109;
      func_0x00010bcdce7c();
      goto LAB_10bcda614;
    }
    puVar11 = &uStack_a0;
    FUN_10bcd8b08();
    func_0x00010bcdce8c();
    if (((ulong)unaff_x20 & 1) != 0) goto LAB_10bcda5b0;
LAB_10bcda61c:
    pbVar14 = (byte *)0x0;
  }
  func_0x00010bcdcf44(&uStack_160);
LAB_10bcda628:
  pbVar12 = abStack_130;
  FUN_10bcdbb3c();
  func_0x00010bcdcb14(uStack_70);
  if ((bool)in_ZR) {
    return pbVar14;
  }
  ___stack_chk_fail();
  FUN_10bcd67bc(&uStack_b8);
  FUN_10bcd67bc(auStack_f0);
  func_0x00010bcdcf44(&uStack_160);
  pbVar14 = abStack_130;
  FUN_10bcdbb3c();
  func_0x00010bcdcf24();
  func_0x00010bcdd060();
  FUN_10bcdaf40();
  func_0x00010bcdd47c();
  if (pbVar14 == (byte *)0x0) {
    FUN_10bcdade4(pbVar12,puVar11);
    if ((int)pbVar12 == 0) {
      return pbVar12;
    }
  }
  else {
    func_0x00010bcdd0b4();
    iVar5 = (int)pbVar14;
    func_0x00010bcdd5a4();
    if ((iVar5 != 0) && ((int)*(ulong *)((long)pcVar10 + 0x10) == 10)) {
      func_0x00010bcdccd4();
    }
    *(int *)unaff_x20 = (int)*(ulong *)((long)pcVar10 + 0x10);
    func_0x00010bcdd074();
  }
  return (byte *)0x1;
}



/* Entry: 10bcdaad8; end: 10bcdab4f;  */

void FUN_10bcdaad8(long param_1,long param_2)

{
  int iVar1;
  undefined4 *unaff_x20;
  
  func_0x00010bcdd060();
  FUN_10bcdaf40();
  func_0x00010bcdd47c();
  if (param_1 == 0) {
    FUN_10bcdade4();
  }
  else {
    func_0x00010bcdd0b4();
    iVar1 = (int)param_1;
    func_0x00010bcdd5a4();
    if ((iVar1 != 0) && (*(int *)(param_2 + 0x10) == 10)) {
      func_0x00010bcdccd4();
    }
    *unaff_x20 = *(undefined4 *)(param_2 + 0x10);
    func_0x00010bcdd074();
  }
  return;
}



/* Entry: 10bcdab50; end: 10bcdab5f;  */

void FUN_10bcdab50(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010bcdd0e4();
    }
    func_0x00010bcdbb9c();
    *(ulong *)(param_1 + 0x40) = uVar1;
  }
  return;
}



/* Entry: 10bcdab60; end: 10bcdad03;  */

undefined8 FUN_10bcdab60(ulong *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  param_2 = param_2 + 0x18;
  func_0x000107c303b0(param_2,0x10bcdbc28);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uVar1 = *param_1;
  func_0x00010bcdd640();
  func_0x00010bcdcf1c();
  if ((int)uVar1 == 0) {
    func_0x00010bcdcf34(auStack_60,param_3);
    func_0x00010bcdcec4(param_1,&uStack_48,&UNK_10f830346);
    if (((ulong)param_1 & 1) != 0) {
      func_0x00010bcdd3f4();
      func_0x00010bcdd5b4();
      *(undefined1 *)(param_2 + 0x20) = 0;
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
      func_0x00010bcdd1b8();
      uVar3 = 1;
      goto LAB_10bcdac94;
    }
LAB_10bcdac8c:
    func_0x00010bcdd1b8();
  }
  else {
    func_0x00010bcdd640();
    func_0x00010bcdcce0();
    if ((uVar1 & 1) != 0) {
      func_0x00010bcdcf34(auStack_60,param_3);
      if (*(int *)*param_1 == 2) {
        puVar2 = param_1;
        func_0x00010bcdcec4(param_1,&uStack_48,&UNK_10f830346);
        if (((ulong)puVar2 & 1) == 0) goto LAB_10bcdac8c;
        func_0x00010bcdd3f4();
        func_0x00010bcdd5b4();
      }
      func_0x00010bcdd64c();
      while( true ) {
        uVar1 = *param_1;
        func_0x00010bcdcf1c(uVar1,param_3);
        if ((int)uVar1 == 0) break;
        puVar2 = param_1;
        func_0x00010bcdce84(param_1,param_3);
        if ((int)puVar2 == 0) goto LAB_10bcdac8c;
        func_0x00010bcdd3f4();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
        puVar2 = param_1;
        func_0x00010bcdcec4(param_1,&uStack_48);
        if ((int)puVar2 == 0) goto LAB_10bcdac8c;
        func_0x00010bcdd3f4();
        func_0x00010bcdd5b4();
      }
      func_0x00010bcdd1b8();
      func_0x00010bcdcce0();
      if ((uVar1 & 1) != 0) {
        uVar3 = 1;
        *(undefined1 *)(param_2 + 0x20) = 1;
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
        goto LAB_10bcdac94;
      }
    }
  }
  uVar3 = 0;
LAB_10bcdac94:
  func_0x00010bcdd404();
  return uVar3;
}



/* Entry: 10bcdad04; end: 10bcdad63;  */

void FUN_10bcdad04(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bcdd2b4();
  _strlen(param_2);
  func_0x00010bcdd2cc();
  return;
}



/* Entry: 10bcdad64; end: 10bcdad73;  */

void FUN_10bcdad64(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010bcdd0e4();
    }
    func_0x00010bcdbd08();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 10bcdad74; end: 10bcdade3;  */

long * FUN_10bcdad74(long *param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar1 = *(undefined4 *)(*param_1 + 0x20);
  uVar2 = *(undefined4 *)(*param_1 + 0x24);
  plVar3 = param_1;
  func_0x00010bcd6178();
  if (((int)plVar3 != 0) && (uVar4 = param_2, FUN_10bd3ee7c(), (uVar4 & 1) == 0)) {
    FUN_10bcd6614(param_1[1],uVar1,uVar2,param_2,FUN_10bcdc6f4);
  }
  return plVar3;
}



/* Entry: 10bcdade4; end: 10bcdaeef;  */

uint FUN_10bcdade4(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong unaff_x19;
  ulong unaff_x20;
  
  func_0x00010bcdd060();
  func_0x000107c27fa8();
  FUN_10bcdaf40();
  func_0x00010bcdd47c();
  if (param_2 == 0) {
    func_0x00010bcdce94();
    if ((int)unaff_x19 != 0) {
      unaff_x19 = unaff_x20;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
    }
    func_0x00010bcdd44c();
    func_0x00010bcdcec4();
    if ((unaff_x19 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      func_0x00010bcdd4c8();
      func_0x00010bcdd64c();
      while( true ) {
        uVar1 = (uint)unaff_x19;
        func_0x00010bcdccec();
        func_0x00010bcd5dcc();
        if (uVar1 == 0) break;
        unaff_x19 = unaff_x20;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
        func_0x00010bcdd44c();
        func_0x00010bcdcec4();
        if ((int)unaff_x19 == 0) break;
        func_0x00010bcdd4c8();
      }
      uVar1 = uVar1 ^ 1;
    }
    func_0x00010bcdd044();
  }
  else {
    func_0x00010bcdccd4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    func_0x00010bcdd074();
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10bcdaef0; end: 10bcdaf3f;  */

void FUN_10bcdaef0(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010bcdd0e4();
    }
    func_0x00010bcdbdf4();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 10bcdaf40; end: 10bcdb213;  */

ulong * FUN_10bcdaf40(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  undefined8 *puVar4;
  ulong extraout_x8_01;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack0000000000000008;
  
  func_0x00010bcdce58();
  if ((bRam00000001137fe130 & 1) == 0) {
    puVar2 = (ulong *)0x1137fe130;
    ___cxa_guard_acquire();
    if ((int)puVar2 != 0) {
      func_0x00010bcdd4e0();
      *puVar2 = (ulong)&UNK_10e52b660;
      puVar6 = puVar2 + 1;
      *puVar6 = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar5 = puVar2;
      FUN_10bcdc0a8();
      *(undefined4 *)puVar5 = 1;
      func_0x00010bcdd284();
      *(undefined4 *)puVar5 = 2;
      func_0x00010bcdd28c();
      *(undefined4 *)puVar5 = 4;
      puVar5 = puVar2;
      func_0x00010bcdc170(puVar2,&DAT_10f559fcc);
      *(undefined4 *)puVar5 = 6;
      puVar5 = puVar2;
      func_0x00010bcdc170(puVar2,&DAT_10f559fc4);
      *(undefined4 *)puVar5 = 7;
      Hint_Prefetch(*puVar2,0,2,0);
      puVar5 = puVar2;
      func_0x000107c284ac(*puVar2,puVar2,"bool",4);
      lStack0000000000000008 = 0;
      uVar8 = puVar2[2];
      func_0x00010bcdd230(*puVar2 >> 0xc ^ (ulong)puVar5 >> 7);
      uVar9 = extraout_x8;
      while( true ) {
        uVar9 = uVar9 & uVar8;
        func_0x00010bcdd224();
        for (uVar7 = extraout_x8_00 & 0x8080808080808080; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
          uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          puVar5 = (ulong *)(uVar9 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar8);
          puVar4 = (undefined8 *)(*puVar6 + (long)puVar5 * 0x18);
          puVar3 = (ulong *)*puVar4;
          func_0x000107c27944(puVar3,puVar4[1],"bool",4);
          if (((ulong)puVar3 & 1) != 0) goto LAB_10bcdb0e8;
          puVar5 = puVar3;
        }
        func_0x00010bcdcd0c();
        if ((extraout_x8_01 & 1) != 0) break;
        lStack0000000000000008 = lStack0000000000000008 + 8;
        uVar9 = lStack0000000000000008 + uVar9;
      }
      func_0x00010bcdd07c();
      FUN_10bcdc238();
      puVar3 = (ulong *)(*puVar6 + (long)puVar5 * 0x18);
      func_0x000106e5c56c(puVar3,"bool");
      *(undefined4 *)(puVar3 + 2) = 0;
LAB_10bcdb0e8:
      *(undefined4 *)(puVar2[1] + (long)puVar5 * 0x18 + 0x10) = 8;
      func_0x00010bcdd28c();
      *(undefined4 *)puVar3 = 9;
      func_0x00010bcdd284();
      *(undefined4 *)puVar3 = 10;
      func_0x00010bcdd284();
      *(undefined4 *)puVar3 = 0xc;
      func_0x00010bcdd28c();
      *(undefined4 *)puVar3 = 0xd;
      puVar5 = puVar2;
      func_0x00010bcdc1d4(puVar2,&DAT_10f559fd4);
      *(undefined4 *)puVar5 = 0xf;
      puVar5 = puVar2;
      func_0x00010bcdc1d4(puVar2,&DAT_10f559fdd);
      *(undefined4 *)puVar5 = 0x10;
      func_0x00010bcdd284();
      *(undefined4 *)puVar5 = 5;
      func_0x00010bcdd284();
      *(undefined4 *)puVar5 = 3;
      func_0x00010bcdd28c();
      *(undefined4 *)puVar5 = 0x11;
      func_0x00010bcdd28c();
      *(undefined4 *)puVar5 = 0x12;
      puRam00000001137fe128 = puVar2;
      ___cxa_guard_release(0x1137fe130);
    }
  }
  return puRam00000001137fe128;
}



/* Entry: 10bcdb214; end: 10bcdb303;  */

void FUN_10bcdb214(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  undefined8 *puVar6;
  ulong extraout_x8_01;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  func_0x00010bcdd060();
  func_0x00010bcdcd84();
  func_0x000107c284ac();
  lVar7 = 0;
  uVar1 = unaff_x19[1];
  uVar2 = unaff_x19[2];
  func_0x00010bcdd230(*unaff_x19 >> 0xc ^ param_1 >> 7);
  uVar8 = extraout_x8;
  do {
    uVar8 = uVar8 & uVar2;
    func_0x00010bcdd224();
    for (uVar9 = extraout_x8_00 & 0x8080808080808080; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar3 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar6 = (undefined8 *)
               (uVar1 + (uVar8 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                        0x18);
      uVar5 = *puVar6;
      uVar3 = unaff_x20[1];
      puVar4 = (undefined8 *)*unaff_x20;
      if (-1 < (char)*(byte *)((long)unaff_x20 + 0x17)) {
        uVar3 = (ulong)*(byte *)((long)unaff_x20 + 0x17);
        puVar4 = unaff_x20;
      }
      func_0x000107c27944(uVar5,puVar6[1],puVar4,uVar3);
      if ((int)uVar5 != 0) {
        func_0x00010bcdd680();
        return;
      }
    }
    func_0x00010bcdcd0c();
    if ((extraout_x8_01 & 1) != 0) {
      return;
    }
    lVar7 = lVar7 + 8;
    uVar8 = lVar7 + uVar8;
  } while( true );
}



/* Entry: 10bcdb304; end: 10bcdb347;  */

long FUN_10bcdb304(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    func_0x000107c282d8(param_1,iVar1,iVar1 + 1);
    iVar1 = *param_1;
  }
  *param_1 = iVar1 + 1;
  return *(long *)(param_1 + 2) + (long)iVar1 * 4;
}



/* Entry: 10bcdb348; end: 10bcdb353;  */

void FUN_10bcdb348(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_10bcdb354);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_10bcdb354);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10bcdb354; end: 10bcdb45b;  */

undefined8 * FUN_10bcdb354(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c3a604();
  }
  else {
    func_0x00010bcdd1e8();
  }
  *puVar1 = &PTR_FUN_110d9be90;
  puVar1[1] = param_1;
  FUN_10bd12ef0();
  return puVar1;
}



/* Entry: 10bcdb45c; end: 10bcdb473;  */

void FUN_10bcdb45c(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,&UNK_1000647e4);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,&UNK_1000647e4);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10bcdb474; end: 10bcdb4e7;  */

void FUN_10bcdb474(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    param_1 = 0x40;
    __Znwm();
  }
  else {
    func_0x00010bcdd58c();
  }
  func_0x00010bcdcfbc(&UNK_110d9c6f0);
  func_0x00010bcdd5ec();
  *(undefined8 *)(param_1 + 0x30) = extraout_x8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10bcdb4e8; end: 10bcdb507;  */

void FUN_10bcdb4e8(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10bcdb508(&uStack_18);
  return;
}



/* Entry: 10bcdb508; end: 10bcdb50f;  */

void FUN_10bcdb508(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *param_2;
  uVar3 = param_3;
  FUN_10bcdb584();
  if ((uVar3 & 1) != 0) {
    FUN_10bcdb658(*param_2,lVar2,param_3);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x18;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 10bcdb510; end: 10bcdb583;  */

void FUN_10bcdb510(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  FUN_10bcdb584();
  if ((param_3 & 1) != 0) {
    FUN_10bcdb658(*param_2,lVar2,param_4);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x18;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 10bcdb584; end: 10bcdb657;  */

void FUN_10bcdb584(undefined1 *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 unaff_x30;
  undefined8 in_stack_00000000;
  ulong *in_stack_00000008;
  
  func_0x00010bcdce58();
  func_0x00010bcdd060();
  func_0x00010bcdcd84();
  func_0x000107c284ac();
  lVar4 = 0;
  uVar5 = unaff_x19[2];
  func_0x00010bcdd230(*unaff_x19 >> 0xc ^ (ulong)param_1 >> 7);
  uVar6 = extraout_x8;
  while( true ) {
    uVar6 = uVar6 & uVar5;
    func_0x00010bcdd224();
    for (uVar7 = extraout_x8_00 & 0x8080808080808080; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      param_1 = (undefined1 *)(uVar6 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar5)
      ;
      puVar2 = (undefined1 *)register0x00000008;
      in_stack_00000000 = unaff_x20;
      in_stack_00000008 = unaff_x19;
      FUN_10bcdb6c8();
      if (((ulong)puVar2 & 1) != 0) {
        uVar3 = 0;
        goto LAB_10bcdb62c;
      }
      param_1 = puVar2;
    }
    func_0x00010bcdcd0c();
    if ((extraout_x8_01 & 1) != 0) break;
    lVar4 = lVar4 + 8;
    uVar6 = lVar4 + uVar6;
  }
  func_0x00010bcdcfc8();
  FUN_10bcdb66c();
  uVar3 = 1;
LAB_10bcdb62c:
  func_0x00010bcdce34(param_1,uVar3,unaff_x30);
  return;
}



/* Entry: 10bcdb658; end: 10bcdb66b;  */

void FUN_10bcdb658(long param_1,long param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (*(long *)(param_1 + 8) + param_2 * 0x18,param_3);
  return;
}



/* Entry: 10bcdb66c; end: 10bcdb6c7;  */

void FUN_10bcdb66c(void)

{
  undefined1 in_ZR;
  long extraout_x9;
  
  func_0x00010bcdd060();
  func_0x000107c2b954();
  func_0x00010bcdd5d4();
  if ((extraout_x9 == 0) && (func_0x00010bcdd614(), !(bool)in_ZR)) {
    FUN_10bcdb790();
    func_0x00010bcdcf98();
  }
  func_0x00010bcdd154();
  func_0x00010bcdcc08();
  return;
}



/* Entry: 10bcdb6c8; end: 10bcdb6fb;  */

bool FUN_10bcdb6c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puStack_20;
  ulong uStack_18;
  
  param_1 = (undefined8 *)*param_1;
  uVar4 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar3 = param_1;
  if ((long)uVar4 < 0) {
    puVar3 = (undefined8 *)*param_1;
    uVar4 = param_1[1];
  }
  uStack_18 = param_2[1];
  puStack_20 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_18 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_20 = param_2;
  }
  iVar1 = (int)&puStack_20;
  if (uStack_18 == uVar4) {
    func_0x000100067218(&puStack_20,puVar3,uVar4);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10bcdb6fc; end: 10bcdb78f;  */

void FUN_10bcdb6fc(void)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010bcdce20();
  func_0x00010bcdd42c();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010bcdb7c0(&stack0xffffffffffffffa8,unaff_x20);
      func_0x00010bcdcd44();
      func_0x00010bcdcbe0();
      func_0x00010bcdcfd4();
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
      *unaff_x20 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x20);
    }
    unaff_x20 = unaff_x20 + 3;
  }
  if (unaff_x23 != 0) {
    __ZdlPv(unaff_x22 + -8);
  }
  return;
}



/* Entry: 10bcdb790; end: 10bcdb7e7;  */

void FUN_10bcdb790(long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  if ((8 < uVar2) &&
     (uVar1 = uVar2 * 0x19 + *(long *)(param_1 + 0x18) * -0x20 == 0,
     (ulong)(*(long *)(param_1 + 0x18) * 0x20) <= uVar2 * 0x19)) {
    func_0x00010bcdcc7c();
    func_0x00010ae6c914();
    func_0x00010bcdcb14(extraout_x8);
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bcdb7c0(&stack0xffffffffffffffb8);
    return;
  }
  func_0x00010bcdce20(param_1,uVar2 << 1 | 1);
  func_0x00010bcdd42c();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010bcdb7c0(&stack0xffffffffffffffa8,unaff_x20);
      func_0x00010bcdcd44();
      func_0x00010bcdcbe0();
      func_0x00010bcdcfd4();
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
      *unaff_x20 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x20);
    }
    unaff_x20 = unaff_x20 + 3;
  }
  if (unaff_x23 != 0) {
    __ZdlPv(unaff_x22 + -8);
  }
  return;
}



/* Entry: 10bcdb7e8; end: 10bcdb84b;  */

void FUN_10bcdb7e8(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_18;
  
  func_0x00010bcdcc7c();
  uStack_18 = extraout_x8;
  func_0x00010ae6c914();
  func_0x00010bcdcb14(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uStack_38 = 0x10bcdb828;
  uStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x00010bcdb7c0(&uStack_48);
  return;
}



/* Entry: 10bcdb84c; end: 10bcdb86b;  */

void FUN_10bcdb84c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_2[2] = param_3[2];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_3);
  return;
}



/* Entry: 10bcdb86c; end: 10bcdb89f;  */

void FUN_10bcdb86c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 unaff_x19;
  ulong *unaff_x20;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  func_0x00010bcdd2b4();
  func_0x00010bcdcd84();
  func_0x000107c284ac();
  puVar4 = unaff_x20;
  func_0x00010bcdce58();
  func_0x00010bcdd060();
  lVar6 = 0;
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  func_0x00010bcdd230(*puVar4 >> 0xc ^ param_1 >> 7);
  uVar7 = extraout_x8;
  while( true ) {
    uVar7 = uVar7 & uVar2;
    func_0x00010bcdd224();
    for (uVar8 = extraout_x8_00 & 0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar3 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar5 = (undefined1 *)register0x00000008;
      in_stack_00000000 = unaff_x20;
      in_stack_00000008 = unaff_x19;
      FUN_10bcdb6c8(&stack0x00000000,
                    uVar1 + (uVar7 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                            0x18);
      if ((int)puVar5 != 0) {
        func_0x00010bcdd680();
        goto LAB_10bcdb934;
      }
    }
    func_0x00010bcdcd0c();
    if ((extraout_x8_01 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar7 = lVar6 + uVar7;
  }
LAB_10bcdb934:
  func_0x00010bcdce34();
  return;
}



/* Entry: 10bcdb8a0; end: 10bcdb94f;  */

void FUN_10bcdb8a0(ulong *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong uVar2;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  func_0x00010bcdce58();
  func_0x00010bcdd060();
  func_0x00010bcdd230(*param_1 >> 0xc ^ param_3 >> 7);
  do {
    func_0x00010bcdd224();
    for (uVar2 = extraout_x8 & 0x8080808080808080; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
      in_stack_00000000 = unaff_x20;
      in_stack_00000008 = unaff_x19;
      iVar1 = (int)&stack0x00000000;
      FUN_10bcdb6c8();
      if (iVar1 != 0) {
        func_0x00010bcdd680();
        goto LAB_10bcdb934;
      }
    }
    func_0x00010bcdcd0c();
  } while ((extraout_x8_00 & 1) == 0);
LAB_10bcdb934:
  func_0x00010bcdce34();
  return;
}



/* Entry: 10bcdb950; end: 10bcdb983;  */

long FUN_10bcdb950(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10bcdb984(param_1);
    func_0x00010bcdd110();
  }
  return param_1;
}



/* Entry: 10bcdb984; end: 10bcdb9c3;  */

void FUN_10bcdb984(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x18;
  }
  return;
}



/* Entry: 10bcdb9c4; end: 10bcdba97;  */

bool FUN_10bcdb9c4(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong extraout_x9;
  long lVar6;
  long lVar7;
  
  lVar6 = 0;
  ppuVar1 = &PTR_PTR_113406168;
  if (param_1 != (undefined **)0x0) {
    ppuVar1 = param_1;
  }
  lVar7 = 8;
  for (; iVar3 = *(int *)(ppuVar1 + 7), lVar6 < iVar3; lVar6 = lVar6 + 1) {
    puVar5 = ppuVar1[6];
    ppuVar2 = ppuVar1 + 6;
    if (((ulong)puVar5 & 1) != 0) {
      ppuVar2 = (undefined **)(puVar5 + lVar7 + -1);
    }
    puVar5 = *ppuVar2;
    if ((*(int *)(puVar5 + 0x20) == 1) && (func_0x00010bcdd36c(puVar5), (extraout_x9 & 1) == 0)) {
      uVar4 = *(ulong *)(extraout_x8 + 0x18) & 0xfffffffffffffffc;
      func_0x000107c27cf4(uVar4,&UNK_10f830b06);
      if ((int)uVar4 != 0) {
        uVar4 = *(ulong *)(puVar5 + 0x30) & 0xfffffffffffffffc;
        func_0x000107c27cf4(uVar4,"true");
        if ((uVar4 & 1) != 0) break;
      }
    }
    lVar7 = lVar7 + 8;
  }
  return lVar6 < iVar3;
}



/* Entry: 10bcdba98; end: 10bcdbb07;  */

void FUN_10bcdba98(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0xe0) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010bcdd0e4();
    }
    func_0x00010bcdbacc();
    *(ulong *)(param_1 + 0xe0) = uVar1;
  }
  return;
}



/* Entry: 10bcdbb08; end: 10bcdbb3b;  */

void FUN_10bcdbb08(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,&UNK_1000648fc);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,&UNK_1000648fc);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10bcdbb3c; end: 10bcdbbd7;  */

long FUN_10bcdbb3c(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  return param_1;
}



/* Entry: 10bcdbbd8; end: 10bcdbbe3;  */

void FUN_10bcdbbd8(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_10bcdbbe4);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_10bcdbbe4);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10bcdbbe4; end: 10bcdbc63;  */

void FUN_10bcdbbe4(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    func_0x000107c3a608();
  }
  else {
    func_0x00010bcdd1f4();
  }
  func_0x00010bcdcfbc(&UNK_110d9c100);
  func_0x00010bcdd5ec();
  *(undefined8 *)(param_1 + 0x30) = extraout_x8;
  *(undefined8 *)(param_1 + 0x38) = extraout_x8;
  *(undefined8 *)(param_1 + 0x40) = extraout_x8;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 10bcdbc64; end: 10bcdbc97;  */

ulong * FUN_10bcdbc64(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_28;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    func_0x00010bcdd6a8();
  }
  puVar1 = (ulong *)(param_1 + 0x18);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    if (uVar3 == 0) {
      puVar2 = puVar1;
      func_0x000100063c9c();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      uVar3 = 2;
    }
    else {
      puVar2 = &uStack_28;
      uStack_28 = uVar3;
      func_0x00010006903c();
      uVar3 = 3;
    }
    *puVar1 = uVar3 | (ulong)puVar2;
    return puVar2;
  }
  return (ulong *)(*puVar1 & 0xfffffffffffffffc);
}



/* Entry: 10bcdbc98; end: 10bcdbd37;  */

void FUN_10bcdbc98(long param_1)

{
  if (param_1 == 0) {
    func_0x000107c3a60c();
  }
  else {
    func_0x00010bcdd1d0();
  }
  func_0x00010bcdcfbc(&UNK_110d9c6a0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10bcdbd38; end: 10bcdbd43;  */

void FUN_10bcdbd38(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_10bcdbd44);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_10bcdbd44);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10bcdbd44; end: 10bcdbd7b;  */

void FUN_10bcdbd44(long param_1)

{
  if (param_1 == 0) {
    func_0x00010bcdd4e0();
  }
  else {
    func_0x00010bcdd598();
  }
  func_0x00010bcdcfbc(&UNK_110d9c0b0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10bcdbd7c; end: 10bcdbd87;  */

void FUN_10bcdbd7c(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_10bcdbd88);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_10bcdbd88);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10bcdbd88; end: 10bcdbea7;  */

void FUN_10bcdbd88(long param_1)

{
  if (param_1 == 0) {
    func_0x00010bcdd4e0();
  }
  else {
    func_0x00010bcdd598();
  }
  func_0x00010bcdcfbc(&UNK_110d9c060);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10bcdbea8; end: 10bcdbeb3;  */

void FUN_10bcdbea8(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,&UNK_100064854);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,&UNK_100064854);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10bcdbeb4; end: 10bcdbf97;  */

void FUN_10bcdbeb4(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010bcdd0e4();
    }
    func_0x00010bcdbee8();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 10bcdbf98; end: 10bcdbfa3;  */

void FUN_10bcdbf98(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_10bcdbfa4);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_10bcdbfa4);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10bcdbfa4; end: 10bcdbfe7;  */

void FUN_10bcdbfa4(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    param_1 = 0x40;
    __Znwm();
  }
  else {
    func_0x00010bcdd58c();
  }
  func_0x000107c3a5f0(&UNK_110d9c5b0);
  *(undefined8 *)(param_1 + 0x18) = extraout_x8;
  *(undefined8 *)(param_1 + 0x20) = extraout_x8;
  *(undefined8 *)(param_1 + 0x28) = extraout_x8;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10bcdbfe8; end: 10bcdc037;  */

ulong * FUN_10bcdbfe8(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_28;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    func_0x00010bcdd6a8();
  }
  puVar1 = (ulong *)(param_1 + 0x20);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    if (uVar3 == 0) {
      puVar2 = puVar1;
      func_0x000100063c9c();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      uVar3 = 2;
    }
    else {
      puVar2 = &uStack_28;
      uStack_28 = uVar3;
      func_0x00010006903c();
      uVar3 = 3;
    }
    *puVar1 = uVar3 | (ulong)puVar2;
    return puVar2;
  }
  return (ulong *)(*puVar1 & 0xfffffffffffffffc);
}



/* Entry: 10bcdc038; end: 10bcdc0a7;  */

void FUN_10bcdc038(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010bcdd0e4();
    }
    func_0x00010bcdc06c();
    *(ulong *)(param_1 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 10bcdc0a8; end: 10bcdc237;  */

void FUN_10bcdc0a8(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint extraout_w8;
  long extraout_x9;
  long lVar3;
  long extraout_x9_00;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x00010bcdce58();
  func_0x00010bcdcc64();
  func_0x00010bcdccfc();
  func_0x00010bcdcbb4();
  while( true ) {
    func_0x00010bcdcd1c();
    lVar3 = extraout_x9;
    while (lVar3 != 0) {
      func_0x00010bcdcb3c();
      func_0x00010bcdccb0();
      if ((uVar1 & 1) != 0) goto LAB_10bcdc100;
      func_0x00010bcdcef4();
      lVar3 = extraout_x9_00;
    }
    func_0x00010bcdcd0c();
    if ((extraout_w8 & 1) != 0) break;
    func_0x00010bcdd5c8();
  }
  func_0x00010bcdcf4c();
  func_0x00010bcdcc8c();
  *(undefined4 *)(CONCAT44(uVar2,uVar1) + 0x10) = 0;
LAB_10bcdc100:
  func_0x00010bcdcee0();
  return;
}



/* Entry: 10bcdc238; end: 10bcdc2d3;  */

void FUN_10bcdc238(long param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010bcdd060();
  func_0x00010bcdcc7c();
  func_0x000107c2b954();
  func_0x00010bcdd5d4();
  if ((extraout_x9 == 0) && (func_0x00010bcdd614(), !(bool)in_ZR)) {
    bVar1 = 8 < *(ulong *)(unaff_x19 + 0x10);
    if ((bVar1) && (func_0x00010bcdd164(), bVar1)) {
      func_0x00010bcdd104();
    }
    else {
      func_0x00010bcdd40c();
      FUN_10bcdc2d4();
    }
    func_0x00010bcdcf98();
  }
  func_0x00010bcdd154();
  uVar2 = *(char *)(extraout_x8_00 + param_1) == -0x80;
  func_0x00010bcdcc08();
  func_0x00010bcdcb14(extraout_x8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bcdce20();
  func_0x00010bcdd42c();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010bcdd07c();
      FUN_10bcdc33c();
      func_0x00010bcdcd44();
      func_0x00010bcdcbe0();
      func_0x00010bcdcfd4();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bcdc2d4; end: 10bcdc33b;  */

void FUN_10bcdc2d4(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010bcdce20();
  func_0x00010bcdd42c();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010bcdd07c();
      FUN_10bcdc33c();
      func_0x00010bcdcd44();
      func_0x00010bcdcbe0();
      func_0x00010bcdcfd4();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bcdc33c; end: 10bcdc38f;  */

void FUN_10bcdc33c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = *param_2;
  uStack_18 = param_2[1];
  func_0x000100062cf8(&uStack_20);
  return;
}



/* Entry: 10bcdc390; end: 10bcdc447;  */

void FUN_10bcdc390(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  long extraout_x8;
  undefined *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined1 **ppuStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  
  func_0x00010bcdcaa4();
  func_0x00010bcdd4bc();
  func_0x00010bcdd090();
  func_0x00010bcdd11c();
  func_0x00010bcdcad8();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_c8 = 0x10bcdc3c4;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x00010bcdcaa4();
    func_0x00010bcdd4bc();
    func_0x00010bcdd090();
    func_0x00010bcdd11c();
    func_0x00010bcdcad8();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      uStack_188 = 0x10bcdc3f8;
      ppuStack_190 = &puStack_d0;
      func_0x00010bcdcaa4();
      func_0x00010bcdd4a8();
      func_0x00010bcdd0c0();
      func_0x00010bcdcb84(*(undefined8 *)(extraout_x8 + 0x60));
      puVar1 = &UNK_10f830b2c;
      func_0x000107c284bc();
      func_0x00010bcdcac0();
      func_0x00010bcdcad8();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        pcStack_248 = FUN_10bcdc448;
        puStack_258 = puVar1;
        pppuStack_250 = &ppuStack_190;
        FUN_10bcdc468(&puStack_258);
        return;
      }
    }
  }
  return;
}



/* Entry: 10bcdc448; end: 10bcdc467;  */

void FUN_10bcdc448(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10bcdc468(&uStack_18);
  return;
}



/* Entry: 10bcdc468; end: 10bcdc46f;  */

void FUN_10bcdc468(long *param_1,long *param_2,undefined4 *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (uint)param_3;
  lVar1 = *param_2;
  func_0x00010941ecc8();
  param_2 = (long *)*param_2;
  lVar3 = param_2[1];
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(lVar3 + lVar1 * 4) = *param_3;
  }
  *param_1 = *param_2 + lVar1;
  param_1[1] = lVar3 + lVar1 * 4;
  *(char *)(param_1 + 2) = (char)uVar2;
  return;
}



/* Entry: 10bcdc470; end: 10bcdc4c3;  */

void FUN_10bcdc470(long *param_1,long *param_2,uint param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  func_0x00010941ecc8();
  param_2 = (long *)*param_2;
  lVar2 = param_2[1];
  if ((param_3 & 1) != 0) {
    *(undefined4 *)(lVar2 + lVar1 * 4) = *param_4;
  }
  *param_1 = *param_2 + lVar1;
  param_1[1] = lVar2 + lVar1 * 4;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 10bcdc4c4; end: 10bcdc6f3;  */

void FUN_10bcdc4c4(void)

{
  undefined8 uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  undefined8 extraout_x8_05;
  long extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  undefined *puStack_560;
  undefined8 uStack_558;
  undefined8 ***pppuStack_550;
  undefined8 uStack_548;
  undefined8 ***pppuStack_490;
  undefined8 uStack_488;
  undefined8 ***pppuStack_3d0;
  undefined8 uStack_3c8;
  undefined8 ***pppuStack_310;
  undefined8 uStack_308;
  undefined1 ***pppuStack_250;
  undefined8 uStack_248;
  undefined1 **ppuStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  
  func_0x00010bcdcaa4();
  func_0x00010bcdd4a8();
  func_0x00010bcdd0c0();
  func_0x00010bcdcb84(*(undefined8 *)(extraout_x8 + 0x60));
  func_0x000107c284bc(&UNK_10f830b89);
  func_0x00010bcdcac0();
  func_0x00010bcdcad8();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_c8 = 0x10bcdc514;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x00010bcdcaa4();
    func_0x000107c284bc(&UNK_10f830c1d);
    func_0x00010bcdd0c0();
    func_0x00010bcdcb84(*(undefined8 *)(extraout_x8_00 + 0x18));
    uVar1 = extraout_x11;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8_01;
    }
    func_0x00010bcdd2f8(uVar1);
    func_0x00010bcdcac0();
    func_0x00010bcdcad8();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      uStack_188 = 0x10bcdc560;
      ppuStack_190 = &puStack_d0;
      func_0x00010bcdcaa4();
      func_0x000107c284bc(&UNK_10f830c8c);
      func_0x00010bcdd0c0();
      func_0x00010bcdcc44();
      func_0x000107c284bc(&UNK_10f830b29);
      func_0x00010bcdcac0();
      func_0x00010bcdcad8();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        uStack_248 = 0x10bcdc5b8;
        pppuStack_250 = &ppuStack_190;
        func_0x00010bcdcaa4();
        func_0x000107c284bc(&UNK_10f830c9e);
        func_0x00010bcdd0c0();
        func_0x00010bcdcc44();
        func_0x000107c284bc(&UNK_10f830cbf);
        func_0x00010bcdcac0();
        func_0x00010bcdcad8();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          uStack_308 = 0x10bcdc610;
          pppuStack_310 = &pppuStack_250;
          func_0x00010bcdcaa4();
          func_0x000107c284bc(&UNK_10f830cf6);
          func_0x00010bcdd0c0();
          func_0x00010bcdcb84(*(undefined8 *)(extraout_x8_02 + 0xd8));
          uVar1 = extraout_x11_00;
          if (in_NG == in_OV) {
            uVar1 = extraout_x8_03;
          }
          func_0x00010bcdd2f8(uVar1);
          func_0x00010bcdcac0();
          func_0x00010bcdcad8();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            uStack_3c8 = 0x10bcdc65c;
            pppuStack_3d0 = &pppuStack_310;
            func_0x00010bcdcaa4();
            func_0x000107c284bc(&UNK_10f830d28);
            func_0x00010bcdd0c0();
            func_0x00010bcdcb84(*(undefined8 *)(extraout_x8_04 + 0x18));
            uVar1 = extraout_x11_01;
            if (in_NG == in_OV) {
              uVar1 = extraout_x8_05;
            }
            func_0x00010bcdd2e8(uVar1);
            func_0x00010bcdcac0();
            func_0x00010bcdcad8();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              uStack_488 = 0x10bcdc6a8;
              pppuStack_490 = &pppuStack_3d0;
              func_0x00010bcdcaa4();
              puVar2 = (undefined8 *)&UNK_10f830d91;
              func_0x000107c284bc();
              func_0x00010bcdd0c0();
              func_0x00010bcdcb84(*(undefined8 *)(extraout_x8_06 + 0x18));
              uVar1 = extraout_x11_02;
              if (in_NG == in_OV) {
                uVar1 = extraout_x8_07;
              }
              func_0x00010bcdd2e8(uVar1);
              func_0x00010bcdcac0();
              func_0x00010bcdcad8();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                uStack_548 = 0x10bcdc6f4;
                puStack_560 = &UNK_10f830dcb;
                uStack_558 = 0x2d;
                pppuStack_550 = &pppuStack_490;
                func_0x00010bcdc724(&puStack_560,*puVar2);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10bcdc6f4; end: 10bcdc77f;  */

void FUN_10bcdc6f4(undefined8 *param_1)

{
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &UNK_10f830dcb;
  uStack_18 = 0x2d;
  func_0x00010bcdc724(&puStack_20,*param_1);
  return;
}



/* Entry: 10bcdc780; end: 10bcdc7bb;  */

ulong FUN_10bcdc780(long param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long unaff_x19;
  
  func_0x00010bcdd294();
  uVar1 = param_1 + (ulong)*(uint *)(unaff_x19 + 8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 10bcdc7bc; end: 10bcdc7c3;  */

void FUN_10bcdc7bc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  func_0x000107c2818c(param_1,&uStack_18,&uStack_18);
  return;
}



/* Entry: 10bcdc7c4; end: 10bcdc7eb;  */

void FUN_10bcdc7c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x000107c2818c(param_1,&uStack_18,&uStack_18);
  return;
}



/* Entry: 10bcdc7ec; end: 10bcdc80b;  */

ulong FUN_10bcdc7ec(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x10;
  long unaff_x19;
  
  func_0x00010bcdd294();
  uVar1 = *(ulong *)(unaff_x19 + 0x10);
  if (-1 < (char)*(byte *)(unaff_x19 + 0x1f)) {
    uVar1 = (ulong)*(byte *)(unaff_x19 + 0x1f);
  }
  func_0x000100062d4c();
  func_0x000100061c28(param_1 + uVar1);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 10bcdc80c; end: 10bcdc827;  */

ulong FUN_10bcdc80c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong extraout_x8;
  ulong extraout_x10;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  func_0x000100062d4c(param_1,puVar2);
  func_0x000100061c28(param_1 + uVar1);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 10bcdc828; end: 10bcdc8c3;  */

void FUN_10bcdc828(long param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010bcdd060();
  func_0x00010bcdcc7c();
  func_0x000107c2b954();
  func_0x00010bcdd5d4();
  if ((extraout_x9 == 0) && (func_0x00010bcdd614(), !(bool)in_ZR)) {
    bVar1 = 8 < *(ulong *)(unaff_x19 + 0x10);
    if ((bVar1) && (func_0x00010bcdd164(), bVar1)) {
      func_0x00010bcdd104();
    }
    else {
      func_0x00010bcdd40c();
      FUN_10bcdc8c4();
    }
    func_0x00010bcdcf98();
  }
  func_0x00010bcdd154();
  uVar2 = *(char *)(extraout_x8_00 + param_1) == -0x80;
  func_0x00010bcdcc08();
  func_0x00010bcdcb14(extraout_x8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bcdce20();
  func_0x00010bcdd42c();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      FUN_10bcdc780(unaff_x20);
      func_0x00010bcdcd44();
      func_0x00010bcdcbe0();
      func_0x00010bcdcfd4();
    }
    unaff_x20 = unaff_x20 + 0x18;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bcdc8c4; end: 10bcdc92b;  */

void FUN_10bcdc8c4(void)

{
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010bcdce20();
  func_0x00010bcdd42c();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      FUN_10bcdc780(unaff_x20);
      func_0x00010bcdcd44();
      func_0x00010bcdcbe0();
      func_0x00010bcdcfd4();
    }
    unaff_x20 = unaff_x20 + 0x18;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bcdc92c; end: 10bcdc937;  */

ulong FUN_10bcdc92c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long unaff_x19;
  
  func_0x00010bcdd294(param_2);
  uVar1 = param_2 + (ulong)*(uint *)(unaff_x19 + 8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 10bcdc938; end: 10bcdc9d7;  */

void FUN_10bcdc938(long *param_1,undefined *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  func_0x00010bcdd060();
  func_0x00010bcdcc7c();
  func_0x000107c2b954();
  func_0x00010bcdd5d4();
  if ((extraout_x9 == 0) && (func_0x00010bcdd614(), !(bool)in_ZR)) {
    bVar2 = 8 < *(ulong *)(unaff_x19 + 0x10);
    if ((bVar2) && (func_0x00010bcdd164(), bVar2)) {
      param_2 = &UNK_110d9ad38;
      func_0x00010bcdd104();
    }
    else {
      func_0x00010bcdd40c();
      FUN_10bcdc9d8();
    }
    func_0x00010bcdcf98();
  }
  func_0x00010bcdd154();
  uVar3 = *(char *)(extraout_x8 + (long)param_1) == -0x80;
  func_0x00010bcdcc08();
  func_0x00010bcdcad8();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar6 = param_1[2];
  param_1[2] = (long)param_2;
  func_0x00010780fbbc();
  lVar8 = param_1[1];
  for (lVar7 = 0; lVar6 != lVar7; lVar7 = lVar7 + 1) {
    if (-1 < *(char *)(lVar1 + lVar7)) {
      lVar4 = lVar5;
      FUN_10bcdc7ec(lVar5);
      func_0x00010bcdcd44();
      func_0x00010bcdcbe0();
      func_0x00010bcdca60(lVar8 + lVar4 * 0x28,lVar5);
    }
    lVar5 = lVar5 + 0x28;
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10bcdc9d8; end: 10bcdca5f;  */

void FUN_10bcdc9d8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  lVar4 = param_1[2];
  param_1[2] = param_2;
  func_0x00010780fbbc();
  lVar6 = param_1[1];
  for (lVar5 = 0; lVar4 != lVar5; lVar5 = lVar5 + 1) {
    if (-1 < *(char *)(lVar1 + lVar5)) {
      lVar2 = lVar3;
      FUN_10bcdc7ec(lVar3);
      func_0x00010bcdcd44();
      func_0x00010bcdcbe0();
      func_0x00010bcdca60(lVar6 + lVar2 * 0x28,lVar3);
    }
    lVar3 = lVar3 + 0x28;
  }
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10bcdca60; end: 10bcdd6c7;  */

void FUN_10bcdca60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  param_1[4] = param_2[4];
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2 + 1);
  return;
}



/* Entry: 10bcdd6c8; end: 10bcdd6f7;  */

void FUN_10bcdd6c8(void)

{
  long extraout_x8;
  
  func_0x00010bcde68c();
  if (extraout_x8 != 0) {
    FUN_10bcdd6f8();
    func_0x00010bcde5a8();
  }
  return;
}



/* Entry: 10bcdd6f8; end: 10bcdd77f;  */

void FUN_10bcdd6f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x00010bcdd734(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x20;
  }
  return;
}



/* Entry: 10bcdd780; end: 10bcdd797;  */

void FUN_10bcdd780(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10bcdd7b4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bcdd798; end: 10bcdd7b3;  */

void FUN_10bcdd798(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10bcdd7b4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcdd7b4; end: 10bcdd85b;  */

long FUN_10bcdd7b4(long param_1)

{
  func_0x00010bcdd7f0(param_1 + 0xb0);
  func_0x00010bcdd814(param_1 + 0x90);
  func_0x00010bcdd838(param_1 + 0x88);
  FUN_10bce9450(param_1 + 8);
  return param_1;
}



/* Entry: 10bcdd85c; end: 10bcdd873;  */

void FUN_10bcdd85c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10bcdd874; end: 10bcdd89b;  */

undefined8 FUN_10bcdd874(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  FUN_10bcdd89c(param_1 + 0x20);
  func_0x00010bcde68c(param_1);
  if (extraout_x8 != 0) {
    FUN_10bcdd6f8(unaff_x19);
    func_0x00010bcde5a8();
  }
  return unaff_x19;
}



/* Entry: 10bcdd89c; end: 10bcdd8cb;  */

void FUN_10bcdd89c(void)

{
  long extraout_x8;
  
  func_0x00010bcde68c();
  if (extraout_x8 != 0) {
    FUN_10bcdd8cc();
    func_0x00010bcde5a8();
  }
  return;
}



/* Entry: 10bcdd8cc; end: 10bcdd953;  */

void FUN_10bcdd8cc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x00010bcdd908(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x20;
  }
  return;
}



/* Entry: 10bcdd954; end: 10bcdd96b;  */

void FUN_10bcdd954(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10bcdd988(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bcdd96c; end: 10bcdd987;  */

void FUN_10bcdd96c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10bcdd988(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcdd988; end: 10bcddbd3;  */

long FUN_10bcdd988(long param_1)

{
  func_0x00010bcdd9b4(param_1 + 0x70);
  FUN_10bce9f4c(param_1 + 8);
  return param_1;
}



/* Entry: 10bcddbd4; end: 10bcddc0b;  */

long FUN_10bcddbd4(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 4) == 1)) {
      if ((*(byte *)(*(long *)(lVar1 + 0x30) + 1) & 2) != 0) {
        lVar1 = 0;
      }
      return lVar1;
    }
  }
  return lVar1;
}



/* Entry: 10bcddc0c; end: 10bcddc4f;  */

undefined1  [16] FUN_10bcddc0c(void)

{
  ulong uVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *extraout_x9;
  undefined8 extraout_x10;
  ulong *unaff_x19;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_28 [16];
  undefined8 uStack_18;
  
  func_0x00010bcde550();
  func_0x00010bcde674();
  puVar5 = extraout_x9;
  uVar12 = extraout_x10;
  func_0x000107c2b99c(extraout_x9,extraout_x10,auStack_28,1);
  func_0x00010bcde52c(uStack_18);
  if ((bool)in_ZR) {
    auVar19._8_8_ = uVar12;
    auVar19._0_8_ = puVar5;
    return auVar19;
  }
  ___stack_chk_fail();
  func_0x00010bcde5e4();
  Hint_Prefetch(*puVar5,0,2,0);
  func_0x000107c284ac(*puVar5);
  lVar6 = 0;
  uVar7 = *unaff_x19;
  uVar8 = unaff_x19[2];
  uVar4 = uVar7 >> 0xc ^ (ulong)puVar5 >> 7;
  bVar2 = (byte)puVar5;
  uVar11 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar4 = uVar4 & uVar8;
    uVar12 = *(undefined8 *)(uVar7 + uVar4);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar18 == (bVar2 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar2 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      puVar5 = (undefined8 *)(uVar4 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar8);
      puVar3 = (undefined8 *)&stack0xffffffffffffff40;
      FUN_10bcddd64(&stack0xffffffffffffff40,unaff_x19[1] + (long)puVar5 * 0x18);
      if (((ulong)puVar3 & 1) != 0) {
        uVar12 = 0;
        goto LAB_10bcddd24;
      }
      puVar5 = puVar3;
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar4 = lVar6 + uVar4;
  }
  func_0x00010bcde5c4();
  FUN_10bcdb66c();
  uVar12 = 1;
LAB_10bcddd24:
  auVar20._8_8_ = uVar12;
  auVar20._0_8_ = puVar5;
  return auVar20;
}



/* Entry: 10bcddc50; end: 10bcddd63;  */

undefined1  [16] FUN_10bcddc50(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *unaff_x19;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  uint6 uVar10;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 uVar11;
  byte bVar17;
  undefined1 auVar18 [16];
  
  func_0x00010bcde5e4();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000107c284ac(*param_1);
  lVar5 = 0;
  uVar6 = *unaff_x19;
  uVar7 = unaff_x19[2];
  uVar4 = uVar6 >> 0xc ^ (ulong)param_1 >> 7;
  bVar2 = (byte)param_1;
  uVar10 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar4 = uVar4 & uVar7;
    uVar11 = *(undefined8 *)(uVar6 + uVar4);
    cVar12 = (char)((ulong)uVar11 >> 8);
    cVar13 = (char)((ulong)uVar11 >> 0x10);
    cVar14 = (char)((ulong)uVar11 >> 0x18);
    cVar15 = (char)((ulong)uVar11 >> 0x20);
    cVar16 = (char)((ulong)uVar11 >> 0x28);
    bVar9 = (byte)((ulong)uVar11 >> 0x30);
    bVar17 = (byte)((ulong)uVar11 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar17 == (bVar2 & 0x7f)),
                          CONCAT16(-(bVar9 == (bVar2 & 0x7f)),
                                   CONCAT15(-(cVar16 == (char)(uVar10 >> 0x28)),
                                            CONCAT14(-(cVar15 == (char)(uVar10 >> 0x20)),
                                                     CONCAT13(-(cVar14 == (char)(uVar10 >> 0x18)),
                                                              CONCAT12(-(cVar13 ==
                                                                        (char)(uVar10 >> 0x10)),
                                                                       CONCAT11(-(cVar12 ==
                                                                                 (char)(uVar10 >> 8)
                                                                                 ),-((char)uVar11 ==
                                                                                    (char)uVar10))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      param_1 = (undefined8 *)(uVar4 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar7)
      ;
      puVar3 = (undefined8 *)&stack0xffffffffffffff70;
      FUN_10bcddd64(&stack0xffffffffffffff70,unaff_x19[1] + (long)param_1 * 0x18);
      if (((ulong)puVar3 & 1) != 0) {
        uVar11 = 0;
        goto LAB_10bcddd24;
      }
      param_1 = puVar3;
    }
    bVar9 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                CONCAT16(-(bVar9 == 0x80),
                                         CONCAT15(-(cVar16 == -0x80),
                                                  CONCAT14(-(cVar15 == -0x80),
                                                           CONCAT13(-(cVar14 == -0x80),
                                                                    CONCAT12(-(cVar13 == -0x80),
                                                                             CONCAT11(-(cVar12 ==
                                                                                       -0x80),-((
                                                  char)uVar11 == -0x80)))))))),1);
    if ((bVar9 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    uVar4 = lVar5 + uVar4;
  }
  func_0x00010bcde5c4();
  FUN_10bcdb66c();
  uVar11 = 1;
LAB_10bcddd24:
  auVar18._8_8_ = uVar11;
  auVar18._0_8_ = param_1;
  return auVar18;
}



/* Entry: 10bcddd64; end: 10bcddd9b;  */

bool FUN_10bcddd64(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puStack_20;
  ulong uStack_18;
  
  uStack_18 = param_2[1];
  puStack_20 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_18 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_20 = param_2;
  }
  uVar1 = ((undefined8 *)*param_1)[1];
  iVar2 = (int)&puStack_20;
  if (uStack_18 == uVar1) {
    func_0x000100067218(&puStack_20,*(undefined8 *)*param_1,uVar1);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



/* Entry: 10bcddd9c; end: 10bcdddc7;  */

void FUN_10bcddd9c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uStack_24;
  
  func_0x000107c2ba3c(param_1,param_2,&uStack_24);
  *param_3 = uStack_24;
  return;
}



/* Entry: 10bcdddc8; end: 10bcdddef;  */

void FUN_10bcdddc8(void)

{
  func_0x000107c3a61c();
  FUN_10bcdddf0();
  return;
}



/* Entry: 10bcdddf0; end: 10bcdddff;  */

void FUN_10bcdddf0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (*param_1 != 0) {
    return;
  }
  puStack_30 = &UNK_10f6d19ac;
  puStack_28 = &UNK_10f6d196c;
  uStack_38 = 0x4a;
  uStack_34 = 2;
  func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_34,&puStack_30,&uStack_38,&puStack_28);
  puVar2 = puStack_28;
  puVar1 = puStack_28;
  _strlen(puStack_28);
  func_0x000107c2b9b4(&puStack_30,0xd,puVar2,puVar1);
  puVar2 = (undefined *)*param_1;
  if (puStack_30 != puVar2) {
    *param_1 = (long)puStack_30;
    puStack_30 = (undefined *)0x36;
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
    func_0x000107c2b9b0();
    puVar2 = puStack_30;
  }
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000107c2b9b0();
  }
  return;
}



/* Entry: 10bcdde00; end: 10bcdde17;  */

void FUN_10bcdde00(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined *puStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    return;
  }
  func_0x00010ae77c74();
  if (*param_1 == 0) {
    puStack_40 = &UNK_10f6d19ac;
    puStack_38 = &UNK_10f6d196c;
    uStack_48 = 0x4a;
    uStack_44 = 2;
    func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_44,&puStack_40,&uStack_48,&puStack_38);
    puVar2 = puStack_38;
    puVar1 = puStack_38;
    _strlen(puStack_38);
    func_0x000107c2b9b4(&puStack_40,0xd,puVar2,puVar1);
    puVar2 = (undefined *)*param_1;
    if (puStack_40 != puVar2) {
      *param_1 = (long)puStack_40;
      puStack_40 = (undefined *)0x36;
      if (((ulong)puVar2 & 1) == 0) {
        return;
      }
      func_0x000107c2b9b0();
      puVar2 = puStack_40;
    }
    if (((ulong)puVar2 & 1) != 0) {
      func_0x000107c2b9b0();
    }
    return;
  }
  return;
}



/* Entry: 10bcdde18; end: 10bcdde27;  */

void FUN_10bcdde18(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (*param_1 != 0) {
    return;
  }
  puStack_30 = &UNK_10f6d19ac;
  puStack_28 = &UNK_10f6d196c;
  uStack_38 = 0x4a;
  uStack_34 = 2;
  func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_34,&puStack_30,&uStack_38,&puStack_28);
  puVar2 = puStack_28;
  puVar1 = puStack_28;
  _strlen(puStack_28);
  func_0x000107c2b9b4(&puStack_30,0xd,puVar2,puVar1);
  puVar2 = (undefined *)*param_1;
  if (puStack_30 != puVar2) {
    *param_1 = (long)puStack_30;
    puStack_30 = (undefined *)0x36;
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
    func_0x000107c2b9b0();
    puVar2 = puStack_30;
  }
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000107c2b9b0();
  }
  return;
}



/* Entry: 10bcdde28; end: 10bcdde4f;  */

void FUN_10bcdde28(void)

{
  func_0x000107c3a61c();
  FUN_10bcdde18();
  return;
}



/* Entry: 10bcdde50; end: 10bcdde67;  */

void FUN_10bcdde50(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined *puStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    return;
  }
  func_0x00010ae77c74();
  if (*param_1 == 0) {
    puStack_40 = &UNK_10f6d19ac;
    puStack_38 = &UNK_10f6d196c;
    uStack_48 = 0x4a;
    uStack_44 = 2;
    func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_44,&puStack_40,&uStack_48,&puStack_38);
    puVar2 = puStack_38;
    puVar1 = puStack_38;
    _strlen(puStack_38);
    func_0x000107c2b9b4(&puStack_40,0xd,puVar2,puVar1);
    puVar2 = (undefined *)*param_1;
    if (puStack_40 != puVar2) {
      *param_1 = (long)puStack_40;
      puStack_40 = (undefined *)0x36;
      if (((ulong)puVar2 & 1) == 0) {
        return;
      }
      func_0x000107c2b9b0();
      puVar2 = puStack_40;
    }
    if (((ulong)puVar2 & 1) != 0) {
      func_0x000107c2b9b0();
    }
    return;
  }
  return;
}


