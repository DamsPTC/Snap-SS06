/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088b2564; end: 1088b25f7;  */

undefined8 FUN_1088b2564(undefined8 param_1)

{
  func_0x0001088b2598(param_1);
  return param_1;
}



/* Entry: 1088b25f8; end: 1088b261b;  */

void FUN_1088b25f8(undefined8 param_1)

{
  FUN_1088b26a4(param_1);
  return;
}



/* Entry: 1088b261c; end: 1088b26a3;  */

undefined8 FUN_1088b261c(undefined8 param_1,undefined8 param_2)

{
  FUN_1088b26b8(param_1,param_2);
  return param_1;
}



/* Entry: 1088b26a4; end: 1088b26b7;  */

undefined8 FUN_1088b26a4(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088b26b8; end: 1088b2737;  */

undefined8 FUN_1088b26b8(undefined8 param_1)

{
  func_0x000107c2a234(param_1);
  return param_1;
}



/* Entry: 1088b2738; end: 1088b2ab3;  */

void FUN_1088b2738(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  long lVar7;
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [78];
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined1 auStack_a0 [34];
  undefined1 uStack_7e;
  undefined4 uStack_7d;
  undefined1 uStack_79;
  undefined1 auStack_78 [23];
  undefined1 uStack_61;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  uVar1 = (long)param_1 + 0x4a;
  puVar2 = param_1 + 2;
  puStack_60 = param_1;
  func_0x000107c2a19c((long)param_1 + 0x49);
  lVar7 = param_1[8];
  func_0x0001088b0f00(auStack_130);
  FUN_10866854c(auStack_f0,lVar7 + 0xe0);
  FUN_1088b0f34(auStack_130,auStack_f0);
  FUN_1088a95ac(auStack_f0);
  uVar3 = 0;
  FUN_1088a9590();
  if ((uVar3 & 1) != 0) {
    puVar4 = auStack_130;
    func_0x0001088a956c();
    FUN_10888ec18();
    if (puVar4 == (undefined1 *)0x41) {
      lVar7 = 0;
      func_0x0001088a956c();
      uVar3 = lVar7 + 0x18;
      FUN_10888b148();
      if ((uVar3 & 1) == 0) {
        uVar3 = param_1[8] + 0x38;
        puVar4 = auStack_130;
        func_0x0001088a956c(puVar4);
        func_0x000107c28078(uVar3,puVar4 + 0x18);
        if ((uVar3 & 1) == 0) {
          puVar4 = auStack_130;
          func_0x0001088a956c(puVar4);
          FUN_10888aaf4(param_1 + 4,puVar4);
          FUN_108657b48(auStack_a0,param_1[4],param_1[5]);
          uVar3 = 0;
          FUN_10888b1ac();
          if ((uVar3 & 1) == 0) {
            uStack_7e = 0;
            FUN_108653be8(puVar2,&uStack_7e);
          }
          else {
            FUN_10866409c(param_1[8] + 0xf0);
            lVar7 = param_1[8];
            puVar4 = auStack_130;
            func_0x0001088a956c(puVar4);
            func_0x00010888ebdc(lVar7 + 0x20,puVar4);
            puVar4 = auStack_130;
            func_0x0001088a956c(puVar4);
            func_0x00010888ebdc(lVar7 + 0x38,puVar4 + 0x18);
            puVar4 = auStack_a0;
            FUN_10888b244(puVar4);
            func_0x00010888ebdc(lVar7 + 0x60,puVar4);
            puVar4 = auStack_130;
            func_0x0001088a956c();
            *(undefined4 *)(lVar7 + 0x50) = *(undefined4 *)(puVar4 + 0x30);
            FUN_10888aaf4(param_1 + 6,lVar7 + 0x20);
            uVar5 = param_1[6];
            FUN_108657e30(uVar5,param_1[7]);
            lVar7 = param_1[8];
            uStack_7d = (undefined4)uVar5;
            uStack_79 = (undefined1)((ulong)uVar5 >> 0x20);
            *(undefined4 *)(lVar7 + 0x54) = uStack_7d;
            *(undefined1 *)(lVar7 + 0x58) = uStack_79;
            FUN_10889fb98(auStack_78);
            puVar4 = auStack_78;
            FUN_108668260();
            *(undefined1 **)(param_1[8] + 0x78) = puVar4;
            uStack_61 = 1;
            FUN_108653be8(puVar2,&uStack_61);
          }
          func_0x00010888b2ec(auStack_a0);
        }
        else {
          uStack_a1 = 1;
          FUN_108653be8(puVar2,&uStack_a1);
        }
        goto LAB_1088b29bc;
      }
    }
  }
  uStack_a2 = 0;
  FUN_108653be8(puVar2,&uStack_a2);
LAB_1088b29bc:
  FUN_1088a95ac(auStack_130);
  FUN_108885f88(puVar2);
  uVar3 = uVar1;
  func_0x000107c2a18c();
  if ((uVar3 & 1) == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 9) = 1;
    FUN_1088a8e74();
    ppuVar6 = &puStack_58;
    puStack_58 = param_1;
    func_0x0001088a8ea4(ppuVar6);
    FUN_108885f40(uVar1,ppuVar6);
  }
  else {
    func_0x000107c2a19c(uVar1);
    func_0x0001088a9614(puVar2);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 1088b2ab4; end: 1088b2b37;  */

void FUN_1088b2ab4(long param_1)

{
  func_0x0001088a9614(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1088b2b38; end: 1088b2fff;  */

void FUN_1088b2b38(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte bVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 **ppuVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  char cVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar1 = param_1 + 7;
  pbVar2 = (byte *)(param_1 + 0xb);
  puVar3 = param_1 + 0xc;
  puVar4 = param_1 + 9;
  puVar5 = param_1 + 0xe;
  puVar6 = param_1 + 0xf;
  puVar7 = param_1 + 4;
  uVar8 = (long)param_1 + 0x8e;
  puVar9 = param_1 + 2;
  bVar10 = *(byte *)((long)param_1 + 0x8a);
  if (bVar10 == 0) {
    func_0x000107c2a19c((long)param_1 + 0x8b);
    goto LAB_1088b2bf4;
  }
  if ((bVar10 & 7) != 1) {
    if ((bVar10 & 7) == 2) {
      cVar17 = '\0';
      goto LAB_1088b2d10;
    }
    cVar17 = '\0';
    do {
      if (cVar17 != '\0') {
        return;
      }
      do {
        do {
          func_0x000107c28834(puVar5);
          FUN_108885f54(puVar5);
          func_0x000107c2a1ac(puVar6);
          func_0x000108888464(puVar7);
          FUN_1088b0ecc(puVar4);
          while( true ) {
            uVar11 = (int)param_1[0x10] + 0x128;
            FUN_1088b0e04();
            if (((uVar11 ^ 1) & 1) != 0) break;
LAB_1088b2bf4:
            do {
              FUN_1088b0800(puVar1,param_1[0x10] + 0x160);
              puVar12 = puVar1;
              FUN_1088b085c();
              if (((ulong)puVar12 & 1) == 0) {
                *(undefined1 *)((long)param_1 + 0x8a) = 1;
                puVar12 = param_1;
                func_0x000107c2a194();
                ppuVar13 = &puStack_80;
                puStack_80 = puVar12;
                func_0x000107c2a198(ppuVar13);
                puVar12 = puVar1;
                func_0x0001088b0884(puVar1,ppuVar13);
                if (((ulong)puVar12 & 1) != 0) {
                  cVar17 = -1;
LAB_1088b2c54:
                  if (cVar17 != '\0') {
                    return;
                  }
                }
              }
              puVar12 = puVar1;
              FUN_1088b08bc();
              *(short *)(param_1 + 0x11) = (short)puVar12;
              puVar12 = param_1 + 0x11;
              FUN_1088b099c();
              *(byte *)((long)param_1 + 0x8c) = (byte)puVar12 & 1;
              FUN_1088b09c4(puVar1);
              if ((*(byte *)((long)param_1 + 0x8c) & 1) == 0) {
                func_0x000107c287c8(puVar9);
                FUN_108885f88(puVar9);
                uVar16 = uVar8;
                func_0x000107c2a18c();
                if ((uVar16 & 1) == 0) {
                  *param_1 = 0;
                  *(undefined1 *)((long)param_1 + 0x8a) = 4;
                  func_0x000107c2a194();
                  ppuVar13 = &puStack_68;
                  puStack_68 = param_1;
                  func_0x000107c2a198(ppuVar13);
                  FUN_108885f40(uVar8,ppuVar13);
                  return;
                }
                func_0x000107c2a19c(uVar8);
                FUN_108885f98(puVar9);
                __ZdlPv(param_1);
                return;
              }
              FUN_1088b09f8(puVar3,param_1[0x10]);
              FUN_1088a8be4(pbVar2,puVar3);
              pbVar14 = pbVar2;
              func_0x000107c2a1a4();
              if (((ulong)pbVar14 & 1) == 0) {
                *(undefined1 *)((long)param_1 + 0x8a) = 2;
                puVar12 = param_1;
                func_0x000107c2a194();
                ppuVar13 = &puStack_78;
                puStack_78 = puVar12;
                func_0x000107c2a198(ppuVar13);
                pbVar14 = pbVar2;
                func_0x000107c28830(pbVar2,ppuVar13);
                if (((ulong)pbVar14 & 1) != 0) {
                  cVar17 = -1;
LAB_1088b2d10:
                  if (cVar17 != '\0') {
                    return;
                  }
                }
              }
              pbVar14 = pbVar2;
              FUN_1086c1de4();
              *(byte *)((long)param_1 + 0x8d) = (*pbVar14 ^ 1) & 1;
              FUN_1088a8c10(pbVar2);
              func_0x0001088a8c44(puVar3);
            } while ((*(byte *)((long)param_1 + 0x8d) & 1) != 0);
          }
          lVar18 = param_1[0x10];
          lVar15 = lVar18 + 0x128;
          func_0x0001088b0e6c();
          param_1[0xd] = lVar15;
          func_0x0001088b0e34(puVar4,lVar18 + 0x128,param_1[0xd]);
          puVar12 = puVar4;
          func_0x0001088b0ea4(puVar4);
          plVar19 = (long *)param_1[0x10];
          FUN_1088868bc(puVar7,puVar12);
          (**(code **)(*plVar19 + 0x10))(puVar6,plVar19,puVar7);
          func_0x000107c2a1a0(puVar5,puVar6);
          puVar12 = puVar5;
          func_0x000107c2a1a4();
        } while (((ulong)puVar12 & 1) != 0);
        *(undefined1 *)((long)param_1 + 0x8a) = 3;
        puVar12 = param_1;
        func_0x000107c2a194();
        ppuVar13 = &puStack_70;
        puStack_70 = puVar12;
        func_0x000107c2a198(ppuVar13);
        puVar12 = puVar5;
        func_0x000107c28830(puVar5,ppuVar13);
      } while (((ulong)puVar12 & 1) == 0);
      cVar17 = -1;
    } while( true );
  }
  cVar17 = '\0';
  goto LAB_1088b2c54;
}



/* Entry: 1088b3000; end: 1088b317f;  */

void FUN_1088b3000(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x8a);
  if ((bVar1 != 4) && ((bVar1 & 7) != 0)) {
    if ((bVar1 & 7) == 1) {
      FUN_1088b09c4(param_1 + 0x38);
    }
    else if ((bVar1 & 7) == 2) {
      FUN_1088a8c10(param_1 + 0x58);
      func_0x0001088a8c44(param_1 + 0x60);
    }
    else {
      FUN_108885f54(param_1 + 0x70);
      func_0x000107c2a1ac(param_1 + 0x78);
      func_0x000108888464(param_1 + 0x20);
      FUN_1088b0ecc(param_1 + 0x48);
    }
  }
  FUN_108885f98(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1088b3180; end: 1088b39c7;  */

void FUN_1088b3180(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  char cVar17;
  long lVar18;
  undefined1 auStack_a8 [24];
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  puVar1 = param_1 + 0x17;
  puVar2 = param_1 + 10;
  puVar11 = param_1 + 0x1c;
  puVar12 = param_1 + 0x1d;
  puVar13 = param_1 + 0x1f;
  puVar3 = param_1 + 0x20;
  puVar4 = param_1 + 0x21;
  puVar5 = param_1 + 0x22;
  uVar6 = (long)param_1 + 0x122;
  puVar7 = param_1 + 2;
  bVar8 = *(byte *)(param_1 + 0x24);
  puStack_90 = param_1;
  if (bVar8 == 0) {
    func_0x000107c2a19c((long)param_1 + 0x121);
    lVar18 = param_1[0x23];
    func_0x000107c2a244(puVar2);
    param_1[0x1e] = *(undefined8 *)(lVar18 + 0x158);
    func_0x000107c28838(puVar12,lVar18 + 0x80,param_1[0x1e]);
    func_0x000107c2a1a0(puVar11,puVar12);
    puVar9 = puVar11;
    func_0x000107c2a1a4();
    if (((ulong)puVar9 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x24) = 1;
      puVar9 = param_1;
      func_0x000107c2a194();
      ppuVar10 = &puStack_88;
      puStack_88 = puVar9;
      func_0x000107c2a198(ppuVar10);
      puVar9 = puVar11;
      func_0x000107c28830(puVar11,ppuVar10);
      if (((ulong)puVar9 & 1) != 0) {
        cVar17 = -1;
        goto LAB_1088b32f0;
      }
    }
LAB_1088b330c:
    func_0x000107c28834(puVar11);
    FUN_108885f54(puVar11);
    func_0x000107c2a1ac(puVar12);
    if ((*(byte *)(param_1[0x23] + 0x150) & 1) != 0) {
      (**(code **)(*(long *)param_1[0x23] + 0x18))(puVar3);
      func_0x000107c2a1a0(puVar13,puVar3);
      puVar11 = puVar13;
      func_0x000107c2a1a4();
      if (((ulong)puVar11 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x24) = 2;
        puVar11 = param_1;
        func_0x000107c2a194();
        ppuVar10 = &puStack_80;
        puStack_80 = puVar11;
        func_0x000107c2a198(ppuVar10);
        puVar11 = puVar13;
        func_0x000107c28830(puVar13,ppuVar10);
        if (((ulong)puVar11 & 1) != 0) {
          cVar17 = -1;
          goto LAB_1088b33a8;
        }
      }
LAB_1088b33dc:
      func_0x000107c28834(puVar13);
      FUN_108885f54(puVar13);
      func_0x000107c2a1ac(puVar3);
    }
    FUN_1088b02ec(puVar5,param_1[0x23]);
    func_0x000107c2a1a0(puVar4,puVar5);
    puVar11 = puVar4;
    func_0x000107c2a1a4();
    if (((ulong)puVar11 & 1) != 0) goto LAB_1088b349c;
    *(undefined1 *)(param_1 + 0x24) = 3;
    puVar11 = param_1;
    func_0x000107c2a194();
    ppuVar10 = &puStack_78;
    puStack_78 = puVar11;
    func_0x000107c2a198(ppuVar10);
    puVar11 = puVar4;
    func_0x000107c28830(puVar4,ppuVar10);
    if (((ulong)puVar11 & 1) == 0) goto LAB_1088b349c;
    cVar17 = -1;
  }
  else {
    if ((bVar8 & 7) == 1) {
      cVar17 = '\0';
LAB_1088b32f0:
      if (cVar17 != '\0') {
        return;
      }
      goto LAB_1088b330c;
    }
    if ((bVar8 & 7) == 2) {
      cVar17 = '\0';
LAB_1088b33a8:
      if (cVar17 != '\0') {
        return;
      }
      goto LAB_1088b33dc;
    }
    cVar17 = '\0';
  }
  if (cVar17 != '\0') {
    return;
  }
LAB_1088b349c:
  func_0x000107c28834(puVar4);
  FUN_108885f54(puVar4);
  func_0x000107c2a1ac(puVar5);
  puVar11 = puVar2;
  FUN_1088b1560();
  if (((ulong)puVar11 & 1) != 0) {
    puVar11 = puVar2;
    func_0x0001088b1588();
    puVar12 = puVar2;
    func_0x0001088b1588();
    puVar13 = puVar2;
    func_0x0001088b1588();
    param_1[0x16] = auStack_a8;
    *puVar1 = &UNK_10f4ea0b1;
    param_1[0x18] = puVar11;
    param_1[0x19] = puVar12 + 6;
    param_1[0x1a] = puVar13 + 3;
    uVar16 = *puVar1;
    FUN_1088b17dc(param_1 + 4,uVar16,param_1[0x18],param_1[0x19],param_1[0x1a]);
    param_1[0x1b] = param_1 + 4;
    uVar14 = *puVar1;
    func_0x000107c2793c();
    param_1[0x12] = uVar14;
    param_1[0x13] = uVar16;
    FUN_10889fe1c(param_1 + 0x14,0xd1d,param_1[0x1b]);
    func_0x000107c3173c(auStack_a8,param_1[0x12],param_1[0x13],param_1[0x14],param_1[0x15]);
    (**(code **)(*(long *)param_1[0x23] + 0x20))((long *)param_1[0x23],auStack_a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_a8);
  }
  FUN_1088b15ac(puVar2);
  func_0x000107c287c8(puVar7);
  FUN_108885f88(puVar7);
  uVar15 = uVar6;
  func_0x000107c2a18c();
  if ((uVar15 & 1) == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 0x24) = 4;
    func_0x000107c2a194();
    ppuVar10 = apuStack_70;
    apuStack_70[0] = param_1;
    func_0x000107c2a198(ppuVar10);
    FUN_108885f40(uVar6,ppuVar10);
  }
  else {
    func_0x000107c2a19c(uVar6);
    FUN_108885f98(puVar7);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 1088b39c8; end: 1088b3b47;  */

void FUN_1088b39c8(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x120);
  if ((bVar1 != 4) && ((bVar1 & 7) != 0)) {
    if ((bVar1 & 7) == 1) {
      FUN_108885f54(param_1 + 0xe0);
      func_0x000107c2a1ac(param_1 + 0xe8);
    }
    else if ((bVar1 & 7) == 2) {
      FUN_108885f54(param_1 + 0xf8);
      func_0x000107c2a1ac(param_1 + 0x100);
    }
    else {
      FUN_108885f54(param_1 + 0x108);
      func_0x000107c2a1ac(param_1 + 0x110);
    }
    FUN_1088b15ac(param_1 + 0x50);
  }
  FUN_108885f98(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1088b3b48; end: 1088b3d43;  */

void FUN_1088b3b48(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  ulong uVar7;
  char cVar8;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar1 = param_1 + 4;
  puVar2 = param_1 + 5;
  uVar3 = (long)param_1 + 0x3a;
  puVar4 = param_1 + 2;
  if (*(char *)(param_1 + 7) == '\0') {
    func_0x000107c2a19c((long)param_1 + 0x39);
    func_0x000107c2a240(puVar2,param_1[6]);
    func_0x000107c2a1a0(puVar1,puVar2);
    puVar5 = puVar1;
    func_0x000107c2a1a4();
    if (((ulong)puVar5 & 1) != 0) goto LAB_1088b3c20;
    *(undefined1 *)(param_1 + 7) = 1;
    puVar5 = param_1;
    func_0x000107c2a194();
    ppuVar6 = &puStack_50;
    puStack_50 = puVar5;
    func_0x000107c2a198(ppuVar6);
    puVar5 = puVar1;
    func_0x000107c28830(puVar1,ppuVar6);
    if (((ulong)puVar5 & 1) == 0) goto LAB_1088b3c20;
    cVar8 = -1;
  }
  else {
    cVar8 = '\0';
  }
  if (cVar8 != '\0') {
    return;
  }
LAB_1088b3c20:
  func_0x000107c28834(puVar1);
  FUN_108885f54(puVar1);
  func_0x000107c2a1ac(puVar2);
  func_0x000107c287c8(puVar4);
  FUN_108885f88(puVar4);
  uVar7 = uVar3;
  func_0x000107c2a18c();
  if ((uVar7 & 1) == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 7) = 2;
    func_0x000107c2a194();
    ppuVar6 = &puStack_48;
    puStack_48 = param_1;
    func_0x000107c2a198(ppuVar6);
    FUN_108885f40(uVar3,ppuVar6);
  }
  else {
    func_0x000107c2a19c(uVar3);
    FUN_108885f98(puVar4);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 1088b3d44; end: 1088b3f27;  */

void FUN_1088b3d44(long param_1)

{
  if ((*(byte *)(param_1 + 0x38) != 2) && ((*(byte *)(param_1 + 0x38) & 3) != 0)) {
    FUN_108885f54(param_1 + 0x20);
    func_0x000107c2a1ac(param_1 + 0x28);
  }
  FUN_108885f98(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1088b3f28; end: 1088b414b;  */

void FUN_1088b3f28(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  ulong uVar7;
  char cVar8;
  long lVar9;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar1 = param_1 + 4;
  puVar2 = param_1 + 5;
  uVar3 = (long)param_1 + 0x3a;
  puVar4 = param_1 + 2;
  if (*(char *)(param_1 + 7) == '\0') {
    func_0x000107c2a19c((long)param_1 + 0x39);
    lVar9 = param_1[6];
    FUN_1088b02c8(lVar9 + 0x128);
    FUN_1088b11fc(lVar9 + 0x168);
    FUN_108659ed0(puVar2,param_1[6] + 0x80);
    func_0x000107c2a1a0(puVar1,puVar2);
    puVar5 = puVar1;
    func_0x000107c2a1a4();
    if (((ulong)puVar5 & 1) != 0) goto LAB_1088b4028;
    *(undefined1 *)(param_1 + 7) = 1;
    puVar5 = param_1;
    func_0x000107c2a194();
    ppuVar6 = &puStack_50;
    puStack_50 = puVar5;
    func_0x000107c2a198(ppuVar6);
    puVar5 = puVar1;
    func_0x000107c28830(puVar1,ppuVar6);
    if (((ulong)puVar5 & 1) == 0) goto LAB_1088b4028;
    cVar8 = -1;
  }
  else {
    cVar8 = '\0';
  }
  if (cVar8 != '\0') {
    return;
  }
LAB_1088b4028:
  func_0x000107c28834(puVar1);
  FUN_108885f54(puVar1);
  func_0x000107c2a1ac(puVar2);
  func_0x000107c287c8(puVar4);
  FUN_108885f88(puVar4);
  uVar7 = uVar3;
  func_0x000107c2a18c();
  if ((uVar7 & 1) == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 7) = 2;
    func_0x000107c2a194();
    ppuVar6 = &puStack_48;
    puStack_48 = param_1;
    func_0x000107c2a198(ppuVar6);
    FUN_108885f40(uVar3,ppuVar6);
  }
  else {
    func_0x000107c2a19c(uVar3);
    FUN_108885f98(puVar4);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 1088b414c; end: 1088b4223;  */

void FUN_1088b414c(long param_1)

{
  if ((*(byte *)(param_1 + 0x38) != 2) && ((*(byte *)(param_1 + 0x38) & 3) != 0)) {
    FUN_108885f54(param_1 + 0x20);
    func_0x000107c2a1ac(param_1 + 0x28);
  }
  FUN_108885f98(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1088b4224; end: 1088b4287;  */

undefined1  [16] FUN_1088b4224(void)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  long lStack_30;
  undefined1 uStack_21;
  
  plVar1 = &lStack_30;
  puVar2 = &uStack_21;
  func_0x000107c2a264(&lStack_30,puVar2);
  func_0x000107c2a260(&lStack_30);
  if (lStack_30 != 0) {
    func_0x0001088b42a0();
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = plVar1;
  return auVar3;
}



/* Entry: 1088b4288; end: 1088b42ab;  */

void FUN_1088b4288(void)

{
  return;
}



/* Entry: 1088b42ac; end: 1088b436b;  */

undefined1 * FUN_1088b42ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char in_NG;
  char in_OV;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x10;
  long extraout_x11;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001088b4bbc();
  lVar1 = extraout_x11;
  lVar2 = extraout_x10;
  if (in_NG == in_OV) {
    lVar1 = extraout_x8;
    lVar2 = param_2;
  }
  func_0x000107c28004(auStack_50,lVar2,lVar2 + lVar1);
  puVar3 = auStack_50;
  FUN_1088b5104(puVar3,&UNK_10df6af65,param_1,&uStack_38);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010bcd5ac0(auStack_68,&uStack_38);
    func_0x000107c27b9c(param_3,auStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  }
  func_0x000107c27914(auStack_50);
  func_0x000107c27914(&uStack_38);
  return puVar3;
}



/* Entry: 1088b436c; end: 1088b442f;  */

undefined8 * FUN_1088b436c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  ulong uVar2;
  undefined8 extraout_x8;
  ulong extraout_x10;
  undefined8 extraout_x11;
  undefined8 *puVar3;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001088b4bbc();
  uVar1 = extraout_x11;
  uVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    uVar2 = param_2;
  }
  func_0x00010bcd5aec(uVar2,uVar1,&uStack_38);
  if ((uVar2 & 1) == 0) {
    func_0x000107c27fa8(param_3);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    lStack_50 = 0;
    lStack_48 = 0;
    uStack_40 = 0;
    puVar3 = &uStack_38;
    func_0x0001088b51c4(puVar3,&UNK_10df6af65,param_1,&lStack_50);
    if (((ulong)puVar3 & 1) != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
                (param_3,lStack_50,lStack_48 - lStack_50);
    }
    func_0x000107c27914(&lStack_50);
  }
  func_0x000107c27914(&uStack_38);
  return puVar3;
}



/* Entry: 1088b4430; end: 1088b458f;  */

undefined8 * FUN_1088b4430(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x9;
  undefined8 *unaff_x19;
  long lVar4;
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
  
  func_0x0001088b4b20();
  if ((bool)in_ZR) {
    if (extraout_x9 != extraout_x8) {
      uStack_68 = extraout_x8[1];
      uStack_70 = *extraout_x8;
      uStack_58 = extraout_x8[3];
      uStack_60 = extraout_x8[2];
    }
    func_0x0001088b4bb0();
    uVar1 = param_2[1];
    lVar4 = *param_2 + 0x50;
    while( true ) {
      uVar3 = lVar4 - 0x50;
      in_CY = uVar1 <= uVar3;
      if (uVar3 == uVar1) break;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      param_1 = &uStack_70;
      FUN_1088b42ac(param_1,uVar3,&uStack_88);
      if ((int)param_1 != 0) {
        param_1 = &uStack_70;
        FUN_1088b42ac(param_1,lVar4 + -0x38,&uStack_a0);
        if (((ulong)param_1 & 1) != 0) {
          if (*(char *)(lVar4 + -8) == '\x01') {
            param_1 = (undefined8 *)(lVar4 + -0x20);
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_a8 = 0;
            FUN_1088b5104(param_1,&UNK_10df6af65,&uStack_70,&uStack_b8);
            if ((int)param_1 != 0) {
              param_1 = unaff_x19;
              FUN_1088b4590();
            }
            func_0x0001088b4b44();
          }
          else {
            param_1 = unaff_x19;
            func_0x0001088b45c4();
          }
        }
      }
      func_0x0001088b4ac8();
      func_0x0001088b4ab8();
      lVar4 = lVar4 + 0x58;
    }
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    in_ZR = 1;
  }
  else {
    func_0x0001088b4bb0();
  }
  func_0x0001088b4b6c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001088b4b44();
  func_0x0001088b4ac8();
  func_0x0001088b4ab8();
  func_0x0001059569d4();
  puVar2 = param_1;
  __Unwind_Resume();
  func_0x0001088b4b5c();
  if ((bool)in_CY) {
    FUN_1088b47d4();
  }
  else {
    FUN_1088b47a4();
    puVar2 = param_1 + 0xb;
  }
  unaff_x19[1] = puVar2;
  return puVar2 + -0xb;
}



/* Entry: 1088b4590; end: 1088b45f7;  */

long FUN_1088b4590(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088b4b5c();
  if ((bool)in_CY) {
    FUN_1088b47d4();
  }
  else {
    FUN_1088b47a4();
    param_1 = unaff_x20 + 0x58;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x58;
}



/* Entry: 1088b45f8; end: 1088b476f;  */

undefined8 * FUN_1088b45f8(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  undefined8 *extraout_x9;
  long unaff_x19;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 uStack_a8;
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
  
  func_0x0001088b4b20();
  if ((bool)in_ZR) {
    if (extraout_x9 != extraout_x8) {
      uStack_68 = extraout_x8[1];
      uStack_70 = *extraout_x8;
      uStack_58 = extraout_x8[3];
      uStack_60 = extraout_x8[2];
    }
    func_0x0001088b4bb0();
    uVar1 = param_2[1];
    lVar3 = *param_2 + 0x50;
    while( true ) {
      uVar4 = lVar3 - 0x50;
      in_CY = uVar1 <= uVar4;
      if (uVar4 == uVar1) break;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      auStack_c0[0] = 0;
      uStack_a8 = 0;
      if (*(char *)(lVar3 + -8) == '\x01') {
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        FUN_1086554b0(auStack_c0,&uStack_d8);
        uVar5 = lVar3 - 0x20;
        func_0x0001088b4b44();
        func_0x0001088b51c4(uVar5,&UNK_10df6af65,&uStack_70,auStack_c0);
        if ((uVar5 & 1) != 0) goto LAB_1088b46a0;
      }
      else {
LAB_1088b46a0:
        puVar2 = &uStack_70;
        FUN_1088b436c(puVar2,uVar4,&uStack_88);
        if ((int)puVar2 != 0) {
          puVar2 = &uStack_70;
          FUN_1088b436c(puVar2,lVar3 + -0x38,&uStack_a0);
          if ((int)puVar2 != 0) {
            FUN_1088b4770();
          }
        }
      }
      func_0x000107c279c4(auStack_c0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a0);
      param_1 = &uStack_88;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      lVar3 = lVar3 + 0x58;
    }
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    in_ZR = 1;
  }
  else {
    func_0x0001088b4bb0();
  }
  func_0x0001088b4b6c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001088b4b44();
  func_0x000107c279c4(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
  func_0x0001059569d4();
  puVar2 = param_1;
  __Unwind_Resume();
  func_0x0001088b4b5c();
  if ((bool)in_CY) {
    FUN_1088b498c();
  }
  else {
    FUN_1088b495c();
    puVar2 = param_1 + 0xb;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar2;
  return puVar2 + -0xb;
}



/* Entry: 1088b4770; end: 1088b47a3;  */

long FUN_1088b4770(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088b4b5c();
  if ((bool)in_CY) {
    FUN_1088b498c();
  }
  else {
    FUN_1088b495c();
    param_1 = unaff_x20 + 0x58;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x58;
}



/* Entry: 1088b47a4; end: 1088b47d3;  */

void FUN_1088b47a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1088b4820(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x58;
  return;
}



/* Entry: 1088b47d4; end: 1088b481f;  */

void FUN_1088b47d4(void)

{
  undefined8 uStack_58;
  
  FUN_1088b4a34();
  func_0x0001088b4a60();
  func_0x0001088b4b00(uStack_58);
  FUN_1088b4820();
  func_0x0001088b4b4c();
  func_0x0001088b4b14();
  func_0x0001088b4ae8();
  return;
}



/* Entry: 1088b4820; end: 1088b487b;  */

void FUN_1088b4820(void)

{
  undefined1 auStack_80 [80];
  
  func_0x0001088b4ad0();
  func_0x0001088b4b8c();
  func_0x000105c41160(auStack_80);
  func_0x0001088b4a7c();
  func_0x0001088b4b98();
  func_0x0001088b4ac8();
  func_0x0001088b4ab8();
  return;
}



/* Entry: 1088b487c; end: 1088b48ab;  */

void FUN_1088b487c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1088b48f8(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x58;
  return;
}



/* Entry: 1088b48ac; end: 1088b48f7;  */

void FUN_1088b48ac(void)

{
  undefined8 uStack_58;
  
  FUN_1088b4a34();
  func_0x0001088b4a60();
  func_0x0001088b4b00(uStack_58);
  FUN_1088b48f8();
  func_0x0001088b4b4c();
  func_0x0001088b4b14();
  func_0x0001088b4ae8();
  return;
}



/* Entry: 1088b48f8; end: 1088b495b;  */

undefined8 FUN_1088b48f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_60,param_3);
  func_0x0001088b4a7c();
  func_0x0001088b4b98();
  func_0x0001088b4ac8();
  func_0x0001088b4ab8();
  return param_1;
}



/* Entry: 1088b495c; end: 1088b498b;  */

void FUN_1088b495c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1088b49d8(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x58;
  return;
}



/* Entry: 1088b498c; end: 1088b49d7;  */

void FUN_1088b498c(void)

{
  undefined8 uStack_58;
  
  FUN_1088b4a34();
  func_0x0001088b4a60();
  func_0x0001088b4b00(uStack_58);
  FUN_1088b49d8();
  func_0x0001088b4b4c();
  func_0x0001088b4b14();
  func_0x0001088b4ae8();
  return;
}



/* Entry: 1088b49d8; end: 1088b4a33;  */

void FUN_1088b49d8(void)

{
  undefined1 auStack_80 [80];
  
  func_0x0001088b4ad0();
  func_0x0001088b4b8c();
  func_0x000104be0ccc(auStack_80);
  func_0x0001088b4a7c();
  func_0x0001088b4b98();
  func_0x0001088b4ac8();
  func_0x0001088b4ab8();
  return;
}



/* Entry: 1088b4a34; end: 1088b4bcf;  */

long * FUN_1088b4a34(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar1 = (long *)((param_1[1] - *param_1) / 0x58 + 1);
  if ((long *)0x2e8ba2e8ba2e8ba < plVar1) {
    func_0x000105956dc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return param_1;
  }
  uVar2 = (param_1[2] - *param_1) / 0x58;
  plVar3 = (long *)(uVar2 * 2);
  if (plVar3 < plVar1 || (long)plVar3 - (long)plVar1 == 0) {
    plVar3 = plVar1;
  }
  if (0x1745d1745d1745c < uVar2) {
    plVar3 = (long *)0x2e8ba2e8ba2e8ba;
  }
  return plVar3;
}



/* Entry: 1088b4bd0; end: 1088b4c77;  */

undefined ***
FUN_1088b4bd0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined ***param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  undefined ***pppuVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  long lStack_b8;
  long lStack_b0;
  undefined **ppuStack_50;
  undefined *puStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_50 = &PTR_DAT_110a60910;
  puStack_48 = &UNK_10bcce264;
  FUN_1088b5aac();
  pppuVar5 = &ppuStack_50;
  (*(code *)*ppuStack_50)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_50)(&ppuStack_50);
    __Unwind_Resume();
    plVar6 = &lStack_b8;
    func_0x000107c27994(plVar6);
    func_0x0001088b55b4();
    func_0x0001088b54ec();
    uVar1 = *(ulong *)(param_3 + 8);
    if (-1 < (char)*(byte *)(param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_3 + 0x17);
    }
    func_0x0001088b54f8(uVar1);
    func_0x0001088b55b4();
    func_0x0001088b54ec();
    cVar4 = (char)*(byte *)(param_4 + 0x17) < '\0';
    cVar3 = '\0';
    uVar1 = *(ulong *)(param_4 + 8);
    if (!(bool)cVar4) {
      uVar1 = (ulong)*(byte *)(param_4 + 0x17);
    }
    func_0x0001088b54f8(uVar1);
    func_0x0001088b55b4();
    func_0x0001088b54ec();
    func_0x0001088b5594();
    uVar2 = extraout_x11;
    if (cVar4 == cVar3) {
      uVar2 = extraout_x8;
    }
    func_0x0001088b54f8(uVar2);
    func_0x0001088b55b4();
    func_0x0001088b54ec();
    func_0x0001088b557c();
    uVar2 = extraout_x11_00;
    if (cVar4 == cVar3) {
      uVar2 = extraout_x8_00;
    }
    func_0x0001088b54f8(uVar2);
    func_0x000107c2b428();
    func_0x00010ae41fc0(param_7,0x50,plVar6,lStack_b8,lStack_b0 - lStack_b8,*pppuVar5,
                        (long)pppuVar5[1] - (long)*pppuVar5,0,0);
    func_0x000107c27914(&lStack_b8);
    return param_7;
  }
  return pppuVar5;
}



/* Entry: 1088b4c78; end: 1088b4daf;  */

undefined8
FUN_1088b4c78(long *param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  long lStack_58;
  long lStack_50;
  
  plVar5 = &lStack_58;
  func_0x000107c27994(plVar5);
  func_0x0001088b55b4();
  func_0x0001088b54ec();
  uVar1 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x17);
  }
  func_0x0001088b54f8(uVar1);
  func_0x0001088b55b4();
  func_0x0001088b54ec();
  cVar4 = (char)*(byte *)(param_4 + 0x17) < '\0';
  cVar3 = '\0';
  uVar1 = *(ulong *)(param_4 + 8);
  if (!(bool)cVar4) {
    uVar1 = (ulong)*(byte *)(param_4 + 0x17);
  }
  func_0x0001088b54f8(uVar1);
  func_0x0001088b55b4();
  func_0x0001088b54ec();
  func_0x0001088b5594();
  uVar2 = extraout_x11;
  if (cVar4 == cVar3) {
    uVar2 = extraout_x8;
  }
  func_0x0001088b54f8(uVar2);
  func_0x0001088b55b4();
  func_0x0001088b54ec();
  func_0x0001088b557c();
  uVar2 = extraout_x11_00;
  if (cVar4 == cVar3) {
    uVar2 = extraout_x8_00;
  }
  func_0x0001088b54f8(uVar2);
  func_0x000107c2b428();
  func_0x00010ae41fc0(param_7,0x50,plVar5,lStack_58,lStack_50 - lStack_58,*param_1,
                      param_1[1] - *param_1,0,0);
  func_0x000107c27914(&lStack_58);
  return param_7;
}



/* Entry: 1088b4db0; end: 1088b4ee3;  */

void FUN_1088b4db0(long *param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar5 = param_4 - (long)param_3;
  if (0 < lVar5) {
    plVar3 = param_1 + 2;
    lVar4 = param_1[1];
    if (*plVar3 - lVar4 < lVar5) {
      plVar2 = param_1;
      func_0x000107c27908(param_1,(lVar5 - *param_1) + lVar4);
      lVar4 = *param_1;
      plStack_68 = (long *)0x0;
      plStack_48 = plVar3;
      if (plVar2 != (long *)0x0) {
        func_0x000107c2790c();
        plStack_68 = plVar3;
      }
      puStack_60 = (undefined1 *)((long)plStack_68 + ((long)param_2 - lVar4));
      lStack_50 = (long)plStack_68 + (long)plVar2;
      puStack_58 = puStack_60 + lVar5;
      puVar1 = puStack_60;
      for (; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar1 = *param_3;
        puVar1 = puVar1 + 1;
        param_3 = param_3 + 1;
      }
      func_0x000104bd9b18(param_1,&plStack_68,param_2);
      func_0x000107c27910(&plStack_68);
    }
    else {
      lVar4 = lVar4 - (long)param_2;
      if (lVar5 - lVar4 == 0 || lVar5 < lVar4) {
        func_0x0001088b550c();
        for (; lVar5 != 0; lVar5 = lVar5 + -1) {
          *param_2 = *param_3;
          param_3 = param_3 + 1;
          param_2 = param_2 + 1;
        }
      }
      else {
        func_0x000107c28008(param_1,param_3 + lVar4,param_4,lVar5 - lVar4);
        if (0 < lVar4) {
          func_0x0001088b550c();
          for (; lVar4 != 0; lVar4 = lVar4 + -1) {
            *param_2 = *param_3;
            param_3 = param_3 + 1;
            param_2 = param_2 + 1;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1088b4ee4; end: 1088b5103;  */

bool FUN_1088b4ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  char in_NG;
  char in_OV;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [8];
  ulong uStack_90;
  byte bStack_81;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  byte bStack_69;
  undefined1 auStack_68 [8];
  ulong uStack_60;
  byte bStack_51;
  
  func_0x00010bcd5ac0(auStack_68,param_7);
  func_0x00010bcd5ac0(auStack_80,param_6);
  func_0x00010bcd5ac0(auStack_98,param_5);
  puVar3 = auStack_b0;
  func_0x000107c27994(puVar3,param_2);
  func_0x0001088b5550();
  func_0x0001088b54e0();
  func_0x0001088b5594();
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x0001088b54d4(uVar1);
  func_0x0001088b5550();
  func_0x0001088b54e0();
  func_0x0001088b557c();
  uVar1 = extraout_x11_00;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8_00;
  }
  func_0x0001088b54d4(uVar1);
  func_0x0001088b5550();
  func_0x0001088b54e0();
  if (-1 < (char)bStack_81) {
    uStack_90 = (ulong)bStack_81;
  }
  func_0x0001088b54d4(uStack_90);
  func_0x0001088b5550();
  func_0x0001088b54e0();
  if (-1 < (char)bStack_69) {
    uStack_78 = (ulong)bStack_69;
  }
  func_0x0001088b54d4(uStack_78);
  func_0x0001088b5550();
  func_0x0001088b54e0();
  if (-1 < (char)bStack_51) {
    uStack_60 = (ulong)bStack_51;
  }
  func_0x0001088b54d4(uStack_60);
  func_0x0001088b5550();
  func_0x0001088b54e0();
  uVar2 = *(ulong *)(param_8 + 8);
  if (-1 < (char)*(byte *)(param_8 + 0x17)) {
    uVar2 = (ulong)*(byte *)(param_8 + 0x17);
  }
  func_0x0001088b54d4(uVar2);
  func_0x000107c2b428();
  func_0x000107c2b490();
  func_0x000107c27914(auStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return puVar3 != (undefined1 *)0x0;
}



/* Entry: 1088b5104; end: 1088b5293;  */

undefined8 FUN_1088b5104(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  plVar2 = param_4;
  func_0x000107c2823c(param_4,(param_1[1] - *param_1) + 0x10);
  func_0x00010ae33fac();
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2;
    func_0x00010ae34ac8();
    iVar1 = (int)plVar3;
    func_0x0001088b5564();
    func_0x00010ae3432c();
    if (iVar1 != 0) {
      func_0x0001088b5534();
      func_0x00010ae3433c();
      if (iVar1 == 1) {
        func_0x00010ae34534(plVar2,*param_4 + (long)uStack_48._4_4_,&uStack_48);
        if ((int)plVar2 == 1) {
          func_0x0001088b555c();
          func_0x000107c2823c(param_4,(long)(int)uStack_48 + (long)uStack_48._4_4_);
          return 1;
        }
      }
    }
  }
  func_0x0001088b555c();
  param_4[1] = *param_4;
  return 0;
}



/* Entry: 1088b5294; end: 1088b5467;  */

void FUN_1088b5294(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_79;
  undefined1 auStack_78 [32];
  long lStack_58;
  
  puVar4 = &uStack_e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0x19f;
  func_0x000107c2b44c();
  lStack_88 = lVar1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c2b454();
    lStack_90 = lVar2;
    func_0x000107c2b338(param_4,param_5,0);
    lVar3 = lVar1;
    lStack_98 = param_4;
    func_0x000107c2b454();
    plStack_c8 = &lStack_88;
    plStack_c0 = &lStack_90;
    plStack_b8 = &lStack_98;
    plStack_b0 = &lStack_a0;
    puStack_a8 = &uStack_79;
    lStack_a0 = lVar3;
    if (lVar2 == 0) {
      func_0x0001088b5504();
    }
    else {
      func_0x000107c2b488(lVar1,lVar2,param_2,param_3,0);
      if ((int)lVar1 == 1) {
        if (lStack_98 == 0) {
          func_0x0001088b5504();
        }
        else if (lStack_a0 == 0) {
          func_0x0001088b5504();
        }
        else {
          lVar1 = lStack_88;
          func_0x000107c2b468(lStack_88,lStack_a0,0,lStack_90,lStack_98,0);
          if ((int)lVar1 == 1) {
            lVar1 = lStack_88;
            func_0x000107c2b484(lStack_88,lStack_a0,2,&uStack_79,0x21,0);
            if (lVar1 == 0x21) {
              func_0x000107c282ec(&uStack_e0,auStack_78,&lStack_58);
              func_0x0001088b5504();
              param_1[1] = uStack_d8;
              *param_1 = uStack_e0;
              param_1[2] = uStack_d0;
              uStack_d8 = 0;
              uStack_d0 = 0;
              uStack_e0 = 0;
              *(undefined1 *)(param_1 + 3) = 1;
              func_0x000107c27914();
              goto LAB_1088b5418;
            }
            func_0x0001088b5504();
          }
          else {
            func_0x0001088b5504();
          }
        }
      }
      else {
        func_0x0001088b5504();
      }
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
LAB_1088b5418:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27914();
  func_0x0001088b55ac();
  if (*(long *)*puVar4 != 0) {
    func_0x000107c2b448();
  }
  if (*(long *)puVar4[1] != 0) {
    func_0x000107c2b458();
  }
  if (*(long *)puVar4[2] != 0) {
    func_0x000107c2b31c();
  }
  if (*(long *)puVar4[3] != 0) {
    func_0x000107c2b458();
  }
  puVar4 = (undefined8 *)puVar4[4];
  *(undefined1 *)(puVar4 + 4) = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  return;
}



/* Entry: 1088b5468; end: 1088b54d3;  */

void FUN_1088b5468(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (*(long *)*param_1 != 0) {
    func_0x000107c2b448();
  }
  if (*(long *)param_1[1] != 0) {
    func_0x000107c2b458();
  }
  if (*(long *)param_1[2] != 0) {
    func_0x000107c2b31c();
  }
  if (*(long *)param_1[3] != 0) {
    func_0x000107c2b458();
  }
  puVar1 = (undefined8 *)param_1[4];
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 1088b54d4; end: 1088b55bf;  */

void FUN_1088b54d4(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  
  lVar5 = (long)(param_4 + param_1) - (long)param_4;
  if (0 < lVar5) {
    puVar3 = &stack0x00000020;
    if (in_stack_00000020 - in_stack_00000018 < lVar5) {
      puVar2 = &stack0x00000010;
      func_0x000107c27908(&stack0x00000010,(lVar5 - in_stack_00000010) + in_stack_00000018);
      lVar4 = (long)param_3 - in_stack_00000010;
      puStack_68 = (undefined8 *)0x0;
      puStack_48 = puVar3;
      if (puVar2 != (undefined8 *)0x0) {
        func_0x000107c2790c();
        puStack_68 = puVar3;
      }
      puStack_60 = (undefined1 *)((long)puStack_68 + lVar4);
      lStack_50 = (long)puStack_68 + (long)puVar2;
      puStack_58 = puStack_60 + lVar5;
      puVar1 = puStack_60;
      for (; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar1 = *param_4;
        puVar1 = puVar1 + 1;
        param_4 = param_4 + 1;
      }
      func_0x000104bd9b18(&stack0x00000010,&puStack_68,param_3);
      func_0x000107c27910(&puStack_68);
    }
    else {
      lVar4 = in_stack_00000018 - (long)param_3;
      if (lVar5 - lVar4 == 0 || lVar5 < lVar4) {
        func_0x0001088b550c();
        for (; lVar5 != 0; lVar5 = lVar5 + -1) {
          *param_3 = *param_4;
          param_4 = param_4 + 1;
          param_3 = param_3 + 1;
        }
      }
      else {
        func_0x000107c28008(&stack0x00000010,param_4 + lVar4,param_4 + param_1,lVar5 - lVar4);
        if (0 < lVar4) {
          func_0x0001088b550c();
          for (; lVar4 != 0; lVar4 = lVar4 + -1) {
            *param_3 = *param_4;
            param_4 = param_4 + 1;
            param_3 = param_3 + 1;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1088b55c0; end: 1088b58eb;  */

void FUN_1088b55c0(ulong param_1,undefined8 *param_2,undefined8 param_3,long param_4,long param_5)

{
  bool bVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined1 *unaff_x19;
  long *plVar5;
  undefined8 uStackY_2e8;
  undefined1 auStack_288 [24];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined1 auStack_130 [32];
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
  
  lVar4 = param_4;
  func_0x0001088b63ac();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_1e8,lVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_200,param_5);
  func_0x000107c27994(&uStack_220,param_5 + 0x18);
  func_0x000107c27fdc(&lStack_240,0x40);
  uStack_1c0 = uStack_1d8;
  uStack_190 = uStack_210;
  uStack_140 = *(undefined4 *)(param_5 + 0x48);
  uStack_1c8 = uStack_1e0;
  lStack_1d0 = lStack_1e8;
  lStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1b0 = uStack_1f8;
  uStack_1b8 = uStack_200;
  uStack_1a8 = uStack_1f0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_198 = uStack_218;
  uStack_1a0 = uStack_220;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_220 = 0;
  lStack_180 = lStack_238;
  lStack_188 = lStack_240;
  uStack_178 = uStack_230;
  uStack_170 = 0;
  lStack_240 = 0;
  lStack_238 = 0;
  uStack_230 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_248 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  func_0x000107c27914(&uStack_270);
  func_0x000107c27914(&uStack_258);
  func_0x000107c27914(&lStack_240);
  func_0x000107c27914(&uStack_220);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_1e8);
  (*(code *)*param_2)(lStack_188,lStack_180 - lStack_188,param_2);
  __ZNSt3__19to_stringEi(&uStack_e0,*(undefined4 *)(param_5 + 0x48));
  plVar5 = &lStack_188;
  FUN_1088b4c78(plVar5,param_5 + 0x30,param_4,param_5,param_3,&uStack_e0,&uStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e0);
  if (((ulong)plVar5 & 1) == 0) {
    func_0x0001088b6338();
    FUN_1088b58ec();
  }
  else {
    uStack_d8 = uStack_b0;
    uStack_e0 = uStack_b8;
    uStack_c8 = uStack_a0;
    uStack_d0 = uStack_a8;
    uStack_108 = uStack_80;
    uStack_110 = uStack_88;
    uStack_f8 = uStack_70;
    uStack_100 = uStack_78;
    uStack_e8 = uStack_90;
    uStack_f0 = uStack_98;
    FUN_1088b5104(param_1,&uStack_f0,&uStack_e0,&uStack_170);
    if ((param_1 & 1) != 0) {
      __ZNSt3__19to_stringEi(auStack_288,*(undefined4 *)(param_5 + 0x48));
      puVar2 = &uStack_110;
      FUN_1088b4ee4(puVar2,&uStack_170,param_4,param_5,&lStack_188,param_4 + 0x18,param_5 + 0x18,
                    auStack_288,auStack_130);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_288);
      bVar1 = ((ulong)puVar2 & 1) == 0;
      if (bVar1) {
        func_0x0001088b6338();
        FUN_1088b597c();
        *unaff_x19 = 0;
      }
      else {
        func_0x000107c27d00(&uStack_158,auStack_130,&uStack_110);
        func_0x0001088b6338();
        FUN_1088b5a0c();
        func_0x00010595809c();
      }
      unaff_x19[0x98] = !bVar1;
      goto LAB_1088b5834;
    }
    func_0x0001088b6338();
    FUN_1088b597c();
  }
  *unaff_x19 = 0;
  unaff_x19[0x98] = 0;
LAB_1088b5834:
  plVar3 = &lStack_1d0;
  func_0x000105956970();
  func_0x0001088b63c4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105956970(&lStack_1d0);
  func_0x0001088b6318();
  func_0x0001088b6378();
  if ((bool)in_CY) {
    func_0x0001088b62e8((long)plVar5 - *plVar3);
    func_0x0001088b62f8();
    func_0x000105957a4c();
    func_0x0001088b6350(uStackY_2e8);
    FUN_1088b5f18();
    func_0x0001088b639c();
    func_0x0001088b6360();
    plVar5 = (long *)plVar3[1];
    func_0x0001088b6348();
  }
  else {
    func_0x0001088b6350(plVar5);
    FUN_1088b5f18();
    plVar5 = plVar5 + 8;
    plVar3[1] = (long)plVar5;
  }
  plVar3[1] = (long)plVar5;
  return;
}



/* Entry: 1088b58ec; end: 1088b597b;  */

void FUN_1088b58ec(void)

{
  undefined1 in_CY;
  long *unaff_x19;
  long lVar1;
  long unaff_x24;
  undefined8 uStack_58;
  
  func_0x0001088b6378();
  if ((bool)in_CY) {
    func_0x0001088b62e8(unaff_x24 - *unaff_x19);
    func_0x0001088b62f8();
    func_0x000105957a4c();
    func_0x0001088b6350(uStack_58);
    FUN_1088b5f18();
    func_0x0001088b639c();
    func_0x0001088b6360();
    lVar1 = unaff_x19[1];
    func_0x0001088b6348();
  }
  else {
    func_0x0001088b6350();
    FUN_1088b5f18();
    lVar1 = unaff_x24 + 0x40;
    unaff_x19[1] = lVar1;
  }
  unaff_x19[1] = lVar1;
  return;
}



/* Entry: 1088b597c; end: 1088b5a0b;  */

void FUN_1088b597c(void)

{
  undefined1 in_CY;
  long *unaff_x19;
  long lVar1;
  long unaff_x24;
  undefined8 uStack_58;
  
  func_0x0001088b6378();
  if ((bool)in_CY) {
    func_0x0001088b62e8(unaff_x24 - *unaff_x19);
    func_0x0001088b62f8();
    func_0x000105957a4c();
    func_0x0001088b6350(uStack_58);
    FUN_1088b5f54();
    func_0x0001088b639c();
    func_0x0001088b6360();
    lVar1 = unaff_x19[1];
    func_0x0001088b6348();
  }
  else {
    func_0x0001088b6350();
    FUN_1088b5f54();
    lVar1 = unaff_x24 + 0x40;
    unaff_x19[1] = lVar1;
  }
  unaff_x19[1] = lVar1;
  return;
}



/* Entry: 1088b5a0c; end: 1088b5aab;  */

void FUN_1088b5a0c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_58;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    func_0x0001088b63e4(uVar2);
    lVar1 = uVar2 + 0x40;
    param_1[1] = lVar1;
  }
  else {
    func_0x0001088b62e8(uVar2 - *param_1);
    func_0x0001088b62f8();
    func_0x000105957a4c();
    func_0x0001088b63e4(uStack_58);
    func_0x0001088b639c();
    func_0x0001088b6360();
    lVar1 = param_1[1];
    func_0x0001088b6348();
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 1088b5aac; end: 1088b5ba3;  */

void FUN_1088b5aac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_120 [152];
  char cStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  func_0x000105957e3c(param_1,&uStack_68,1,&uStack_80);
  func_0x000105956800(&uStack_80);
  func_0x0001059568b8(&uStack_68);
  lVar1 = param_5[1];
  for (lVar2 = *param_5; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_1088b55c0(auStack_120,param_2,param_6,param_3,param_4,lVar2,param_1 + 0x20);
    if (cStack_88 == '\x01') {
      FUN_1088b5fe8(param_1,auStack_120);
    }
    FUN_1088b61b8(auStack_120);
  }
  return;
}



/* Entry: 1088b5ba4; end: 1088b5f17;  */

void FUN_1088b5ba4(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long unaff_x19;
  undefined8 *puVar8;
  ulong *unaff_x21;
  ulong *puVar9;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [16];
  long lStack_148;
  undefined1 auStack_130 [32];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x0001088b63ac();
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  func_0x00010595796c();
  func_0x000105956800(&uStack_188);
  puVar8 = &uStack_170;
  func_0x000107c27914(puVar8);
  puVar9 = (ulong *)(param_1 + 0x48);
  bVar2 = *(ulong *)(param_1 + 0x50) <= *puVar9;
  uVar4 = true;
  if (*puVar9 == *(ulong *)(param_1 + 0x50)) {
LAB_1088b5d4c:
    func_0x0001088b6410();
    if (!bVar2) {
      func_0x0001088b636c();
      FUN_1088b61d8();
      goto LAB_1088b5d60;
    }
    func_0x0001088b6424();
    func_0x0001088b63f0();
    func_0x000105957a4c(&uStack_b8,puVar8,
                        *(long *)(unaff_x19 + 0x28) - *(long *)(unaff_x19 + 0x20) >> 6,unaff_x21);
    func_0x0001088b636c(lStack_a8);
    FUN_1088b61d8();
    lStack_a8 = lStack_a8 + 0x40;
    func_0x0001059579cc(param_1,&uStack_b8);
    puVar8 = *(undefined8 **)(unaff_x19 + 0x28);
LAB_1088b5db8:
    func_0x000105957c2c();
  }
  else {
    unaff_x21 = (ulong *)(param_1 + 0x60);
    bVar2 = *(ulong *)(param_1 + 0x68) <= *unaff_x21;
    uVar4 = true;
    if (*unaff_x21 == *(ulong *)(param_1 + 0x68)) goto LAB_1088b5d4c;
    bVar2 = *(ulong *)(param_1 + 0x80) <= *(ulong *)(param_1 + 0x78);
    uVar4 = true;
    if (*(ulong *)(param_1 + 0x78) == *(ulong *)(param_1 + 0x80)) goto LAB_1088b5d4c;
    uVar7 = param_3[3];
    bVar2 = (ulong)param_3[4] <= uVar7;
    uVar4 = true;
    if (uVar7 == param_3[4]) goto LAB_1088b5d4c;
    bVar1 = *(byte *)(param_4 + 0x17);
    uVar4 = bVar1 == 0;
    bVar2 = true;
    uVar7 = *(ulong *)(param_4 + 8);
    if (-1 < (char)bVar1) {
      uVar7 = (ulong)bVar1;
    }
    if (uVar7 == 0) goto LAB_1088b5d4c;
    uVar7 = *(ulong *)(param_4 + 0x30);
    bVar2 = *(ulong *)(param_4 + 0x38) <= uVar7;
    uVar4 = uVar7 == *(ulong *)(param_4 + 0x38);
    if ((bool)uVar4) goto LAB_1088b5d4c;
    __ZNSt3__19to_stringEi(auStack_158,*(undefined4 *)(param_1 + 0x90));
    puVar5 = puVar9;
    FUN_1088b4c78(puVar9,(ulong *)(param_4 + 0x30),param_4,param_3,param_2,auStack_158,&uStack_b8);
    func_0x0001088b63dc();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x0001088b6320();
      FUN_1088b58ec();
      goto LAB_1088b5dc0;
    }
    uStack_d8 = uStack_b0;
    uStack_e0 = uStack_b8;
    uStack_c8 = uStack_a0;
    lStack_d0 = lStack_a8;
    uStack_108 = uStack_80;
    uStack_110 = uStack_88;
    uStack_f8 = uStack_70;
    uStack_100 = uStack_78;
    uStack_e8 = uStack_90;
    uStack_f0 = uStack_98;
    __ZNSt3__19to_stringEi(auStack_158,*(undefined4 *)(param_1 + 0x90));
    puVar8 = &uStack_110;
    FUN_1088b4ee4(puVar8,unaff_x21,param_4,param_3,puVar9,param_4 + 0x18,param_3 + 3,auStack_158,
                  auStack_130);
    func_0x0001088b63dc();
    param_3 = puVar8;
    if (((ulong)puVar8 & 1) == 0) {
      func_0x0001088b6320();
      FUN_1088b597c();
      goto LAB_1088b5dc0;
    }
    uVar7 = *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78);
    uVar3 = 0x1f < uVar7;
    uVar4 = uVar7 == 0x20;
    if (!(bool)uVar4) {
LAB_1088b5d30:
      func_0x0001088b6320();
      FUN_1088b58ec();
      *(undefined1 *)(unaff_x19 + 0x19) = 1;
      goto LAB_1088b5dc0;
    }
    puVar6 = auStack_130;
    func_0x00010ae4546c(puVar6,*(long *)(param_1 + 0x78),0x20);
    if ((int)puVar6 != 0) goto LAB_1088b5d30;
    puVar9 = unaff_x21;
    func_0x0001088b51c4(unaff_x21,&uStack_f0,&uStack_e0);
    if (((ulong)puVar9 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x18) = 1;
      func_0x0001088b6320();
      FUN_1088b5a0c();
      goto LAB_1088b5dc0;
    }
    func_0x0001088b6410();
    if ((bool)uVar3) {
      func_0x0001088b6424();
      func_0x0001088b63f0();
      func_0x000105957a4c(auStack_158,puVar9,
                          *(long *)(unaff_x19 + 0x28) - *(long *)(unaff_x19 + 0x20) >> 6,unaff_x21);
      func_0x0001088b636c(lStack_148);
      FUN_1088b6218();
      lStack_148 = lStack_148 + 0x40;
      func_0x0001059579cc(param_1,auStack_158);
      puVar8 = *(undefined8 **)(unaff_x19 + 0x28);
      goto LAB_1088b5db8;
    }
    func_0x0001088b636c();
    FUN_1088b6218();
LAB_1088b5d60:
    puVar8 = param_3 + 8;
  }
  *(undefined8 **)(unaff_x19 + 0x28) = puVar8;
LAB_1088b5dc0:
  func_0x0001088b63c4();
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 **)(unaff_x19 + 0x28) = param_3;
  func_0x0001059569b4();
  func_0x0001088b6330();
  func_0x0001088b629c();
  func_0x0001088b6404();
  func_0x0001088b6258();
  func_0x0001088b6310();
  return;
}



/* Entry: 1088b5f18; end: 1088b5f53;  */

void FUN_1088b5f18(void)

{
  func_0x0001088b629c();
  func_0x0001088b6404();
  func_0x0001088b6258();
  func_0x0001088b6310();
  return;
}



/* Entry: 1088b5f54; end: 1088b5f8f;  */

void FUN_1088b5f54(void)

{
  func_0x0001088b629c();
  func_0x0001088b6404();
  func_0x0001088b6258();
  func_0x0001088b6310();
  return;
}



/* Entry: 1088b5f90; end: 1088b5fe7;  */

undefined8 FUN_1088b5f90(undefined8 param_1)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c278b8(auStack_48,"success");
  func_0x0001088b63fc();
  func_0x0001088b6258();
  func_0x0001088b6310();
  return param_1;
}



/* Entry: 1088b5fe8; end: 1088b6027;  */

long FUN_1088b5fe8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1088b6028();
    lVar2 = uVar1 + 0x98;
  }
  else {
    lVar2 = param_1;
    FUN_1088b6060();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x98;
}



/* Entry: 1088b6028; end: 1088b605f;  */

void FUN_1088b6028(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1088b60fc(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x98;
  return;
}



/* Entry: 1088b6060; end: 1088b60fb;  */

long FUN_1088b6060(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  func_0x000105958244(param_1,(param_1[1] - *param_1) / 0x98 + 1);
  func_0x000105957f24(auStack_58,plVar1,(param_1[1] - *param_1) / 0x98,param_1 + 2);
  FUN_1088b60fc(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x98;
  func_0x000105957e98(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x0001059581d8(auStack_58);
  return lVar2;
}



/* Entry: 1088b60fc; end: 1088b61b7;  */

long FUN_1088b60fc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x18,param_2 + 0x18);
  func_0x000107c27994(param_1 + 0x30,param_2 + 0x30);
  func_0x000107c27994(param_1 + 0x48,param_2 + 0x48);
  func_0x000107c27994(param_1 + 0x60,param_2 + 0x60);
  func_0x000107c27994(param_1 + 0x78,param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  return param_1;
}



/* Entry: 1088b61b8; end: 1088b61d7;  */

void FUN_1088b61b8(long param_1)

{
  if (*(char *)(param_1 + 0x98) == '\x01') {
    func_0x000105956970();
  }
  return;
}



/* Entry: 1088b61d8; end: 1088b6217;  */

void FUN_1088b61d8(void)

{
  func_0x0001088b629c();
  func_0x0001088b63fc();
  func_0x0001088b6258();
  func_0x0001088b6310();
  return;
}



/* Entry: 1088b6218; end: 1088b6257;  */

void FUN_1088b6218(void)

{
  func_0x0001088b629c();
  func_0x0001088b63fc();
  func_0x0001088b6258();
  func_0x0001088b6310();
  return;
}



/* Entry: 1088b6258; end: 1088b6437;  */

void FUN_1088b6258(void)

{
  undefined4 *unaff_x19;
  int unaff_w20;
  undefined4 unaff_w21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *unaff_x19 = unaff_w21;
  *(long *)(unaff_x19 + 2) = (long)unaff_w20;
  *(undefined8 *)(unaff_x19 + 6) = in_stack_00000020;
  *(undefined8 *)(unaff_x19 + 4) = in_stack_00000018;
  *(undefined8 *)(unaff_x19 + 8) = in_stack_00000028;
  *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 10) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000010;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 1088b6438; end: 1088b64bf;  */

void FUN_1088b6438(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001088b6db0();
  *unaff_x19 = &PTR_FUN_110a805a0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001088b6d64();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x000107c2a26c();
  }
  unaff_x19[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000107c2a26c();
  }
  unaff_x19[4] = unaff_x21;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  unaff_x19[8] = *(undefined8 *)(unaff_x20 + 0x40);
  unaff_x19[7] = uVar4;
  unaff_x19[6] = uVar3;
  unaff_x19[5] = uVar2;
  return;
}



/* Entry: 1088b64c0; end: 1088b64ef;  */

long FUN_1088b64c0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1088b64f0(param_1);
  return param_1;
}



/* Entry: 1088b64f0; end: 1088b6527;  */

void FUN_1088b64f0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088b6528; end: 1088b652b;  */

long FUN_1088b6528(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1088b64f0(param_1);
  return param_1;
}



/* Entry: 1088b652c; end: 1088b653f;  */

void FUN_1088b652c(void)

{
  FUN_1088b64c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088b6540; end: 1088b654b;  */

undefined ** FUN_1088b6540(void)

{
  return &PTR_DAT_110a80630;
}



/* Entry: 1088b654c; end: 1088b65af;  */

void FUN_1088b654c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 1088b65b0; end: 1088b6793;  */

long * FUN_1088b65b0(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  plVar2 = param_1;
  if (param_1[5] != 0) {
    plVar3 = param_1;
    func_0x0001088b6d30();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar3);
    func_0x0001088b6d24();
    param_2 = plVar2;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x0001088b6d7c(2,param_1[3],*(undefined4 *)(param_1[3] + 0x18));
    param_2 = plVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar2 = (long *)0x3;
    func_0x0001088b6d7c(3,param_1[4],*(undefined4 *)(param_1[4] + 0x18));
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if (param_1[6] != 0) {
    func_0x0001088b6d30();
    plVar3 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x0001088b6d24();
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if (param_1[7] != 0) {
    func_0x0001088b6d30();
    plVar2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar3);
    func_0x0001088b6d24();
    param_2 = plVar2;
  }
  if (param_1[8] != 0) {
    func_0x0001088b6d30();
    param_2 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x0001088b6d24();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 1088b6794; end: 1088b6797;  */

void FUN_1088b6794(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000107c2a26c(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x000107c2a26c(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088b6798; end: 1088b6897;  */

void FUN_1088b6798(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000107c2a26c(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x000107c2a26c(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088b6898; end: 1088b68cb;  */

void FUN_1088b6898(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  ulong uVar3;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c3479c();
  FUN_1088b654c();
  uVar3 = *(ulong *)(unaff_x20 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000107c2a26c(uVar3,*(undefined8 *)(unaff_x19 + 0x18));
        *(ulong *)(unaff_x20 + 0x18) = uVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x20) == 0) {
        func_0x000107c2a26c(uVar3,*(undefined8 *)(unaff_x19 + 0x20));
        *(ulong *)(unaff_x20 + 0x20) = uVar3;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    *(long *)(unaff_x20 + 0x28) = *(long *)(unaff_x19 + 0x28);
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    *(long *)(unaff_x20 + 0x30) = *(long *)(unaff_x19 + 0x30);
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    *(long *)(unaff_x20 + 0x38) = *(long *)(unaff_x19 + 0x38);
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    *(long *)(unaff_x20 + 0x40) = *(long *)(unaff_x19 + 0x40);
  }
  *(uint *)(unaff_x20 + 0x10) = *(uint *)(unaff_x20 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088b68cc; end: 1088b68db;  */

undefined1  [16] FUN_1088b68cc(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x0001088b6d84();
  puVar1 = param_1 + 0x30;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 1088b68dc; end: 1088b693f;  */

void FUN_1088b68dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar2;
  
  func_0x0001088b6db0();
  *unaff_x19 = &PTR_FUN_110a805f0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001088b6d64();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x0001088b6ce4();
  }
  unaff_x19[3] = unaff_x21;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  unaff_x19[5] = *(undefined8 *)(unaff_x20 + 0x28);
  unaff_x19[4] = uVar2;
  return;
}



/* Entry: 1088b6940; end: 1088b696f;  */

long FUN_1088b6940(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1088b6970(param_1);
  return param_1;
}



/* Entry: 1088b6970; end: 1088b698b;  */

void FUN_1088b6970(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1089058f8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088b698c; end: 1088b698f;  */

long FUN_1088b698c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1088b6970(param_1);
  return param_1;
}



/* Entry: 1088b6990; end: 1088b69a3;  */

void FUN_1088b6990(void)

{
  FUN_1088b6940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088b69a4; end: 1088b69af;  */

undefined ** FUN_1088b69a4(void)

{
  return &PTR_DAT_110a80680;
}



/* Entry: 1088b69b0; end: 1088b69fb;  */

void FUN_1088b69b0(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_108905998(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1088b69fc; end: 1088b6ab3;  */

long * FUN_1088b69fc(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x0001088b6d7c(1,param_1[3],*(undefined4 *)(param_1[3] + 0x14));
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (param_1[4] != 0) {
    func_0x0001088b6d30();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x0001088b6d24();
    param_2 = plVar2;
  }
  if (param_1[5] != 0) {
    func_0x0001088b6d30();
    param_2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x0001088b6d24();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 1088b6ab4; end: 1088b6b2f;  */

void FUN_1088b6ab4(long param_1)

{
  int iVar1;
  int extraout_w8;
  long lVar2;
  int extraout_w9;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_1088b6b30();
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001088b6d48(0xfffffff7);
    iVar1 = extraout_w9 + iVar1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x0001088b6dc4();
    iVar1 = extraout_w8 + iVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 1088b6b30; end: 1088b6b47;  */

void FUN_1088b6b30(void)

{
  FUN_108905c1c();
  func_0x000107c34798();
  return;
}



/* Entry: 1088b6b48; end: 1088b6b4b;  */

void FUN_1088b6b48(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x0001088b6ce4(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_108905d54(*(long *)(param_1 + 0x18));
    }
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088b6b4c; end: 1088b6bf7;  */

void FUN_1088b6b4c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x0001088b6ce4(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_108905d54(*(long *)(param_1 + 0x18));
    }
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088b6bf8; end: 1088b6c2b;  */

void FUN_1088b6bf8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c3479c();
  FUN_1088b69b0();
  uVar2 = *(ulong *)(unaff_x20 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x18) == 0) {
      func_0x0001088b6ce4(uVar2,*(undefined8 *)(unaff_x19 + 0x18));
      *(ulong *)(unaff_x20 + 0x18) = uVar2;
    }
    else {
      FUN_108905d54(*(long *)(unaff_x20 + 0x18));
    }
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    *(long *)(unaff_x20 + 0x20) = *(long *)(unaff_x19 + 0x20);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    *(long *)(unaff_x20 + 0x28) = *(long *)(unaff_x19 + 0x28);
  }
  *(uint *)(unaff_x20 + 0x10) = *(uint *)(unaff_x20 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088b6c2c; end: 1088b6c4b;  */

undefined1  [16] FUN_1088b6c2c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x0001088b6d84();
  puVar1 = param_1 + 0x18;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 1088b6c4c; end: 1088b6d23;  */

void FUN_1088b6c4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x48);
  }
  *puVar1 = &PTR_FUN_110a805a0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  return;
}



/* Entry: 1088b6d24; end: 1088b6dd7;  */

void FUN_1088b6d24(byte *param_1)

{
  ulong unaff_x21;
  
  for (; 0x7f < unaff_x21; unaff_x21 = unaff_x21 >> 7) {
    *param_1 = (byte)unaff_x21 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)unaff_x21;
  return;
}



/* Entry: 1088b6dd8; end: 1088b6e5f;  */

void FUN_1088b6dd8(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_1088b6e34;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1088b71c8();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_1088b6e34;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_1088b6e34;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1088b9ec4();
    }
  }
  __ZdlPv();
LAB_1088b6e34:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 1088b6e60; end: 1088b6e8b;  */

undefined8 FUN_1088b6e60(undefined8 param_1)

{
  func_0x0001088b7780();
  FUN_1088b6e8c(param_1);
  return param_1;
}



/* Entry: 1088b6e8c; end: 1088b6e9f;  */

void FUN_1088b6e8c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_1088b6e34;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1088b71c8();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_1088b6e34;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_1088b6e34;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1088b9ec4();
    }
  }
  __ZdlPv();
LAB_1088b6e34:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 1088b6ea0; end: 1088b6eb3;  */

void FUN_1088b6ea0(void)

{
  FUN_1088b6e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088b6eb4; end: 1088b6ec3;  */

undefined8 FUN_1088b6eb4(undefined8 param_1)

{
  func_0x0001088b7780();
  FUN_1088b71f4(param_1);
  return param_1;
}



/* Entry: 1088b6ec4; end: 1088b6ff3;  */

void FUN_1088b6ec4(long param_1)

{
  ulong *puVar1;
  
  FUN_1088b6dd8();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1088b6ff4; end: 1088b700f;  */

long FUN_1088b6ff4(long param_1)

{
  long extraout_x8;
  
  func_0x0001088b9f90();
  func_0x0001088b7740();
  return param_1 + extraout_x8;
}



/* Entry: 1088b7010; end: 1088b7127;  */

void FUN_1088b7010(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) goto LAB_1088b70ec;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_1088b6dd8(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 2) {
        ppuVar1 = &PTR_PTR_11326a948;
      }
      FUN_1088b7128(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_1088b70ec;
    }
    FUN_1088b7634(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar2 != 1) goto LAB_1088b70ec;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 1) {
        ppuVar1 = &PTR_PTR_11326b2a0;
      }
      FUN_1088b9d70(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_1088b70ec;
    }
    func_0x0001088b75f8(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  *(ulong *)(param_1 + 0x10) = uVar4;
LAB_1088b70ec:
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088b7128; end: 1088b71c7;  */

void FUN_1088b7128(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_1088b76c8(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_1088b73a0(*(long *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088b71c8; end: 1088b71f3;  */

undefined8 FUN_1088b71c8(undefined8 param_1)

{
  func_0x0001088b7780();
  FUN_1088b71f4(param_1);
  return param_1;
}



/* Entry: 1088b71f4; end: 1088b7223;  */

void FUN_1088b71f4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088b73d8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088b7224; end: 1088b722f;  */

undefined ** FUN_1088b7224(void)

{
  return &PTR_DAT_110a80830;
}



/* Entry: 1088b7230; end: 1088b7277;  */

void FUN_1088b7230(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_1088b7278(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1088b7278; end: 1088b728b;  */

void FUN_1088b7278(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}


