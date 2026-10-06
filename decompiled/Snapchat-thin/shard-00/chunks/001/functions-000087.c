/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100237430; end: 1002374a7;  */

void FUN_100237430(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1002374a8(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1002374a8; end: 100237527;  */

void FUN_1002374a8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100237528; end: 10023763b;  */

void FUN_100237528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x1130476c8,&UNK_10dcc3388);
  puVar1 = &UNK_110735a18;
  func_0x000107c613fc(&UNK_110735a18,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  FUN_1000823a8(FUN_1009c9f90,puVar1);
  return;
}



/* Entry: 10023763c; end: 10023765b;  */

void FUN_10023763c(void)

{
  func_0x000107c61168(&PTR_PTR_11297da68);
  return;
}



/* Entry: 10023765c; end: 1002376f3;  */

void FUN_10023765c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ff9308,&UNK_10dc67df8);
  puVar1 = &UNK_1106ec8d8;
  func_0x000107c613fc(&UNK_1106ec8d8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1009bd45c,puVar1);
  return;
}



/* Entry: 1002376f4; end: 1002377a3;  */

bool FUN_1002376f4(long param_1,long param_2)

{
  bool bVar1;
  code *pcVar2;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(int *)(*(long *)(param_1 + 0x30) + 0xac) == 0) {
    uStack_38 = *(undefined8 *)(param_2 + 0x10);
    uStack_40 = *(undefined8 *)(param_2 + 8);
    FUN_1002377a4(&lStack_48,param_1,&uStack_40);
    bVar1 = lStack_48 != 0;
    if ((lStack_48 != 0) &&
       ((((*(byte *)(*(long *)(param_1 + 0x70) + 0x11c) & 1) == 0 ||
         (pcVar2 = *(code **)(*(long *)(param_1 + 0x70) + 0x128), pcVar2 == (code *)0x0)) ||
        ((*pcVar2)(param_1,lStack_48), (int)param_1 == 0)))) {
      FUN_100229edc(lStack_48);
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1002377a4; end: 100237b3b;  */

void FUN_1002377a4(ulong *param_1,long param_2,long *param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ulong uVar4;
  ushort **ppuVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined1 uStack_a1;
  undefined4 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  ushort *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined4 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(ulong *)(*(long *)(param_2 + 0x30) + 0x1c8);
  FUN_100229944(&uStack_78,uVar4,2);
  if (uStack_78 == 0) {
    *param_1 = 0;
    goto LAB_100237a4c;
  }
  FUN_100237b5c(param_2);
  uVar4 = uStack_78;
  uVar7 = param_3[1];
  if (uVar7 < 4) {
LAB_100237a04:
    func_0x000107c2b730(param_2,2,0x32);
    FUN_1004d2c58(0x10,0,0x89,&UNK_10f6d1360,0x42f);
LAB_100237a30:
    *param_1 = 0;
  }
  else {
    lVar11 = 0;
    uVar14 = 0;
    lVar8 = *param_3;
    *param_3 = lVar8 + 4;
    param_3[1] = uVar7 - 4;
    do {
      uVar14 = (uint)*(byte *)(lVar8 + lVar11) | uVar14 << 8;
      lVar11 = lVar11 + 1;
    } while (lVar11 != 4);
    if (uVar7 - 4 < 4) goto LAB_100237a04;
    lVar11 = 0;
    uVar10 = 0;
    *param_3 = lVar8 + 8;
    param_3[1] = uVar7 - 8;
    do {
      uVar10 = (uint)*(byte *)(lVar8 + 4 + lVar11) | uVar10 << 8;
      lVar11 = lVar11 + 1;
    } while (lVar11 != 4);
    *(uint *)(uStack_78 + 0x178) = uVar10;
    if (uVar7 - 8 == 0) goto LAB_100237a04;
    lVar11 = lVar8 + 9;
    uVar7 = uVar7 - 9;
    *param_3 = lVar11;
    param_3[1] = uVar7;
    uVar13 = (ulong)*(byte *)(lVar8 + 8);
    uVar12 = uVar7 - uVar13;
    if (uVar7 < uVar13) goto LAB_100237a04;
    puVar2 = (ushort *)(lVar11 + uVar13);
    *param_3 = (long)puVar2;
    param_3[1] = uVar12;
    uVar7 = uVar12 - 2;
    if (uVar12 < 2) goto LAB_100237a04;
    puVar1 = puVar2 + 1;
    *param_3 = (long)puVar1;
    param_3[1] = uVar7;
    uVar12 = (ulong)((uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8);
    if (uVar7 < uVar12) goto LAB_100237a04;
    *param_3 = (long)puVar1 + uVar12;
    param_3[1] = uVar7 - uVar12;
    lVar8 = uStack_78 + 0xf0;
    FUN_1001e6684(lVar8,uVar12);
    uVar10 = (uint)lVar8 ^ 1;
    if (uVar12 == 0) {
      uVar10 = 1;
    }
    if ((uVar10 & 1) == 0) {
      func_0x000107c610b4(*(undefined8 *)(uVar4 + 0xf0),puVar1,uVar12);
    }
    if (((uint)lVar8 == 0) || (uVar4 = param_3[1] - 2, (ulong)param_3[1] < 2)) goto LAB_100237a04;
    puVar9 = (ushort *)*param_3;
    puVar2 = puVar9 + 1;
    *param_3 = (long)puVar2;
    param_3[1] = uVar4;
    uVar3 = *puVar9;
    uVar7 = (ulong)((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8);
    if (uVar4 < uVar7) goto LAB_100237a04;
    *param_3 = (long)puVar2 + uVar7;
    param_3[1] = uVar4 - uVar7;
    puStack_88 = puVar2;
    uStack_80 = uVar7;
    if (uVar4 - uVar7 != 0) goto LAB_100237a04;
    if (uVar14 < *(uint *)(uStack_78 + 0xc0)) {
      *(uint *)(uStack_78 + 0xc0) = uVar14;
    }
    uVar4 = uStack_78;
    FUN_100237c70(uStack_78,lVar11,uVar13);
    if ((uVar4 & 1) == 0) goto LAB_100237a30;
    uStack_a0 = 0x1002a;
    lStack_98 = 0;
    uStack_90 = 0;
    uStack_a1 = 0x32;
    puStack_70 = &uStack_a0;
    ppuVar5 = &puStack_88;
    func_0x0001001fa470(ppuVar5,&uStack_a1,&puStack_70,1,1);
    if (((ulong)ppuVar5 & 1) == 0) {
      func_0x000107c2b730(param_2,2,uStack_a1);
LAB_100237a94:
      uVar4 = 0;
    }
    else {
      if (uStack_a0._3_1_ == '\x01') {
        uVar4 = uStack_90 - 4;
        if (uStack_90 < 4) {
LAB_1002379d4:
          func_0x000107c2b730(param_2,2,0x32);
          uVar6 = 0x449;
        }
        else {
          lVar8 = 0;
          uVar14 = 0;
          lVar11 = lStack_98 + 4;
          do {
            uVar14 = (uint)*(byte *)(lStack_98 + lVar8) | uVar14 << 8;
            lVar8 = lVar8 + 1;
          } while (lVar8 != 4);
          *(uint *)(uStack_78 + 0x17c) = uVar14;
          lStack_98 = lVar11;
          uStack_90 = uVar4;
          if (uVar4 != 0) goto LAB_1002379d4;
          if (*(long *)(param_2 + 0x98) == 0 || uVar14 == 0xffffffff) goto LAB_100237aac;
          func_0x000107c2b730(param_2,2,0x2f);
          uVar6 = 0x452;
        }
        FUN_1004d2c58(0x10,0,0x89,&UNK_10f6d1360,uVar6);
        goto LAB_100237a94;
      }
LAB_100237aac:
      FUN_100237f68(puVar1,uVar12,uStack_78 + 0x44);
      uVar4 = uStack_78;
      *(undefined4 *)(uStack_78 + 0x40) = 0x20;
      *(byte *)(uStack_78 + 0x1b0) = *(byte *)(uStack_78 + 0x1b0) & 0xf3 | 8;
      uStack_78 = 0;
    }
    *param_1 = uVar4;
  }
  uVar4 = uStack_78;
  uStack_78 = 0;
  if (uVar4 != 0) {
    FUN_100229edc();
  }
LAB_100237a4c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  FUN_100229eb4(&uStack_78,0);
  func_0x000107c60bd8(uVar4);
  func_0x000107c61168(&PTR_PTR_112947d00);
  return;
}



/* Entry: 100237b3c; end: 100237b5b;  */

void FUN_100237b3c(void)

{
  func_0x000107c61168(&PTR_PTR_112947d00);
  return;
}



/* Entry: 100237b5c; end: 100237bcb;  */

void FUN_100237b5c(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong auStack_30 [2];
  
  FUN_1001fc600(*(undefined8 *)(param_1 + 0x68),auStack_30);
  uVar1 = auStack_30[0] - *(ulong *)(param_2 + 200);
  if (auStack_30[0] < *(ulong *)(param_2 + 200)) {
    *(undefined8 *)(param_2 + 0xc0) = 0;
    *(ulong *)(param_2 + 200) = auStack_30[0];
  }
  else {
    *(ulong *)(param_2 + 200) = auStack_30[0];
    uVar3 = *(ulong *)(param_2 + 0xc0);
    iVar5 = -(uint)((uVar3 & 0xffffffff) < uVar1);
    iVar6 = -(uint)(uVar3 >> 0x20 < uVar1);
    iVar2 = (int)uVar3 - (int)uVar1;
    iVar4 = (int)(uVar3 >> 0x20) - (int)uVar1;
    *(ulong *)(param_2 + 0xc0) =
         CONCAT17((byte)((uint)iVar4 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                  CONCAT16((byte)((uint)iVar4 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                           CONCAT15((byte)((uint)iVar4 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                    CONCAT14((byte)iVar4 & ~(byte)iVar6,
                                             CONCAT13((byte)((uint)iVar2 >> 0x18) &
                                                      ~(byte)((uint)iVar5 >> 0x18),
                                                      CONCAT12((byte)((uint)iVar2 >> 0x10) &
                                                               ~(byte)((uint)iVar5 >> 0x10),
                                                               CONCAT11((byte)((uint)iVar2 >> 8) &
                                                                        ~(byte)((uint)iVar5 >> 8),
                                                                        (byte)iVar2 & ~(byte)iVar5))
                                                     )))));
  }
  return;
}



/* Entry: 100237bcc; end: 100237bef;  */

void FUN_100237bcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107177b8;
  FUN_1000285a8(0x113018e98,&UNK_10dc9d728);
  func_0x000107c613fc(&UNK_1107177b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009a1aa0,puVar1);
  return;
}



/* Entry: 100237bf0; end: 100237c6f;  */

void FUN_100237bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  FUN_1000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(param_6,param_5);
  return;
}



/* Entry: 100237c70; end: 100237ccf;  */

void FUN_100237c70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 in_x7;
  
  lVar1 = param_1;
  func_0x0001001fe454();
  FUN_1001fd7e8(param_1 + 0x10,(long)*(int *)(param_1 + 0xc),lVar1,param_1 + 0x10,
                (long)*(int *)(param_1 + 0xc),&UNK_10e52b448,10,in_x7,param_2,param_3);
  return;
}



/* Entry: 100237cd0; end: 100237d0f;  */

void FUN_100237cd0(void)

{
  func_0x000107c61168(&PTR_PTR_112954a18);
  return;
}



/* Entry: 100237d10; end: 100237f47;  */

void FUN_100237d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x113020400,&UNK_10dca1068);
  puVar1 = &UNK_110719320;
  func_0x000107c613fc(&UNK_110719320,0xe8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  FUN_1000823a8(FUN_1009a4748,puVar1);
  return;
}



/* Entry: 100237f48; end: 100237f67;  */

void FUN_100237f48(void)

{
  func_0x000107c61168(&PTR_PTR_112958838);
  return;
}



/* Entry: 100237f68; end: 10023801b;  */

undefined4 * FUN_100237f68(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined1 *puStack_218;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined1 uStack_1ff;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
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
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  long lStack_28;
  
  puVar6 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0xa54ff53a3c6ef372;
  uStack_a0 = 0xbb67ae856a09e667;
  uStack_88 = 0x5be0cd191f83d9ab;
  uStack_90 = 0x9b05688c510e527f;
  uStack_34 = 0x20;
  FUN_10018167c(&uStack_a0,param_1,param_2);
  puVar5 = param_3;
  FUN_100181790();
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uVar1 = *(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28;
  if ((bool)uVar1) {
    return param_3;
  }
  func_0x000107c60e78();
  puVar3 = puVar5;
  func_0x0001001e2278();
  uStack_d8 = extraout_x8;
  func_0x0001001e2918();
  FUN_1001f0ff8(puVar5,*puVar3);
  lVar7 = *(long *)(*(long *)(puVar5 + 0x46) + 0x58);
  if (lVar7 == 0) {
LAB_10023809c:
    puVar5 = (undefined4 *)0x0;
  }
  else {
    iVar2 = (int)*(undefined8 *)((long)puVar6 + 0xd0);
    FUN_100238134();
    uVar1 = iVar2 == 0x3b7;
    if ((bool)uVar1) {
      uStack_1f8 = 0xaaaaaaaaaaaaaaaa;
      uStack_1f0 = 0xaaaaaaaaaaaaaaaa;
      uStack_1e8 = 0xaa00;
      plVar4 = *(long **)(puVar5 + 0x50);
      (**(code **)(*plVar4 + 0x80))(plVar4,&uStack_1f8);
      if ((int)plVar4 != 0) goto LAB_10023809c;
      uStack_e8 = uStack_1f0;
      uStack_f0 = uStack_1f8;
      uStack_e0 = (undefined1)uStack_1e8;
      lVar7 = *(long *)(*(long *)(puVar5 + 0x46) + 0x58);
      uStack_207 = (undefined7)uStack_1f0;
      uStack_200 = (undefined1)((ulong)uStack_1f0 >> 0x38);
      uStack_20f = (undefined7)uStack_1f8;
      uStack_208 = (undefined1)((ulong)uStack_1f8 >> 0x38);
      uStack_1ff = (undefined1)uStack_1e8;
      uStack_210 = 1;
    }
    else {
      uStack_210 = 0;
      uStack_20f = 0;
      uStack_208 = 0;
      uStack_207 = 0;
      uStack_200 = 0;
      uStack_1ff = 0;
    }
    func_0x0001001e6f38(&uStack_1f8,puVar5,&uStack_210);
    puStack_218 = (undefined1 *)puVar6;
    FUN_10023815c(lVar7,&uStack_1f8,&puStack_218);
    func_0x0001001e7290(&puStack_218);
    func_0x0001001e7240(&uStack_1f8);
    puVar5 = (undefined4 *)0x1;
  }
  func_0x0001001e6e04(uStack_d8);
  if ((bool)uVar1) {
    return puVar5;
  }
  func_0x000107c60e78();
  if (puVar5[5] - 1 < 8) {
    return (undefined4 *)(ulong)*(uint *)(&UNK_10e52ad90 + (ulong)(puVar5[5] - 1) * 4);
  }
  return (undefined4 *)0x0;
}



/* Entry: 10023801c; end: 100238133;  */

ulong FUN_10023801c(undefined4 *param_1,long param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined4 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long lVar6;
  long lStack_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = param_1;
  func_0x0001001e2278();
  uStack_38 = extraout_x8;
  func_0x0001001e2918();
  FUN_1001f0ff8(param_1,*puVar3);
  lVar6 = *(long *)(*(long *)(param_1 + 0x46) + 0x58);
  if (lVar6 == 0) {
LAB_10023809c:
    uVar5 = 0;
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_2 + 0xd0);
    FUN_100238134();
    in_ZR = iVar2 == 0x3b7;
    if ((bool)in_ZR) {
      uStack_158 = 0xaaaaaaaaaaaaaaaa;
      uStack_150 = 0xaaaaaaaaaaaaaaaa;
      uStack_148 = 0xaa00;
      plVar4 = *(long **)(param_1 + 0x50);
      (**(code **)(*plVar4 + 0x80))(plVar4,&uStack_158);
      if ((int)plVar4 != 0) goto LAB_10023809c;
      uStack_48 = uStack_150;
      uStack_50 = uStack_158;
      uStack_40 = (undefined1)uStack_148;
      lVar6 = *(long *)(*(long *)(param_1 + 0x46) + 0x58);
      uStack_167 = (undefined7)uStack_150;
      uStack_160 = (undefined1)((ulong)uStack_150 >> 0x38);
      uStack_16f = (undefined7)uStack_158;
      uStack_168 = (undefined1)((ulong)uStack_158 >> 0x38);
      uStack_15f = (undefined1)uStack_148;
      uStack_170 = 1;
    }
    else {
      uStack_170 = 0;
      uStack_16f = 0;
      uStack_168 = 0;
      uStack_167 = 0;
      uStack_160 = 0;
      uStack_15f = 0;
    }
    func_0x0001001e6f38(&uStack_158,param_1,&uStack_170);
    lStack_178 = param_2;
    FUN_10023815c(lVar6,&uStack_158,&lStack_178);
    func_0x0001001e7290(&lStack_178);
    func_0x0001001e7240(&uStack_158);
    uVar5 = 1;
  }
  func_0x0001001e6e04(uStack_38);
  if ((bool)in_ZR) {
    return uVar5;
  }
  func_0x000107c60e78();
  uVar1 = *(int *)(uVar5 + 0x14) - 1;
  if (uVar1 < 8) {
    return (ulong)*(uint *)(&UNK_10e52ad90 + (ulong)uVar1 * 4);
  }
  return 0;
}



/* Entry: 100238134; end: 10023815b;  */

undefined4 FUN_100238134(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x14) - 1;
  if (uVar1 < 8) {
    return *(undefined4 *)(&UNK_10e52ad90 + (ulong)uVar1 * 4);
  }
  return 0;
}



/* Entry: 10023815c; end: 10023841b;  */

void FUN_10023815c(long param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100171024();
  lVar1 = param_1 + 0x18;
  func_0x0001001e7144();
  if (param_1 + 0x20 == lVar1) {
    uStack_40 = 0;
    uStack_38 = 0;
    lVar1 = param_1 + 0x18;
    func_0x0001002381e4(lVar1);
    func_0x000100239248(&uStack_40);
  }
  uStack_48 = *unaff_x19;
  *unaff_x19 = 0;
  func_0x00010023927c(lVar1 + 0x118,&uStack_48);
  func_0x0001001e7290(&uStack_48);
  return;
}



/* Entry: 10023841c; end: 100239063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10023841c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  code *pcVar14;
  long lVar15;
  ulong uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  ulong uStack_128;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  ulong uStack_80;
  
  uStack_e8 = param_8;
  lStack_98 = param_2;
  lStack_90 = param_6;
  func_0x000107c614f0();
  lVar5 = 0x112da1070;
  FUN_1000285a8(0x112da1070,&UNK_10d944190);
  lStack_138 = *(long *)(lVar5 + -8);
  lStack_130 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_138 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112da1078;
  lStack_108 = (long)&uStack_170 - extraout_x8;
  FUN_1000285a8(0x112da1078,&UNK_10d944198);
  lStack_120 = *(long *)(lVar5 + -8);
  lStack_118 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar12 = ((long)&uStack_170 - extraout_x8) - extraout_x8_00;
  lVar5 = 0x112d6f510;
  uStack_128 = uVar12;
  FUN_1000285a8(0x112d6f510,&UNK_10d930f80);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = uVar12 - extraout_x8_01;
  lVar5 = 0x112da1080;
  FUN_1000285a8(0x112da1080,&UNK_10d9441a8);
  lStack_f8 = *(long *)(lVar5 + -8);
  lStack_d0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f8 + 0x40));
  lVar13 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_168 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12;
  pcStack_b8 = (code *)lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_00;
  lVar5 = 0x112da1088;
  FUN_1000285a8(0x112da1088,&UNK_10d9441b0);
  pcStack_e0 = *(code **)(lVar5 + -8);
  lStack_d8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)((long)pcStack_e0 + 0x40));
  uVar12 = lVar13 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_170 = uVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = uVar12 - extraout_x12_01;
  uStack_110 = uVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_100 = uVar12 - extraout_x12_02;
  *(undefined8 *)(unaff_x20 + _DAT_112da1090) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da1098) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da10a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da10a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da10b0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112da10b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da10c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da10c8) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112da10d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da10d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112da10e0) = 0;
  lVar5 = _DAT_112da10e8;
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar11 = lStack_90;
  *(undefined **)(unaff_x20 + lVar5) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112da10f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da10f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da1100) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da1108) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da1110) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112da1118) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da1120) = param_1;
  *(long *)(unaff_x20 + _DAT_112da1128) = lStack_98;
  *(undefined8 *)(unaff_x20 + _DAT_112da1130) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112da1138) = param_4;
  *(long *)(unaff_x20 + _DAT_112da1140) = param_5;
  *(long *)(unaff_x20 + _DAT_112da1148) = lStack_90;
  *(undefined8 *)(unaff_x20 + _DAT_112da1150) = param_7;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c61174();
  uStack_160 = param_1;
  uStack_158 = param_3;
  func_0x000107c615f0(param_3);
  uStack_150 = param_4;
  func_0x000107c6157c(param_4);
  uStack_140 = param_7;
  func_0x000107c6157c(param_7);
  lStack_148 = param_5;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(lVar11);
  puVar4 = &stack0xffffffffffffff88;
  func_0x000107c61154(puVar4,puVar3);
  lStack_98 = _DAT_112da1120;
  puVar3 = &UNK_10d9441d8;
  func_0x000107c614e0(&UNK_10d9441d8);
  puStack_88 = puVar4;
  func_0x000107c61174();
  func_0x000107c5ed58(lVar13,puVar3,5);
  func_0x000107c61574(puVar3);
  lStack_a0 = _DAT_112da1130;
  uVar12 = *(ulong *)(puVar4 + _DAT_112da1130);
  func_0x000107c4f7c0();
  func_0x000107c61180();
  if (uVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100239058);
    (*pcVar2)();
  }
  lVar5 = 0;
  uStack_80 = uVar12;
  func_0x000107c5ffd4();
  pcStack_a8 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  lStack_b0 = lVar5;
  (*pcStack_a8)(lVar15,1,1);
  uVar6 = 0;
  FUN_1002507d4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  uVar8 = 0x112da1158;
  func_0x000100250814(0x112da1158,0x112da1080,&UNK_10d9441a8,
                      PTR___sSo8NSObjectC10FoundationE26KeyValueObservingPublisherVy_xq_G7Combine0F0ACMc_110351210
                     );
  uVar7 = uVar8;
  FUN_100250858();
  lVar1 = lStack_d0;
  uVar9 = uStack_100;
  uStack_f0 = uVar8;
  uStack_c8 = uVar7;
  uStack_c0 = uVar6;
  func_0x000107c5f218(uStack_100,&uStack_80,lVar15,lStack_d0,uVar6,uVar8);
  FUN_10025089c(lVar15,0x112d6f510,&UNK_10d930f80);
  func_0x000107c61170(uVar12);
  pcVar14 = *(code **)(lStack_f8 + 8);
  (*pcVar14)(lVar13,lVar1);
  puVar3 = &UNK_1103c2370;
  func_0x000107c613fc(&UNK_1103c2370,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,puVar4);
  uVar8 = 0x112da1160;
  func_0x000100250814(0x112da1160,0x112da1088,&UNK_10d9441b0,
                      PTR___s7Combine10PublishersO9ReceiveOnVy_xq_GAA9PublisherAAMc_11034adb8);
  lVar11 = lStack_d8;
  pcVar2 = FUN_100354024;
  func_0x000107c5f21c(FUN_100354024,puVar3,lStack_d8,uVar8);
  func_0x000107c61574(puVar3);
  pcStack_e0 = *(code **)((long)pcStack_e0 + 8);
  (*pcStack_e0)(uVar9,lVar11);
  func_0x000100266a08();
  uStack_80 = uVar9;
  func_0x000107c5f1d8(&uStack_80);
  func_0x000107c61574(pcVar2);
  lVar5 = _DAT_112da10b0;
  uVar7 = *(undefined8 *)(puVar4 + _DAT_112da10b0);
  *(ulong *)(puVar4 + _DAT_112da10b0) = uStack_80;
  func_0x000107c6142c(uVar7);
  puVar3 = &UNK_10d944210;
  func_0x000107c614e0(&UNK_10d944210);
  func_0x000107c5ed58(pcStack_b8);
  func_0x000107c61574(puVar3);
  uVar12 = *(ulong *)(puVar4 + lStack_a0);
  func_0x000107c4f7c0();
  func_0x000107c61180();
  if (uVar12 != 0) {
    uStack_80 = uVar12;
    (*pcStack_a8)(lVar15,1,1,lStack_b0);
    pcVar2 = pcStack_b8;
    uVar9 = uStack_110;
    func_0x000107c5f218(uStack_110,&uStack_80,lVar15,lVar1,uStack_c0,uStack_f0,uStack_c8);
    FUN_10025089c(lVar15,0x112d6f510,&UNK_10d930f80);
    func_0x000107c61170(uVar12);
    pcStack_b8 = pcVar14;
    (*pcVar14)(pcVar2,lVar1);
    puVar3 = &UNK_1103c2370;
    func_0x000107c613fc(&UNK_1103c2370,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,puVar4);
    uVar7 = 0x1003541d4;
    lStack_f8 = uVar8;
    func_0x000107c5f21c(0x1003541d4,puVar3,lVar11,uVar8);
    func_0x000107c61574(puVar3);
    (*pcStack_e0)(uVar9,lVar11);
    func_0x000100266a08();
    uStack_80 = uVar9;
    func_0x000107c5f1d8(&uStack_80);
    func_0x000107c61574(uVar7);
    uVar8 = *(undefined8 *)(puVar4 + lVar5);
    *(ulong *)(puVar4 + lVar5) = uStack_80;
    func_0x000107c6142c(uVar8);
    puVar3 = &UNK_10d944248;
    func_0x000107c614e0(&UNK_10d944248);
    lVar11 = lStack_108;
    func_0x000107c5ed58(lStack_108);
    func_0x000107c61574(puVar3);
    uVar12 = *(ulong *)(puVar4 + lStack_a0);
    func_0x000107c4f7c0();
    func_0x000107c61180();
    if (uVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100239060);
      (*pcVar2)();
    }
    uStack_80 = uVar12;
    (*pcStack_a8)(lVar15,1,1,lStack_b0);
    uVar8 = 0x112da1168;
    func_0x000100250814(0x112da1168,0x112da1070,&UNK_10d944190,
                        PTR___sSo8NSObjectC10FoundationE26KeyValueObservingPublisherVy_xq_G7Combine0F0ACMc_110351210
                       );
    uVar6 = uStack_c0;
    uVar7 = uStack_c8;
    uVar9 = uStack_128;
    lVar13 = lStack_130;
    func_0x000107c5f218(uStack_128,&uStack_80,lVar15,lStack_130,uStack_c0,uVar8,uStack_c8);
    uStack_100 = lVar15;
    FUN_10025089c(lVar15,0x112d6f510,&UNK_10d930f80);
    func_0x000107c61170(uVar12);
    (**(code **)(lStack_138 + 8))(lVar11,lVar13);
    puVar3 = &UNK_1103c2370;
    func_0x000107c613fc(&UNK_1103c2370,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,puVar4);
    uVar8 = 0x112da1170;
    func_0x000100250814(0x112da1170,0x112da1078,&UNK_10d944198,
                        PTR___s7Combine10PublishersO9ReceiveOnVy_xq_GAA9PublisherAAMc_11034adb8);
    lVar11 = lStack_118;
    pcVar2 = FUN_1003542f8;
    func_0x000107c5f21c(FUN_1003542f8,puVar3,lStack_118,uVar8);
    func_0x000107c61574(puVar3);
    (**(code **)(lStack_120 + 8))(uVar9,lVar11);
    func_0x000100266a08();
    uStack_80 = uVar9;
    func_0x000107c5f1d8(&uStack_80);
    func_0x000107c61574(pcVar2);
    uVar8 = *(undefined8 *)(puVar4 + lVar5);
    *(ulong *)(puVar4 + lVar5) = uStack_80;
    func_0x000107c6142c(uVar8);
    FUN_1002875a0(0);
    uVar8 = uStack_e8;
    FUN_100083b20(&uStack_80);
    uVar12 = uStack_80;
    uVar9 = uStack_80;
    FUN_1002875c0();
    func_0x000107c615e8(uVar12);
    pcVar2 = pcStack_e0;
    if ((uVar9 & 1) != 0) {
      lStack_108 = lVar5;
      puVar3 = &UNK_10d944288;
      func_0x000107c614e0(&UNK_10d944288);
      lVar5 = lStack_168;
      func_0x000107c5ed58(lStack_168);
      func_0x000107c61574(puVar3);
      uVar9 = *(ulong *)(puVar4 + lStack_a0);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      uVar12 = uStack_100;
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100239064);
        (*pcVar2)();
      }
      uStack_80 = uVar9;
      (*pcStack_a8)(uStack_100,1,1,lStack_b0);
      lVar11 = lStack_d0;
      uVar10 = uStack_170;
      func_0x000107c5f218(uStack_170,&uStack_80,uVar12,lStack_d0,uVar6,uStack_f0,uVar7);
      FUN_10025089c(uVar12,0x112d6f510,&UNK_10d930f80);
      func_0x000107c61170(uVar9);
      (*pcStack_b8)(lVar5,lVar11);
      puVar3 = &UNK_1103c2370;
      func_0x000107c613fc(&UNK_1103c2370,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,puVar4);
      lVar5 = lStack_d8;
      pcVar14 = FUN_10035447c;
      func_0x000107c5f21c(FUN_10035447c,puVar3,lStack_d8,lStack_f8);
      func_0x000107c61574(puVar3);
      (*pcVar2)(uVar10,lVar5);
      func_0x000100266a08();
      uStack_80 = uVar10;
      func_0x000107c5f1d8(&uStack_80);
      func_0x000107c61574(pcVar14);
      uVar8 = *(undefined8 *)(puVar4 + lStack_108);
      *(ulong *)(puVar4 + lStack_108) = uStack_80;
      func_0x000107c6142c(uVar8);
      uVar8 = uStack_e8;
    }
    lVar5 = lStack_90;
    if (lStack_90 == 0) {
      func_0x000107c61170(uStack_160);
      func_0x000107c615e8(uStack_158);
      func_0x000107c61574(uStack_150);
      lVar5 = lStack_148;
    }
    else {
      func_0x000107c6157c(lStack_90);
      FUN_100083b20(&uStack_80);
      func_0x000107c61574(lVar5);
      uVar12 = uStack_80;
      lVar5 = lStack_98;
      lVar11 = *(long *)(puStack_88 + lStack_98);
      func_0x000107c43890();
      func_0x000107c61180();
      if (lVar11 == 0) {
        FUN_1002507d4();
        lVar13 = 0;
        func_0x000107c5fc54(0,lVar11);
        lVar11 = lVar13;
        func_0x000107c5fc48();
        func_0x000107c6142c(lVar13);
      }
      uVar6 = *(undefined8 *)(puStack_88 + lVar5);
      func_0x000107c41970(uVar6);
      func_0x000107c61180();
      uVar7 = uStack_160;
      func_0x000107c4eb70(uStack_160);
      func_0x000107c4ba58(uVar12);
      func_0x000107c615e8(uVar12);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c615e8(uStack_158);
      func_0x000107c61574(uStack_150);
      func_0x000107c61574(lStack_148);
      lVar5 = lStack_90;
    }
    func_0x000107c61574(lVar5);
    func_0x000107c61574(uStack_140);
    func_0x000107c61574(uVar8);
    func_0x000107c61170(puVar4);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10023905c);
  (*pcVar2)();
}



/* Entry: 100239064; end: 1002394f7;  */

long FUN_100239064(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1;
  func_0x0001001af324();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined2 *)(lVar2 + 0x30) = 0;
  if (*(char *)(param_2 + 0x20) == '\x01') {
    uVar4 = *(undefined8 *)(param_2 + 0x29);
    uVar3 = *(undefined8 *)(param_2 + 0x21);
    *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
    *(undefined8 *)(param_1 + 0x29) = uVar4;
    *(undefined8 *)(param_1 + 0x21) = uVar3;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  func_0x000100178054(param_1 + 0x38,param_2 + 0x38);
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  *(undefined1 *)(param_1 + 0x104) = *(undefined1 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  return param_1;
}



/* Entry: 1002394f8; end: 100239537;  */

bool FUN_1002394f8(long param_1)

{
  ushort uVar1;
  bool bVar2;
  
  uVar1 = *(ushort *)(param_1 + 4);
  bVar2 = uVar1 - 0x301 < 4;
  return (bVar2 && 0x303 < uVar1) && (bVar2 || (uVar1 == 0xfeff || uVar1 == 0xfefd));
}



/* Entry: 100239538; end: 100239617;  */

void FUN_100239538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de29c0,&UNK_10d9aaea0);
  puVar1 = &UNK_1104230e8;
  func_0x000107c613fc(&UNK_1104230e8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(FUN_100428558,puVar1);
  return;
}



/* Entry: 100239618; end: 100239637;  */

void FUN_100239618(void)

{
  func_0x000107c61168(&PTR_PTR_112de2a38);
  return;
}



/* Entry: 100239638; end: 100239653;  */

void FUN_100239638(undefined8 param_1)

{
  FUN_1000285a8(0x112dc1378,&UNK_10d97dfe0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a859ac,param_1);
  return;
}



/* Entry: 100239654; end: 1002396a3;  */

void FUN_100239654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002396a4; end: 1002396bf;  */

void FUN_1002396a4(undefined8 param_1)

{
  FUN_1000285a8(0x112dc1380,&UNK_10d97dfe8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a85944,param_1);
  return;
}



/* Entry: 1002396c0; end: 1002396df;  */

void FUN_1002396c0(void)

{
  func_0x000107c61168(&PTR_PTR_11296c120);
  return;
}



/* Entry: 1002396e0; end: 100239777;  */

void FUN_1002396e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x113044218,&UNK_10dcbddd8);
  puVar1 = &UNK_1107315d0;
  func_0x000107c613fc(&UNK_1107315d0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1009aca80,puVar1);
  return;
}



/* Entry: 100239778; end: 100239797;  */

void FUN_100239778(void)

{
  func_0x000107c61168(&PTR_PTR_11297b4c8);
  return;
}



/* Entry: 100239798; end: 10023985f;  */

void FUN_100239798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc84e8,&UNK_10d988ef0);
  puVar1 = &UNK_110406bf8;
  func_0x000107c613fc(&UNK_110406bf8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(&UNK_101772080,puVar1);
  return;
}



/* Entry: 100239860; end: 1002398cb;  */

void FUN_100239860(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002398cc; end: 1002398e7;  */

void FUN_1002398cc(undefined8 param_1)

{
  FUN_1000285a8(0x112dc84f0,&UNK_10d988ef8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1017724b0,param_1);
  return;
}



/* Entry: 1002398e8; end: 100239937;  */

void FUN_1002398e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100239938; end: 100239953;  */

void FUN_100239938(undefined8 param_1)

{
  FUN_1000285a8(0x112de9c60,&UNK_10d9b5348);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006d9dd8,param_1);
  return;
}



/* Entry: 100239954; end: 1002399a3;  */

void FUN_100239954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002399a4; end: 100239b2f;  */

void FUN_1002399a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de3e30,&UNK_10d9ad220);
  puVar1 = &UNK_110424070;
  func_0x000107c613fc(&UNK_110424070,0x98,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  FUN_1000823a8(FUN_10042c4b4,puVar1);
  return;
}



/* Entry: 100239b30; end: 100239b4f;  */

void FUN_100239b30(void)

{
  func_0x000107c61168(&PTR_PTR_112de3eb8);
  return;
}



/* Entry: 100239b50; end: 100239b6b;  */

void FUN_100239b50(undefined8 param_1)

{
  FUN_1000285a8(0x112de3e38,&UNK_10d9ad228);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10042b860,param_1);
  return;
}



/* Entry: 100239b6c; end: 100239bbb;  */

void FUN_100239b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100239bbc; end: 100239bd7;  */

void FUN_100239bbc(undefined8 param_1)

{
  FUN_1000285a8(0x112de29c8,&UNK_10d9aaea8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1004284fc,param_1);
  return;
}



/* Entry: 100239bd8; end: 100239c27;  */

void FUN_100239bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100239c28; end: 100239d73;  */

void FUN_100239c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de4e20,&UNK_10d9aed70);
  puVar1 = &UNK_110424c10;
  func_0x000107c613fc(&UNK_110424c10,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  FUN_1000823a8(FUN_100733ae8,puVar1);
  return;
}



/* Entry: 100239d74; end: 100239d93;  */

void FUN_100239d74(void)

{
  func_0x000107c61168(&PTR_PTR_112de4e98);
  return;
}



/* Entry: 100239d94; end: 100239daf;  */

void FUN_100239d94(undefined8 param_1)

{
  FUN_1000285a8(0x112de4e28,&UNK_10d9aed78);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10073320c,param_1);
  return;
}



/* Entry: 100239db0; end: 100239dff;  */

void FUN_100239db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100239e00; end: 100239e1f;  */

void FUN_100239e00(void)

{
  func_0x000107c61168(&PTR_PTR_112969860);
  return;
}



/* Entry: 100239e20; end: 100239ff7;  */

void FUN_100239e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df2020,&UNK_10d9bfea0);
  puVar1 = &UNK_110434478;
  func_0x000107c613fc(&UNK_110434478,0xb8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  FUN_1000823a8(FUN_100422340,puVar1);
  return;
}



/* Entry: 100239ff8; end: 10023a017;  */

void FUN_100239ff8(void)

{
  func_0x000107c61168(&PTR_PTR_112df20b8);
  return;
}



/* Entry: 10023a018; end: 10023a0bb;  */

void FUN_10023a018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x113009550,&UNK_10dc910b0);
  puVar1 = &UNK_11070e728;
  func_0x000107c613fc(&UNK_11070e728,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_103da6af8,puVar1);
  return;
}



/* Entry: 10023a0bc; end: 10023a0bf;  */

void FUN_10023a0bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10023a0c0; end: 10023a0df;  */

void FUN_10023a0c0(void)

{
  func_0x000107c61168(&PTR_PTR_113009ae8);
  return;
}



/* Entry: 10023a0e0; end: 10023a0ff;  */

void FUN_10023a0e0(void)

{
  func_0x000107c61168(&PTR_PTR_113009a20);
  return;
}



/* Entry: 10023a100; end: 10023a203;  */

void FUN_10023a100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x11300c698,&UNK_10dc94af8);
  puVar1 = &UNK_110712208;
  func_0x000107c613fc(&UNK_110712208,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  FUN_1000823a8(FUN_100999d0c,puVar1);
  return;
}



/* Entry: 10023a204; end: 10023a223;  */

void FUN_10023a204(void)

{
  func_0x000107c61168(&PTR_PTR_11294bb20);
  return;
}



/* Entry: 10023a224; end: 10023a23f;  */

void FUN_10023a224(undefined8 param_1)

{
  FUN_1000285a8(0x1130099d0,&UNK_10dc91b48);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103dad440,param_1);
  return;
}



/* Entry: 10023a240; end: 10023a28f;  */

void FUN_10023a240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10023a290; end: 10023a2af;  */

void FUN_10023a290(void)

{
  func_0x000107c61168(&PTR_PTR_11294a248);
  return;
}



/* Entry: 10023a2b0; end: 10023a3c3;  */

void FUN_10023a2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd8130,&UNK_10d99b540);
  puVar1 = &UNK_110417d08;
  func_0x000107c613fc(&UNK_110417d08,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  FUN_1000823a8(FUN_1005d03dc,puVar1);
  return;
}



/* Entry: 10023a3c4; end: 10023a3e3;  */

void FUN_10023a3c4(void)

{
  func_0x000107c61168(&PTR_PTR_112dd81a8);
  return;
}



/* Entry: 10023a3e4; end: 10023a3ff;  */

void FUN_10023a3e4(undefined8 param_1)

{
  FUN_1000285a8(0x112dd8138,&UNK_10d99b548);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1005d0380,param_1);
  return;
}



/* Entry: 10023a400; end: 10023a44f;  */

void FUN_10023a400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10023a450; end: 10023a487;  */

void FUN_10023a450(undefined8 param_1)

{
  FUN_1000285a8(0x112de3e48,&UNK_10d9ad238);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10073dc18,param_1);
  return;
}



/* Entry: 10023a488; end: 10023a59b;  */

void FUN_10023a488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de35c8,&UNK_10d9ac3a0);
  puVar1 = &UNK_110423a10;
  func_0x000107c613fc(&UNK_110423a10,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  FUN_1000823a8(FUN_10046d2cc,puVar1);
  return;
}



/* Entry: 10023a59c; end: 10023a5bb;  */

void FUN_10023a59c(void)

{
  func_0x000107c61168(&PTR_PTR_112de3640);
  return;
}



/* Entry: 10023a5bc; end: 10023a5d7;  */

void FUN_10023a5bc(undefined8 param_1)

{
  FUN_1000285a8(0x112de35d0,&UNK_10d9ac3a8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10046d270,param_1);
  return;
}



/* Entry: 10023a5d8; end: 10023a627;  */

void FUN_10023a5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10023a628; end: 10023a75b;  */

void FUN_10023a628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de37f0,&UNK_10d9ac750);
  puVar1 = &UNK_110423ba0;
  func_0x000107c613fc(&UNK_110423ba0,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  FUN_1000823a8(FUN_100738268,puVar1);
  return;
}



/* Entry: 10023a75c; end: 10023a77b;  */

void FUN_10023a75c(void)

{
  func_0x000107c61168(&PTR_PTR_112de3868);
  return;
}



/* Entry: 10023a77c; end: 10023a797;  */

void FUN_10023a77c(undefined8 param_1)

{
  FUN_1000285a8(0x112de37f8,&UNK_10d9ac758);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100737aa0,param_1);
  return;
}



/* Entry: 10023a798; end: 10023a7e7;  */

void FUN_10023a798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10023a7e8; end: 10023a807;  */

void FUN_10023a7e8(void)

{
  func_0x000107c61168(&PTR_PTR_1129697a0);
  return;
}



/* Entry: 10023a808; end: 10023a9eb;  */

void FUN_10023a808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de4688,&UNK_10d9ae0a0);
  puVar1 = &UNK_1104246c0;
  func_0x000107c613fc(&UNK_1104246c0,0xc0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  FUN_1000823a8(FUN_10046d224,puVar1);
  return;
}



/* Entry: 10023a9ec; end: 10023aa0b;  */

void FUN_10023a9ec(void)

{
  func_0x000107c61168(&PTR_PTR_112de4710);
  return;
}



/* Entry: 10023aa0c; end: 10023aaa3;  */

void FUN_10023aa0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de4a30,&UNK_10d9ae6c0);
  puVar1 = &UNK_110424958;
  func_0x000107c613fc(&UNK_110424958,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_1019bafb0,puVar1);
  return;
}



/* Entry: 10023aaa4; end: 10023aaf7;  */

void FUN_10023aaa4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10023aaf8; end: 10023ab13;  */

void FUN_10023aaf8(undefined8 param_1)

{
  FUN_1000285a8(0x112de4a38,&UNK_10d9ae6c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1019bb284,param_1);
  return;
}



/* Entry: 10023ab14; end: 10023ab63;  */

void FUN_10023ab14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10023ab64; end: 10023ab7f;  */

void FUN_10023ab64(undefined8 param_1)

{
  FUN_1000285a8(0x112df2048,&UNK_10d9bfec8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101a7439c,param_1);
  return;
}



/* Entry: 10023ab80; end: 10023abcf;  */

void FUN_10023ab80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10023abd0; end: 10023ac23;  */

void FUN_10023abd0(undefined8 param_1)

{
  FUN_1000285a8(0x112df2030,&UNK_10d9bfeb0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006d844c,param_1);
  return;
}



/* Entry: 10023ac24; end: 10023acbb;  */

void FUN_10023ac24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de2068,&UNK_10d9a9e20);
  puVar1 = &UNK_110422968;
  func_0x000107c613fc(&UNK_110422968,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_10073db78,puVar1);
  return;
}



/* Entry: 10023acbc; end: 10023acdb;  */

void FUN_10023acbc(void)

{
  func_0x000107c61168(&PTR_PTR_112de20e0);
  return;
}



/* Entry: 10023acdc; end: 10023acf7;  */

void FUN_10023acdc(undefined8 param_1)

{
  FUN_1000285a8(0x112de2070,&UNK_10d9a9e28);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x10073db1c,param_1);
  return;
}



/* Entry: 10023acf8; end: 10023ad47;  */

void FUN_10023acf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10023ad48; end: 10023ad67;  */

void FUN_10023ad48(void)

{
  func_0x000107c61168(&PTR_PTR_1129c5d48);
  return;
}



/* Entry: 10023ad68; end: 10023ae8f;  */

void FUN_10023ad68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd7df0,&UNK_10d99afa0);
  puVar1 = &UNK_110417ab8;
  func_0x000107c613fc(&UNK_110417ab8,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  FUN_1000823a8(FUN_1009b0388,puVar1);
  return;
}



/* Entry: 10023ae90; end: 10023aeaf;  */

void FUN_10023ae90(void)

{
  func_0x000107c61168(&PTR_PTR_112dd7e68);
  return;
}



/* Entry: 10023aeb0; end: 10023aecb;  */

void FUN_10023aeb0(undefined8 param_1)

{
  FUN_1000285a8(0x112dd7df8,&UNK_10d99afa8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a5b8ac,param_1);
  return;
}



/* Entry: 10023aecc; end: 10023af1b;  */

void FUN_10023aecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10023af1c; end: 10023b01f;  */

void FUN_10023af1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de2fd0,&UNK_10d9ab8a0);
  puVar1 = &UNK_110423570;
  func_0x000107c613fc(&UNK_110423570,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  FUN_1000823a8(FUN_1007e69a8,puVar1);
  return;
}



/* Entry: 10023b020; end: 10023b03f;  */

void FUN_10023b020(void)

{
  func_0x000107c61168(&PTR_PTR_112de3048);
  return;
}



/* Entry: 10023b040; end: 10023b05b;  */

void FUN_10023b040(undefined8 param_1)

{
  FUN_1000285a8(0x112de4698,&UNK_10d9ae0b0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10047e320,param_1);
  return;
}



/* Entry: 10023b05c; end: 10023b0ab;  */

void FUN_10023b05c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10023b0ac; end: 10023b0e3;  */

void FUN_10023b0ac(undefined8 param_1)

{
  FUN_1000285a8(0x112de4690,&UNK_10d9ae0a8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10046c2f0,param_1);
  return;
}



/* Entry: 10023b0e4; end: 10023b163;  */

void FUN_10023b0e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de5878,&UNK_10d9affb0);
  puVar1 = &UNK_110425400;
  func_0x000107c613fc(&UNK_110425400,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100637748,puVar1);
  return;
}



/* Entry: 10023b164; end: 10023b183;  */

void FUN_10023b164(void)

{
  func_0x000107c61168(&PTR_PTR_112de58f0);
  return;
}



/* Entry: 10023b184; end: 10023b19f;  */

void FUN_10023b184(undefined8 param_1)

{
  FUN_1000285a8(0x112de5880,&UNK_10d9affb8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006376ec,param_1);
  return;
}



/* Entry: 10023b1a0; end: 10023b1ef;  */

void FUN_10023b1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10023b1f0; end: 10023b33b;  */

void FUN_10023b1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de5b98,&UNK_10d9b0510);
  puVar1 = &UNK_110425678;
  func_0x000107c613fc(&UNK_110425678,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  FUN_1000823a8(FUN_10046c1c8,puVar1);
  return;
}


