/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f5c310; end: 102f5c3a7;  */

void FUN_102f5c310(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_68 = *(long *)(param_1 + 0x58);
  if (lStack_68 != 1) {
    uStack_88 = *(undefined8 *)(param_1 + 0x38);
    uStack_90 = *(undefined8 *)(param_1 + 0x30);
    uStack_78 = *(undefined8 *)(param_1 + 0x48);
    uStack_80 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = *(undefined8 *)(param_1 + 0x50);
    uStack_a8 = *(undefined8 *)(param_1 + 0x18);
    uStack_b0 = *(undefined8 *)(param_1 + 0x10);
    uStack_98 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = *(undefined8 *)(param_1 + 0x68);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    uStack_48 = *(undefined8 *)(param_1 + 0x78);
    uStack_50 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102f5d954();
    (*pcVar1)(&uStack_b0,1,&UNK_1105ed9c0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f5c3a8; end: 102f5c3df;  */

undefined1  [16] FUN_102f5c3a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f115830;
  auVar1._0_8_ = 0xd00000000000002a;
  return auVar1;
}



/* Entry: 102f5c3e0; end: 102f5c417;  */

uint FUN_102f5c3e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_102f64124();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 102f5c418; end: 102f5c4b7;  */

/* WARNING: Possible PIC construction at 0x000102f5c464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f5c474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f5c468) */
/* WARNING: Removing unreachable block (ram,0x000102f5c478) */

void FUN_102f5c418(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2a620 != -1) {
    func_0x000107c61568(0x112f2a620,0x102f5c214);
  }
  uVar5 = uRam0000000113805660;
  uVar4 = uRam0000000113805658;
  uVar3 = uRam0000000113805650;
  uVar2 = uRam0000000113805648;
  uVar1 = uRam0000000113805640;
  *param_1 = uRam0000000113805638;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102f5c4b8; end: 102f5c4cb;  */

void FUN_102f5c4b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2a8d0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2a8d0,&UNK_10db682d0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f5c4cc; end: 102f5c4ff;  */

void FUN_102f5c4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 102f5c500; end: 102f5c62b;  */

void FUN_102f5c500(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_f8 [72];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_38 = unaff_x20[0xf];
  uStack_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  func_0x000107c6068c(auStack_f8,0);
  func_0x000107c5fa50(auStack_f8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f5c62c; end: 102f5c727;  */

uint FUN_102f5c62c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_190 [112];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_d8 = puVar4[9];
        uStack_e0 = puVar4[8];
        uStack_c8 = puVar4[0xb];
        uStack_d0 = puVar4[10];
        uStack_b8 = puVar4[0xd];
        uStack_c0 = puVar4[0xc];
        uStack_118 = puVar4[1];
        uStack_120 = *puVar4;
        uStack_108 = puVar4[3];
        uStack_110 = puVar4[2];
        uStack_f8 = puVar4[5];
        uStack_100 = puVar4[4];
        uStack_e8 = puVar4[7];
        uStack_f0 = puVar4[6];
        uStack_a8 = puVar5[1];
        uStack_b0 = *puVar5;
        uStack_98 = puVar5[3];
        uStack_a0 = puVar5[2];
        uStack_88 = puVar5[5];
        uStack_90 = puVar5[4];
        uStack_78 = puVar5[7];
        uStack_80 = puVar5[6];
        uStack_58 = puVar5[0xb];
        uStack_60 = puVar5[10];
        uStack_48 = puVar5[0xd];
        uStack_50 = puVar5[0xc];
        uStack_68 = puVar5[9];
        uStack_70 = puVar5[8];
        func_0x000102f647c4(&uStack_120,auStack_190);
        func_0x000102f647c4(&uStack_b0,auStack_190);
        puVar1 = &uStack_120;
        FUN_102f5d994(puVar1,&uStack_b0);
        uVar3 = (uint)puVar1;
        func_0x000102f647f8(&uStack_b0);
        func_0x000102f647f8(&uStack_120);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0xe;
        puVar4 = puVar4 + 0xe;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 102f5c728; end: 102f5ca37;  */

uint FUN_102f5c728(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_130 [64];
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 != 0) && (param_1 != param_2)) {
      plVar4 = (long *)(param_1 + 0x20);
      plVar5 = (long *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        lVar8 = plVar4[5];
        lVar6 = plVar4[4];
        uVar12 = plVar4[7];
        uVar10 = plVar4[6];
        lStack_e8 = plVar4[1];
        lStack_f0 = *plVar4;
        lStack_d8 = plVar4[3];
        uStack_e0 = plVar4[2];
        lVar9 = plVar5[5];
        lVar7 = plVar5[4];
        uVar13 = plVar5[7];
        lVar11 = plVar5[6];
        lStack_a8 = plVar5[1];
        lStack_b0 = *plVar5;
        lStack_98 = plVar5[3];
        lStack_a0 = plVar5[2];
        lStack_d0 = lVar6;
        lStack_c8 = lVar8;
        uStack_c0 = uVar10;
        uStack_b8 = uVar12;
        lStack_90 = lVar7;
        lStack_88 = lVar9;
        lStack_80 = lVar11;
        uStack_78 = uVar13;
        if (uVar12 >> 0x3c < 0xf) {
          if (0xe < uVar13 >> 0x3c) goto LAB_102f5c92c;
          if (lVar6 == lVar7) {
            if (lVar8 != lVar9) {
              FUN_102f64764(&lStack_f0,auStack_130);
              FUN_102f64764(&lStack_b0,auStack_130);
              lVar7 = lVar6;
              goto LAB_102f5c9ac;
            }
            FUN_102f64764(&lStack_f0,auStack_130);
            FUN_102f64764(&lStack_b0,auStack_130);
            FUN_102f5ce20(lVar6,lVar8,uVar10,uVar12);
            FUN_102f5ce20(lVar6,lVar8,lVar11,uVar13);
            uVar1 = uVar10;
            func_0x000100e25fcc(uVar10,uVar12,lVar11,uVar13);
            func_0x000102f5ce3c(lVar6,lVar8,lVar11,uVar13);
            if ((uVar1 & 1) != 0) goto LAB_102f5c88c;
          }
          else {
            FUN_102f64764(&lStack_f0,auStack_130);
            FUN_102f64764(&lStack_b0,auStack_130);
LAB_102f5c9ac:
            FUN_102f5ce20(lVar6,lVar8,uVar10,uVar12);
            FUN_102f5ce20(lVar7,lVar9,lVar11,uVar13);
            func_0x000102f5ce3c(lVar7,lVar9,lVar11,uVar13);
          }
          func_0x000102f5ce3c(lVar6,lVar8,uVar10,uVar12);
LAB_102f5ca00:
          func_0x000102f64798(&lStack_b0);
          func_0x000102f64798(&lStack_f0);
          goto LAB_102f5ca10;
        }
        if (uVar13 >> 0x3c < 0xf) {
LAB_102f5c92c:
          FUN_102f5ce20(lVar6,lVar8,uVar10,uVar12);
          FUN_102f5ce20(lVar7,lVar9,lVar11,uVar13);
          func_0x000102f5ce3c(lVar6,lVar8,uVar10,uVar12);
          func_0x000102f5ce3c(lVar7,lVar9,lVar11,uVar13);
          goto LAB_102f5ca10;
        }
        FUN_102f64764(&lStack_f0,auStack_130);
        FUN_102f64764(&lStack_b0,auStack_130);
        FUN_102f5ce20(lVar6,lVar8,uVar10,uVar12);
        FUN_102f5ce20(lVar7,lVar9,lVar11,uVar13);
LAB_102f5c88c:
        func_0x000102f5ce3c(lVar6,lVar8,uVar10,uVar12);
        if ((char)lStack_a8 == '\x01') {
          if (lStack_b0 != 0) {
            if (lStack_b0 != 1) {
              if (lStack_f0 != 2) goto LAB_102f5ca00;
              goto LAB_102f5c8e8;
            }
            if (lStack_f0 == 1) goto LAB_102f5c8e8;
            goto LAB_102f5ca00;
          }
          if (lStack_f0 != 0) goto LAB_102f5ca00;
        }
        else if (lStack_f0 != lStack_b0) goto LAB_102f5ca00;
LAB_102f5c8e8:
        uVar10 = uStack_e0;
        func_0x000100e25fcc(uStack_e0,lStack_d8,lStack_a0,lStack_98);
        uVar3 = (uint)uVar10;
        func_0x000102f64798(&lStack_b0);
        func_0x000102f64798(&lStack_f0);
        if (((uVar10 & 1) == 0) || (lVar2 == 0)) goto LAB_102f5ca14;
        plVar4 = plVar4 + 8;
        plVar5 = plVar5 + 8;
      } while( true );
    }
    uVar3 = 1;
  }
  else {
LAB_102f5ca10:
    uVar3 = 0;
  }
LAB_102f5ca14:
  return uVar3 & 1;
}



/* Entry: 102f5ca38; end: 102f5ca6b;  */

void FUN_102f5ca38(void)

{
  return;
}



/* Entry: 102f5ca6c; end: 102f5ca97;  */

undefined8 FUN_102f5ca6c(undefined8 param_1)

{
  FUN_102f612f4(param_1,&UNK_1105ed828);
  return param_1;
}



/* Entry: 102f5ca98; end: 102f5ce1f;  */

uint FUN_102f5ca98(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_e8 [40];
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar2 = *param_1;
  if ((((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0)
       ) && (param_1[2] == param_2[2])) && (param_1[3] == param_2[3])) {
    uVar6 = param_1[7];
    uVar5 = param_1[6];
    uVar10 = param_1[9];
    uVar8 = param_1[8];
    uVar3 = param_1[10];
    uVar7 = param_2[7];
    uVar2 = param_2[6];
    uVar11 = param_2[9];
    uVar9 = param_2[8];
    uVar4 = param_2[10];
    uStack_c0 = uVar2;
    uStack_b8 = uVar7;
    uStack_b0 = uVar9;
    uStack_a8 = uVar11;
    uStack_a0 = uVar4;
    uStack_90 = uVar5;
    uStack_88 = uVar6;
    uStack_80 = uVar8;
    uStack_78 = uVar10;
    uStack_70 = uVar3;
    if (uVar3 >> 0x3c < 0xf) {
      if (0xe < uVar4 >> 0x3c) goto LAB_102f5cbc4;
      if (uVar5 == uVar2) {
        if (uVar6 != uVar7) {
          FUN_102f5cea4(&uStack_90,auStack_e8,0x112f2a430,&UNK_10db664d8);
          FUN_102f5cea4(&uStack_c0,auStack_e8,0x112f2a430,&UNK_10db664d8);
          uVar2 = uVar5;
          goto LAB_102f5cd88;
        }
        if (uVar8 != uVar9) {
          FUN_102f5cea4(&uStack_90,auStack_e8,0x112f2a430,&UNK_10db664d8);
          FUN_102f5cea4(&uStack_c0,auStack_e8,0x112f2a430,&UNK_10db664d8);
          uVar2 = uVar5;
          uVar7 = uVar6;
          goto LAB_102f5cd88;
        }
        FUN_102f5cea4(&uStack_90,auStack_e8,0x112f2a430,&UNK_10db664d8);
        FUN_102f5cea4(&uStack_c0,auStack_e8,0x112f2a430,&UNK_10db664d8);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,uVar3,uVar11,uVar4);
        func_0x000102f5ca50(uVar5,uVar6,uVar8,uVar11,uVar4);
        if ((uVar2 & 1) != 0) goto LAB_102f5cb94;
      }
      else {
        FUN_102f5cea4(&uStack_90,auStack_e8,0x112f2a430,&UNK_10db664d8);
        FUN_102f5cea4(&uStack_c0,auStack_e8,0x112f2a430,&UNK_10db664d8);
LAB_102f5cd88:
        func_0x000102f5ca50(uVar2,uVar7,uVar9,uVar11,uVar4);
      }
    }
    else {
      if (0xe < uVar4 >> 0x3c) {
        FUN_102f5cea4(&uStack_90,auStack_e8,0x112f2a430,&UNK_10db664d8);
        FUN_102f5cea4(&uStack_c0,auStack_e8,0x112f2a430,&UNK_10db664d8);
LAB_102f5cb94:
        func_0x000102f5ca50(uVar5,uVar6,uVar8,uVar10,uVar3);
        uVar2 = param_1[4];
        func_0x000100e25fcc(uVar2,param_1[5],param_2[4],param_2[5]);
        uVar1 = (uint)uVar2;
        goto LAB_102f5cda8;
      }
LAB_102f5cbc4:
      FUN_102f5cea4(&uStack_90,auStack_e8,0x112f2a430,&UNK_10db664d8);
      FUN_102f5cea4(&uStack_c0,auStack_e8,0x112f2a430,&UNK_10db664d8);
      func_0x000102f5ca50(uVar5,uVar6,uVar8,uVar10,uVar3);
      uVar5 = uVar2;
      uVar6 = uVar7;
      uVar8 = uVar9;
      uVar10 = uVar11;
      uVar3 = uVar4;
    }
    func_0x000102f5ca50(uVar5,uVar6,uVar8,uVar10,uVar3);
  }
  uVar1 = 0;
LAB_102f5cda8:
  return uVar1 & 1;
}



/* Entry: 102f5ce20; end: 102f5ce57;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_102f5ce20(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 102f5ce58; end: 102f5cea3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f5ce58(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 102f5cea4; end: 102f5cf8b;  */

undefined8 FUN_102f5cea4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102f5cf8c; end: 102f5d4f3;  */

uint FUN_102f5cf8c(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_140 [48];
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  lVar4 = param_1[5];
  lVar3 = param_1[4];
  uVar13 = param_1[7];
  uVar6 = param_1[6];
  lVar10 = param_2[5];
  lVar5 = param_2[4];
  uVar8 = param_2[7];
  uVar7 = param_2[6];
  lStack_b0 = lVar5;
  lStack_a8 = lVar10;
  uStack_a0 = uVar7;
  uStack_98 = uVar8;
  lStack_90 = lVar3;
  lStack_88 = lVar4;
  uStack_80 = uVar6;
  uStack_78 = uVar13;
  if (uVar13 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_102f5d070;
    if (lVar3 == lVar5) {
      if (lVar4 == lVar10) {
        FUN_102f5cea4(&lStack_90,&uStack_e0,0x112f2a448,&UNK_10db664f0);
        FUN_102f5cea4(&lStack_b0,&uStack_e0,0x112f2a448,&UNK_10db664f0);
        uVar9 = uVar6;
        func_0x000100e25fcc(uVar6,uVar13,uVar7,uVar8);
        func_0x000102f5ce3c(lVar3,lVar4,uVar7,uVar8);
        if ((uVar9 & 1) != 0) goto LAB_102f5d024;
        goto LAB_102f5d350;
      }
      FUN_102f5cea4(&lStack_90,&uStack_e0,0x112f2a448,&UNK_10db664f0);
      FUN_102f5cea4(&lStack_b0,&uStack_e0,0x112f2a448,&UNK_10db664f0);
      lVar5 = lVar3;
    }
    else {
      FUN_102f5cea4(&lStack_90,&uStack_e0,0x112f2a448,&UNK_10db664f0);
      FUN_102f5cea4(&lStack_b0,&uStack_e0,0x112f2a448,&UNK_10db664f0);
    }
    func_0x000102f5ce3c(lVar5,lVar10,uVar7,uVar8);
LAB_102f5d350:
    func_0x000102f5ce3c(lVar3,lVar4,uVar6,uVar13);
  }
  else {
    if (uVar8 >> 0x3c < 0xf) {
LAB_102f5d070:
      FUN_102f5cea4(&lStack_90,&uStack_e0,0x112f2a448,&UNK_10db664f0);
      FUN_102f5cea4(&lStack_b0,&uStack_e0,0x112f2a448,&UNK_10db664f0);
      func_0x000102f5ce3c(lVar3,lVar4,uVar6,uVar13);
      lVar3 = lVar5;
      lVar4 = lVar10;
      uVar6 = uVar7;
      uVar13 = uVar8;
      goto LAB_102f5d350;
    }
    FUN_102f5cea4(&lStack_90,&uStack_e0,0x112f2a448,&UNK_10db664f0);
    FUN_102f5cea4(&lStack_b0,&uStack_e0,0x112f2a448,&UNK_10db664f0);
LAB_102f5d024:
    func_0x000102f5ce3c(lVar3,lVar4,uVar6,uVar13);
    lVar3 = *param_1;
    lVar4 = *param_2;
    if ((char)param_2[1] != '\x01') {
      if (lVar3 == lVar4) goto LAB_102f5d15c;
      goto LAB_102f5d354;
    }
    if (lVar4 < 2) {
      if (lVar4 == 0) {
        if (lVar3 == 0) {
LAB_102f5d15c:
          lVar3 = param_1[9];
          uVar6 = param_1[8];
          lVar4 = param_1[0xb];
          uVar13 = param_1[10];
          lVar5 = param_1[0xd];
          uVar7 = param_1[0xc];
          lVar10 = param_2[9];
          uVar8 = param_2[8];
          lVar14 = param_2[0xb];
          uVar12 = param_2[10];
          lVar11 = param_2[0xd];
          uVar9 = param_2[0xc];
          uStack_110 = uVar8;
          lStack_108 = lVar10;
          uStack_100 = uVar12;
          lStack_f8 = lVar14;
          uStack_f0 = uVar9;
          lStack_e8 = lVar11;
          uStack_e0 = uVar6;
          lStack_d8 = lVar3;
          uStack_d0 = uVar13;
          lStack_c8 = lVar4;
          uStack_c0 = uVar7;
          lStack_b8 = lVar5;
          if (lVar3 == 0) {
            if (lVar10 == 0) {
              FUN_102f5cea4(&uStack_e0,auStack_140,0x112f2a450,&UNK_10db664f8);
              FUN_102f5cea4(&uStack_110,auStack_140,0x112f2a450,&UNK_10db664f8);
LAB_102f5d4c4:
              FUN_102f5ce58(uVar6,lVar3,uVar13,lVar4,uVar7,lVar5);
              lVar3 = param_1[2];
              func_0x000100e25fcc(lVar3,param_1[3],param_2[2],param_2[3]);
              uVar1 = (uint)lVar3;
              goto LAB_102f5d358;
            }
LAB_102f5d380:
            FUN_102f5cea4(&uStack_e0,auStack_140,0x112f2a450,&UNK_10db664f8);
            FUN_102f5cea4(&uStack_110,auStack_140,0x112f2a450,&UNK_10db664f8);
            FUN_102f5ce58(uVar6,lVar3,uVar13,lVar4,uVar7,lVar5);
            uVar6 = uVar8;
            lVar3 = lVar10;
            uVar13 = uVar12;
            lVar4 = lVar14;
            uVar7 = uVar9;
            lVar5 = lVar11;
          }
          else {
            if (lVar10 == 0) goto LAB_102f5d380;
            if ((((uVar6 == uVar8) && (lVar3 == lVar10)) ||
                (uVar2 = uVar6, func_0x000107c605b8(uVar6,lVar3,uVar8,lVar10,0), (uVar2 & 1) != 0))
               && (((uVar13 == uVar12 && (lVar4 == lVar14)) ||
                   (uVar2 = uVar13, func_0x000107c605b8(uVar13,lVar4,uVar12,lVar14,0),
                   (uVar2 & 1) != 0)))) {
              FUN_102f5cea4(&uStack_e0,auStack_140,0x112f2a450,&UNK_10db664f8);
              FUN_102f5cea4(&uStack_110,auStack_140,0x112f2a450,&UNK_10db664f8);
              uVar2 = uVar7;
              func_0x000100e25fcc(uVar7,lVar5,uVar9,lVar11);
              FUN_102f5ce58(uVar8,lVar10,uVar12,lVar14,uVar9,lVar11);
              if ((uVar2 & 1) != 0) goto LAB_102f5d4c4;
            }
            else {
              FUN_102f5cea4(&uStack_e0,auStack_140,0x112f2a450,&UNK_10db664f8);
              FUN_102f5cea4(&uStack_110,auStack_140,0x112f2a450,&UNK_10db664f8);
              FUN_102f5ce58(uVar8,lVar10,uVar12,lVar14,uVar9,lVar11);
            }
          }
          FUN_102f5ce58(uVar6,lVar3,uVar13,lVar4,uVar7,lVar5);
        }
      }
      else if (lVar3 == 1) goto LAB_102f5d15c;
    }
    else if (lVar4 == 2) {
      if (lVar3 == 2) goto LAB_102f5d15c;
    }
    else if (lVar3 == 3) goto LAB_102f5d15c;
  }
LAB_102f5d354:
  uVar1 = 0;
LAB_102f5d358:
  return uVar1 & 1;
}



/* Entry: 102f5d4f4; end: 102f5d5b3;  */

void FUN_102f5d4f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db668b0;
  func_0x000107c61520(&UNK_10db668b0,&UNK_1105ed7a0);
  puRam0000000112f2a488 = puVar1;
  return;
}



/* Entry: 102f5d5b4; end: 102f5d853;  */

uint FUN_102f5d5b4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_378 [88];
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_1e8 = param_1[7];
  uStack_1f0 = param_1[6];
  uStack_c8 = param_1[9];
  uStack_d0 = param_1[8];
  uStack_1f8 = param_1[5];
  uStack_200 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_1d8 = param_1[9];
  uStack_1e0 = param_1[8];
  uStack_b8 = param_1[0xb];
  uStack_c0 = param_1[10];
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  lStack_208 = param_1[3];
  uStack_210 = param_1[2];
  uStack_240 = param_2[7];
  uStack_248 = param_2[6];
  uStack_128 = param_2[9];
  uStack_130 = param_2[8];
  uStack_250 = param_2[5];
  uStack_258 = param_2[4];
  uStack_138 = param_2[7];
  uStack_140 = param_2[6];
  uStack_230 = param_2[9];
  uStack_238 = param_2[8];
  uStack_118 = param_2[0xb];
  uStack_120 = param_2[10];
  uStack_158 = param_2[3];
  uStack_160 = param_2[2];
  uStack_148 = param_2[5];
  uStack_150 = param_2[4];
  lStack_260 = param_2[3];
  uStack_268 = param_2[2];
  uStack_1c8 = param_1[0xb];
  uStack_1d0 = param_1[10];
  uStack_220 = param_2[0xb];
  uStack_228 = param_2[10];
  uStack_b0 = param_1[0xc];
  uStack_110 = param_2[0xc];
  uStack_1c0 = param_1[0xc];
  uStack_218 = param_2[0xc];
  uStack_1b8 = uStack_268;
  lStack_1b0 = lStack_260;
  uStack_1a8 = uStack_258;
  uStack_1a0 = uStack_250;
  uStack_198 = uStack_248;
  uStack_190 = uStack_240;
  uStack_188 = uStack_238;
  uStack_180 = uStack_230;
  uStack_178 = uStack_228;
  uStack_170 = uStack_220;
  uStack_168 = uStack_218;
  if (lStack_208 == 0) {
    if (lStack_260 != 0) goto LAB_102f5d73c;
    uStack_298 = param_1[7];
    uStack_2a0 = param_1[6];
    uStack_288 = param_1[9];
    uStack_290 = param_1[8];
    uStack_278 = param_1[0xb];
    uStack_280 = param_1[10];
    uStack_270 = param_1[0xc];
    lStack_2b8 = param_1[3];
    uStack_2c0 = param_1[2];
    uStack_2a8 = param_1[5];
    uStack_2b0 = param_1[4];
    FUN_102f5cea4(&uStack_100,&uStack_a0,0x112f2a438,&UNK_10db664e0);
    FUN_102f5cea4(&uStack_160,&uStack_a0,0x112f2a438,&UNK_10db664e0);
    func_0x000102f5cf4c(&uStack_2c0,0x112f2a438,&UNK_10db664e0);
  }
  else {
    if (lStack_260 == 0) {
LAB_102f5d73c:
      uStack_2c0 = uStack_210;
      lStack_2b8 = lStack_208;
      uStack_2b0 = uStack_200;
      uStack_2a8 = uStack_1f8;
      uStack_2a0 = uStack_1f0;
      uStack_298 = uStack_1e8;
      uStack_290 = uStack_1e0;
      uStack_288 = uStack_1d8;
      uStack_280 = uStack_1d0;
      uStack_278 = uStack_1c8;
      uStack_270 = uStack_1c0;
      FUN_102f5cea4(&uStack_100,&uStack_a0,0x112f2a438,&UNK_10db664e0);
      FUN_102f5cea4(&uStack_160,&uStack_a0,0x112f2a438,&UNK_10db664e0);
      func_0x000102f5cf4c(&uStack_2c0,0x112f2a440,&UNK_10db664e8);
      uVar1 = 0;
      goto LAB_102f5d838;
    }
    uStack_2f8 = param_2[7];
    uStack_300 = param_2[6];
    uStack_2e8 = param_2[9];
    uStack_2f0 = param_2[8];
    uStack_2d8 = param_2[0xb];
    uStack_2e0 = param_2[10];
    uStack_2d0 = param_2[0xc];
    uStack_318 = param_2[3];
    uStack_320 = param_2[2];
    uStack_308 = param_2[5];
    uStack_310 = param_2[4];
    uStack_78 = param_1[7];
    uStack_80 = param_1[6];
    uStack_68 = param_1[9];
    uStack_70 = param_1[8];
    uStack_58 = param_1[0xb];
    uStack_60 = param_1[10];
    uStack_50 = param_1[0xc];
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    uStack_2c0 = uStack_320;
    lStack_2b8 = uStack_318;
    uStack_2b0 = uStack_310;
    uStack_2a8 = uStack_308;
    uStack_2a0 = uStack_300;
    uStack_298 = uStack_2f8;
    uStack_290 = uStack_2f0;
    uStack_288 = uStack_2e8;
    uStack_280 = uStack_2e0;
    uStack_278 = uStack_2d8;
    uStack_270 = uStack_2d0;
    FUN_102f5cea4(&uStack_100,auStack_378,0x112f2a438,&UNK_10db664e0);
    FUN_102f5cea4(&uStack_160,auStack_378,0x112f2a438,&UNK_10db664e0);
    puVar2 = &uStack_a0;
    FUN_102f5ca98(puVar2,&uStack_2c0);
    func_0x000102f5cf4c(&uStack_320,0x112f2a438,&UNK_10db664e0);
    func_0x000102f5cf4c(&uStack_210,0x112f2a438,&UNK_10db664e0);
    if (((ulong)puVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_102f5d838;
    }
  }
  uVar3 = *param_1;
  func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
  uVar1 = (uint)uVar3;
LAB_102f5d838:
  return uVar1 & 1;
}



/* Entry: 102f5d854; end: 102f5d993;  */

void FUN_102f5d854(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a4b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66b38;
  func_0x000107c61520(&UNK_10db66b38,&UNK_1105ed940);
  puRam0000000112f2a4b8 = puVar1;
  return;
}



/* Entry: 102f5d994; end: 102f5e48b;  */

uint FUN_102f5d994(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_140 [48];
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  lVar4 = param_1[5];
  lVar3 = param_1[4];
  uVar13 = param_1[7];
  uVar6 = param_1[6];
  lVar10 = param_2[5];
  lVar5 = param_2[4];
  uVar8 = param_2[7];
  uVar7 = param_2[6];
  lStack_b0 = lVar5;
  lStack_a8 = lVar10;
  uStack_a0 = uVar7;
  uStack_98 = uVar8;
  lStack_90 = lVar3;
  lStack_88 = lVar4;
  uStack_80 = uVar6;
  uStack_78 = uVar13;
  if (uVar13 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_102f5da88;
    if (lVar3 == lVar5) {
      if (lVar4 == lVar10) {
        FUN_102f5cea4(&lStack_90,&uStack_e0,0x112f2a448,&UNK_10db664f0);
        FUN_102f5cea4(&lStack_b0,&uStack_e0,0x112f2a448,&UNK_10db664f0);
        uVar9 = uVar6;
        func_0x000100e25fcc(uVar6,uVar13,uVar7,uVar8);
        func_0x000102f5ce3c(lVar3,lVar4,uVar7,uVar8);
        if ((uVar9 & 1) != 0) goto LAB_102f5da2c;
        goto LAB_102f5dd54;
      }
      FUN_102f5cea4(&lStack_90,&uStack_e0,0x112f2a448,&UNK_10db664f0);
      FUN_102f5cea4(&lStack_b0,&uStack_e0,0x112f2a448,&UNK_10db664f0);
      lVar5 = lVar3;
    }
    else {
      FUN_102f5cea4(&lStack_90,&uStack_e0,0x112f2a448,&UNK_10db664f0);
      FUN_102f5cea4(&lStack_b0,&uStack_e0,0x112f2a448,&UNK_10db664f0);
    }
    func_0x000102f5ce3c(lVar5,lVar10,uVar7,uVar8);
LAB_102f5dd54:
    func_0x000102f5ce3c(lVar3,lVar4,uVar6,uVar13);
  }
  else {
    if (uVar8 >> 0x3c < 0xf) {
LAB_102f5da88:
      FUN_102f5cea4(&lStack_90,&uStack_e0,0x112f2a448,&UNK_10db664f0);
      FUN_102f5cea4(&lStack_b0,&uStack_e0,0x112f2a448,&UNK_10db664f0);
      func_0x000102f5ce3c(lVar3,lVar4,uVar6,uVar13);
      lVar3 = lVar5;
      lVar4 = lVar10;
      uVar6 = uVar7;
      uVar13 = uVar8;
      goto LAB_102f5dd54;
    }
    FUN_102f5cea4(&lStack_90,&uStack_e0,0x112f2a448,&UNK_10db664f0);
    FUN_102f5cea4(&lStack_b0,&uStack_e0,0x112f2a448,&UNK_10db664f0);
LAB_102f5da2c:
    func_0x000102f5ce3c(lVar3,lVar4,uVar6,uVar13);
    lVar3 = *param_1;
    lVar4 = *param_2;
    if ((char)param_2[1] == '\x01') {
      if (lVar4 < 3) {
        if (lVar4 == 0) {
          if (lVar3 == 0) goto LAB_102f5db74;
        }
        else if (lVar4 == 1) {
          if (lVar3 == 1) goto LAB_102f5db74;
        }
        else if (lVar3 == 2) goto LAB_102f5db74;
      }
      else if (lVar4 < 5) {
        if (lVar4 == 3) {
          if (lVar3 == 3) {
LAB_102f5db74:
            lVar3 = param_1[9];
            uVar6 = param_1[8];
            lVar4 = param_1[0xb];
            uVar13 = param_1[10];
            lVar5 = param_1[0xd];
            uVar7 = param_1[0xc];
            lVar10 = param_2[9];
            uVar8 = param_2[8];
            lVar14 = param_2[0xb];
            uVar12 = param_2[10];
            lVar11 = param_2[0xd];
            uVar9 = param_2[0xc];
            uStack_110 = uVar8;
            lStack_108 = lVar10;
            uStack_100 = uVar12;
            lStack_f8 = lVar14;
            uStack_f0 = uVar9;
            lStack_e8 = lVar11;
            uStack_e0 = uVar6;
            lStack_d8 = lVar3;
            uStack_d0 = uVar13;
            lStack_c8 = lVar4;
            uStack_c0 = uVar7;
            lStack_b8 = lVar5;
            if (lVar3 == 0) {
              if (lVar10 == 0) {
                FUN_102f5cea4(&uStack_e0,auStack_140,0x112f2a450,&UNK_10db664f8);
                FUN_102f5cea4(&uStack_110,auStack_140,0x112f2a450,&UNK_10db664f8);
LAB_102f5df08:
                FUN_102f5ce58(uVar6,lVar3,uVar13,lVar4,uVar7,lVar5);
                lVar3 = param_1[2];
                func_0x000100e25fcc(lVar3,param_1[3],param_2[2],param_2[3]);
                uVar1 = (uint)lVar3;
                goto LAB_102f5dd5c;
              }
LAB_102f5dd9c:
              FUN_102f5cea4(&uStack_e0,auStack_140,0x112f2a450,&UNK_10db664f8);
              FUN_102f5cea4(&uStack_110,auStack_140,0x112f2a450,&UNK_10db664f8);
              FUN_102f5ce58(uVar6,lVar3,uVar13,lVar4,uVar7,lVar5);
              uVar6 = uVar8;
              lVar3 = lVar10;
              uVar13 = uVar12;
              lVar4 = lVar14;
              uVar7 = uVar9;
              lVar5 = lVar11;
            }
            else {
              if (lVar10 == 0) goto LAB_102f5dd9c;
              if ((((uVar6 == uVar8) && (lVar3 == lVar10)) ||
                  (uVar2 = uVar6, func_0x000107c605b8(uVar6,lVar3,uVar8,lVar10,0), (uVar2 & 1) != 0)
                  ) && (((uVar13 == uVar12 && (lVar4 == lVar14)) ||
                        (uVar2 = uVar13, func_0x000107c605b8(uVar13,lVar4,uVar12,lVar14,0),
                        (uVar2 & 1) != 0)))) {
                FUN_102f5cea4(&uStack_e0,auStack_140,0x112f2a450,&UNK_10db664f8);
                FUN_102f5cea4(&uStack_110,auStack_140,0x112f2a450,&UNK_10db664f8);
                uVar2 = uVar7;
                func_0x000100e25fcc(uVar7,lVar5,uVar9,lVar11);
                FUN_102f5ce58(uVar8,lVar10,uVar12,lVar14,uVar9,lVar11);
                if ((uVar2 & 1) != 0) goto LAB_102f5df08;
              }
              else {
                FUN_102f5cea4(&uStack_e0,auStack_140,0x112f2a450,&UNK_10db664f8);
                FUN_102f5cea4(&uStack_110,auStack_140,0x112f2a450,&UNK_10db664f8);
                FUN_102f5ce58(uVar8,lVar10,uVar12,lVar14,uVar9,lVar11);
              }
            }
            FUN_102f5ce58(uVar6,lVar3,uVar13,lVar4,uVar7,lVar5);
          }
        }
        else if (lVar3 == 4) goto LAB_102f5db74;
      }
      else if (lVar4 == 5) {
        if (lVar3 == 5) goto LAB_102f5db74;
      }
      else if (lVar3 == 6) goto LAB_102f5db74;
    }
    else if (lVar3 == lVar4) goto LAB_102f5db74;
  }
  uVar1 = 0;
LAB_102f5dd5c:
  return uVar1 & 1;
}



/* Entry: 102f5e48c; end: 102f5e507;  */

/* WARNING: Possible PIC construction at 0x000102f5e4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000102f5e4c0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f5e48c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if ((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar25 = (byte *)param_1[5];
  lVar24 = param_2[4];
  uVar13 = param_2[5];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar13 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar24 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar24 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar24 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar12 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      lVar24 = *(long *)(pbVar14 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 0x20);
        lVar24 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar24;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar26;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar14 + 0x20);
      lVar24 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar24;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar26;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 102f5e508; end: 102f5e79f;  */

uint FUN_102f5e508(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auStack_430 [112];
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uVar3;
  
  uStack_238 = param_1[9];
  uStack_240 = param_1[8];
  uStack_d8 = param_1[0xb];
  uStack_e0 = param_1[10];
  lStack_228 = param_1[0xb];
  uStack_230 = param_1[10];
  uStack_c8 = param_1[0xd];
  uStack_d0 = param_1[0xc];
  uStack_218 = param_1[0xd];
  uStack_220 = param_1[0xc];
  uStack_b8 = param_1[0xf];
  uStack_c0 = param_1[0xe];
  uStack_118 = param_1[3];
  uStack_120 = param_1[2];
  uStack_108 = param_1[5];
  uStack_110 = param_1[4];
  uStack_f8 = param_1[7];
  uStack_100 = param_1[6];
  uStack_e8 = param_1[9];
  uStack_f0 = param_1[8];
  uStack_268 = param_1[3];
  uStack_270 = param_1[2];
  uStack_258 = param_1[5];
  uStack_260 = param_1[4];
  uStack_248 = param_1[7];
  uStack_250 = param_1[6];
  uStack_188 = param_2[3];
  uStack_190 = param_2[2];
  uStack_178 = param_2[5];
  uStack_180 = param_2[4];
  uStack_288 = param_2[0xd];
  uStack_290 = param_2[0xc];
  uStack_128 = param_2[0xf];
  uStack_130 = param_2[0xe];
  uStack_2a8 = param_2[9];
  uStack_2b0 = param_2[8];
  uStack_148 = param_2[0xb];
  uStack_150 = param_2[10];
  lStack_298 = param_2[0xb];
  uStack_2a0 = param_2[10];
  uStack_138 = param_2[0xd];
  uStack_140 = param_2[0xc];
  uStack_168 = param_2[7];
  uStack_170 = param_2[6];
  uStack_158 = param_2[9];
  uStack_160 = param_2[8];
  uStack_2d8 = param_2[3];
  uStack_2e0 = param_2[2];
  uStack_2c8 = param_2[5];
  uStack_2d0 = param_2[4];
  uStack_2b8 = param_2[7];
  uStack_2c0 = param_2[6];
  uStack_208 = param_1[0xf];
  uStack_210 = param_1[0xe];
  uStack_278 = param_2[0xf];
  uStack_280 = param_2[0xe];
  uStack_200 = uStack_2e0;
  uStack_1f8 = uStack_2d8;
  uStack_1f0 = uStack_2d0;
  uStack_1e8 = uStack_2c8;
  uStack_1e0 = uStack_2c0;
  uStack_1d8 = uStack_2b8;
  uStack_1d0 = uStack_2b0;
  uStack_1c8 = uStack_2a8;
  uStack_1c0 = uStack_2a0;
  lStack_1b8 = lStack_298;
  uStack_1b0 = uStack_290;
  uStack_1a8 = uStack_288;
  uStack_1a0 = uStack_280;
  uStack_198 = uStack_278;
  if (lStack_228 == 1) {
    if (lStack_298 == 1) {
      lStack_308 = param_1[0xb];
      uStack_310 = param_1[10];
      uStack_2f8 = param_1[0xd];
      uStack_300 = param_1[0xc];
      uStack_2e8 = param_1[0xf];
      uStack_2f0 = param_1[0xe];
      uStack_348 = param_1[3];
      uStack_350 = param_1[2];
      uStack_338 = param_1[5];
      uStack_340 = param_1[4];
      uStack_328 = param_1[7];
      uStack_330 = param_1[6];
      uStack_318 = param_1[9];
      uStack_320 = param_1[8];
      FUN_102f5cea4(&uStack_120,&uStack_b0,0x112f2a458,&UNK_10db66500);
      FUN_102f5cea4(&uStack_190,&uStack_b0,0x112f2a458,&UNK_10db66500);
      func_0x000102f5cf4c(&uStack_350,0x112f2a458,&UNK_10db66500);
LAB_102f5e778:
      uVar3 = *param_1;
      func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar3;
      goto LAB_102f5e784;
    }
LAB_102f5e630:
    uStack_350 = uStack_270;
    uStack_348 = uStack_268;
    uStack_340 = uStack_260;
    uStack_338 = uStack_258;
    uStack_330 = uStack_250;
    uStack_328 = uStack_248;
    uStack_320 = uStack_240;
    uStack_318 = uStack_238;
    uStack_310 = uStack_230;
    lStack_308 = lStack_228;
    uStack_300 = uStack_220;
    uStack_2f8 = uStack_218;
    uStack_2f0 = uStack_210;
    uStack_2e8 = uStack_208;
    FUN_102f5cea4(&uStack_120,&uStack_b0,0x112f2a458,&UNK_10db66500);
    FUN_102f5cea4(&uStack_190,&uStack_b0,0x112f2a458,&UNK_10db66500);
    func_0x000102f5cf4c(&uStack_350,0x112f2a460,&UNK_10db66508);
  }
  else {
    if (lStack_298 == 1) goto LAB_102f5e630;
    uStack_378 = param_2[0xb];
    uStack_380 = param_2[10];
    uStack_368 = param_2[0xd];
    uStack_370 = param_2[0xc];
    uStack_358 = param_2[0xf];
    uStack_360 = param_2[0xe];
    uStack_3b8 = param_2[3];
    uStack_3c0 = param_2[2];
    uStack_3a8 = param_2[5];
    uStack_3b0 = param_2[4];
    uStack_398 = param_2[7];
    uStack_3a0 = param_2[6];
    uStack_388 = param_2[9];
    uStack_390 = param_2[8];
    uStack_68 = param_1[0xb];
    uStack_70 = param_1[10];
    uStack_58 = param_1[0xd];
    uStack_60 = param_1[0xc];
    uStack_48 = param_1[0xf];
    uStack_50 = param_1[0xe];
    uStack_a8 = param_1[3];
    uStack_b0 = param_1[2];
    uStack_98 = param_1[5];
    uStack_a0 = param_1[4];
    uStack_88 = param_1[7];
    uStack_90 = param_1[6];
    uStack_78 = param_1[9];
    uStack_80 = param_1[8];
    uStack_350 = uStack_3c0;
    uStack_348 = uStack_3b8;
    uStack_340 = uStack_3b0;
    uStack_338 = uStack_3a8;
    uStack_330 = uStack_3a0;
    uStack_328 = uStack_398;
    uStack_320 = uStack_390;
    uStack_318 = uStack_388;
    uStack_310 = uStack_380;
    lStack_308 = uStack_378;
    uStack_300 = uStack_370;
    uStack_2f8 = uStack_368;
    uStack_2f0 = uStack_360;
    uStack_2e8 = uStack_358;
    FUN_102f5cea4(&uStack_120,auStack_430,0x112f2a458,&UNK_10db66500);
    FUN_102f5cea4(&uStack_190,auStack_430,0x112f2a458,&UNK_10db66500);
    puVar2 = &uStack_b0;
    FUN_102f5cf8c(puVar2,&uStack_350);
    func_0x000102f5cf4c(&uStack_3c0,0x112f2a458,&UNK_10db66500);
    func_0x000102f5cf4c(&uStack_270,0x112f2a458,&UNK_10db66500);
    if (((ulong)puVar2 & 1) != 0) goto LAB_102f5e778;
  }
  uVar1 = 0;
LAB_102f5e784:
  return uVar1 & 1;
}



/* Entry: 102f5e7a0; end: 102f5ed8f;  */

uint FUN_102f5e7a0(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if ((((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0)
       ) && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)))) && (param_1[4] == param_2[4])) {
    uVar4 = param_1[8];
    uVar2 = param_1[7];
    uVar8 = param_1[10];
    uVar6 = param_1[9];
    uVar5 = param_2[8];
    uVar3 = param_2[7];
    uVar9 = param_2[10];
    uVar7 = param_2[9];
    uStack_a0 = uVar3;
    uStack_98 = uVar5;
    uStack_90 = uVar7;
    uStack_88 = uVar9;
    uStack_80 = uVar2;
    uStack_78 = uVar4;
    uStack_70 = uVar6;
    uStack_68 = uVar8;
    if (uVar8 >> 0x3c < 0xf) {
      if (0xe < uVar9 >> 0x3c) goto LAB_102f5e8c4;
      if (uVar2 == uVar3) {
        if (uVar4 != uVar5) {
          FUN_102f5cea4(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
          FUN_102f5cea4(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
          uVar3 = uVar2;
          goto LAB_102f5ea18;
        }
        FUN_102f5cea4(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
        FUN_102f5cea4(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
        uVar3 = uVar6;
        func_0x000100e25fcc(uVar6,uVar8,uVar7,uVar9);
        func_0x000102f5ce3c(uVar2,uVar4,uVar7,uVar9);
        if ((uVar3 & 1) != 0) goto LAB_102f5e894;
      }
      else {
        FUN_102f5cea4(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
        FUN_102f5cea4(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
LAB_102f5ea18:
        func_0x000102f5ce3c(uVar3,uVar5,uVar7,uVar9);
      }
    }
    else {
      if (0xe < uVar9 >> 0x3c) {
        FUN_102f5cea4(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
        FUN_102f5cea4(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
LAB_102f5e894:
        func_0x000102f5ce3c(uVar2,uVar4,uVar6,uVar8);
        uVar2 = param_1[5];
        func_0x000100e25fcc(uVar2,param_1[6],param_2[5],param_2[6]);
        uVar1 = (uint)uVar2;
        goto LAB_102f5ea44;
      }
LAB_102f5e8c4:
      FUN_102f5cea4(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
      FUN_102f5cea4(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
      func_0x000102f5ce3c(uVar2,uVar4,uVar6,uVar8);
      uVar2 = uVar3;
      uVar4 = uVar5;
      uVar6 = uVar7;
      uVar8 = uVar9;
    }
    func_0x000102f5ce3c(uVar2,uVar4,uVar6,uVar8);
  }
  uVar1 = 0;
LAB_102f5ea44:
  return uVar1 & 1;
}



/* Entry: 102f5ed90; end: 102f5ee2b;  */

/* WARNING: Possible PIC construction at 0x000102f5edc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000102f5edc4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f5ed90(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if ((((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
       (func_0x000107c605b8(), (uVar13 & 1) == 0)) || (param_1[4] != param_2[4])) ||
     (param_1[5] != param_2[5])) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[6];
  pbVar25 = (byte *)param_1[7];
  lVar24 = param_2[6];
  uVar13 = param_2[7];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
         ((uVar13 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar13 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar24 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar24 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar24 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar12 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      lVar24 = *(long *)(pbVar14 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 0x20);
        lVar24 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar24;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar26;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar14 + 0x20);
      lVar24 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar24;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar26;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 102f5ee2c; end: 102f5ef5b;  */

uint FUN_102f5ee2c(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_1a0 [112];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = *param_1;
  lVar4 = *param_2;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 == *(long *)(lVar4 + 0x10)) {
    if (lVar6 != 0 && lVar5 != lVar4) {
      puVar7 = (undefined8 *)(lVar5 + 0x20);
      puVar8 = (undefined8 *)(lVar4 + 0x20);
      do {
        uStack_128 = puVar7[1];
        uStack_130 = *puVar7;
        uStack_118 = puVar7[3];
        uStack_120 = puVar7[2];
        uStack_108 = puVar7[5];
        uStack_110 = puVar7[4];
        uStack_f8 = puVar7[7];
        uStack_100 = puVar7[6];
        uStack_e8 = puVar7[9];
        uStack_f0 = puVar7[8];
        uStack_d8 = puVar7[0xb];
        uStack_e0 = puVar7[10];
        uStack_c8 = puVar7[0xd];
        uStack_d0 = puVar7[0xc];
        uStack_68 = puVar8[0xb];
        uStack_70 = puVar8[10];
        uStack_58 = puVar8[0xd];
        uStack_60 = puVar8[0xc];
        uStack_88 = puVar8[7];
        uStack_90 = puVar8[6];
        uStack_78 = puVar8[9];
        uStack_80 = puVar8[8];
        uStack_b8 = puVar8[1];
        uStack_c0 = *puVar8;
        uStack_a8 = puVar8[3];
        uStack_b0 = puVar8[2];
        uStack_98 = puVar8[5];
        uStack_a0 = puVar8[4];
        func_0x000102f5ceec(&uStack_130,auStack_1a0);
        func_0x000102f5ceec(&uStack_c0,auStack_1a0);
        puVar2 = &uStack_130;
        FUN_102f5cf8c(puVar2,&uStack_c0);
        func_0x000102f5cf20(&uStack_c0);
        func_0x000102f5cf20(&uStack_130);
        if (((ulong)puVar2 & 1) == 0) goto LAB_102f5ef38;
        puVar8 = puVar8 + 0xe;
        puVar7 = puVar7 + 0xe;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar3 = param_1[1];
    if ((uVar3 == param_2[1] && param_1[2] == param_2[2]) ||
       (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
      lVar6 = param_1[3];
      func_0x000100e25fcc(lVar6,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)lVar6;
      goto LAB_102f5ef3c;
    }
  }
LAB_102f5ef38:
  uVar1 = 0;
LAB_102f5ef3c:
  return uVar1 & 1;
}



/* Entry: 102f5ef5c; end: 102f5f39b;  */

void FUN_102f5ef5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a4f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66dc0;
  func_0x000107c61520(&UNK_10db66dc0,&UNK_1105edad0);
  puRam0000000112f2a4f8 = puVar1;
  return;
}



/* Entry: 102f5f39c; end: 102f5f437;  */

/* WARNING: Possible PIC construction at 0x000102f5f3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000102f5f3d0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f5f39c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if (((uVar13 == param_2[2] && param_1[3] == param_2[3]) ||
      (func_0x000107c605b8(), (uVar13 & 1) != 0)) && (param_1[4] == param_2[4])) {
    uVar13 = param_1[5];
    FUN_102f5c728(uVar13,param_2[5]);
    if ((uVar13 & 1) != 0) {
      pbVar10 = (byte *)param_1[6];
      pbVar25 = (byte *)param_1[7];
      lVar24 = param_2[6];
      uVar13 = param_2[7];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar13 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar14 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
             ((uVar13 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar13 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar14 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar14) {
                    pbVar14 = unaff_x23;
                  }
                  pbVar14 = pbVar14 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar14 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar14 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar14 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                pbVar14 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar14) {
                  pbVar14 = unaff_x23;
                }
                pbVar14 = pbVar14 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar13;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar15 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar14[0x28] == 0) {
              lVar24 = *(long *)pbVar14;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar14[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar17 = *(byte **)(pbVar14 + 0x10);
            lVar24 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar24,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar15 = pbVar25;
            if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            lVar24 = *(long *)(pbVar14 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar17 = *(byte **)(pbVar14 + 0x18),
               pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar14[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar14 + 0x10);
          lVar24 = *(long *)(pbVar14 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar12 = pbVar10;
            pbVar15 = pbVar25;
            if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar14 + 0x20);
            lVar24 = *(long *)(pbVar14 + 0x18);
            bVar27 = pbVar14[8] | (byte)lVar24;
            bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar14[0x10] | (byte)lVar26;
            bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 2) {
              return (byte *)0x0;
            }
          }
          lVar26 = *(long *)(pbVar14 + 0x20);
          lVar24 = *(long *)(pbVar14 + 0x18);
          bVar27 = pbVar14[8] | (byte)lVar24;
          bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar14[0x10] | (byte)lVar26;
          bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar14 + 8);
        uVar13 = *(ulong *)(pbVar14 + 0x10);
        lVar26 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar26,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 102f5f438; end: 102f5f4b7;  */

void FUN_102f5f438(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a5f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db67990;
  func_0x000107c61520(&UNK_10db67990,&UNK_1105ee230);
  puRam0000000112f2a5f0 = puVar1;
  return;
}



/* Entry: 102f5f4b8; end: 102f5f5e7;  */

uint FUN_102f5f4b8(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_1a0 [112];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = *param_1;
  lVar4 = *param_2;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 == *(long *)(lVar4 + 0x10)) {
    if (lVar6 != 0 && lVar5 != lVar4) {
      puVar7 = (undefined8 *)(lVar5 + 0x20);
      puVar8 = (undefined8 *)(lVar4 + 0x20);
      do {
        uStack_128 = puVar7[1];
        uStack_130 = *puVar7;
        uStack_118 = puVar7[3];
        uStack_120 = puVar7[2];
        uStack_108 = puVar7[5];
        uStack_110 = puVar7[4];
        uStack_f8 = puVar7[7];
        uStack_100 = puVar7[6];
        uStack_e8 = puVar7[9];
        uStack_f0 = puVar7[8];
        uStack_d8 = puVar7[0xb];
        uStack_e0 = puVar7[10];
        uStack_c8 = puVar7[0xd];
        uStack_d0 = puVar7[0xc];
        uStack_68 = puVar8[0xb];
        uStack_70 = puVar8[10];
        uStack_58 = puVar8[0xd];
        uStack_60 = puVar8[0xc];
        uStack_88 = puVar8[7];
        uStack_90 = puVar8[6];
        uStack_78 = puVar8[9];
        uStack_80 = puVar8[8];
        uStack_b8 = puVar8[1];
        uStack_c0 = *puVar8;
        uStack_a8 = puVar8[3];
        uStack_b0 = puVar8[2];
        uStack_98 = puVar8[5];
        uStack_a0 = puVar8[4];
        func_0x000102f5ceec(&uStack_130,auStack_1a0);
        func_0x000102f5ceec(&uStack_c0,auStack_1a0);
        puVar2 = &uStack_130;
        FUN_102f5cf8c(puVar2,&uStack_c0);
        func_0x000102f5cf20(&uStack_c0);
        func_0x000102f5cf20(&uStack_130);
        if (((ulong)puVar2 & 1) == 0) goto LAB_102f5f5c4;
        puVar8 = puVar8 + 0xe;
        puVar7 = puVar7 + 0xe;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar3 = param_1[1];
    FUN_102f5c62c(uVar3,param_2[1]);
    if ((uVar3 & 1) != 0) {
      uVar3 = param_1[2];
      FUN_102f5c728(uVar3,param_2[2]);
      if ((uVar3 & 1) != 0) {
        lVar6 = param_1[3];
        func_0x000100e25fcc(lVar6,param_1[4],param_2[3],param_2[4]);
        uVar1 = (uint)lVar6;
        goto LAB_102f5f5c8;
      }
    }
  }
LAB_102f5f5c4:
  uVar1 = 0;
LAB_102f5f5c8:
  return uVar1 & 1;
}



/* Entry: 102f5f5e8; end: 102f5f6a7;  */

void FUN_102f5f5e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db67a68;
  func_0x000107c61520(&UNK_10db67a68,&UNK_1105ee2c0);
  puRam0000000112f2a608 = puVar1;
  return;
}



/* Entry: 102f5f6a8; end: 102f5f6bb;  */

void FUN_102f5f6a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f5f6bc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102f5f6fc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f5f6bc; end: 102f5f767;  */

void FUN_102f5f6bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db665a8;
  func_0x000107c61520(&UNK_10db665a8,&UNK_1105ed608);
  puRam0000000112f2a630 = puVar1;
  return;
}



/* Entry: 102f5f768; end: 102f5f76b;  */

void FUN_102f5f768(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db665e8;
  func_0x000107c61520(&UNK_10db665e8,&UNK_1105ed608);
  puRam0000000112f2a650 = puVar1;
  return;
}



/* Entry: 102f5f76c; end: 102f5f7ab;  */

void FUN_102f5f76c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db665e8;
  func_0x000107c61520(&UNK_10db665e8,&UNK_1105ed608);
  puRam0000000112f2a650 = puVar1;
  return;
}



/* Entry: 102f5f7ac; end: 102f5f7bf;  */

void FUN_102f5f7ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f5f7c0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102f5f800)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f5f7c0; end: 102f5f86b;  */

void FUN_102f5f7c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a658 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db666a8;
  func_0x000107c61520(&UNK_10db666a8,&UNK_1105ed698);
  puRam0000000112f2a658 = puVar1;
  return;
}



/* Entry: 102f5f86c; end: 102f5f86f;  */

void FUN_102f5f86c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db666e8;
  func_0x000107c61520(&UNK_10db666e8,&UNK_1105ed698);
  puRam0000000112f2a678 = puVar1;
  return;
}



/* Entry: 102f5f870; end: 102f5f8af;  */

void FUN_102f5f870(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db666e8;
  func_0x000107c61520(&UNK_10db666e8,&UNK_1105ed698);
  puRam0000000112f2a678 = puVar1;
  return;
}



/* Entry: 102f5f8b0; end: 102f5f8c3;  */

void FUN_102f5f8b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f5f8c4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102f5f904)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f5f8c4; end: 102f5f96f;  */

void FUN_102f5f8c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db667a8;
  func_0x000107c61520(&UNK_10db667a8,&UNK_1105ed728);
  puRam0000000112f2a680 = puVar1;
  return;
}



/* Entry: 102f5f970; end: 102f5f9b3;  */

void FUN_102f5f970(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102f5f9b4; end: 102f5f9b7;  */

void FUN_102f5f9b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a6a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db667e8;
  func_0x000107c61520(&UNK_10db667e8,&UNK_1105ed728);
  puRam0000000112f2a6a0 = puVar1;
  return;
}



/* Entry: 102f5f9b8; end: 102f5f9f7;  */

void FUN_102f5f9b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a6a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db667e8;
  func_0x000107c61520(&UNK_10db667e8,&UNK_1105ed728);
  puRam0000000112f2a6a0 = puVar1;
  return;
}



/* Entry: 102f5f9f8; end: 102f5fa1b;  */

void FUN_102f5f9f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f5fa1c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102f5fa1c; end: 102f5fa5b;  */

void FUN_102f5fa1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a6a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66888;
  func_0x000107c61520(&UNK_10db66888,&UNK_1105ed7a0);
  puRam0000000112f2a6a8 = puVar1;
  return;
}



/* Entry: 102f5fa5c; end: 102f5fa6f;  */

void FUN_102f5fa5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f5d4f4();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102f5fa70();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f5fa70; end: 102f5faaf;  */

void FUN_102f5fa70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a6b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db66840;
  func_0x000107c61520(&DAT_10db66840,&UNK_1105ed7a0);
  puRam0000000112f2a6b0 = puVar1;
  return;
}



/* Entry: 102f5fab0; end: 102f5fab3;  */

void FUN_102f5fab0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a6b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db668f0;
  func_0x000107c61520(&UNK_10db668f0,&UNK_1105ed7a0);
  puRam0000000112f2a6b8 = puVar1;
  return;
}



/* Entry: 102f5fab4; end: 102f5faf3;  */

void FUN_102f5fab4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a6b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db668f0;
  func_0x000107c61520(&UNK_10db668f0,&UNK_1105ed7a0);
  puRam0000000112f2a6b8 = puVar1;
  return;
}



/* Entry: 102f5faf4; end: 102f5fb17;  */

void FUN_102f5faf4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f5fb18();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102f5fb18; end: 102f5fb57;  */

void FUN_102f5fb18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a6c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66960;
  func_0x000107c61520(&UNK_10db66960,&UNK_1105ed828);
  puRam0000000112f2a6c0 = puVar1;
  return;
}



/* Entry: 102f5fb58; end: 102f5fb6b;  */

void FUN_102f5fb58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x102f5d534)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102f5fb6c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f5fb6c; end: 102f5fbab;  */

void FUN_102f5fb6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a6c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db66918;
  func_0x000107c61520(&DAT_10db66918,&UNK_1105ed828);
  puRam0000000112f2a6c8 = puVar1;
  return;
}



/* Entry: 102f5fbac; end: 102f5fbaf;  */

void FUN_102f5fbac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a6d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db669c8;
  func_0x000107c61520(&UNK_10db669c8,&UNK_1105ed828);
  puRam0000000112f2a6d0 = puVar1;
  return;
}



/* Entry: 102f5fbb0; end: 102f5fbef;  */

void FUN_102f5fbb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a6d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db669c8;
  func_0x000107c61520(&UNK_10db669c8,&UNK_1105ed828);
  puRam0000000112f2a6d0 = puVar1;
  return;
}



/* Entry: 102f5fbf0; end: 102f5fc13;  */

void FUN_102f5fbf0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f5fc14();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102f5fc14; end: 102f5fc53;  */

void FUN_102f5fc14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a6d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66a38;
  func_0x000107c61520(&UNK_10db66a38,&UNK_1105ed8b8);
  puRam0000000112f2a6d8 = puVar1;
  return;
}



/* Entry: 102f5fc54; end: 102f5fc67;  */

void FUN_102f5fc54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x102f5d574)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102f5fc68();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f5fc68; end: 102f5fca7;  */

void FUN_102f5fc68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a6e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db669f0;
  func_0x000107c61520(&DAT_10db669f0,&UNK_1105ed8b8);
  puRam0000000112f2a6e0 = puVar1;
  return;
}



/* Entry: 102f5fca8; end: 102f5fcab;  */

void FUN_102f5fca8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a6e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66aa0;
  func_0x000107c61520(&UNK_10db66aa0,&UNK_1105ed8b8);
  puRam0000000112f2a6e8 = puVar1;
  return;
}



/* Entry: 102f5fcac; end: 102f5fceb;  */

void FUN_102f5fcac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a6e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66aa0;
  func_0x000107c61520(&UNK_10db66aa0,&UNK_1105ed8b8);
  puRam0000000112f2a6e8 = puVar1;
  return;
}



/* Entry: 102f5fcec; end: 102f5fd0f;  */

void FUN_102f5fcec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f5fd10();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102f5fd10; end: 102f5fd4f;  */

void FUN_102f5fd10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a6f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66b10;
  func_0x000107c61520(&UNK_10db66b10,&UNK_1105ed940);
  puRam0000000112f2a6f0 = puVar1;
  return;
}



/* Entry: 102f5fd50; end: 102f5fd63;  */

void FUN_102f5fd50(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f5d854();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102f5fd64();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f5fd64; end: 102f5fda3;  */

void FUN_102f5fd64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a6f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db66ac8;
  func_0x000107c61520(&DAT_10db66ac8,&UNK_1105ed940);
  puRam0000000112f2a6f8 = puVar1;
  return;
}



/* Entry: 102f5fda4; end: 102f5fda7;  */

void FUN_102f5fda4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66b78;
  func_0x000107c61520(&UNK_10db66b78,&UNK_1105ed940);
  puRam0000000112f2a700 = puVar1;
  return;
}



/* Entry: 102f5fda8; end: 102f5fde7;  */

void FUN_102f5fda8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66b78;
  func_0x000107c61520(&UNK_10db66b78,&UNK_1105ed940);
  puRam0000000112f2a700 = puVar1;
  return;
}



/* Entry: 102f5fde8; end: 102f5fe0b;  */

void FUN_102f5fde8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f5fe0c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102f5fe0c; end: 102f5fe4b;  */

void FUN_102f5fe0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66be8;
  func_0x000107c61520(&UNK_10db66be8,&UNK_1105ed9c0);
  puRam0000000112f2a708 = puVar1;
  return;
}



/* Entry: 102f5fe4c; end: 102f5fe63;  */

void FUN_102f5fe4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x102f5d8d4)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102f5d954)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f5fe64; end: 102f5fea3;  */

void FUN_102f5fe64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66c50;
  func_0x000107c61520(&UNK_10db66c50,&UNK_1105ed9c0);
  puRam0000000112f2a710 = puVar1;
  return;
}



/* Entry: 102f5fea4; end: 102f5fec7;  */

void FUN_102f5fea4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f5fec8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102f5fec8; end: 102f5ff07;  */

void FUN_102f5fec8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66cc0;
  func_0x000107c61520(&UNK_10db66cc0,&UNK_1105eda48);
  puRam0000000112f2a718 = puVar1;
  return;
}



/* Entry: 102f5ff08; end: 102f5ff1b;  */

void FUN_102f5ff08(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x102f5d914)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102f5ff1c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f5ff1c; end: 102f5ff5b;  */

void FUN_102f5ff1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db66c78;
  func_0x000107c61520(&DAT_10db66c78,&UNK_1105eda48);
  puRam0000000112f2a720 = puVar1;
  return;
}



/* Entry: 102f5ff5c; end: 102f5ff5f;  */

void FUN_102f5ff5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66d28;
  func_0x000107c61520(&UNK_10db66d28,&UNK_1105eda48);
  puRam0000000112f2a728 = puVar1;
  return;
}



/* Entry: 102f5ff60; end: 102f5ff9f;  */

void FUN_102f5ff60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66d28;
  func_0x000107c61520(&UNK_10db66d28,&UNK_1105eda48);
  puRam0000000112f2a728 = puVar1;
  return;
}



/* Entry: 102f5ffa0; end: 102f5ffc3;  */

void FUN_102f5ffa0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f5ffc4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102f5ffc4; end: 102f60003;  */

void FUN_102f5ffc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66d98;
  func_0x000107c61520(&UNK_10db66d98,&UNK_1105edad0);
  puRam0000000112f2a730 = puVar1;
  return;
}



/* Entry: 102f60004; end: 102f60017;  */

void FUN_102f60004(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f5ef5c();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102f60018();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f60018; end: 102f60057;  */

void FUN_102f60018(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db66d50;
  func_0x000107c61520(&DAT_10db66d50,&UNK_1105edad0);
  puRam0000000112f2a738 = puVar1;
  return;
}



/* Entry: 102f60058; end: 102f6005b;  */

void FUN_102f60058(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66e00;
  func_0x000107c61520(&UNK_10db66e00,&UNK_1105edad0);
  puRam0000000112f2a740 = puVar1;
  return;
}



/* Entry: 102f6005c; end: 102f6009b;  */

void FUN_102f6005c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66e00;
  func_0x000107c61520(&UNK_10db66e00,&UNK_1105edad0);
  puRam0000000112f2a740 = puVar1;
  return;
}



/* Entry: 102f6009c; end: 102f600bf;  */

void FUN_102f6009c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f600c0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102f600c0; end: 102f600ff;  */

void FUN_102f600c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66e70;
  func_0x000107c61520(&UNK_10db66e70,&UNK_1105edb58);
  puRam0000000112f2a748 = puVar1;
  return;
}



/* Entry: 102f60100; end: 102f60113;  */

void FUN_102f60100(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x102f5ef9c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102f60114();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f60114; end: 102f60153;  */

void FUN_102f60114(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db66e28;
  func_0x000107c61520(&DAT_10db66e28,&UNK_1105edb58);
  puRam0000000112f2a750 = puVar1;
  return;
}



/* Entry: 102f60154; end: 102f60157;  */

void FUN_102f60154(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66ed8;
  func_0x000107c61520(&UNK_10db66ed8,&UNK_1105edb58);
  puRam0000000112f2a758 = puVar1;
  return;
}



/* Entry: 102f60158; end: 102f60197;  */

void FUN_102f60158(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66ed8;
  func_0x000107c61520(&UNK_10db66ed8,&UNK_1105edb58);
  puRam0000000112f2a758 = puVar1;
  return;
}



/* Entry: 102f60198; end: 102f601bb;  */

void FUN_102f60198(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f601bc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102f601bc; end: 102f601fb;  */

void FUN_102f601bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66f48;
  func_0x000107c61520(&UNK_10db66f48,&UNK_1105edbd8);
  puRam0000000112f2a760 = puVar1;
  return;
}



/* Entry: 102f601fc; end: 102f6020f;  */

void FUN_102f601fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x102f5efdc)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102f60210();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f60210; end: 102f6024f;  */

void FUN_102f60210(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db66f00;
  func_0x000107c61520(&DAT_10db66f00,&UNK_1105edbd8);
  puRam0000000112f2a768 = puVar1;
  return;
}



/* Entry: 102f60250; end: 102f60253;  */

void FUN_102f60250(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66fb0;
  func_0x000107c61520(&UNK_10db66fb0,&UNK_1105edbd8);
  puRam0000000112f2a770 = puVar1;
  return;
}



/* Entry: 102f60254; end: 102f60293;  */

void FUN_102f60254(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db66fb0;
  func_0x000107c61520(&UNK_10db66fb0,&UNK_1105edbd8);
  puRam0000000112f2a770 = puVar1;
  return;
}



/* Entry: 102f60294; end: 102f602b7;  */

void FUN_102f60294(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f602b8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102f602b8; end: 102f602f7;  */

void FUN_102f602b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db67020;
  func_0x000107c61520(&UNK_10db67020,&UNK_1105edc58);
  puRam0000000112f2a778 = puVar1;
  return;
}



/* Entry: 102f602f8; end: 102f6030b;  */

void FUN_102f602f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x102f5f01c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102f6030c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f6030c; end: 102f6034b;  */

void FUN_102f6030c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db66fd8;
  func_0x000107c61520(&DAT_10db66fd8,&UNK_1105edc58);
  puRam0000000112f2a780 = puVar1;
  return;
}



/* Entry: 102f6034c; end: 102f6034f;  */

void FUN_102f6034c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db67088;
  func_0x000107c61520(&UNK_10db67088,&UNK_1105edc58);
  puRam0000000112f2a788 = puVar1;
  return;
}


