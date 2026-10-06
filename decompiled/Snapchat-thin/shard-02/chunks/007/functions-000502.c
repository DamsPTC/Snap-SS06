/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10213242c; end: 102132637;  */

undefined4 FUN_10213242c(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0x49646574704f7369;
  if ((param_1 == 0x49646574704f7369 && param_2 == -0x16ffffffffffff92) ||
     (func_0x000107c605b8(0x49646574704f7369,0xe90000000000006e,param_1,param_2,0), (uVar2 & 1) != 0
     )) {
    func_0x000107c6142c(param_2);
    uVar1 = 0;
  }
  else {
    if ((param_1 != -0x2fffffffffffffed) || (param_2 != -0x7ffffffef0f9b440)) {
      uVar2 = 0xd000000000000013;
      func_0x000107c605b8(0xd000000000000013,0x800000010f064bc0,param_1,param_2,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000017;
        if (((param_1 == -0x2fffffffffffffe9) && (param_2 == -0x7ffffffef0f9b420)) ||
           (func_0x000107c605b8(0xd000000000000017,0x800000010f064be0,param_1,param_2,0),
           (uVar2 & 1) != 0)) {
          func_0x000107c6142c(param_2);
          return 2;
        }
        uVar2 = 0x62755365726f6373;
        if (((param_1 != 0x62755365726f6373) || (param_2 != -0x12ffff9bb68b9693)) &&
           (func_0x000107c605b8(0x62755365726f6373,0xed0000644974696d,param_1,param_2,0),
           (uVar2 & 1) == 0)) {
          uVar2 = 0;
          if (((param_1 != -0x2fffffffffffffea) || (param_2 != -0x7ffffffef0f9b400)) &&
             (func_0x000107c605b8(0xd000000000000016,0x800000010f064c00,param_1,param_2,0),
             (uVar2 & 1) == 0)) {
            uVar2 = 0x646f6874656d;
            if ((param_1 == 0x646f6874656d) && (param_2 == -0x1a00000000000000)) {
              func_0x000107c6142c(0xe600000000000000);
              return 5;
            }
            func_0x000107c605b8(0x646f6874656d,0xe600000000000000,param_1,param_2,0);
            func_0x000107c6142c(param_2);
            if ((uVar2 & 1) != 0) {
              return 5;
            }
            return 6;
          }
          func_0x000107c6142c(param_2);
          return 4;
        }
        func_0x000107c6142c(param_2);
        return 3;
      }
    }
    func_0x000107c6142c(param_2);
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 102132638; end: 102132897;  */

/* WARNING: Removing unreachable block (ram,0x000102132818) */
/* WARNING: Removing unreachable block (ram,0x00010213276c) */

void FUN_102132638(ulong *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long unaff_x21;
  long lVar9;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [40];
  ulong uStack_b0;
  ulong *puStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  undefined2 uStack_90;
  byte bStack_88;
  byte bStack_87;
  undefined1 uStack_86;
  undefined5 uStack_85;
  ulong *puStack_80;
  ulong uStack_78;
  ulong *puStack_70;
  undefined2 uStack_68;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  uVar3 = 0x112e5af20;
  func_0x0001000285a8(0x112e5af20,&UNK_10da60c08);
  lVar9 = *(long *)(uVar3 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_102131d34();
  func_0x000107c606e0(auStack_e0 + -extraout_x8,&UNK_1104cffe0,&UNK_1104cffe0,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    puVar5 = &uStack_b0;
    func_0x000107c604f8(puVar5,uVar3);
    bStack_88 = (byte)puVar5 & 1;
    uStack_b0._0_1_ = 1;
    puVar5 = &uStack_b0;
    func_0x000107c604f8(puVar5,uVar3);
    bStack_87 = (byte)puVar5 & 1;
    uStack_b0._0_1_ = 2;
    puVar5 = &uStack_b0;
    func_0x000107c604d8(puVar5,uVar3);
    uStack_86 = SUB81(puVar5,0);
    uStack_b0._0_1_ = 3;
    puVar5 = &uStack_b0;
    uVar7 = uVar3;
    func_0x000107c604d4();
    uStack_b0 = CONCAT71(uStack_b0._1_7_,4);
    puVar6 = &uStack_b0;
    uVar8 = uVar3;
    puStack_80 = puVar5;
    uStack_78 = uVar7;
    func_0x000107c604f0();
    uStack_68 = CONCAT11(uStack_68._1_1_,(char)uVar8);
    uStack_52 = 5;
    puStack_70 = puVar6;
    FUN_102133f9c();
    func_0x000107c60508(&uStack_51,&UNK_1106ba710,&uStack_52,uVar3,&UNK_1106ba710,puVar6);
    (**(code **)(lVar9 + 8))(auStack_e0 + -extraout_x8,uVar3);
    uStack_68 = CONCAT11(uStack_51,(undefined1)uStack_68);
    uStack_b0 = CONCAT53(uStack_85,CONCAT12(uStack_86,CONCAT11(bStack_87,bStack_88)));
    puStack_a8 = puStack_80;
    puStack_98 = puStack_70;
    uStack_a0 = uStack_78;
    uStack_90 = uStack_68;
    FUN_102131918(&uStack_b0,auStack_d8);
    func_0x0001000834e4(param_2);
    FUN_102131984(&bStack_88);
    param_1[1] = (ulong)puStack_a8;
    *param_1 = uStack_b0;
    param_1[3] = (ulong)puStack_98;
    param_1[2] = uStack_a0;
    *(undefined2 *)(param_1 + 4) = uStack_90;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102132898; end: 1021329d7;  */

void FUN_102132898(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5aea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60b60;
  func_0x000107c61520(&UNK_10da60b60,&UNK_1104cff50);
  puRam0000000112e5aea0 = puVar1;
  return;
}



/* Entry: 1021329d8; end: 102132e13;  */

undefined4 FUN_1021329d8(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0x62755365726f6373;
  if ((param_1 == 0x62755365726f6373 && param_2 == -0x12ffff9bb68b9693) ||
     (func_0x000107c605b8(0x62755365726f6373,0xed0000644974696d,param_1,param_2,0), (uVar2 & 1) != 0
     )) {
    func_0x000107c6142c(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    if (((param_1 == 0x6f6272656461656c) && (param_2 == -0x12ffff9bb69b8d9f)) ||
       (func_0x000107c605b8(0x6f6272656461656c,0xed00006449647261,param_1,param_2,0),
       (uVar2 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar1 = 1;
    }
    else {
      uVar2 = 0;
      if (((param_1 == 0x6449736e656c) && (param_2 == -0x1a00000000000000)) ||
         (func_0x000107c605b8(0x6449736e656c,0xe600000000000000,param_1,param_2,0), (uVar2 & 1) != 0
         )) {
        func_0x000107c6142c(param_2);
        uVar1 = 2;
      }
      else {
        uVar2 = 0x6449707061;
        if (((param_1 == 0x6449707061) && (param_2 == -0x1b00000000000000)) ||
           (func_0x000107c605b8(0x6449707061,0xe500000000000000,param_1,param_2,0), (uVar2 & 1) != 0
           )) {
          func_0x000107c6142c(param_2);
          uVar1 = 3;
        }
        else {
          if ((param_1 != -0x2fffffffffffffee) || (param_2 != -0x7ffffffef0f9b3e0)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000012,0x800000010f064c20,param_1,param_2,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0x72756f5370616e73;
              if (((param_1 == 0x72756f5370616e73) && (param_2 == -0x15ffffffffff9a9d)) ||
                 (func_0x000107c605b8(0x72756f5370616e73,0xea00000000006563,param_1,param_2,0),
                 (uVar2 & 1) != 0)) {
                func_0x000107c6142c(param_2);
                return 5;
              }
              uVar2 = 0;
              if (((param_1 == 0x72756f53736e656c) && (param_2 == -0x15ffffffffff9a9d)) ||
                 (func_0x000107c605b8(0x72756f53736e656c,0xea00000000006563,param_1,param_2,0),
                 (uVar2 & 1) != 0)) {
                func_0x000107c6142c(param_2);
                return 6;
              }
              uVar2 = 0x6174536e4974706f;
              if (((param_1 == 0x6174536e4974706f) && (param_2 == -0x14ffffffff8c8a8c)) ||
                 (func_0x000107c605b8(0x6174536e4974706f,0xeb00000000737574,param_1,param_2,0),
                 (uVar2 & 1) != 0)) {
                func_0x000107c6142c(param_2);
                return 7;
              }
              uVar2 = 0x65726f6373;
              if (((param_1 == 0x65726f6373) && (param_2 == -0x1b00000000000000)) ||
                 (func_0x000107c605b8(0x65726f6373,0xe500000000000000,param_1,param_2,0),
                 (uVar2 & 1) != 0)) {
                func_0x000107c6142c(param_2);
                return 8;
              }
              uVar2 = 0x676e69726564726f;
              if (((param_1 != 0x676e69726564726f) || (param_2 != -0x1800000000000000)) &&
                 (func_0x000107c605b8(0x676e69726564726f,0xe800000000000000,param_1,param_2,0),
                 (uVar2 & 1) == 0)) {
                uVar2 = 0x66694465726f6373;
                if (((param_1 != 0x66694465726f6373) || (param_2 != -0x16ffffffffffff9a)) &&
                   (func_0x000107c605b8(0x66694465726f6373,0xe900000000000066,param_1,param_2,0),
                   (uVar2 & 1) == 0)) {
                  uVar2 = 0x6f53657461647075;
                  if (((param_1 != 0x6f53657461647075) || (param_2 != -0x13ffffff9a9c8d8b)) &&
                     (func_0x000107c605b8(0x6f53657461647075,0xec00000065637275,param_1,param_2,0),
                     (uVar2 & 1) == 0)) {
                    uVar2 = 0x6f69647574537369;
                    if ((param_1 == 0x6f69647574537369) && (param_2 == -0x13ffffff8c919ab4)) {
                      func_0x000107c6142c(0xec000000736e654c);
                      return 0xc;
                    }
                    func_0x000107c605b8(0x6f69647574537369,0xec000000736e654c,param_1,param_2,0);
                    func_0x000107c6142c(param_2);
                    if ((uVar2 & 1) != 0) {
                      return 0xc;
                    }
                    return 0xd;
                  }
                  func_0x000107c6142c(param_2);
                  return 0xb;
                }
                func_0x000107c6142c(param_2);
                return 10;
              }
              func_0x000107c6142c(param_2);
              return 9;
            }
          }
          func_0x000107c6142c(param_2);
          uVar1 = 4;
        }
      }
    }
  }
  return uVar1;
}



/* Entry: 102132e14; end: 102133417;  */

/* WARNING: Removing unreachable block (ram,0x0001021330b0) */
/* WARNING: Removing unreachable block (ram,0x000102133008) */
/* WARNING: Removing unreachable block (ram,0x000102132f5c) */
/* WARNING: Removing unreachable block (ram,0x000102132fb4) */
/* WARNING: Removing unreachable block (ram,0x00010213305c) */
/* WARNING: Removing unreachable block (ram,0x000102133104) */
/* WARNING: Removing unreachable block (ram,0x00010213319c) */
/* WARNING: Removing unreachable block (ram,0x0001021331c0) */
/* WARNING: Removing unreachable block (ram,0x0001021331c4) */
/* WARNING: Removing unreachable block (ram,0x000102133200) */
/* WARNING: Removing unreachable block (ram,0x0001021331d8) */
/* WARNING: Removing unreachable block (ram,0x0001021331dc) */
/* WARNING: Removing unreachable block (ram,0x00010213320c) */
/* WARNING: Removing unreachable block (ram,0x000102133210) */
/* WARNING: Removing unreachable block (ram,0x0001021331e8) */
/* WARNING: Removing unreachable block (ram,0x0001021331ec) */
/* WARNING: Removing unreachable block (ram,0x00010213321c) */
/* WARNING: Removing unreachable block (ram,0x000102133220) */
/* WARNING: Removing unreachable block (ram,0x0001021331f8) */
/* WARNING: Removing unreachable block (ram,0x0001021331fc) */
/* WARNING: Removing unreachable block (ram,0x00010213332c) */
/* WARNING: Removing unreachable block (ram,0x00010213322c) */
/* WARNING: Removing unreachable block (ram,0x000102132ef0) */

void FUN_102132e14(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long extraout_x8;
  long unaff_x21;
  long lVar11;
  undefined1 auStack_250 [8];
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined1 auStack_208 [136];
  undefined8 ***pppuStack_180;
  long lStack_178;
  undefined8 ***pppuStack_170;
  long lStack_168;
  undefined8 ***pppuStack_160;
  long lStack_158;
  undefined8 ***pppuStack_150;
  long lStack_148;
  undefined8 ***pppuStack_140;
  long lStack_138;
  undefined8 ***pppuStack_130;
  long lStack_128;
  undefined8 ***pppuStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 ***pppuStack_108;
  uint uStack_100;
  undefined1 uStack_f9;
  undefined8 ***pppuStack_f8;
  long lStack_f0;
  undefined8 ***pppuStack_e8;
  long lStack_e0;
  undefined8 ***pppuStack_d8;
  long lStack_d0;
  undefined8 ***pppuStack_c8;
  long lStack_c0;
  undefined8 ***pppuStack_b8;
  long lStack_b0;
  undefined8 ***pppuStack_a8;
  long lStack_a0;
  undefined8 ***pppuStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 ***pppuStack_80;
  undefined4 uStack_78;
  
  lVar3 = 0x112e5aef8;
  func_0x0001000285a8(0x112e5aef8,&UNK_10da60c00);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_102132898();
  func_0x000107c606e0(auStack_250 + -extraout_x8,&UNK_1104cff50,&UNK_1104cff50,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    pppuStack_180 = (undefined8 ***)((ulong)pppuStack_180 & 0xffffffffffffff00);
    ppppuVar5 = &pppuStack_180;
    lVar4 = lVar3;
    func_0x000107c604f4();
    pppuStack_180._0_1_ = 1;
    ppppuVar6 = &pppuStack_180;
    lVar10 = lVar3;
    pppuStack_f8 = ppppuVar5;
    lStack_f0 = lVar4;
    func_0x000107c604f4();
    pppuStack_180._0_1_ = 2;
    ppppuVar5 = &pppuStack_180;
    lVar4 = lVar3;
    pppuStack_e8 = ppppuVar6;
    lStack_e0 = lVar10;
    func_0x000107c604f4();
    pppuStack_180._0_1_ = 3;
    ppppuVar6 = &pppuStack_180;
    lVar10 = lVar3;
    lStack_228 = lVar4;
    pppuStack_d8 = ppppuVar5;
    lStack_d0 = lVar4;
    func_0x000107c604f4();
    pppuStack_180._0_1_ = 4;
    ppppuVar5 = &pppuStack_180;
    lVar4 = lVar3;
    lStack_230 = lVar10;
    pppuStack_c8 = ppppuVar6;
    lStack_c0 = lVar10;
    func_0x000107c604f4();
    pppuStack_180._0_1_ = 5;
    ppppuVar6 = &pppuStack_180;
    lVar10 = lVar3;
    lStack_238 = lVar4;
    pppuStack_b8 = ppppuVar5;
    lStack_b0 = lVar4;
    func_0x000107c604f4();
    pppuStack_180._0_1_ = 6;
    ppppuVar5 = &pppuStack_180;
    lVar4 = lVar3;
    lStack_240 = lVar10;
    pppuStack_a8 = ppppuVar6;
    lStack_a0 = lVar10;
    func_0x000107c604f4();
    auStack_208[0] = 7;
    lStack_248 = lVar4;
    pppuStack_98 = ppppuVar5;
    lStack_90 = lVar4;
    func_0x000102133e3c();
    func_0x000107c60508(&pppuStack_180,&UNK_1106ba5f0,auStack_208,lVar3,&UNK_1106ba5f0,ppppuVar5);
    uStack_88 = pppuStack_180._0_1_;
    pppuStack_180._0_1_ = 8;
    ppppuVar5 = &pppuStack_180;
    func_0x000107c60500(ppppuVar5,lVar3);
    auStack_208[0] = 9;
    pppuStack_80 = ppppuVar5;
    func_0x000102133e7c();
    puVar7 = &UNK_1106ba560;
    func_0x000107c60508(&pppuStack_180,&UNK_1106ba560,auStack_208,lVar3,&UNK_1106ba560,ppppuVar5);
    uStack_78 = CONCAT31(uStack_78._1_3_,pppuStack_180._0_1_);
    auStack_208[0] = 10;
    func_0x000102133ebc();
    puVar8 = &UNK_1104d1100;
    func_0x000107c604e8(&pppuStack_180,&UNK_1104d1100,auStack_208,lVar3,&UNK_1104d1100,puVar7);
    uStack_78._0_2_ = CONCAT11(pppuStack_180._0_1_,(undefined1)uStack_78);
    auStack_208[0] = 0xb;
    func_0x000102133efc();
    func_0x000107c60508(&pppuStack_180,&UNK_1106ba680,auStack_208,lVar3,&UNK_1106ba680,puVar8);
    uStack_78._0_3_ = CONCAT12(pppuStack_180._0_1_,(undefined2)uStack_78);
    uStack_f9 = 0xc;
    puVar9 = &uStack_f9;
    func_0x000107c604f8(puVar9,lVar3);
    (**(code **)(lVar11 + 8))(auStack_250 + -extraout_x8,lVar3);
    uStack_78 = CONCAT13((char)puVar9,(undefined3)uStack_78) & 0x1ffffff;
    lStack_110 = CONCAT71(uStack_87,uStack_88);
    lStack_118 = lStack_90;
    pppuStack_120 = pppuStack_98;
    pppuStack_108 = pppuStack_80;
    lStack_158 = lStack_d0;
    pppuStack_160 = pppuStack_d8;
    lStack_148 = lStack_c0;
    pppuStack_150 = pppuStack_c8;
    lStack_138 = lStack_b0;
    pppuStack_140 = pppuStack_b8;
    lStack_128 = lStack_a0;
    pppuStack_130 = pppuStack_a8;
    lStack_178 = lStack_f0;
    pppuStack_180 = pppuStack_f8;
    lStack_168 = lStack_e0;
    pppuStack_170 = pppuStack_e8;
    uStack_100 = uStack_78;
    FUN_102133f3c(&pppuStack_180,auStack_208);
    func_0x0001000834e4(param_2);
    func_0x000102133f70(&pppuStack_f8);
    param_1[0xd] = lStack_118;
    param_1[0xc] = (long)pppuStack_120;
    param_1[0xf] = (long)pppuStack_108;
    param_1[0xe] = lStack_110;
    *(uint *)(param_1 + 0x10) = uStack_100;
    param_1[5] = lStack_158;
    param_1[4] = (long)pppuStack_160;
    param_1[7] = lStack_148;
    param_1[6] = (long)pppuStack_150;
    param_1[9] = lStack_138;
    param_1[8] = (long)pppuStack_140;
    param_1[0xb] = lStack_128;
    param_1[10] = (long)pppuStack_130;
    param_1[1] = lStack_178;
    *param_1 = (long)pppuStack_180;
    param_1[3] = lStack_168;
    param_1[2] = (long)pppuStack_170;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102133418; end: 10213341f;  */

void FUN_102133418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 102133420; end: 10213346b;  */

undefined1 * FUN_102133420(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_2 + 0x20);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10213346c; end: 1021334e7;  */

undefined1 * FUN_10213346c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  param_1[0x21] = param_2[0x21];
  return param_1;
}



/* Entry: 1021334e8; end: 102133543;  */

undefined1 * FUN_1021334e8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_2 + 0x20);
  return param_1;
}



/* Entry: 102133544; end: 102133607;  */

int FUN_102133544(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x22) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102133608; end: 102133657;  */

/* WARNING: Possible PIC construction at 0x00010213361c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010213362c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010213363c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102133630) */
/* WARNING: Removing unreachable block (ram,0x000102133620) */
/* WARNING: Removing unreachable block (ram,0x000102133640) */

void FUN_102133608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102133658; end: 102133713;  */

undefined8 * FUN_102133658(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  uVar6 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar6;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xf] = param_2[0xf];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  return param_1;
}



/* Entry: 102133714; end: 10213384f;  */

undefined8 * FUN_102133714(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xf] = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)((long)param_1 + 0x81) = *(undefined1 *)((long)param_2 + 0x81);
  *(undefined1 *)((long)param_1 + 0x82) = *(undefined1 *)((long)param_2 + 0x82);
  *(undefined1 *)((long)param_1 + 0x83) = *(undefined1 *)((long)param_2 + 0x83);
  return param_1;
}



/* Entry: 102133850; end: 102133883;  */

void FUN_102133850(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  return;
}



/* Entry: 102133884; end: 10213393f;  */

undefined8 * FUN_102133884(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xf] = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined2 *)((long)param_1 + 0x81) = *(undefined2 *)((long)param_2 + 0x81);
  *(undefined1 *)((long)param_1 + 0x83) = *(undefined1 *)((long)param_2 + 0x83);
  return param_1;
}



/* Entry: 102133940; end: 102133ca7;  */

int FUN_102133940(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x21] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102133ca8; end: 102133ce7;  */

void FUN_102133ca8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5aec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60a80;
  func_0x000107c61520(&UNK_10da60a80,&UNK_1104cffe0);
  puRam0000000112e5aec8 = puVar1;
  return;
}



/* Entry: 102133ce8; end: 102133ceb;  */

void FUN_102133ce8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5aed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60b38;
  func_0x000107c61520(&UNK_10da60b38,&UNK_1104cff50);
  puRam0000000112e5aed0 = puVar1;
  return;
}



/* Entry: 102133cec; end: 102133d2b;  */

void FUN_102133cec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5aed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60b38;
  func_0x000107c61520(&UNK_10da60b38,&UNK_1104cff50);
  puRam0000000112e5aed0 = puVar1;
  return;
}



/* Entry: 102133d2c; end: 102133d2f;  */

void FUN_102133d2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5aed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60ad0;
  func_0x000107c61520(&UNK_10da60ad0,&UNK_1104cff50);
  puRam0000000112e5aed8 = puVar1;
  return;
}



/* Entry: 102133d30; end: 102133d6f;  */

void FUN_102133d30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5aed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60ad0;
  func_0x000107c61520(&UNK_10da60ad0,&UNK_1104cff50);
  puRam0000000112e5aed8 = puVar1;
  return;
}



/* Entry: 102133d70; end: 102133d73;  */

void FUN_102133d70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5aee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60aa8;
  func_0x000107c61520(&UNK_10da60aa8,&UNK_1104cff50);
  puRam0000000112e5aee0 = puVar1;
  return;
}



/* Entry: 102133d74; end: 102133db3;  */

void FUN_102133d74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5aee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60aa8;
  func_0x000107c61520(&UNK_10da60aa8,&UNK_1104cff50);
  puRam0000000112e5aee0 = puVar1;
  return;
}



/* Entry: 102133db4; end: 102133db7;  */

void FUN_102133db4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5aee8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60a18;
  func_0x000107c61520(&UNK_10da60a18,&UNK_1104cffe0);
  puRam0000000112e5aee8 = puVar1;
  return;
}



/* Entry: 102133db8; end: 102133df7;  */

void FUN_102133db8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5aee8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60a18;
  func_0x000107c61520(&UNK_10da60a18,&UNK_1104cffe0);
  puRam0000000112e5aee8 = puVar1;
  return;
}



/* Entry: 102133df8; end: 102133dfb;  */

void FUN_102133df8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5aef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da609f0;
  func_0x000107c61520(&UNK_10da609f0,&UNK_1104cffe0);
  puRam0000000112e5aef0 = puVar1;
  return;
}



/* Entry: 102133dfc; end: 102133f3b;  */

void FUN_102133dfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5aef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da609f0;
  func_0x000107c61520(&UNK_10da609f0,&UNK_1104cffe0);
  puRam0000000112e5aef0 = puVar1;
  return;
}



/* Entry: 102133f3c; end: 102133f9b;  */

undefined8 FUN_102133f3c(undefined8 param_1,undefined8 param_2)

{
  FUN_102133658(param_2,param_1,&UNK_1104cfe88);
  return param_2;
}



/* Entry: 102133f9c; end: 102133fdb;  */

void FUN_102133f9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5af28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35868;
  func_0x000107c61520(&UNK_10dc35868,&UNK_1106ba710);
  puRam0000000112e5af28 = puVar1;
  return;
}



/* Entry: 102133fdc; end: 102134013;  */

undefined1 FUN_102133fdc(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 102134014; end: 1021340ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102134014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5af30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5af38) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e5af40) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e5af48) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e5af50) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021340ac; end: 102134123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021340ac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e5af30;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e5af30);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000107c5eb24();
    func_0x000107c613fc();
    func_0x000107c5eb20();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    lVar3 = 0;
  }
  func_0x000107c6157c(lVar3);
  return lVar2;
}



/* Entry: 102134124; end: 10213439f;  */

void FUN_102134124(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 auStack_f8 [24];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  
  func_0x000107c61428(param_2 + 0x10,auStack_f8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    (*param_3)(1,0);
  }
  else {
    lStack_100 = 0;
    puVar2 = &UNK_1104d0170;
    func_0x000107c613fc(&UNK_1104d0170,0x18,7);
    *(long **)(puVar2 + 0x10) = &lStack_100;
    puVar3 = &UNK_1104d0198;
    func_0x000107c613fc(&UNK_1104d0198,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_102135000;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    pcStack_c0 = FUN_10213502c;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_100e27b38;
    puStack_c8 = &UNK_1104d01b0;
    ppuVar4 = &puStack_e0;
    puStack_b8 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_b8);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar4);
    lVar1 = lStack_100;
    func_0x000107c614b0(lStack_100);
    func_0x000102134c80(&puStack_e0,param_5,param_6,lVar1);
    func_0x000107c614ac(lVar1);
    FUN_1021343a0(&puStack_e0);
    lVar1 = lStack_100;
    if (lStack_100 == 0) {
      (*param_3)(0,0);
      FUN_102135034(&puStack_e0);
      func_0x000107c61170(param_2);
    }
    else {
      uStack_110 = 0;
      uStack_108 = 0xe000000000000000;
      func_0x000107c614b0(lStack_100);
      func_0x000107c602fc(0x21);
      func_0x000107c6142c(uStack_108);
      uStack_110 = 0xd00000000000001f;
      uStack_108 = 0x800000010f064cd0;
      func_0x000107c614cc(lVar1,auStack_118,auStack_130);
      uVar5 = uStack_120;
      func_0x000107c60640(uStack_128,uStack_120);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar5);
      uVar5 = uStack_108;
      func_0x0001007d6c6c(3,uStack_110,uStack_108,param_7,&PTR_DAT_1104d00a0);
      func_0x000107c6142c(uVar5);
      func_0x000107c614b0(lVar1);
      (*param_3)(1,lVar1);
      FUN_102135034(&puStack_e0);
      func_0x000107c61170(param_2);
      func_0x000107c614ac(lVar1);
      func_0x000107c614ac(lVar1);
    }
    func_0x000107c614ac(lStack_100);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 1021343a0; end: 102134537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021343a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c614f0();
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x42);
  func_0x000107c5fb78(0xd000000000000016,0x800000010f064cf0);
  func_0x000107c5fb78(*param_1,param_1[1]);
  func_0x000107c5fb78(0x3a6449736e656c20,0xe900000000000020);
  func_0x000107c5fb78(param_1[2],param_1[3]);
  func_0x000107c5fb78(0xd000000000000011,0x800000010f064cb0);
  func_0x000107c5fb78(param_1[10],param_1[0xb]);
  func_0x000107c5fb78(0x7373656363757320,0xea0000000000203a);
  uVar1 = 0x65757274;
  if (param_1[0xd] != 0) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (param_1[0xd] != 0) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  uVar1 = uStack_48;
  func_0x0001007d6c6c(1,uStack_50,uStack_48,unaff_x20,&PTR_DAT_1104d00a0);
  func_0x000107c6142c(uVar1);
  func_0x0001000d224c(&uStack_50);
  uVar1 = uStack_50;
  func_0x0001021432a4(param_1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102134538; end: 102134647; -[_TtC27LensLeaderboardServicesImpl23SubmitScoreJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_102134538(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  puVar2 = &UNK_1104d00d0;
  func_0x000107c613fc(&UNK_1104d00d0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  lVar1 = param_4;
  FUN_102134734(param_4,param_2,FUN_102134f88,puVar2);
  func_0x000107c61574(puVar2);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 102134648; end: 1021346a7; -[_TtC27LensLeaderboardServicesImpl23SubmitScoreJobProcessor init] */

void FUN_102134648(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensLeaderboardServicesImpl.SubmitScoreJobProcessor",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102134674);
  (*pcVar1)();
}



/* Entry: 1021346a8; end: 10213470f; -[_TtC27LensLeaderboardServicesImpl23SubmitScoreJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021346e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021346e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021346a8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5af38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5af48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5af40));
  return;
}



/* Entry: 102134710; end: 102134733;  */

void FUN_102134710(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000102134720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 102134734; end: 102134ddf;  */

/* WARNING: Removing unreachable block (ram,0x000102134818) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102134734(undefined8 param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long unaff_x20;
  double dVar14;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_188;
  undefined8 uStack_180;
  double dStack_178;
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
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
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
  undefined4 uStack_80;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  lVar4 = *(long *)(unaff_x20 + _DAT_112e5af38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112e5af48);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c51f40();
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
      if (0xe < param_2 >> 0x3c) {
        func_0x0001007d6c6c(3,0xd00000000000001d,0x800000010f064b10,lVar3,&PTR_DAT_1104d00a0);
        (*param_3)(2,0);
        func_0x000107c615e8(lVar4);
        func_0x000107c615e8(lVar6);
        return 0;
      }
      uVar7 = param_1;
      func_0x00010006c00c(param_1,param_2);
      FUN_1021340ac();
      uVar8 = uVar7;
      FUN_102134f90();
      func_0x000107c5eb1c(&uStack_188,&UNK_1104cfe88,param_1,param_2,&UNK_1104cfe88,uVar8);
      func_0x000107c61574(uVar7);
      uStack_98 = uStack_120;
      uStack_a0 = uStack_128;
      uStack_88 = uStack_110;
      uStack_90 = uStack_118;
      uStack_80 = uStack_108;
      uStack_d8 = uStack_160;
      uStack_e0 = uStack_168;
      uStack_c8 = uStack_150;
      uStack_d0 = uStack_158;
      uStack_b8 = uStack_140;
      uStack_c0 = uStack_148;
      uStack_a8 = uStack_130;
      uStack_b0 = uStack_138;
      uStack_f8 = uStack_180;
      uStack_100 = uStack_188;
      uStack_e8 = uStack_170;
      dStack_f0 = dStack_178;
      func_0x000107c6071c();
      dVar14 = dStack_178 * 1000000.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102134c78);
        (*pcVar2)();
      }
      if (dVar14 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102134c7c);
        (*pcVar2)();
      }
      if (dVar14 < 9.223372036854776e+18) {
        uStack_188 = 0;
        uStack_180 = 0xe000000000000000;
        func_0x000107c602fc(0x47);
        func_0x000107c5fb78(0xd000000000000026,0x800000010f064c80);
        uVar8 = uStack_f8;
        uVar7 = uStack_100;
        func_0x000107c61434(uStack_f8);
        func_0x000107c5fb78(uVar7,uVar8);
        func_0x000107c6142c(uVar8);
        func_0x000107c5fb78(0x6449736e656c202c,0xea0000000000203a);
        uVar1 = uStack_d8;
        uVar10 = uStack_e0;
        func_0x000107c61434(uStack_d8);
        func_0x000107c5fb78(uVar10,uVar1);
        func_0x000107c6142c(uVar1);
        func_0x000107c5fb78(0xd000000000000011,0x800000010f064cb0);
        uVar8 = uStack_e8;
        dVar9 = dStack_f0;
        func_0x000107c61434(uStack_e8);
        func_0x000107c5fb78(dVar9,uVar8);
        func_0x000107c6142c(uVar8);
        uVar7 = uStack_180;
        func_0x0001007d6c6c(1,uStack_188,uStack_180,lVar3,&PTR_DAT_1104d00a0);
        func_0x000107c6142c(uVar7);
        uVar7 = uStack_d0;
        func_0x000107c5fadc(uStack_d0,uStack_c8);
        func_0x000107c5fadc(dVar9,uVar8);
        func_0x000107c5fadc(uVar10,uVar1);
        lVar5 = lVar6;
        func_0x000107c614f0();
        func_0x000100bcb214();
        puVar11 = &UNK_1104d00f8;
        func_0x000107c613fc(&UNK_1104d00f8,0x18,7);
        func_0x000107c61614(puVar11 + 0x10,unaff_x20);
        puVar12 = &UNK_1104d0120;
        func_0x000107c613fc(&UNK_1104d0120,0xc0,7);
        *(undefined8 *)(puVar12 + 0x80) = uStack_a8;
        *(undefined8 *)(puVar12 + 0x78) = uStack_b0;
        *(undefined8 *)(puVar12 + 0x90) = uStack_98;
        *(undefined8 *)(puVar12 + 0x88) = uStack_a0;
        *(undefined8 *)(puVar12 + 0xa0) = uStack_88;
        *(undefined8 *)(puVar12 + 0x98) = uStack_90;
        *(undefined8 *)(puVar12 + 0x40) = uStack_e8;
        *(double *)(puVar12 + 0x38) = dStack_f0;
        *(undefined8 *)(puVar12 + 0x50) = uStack_d8;
        *(undefined8 *)(puVar12 + 0x48) = uStack_e0;
        *(undefined8 *)(puVar12 + 0x60) = uStack_c8;
        *(undefined8 *)(puVar12 + 0x58) = uStack_d0;
        *(undefined8 *)(puVar12 + 0x70) = uStack_b8;
        *(undefined8 *)(puVar12 + 0x68) = uStack_c0;
        *(undefined **)(puVar12 + 0x10) = puVar11;
        *(code **)(puVar12 + 0x18) = param_3;
        *(undefined8 *)(puVar12 + 0x20) = param_4;
        *(undefined4 *)(puVar12 + 0xa8) = uStack_80;
        *(undefined8 *)(puVar12 + 0x30) = uStack_f8;
        *(undefined8 *)(puVar12 + 0x28) = uStack_100;
        *(long *)(puVar12 + 0xb0) = (long)dVar14;
        *(long *)(puVar12 + 0xb8) = lVar3;
        pcStack_1a0 = FUN_102134fd0;
        puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1b8 = 0x42000000;
        pcStack_1b0 = FUN_10213e1f0;
        puStack_1a8 = &UNK_1104d0138;
        ppuVar13 = &puStack_1c0;
        puStack_198 = puVar12;
        func_0x000107c60bc4();
        puVar11 = puStack_198;
        func_0x000107c6157c(param_4);
        FUN_102133f3c(&uStack_100,&uStack_188);
        func_0x000107c61574(puVar11);
        func_0x000107c5c2c8(lVar4);
        func_0x000107c60bd0(ppuVar13);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(dVar9);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(lVar5);
        func_0x000102133f70(&uStack_100);
        func_0x0001000b44c0(param_1,param_2);
        func_0x000107c615e8(lVar4);
        func_0x000107c615e8(lVar6);
        return 0;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102134c80);
      (*pcVar2)();
    }
    func_0x000107c615e8(lVar4);
  }
  func_0x0001007d6c6c(3,0xd000000000000014,0x800000010f064af0,lVar3,&PTR_DAT_1104d00a0);
  (*param_3)(1,0);
  return 0;
}



/* Entry: 102134de0; end: 102134f67;  */

undefined * FUN_102134de0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b7228;
  func_0x000107c610f8(PTR_PTR_1126b7228);
  func_0x000107c453e4();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f064910);
  func_0x000107c5597c(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c55960(puVar1);
  func_0x000107c55968(puVar1);
  func_0x000107c54734(puVar1);
  puVar3 = PTR_PTR_1126b7240;
  func_0x000107c610f8(PTR_PTR_1126b7240);
  func_0x000107c453e4();
  func_0x000107c56a40();
  puVar4 = PTR_PTR_1126ae740;
  func_0x000107c610f8(PTR_PTR_1126ae740);
  func_0x000107c453e4();
  func_0x000107c3d810();
  func_0x000107c3d810(puVar4);
  func_0x000107c527c4(puVar3);
  func_0x000107c5277c(puVar3);
  func_0x000107c55958(puVar1);
  puVar5 = PTR_PTR_1126b7230;
  func_0x000107c610f8(PTR_PTR_1126b7230);
  func_0x000107c453e4();
  func_0x000107c57ed0();
  func_0x000107c57ecc(puVar5);
  func_0x000107c56358(puVar5);
  func_0x000107c57ec0(puVar1);
  puVar6 = PTR_PTR_1126b7238;
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  func_0x000107c57f50();
  func_0x000107c55974(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  return puVar1;
}



/* Entry: 102134f68; end: 102134f87;  */

void FUN_102134f68(void)

{
  func_0x000107c61168(&PTR_PTR_112820470);
  return;
}



/* Entry: 102134f88; end: 102134f8f;  */

void FUN_102134f88(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102134f90; end: 102134fcf;  */

void FUN_102134f90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5af80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60960;
  func_0x000107c61520(&UNK_10da60960,&UNK_1104cfe88);
  puRam0000000112e5af80 = puVar1;
  return;
}



/* Entry: 102134fd0; end: 102134fff;  */

void FUN_102134fd0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 auStack_f8 [24];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xb8);
  func_0x000107c61428(lVar4 + 0x10,auStack_f8,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    (*pcVar1)(1,0);
  }
  else {
    lStack_100 = 0;
    puVar5 = &UNK_1104d0170;
    func_0x000107c613fc(&UNK_1104d0170,0x18,7);
    *(long **)(puVar5 + 0x10) = &lStack_100;
    puVar6 = &UNK_1104d0198;
    func_0x000107c613fc(&UNK_1104d0198,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_102135000;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    pcStack_c0 = FUN_10213502c;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_100e27b38;
    puStack_c8 = &UNK_1104d01b0;
    ppuVar7 = &puStack_e0;
    puStack_b8 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_b8);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar7);
    lVar3 = lStack_100;
    func_0x000107c614b0(lStack_100);
    func_0x000102134c80(&puStack_e0,unaff_x20 + 0x28,uVar8,lVar3);
    func_0x000107c614ac(lVar3);
    FUN_1021343a0(&puStack_e0);
    lVar3 = lStack_100;
    if (lStack_100 == 0) {
      (*pcVar1)(0,0);
      FUN_102135034(&puStack_e0);
      func_0x000107c61170(lVar4);
    }
    else {
      uStack_110 = 0;
      uStack_108 = 0xe000000000000000;
      func_0x000107c614b0(lStack_100);
      func_0x000107c602fc(0x21);
      func_0x000107c6142c(uStack_108);
      uStack_110 = 0xd00000000000001f;
      uStack_108 = 0x800000010f064cd0;
      func_0x000107c614cc(lVar3,auStack_118,auStack_130);
      uVar8 = uStack_120;
      func_0x000107c60640(uStack_128,uStack_120);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar8);
      uVar8 = uStack_108;
      func_0x0001007d6c6c(3,uStack_110,uStack_108,uVar2,&PTR_DAT_1104d00a0);
      func_0x000107c6142c(uVar8);
      func_0x000107c614b0(lVar3);
      (*pcVar1)(1,lVar3);
      FUN_102135034(&puStack_e0);
      func_0x000107c61170(lVar4);
      func_0x000107c614ac(lVar3);
      func_0x000107c614ac(lVar3);
    }
    func_0x000107c614ac(lStack_100);
    func_0x000107c61574(puVar5);
  }
  return;
}



/* Entry: 102135000; end: 10213502b;  */

void FUN_102135000(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c614b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(uVar1);
  return;
}



/* Entry: 10213502c; end: 102135033;  */

void FUN_10213502c(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102135034; end: 102135067;  */

undefined8 FUN_102135034(undefined8 param_1)

{
  FUN_1021439d8();
  return param_1;
}



/* Entry: 102135068; end: 10213506f;  */

void FUN_102135068(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102135070; end: 1021350bf;  */

void FUN_102135070(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021350c0; end: 102135193;  */

void FUN_1021350c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126b7800;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c539f8();
  uVar2 = 0x112e5af88;
  puStack_48 = puVar1;
  func_0x0001000285a8(0x112e5af88,&UNK_10da60c40);
  func_0x000107c613fc();
  ppuVar3 = &puStack_48;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + 0x20) = ppuVar3;
  puVar1 = PTR_PTR_1126b7800;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c539f8();
  puStack_48 = puVar1;
  func_0x000107c613fc(uVar2,0x20,7);
  ppuVar3 = &puStack_48;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + 0x28) = ppuVar3;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 102135194; end: 10213557b;  */

void FUN_102135194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,char param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *unaff_x20;
  undefined8 uVar14;
  long alStack_a0 [2];
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *unaff_x20;
  if (param_5 == 0) {
LAB_10213533c:
    uStack_90 = 0;
    uStack_88 = 0xe000000000000000;
    func_0x000107c602fc(0x2b);
    func_0x000107c6142c(uStack_88);
    uStack_90 = 0xd000000000000029;
    uStack_88 = 0x800000010f064d10;
    func_0x000107c5fb78(param_3,param_4);
    uVar2 = uStack_88;
    func_0x0001007d6c6c(1,uStack_90,uStack_88,uVar14,&PTR_DAT_1104d0230);
    func_0x000107c6142c(uVar2);
  }
  else {
    uStack_88 = 0xf000000000000000;
    uStack_90 = 0;
    func_0x000107c5ee2c(param_5,&uStack_90);
    uVar2 = uStack_88;
    uVar1 = uStack_90;
    if (0xe < uStack_88 >> 0x3c) goto LAB_10213533c;
    lVar6 = 0;
    FUN_1021358e4(0,0x112e5af90,&PTR_PTR_1126be180);
    func_0x000107c614e8();
    uVar7 = uVar1;
    func_0x000107c5ee20(uVar1,uVar2);
    uStack_90 = 0;
    func_0x000107c4e380();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    uVar7 = uStack_90;
    if (lVar6 == 0) {
      uVar11 = uStack_90;
      func_0x000107c61174();
      func_0x000107c5ed30(uVar7);
      func_0x000107c61170(uVar11);
      func_0x000107c61654();
      func_0x0001000b44c0(uVar1,uVar2);
      func_0x000107c614ac(uVar7);
      goto LAB_10213533c;
    }
    func_0x000107c61174();
    lVar8 = lVar6;
    func_0x000107c447a8();
    if (((int)lVar8 == 0) || (lVar8 = lVar6, func_0x000107c449d4(), (int)lVar8 == 0)) {
LAB_1021352e8:
      func_0x000107c61170(lVar6);
      func_0x0001000b44c0(uVar1,uVar2);
      goto LAB_10213533c;
    }
    lVar8 = lVar6;
    func_0x000107c3fbb4();
    func_0x000107c61180();
    if (lVar8 == 0) goto LAB_1021352e8;
    lVar9 = lVar6;
    func_0x000107c4db1c();
    func_0x000107c61180();
    if (lVar9 == 0) goto LAB_102135578;
    lVar10 = lVar9;
    func_0x000107c5dc0c();
    func_0x000107c61170(lVar9);
    lVar9 = lVar8;
    func_0x000107c519c8();
    if (param_6 == '\x02') {
      bVar5 = SBORROW8(lVar9,lVar10);
      lVar13 = lVar9 - lVar10;
    }
    else {
      bVar5 = SBORROW8(lVar10,lVar9);
      lVar13 = lVar10 - lVar9;
    }
    if (lVar13 < 0 == bVar5) {
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar8);
      func_0x0001000b44c0(uVar1,uVar2);
    }
    else {
      lVar12 = 0;
      FUN_10213557c();
      lVar13 = lVar12;
      func_0x000107c613fc();
      *(undefined8 *)(lVar13 + 0x10) = param_1;
      *(undefined8 *)(lVar13 + 0x18) = param_2;
      *(long *)(lVar13 + 0x20) = lVar10;
      *(long *)(lVar13 + 0x28) = lVar9;
      uStack_90 = 0;
      uStack_88 = 0xe000000000000000;
      func_0x000107c61434();
      func_0x000107c602fc(0x25);
      func_0x000107c5fb78(0xd000000000000013,0x800000010f064d40);
      alStack_a0[0] = lVar13;
      func_0x000107c603d0(alStack_a0,&uStack_90,lVar12,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x6272656461656c20,0xee00203a6472616f);
      func_0x000107c5fb78(param_3,param_4);
      uVar3 = uStack_88;
      func_0x0001007d6c6c(1,uStack_90,uStack_88,uVar14,&PTR_DAT_1104d0230);
      func_0x000107c6142c(uVar3);
      uVar14 = unaff_x20[4];
      lStack_80 = lVar13;
      uStack_78 = param_3;
      uStack_70 = param_4;
      func_0x000107c6157c(uVar14);
      func_0x000100075034(FUN_10213559c,&uStack_90,PTR___sytN_11034f1b0 + 8);
      func_0x0001000b44c0(uVar1,uVar2);
      func_0x000107c61574(lVar13);
      func_0x000107c61574(uVar14);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar6);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
LAB_102135578:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10213557c);
  (*pcVar4)();
}



/* Entry: 10213557c; end: 10213559b;  */

void FUN_10213557c(void)

{
  func_0x000107c61168(&PTR_PTR_112e5b0b0);
  return;
}



/* Entry: 10213559c; end: 1021355f3;  */

void FUN_10213559c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *param_1;
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c56bcc(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1021355f4; end: 1021358e3;  */

void FUN_1021355f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined1 param_6)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *unaff_x20;
  if (param_5 != 0) {
    plStack_a8 = (long *)0xf000000000000000;
    plStack_b0 = (long *)0x0;
    func_0x000107c5ee2c(param_5,&plStack_b0);
    plVar7 = plStack_a8;
    plVar1 = plStack_b0;
    if ((ulong)plStack_a8 >> 0x3c < 0xf) {
      lVar2 = 0;
      FUN_1021358e4(0,0x112e5af98,&PTR_PTR_1126be190);
      func_0x000107c614e8();
      plVar3 = plVar1;
      func_0x000107c5ee20(plVar1,plVar7);
      plStack_b0 = (long *)0x0;
      func_0x000107c4e380();
      func_0x000107c61180();
      func_0x000107c61170(plVar3);
      plVar3 = plStack_b0;
      if (lVar2 == 0) {
        plVar6 = plStack_b0;
        func_0x000107c61174();
        func_0x000107c5ed30(plVar3);
        func_0x000107c61170(plVar6);
        func_0x000107c61654();
        func_0x0001000b44c0(plVar1,plVar7);
        func_0x000107c614ac(plVar3);
      }
      else {
        func_0x000107c61174();
        lVar4 = lVar2;
        func_0x000107c4aca4();
        func_0x000107c61180();
        if (lVar4 == 0) {
LAB_1021357b8:
          func_0x000107c61170(lVar2);
        }
        else {
          plStack_b0 = (long *)0x0;
          uVar5 = 0;
          FUN_1021358e4(0,0x112e5afa0,&PTR_PTR_1126a9f18);
          func_0x000107c5fc50(lVar4,&plStack_b0,uVar5);
          func_0x000107c61170(lVar4);
          plVar3 = plStack_b0;
          if (plStack_b0 == (long *)0x0) goto LAB_1021357b8;
          if ((ulong)plStack_b0 >> 0x3e != 0) {
            plVar6 = plStack_b0;
            if (-1 < (long)plStack_b0) {
              plVar6 = (long *)((ulong)plStack_b0 & 0xffffffffffffff8);
            }
            func_0x000107c60480();
            if (plVar6 == (long *)0x0) goto LAB_1021358cc;
LAB_10213573c:
            uVar8 = unaff_x20[5];
            plStack_90 = plVar3;
            uStack_a0 = param_3;
            uStack_98 = param_4;
            uStack_88 = param_6;
            uStack_80 = param_1;
            uStack_78 = param_2;
            func_0x000107c6157c(uVar8);
            plVar6 = (long *)(PTR___sytN_11034f1b0 + 8);
            func_0x000100075034(FUN_1021359e4,&plStack_b0);
            func_0x000107c6142c(plVar3);
            func_0x000107c61574(uVar8);
            FUN_102135a08(param_1,param_2);
            func_0x000107c61170(lVar2);
            func_0x0001000b44c0(plVar1);
            goto LAB_102135880;
          }
          if (((long *)((ulong)plStack_b0 & 0xffffffffffffff8))[2] != 0) goto LAB_10213573c;
LAB_1021358cc:
          func_0x000107c61170(lVar2);
          func_0x000107c6142c(plVar3);
        }
        func_0x0001000b44c0(plVar1,plVar7);
      }
    }
  }
  plStack_b0 = (long *)0x0;
  plStack_a8 = (long *)0xe000000000000000;
  func_0x000107c602fc(0x4d);
  func_0x000107c5fb78(0xd00000000000004b,0x800000010f064d60);
  func_0x000107c5fb78(param_1,param_2);
  plVar1 = plStack_a8;
  plVar7 = plStack_b0;
  plVar6 = plStack_a8;
  func_0x0001007d6c6c(1,plStack_b0,plStack_a8,uVar8,&PTR_DAT_1104d0230);
  func_0x000107c6142c(plVar1);
LAB_102135880:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  if (*plVar7 != 0) {
    return;
  }
  lVar2 = *plVar6;
  func_0x000107c61168();
  func_0x000107c614ec();
  *plVar7 = lVar2;
  return;
}



/* Entry: 1021358e4; end: 102135923;  */

void FUN_1021358e4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102135924; end: 1021359e3;  */

void FUN_102135924(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  lVar1 = 0;
  FUN_102136764();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined1 *)(lVar1 + 0x28) = param_5;
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_4);
  func_0x000107c5fadc(param_6,param_7);
  func_0x000107c56bcc(uVar2);
  func_0x000107c61574(lVar1);
  func_0x000107c61170(param_6);
  return;
}



/* Entry: 1021359e4; end: 102135a07;  */

void FUN_1021359e4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102135924(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 102135a08; end: 10213605f;  */

void FUN_102135a08(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined **ppuVar4;
  char cVar5;
  long lVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined8 *unaff_x20;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined8 uVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long alStack_70 [2];
  
  uVar23 = *unaff_x20;
  uVar19 = unaff_x20[4];
  puStack_a0 = (undefined *)param_1;
  puStack_98 = (undefined *)param_2;
  func_0x000107c6157c(uVar19);
  uVar20 = 0x112e5afa8;
  func_0x0001000285a8(0x112e5afa8,&UNK_10da60c48);
  func_0x000100075034(alStack_70,0x1021367ac,&puStack_b0,uVar20);
  func_0x000107c61574(uVar19);
  lVar6 = alStack_70[0];
  uVar19 = unaff_x20[5];
  puStack_a0 = (undefined *)param_1;
  puStack_98 = (undefined *)param_2;
  func_0x000107c6157c(uVar19);
  uVar20 = 0x112e5afb0;
  func_0x0001000285a8(0x112e5afb0,&UNK_10da60c50);
  ppuVar16 = &puStack_b0;
  func_0x000100075034(alStack_70,FUN_1021360c4,ppuVar16,uVar20);
  func_0x000107c61574(uVar19);
  lVar17 = alStack_70[0];
  if ((lVar6 == 0) || (alStack_70[0] == 0)) {
    func_0x0001007d6c6c(1,0xd000000000000049,0x800000010f064db0,uVar23,&PTR_DAT_1104d0230);
    func_0x000107c61574(lVar6);
  }
  else {
    ppuVar2 = *(undefined ***)(alStack_70[0] + 0x10);
    ppuVar4 = *(undefined ***)(alStack_70[0] + 0x18);
    ppuVar25 = *(undefined ***)(alStack_70[0] + 0x20);
    cVar5 = *(char *)(alStack_70[0] + 0x28);
    ppuVar22 = (undefined **)((ulong)ppuVar25 & 0xffffffffffffff8);
    if ((ulong)ppuVar25 >> 0x3e == 0) {
      ppuVar24 = (undefined **)ppuVar22[2];
    }
    else {
      ppuVar24 = ppuVar22;
      if ((undefined **)0x7fffffffffffffff < ppuVar25) {
        ppuVar24 = ppuVar25;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(ppuVar4);
    func_0x000107c61434(ppuVar25);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (ppuVar24 != (undefined **)0x0) {
      ppuVar21 = (undefined **)0x0;
      do {
        while( true ) {
          if (((ulong)ppuVar25 & 0xc000000000000001) == 0) {
            if (ppuVar22[2] <= ppuVar21) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10213604c);
              (*pcVar7)();
            }
            ppuVar8 = (undefined **)ppuVar25[(long)ppuVar21 + 4];
            func_0x000107c61174();
            ppuVar18 = ppuVar16;
          }
          else {
            ppuVar8 = ppuVar21;
            ppuVar18 = ppuVar25;
            func_0x000102136518();
          }
          ppuVar1 = (undefined **)((long)ppuVar21 + 1);
          if (SCARRY8((long)ppuVar21,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x102136048);
            (*pcVar7)();
          }
          ppuVar9 = ppuVar8;
          func_0x000107c5d984();
          func_0x000107c61180();
          ppuVar16 = ppuVar18;
          if (ppuVar9 != (undefined **)0x0) break;
LAB_102135bd8:
          func_0x000107c61170(ppuVar8);
LAB_102135be0:
          ppuVar21 = (undefined **)((long)ppuVar21 + 1);
          if (ppuVar1 == ppuVar24) goto LAB_102135d38;
        }
        ppuVar10 = ppuVar9;
        func_0x000107c5faec();
        ppuVar16 = ppuVar18;
        func_0x000107c61170(ppuVar9);
        uVar3 = (ulong)ppuVar10 & 0xffffffffffff;
        if (((ulong)ppuVar18 & 0x2000000000000000) != 0) {
          uVar3 = (ulong)ppuVar18 >> 0x38 & 0xf;
        }
        if ((uVar3 == 0) ||
           (((ppuVar10 == ppuVar2 && (ppuVar18 == ppuVar4)) ||
            (ppuVar9 = ppuVar10, ppuVar16 = ppuVar18,
            func_0x000107c605b8(ppuVar10,ppuVar18,ppuVar2,ppuVar4,0), ((ulong)ppuVar9 & 1) != 0))))
        {
          func_0x000107c6142c(ppuVar18);
          goto LAB_102135bd8;
        }
        ppuVar9 = ppuVar8;
        func_0x000107c519c8();
        func_0x000107c61170(ppuVar8);
        if (cVar5 != '\x02') {
          if ((*(long *)(lVar6 + 0x20) <= (long)ppuVar9) &&
             ((long)ppuVar9 < *(long *)(lVar6 + 0x28))) goto LAB_102135c68;
LAB_102135c4c:
          func_0x000107c6142c(ppuVar18);
          goto LAB_102135be0;
        }
        if (((long)ppuVar9 <= *(long *)(lVar6 + 0x28)) || (*(long *)(lVar6 + 0x20) < (long)ppuVar9))
        goto LAB_102135c4c;
LAB_102135c68:
        puVar11 = puVar15;
        func_0x000107c61558();
        puVar12 = puVar15;
        if (((ulong)puVar11 & 1) == 0) {
          ppuVar16 = (undefined **)(*(long *)(puVar15 + 0x10) + 1);
          puVar12 = (undefined *)0x0;
          func_0x0001000d182c(0,ppuVar16,1,puVar15);
        }
        uVar3 = *(ulong *)(puVar12 + 0x10);
        ppuVar21 = (undefined **)(uVar3 + 1);
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar3) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
          ppuVar16 = ppuVar21;
          func_0x0001000d182c(puVar12,ppuVar21,1);
        }
        *(undefined ***)(puVar12 + 0x10) = ppuVar21;
        *(undefined ***)(puVar12 + uVar3 * 0x10 + 0x20) = ppuVar10;
        *(undefined ***)(puVar12 + uVar3 * 0x10 + 0x28) = ppuVar18;
        puVar15 = puVar12;
        ppuVar21 = ppuVar1;
      } while (ppuVar1 != ppuVar24);
    }
LAB_102135d38:
    func_0x000107c6142c(ppuVar25);
    func_0x000107c6142c(ppuVar4);
    if (*(long *)(puVar15 + 0x10) == 0) {
      func_0x000107c6142c(puVar15);
    }
    else {
      func_0x0001000d224c(&puStack_b0);
      puVar11 = puStack_b0;
      if (puStack_b0 == (undefined *)0x0) {
        func_0x000107c6142c(puVar15);
      }
      else {
        func_0x0001000d224c(&puStack_b0);
        puVar12 = puStack_b0;
        if (puStack_b0 == (undefined *)0x0) {
          func_0x000107c6142c(puVar15);
          func_0x000107c615e8(puVar11);
        }
        else {
          puStack_b0 = (undefined *)0x0;
          uStack_a8 = 0xe000000000000000;
          func_0x000107c602fc(0x46);
          func_0x000107c5fb78(0x2074616542,0xe500000000000000);
          alStack_70[0] = *(long *)(puVar15 + 0x10);
          puVar13 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar13);
          func_0x000107c5fb78(0xd00000000000002a,0x800000010f064e00);
          func_0x000107c5fb78(*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18));
          func_0x000107c5fb78(0xd000000000000011,0x800000010f064cb0);
          func_0x000107c5fb78(param_1,param_2);
          uVar20 = uStack_a8;
          func_0x0001007d6c6c(1,puStack_b0,uStack_a8,uVar23,&PTR_DAT_1104d0230);
          func_0x000107c6142c(uVar20);
          uVar20 = *(undefined8 *)(lVar6 + 0x10);
          uVar19 = *(undefined8 *)(lVar6 + 0x18);
          func_0x000107c61434(uVar19);
          func_0x000107c5fadc(uVar20,uVar19);
          func_0x000107c6142c(uVar19);
          uVar19 = param_1;
          func_0x000107c5fadc(param_1,param_2);
          puVar13 = puVar15;
          func_0x000107c5fc48(puVar15,PTR___sSSN_11034da80);
          func_0x000107c6142c(puVar15);
          puVar14 = puVar12;
          func_0x000107c614f0(puVar12);
          func_0x000100bcb214();
          puVar15 = &UNK_1104d01f0;
          func_0x000107c613fc(&UNK_1104d01f0,0x18,7);
          *(undefined8 *)(puVar15 + 0x10) = uVar23;
          pcStack_90 = FUN_1021366f0;
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0x42000000;
          puStack_a0 = &UNK_100ff4e10;
          puStack_98 = &UNK_1104d0208;
          ppuVar16 = &puStack_b0;
          puStack_88 = puVar15;
          func_0x000107c60bc4(ppuVar16);
          func_0x000107c61574(puStack_88);
          func_0x000107c51df8(puVar11);
          func_0x000107c60bd0(ppuVar16);
          func_0x000107c615e8(puVar11);
          func_0x000107c615e8(puVar12);
          func_0x000107c61170(uVar20);
          func_0x000107c61170(uVar19);
          func_0x000107c61170(puVar13);
          func_0x000107c61170(puVar14);
        }
      }
    }
    uVar20 = unaff_x20[4];
    puStack_a0 = (undefined *)param_1;
    puStack_98 = (undefined *)param_2;
    func_0x000107c6157c(uVar20);
    func_0x000100075034(FUN_1021366dc,&puStack_b0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar20);
    func_0x000107c61574(lVar17);
    lVar17 = lVar6;
  }
  func_0x000107c61574(lVar17);
  return;
}



/* Entry: 102136060; end: 1021360c3;  */

void FUN_102136060(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021360c4; end: 1021360db;  */

void FUN_1021360c4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102136060(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1021360dc; end: 10213626b;  */

void FUN_1021360dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c614b0();
    func_0x000107c602fc(0x34);
    func_0x000107c5fb78(0xd000000000000032,0x800000010f064e60);
    uVar1 = 0x112d393f0;
    lStack_48 = param_1;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&lStack_48,&uStack_40,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar1 = uStack_38;
    func_0x0001007d6c6c(3,uStack_40,uStack_38,param_2,&PTR_DAT_1104d0230);
    func_0x000107c6142c(uVar1);
    func_0x000107c614ac(param_1);
  }
  return;
}



/* Entry: 10213626c; end: 1021362a7;  */

void FUN_10213626c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021362a8; end: 1021362cb;  */

void FUN_1021362a8(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001021362b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1021362cc; end: 1021366db;  */

undefined * FUN_1021362cc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021363ec);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112e5b1d0;
    func_0x0001000285a8(0x112e5b1d0,&UNK_10da60e10);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x70) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1106ba238);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x70 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar2;
}



/* Entry: 1021366dc; end: 1021366ef;  */

void FUN_1021366dc(void)

{
  FUN_102136714();
  return;
}



/* Entry: 1021366f0; end: 102136713;  */

void FUN_1021366f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c614b0();
    func_0x000107c602fc(0x34);
    func_0x000107c5fb78(0xd000000000000032,0x800000010f064e60);
    uVar1 = 0x112d393f0;
    lStack_48 = param_1;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&lStack_48,&uStack_40,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar1 = uStack_38;
    func_0x0001007d6c6c(3,uStack_40,uStack_38,uVar2,&PTR_DAT_1104d0230);
    func_0x000107c6142c(uVar1);
    func_0x000107c614ac(param_1);
  }
  return;
}



/* Entry: 102136714; end: 102136763;  */

void FUN_102136714(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *param_1;
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c4ff88(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102136764; end: 1021367e7;  */

void FUN_102136764(void)

{
  func_0x000107c61168(&PTR_PTR_112e5b160);
  return;
}



/* Entry: 1021367e8; end: 102136963;  */

void FUN_1021367e8(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
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
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined8 uStack_100;
  undefined1 auStack_f8 [24];
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
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined8 uStack_60;
  
  func_0x000107c61428(param_1 + 0x48,auStack_f8,0x20,0);
  lVar6 = *(long *)(param_1 + 0x48);
  if (*(long *)(lVar6 + 0x10) != 0) {
    func_0x000107c61434(lVar6);
    lVar1 = param_2;
    uVar3 = param_3;
    func_0x000100029284();
    if ((uVar3 & 1) == 0) {
      func_0x000107c6142c(lVar6);
    }
    else {
      puVar4 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar1 * 0x88);
      uStack_178 = puVar4[1];
      uStack_180 = *puVar4;
      uStack_148 = puVar4[7];
      uStack_150 = puVar4[6];
      uStack_138 = puVar4[9];
      uStack_140 = puVar4[8];
      uStack_168 = puVar4[3];
      uStack_170 = puVar4[2];
      uStack_158 = puVar4[5];
      uStack_160 = puVar4[4];
      uStack_128 = puVar4[0xb];
      uStack_130 = puVar4[10];
      uStack_120 = puVar4[0xc];
      uStack_100 = puVar4[0x10];
      uStack_118 = (undefined1)puVar4[0xd];
      uStack_117 = (undefined7)((ulong)puVar4[0xd] >> 8);
      uStack_108 = (undefined1)puVar4[0xf];
      uStack_107 = (undefined7)((ulong)puVar4[0xf] >> 8);
      uStack_110 = (undefined1)puVar4[0xe];
      uStack_10f = (undefined7)((ulong)puVar4[0xe] >> 8);
      FUN_10213dce4(&uStack_180,&uStack_e0);
      func_0x000107c614a8(auStack_f8);
      func_0x000107c6142c(lVar6);
      uStack_98 = uStack_138;
      uStack_a0 = uStack_140;
      uStack_88 = uStack_128;
      uStack_90 = uStack_130;
      uStack_78 = uStack_118;
      uStack_80 = uStack_120;
      uStack_6f = CONCAT17(uStack_108,uStack_10f);
      uStack_77 = uStack_117;
      uStack_70 = uStack_110;
      uStack_d8 = uStack_178;
      uStack_e0 = uStack_180;
      uStack_c8 = uStack_168;
      uStack_d0 = uStack_170;
      uStack_b8 = uStack_158;
      uStack_c0 = uStack_160;
      uStack_a8 = uStack_148;
      uStack_b0 = uStack_150;
      uStack_60 = 0;
      func_0x000107c61428(param_1 + 0x48,auStack_f8,0x21,0);
      func_0x000107c61434(param_3);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      func_0x000107c61558(uVar2);
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0x8000000000000000;
      FUN_10213b674(&uStack_e0,param_2,param_3,uVar2);
      func_0x000107c6142c(param_3);
      *(undefined8 *)(param_1 + 0x48) = uVar5;
    }
  }
  func_0x000107c614a8(auStack_f8);
  return;
}



/* Entry: 102136964; end: 102136b3f;  */

void FUN_102136964(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0xa0);
  puVar3 = &UNK_1104d04a0;
  func_0x000107c613fc(&UNK_1104d04a0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  pcStack_70 = FUN_10213dd74;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1104d04b8;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61434(param_2);
  func_0x000107c6157c();
  func_0x000107c61434(param_1);
  func_0x000107c5f808(lVar8);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar5 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar6 = uVar5;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar7,&puStack_98,uVar5,uVar6,lVar1,param_1);
  func_0x000107c5ffe8(0,lVar8,lVar7,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lVar10 + 8))(lVar7,lVar1);
  (**(code **)(lVar9 + 8))(lVar8,lVar2);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 102136b40; end: 102136b93;  */

void FUN_102136b40(long param_1,undefined8 param_2,long param_3)

{
  long lStack_38;
  
  if (param_1 != 0) {
    lStack_38 = param_1;
    func_0x0001007d6d78(&lStack_38);
  }
  lStack_38 = param_3;
  func_0x0001007d6d78(&lStack_38);
  return;
}



/* Entry: 102136b94; end: 102136d03;  */

void FUN_102136b94(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_110 [136];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [48];
  
  func_0x000107c61428(unaff_x20 + 0x40,auStack_110,0x21,0);
  func_0x000107c61434(param_2);
  FUN_10213b568(auStack_70,param_1,param_2);
  func_0x000107c614a8(auStack_110);
  func_0x00010213de48(auStack_70,0x112e5b2f0,&UNK_10da60e20);
  func_0x000107c6142c(param_2);
  func_0x000107c61428(unaff_x20 + 0x48,auStack_88,0x21,0);
  func_0x000107c61434(param_2);
  FUN_10213b41c(auStack_110,param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x00010213de48(auStack_110,0x112e5b2f8,&UNK_10da60e28);
  func_0x000107c614a8(auStack_88);
  lVar5 = *(long *)(unaff_x20 + 0x58);
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(unaff_x20 + 0x50);
    if ((uVar3 != param_1) || (uVar4 = param_1, param_2 != lVar5)) {
      func_0x000107c605b8(uVar3,lVar5,param_1,param_2,0);
      if ((uVar3 & 1) == 0) goto LAB_102136cb4;
      lVar5 = *(long *)(unaff_x20 + 0x58);
      uVar4 = *(ulong *)(unaff_x20 + 0x50);
    }
    uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *(undefined8 *)(unaff_x20 + 0x68) = 0;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    func_0x00010213dd18(uVar4,lVar5,uVar1,uVar2);
  }
LAB_102136cb4:
  func_0x000107c61428(unaff_x20 + 0x88,auStack_110,0x21,0);
  func_0x0001010af1e4(param_1,param_2);
  func_0x000107c614a8(auStack_110);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 102136d04; end: 102137103;  */

void FUN_102136d04(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uStack_160;
  undefined1 auStack_158 [136];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [56];
  
  func_0x000107c61428(unaff_x20 + 0x40,auStack_b0,0,0);
  lVar13 = *(long *)(unaff_x20 + 0x40);
  if (0x31 < *(ulong *)(lVar13 + 0x10)) {
    func_0x000107c61434(lVar13);
    func_0x000100029284(param_1);
    func_0x000107c6142c(lVar13);
    if ((param_2 & 1) == 0) {
      lVar9 = *(long *)(unaff_x20 + 0x40);
      lVar13 = lVar9;
      func_0x000107c61434();
      FUN_10213c730();
      func_0x000107c6142c(lVar9);
      lVar9 = lVar13;
      FUN_102137104();
      func_0x000107c61574(lVar13);
      lVar13 = *(long *)(lVar9 + 0x10);
      if (lVar13 != 0) {
        plVar10 = (long *)(lVar9 + 0x28);
        do {
          uVar15 = plVar10[-1];
          lVar7 = *plVar10;
          func_0x000107c61428(unaff_x20 + 0x40,auStack_158,0x21,0);
          func_0x000107c61438(lVar7,2);
          FUN_10213b568(auStack_98,uVar15,lVar7);
          func_0x000107c614a8(auStack_158);
          func_0x00010213de48(auStack_98,0x112e5b2f0,&UNK_10da60e20);
          func_0x000107c6142c(lVar7);
          func_0x000107c61428(unaff_x20 + 0x48,auStack_d0,0x21,0);
          func_0x000107c61434(lVar7);
          FUN_10213b41c(auStack_158,uVar15,lVar7);
          func_0x000107c6142c(lVar7);
          func_0x00010213de48(auStack_158,0x112e5b2f8,&UNK_10da60e28);
          func_0x000107c614a8(auStack_d0);
          lVar6 = *(long *)(unaff_x20 + 0x58);
          if (lVar6 != 0) {
            uVar5 = *(ulong *)(unaff_x20 + 0x50);
            if ((uVar5 != uVar15) || (uVar16 = uVar15, lVar7 != lVar6)) {
              func_0x000107c605b8(uVar5,lVar6,uVar15,lVar7,0);
              if ((uVar5 & 1) == 0) goto LAB_102136e04;
              lVar6 = *(long *)(unaff_x20 + 0x58);
              uVar16 = *(ulong *)(unaff_x20 + 0x50);
            }
            uVar11 = *(undefined8 *)(unaff_x20 + 0x60);
            uVar14 = *(undefined8 *)(unaff_x20 + 0x68);
            *(undefined8 *)(unaff_x20 + 0x58) = 0;
            *(undefined8 *)(unaff_x20 + 0x50) = 0;
            *(undefined8 *)(unaff_x20 + 0x68) = 0;
            *(undefined8 *)(unaff_x20 + 0x60) = 0;
            func_0x00010213dd18(uVar16,lVar6,uVar11,uVar14);
          }
LAB_102136e04:
          plVar10 = plVar10 + 2;
          func_0x000107c61428(unaff_x20 + 0x88,auStack_158,0x21,0);
          lVar6 = lVar7;
          func_0x0001010af1e4(uVar15,lVar7);
          func_0x000107c614a8(auStack_158);
          func_0x000107c6142c(lVar7);
          func_0x000107c6142c(lVar6);
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      func_0x000107c6142c(lVar9);
      lVar13 = *(long *)(unaff_x20 + 0x40);
      if (0x31 < *(ulong *)(lVar13 + 0x10)) {
        uVar5 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
        uVar15 = 0xffffffffffffffff;
        if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
          uVar15 = ~(-1L << (uVar5 & 0x3f));
        }
        uVar15 = uVar15 & *(ulong *)(lVar13 + 0x40);
        if (uVar15 == 0) {
          lVar7 = 0;
          uVar5 = uVar5 + 0x3f >> 6;
          lVar9 = 0;
          do {
            if (uVar5 - 1 == lVar9) {
              return;
            }
            lVar6 = lVar9 + 1;
            uVar15 = *(ulong *)(lVar13 + 0x48 + lVar9 * 8);
            lVar7 = lVar7 + -0x40;
            lVar9 = lVar6;
          } while (uVar15 == 0);
          uVar16 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar15 = uVar15 - 1 & uVar15;
          lVar7 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) - lVar7;
        }
        else {
          lVar6 = 0;
          uVar16 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          lVar7 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
          uVar15 = uVar15 - 1 & uVar15;
          uVar5 = uVar5 + 0x3f >> 6;
        }
        puVar1 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar7 * 0x10);
        uStack_160 = *puVar1;
        uVar11 = puVar1[1];
        lVar9 = *(long *)(lVar13 + 0x38) + lVar7 * 0x30;
        uVar14 = *(undefined8 *)(lVar9 + 8);
        uVar16 = *(ulong *)(lVar9 + 0x28);
        func_0x000107c61438(lVar13,2);
        func_0x000107c61434(uVar11);
        func_0x000107c61434(uVar14);
        while( true ) {
          while (uVar15 != 0) {
            uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
            uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
            uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
            uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
            uVar15 = uVar15 - 1 & uVar15;
            uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar6 << 6;
            lVar9 = *(long *)(lVar13 + 0x38) + uVar8 * 0x30;
            uVar12 = *(ulong *)(lVar9 + 0x28);
            if (uVar12 < uVar16) {
              uVar17 = *(undefined8 *)(lVar9 + 8);
              puVar1 = (undefined8 *)(*(long *)(lVar13 + 0x30) + uVar8 * 0x10);
              uStack_160 = *puVar1;
              uVar2 = puVar1[1];
              func_0x000107c61434();
              func_0x000107c61434(uVar17);
              func_0x000107c6142c(uVar14);
              func_0x000107c6142c(uVar11);
              uVar11 = uVar2;
              uVar14 = uVar17;
              uVar16 = uVar12;
            }
          }
          bVar4 = SCARRY8(lVar6,1);
          lVar6 = lVar6 + 1;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102137104);
            (*pcVar3)();
          }
          if ((long)uVar5 <= lVar6) break;
          uVar15 = ((ulong *)(lVar13 + 0x40))[lVar6];
        }
        func_0x000107c6142c(uVar14);
        func_0x000107c61574(lVar13);
        func_0x000107c6142c(lVar13);
        FUN_102136b94(uStack_160,uVar11);
        func_0x000107c6142c(uVar11);
      }
    }
  }
  return;
}



/* Entry: 102137104; end: 10213734f;  */

undefined * FUN_102137104(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    func_0x000100403514(0,lVar10,0);
    uVar1 = param_1 + 0x40;
    uVar15 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar17 = 0;
    iVar5 = *(int *)(param_1 + 0x24);
    do {
      if (uVar15 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10213733c);
        (*pcVar7)();
      }
      uVar12 = uVar15 >> 6;
      uVar13 = 1L << (uVar15 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar12 * 8) & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102137340);
        (*pcVar7)();
      }
      if (iVar5 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102137344);
        (*pcVar7)();
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar15 * 0x10);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar15 * 0x30 + 8);
      func_0x000107c61434(uVar11);
      func_0x000107c61434(uVar4);
      func_0x000107c6142c(uVar11);
      uVar16 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar16) {
        func_0x000100403514(1 < *(ulong *)(puVar6 + 0x18),uVar16 + 1,1);
      }
      *(ulong *)(puVar6 + 0x10) = uVar16 + 1;
      *(undefined8 *)(puVar6 + uVar16 * 0x10 + 0x20) = uVar3;
      *(undefined8 *)(puVar6 + uVar16 * 0x10 + 0x28) = uVar4;
      uVar16 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar16 <= uVar15) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102137348);
        (*pcVar7)();
      }
      uVar8 = *(ulong *)(uVar1 + uVar12 * 8);
      if ((uVar8 & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10213734c);
        (*pcVar7)();
      }
      if (iVar5 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102137350);
        (*pcVar7)();
      }
      uVar8 = uVar8 & -2L << (uVar15 & 0x3f);
      if (uVar8 == 0) {
        lVar14 = uVar12 << 6;
        puVar9 = (ulong *)(param_1 + 0x48 + uVar12 * 8);
        do {
          uVar12 = uVar12 + 1;
          if (uVar16 + 0x3f >> 6 <= uVar12) {
            func_0x00010213dea8(uVar15,iVar5,0);
            uVar15 = uVar16;
            goto LAB_1021371a4;
          }
          uVar13 = *puVar9;
          lVar14 = lVar14 + 0x40;
          puVar9 = puVar9 + 1;
        } while (uVar13 == 0);
        func_0x00010213dea8(uVar15,iVar5,0);
        uVar15 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + lVar14;
      }
      else {
        uVar12 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar15 & 0x7fffffffffffffc0;
      }
LAB_1021371a4:
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar10);
  }
  return puVar6;
}



/* Entry: 102137350; end: 102137713;  */

void FUN_102137350(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_90 [8];
  long lStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  uVar1 = 0;
  func_0x000107c5f83c();
  lVar6 = *(long *)(uVar1 - 8);
  uVar2 = uVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  func_0x000107c5f830(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5f82c();
  (**(code **)(lVar6 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar1);
  func_0x000107c61428(unaff_x20 + 0x40,auStack_78,0x20,0);
  lVar6 = *(long *)(unaff_x20 + 0x40);
  if (*(long *)(lVar6 + 0x10) == 0) {
LAB_102137478:
    func_0x000107c614a8(auStack_78);
  }
  else {
    func_0x000107c61434(lVar6);
    lVar3 = param_2;
    uVar1 = param_3;
    func_0x000100029284();
    if ((uVar1 & 1) == 0) {
      func_0x000107c6142c(lVar6);
      goto LAB_102137478;
    }
    puVar4 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar3 * 0x30);
    uVar8 = *puVar4;
    uVar5 = puVar4[1];
    uVar9 = (ulong)*(byte *)(puVar4 + 2);
    uVar10 = puVar4[3];
    uVar1 = (ulong)*(byte *)(puVar4 + 4);
    uVar7 = puVar4[5];
    lStack_88 = param_2;
    uStack_80 = param_3;
    func_0x000107c61434(uVar5);
    func_0x000107c614a8(auStack_78);
    func_0x000107c6142c(lVar6);
    if (uVar2 < uVar7) goto LAB_102137498;
    func_0x000107c6142c(uVar5);
    FUN_102136b94(lStack_88,uStack_80);
  }
  uVar8 = 0;
  uVar5 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar1 = 0;
  uVar7 = 0;
LAB_102137498:
  *param_1 = uVar8;
  param_1[1] = uVar5;
  param_1[2] = uVar9;
  param_1[3] = uVar10;
  param_1[4] = uVar1;
  param_1[5] = uVar7;
  return;
}



/* Entry: 102137714; end: 1021377eb;  */

void FUN_102137714(byte *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x80,auStack_68,0,0);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  func_0x000107c61434(uVar2);
  uVar1 = param_3;
  func_0x0001000f66f0(param_3,param_4,uVar2);
  func_0x000107c6142c(uVar2);
  if ((uVar1 & 1) == 0) {
    func_0x000107c61428(param_2 + 0x80,auStack_90,0x21,0);
    func_0x000107c61434(param_4);
    func_0x000100403b00(auStack_78,param_3,param_4);
    func_0x000107c614a8(auStack_90);
    func_0x000107c6142c(uStack_70);
  }
  *param_1 = (byte)uVar1 & 1;
  return;
}



/* Entry: 1021377ec; end: 102137b9f;  */

void FUN_1021377ec(undefined8 param_1,long param_2,undefined *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long extraout_x8;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  ulong uStack_110;
  undefined1 auStack_108 [24];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  
  lVar5 = 0;
  func_0x000107c5f83c();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = (long)&puStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + 0x10,auStack_108,0,0);
  puVar6 = (undefined *)(param_2 + 0x10);
  func_0x000107c61648();
  if (puVar6 != (undefined *)0x0) {
    uStack_110 = 0;
    puVar7 = &UNK_1104d0590;
    lStack_168 = lVar14;
    func_0x000107c613fc(&UNK_1104d0590,0x18,7);
    *(ulong **)(puVar7 + 0x10) = &uStack_110;
    puVar8 = &UNK_1104d05b8;
    func_0x000107c613fc(&UNK_1104d05b8,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x10213e02c;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    uStack_d0 = 0x10213e058;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0x42000000;
    puStack_e0 = &UNK_100f15b68;
    puStack_d8 = &UNK_1104d05d0;
    ppuVar9 = &puStack_f0;
    puStack_c8 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_c8);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar9);
    uVar11 = uStack_110;
    if (uStack_110 == 0) {
      uVar13 = 0x112d35ff8;
      puStack_e0 = puVar6;
      puStack_d8 = param_3;
      uStack_d0 = param_4;
      func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
      func_0x000100087bd4(auStack_160,FUN_10213e184,&puStack_f0,uVar13);
      func_0x000107c61574(puVar6);
      func_0x000107c6142c(uStack_158);
    }
    else {
      uVar10 = uStack_110;
      puStack_190 = param_3;
      uStack_188 = param_6;
      uStack_180 = param_4;
      puStack_178 = puVar7;
      func_0x000107c61174(uStack_110);
      func_0x0001000d224c(&puStack_f0);
      puVar7 = puStack_f0;
      uVar13 = *param_5;
      uVar12 = param_5[1];
      uVar1 = *(undefined8 *)(puVar6 + 0x10);
      uVar2 = *(undefined8 *)(puVar6 + 0x18);
      uVar3 = *(undefined1 *)(param_5 + 2);
      lStack_170 = lVar5;
      func_0x000107c61174(uVar10);
      func_0x000107c61434(uVar2);
      FUN_1021355f4(uVar13,uVar12,uVar1,uVar2,uVar11,uVar3);
      func_0x000107c61574(puVar7);
      func_0x000107c6142c(uVar2);
      func_0x000107c5ee30();
      func_0x000107c61170(uVar10);
      uVar13 = *(undefined8 *)(puVar6 + 0x10);
      uVar1 = *(undefined8 *)(puVar6 + 0x18);
      func_0x000107c61434(uVar1);
      FUN_10213d434(&puStack_f0,uVar11,uVar12,uVar3,uVar13,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x00010006c090(uVar11,uVar12);
      func_0x000107c5f830(lVar15);
      func_0x000107c5f82c();
      (**(code **)(lStack_168 + 8))(lVar15,lStack_170);
      lStack_130 = uVar11 + 180000000000;
      if (0xffffffd61729f7ff < uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102137ba0);
        (*pcVar4)();
      }
      uVar13 = *(undefined8 *)(puVar6 + 0x38);
      puStack_140 = puStack_190;
      uStack_138 = uStack_180;
      uStack_128 = uStack_188;
      ppuStack_150 = &puStack_f0;
      puStack_148 = puVar6;
      func_0x000107c6157c(uVar13);
      func_0x000100087bd4(FUN_10213e078,auStack_160,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar13);
      func_0x000107c61170(uVar10);
      func_0x00010213de48(&puStack_f0,0x112e5b2e8,&UNK_10da60e08);
      func_0x000107c61574(puVar6);
      puVar7 = puStack_178;
    }
    uVar11 = uStack_110;
    func_0x000107c61574(puVar7);
    func_0x000107c61170(uVar11);
  }
  return;
}



/* Entry: 102137ba0; end: 102137bbf;  */

void FUN_102137ba0(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 102137bc0; end: 102137c37;  */

void FUN_102137bc0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x80,auStack_58,0x21,0);
  func_0x0001010af1e4();
  *param_1 = param_3;
  param_1[1] = param_4;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 102137c38; end: 102137fb7;  */

void FUN_102137c38(undefined8 *param_1,long param_2,ulong param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 auStack_328 [17];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
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
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined8 uStack_220;
  undefined1 auStack_218 [24];
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
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined8 uStack_18f;
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
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  undefined1 auStack_f8 [128];
  undefined8 uStack_78;
  
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_1a0 = param_1[0xc];
  uStack_198 = (undefined1)param_1[0xd];
  uStack_18f = *(undefined8 *)((long)param_1 + 0x71);
  uStack_197 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
  uStack_190 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  iVar4 = (int)&uStack_200;
  func_0x000100ce4f00();
  if (iVar4 != 1) {
    uStack_138 = uStack_1b8;
    uStack_140 = uStack_1c0;
    uStack_128 = uStack_1a8;
    uStack_130 = uStack_1b0;
    uStack_118 = uStack_198;
    uStack_120 = uStack_1a0;
    uStack_10f = uStack_18f;
    uStack_117 = uStack_197;
    uStack_110 = uStack_190;
    uStack_178 = uStack_1f8;
    uStack_180 = uStack_200;
    uStack_168 = uStack_1e8;
    uStack_170 = uStack_1f0;
    uStack_158 = uStack_1d8;
    uStack_160 = uStack_1e0;
    uStack_148 = uStack_1c8;
    uStack_150 = uStack_1d0;
    lVar8 = *(long *)(param_2 + 0x58);
    if ((lVar8 == 0) ||
       (((uVar5 = *(ulong *)(param_2 + 0x50), uVar5 != param_3 || (param_4 != lVar8)) &&
        ((func_0x000107c605b8(uVar5,lVar8,param_3,param_4,0), (uVar5 & 1) == 0 ||
         (*(long *)(param_2 + 0x58) == 0)))))) {
      uVar6 = 0;
      uVar15 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x60);
      uVar15 = *(undefined8 *)(param_2 + 0x68);
      func_0x000107c61434(uVar15);
    }
    FUN_10213da74(auStack_f8,&uStack_180,uVar6,uVar15);
    func_0x000107c6142c(uVar15);
    uStack_78 = param_5;
    func_0x000107c61428(param_2 + 0x48,&uStack_2a0,0x21,0);
    func_0x000107c61434(param_4);
    uVar6 = *(undefined8 *)(param_2 + 0x48);
    func_0x000107c61558(uVar6);
    auStack_328[0] = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = 0x8000000000000000;
    FUN_10213b674(auStack_f8,param_3,param_4,uVar6);
    func_0x000107c6142c(param_4);
    *(undefined8 *)(param_2 + 0x48) = auStack_328[0];
    func_0x000107c614a8(&uStack_2a0);
  }
  func_0x000107c61428(param_2 + 0x80,&uStack_2a0,0x21,0);
  func_0x0001010af1e4(param_3,param_4);
  func_0x000107c614a8(&uStack_2a0);
  func_0x000107c6142c(param_4);
  func_0x000107c61428(param_2 + 0x48,auStack_218,0,0);
  lVar14 = *(long *)(param_2 + 0x48);
  func_0x0001000285a8(0x112e5ad10,&UNK_10da60730);
  lVar7 = lVar14;
  func_0x000107c6048c();
  lVar8 = 0;
  uVar11 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar5 = 0xffffffffffffffff;
  if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
    uVar5 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar5 = uVar5 & *(ulong *)(lVar14 + 0x40);
  if (uVar5 == 0) goto LAB_102137e78;
  do {
    uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar5 = uVar5 - 1 & uVar5;
    while( true ) {
      uVar9 = LZCOUNT(uVar9);
      uVar10 = uVar9 | lVar8 << 6;
      puVar2 = (undefined8 *)(*(long *)(lVar14 + 0x30) + uVar10 * 0x10);
      puVar13 = (undefined8 *)(*(long *)(lVar14 + 0x38) + uVar10 * 0x88);
      uStack_298 = puVar13[1];
      uStack_2a0 = *puVar13;
      uStack_268 = puVar13[7];
      uStack_270 = puVar13[6];
      uStack_258 = puVar13[9];
      uStack_260 = puVar13[8];
      uStack_288 = puVar13[3];
      uStack_290 = puVar13[2];
      uStack_278 = puVar13[5];
      uStack_280 = puVar13[4];
      uStack_248 = puVar13[0xb];
      uStack_250 = puVar13[10];
      uVar16 = puVar13[0xd];
      uStack_240 = puVar13[0xc];
      uStack_220 = puVar13[0x10];
      uStack_238 = (undefined1)uVar16;
      uStack_237 = (undefined7)((ulong)uVar16 >> 8);
      uStack_228 = (undefined1)puVar13[0xf];
      uStack_227 = (undefined7)((ulong)puVar13[0xf] >> 8);
      uStack_230 = (undefined1)puVar13[0xe];
      uStack_22f = (undefined7)((ulong)puVar13[0xe] >> 8);
      uVar6 = *puVar2;
      uVar15 = puVar2[1];
      uVar12 = (uVar9 & 0xffffffffffffffc0 | lVar8 << 6) >> 3;
      *(ulong *)(lVar7 + 0x40 + uVar12) = *(ulong *)(lVar7 + 0x40 + uVar12) | 1L << (uVar9 & 0x3f);
      puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
      *puVar2 = uVar6;
      puVar2[1] = uVar15;
      puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 0x80);
      puVar2[5] = uStack_278;
      puVar2[4] = uStack_280;
      puVar2[7] = uStack_268;
      puVar2[6] = uStack_270;
      puVar2[1] = uStack_298;
      *puVar2 = uStack_2a0;
      puVar2[3] = uStack_288;
      puVar2[2] = uStack_290;
      *(ulong *)((long)puVar2 + 0x71) = CONCAT17(uStack_228,uStack_22f);
      *(ulong *)((long)puVar2 + 0x69) = CONCAT17(uStack_230,uStack_237);
      puVar2[0xb] = uStack_248;
      puVar2[10] = uStack_250;
      puVar2[0xd] = uVar16;
      puVar2[0xc] = uStack_240;
      puVar2[9] = uStack_258;
      puVar2[8] = uStack_260;
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102137fb8);
        (*pcVar3)();
      }
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
      FUN_10213dce4(&uStack_2a0,auStack_328);
      func_0x000107c61434(uVar15);
      if (uVar5 != 0) break;
LAB_102137e78:
      do {
        lVar1 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102137fb4);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar1) {
          FUN_102136964(lVar7,0);
          func_0x000107c61574(lVar7);
          return;
        }
        uVar5 = ((ulong *)(lVar14 + 0x40))[lVar1];
        lVar8 = lVar8 + 1;
      } while (uVar5 == 0);
      uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      lVar8 = lVar1;
    }
  } while( true );
}



/* Entry: 102137fb8; end: 10213807f;  */

void FUN_102137fb8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x00010213dd18(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 102138080; end: 1021383b7;  */

undefined1 * FUN_102138080(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x18);
  func_0x000107c61434();
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    uVar6 = *(undefined8 *)(param_2 + 0x68);
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    *(undefined8 *)(param_1 + 0x68) = uVar6;
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    uVar4 = *(undefined8 *)(param_2 + 0x69);
    *(undefined8 *)(param_1 + 0x71) = *(undefined8 *)(param_2 + 0x71);
    *(undefined8 *)(param_1 + 0x69) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    *(undefined8 *)(param_1 + 0x40) = uVar4;
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(param_1 + 0x18) = lVar2;
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar6;
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    uVar3 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    param_1[0x78] = param_2[0x78];
    func_0x000107c61434(lVar2);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar3);
  }
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  return param_1;
}



/* Entry: 1021383b8; end: 1021384d7;  */

undefined8 FUN_1021383b8(undefined8 param_1)

{
  (*(code *)&DAT_1039de914)();
  return param_1;
}



/* Entry: 1021384d8; end: 10213858f;  */

int FUN_1021384d8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102138590; end: 1021385db;  */

undefined8 * FUN_102138590(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1021385dc; end: 102138647;  */

undefined8 * FUN_1021385dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 102138648; end: 10213869b;  */

undefined8 * FUN_102138648(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 10213869c; end: 10213873f;  */

int FUN_10213869c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102138740; end: 102138793;  */

undefined8 * FUN_102138740(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102138794; end: 102138807;  */

undefined8 * FUN_102138794(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 102138808; end: 102138863;  */

undefined8 * FUN_102138808(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 102138864; end: 102138933;  */

int FUN_102138864(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102138934; end: 102138993;  */

/* WARNING: Possible PIC construction at 0x000102138948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010213895c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010213896c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102138960) */
/* WARNING: Removing unreachable block (ram,0x00010213894c) */
/* WARNING: Removing unreachable block (ram,0x000102138988) */
/* WARNING: Removing unreachable block (ram,0x000102138954) */
/* WARNING: Removing unreachable block (ram,0x000102138970) */

void FUN_102138934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102138994; end: 102138cbb;  */

undefined1 * FUN_102138994(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x18);
  func_0x000107c61434();
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    uVar6 = *(undefined8 *)(param_2 + 0x68);
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    *(undefined8 *)(param_1 + 0x68) = uVar6;
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    uVar4 = *(undefined8 *)(param_2 + 0x69);
    *(undefined8 *)(param_1 + 0x71) = *(undefined8 *)(param_2 + 0x71);
    *(undefined8 *)(param_1 + 0x69) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    *(undefined8 *)(param_1 + 0x40) = uVar4;
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(param_1 + 0x18) = lVar2;
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar6;
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    uVar3 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    param_1[0x78] = param_2[0x78];
    func_0x000107c61434(lVar2);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar3);
  }
  return param_1;
}



/* Entry: 102138cbc; end: 102138ce7;  */

void FUN_102138cbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  uVar7 = *(undefined8 *)((long)param_2 + 0x69);
  *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
  *(undefined8 *)((long)param_1 + 0x69) = uVar7;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}



/* Entry: 102138ce8; end: 102138dcb;  */

undefined1 * FUN_102138ce8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c6142c(uVar1);
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(long *)(param_1 + 0x18) = lVar3;
      func_0x000107c6142c();
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x28) = uVar1;
      func_0x000107c6142c(uVar2);
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = uVar1;
      func_0x000107c6142c(uVar2);
      uVar1 = *(undefined8 *)(param_2 + 0x48);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_1 + 0x48) = uVar1;
      func_0x000107c6142c(uVar2);
      uVar1 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(param_1 + 0x50) = uVar1;
      uVar1 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
      func_0x000107c6142c(uVar1);
      uVar1 = *(undefined8 *)(param_2 + 0x70);
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)(param_1 + 0x70) = uVar1;
      func_0x000107c6142c(uVar2);
      param_1[0x78] = param_2[0x78];
      return param_1;
    }
    FUN_1021383b8(param_1 + 0x10);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x69);
  *(undefined8 *)(param_1 + 0x71) = *(undefined8 *)(param_2 + 0x71);
  *(undefined8 *)(param_1 + 0x69) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return param_1;
}



/* Entry: 102138dcc; end: 102138e83;  */

int FUN_102138dcc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x79) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102138e84; end: 1021390c7;  */

void FUN_102138e84(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_260 [16];
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_17f;
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
  undefined8 uStack_ff;
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
  undefined8 uStack_7f;
  
  uVar3 = param_6 & 0xffffffffffff;
  if ((param_7 & 0x2000000000000000) != 0) {
    uVar3 = param_7 >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    uVar3 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar3 = param_2 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) {
      FUN_10213d434(&uStack_1f0,param_8,param_9,param_3,*(undefined8 *)(unaff_x20 + 0x10),
                    *(undefined8 *)(unaff_x20 + 0x18));
      uStack_128 = uStack_1a8;
      uStack_130 = uStack_1b0;
      uStack_118 = uStack_198;
      uStack_120 = uStack_1a0;
      uStack_110 = uStack_190;
      uStack_ff = uStack_17f;
      uStack_168 = uStack_1e8;
      uStack_170 = uStack_1f0;
      uStack_158 = uStack_1d8;
      uStack_160 = uStack_1e0;
      uStack_148 = uStack_1c8;
      uStack_150 = uStack_1d0;
      uStack_138 = uStack_1b8;
      uStack_140 = uStack_1c0;
      iVar2 = (int)&uStack_170;
      func_0x000100ce4f00();
      if (iVar2 != 1) {
        uStack_a8 = uStack_128;
        uStack_b0 = uStack_130;
        uStack_98 = uStack_118;
        uStack_a0 = uStack_120;
        uStack_90 = uStack_110;
        uStack_7f = uStack_ff;
        uStack_e8 = uStack_168;
        uStack_f0 = uStack_170;
        uStack_d8 = uStack_158;
        uStack_e0 = uStack_160;
        uStack_c8 = uStack_148;
        uStack_d0 = uStack_150;
        uStack_b8 = uStack_138;
        uStack_c0 = uStack_140;
        uVar4 = 0x112d35ff8;
        func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
        func_0x000100087bd4(&uStack_200,FUN_10213da08,auStack_260,uVar4);
        func_0x00010213de48(&uStack_1f0,0x112e5b2e8,&UNK_10da60e08);
        if (uStack_1f8 != 0) {
          if (((uStack_200 == param_1) && (uStack_1f8 == param_2)) ||
             (uVar3 = uStack_200, func_0x000107c605b8(uStack_200,uStack_1f8,param_1,param_2,0),
             (uVar3 & 1) != 0)) {
            func_0x000107c6142c(uStack_1f8);
          }
          else {
            func_0x0001000d224c(&uStack_200);
            uVar4 = *(undefined8 *)(uStack_200 + 0x20);
            func_0x000107c6157c(uVar4);
            puVar1 = PTR___sytN_11034f1b0;
            func_0x000100075034(0x10213da44,auStack_260,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61574(uVar4);
            uVar4 = *(undefined8 *)(uStack_200 + 0x28);
            func_0x000107c6157c(uVar4);
            func_0x000100075034(0x10213da5c,auStack_260,puVar1 + 8);
            func_0x000107c61574(uVar4);
            func_0x000107c6142c(uStack_1f8);
            func_0x000107c61574(uStack_200);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1021390c8; end: 1021396f3;  */

void FUN_1021390c8(undefined8 *param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  ulong param_6,undefined1 param_7,undefined8 param_8,byte param_9,
                  undefined8 param_10)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x8;
  code *pcVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong *puVar16;
  undefined8 uVar17;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined8 uStack_1c0;
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
  undefined8 uStack_13f;
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
  undefined8 uStack_bf;
  long lStack_b0;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  long lStack_78;
  
  lVar4 = 0;
  func_0x000107c5f83c();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar7 = (long)&uStack_320 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar16 = (ulong *)(param_2 + 0x50);
  uVar8 = *puVar16;
  uVar6 = *(ulong *)(param_2 + 0x58);
  puStack_310 = param_1;
  if (((uVar6 != 0) && (uVar8 != param_3 || uVar6 != param_4)) &&
     (func_0x000107c605b8(uVar8,uVar6,param_3,param_4,0), (uVar8 & 1) == 0)) {
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    uVar17 = *(undefined8 *)(param_2 + 0x58);
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    uVar3 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x58) = 0;
    *puVar16 = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    func_0x000107c61434(uVar17);
    func_0x00010213dd18(uVar5,uVar17,uVar2,uVar3);
    FUN_10213aff8(uVar5,uVar17,0,0);
    func_0x000107c6142c(uVar17);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  *(ulong *)(param_2 + 0x70) = param_3;
  *(ulong *)(param_2 + 0x78) = param_4;
  func_0x000107c6142c(uVar5);
  uVar8 = param_4;
  func_0x000107c61434(param_4);
  func_0x000107c5f830(lVar7);
  func_0x000107c5f82c();
  pcVar9 = *(code **)(lVar15 + 8);
  (*pcVar9)(lVar7,lVar4);
  func_0x000107c61428(param_2 + 0x40,&uStack_130,0x20,0);
  lVar15 = *(long *)(param_2 + 0x40);
  if (*(long *)(lVar15 + 0x10) != 0) {
    func_0x000107c61434(lVar15);
    uVar6 = param_3;
    uVar11 = param_4;
    func_0x000100029284();
    if ((uVar11 & 1) != 0) {
      puVar10 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar6 * 0x30);
      uStack_318 = *puVar10;
      uVar5 = puVar10[1];
      func_0x000107c61438(uVar5,2);
      func_0x000107c614a8(&uStack_130);
      uStack_320 = uVar5;
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(lVar15);
      goto LAB_1021392a0;
    }
    func_0x000107c6142c(lVar15);
  }
  func_0x000107c614a8(&uStack_130);
  uStack_320 = 0;
  uStack_318 = 0;
LAB_1021392a0:
  FUN_102136d04(param_3,param_4,uVar8);
  func_0x000107c61434(param_4);
  uVar8 = param_6;
  func_0x000107c61434();
  func_0x000107c5f830(lVar7);
  func_0x000107c5f82c();
  (*pcVar9)(lVar7,lVar4);
  lStack_78 = uVar8 + 86400000000000;
  if (0xffffb16b6eb0ffff < uVar8) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1021396f0);
    (*pcVar9)();
  }
  bStack_80 = param_9 & 1;
  uStack_a0 = param_5;
  uStack_98 = param_6;
  uStack_90 = param_7;
  uStack_88 = param_8;
  func_0x000107c61428(param_2 + 0x40,&uStack_130,0x21,0);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61558(uVar5);
  uStack_240 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0x8000000000000000;
  func_0x00010213b7f8(&uStack_a0,param_3,param_4,uVar5);
  func_0x000107c6142c(param_4);
  *(undefined8 *)(param_2 + 0x40) = uStack_240;
  func_0x000107c614a8(&uStack_130);
  uVar8 = *(ulong *)(param_2 + 0x58);
  if ((uVar8 == 0) ||
     (((uVar6 = *puVar16, uVar6 != param_3 || (param_4 != uVar8)) &&
      ((func_0x000107c605b8(uVar6,uVar8,param_3,param_4,0), (uVar6 & 1) == 0 ||
       (*(long *)(param_2 + 0x58) == 0)))))) {
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    uVar8 = *(ulong *)(param_2 + 0x68);
    func_0x000107c61434(uVar8);
  }
  func_0x000107c61434(param_4);
  FUN_10213da74(&uStack_1b0,param_10,uVar5,uVar8);
  func_0x000107c6142c();
  func_0x000107c5f830(lVar7);
  func_0x000107c5f82c();
  (*pcVar9)(lVar7,lVar4);
  lStack_b0 = uVar8 + 180000000000;
  if (0xffffffd61729f7ff < uVar8) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1021396f4);
    (*pcVar9)();
  }
  uStack_e8 = uStack_168;
  uStack_f0 = uStack_170;
  uStack_d8 = uStack_158;
  uStack_e0 = uStack_160;
  uStack_d0 = uStack_150;
  uStack_bf = uStack_13f;
  uStack_128 = uStack_1a8;
  uStack_130 = uStack_1b0;
  uStack_118 = uStack_198;
  uStack_120 = uStack_1a0;
  uStack_108 = uStack_188;
  uStack_110 = uStack_190;
  uStack_f8 = uStack_178;
  uStack_100 = uStack_180;
  func_0x000107c61428(param_2 + 0x48,&uStack_240,0x21,0);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61558(uVar5);
  uStack_2c8 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0x8000000000000000;
  func_0x00010213b674(&uStack_130,param_3,param_4,uVar5);
  func_0x000107c6142c(param_4);
  *(undefined8 *)(param_2 + 0x48) = uStack_2c8;
  func_0x000107c614a8(&uStack_240);
  func_0x000107c61428(param_2 + 0x88,&uStack_240,0x21,0);
  func_0x000107c61434(param_4);
  func_0x000100403b00(&uStack_2c8,param_3,param_4);
  func_0x000107c614a8(&uStack_240);
  func_0x000107c6142c(uStack_2c0);
  lVar15 = *(long *)(param_2 + 0x48);
  func_0x0001000285a8(0x112e5ad10,&UNK_10da60730);
  lVar7 = lVar15;
  func_0x000107c6048c();
  lVar4 = 0;
  uVar6 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(lVar15 + 0x40);
  if (uVar8 == 0) goto LAB_10213958c;
  do {
    uVar11 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
    uVar8 = uVar8 - 1 & uVar8;
    while( true ) {
      uVar11 = LZCOUNT(uVar11);
      uVar12 = uVar11 | lVar4 << 6;
      puVar10 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar12 * 0x10);
      puVar14 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar12 * 0x88);
      uStack_238 = puVar14[1];
      uStack_240 = *puVar14;
      uStack_208 = puVar14[7];
      uStack_210 = puVar14[6];
      uStack_1f8 = puVar14[9];
      uStack_200 = puVar14[8];
      uStack_228 = puVar14[3];
      uStack_230 = puVar14[2];
      uStack_218 = puVar14[5];
      uStack_220 = puVar14[4];
      uStack_1e8 = puVar14[0xb];
      uStack_1f0 = puVar14[10];
      uVar17 = puVar14[0xd];
      uStack_1e0 = puVar14[0xc];
      uStack_1c0 = puVar14[0x10];
      uStack_1d8 = (undefined1)uVar17;
      uStack_1d7 = (undefined7)((ulong)uVar17 >> 8);
      uStack_1c8 = (undefined1)puVar14[0xf];
      uStack_1c7 = (undefined7)((ulong)puVar14[0xf] >> 8);
      uStack_1d0 = (undefined1)puVar14[0xe];
      uStack_1cf = (undefined7)((ulong)puVar14[0xe] >> 8);
      uVar5 = *puVar10;
      uVar2 = puVar10[1];
      uVar13 = (uVar11 & 0xffffffffffffffc0 | lVar4 << 6) >> 3;
      *(ulong *)(lVar7 + 0x40 + uVar13) = *(ulong *)(lVar7 + 0x40 + uVar13) | 1L << (uVar11 & 0x3f);
      puVar10 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar12 * 0x10);
      *puVar10 = uVar5;
      puVar10[1] = uVar2;
      puVar10 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar12 * 0x80);
      puVar10[5] = uStack_218;
      puVar10[4] = uStack_220;
      puVar10[7] = uStack_208;
      puVar10[6] = uStack_210;
      puVar10[1] = uStack_238;
      *puVar10 = uStack_240;
      puVar10[3] = uStack_228;
      puVar10[2] = uStack_230;
      *(ulong *)((long)puVar10 + 0x71) = CONCAT17(uStack_1c8,uStack_1cf);
      *(ulong *)((long)puVar10 + 0x69) = CONCAT17(uStack_1d0,uStack_1d7);
      puVar10[0xb] = uStack_1e8;
      puVar10[10] = uStack_1f0;
      puVar10[0xd] = uVar17;
      puVar10[0xc] = uStack_1e0;
      puVar10[9] = uStack_1f8;
      puVar10[8] = uStack_200;
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1021396ec);
        (*pcVar9)();
      }
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
      func_0x00010213dce4(&uStack_240,&uStack_2c8);
      func_0x000107c61434(uVar2);
      if (uVar8 != 0) break;
LAB_10213958c:
      do {
        lVar1 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1021396e8);
          (*pcVar9)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar1) {
          uVar5 = *(undefined8 *)(param_2 + 0x88);
          func_0x000107c61434(uVar5);
          FUN_102136964(lVar7,uVar5);
          func_0x000107c61574(lVar7);
          func_0x000107c6142c(uVar5);
          *puStack_310 = uStack_318;
          puStack_310[1] = uStack_320;
          return;
        }
        uVar8 = ((ulong *)(lVar15 + 0x40))[lVar1];
        lVar4 = lVar4 + 1;
      } while (uVar8 == 0);
      uVar11 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      lVar4 = lVar1;
    }
  } while( true );
}



/* Entry: 1021396f4; end: 102139907;  */

void FUN_1021396f4(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong in_x5;
  ulong in_x6;
  undefined8 uVar3;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  char cStack_90;
  
  uVar2 = in_x5 & 0xffffffffffff;
  if ((in_x6 & 0x2000000000000000) != 0) {
    uVar2 = in_x6 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    uVar2 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar2 = param_2 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar3 = 0x112d35ff8;
      func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
      func_0x000100087bd4(&uStack_f0,FUN_10213e0cc,auStack_c0,uVar3);
      if (uStack_e8 != 0) {
        if (((uStack_f0 == param_1) && (uStack_e8 == param_2)) ||
           (uVar2 = uStack_f0, func_0x000107c605b8(uStack_f0,uStack_e8,param_1,param_2,0),
           (uVar2 & 1) != 0)) {
          func_0x000107c6142c(uStack_e8);
        }
        else {
          func_0x0001000d224c(&uStack_f0);
          uVar3 = *(undefined8 *)(uStack_f0 + 0x20);
          func_0x000107c6157c(uVar3);
          puVar1 = PTR___sytN_11034f1b0;
          func_0x000100075034(FUN_10213e1a8,auStack_c0,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(uVar3);
          uVar3 = *(undefined8 *)(uStack_f0 + 0x28);
          func_0x000107c6157c(uVar3);
          func_0x000100075034(0x10213e1bc,auStack_c0,puVar1 + 8);
          func_0x000107c61574(uVar3);
          func_0x000107c6142c(uStack_e8);
          func_0x000107c61574(uStack_f0);
        }
      }
      func_0x000100087bd4(auStack_c0,0x10213e108,&uStack_f0,&UNK_1104d03d0);
      if (lStack_b8 != 0) {
        cStack_90 = (char)param_2;
        if (cStack_90 != '\0') {
          func_0x0001021374c4(in_x5,in_x6,auStack_c0);
        }
        func_0x000107c6142c(lStack_b8);
      }
    }
  }
  return;
}


