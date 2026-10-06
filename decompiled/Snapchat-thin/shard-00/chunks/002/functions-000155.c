/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003a7634; end: 1003a76bb; -[SCSubject toSCBridgeSubject] */

void FUN_1003a7634(void)

{
  func_0x000107c610f4(PTR_PTR_1126b6d68);
  func_0x000107c47c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003a76bc; end: 1003a7743; -[SCBridgeSubject initWithOnEvent:subscribe:] */

undefined8 FUN_1003a76bc(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  func_0x000107c61174(in_x3);
  func_0x000107c61184();
  uVar1 = in_x3;
  func_0x000107c61184();
  func_0x000107c61170(in_x3);
  FUN_1003a7744();
  func_0x0001003a7750();
  func_0x000107c61170(uVar1);
  func_0x0001003b3014();
  return in_x3;
}



/* Entry: 1003a7744; end: 1003a775b;  */

void FUN_1003a7744(void)

{
  return;
}



/* Entry: 1003a775c; end: 1003a7827; -[SCValdiMarshallableObject initWithFieldValues:] */

undefined8 * FUN_1003a775c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270c058;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001003a77d8();
    func_0x000107c61180();
    func_0x0001003af050();
    uVar2 = puVar1[1];
    func_0x0001003af060();
    func_0x000107c3dbe4();
    puVar1[2] = uVar2;
  }
  return puVar1;
}



/* Entry: 1003a7828; end: 1003a7853;  */

void FUN_1003a7828(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e1bb8;
  func_0x000107c61160();
  uVar1 = puRam00000001137fd2d8;
  puRam00000001137fd2d8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003a7854; end: 1003a785b; -[SCValdiMarshallableObjectRegistry .cxx_construct] */

void FUN_1003a7854(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1003a785c; end: 1003a7ee7; -[SCValdiMarshallableObjectRegistry init] */

undefined8 * FUN_1003a785c(undefined8 param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined8 *puStack_88;
  undefined1 uStack_80;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  puStack_b0 = PTR_PTR_11270c118;
  puVar5 = &uStack_b8;
  uStack_b8 = param_1;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x1c0;
    func_0x000107c60e20();
    puVar6[2] = &PTR_DAT_110d7cae0;
    *puVar6 = &PTR_DAT_110d7ca98;
    puVar6[1] = 1;
    puVar6[3] = puVar5;
    FUN_1003a7ee8(puVar6 + 4);
    uVar9 = puVar6[4];
    lVar7 = 0x90;
    func_0x000107c60e20();
    FUN_1003a8314();
    puVar1 = (undefined8 *)(lVar7 + 8);
    do {
      func_0x0001003a8354();
    } while (extraout_w9 != 0);
    FUN_1003a83dc(&puStack_a0,&UNK_10f7d02d5);
    FUN_1003a8ccc(&lStack_98,&puStack_a0,3);
    lVar4 = lStack_98;
    if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
      do {
        func_0x0001003a91a8();
      } while (extraout_w10 != 0);
    }
    FUN_1003a83dc(auStack_a8,&UNK_10f7d02ea);
    puVar6[5] = uVar9;
    do {
      func_0x0001003a8354();
    } while (extraout_w9_00 != 0);
    puVar6[7] = &UNK_10dd5b8b0;
    puVar6[6] = lVar7;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[8] = 0;
    puVar6[0xd] = &UNK_10dd5b8b0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0xe] = 0;
    puVar6[0x13] = 0;
    puVar6[0x12] = 0;
    puVar6[0x15] = 0;
    puVar6[0x14] = 0;
    puVar6[0x17] = 0;
    puVar6[0x16] = 0;
    puVar6[0x19] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1a] = 0;
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
      do {
        func_0x0001003a91a8();
      } while (extraout_w10_00 != 0);
    }
    puVar6[0x1c] = lVar4;
    FUN_1003a8364();
    puStack_70 = auStack_a8;
    pcStack_68 = FUN_1003ab990;
    FUN_1003a91d4(&UNK_10f7ccd58);
    FUN_1003a91fc(&puStack_88);
    func_0x0001003ac748(puVar6 + 0x1d);
    func_0x0001003ac76c();
    FUN_1003a8364();
    FUN_1003ac774(auStack_90,auStack_a8);
    pcStack_68 = FUN_1003ab990;
    puStack_70 = auStack_90;
    FUN_1003a91d4(&UNK_10f7ccd66);
    FUN_1003a91fc(&puStack_88);
    func_0x0001003ac748(puVar6 + 0x1e);
    func_0x0001003ac76c();
    func_0x0001003ac88c();
    puVar6[0x1f] = 0;
    func_0x0001003acbe0();
    func_0x0001003acbe8(lVar4);
    func_0x0001003acbf4(lStack_98);
    FUN_1003a8cb8();
    puVar8 = puStack_a0;
    do {
      func_0x0001003acc30();
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = extraout_x8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)in_ZR) {
      func_0x000107c39fa8();
    }
    do {
      func_0x0001003acc30();
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = extraout_x8_00;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)in_ZR) {
      func_0x000107c39fa8();
    }
    puVar6[0x20] = &UNK_10dd5b8b0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = &UNK_10dd5b8b0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x27] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = &UNK_10dd5b8b0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = &UNK_10dd5b8b0;
    puVar6[0x37] = 0;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    uVar9 = puVar6[4];
    func_0x0001003acc3c();
    plVar10 = puVar8 + 1;
    *plVar10 = 1;
    *puVar8 = &PTR_DAT_110d7ba40;
    puVar8[2] = puVar6;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_88 = puVar8;
    FUN_1003acc44(uVar9,&puStack_88);
    func_0x0001003accf4(puStack_88);
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      func_0x000107c39fa8();
    }
    uVar9 = puVar5[1];
    puVar5[1] = puVar6;
    func_0x0001003acd74(uVar9);
    func_0x0001003acd74(0);
    puStack_88 = (undefined8 *)(*(long *)(puVar5[1] + 0x20) + 0x18);
    uStack_80 = 1;
    func_0x000107c60d28();
    func_0x0001003acd9c(puVar5[1]);
    func_0x0001003acd9c(puVar5[1]);
    FUN_1003acdb8(puVar5[1],&UNK_10f7d0083,&UNK_10b963ccc,&UNK_10b963ebc);
    FUN_1003acdb8(puVar5[1],&UNK_10f7d0088,&UNK_10b963cec,&UNK_10b963f28);
    FUN_1003acdb8(puVar5[1],&UNK_10f7d008e,&UNK_10b963d08,&UNK_10b963f94);
    FUN_1003acdb8(puVar5[1],&UNK_10f7d0095,&UNK_10b963d28,&UNK_10b964008);
    FUN_1003acdb8(puVar5[1],&UNK_10f7d009d,&UNK_10b963d4c,&UNK_10b964080);
    FUN_1003acdb8(puVar5[1],&UNK_10f7d00a6,&UNK_10b963d70,&UNK_10b9640f8);
    FUN_1003acdb8(puVar5[1],&UNK_10f7d00aa,&UNK_10b963d7c,&UNK_10b96414c);
    FUN_1003acdb8(puVar5[1],&UNK_10f7d00af,&UNK_10b963d88,&UNK_10b9641b8);
    FUN_1003acdb8(puVar5[1],&UNK_10f7d00b5,&UNK_10b963d9c,&UNK_10b964224);
    FUN_1003acdb8(puVar5[1],&UNK_10f7d00bc,&UNK_10b963e0c,&UNK_10b964298);
    FUN_1003acdb8(puVar5[1],&UNK_10f7d00c0,&UNK_10b963e2c,&UNK_10b964304);
    FUN_1003acdb8(puVar5[1],&UNK_10f7d00c5,&UNK_10b963e4c,&UNK_10b964374);
    FUN_1003acdb8(puVar5[1],&UNK_10f7d00cb,&UNK_10b963db0,&UNK_10b9643e4);
    FUN_1003acdb8(puVar5[1],&UNK_10f7d00cf,&UNK_10b963dd0,&UNK_10b964450);
    FUN_1003acdb8(puVar5[1],&UNK_10f7d00d4,&UNK_10b963df0,&UNK_10b9644c0);
    func_0x000107c61158(PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x0001003ad79c();
    func_0x000107c61158(PTR_PTR_1126e1b70);
    func_0x0001003ad79c();
    FUN_1003ad644(&puStack_88);
  }
  FUN_1003af048();
  func_0x0001003aef78();
  return puVar5;
}



/* Entry: 1003a7ee8; end: 1003a7f27;  */

void FUN_1003a7ee8(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  FUN_1003a7f28();
  FUN_1003a7fb4(auStack_38);
  *param_1 = auStack_38[0];
  func_0x0001003a8294(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  return;
}



/* Entry: 1003a7f28; end: 1003a7f3b;  */

void FUN_1003a7f28(void)

{
  return;
}



/* Entry: 1003a7f3c; end: 1003a7fb3;  */

void FUN_1003a7f3c(undefined8 param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  FUN_1003a7f28();
  FUN_1003a8000(auStack_40,1);
  FUN_1003a8088(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  func_0x0001003a80e8(param_1,lVar1 + 0x18);
  func_0x0001003a8284(auStack_40);
  func_0x0001003a8294(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001003a8284(auStack_40);
  func_0x000107c39ff8();
  pcStack_48 = FUN_1003a7fb4;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1003a7f3c(&uStack_51);
  return;
}



/* Entry: 1003a7fb4; end: 1003a7fff;  */

void FUN_1003a7fb4(void)

{
  undefined1 uStack_11;
  
  FUN_1003a7f3c(&uStack_11);
  return;
}



/* Entry: 1003a8000; end: 1003a8027;  */

long FUN_1003a8000(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001003a7fd4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1003a8028; end: 1003a802f;  */

void FUN_1003a8028(void)

{
  return;
}



/* Entry: 1003a8030; end: 1003a8087;  */

undefined8 * FUN_1003a8030(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d7df80;
  func_0x000107c60d30(param_1 + 3);
  FUN_1003a80cc();
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  return param_1;
}



/* Entry: 1003a8088; end: 1003a80cb;  */

undefined8 * FUN_1003a8088(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d7cb60;
  param_1[1] = 0;
  FUN_1003a8030(param_1 + 3);
  return param_1;
}



/* Entry: 1003a80cc; end: 1003a8103;  */

void FUN_1003a80cc(void)

{
  long unaff_x19;
  
  *(undefined **)(unaff_x19 + 0x58) = &UNK_10dd5b8b0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  return;
}



/* Entry: 1003a8104; end: 1003a816f;  */

void FUN_1003a8104(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    FUN_1003a8180(param_2,&uStack_20);
    func_0x0001003a824c(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1003a8170; end: 1003a817f;  */

void FUN_1003a8170(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1003a8180; end: 1003a81cb;  */

undefined8 * FUN_1003a8180(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1003a8170();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_1003a81d8(&uStack_30);
  return param_1;
}



/* Entry: 1003a81cc; end: 1003a81d7;  */

undefined8 FUN_1003a81cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003a81d8; end: 1003a8273;  */

void FUN_1003a81d8(long param_1)

{
  FUN_1003a81cc();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 1003a8274; end: 1003a82b3;  */

void FUN_1003a8274(void)

{
  return;
}



/* Entry: 1003a82b4; end: 1003a82df;  */

undefined8 * FUN_1003a82b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d7d2a0;
  func_0x000107c60d30(param_1 + 1);
  return param_1;
}



/* Entry: 1003a82e0; end: 1003a8313;  */

void FUN_1003a82e0(undefined8 *param_1)

{
  FUN_1003a82b4();
  *param_1 = &PTR_DAT_110d7d040;
  param_1[0xe] = 0;
  param_1[9] = &UNK_10dd5b8b0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}



/* Entry: 1003a8314; end: 1003a834b;  */

undefined8 * FUN_1003a8314(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110d7d080;
  param_1[1] = 1;
  param_1[2] = param_2;
  FUN_1003a82e0(param_1 + 3);
  return param_1;
}



/* Entry: 1003a834c; end: 1003a8363;  */

void FUN_1003a834c(void)

{
  return;
}



/* Entry: 1003a8364; end: 1003a83db;  */

undefined8 * FUN_1003a8364(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam00000001138469f8 & 1) == 0) {
    iVar1 = 0x138469f8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x78;
      func_0x000107c60e20();
      *puVar2 = &UNK_10dd5b8b0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      FUN_1003a8434(0);
      puRam00000001138469f0 = puVar2;
      func_0x000107c60e4c(0x1138469f8);
    }
  }
  return puRam00000001138469f0;
}



/* Entry: 1003a83dc; end: 1003a8433;  */

void FUN_1003a83dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  FUN_1003a8364();
  uStack_40 = param_2;
  func_0x000107c613d0();
  uStack_38 = param_2;
  func_0x0001003a8458(param_1,uVar1,&uStack_40);
  return;
}



/* Entry: 1003a8434; end: 1003a847f;  */

void FUN_1003a8434(long param_1)

{
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 in_register_00005008;
  undefined1 in_register_00005009;
  undefined1 in_register_0000500a;
  undefined1 in_register_0000500b;
  undefined1 in_register_0000500c;
  undefined1 in_register_0000500d;
  undefined1 in_register_0000500e;
  undefined1 in_register_0000500f;
  
  *(ulong *)(param_1 + 0x30) =
       CONCAT17(in_register_0000500f,
                CONCAT16(in_register_0000500e,
                         CONCAT15(in_register_0000500d,
                                  CONCAT14(in_register_0000500c,
                                           CONCAT13(in_register_0000500b,
                                                    CONCAT12(in_register_0000500a,
                                                             CONCAT11(in_register_00005009,
                                                                      in_register_00005008)))))));
  *(ulong *)(param_1 + 0x28) =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 1003a8480; end: 1003a855f;  */

void FUN_1003a8480(long *param_1,long param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  if (param_4 == 0) {
    *param_1 = 0;
    return;
  }
  plVar5 = &lStack_40;
  lStack_40 = param_3;
  lStack_38 = param_4;
  func_0x0001003a8464(plVar5);
  func_0x000107c60d88(param_2 + 0x30);
  plVar6 = &lStack_40;
  FUN_1003a857c(param_2,plVar6,plVar5);
  func_0x0001003a8718();
  if (!(bool)in_ZR) {
    lVar7 = *plVar6;
    piVar1 = (int *)(lVar7 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      *piVar1 = 0;
      lStack_48 = 0;
    }
    else {
      lStack_48 = lVar7;
      if (lVar7 != 0) {
        uStack_50 = 0;
        lStack_48 = 0;
        *param_1 = lVar7;
        FUN_1003a8c94(&uStack_50);
        FUN_1003a8c94(&lStack_48);
        goto LAB_1003a8544;
      }
    }
    func_0x0001003aca48();
    FUN_1003a8c94(&lStack_48);
  }
  FUN_1003a87ec(param_1,param_2,lStack_40,lStack_38,plVar5);
LAB_1003a8544:
  func_0x0001003a8cc4();
  return;
}



/* Entry: 1003a8560; end: 1003a857b;  */

void FUN_1003a8560(undefined8 param_1)

{
  FUN_1003a85b0(param_1,param_1);
  return;
}



/* Entry: 1003a857c; end: 1003a85af;  */

void FUN_1003a857c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_28 [8];
  
  FUN_1003a8560(param_3);
  FUN_1003a85ec(param_1,param_2,param_3,auStack_28);
  if ((int)param_1 != 0) {
    FUN_1003aca34();
  }
  return;
}



/* Entry: 1003a85b0; end: 1003a85eb;  */

long FUN_1003a85b0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = ~param_2 + param_2 * 0x200000;
  uVar1 = (uVar1 ^ uVar1 >> 0x18) * 0x109;
  uVar1 = (uVar1 ^ uVar1 >> 0xe) * 0x15;
  return (uVar1 ^ uVar1 >> 0x1c) * 0x80000001;
}



/* Entry: 1003a85ec; end: 1003a86cf;  */

bool FUN_1003a85ec(long *param_1,undefined8 *param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar5 = 0;
  uVar1 = param_3 >> 7;
  uVar6 = param_1[3];
  while( true ) {
    uVar1 = uVar1 & uVar6;
    uVar7 = *(ulong *)(*param_1 + uVar1);
    uVar2 = uVar7 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar2 = uVar2 + 0xfefefefefefefeff & (uVar2 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
      uVar3 = (uVar2 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar2 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar1 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar6;
      *param_4 = uVar3;
      lVar4 = *(long *)(param_1[1] + uVar3 * 8);
      uVar3 = lVar4 + 0x18;
      FUN_1000633dc(uVar3,*(undefined4 *)(lVar4 + 0xc),*param_2,param_2[1]);
      if ((uVar3 & 1) != 0) goto LAB_1003a86ac;
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar5 = lVar5 + 8;
    uVar1 = lVar5 + uVar1;
  }
LAB_1003a86ac:
  return uVar2 != 0;
}



/* Entry: 1003a86d0; end: 1003a870b;  */

void FUN_1003a86d0(int param_1)

{
  FUN_1003a85ec();
  if (param_1 != 0) {
    FUN_1003aca34();
  }
  return;
}



/* Entry: 1003a870c; end: 1003a872f;  */

void FUN_1003a870c(void)

{
  return;
}



/* Entry: 1003a8730; end: 1003a87a3;  */

undefined8 *
FUN_1003a8730(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)(param_2 + 0x18);
  func_0x000107c60e20();
  uVar2 = *param_3;
  lVar4 = *param_4;
  uVar3 = *param_5;
  *puVar1 = &PTR_DAT_110d7e748;
  *(undefined4 *)(puVar1 + 1) = 1;
  *(int *)((long)puVar1 + 0xc) = (int)lVar4;
  puVar1[2] = uVar3;
  func_0x000107c610b4(puVar1 + 3,uVar2,lVar4);
  *(undefined1 *)((long)(puVar1 + 3) + lVar4) = 0;
  return puVar1;
}



/* Entry: 1003a87a4; end: 1003a87eb;  */

void FUN_1003a87a4(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uStack_39;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_39;
  uStack_38 = param_4;
  lStack_30 = param_3;
  uStack_28 = param_2;
  FUN_1003a8730(puVar1,param_3 + 1,&uStack_28,&lStack_30,&uStack_38);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1003a87ec; end: 1003a8877;  */

void FUN_1003a87ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1003a87a4(&uStack_38,param_3,param_4,param_5);
  uVar1 = uStack_38;
  uStack_40 = uStack_38;
  FUN_1003a8880(auStack_58,param_2,&uStack_40);
  uStack_38 = 0;
  *param_1 = uVar1;
  uStack_60 = 0;
  FUN_1003a8c94(&uStack_60);
  FUN_1003a8c94(&uStack_38);
  return;
}



/* Entry: 1003a8878; end: 1003a887f;  */

void FUN_1003a8878(long *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  
  plVar11 = (long *)*param_2;
  plVar2 = plVar11;
  func_0x0001003a88c4();
  lVar6 = 0;
  uVar7 = (ulong)plVar2 >> 7;
  lVar4 = *plVar11;
  while( true ) {
    uVar7 = uVar7 & plVar11[3];
    uVar10 = *(ulong *)(lVar4 + uVar7);
    uVar8 = uVar10 ^ ((ulong)plVar2 & 0x7f) * 0x101010101010101;
    for (uVar8 = uVar8 + 0xfefefefefefefeff & (uVar8 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar9 = plVar11[1];
      plVar3 = (long *)(uVar7 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & plVar11[3]);
      if (*(long *)(lVar9 + (long)plVar3 * 8) == *param_3) {
        uVar5 = 0;
        goto LAB_1003a89e4;
      }
    }
    if ((uVar10 & ~uVar10 << 6 & 0x8080808080808080) != 0) break;
    lVar6 = lVar6 + 8;
    uVar7 = lVar6 + uVar7;
  }
  plVar3 = plVar11;
  func_0x0001003a8a40(plVar11,plVar2);
  lVar6 = *plVar11;
  *(long *)(plVar11[1] + (long)plVar3 * 8) = *param_3;
  *(byte *)(lVar6 + (long)plVar3) = (byte)plVar2 & 0x7f;
  FUN_1003a8c7c();
  lVar4 = *plVar11;
  lVar9 = plVar11[1];
  uVar5 = 1;
LAB_1003a89e4:
  *param_1 = lVar4 + (long)plVar3;
  param_1[1] = lVar9 + (long)plVar3 * 8;
  *(undefined1 *)(param_1 + 2) = uVar5;
  return;
}



/* Entry: 1003a8880; end: 1003a88e7;  */

void FUN_1003a8880(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1003a8878(&uStack_18);
  return;
}



/* Entry: 1003a88e8; end: 1003a8b03;  */

void FUN_1003a88e8(long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  
  plVar11 = (long *)*param_2;
  plVar2 = plVar11;
  func_0x0001003a88c4();
  lVar6 = 0;
  uVar7 = (ulong)plVar2 >> 7;
  lVar4 = *plVar11;
  while( true ) {
    uVar7 = uVar7 & plVar11[3];
    uVar10 = *(ulong *)(lVar4 + uVar7);
    uVar8 = uVar10 ^ ((ulong)plVar2 & 0x7f) * 0x101010101010101;
    for (uVar8 = uVar8 + 0xfefefefefefefeff & (uVar8 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar9 = plVar11[1];
      plVar3 = (long *)(uVar7 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & plVar11[3]);
      if (*(long *)(lVar9 + (long)plVar3 * 8) == *param_3) {
        uVar5 = 0;
        goto LAB_1003a89e4;
      }
    }
    if ((uVar10 & ~uVar10 << 6 & 0x8080808080808080) != 0) break;
    lVar6 = lVar6 + 8;
    uVar7 = lVar6 + uVar7;
  }
  plVar3 = plVar11;
  func_0x0001003a8a40(plVar11,plVar2);
  lVar6 = *plVar11;
  *(undefined8 *)(plVar11[1] + (long)plVar3 * 8) = *param_4;
  *(byte *)(lVar6 + (long)plVar3) = (byte)plVar2 & 0x7f;
  FUN_1003a8c7c();
  lVar4 = *plVar11;
  lVar9 = plVar11[1];
  uVar5 = 1;
LAB_1003a89e4:
  *param_1 = lVar4 + (long)plVar3;
  param_1[1] = lVar9 + (long)plVar3 * 8;
  *(undefined1 *)(param_1 + 2) = uVar5;
  return;
}



/* Entry: 1003a8b04; end: 1003a8b53;  */

ulong FUN_1003a8b04(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  lVar2 = 0;
  uVar3 = unaff_x20 >> 7;
  while( true ) {
    uVar3 = uVar3 & unaff_x22;
    uVar1 = *(ulong *)(unaff_x21 + uVar3) & ~*(ulong *)(unaff_x21 + uVar3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    uVar3 = lVar2 + uVar3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & unaff_x22;
}



/* Entry: 1003a8b54; end: 1003a8c7b;  */

void FUN_1003a8b54(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  plVar6 = (long *)param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 8;
  func_0x000107c60e20();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  func_0x000107c610bc();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      uVar4 = *(undefined8 *)(*plVar6 + 0x10);
      FUN_1003a91b8();
      lVar5 = *param_1;
      lVar3 = lVar5;
      func_0x0001003a8b14(lVar5,param_1[3],uVar4);
      bVar2 = (byte)uVar4 & 0x7f;
      *(byte *)(lVar5 + lVar3) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar3 - 8U) + 1) = bVar2;
      *(long *)(param_1[1] + lVar3 * 8) = *plVar6;
    }
    plVar6 = plVar6 + 1;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1003a8c7c; end: 1003a8c93;  */

void FUN_1003a8c7c(void)

{
  undefined1 in_w8;
  long in_x9;
  ulong in_x10;
  ulong in_x11;
  
  *(undefined1 *)(in_x9 + (in_x11 & in_x10) + (in_x11 & 7) + 1) = in_w8;
  return;
}



/* Entry: 1003a8c94; end: 1003a8cb7;  */

void FUN_1003a8c94(void)

{
  FUN_10007e5d0();
  FUN_1003a8cb8();
  return;
}



/* Entry: 1003a8cb8; end: 1003a8ccb;  */

void FUN_1003a8cb8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == (long *)0x0) {
    return;
  }
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
    FUN_1003a8364();
    FUN_1003ac8f0();
    if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003ac8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1003a8ccc; end: 1003a8d13;  */

void FUN_1003a8ccc(void)

{
  long extraout_x8;
  int extraout_w11;
  long *unaff_x19;
  long alStack_30 [2];
  
  FUN_1003a8d14();
  FUN_1003a8d28();
  if ((alStack_30[0] != 0) && (*(long *)(alStack_30[0] + 0x10) != 0)) {
    do {
      FUN_1003a90a8();
      alStack_30[0] = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *unaff_x19 = alStack_30[0];
  FUN_1003a913c(alStack_30);
  return;
}



/* Entry: 1003a8d14; end: 1003a8d27;  */

void FUN_1003a8d14(void)

{
  return;
}



/* Entry: 1003a8d28; end: 1003a8d63;  */

void FUN_1003a8d28(void)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  FUN_1003a8d64();
  FUN_1003a8df8(auStack_38);
  *unaff_x19 = auStack_38[0];
  func_0x0001003a9100(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  return;
}



/* Entry: 1003a8d64; end: 1003a8d7b;  */

void FUN_1003a8d64(void)

{
  return;
}



/* Entry: 1003a8d7c; end: 1003a8df7;  */

void FUN_1003a8d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  FUN_1003a8d64();
  FUN_1003a8e4c(auStack_50,1);
  FUN_1003a8e84(uStack_40,param_2,param_3);
  func_0x0001003a9020();
  func_0x0001003a9034();
  func_0x0001003a90f0(auStack_50);
  func_0x0001003a9100(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001003a90f0(auStack_50);
  func_0x000107c3a2e0();
  pcStack_58 = FUN_1003a8df8;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_1003a8d7c(&uStack_61,puVar1,param_2);
  return;
}



/* Entry: 1003a8df8; end: 1003a8e4b;  */

void FUN_1003a8df8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1003a8d7c(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1003a8e4c; end: 1003a8e73;  */

long FUN_1003a8e4c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001003a8e1c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1003a8e74; end: 1003a8e83;  */

void FUN_1003a8e74(void)

{
  return;
}



/* Entry: 1003a8e84; end: 1003a8ec3;  */

undefined8 * FUN_1003a8e84(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d7e0e0;
  param_1[1] = 0;
  func_0x0001003a8e7c(param_1 + 3);
  return param_1;
}



/* Entry: 1003a8ec4; end: 1003a8fa3;  */

long FUN_1003a8ec4(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  lVar1 = param_1;
  FUN_1003a8fa4();
  *(undefined8 *)(lVar1 + 0x28) = 0x32aaaba7;
  func_0x0001003a8fb4();
  *(undefined8 *)(lVar1 + 0x70) = extraout_x8;
  func_0x0001003a8fcc();
  func_0x000107c60c3c(lVar1 + 0xb0);
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  puVar3 = &UNK_10f7d0ef0;
  if (*param_2 != 0) {
    puVar3 = (undefined *)(*param_2 + 0x18);
  }
  func_0x0001003a8fe0(param_3);
  uVar2 = 0;
  func_0x000107c60f4c(0,param_3,0);
  func_0x000107c60f50(puVar3,uVar2);
  *(undefined **)(param_1 + 0x20) = puVar3;
  func_0x0001003a900c();
  return param_1;
}



/* Entry: 1003a8fa4; end: 1003a904f;  */

void FUN_1003a8fa4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d7e160;
  return;
}



/* Entry: 1003a9050; end: 1003a90a7;  */

void FUN_1003a9050(long param_1,long param_2,undefined8 param_3)

{
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        FUN_1003a90a8();
      } while (extraout_w11 != 0);
    }
    func_0x0001003a90b8();
    FUN_1003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1003a90a8; end: 1003a90c3;  */

void FUN_1003a90a8(void)

{
  bool bVar1;
  long *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1003a90c4; end: 1003a90e7;  */

void FUN_1003a90c4(long param_1)

{
  FUN_1003a81cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1003a90e8; end: 1003a913b;  */

void FUN_1003a90e8(void)

{
  return;
}



/* Entry: 1003a913c; end: 1003a915f;  */

void FUN_1003a913c(void)

{
  func_0x0001003a9130();
  FUN_1003a9160();
  return;
}



/* Entry: 1003a9160; end: 1003a916b;  */

void FUN_1003a9160(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    FUN_1003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1003a916c; end: 1003a9193;  */

void FUN_1003a916c(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = *(undefined8 *)(param_1 + 8);
  FUN_1003a90c4(&uStack_20);
  return;
}



/* Entry: 1003a9194; end: 1003a91b7;  */

void FUN_1003a9194(void)

{
  return;
}



/* Entry: 1003a91b8; end: 1003a91d3;  */

void FUN_1003a91b8(undefined8 param_1)

{
  FUN_1003a85b0(param_1,param_1);
  return;
}



/* Entry: 1003a91d4; end: 1003a91fb;  */

undefined1  [16] FUN_1003a91d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  func_0x000107c613d0();
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1003a91fc; end: 1003a9203;  */

/* WARNING: Possible PIC construction at 0x000107330270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107330348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107330274) */
/* WARNING: Removing unreachable block (ram,0x000107330298) */
/* WARNING: Removing unreachable block (ram,0x000107330290) */
/* WARNING: Removing unreachable block (ram,0x00010733034c) */
/* WARNING: Removing unreachable block (ram,0x000107330370) */
/* WARNING: Removing unreachable block (ram,0x000107330368) */
/* WARNING: Removing unreachable block (ram,0x000107344d98) */

undefined8 *
FUN_1003a91fc(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,double *param_4)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  undefined1 auVar7 [8];
  code *pcVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  double dVar12;
  long lVar13;
  double dVar14;
  undefined2 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar19;
  undefined8 *extraout_x8_05;
  undefined8 *puVar20;
  long extraout_x8_06;
  undefined1 *puVar21;
  uint uVar22;
  int iVar23;
  int extraout_w9;
  undefined1 uVar24;
  int extraout_w11;
  undefined8 *extraout_x12;
  long lVar25;
  undefined8 *puVar26;
  uint uVar27;
  int iVar28;
  ulong uVar29;
  float fVar30;
  double dVar31;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined1 auStack_220 [8];
  undefined1 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [400];
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong uStack_60;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 uStack_3d;
  undefined1 auStack_3c [28];
  ulong uStack_20;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  uVar18 = 0xf;
  FUN_1003a994c();
  puVar21 = param_2;
  uVar29 = uVar18;
  func_0x0001003a9964();
  iVar28 = (int)uVar29;
  uVar9 = puVar21 == (undefined1 *)0x2;
  uStack_8 = extraout_x8_00;
  if ((!(bool)uVar9) || (puVar20 = param_1, FUN_100574918(), (int)puVar20 == 0)) {
    func_0x0001003a9974();
    puStack_218 = auStack_200;
    uStack_208 = 500;
    uStack_210 = 0;
    auStack_220 = (undefined1  [8])extraout_x8_01;
    FUN_1003a9984(auStack_220,param_1,param_2,uVar18,param_4,0);
    func_0x0001003ac6b8();
code_r0x0001003a9298:
    puVar17 = (undefined8 *)auStack_220;
    func_0x0001003ac644(puVar17);
    goto LAB_1003a92a0;
  }
  if ((long)uVar18 < 0) {
    if ((0 < (int)(uint)uVar18) && (uVar1 = *(uint *)(param_4 + 2), uVar1 != 0)) goto LAB_1003a92c8;
    goto LAB_1003a98cc;
  }
  uVar1 = (uint)uVar18 & 0xf;
  if ((uVar18 & 0xf) == 0) goto LAB_1003a98cc;
LAB_1003a92c8:
  uVar1 = uVar1 - 1;
  uVar9 = uVar1 == 0xe;
  if (0xe < uVar1) {
    func_0x000107c3aa80();
    puVar17 = puVar20;
    goto LAB_1003a92a0;
  }
  pcVar8 = (code *)param_4[1];
  fVar5 = *(float *)param_4;
  uVar29 = (ulong)(uint)fVar5;
  uVar11 = *(uint *)((long)param_4 + 4);
  dVar31 = *param_4;
  puVar15 = (undefined2 *)*param_4;
  dVar12 = *param_4;
  dVar14 = *param_4;
  puVar17 = extraout_x8;
  uStack_60 = uVar29;
  uStack_20 = uVar29;
  switch(uVar1) {
  case 0:
    puVar17 = (undefined8 *)auStack_220;
    if ((int)fVar5 < 0) {
      puVar17 = (undefined8 *)(auStack_220 + 1);
      auStack_220[0] = 0x2d;
    }
    uVar9 = fVar5 == 0.0;
    fVar30 = (float)-(int)fVar5;
    if (-1 < (int)fVar5) {
      fVar30 = fVar5;
    }
    uVar18 = (ulong)(uint)fVar30;
    uVar29 = uVar18;
    func_0x00010054bacc(uVar18);
    FUN_10054bb78(puVar17,uVar18,uVar29);
    func_0x000107c3a9d4();
    break;
  case 1:
    uVar18 = uVar29;
    func_0x00010054bacc(uVar29);
    puVar17 = (undefined8 *)auStack_220;
    FUN_10054bb78(puVar17,uVar29,uVar18);
    func_0x000107c3a9d4();
    break;
  case 2:
    func_0x000107c3aa7c();
    if ((bool)uVar9) {
      puVar17 = (undefined8 *)(uVar29 | extraout_x8_03 << 0x20);
      func_0x000107c3aa4c(extraout_x8);
      func_0x0001073447e0();
      puStack_48 = &UNK_10733034c;
      puStack_70 = param_2;
      pcStack_68 = pcVar8;
      puStack_50 = auStack_10;
      func_0x000107345c14(auStack_3c);
      puVar20 = (undefined8 *)-(long)puVar17;
      if (-1 < (long)puVar17) {
        puVar20 = puVar17;
      }
      FUN_1003b0470(puVar20);
      if ((long)pcVar8 < 0) {
        *(undefined1 *)extraout_x8 = 0x2d;
      }
      func_0x000107345ba8();
      func_0x0001003b04f4();
      return puVar17;
    }
    goto LAB_1003a98c8;
  case 3:
    func_0x000107c3aa7c();
    if ((bool)uVar9) {
      puVar20 = (undefined8 *)(uVar29 | extraout_x8_04 << 0x20);
      func_0x000107c3aa4c(extraout_x8,puVar20);
      func_0x0001073447e0();
      puStack_48 = &UNK_107330274;
      puStack_50 = auStack_10;
      FUN_100a2b988(&uStack_3d);
      FUN_1003b0470(puVar20);
      func_0x000107345dfc();
      func_0x0001003b04f4();
      return puVar20;
    }
    goto LAB_1003a98c8;
  case 4:
    puVar17 = (undefined8 *)auStack_220;
    if ((long)pcVar8 < 0) {
      puVar17 = (undefined8 *)(auStack_220 + 1);
      auStack_220[0] = 0x2d;
    }
    uVar29 = (long)pcVar8 >> 0x3f;
    lVar2 = ((ulong)*param_4 ^ uVar29) - uVar29;
    uVar9 = lVar2 == 0;
    lVar25 = ((ulong)pcVar8 ^ uVar29) - (uVar29 + (((ulong)*param_4 ^ uVar29) < uVar29));
    lVar13 = lVar2;
    func_0x000107c3176c(lVar2,lVar25);
    func_0x000107c31770(puVar17,lVar2,lVar25,lVar13);
    func_0x000107c3a9d4();
    break;
  case 5:
    dVar14 = dVar12;
    func_0x000107c3176c(dVar12,pcVar8);
    puVar17 = (undefined8 *)auStack_220;
    func_0x000107c31770(puVar17,dVar12,pcVar8,dVar14);
    func_0x000107c3a9d4();
    break;
  case 6:
    uVar9 = ((uint)fVar5 & 1) == 0;
    lVar2 = 4;
    if ((bool)uVar9) {
      lVar2 = 5;
    }
    pcVar3 = "true";
    if ((bool)uVar9) {
      pcVar3 = "false";
    }
    func_0x000107c610b4(auStack_220,pcVar3,lVar2);
    func_0x00010015492c(extraout_x8,auStack_220,auStack_220 + lVar2);
    break;
  case 7:
    auStack_220[0] = SUB41(fVar5,0);
    func_0x00010015492c(extraout_x8,auStack_220,auStack_220 + 1);
    break;
  case 8:
    fVar30 = fVar5;
    func_0x000107c3aa80();
    auStack_220 = (undefined1  [8])0x0;
    if ((int)fVar5 < 0) {
      auStack_220 = (undefined1  [8])0x10000000000;
      fVar30 = -fVar30;
    }
    if ((((uint)fVar5 ^ 0xffffffff) & 0x7f800000) == 0) {
      uVar9 = ABS(fVar30) == INFINITY;
      func_0x0001073304d4(extraout_x8,uVar9,&UNK_10e60dafc,auStack_220);
    }
    else {
      func_0x000107c31744();
      auVar7 = auStack_220;
      uVar18 = (ulong)auStack_220 >> 0x20;
      puVar16 = puVar20;
      func_0x00010054bacc();
      uVar29 = (ulong)auVar7 >> 0x28 & 0xff;
      iVar28 = (int)uVar29;
      uVar11 = (uint)puVar16;
      uVar1 = uVar11;
      if (iVar28 != 0) {
        uVar1 = uVar11 + 1;
      }
      uVar19 = (ulong)uVar1;
      uVar1 = uVar11 + (int)((ulong)puVar20 >> 0x20);
      uVar4 = auVar7._4_4_;
      uVar27 = auVar7._0_4_;
      if (((ulong)auVar7 >> 0x20 & 0xff) == 0) {
        if (-4 < (int)uVar1) {
          uVar22 = uVar27;
          if ((int)uVar27 < 1) {
            uVar22 = 0x10;
          }
          if ((int)uVar1 <= (int)uVar22) goto code_r0x0001003a9768;
        }
      }
      else if ((uVar4 & 0xff) != 1) {
code_r0x0001003a9768:
        if ((long)puVar20 < 0) {
          if ((int)uVar1 < 1) {
            uVar4 = uVar27;
            if ((int)(uVar27 + uVar1) < 0 == SCARRY4(uVar27,uVar1)) {
              uVar4 = -uVar1;
            }
            uVar9 = uVar27 < 0x80000000 && uVar11 == 0;
            if (uVar27 >= 0x80000000 || uVar11 != 0) {
              uVar4 = -uVar1;
            }
            puVar26 = (undefined8 *)(ulong)uVar4;
            func_0x000107c3aa40();
            func_0x000107c3a9c8();
            puVar20 = puVar16;
            if (iVar28 != 0) {
              puVar20 = (undefined8 *)((long)puVar16 + 1);
              *(undefined *)puVar16 = (&UNK_10e60dacd)[uVar29];
            }
            puVar17 = (undefined8 *)((long)puVar20 + 1);
            *(undefined1 *)puVar20 = 0x30;
            if ((((ulong)auVar7 & 0x10000000000000) != 0 || uVar11 != 0) || uVar4 != 0) {
              *(undefined1 *)((long)puVar20 + 1) = 0x2e;
              func_0x000107c3aa8c(puVar17);
              func_0x000107330b24(extraout_x8_06 + 2,puVar26);
              puVar17 = puVar26;
              func_0x000107c3aab0();
            }
          }
          else {
            uVar1 = uVar27 - uVar11 & (int)(uVar4 << 0xb) >> 0x1f;
            func_0x000107c3aa40();
            func_0x000107c3a9c8();
            puVar17 = puVar16;
            if (iVar28 != 0) {
              func_0x000107c3aa38();
              puVar17 = puVar16;
            }
            func_0x000107c31774();
            uVar9 = uVar1 == 1;
            if (0 < (int)uVar1) {
              func_0x000107c3aa8c();
              goto code_r0x0001003a9840;
            }
          }
        }
        else {
          bVar10 = (uVar4 & 0xff) != 2 && (uVar27 == uVar1 || (int)(uVar27 - uVar1) < 0);
          func_0x000107c3aa78(((ulong)puVar20 >> 0x20) + uVar19);
          puVar17 = extraout_x8_05;
          iVar23 = extraout_w9;
          if (!bVar10) {
            puVar17 = extraout_x12;
            iVar23 = extraout_w11;
          }
          uVar9 = ((ulong)auVar7 & 0x10000000000000) == 0;
          puVar16 = extraout_x8_05;
          iVar6 = extraout_w9;
          if (!(bool)uVar9) {
            puVar16 = puVar17;
            iVar6 = iVar23;
          }
          func_0x000107c3aa40();
          func_0x000107c3a9c8();
          if (iVar28 != 0) {
            func_0x000107c3aa38();
          }
          func_0x000107c3aab0();
          func_0x000107c3aa8c();
          func_0x000107330b24(puVar16,(ulong)puVar20 >> 0x20);
          puVar17 = puVar16;
          if ((uVar4 >> 0x14 & 1) != 0) {
            puVar17 = (undefined8 *)((long)puVar16 + 1);
            *(undefined1 *)puVar16 = 0x2e;
            uVar9 = iVar6 == 1;
            if (0 < iVar6) {
              func_0x000107c3aa8c(puVar17);
code_r0x0001003a9840:
              func_0x000107330b24();
            }
          }
        }
        func_0x000107c3a9c8();
        break;
      }
      puVar17 = (undefined8 *)(ulong)(uVar1 - 1);
      iVar23 = 0;
      if (uVar11 != 1) {
        iVar23 = 0x2e;
      }
      uVar1 = uVar27 - uVar11 & ((int)(uVar27 - uVar11) >> 0x1f ^ 0xffffffffU);
      bVar10 = (uVar18 & 0x100000) != 0;
      if (bVar10) {
        iVar23 = 0x2e;
      }
      uVar11 = 0;
      if (bVar10) {
        uVar19 = uVar1 + uVar19;
        uVar11 = uVar1;
      }
      uVar24 = 0x65;
      if (((ulong)auVar7 & 0x1000000000000) != 0) {
        uVar24 = 0x45;
      }
      func_0x000107c3aa94(uVar19);
      uVar9 = iVar23 == 0;
      func_0x000107c3aa40();
      if (iVar28 != 0) {
        func_0x000107c3aa38();
      }
      func_0x000107c31774();
      if (uVar11 != 0) {
        func_0x000107c3aa8c();
        func_0x000107330b24(puVar16,uVar11);
      }
      *(undefined1 *)puVar16 = uVar24;
      func_0x000107330ac0(puVar17,(long)puVar16 + 1);
    }
    break;
  case 9:
    puVar17 = (undefined8 *)auStack_220;
    auStack_220 = (undefined1  [8])*param_4;
    func_0x000107330414(extraout_x8,puVar17);
    break;
  case 10:
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    puStack_258 = (undefined8 *)0x0;
    if ((int)uVar11 < 0) {
      puStack_258 = (undefined8 *)0x10000000000;
      dVar31 = -dVar31;
    }
    uVar9 = (~uVar11 & 0x7ff00000) == 0;
    if ((bool)uVar9) {
      uVar9 = ABS(dVar31) == INFINITY;
      func_0x0001073304d4(extraout_x8,uVar9,&UNK_10e60db10,&puStack_258);
    }
    else {
      func_0x000107c31748();
      auStack_220 = (undefined1  [8])puVar20;
      puStack_218 = puVar21;
      func_0x000107330548(extraout_x8,auStack_220,&UNK_10e60db10,puStack_258,0x2e);
    }
    break;
  case 0xb:
    func_0x000107c3aa80();
    if (dVar14 == 0.0) goto code_r0x0001003a98d0;
    dVar12 = dVar14;
    func_0x000107c613d0(dVar14);
    func_0x000107c31778(extraout_x8,dVar14,dVar12);
    break;
  case 0xc:
    func_0x000107c3aa80();
    func_0x000107c31778(extraout_x8);
    break;
  case 0xd:
    func_0x000107c3aa80();
    func_0x000107c3177c();
    uVar29 = ((ulong)puVar15 & 0xffffffff) + 2;
    func_0x000107c3aa40();
    puVar20 = (undefined8 *)(puVar15 + 1);
    *puVar15 = 0x7830;
    func_0x0001003ac67c(uStack_8);
    if ((bool)uVar9) {
      func_0x000107c3aa48();
      func_0x000107c3aa4c();
      puVar21 = (undefined1 *)((long)puVar20 + (long)iVar28);
      do {
        puVar21 = puVar21 + -1;
        *puVar21 = (&UNK_10e60dabc)[uVar29 & 0xf];
        bVar10 = 0xf < uVar29;
        uVar29 = uVar29 >> 4;
      } while (bVar10);
      return puVar20;
    }
    goto LAB_1003a98c8;
  case 0xe:
    func_0x0001003a9974(*param_4);
    puStack_258 = (undefined8 *)auStack_220;
    puStack_218 = auStack_200;
    uStack_208 = 500;
    uStack_210 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_250 = 0;
    uStack_240 = 0;
    auStack_220 = (undefined1  [8])extraout_x8_02;
    (*pcVar8)();
    func_0x0001003ac6b8();
    goto code_r0x0001003a9298;
  }
LAB_1003a92a0:
  func_0x0001003ac67c(uStack_8);
  puVar20 = puVar17;
  if ((bool)uVar9) {
    return puVar17;
  }
LAB_1003a98c8:
  func_0x000107c60e78();
LAB_1003a98cc:
  func_0x000107c3aa14();
code_r0x0001003a98d0:
  func_0x000107c3a9ec();
  func_0x000106e53aac();
  func_0x000107c60e54(puVar20,&PTR_DAT_110d9ebd0,&DAT_10bd486fc);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1003a9900);
  (*pcVar8)();
}



/* Entry: 1003a9204; end: 1003a994b;  */

/* WARNING: Possible PIC construction at 0x000107330270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107330348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107330274) */
/* WARNING: Removing unreachable block (ram,0x000107330298) */
/* WARNING: Removing unreachable block (ram,0x000107330290) */
/* WARNING: Removing unreachable block (ram,0x00010733034c) */
/* WARNING: Removing unreachable block (ram,0x000107330370) */
/* WARNING: Removing unreachable block (ram,0x000107330368) */
/* WARNING: Removing unreachable block (ram,0x000107344d98) */

undefined8 * FUN_1003a9204(undefined8 *param_1,undefined1 *param_2,ulong param_3,double *param_4)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  undefined1 auVar7 [8];
  code *pcVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  double dVar12;
  long lVar13;
  double dVar14;
  undefined2 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar18;
  undefined8 *extraout_x8_05;
  undefined8 *puVar19;
  long extraout_x8_06;
  undefined1 *puVar20;
  uint uVar21;
  int iVar22;
  int extraout_w9;
  undefined1 uVar23;
  int extraout_w11;
  undefined8 *extraout_x12;
  long lVar24;
  undefined8 *puVar25;
  uint uVar26;
  int iVar27;
  ulong uVar28;
  ulong uVar29;
  float fVar30;
  double dVar31;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined1 auStack_220 [8];
  undefined1 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [400];
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong uStack_60;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 uStack_3d;
  undefined1 auStack_3c [28];
  ulong uStack_20;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  FUN_1003a994c();
  puVar20 = param_2;
  uVar28 = param_3;
  func_0x0001003a9964();
  iVar27 = (int)uVar28;
  uVar9 = puVar20 == (undefined1 *)0x2;
  uStack_8 = extraout_x8_00;
  if ((!(bool)uVar9) || (puVar19 = param_1, FUN_100574918(), (int)puVar19 == 0)) {
    func_0x0001003a9974();
    puStack_218 = auStack_200;
    uStack_208 = 500;
    uStack_210 = 0;
    auStack_220 = (undefined1  [8])extraout_x8_01;
    FUN_1003a9984(auStack_220,param_1,param_2,param_3,param_4,0);
    func_0x0001003ac6b8();
code_r0x0001003a9298:
    puVar17 = (undefined8 *)auStack_220;
    func_0x0001003ac644(puVar17);
    goto LAB_1003a92a0;
  }
  if ((long)param_3 < 0) {
    if ((0 < (int)(uint)param_3) && (uVar1 = *(uint *)(param_4 + 2), uVar1 != 0))
    goto LAB_1003a92c8;
    goto LAB_1003a98cc;
  }
  uVar1 = (uint)param_3 & 0xf;
  if ((param_3 & 0xf) == 0) goto LAB_1003a98cc;
LAB_1003a92c8:
  uVar1 = uVar1 - 1;
  uVar9 = uVar1 == 0xe;
  if (0xe < uVar1) {
    func_0x000107c3aa80();
    puVar17 = puVar19;
    goto LAB_1003a92a0;
  }
  pcVar8 = (code *)param_4[1];
  fVar5 = *(float *)param_4;
  uVar28 = (ulong)(uint)fVar5;
  uVar11 = *(uint *)((long)param_4 + 4);
  dVar31 = *param_4;
  puVar15 = (undefined2 *)*param_4;
  dVar12 = *param_4;
  dVar14 = *param_4;
  puVar17 = extraout_x8;
  uStack_60 = uVar28;
  uStack_20 = uVar28;
  switch(uVar1) {
  case 0:
    puVar17 = (undefined8 *)auStack_220;
    if ((int)fVar5 < 0) {
      puVar17 = (undefined8 *)(auStack_220 + 1);
      auStack_220[0] = 0x2d;
    }
    uVar9 = fVar5 == 0.0;
    fVar30 = (float)-(int)fVar5;
    if (-1 < (int)fVar5) {
      fVar30 = fVar5;
    }
    uVar29 = (ulong)(uint)fVar30;
    uVar28 = uVar29;
    func_0x00010054bacc(uVar29);
    FUN_10054bb78(puVar17,uVar29,uVar28);
    func_0x000107c3a9d4();
    break;
  case 1:
    uVar29 = uVar28;
    func_0x00010054bacc(uVar28);
    puVar17 = (undefined8 *)auStack_220;
    FUN_10054bb78(puVar17,uVar28,uVar29);
    func_0x000107c3a9d4();
    break;
  case 2:
    func_0x000107c3aa7c();
    if ((bool)uVar9) {
      puVar17 = (undefined8 *)(uVar28 | extraout_x8_03 << 0x20);
      func_0x000107c3aa4c(extraout_x8);
      func_0x0001073447e0();
      puStack_48 = &UNK_10733034c;
      puStack_70 = param_2;
      pcStack_68 = pcVar8;
      puStack_50 = auStack_10;
      func_0x000107345c14(auStack_3c);
      puVar19 = (undefined8 *)-(long)puVar17;
      if (-1 < (long)puVar17) {
        puVar19 = puVar17;
      }
      FUN_1003b0470(puVar19);
      if ((long)pcVar8 < 0) {
        *(undefined1 *)extraout_x8 = 0x2d;
      }
      func_0x000107345ba8();
      func_0x0001003b04f4();
      return puVar17;
    }
    goto LAB_1003a98c8;
  case 3:
    func_0x000107c3aa7c();
    if ((bool)uVar9) {
      puVar19 = (undefined8 *)(uVar28 | extraout_x8_04 << 0x20);
      func_0x000107c3aa4c(extraout_x8,puVar19);
      func_0x0001073447e0();
      puStack_48 = &UNK_107330274;
      puStack_50 = auStack_10;
      FUN_100a2b988(&uStack_3d);
      FUN_1003b0470(puVar19);
      func_0x000107345dfc();
      func_0x0001003b04f4();
      return puVar19;
    }
    goto LAB_1003a98c8;
  case 4:
    puVar17 = (undefined8 *)auStack_220;
    if ((long)pcVar8 < 0) {
      puVar17 = (undefined8 *)(auStack_220 + 1);
      auStack_220[0] = 0x2d;
    }
    uVar28 = (long)pcVar8 >> 0x3f;
    lVar2 = ((ulong)*param_4 ^ uVar28) - uVar28;
    uVar9 = lVar2 == 0;
    lVar24 = ((ulong)pcVar8 ^ uVar28) - (uVar28 + (((ulong)*param_4 ^ uVar28) < uVar28));
    lVar13 = lVar2;
    func_0x000107c3176c(lVar2,lVar24);
    func_0x000107c31770(puVar17,lVar2,lVar24,lVar13);
    func_0x000107c3a9d4();
    break;
  case 5:
    dVar14 = dVar12;
    func_0x000107c3176c(dVar12,pcVar8);
    puVar17 = (undefined8 *)auStack_220;
    func_0x000107c31770(puVar17,dVar12,pcVar8,dVar14);
    func_0x000107c3a9d4();
    break;
  case 6:
    uVar9 = ((uint)fVar5 & 1) == 0;
    lVar2 = 4;
    if ((bool)uVar9) {
      lVar2 = 5;
    }
    pcVar3 = "true";
    if ((bool)uVar9) {
      pcVar3 = "false";
    }
    func_0x000107c610b4(auStack_220,pcVar3,lVar2);
    func_0x00010015492c(extraout_x8,auStack_220,auStack_220 + lVar2);
    break;
  case 7:
    auStack_220[0] = SUB41(fVar5,0);
    func_0x00010015492c(extraout_x8,auStack_220,auStack_220 + 1);
    break;
  case 8:
    fVar30 = fVar5;
    func_0x000107c3aa80();
    auStack_220 = (undefined1  [8])0x0;
    if ((int)fVar5 < 0) {
      auStack_220 = (undefined1  [8])0x10000000000;
      fVar30 = -fVar30;
    }
    if ((((uint)fVar5 ^ 0xffffffff) & 0x7f800000) == 0) {
      uVar9 = ABS(fVar30) == INFINITY;
      func_0x0001073304d4(extraout_x8,uVar9,&UNK_10e60dafc,auStack_220);
    }
    else {
      func_0x000107c31744();
      auVar7 = auStack_220;
      uVar29 = (ulong)auStack_220 >> 0x20;
      puVar16 = puVar19;
      func_0x00010054bacc();
      uVar28 = (ulong)auVar7 >> 0x28 & 0xff;
      iVar27 = (int)uVar28;
      uVar11 = (uint)puVar16;
      uVar1 = uVar11;
      if (iVar27 != 0) {
        uVar1 = uVar11 + 1;
      }
      uVar18 = (ulong)uVar1;
      uVar1 = uVar11 + (int)((ulong)puVar19 >> 0x20);
      uVar4 = auVar7._4_4_;
      uVar26 = auVar7._0_4_;
      if (((ulong)auVar7 >> 0x20 & 0xff) == 0) {
        if (-4 < (int)uVar1) {
          uVar21 = uVar26;
          if ((int)uVar26 < 1) {
            uVar21 = 0x10;
          }
          if ((int)uVar1 <= (int)uVar21) goto code_r0x0001003a9768;
        }
      }
      else if ((uVar4 & 0xff) != 1) {
code_r0x0001003a9768:
        if ((long)puVar19 < 0) {
          if ((int)uVar1 < 1) {
            uVar4 = uVar26;
            if ((int)(uVar26 + uVar1) < 0 == SCARRY4(uVar26,uVar1)) {
              uVar4 = -uVar1;
            }
            uVar9 = uVar26 < 0x80000000 && uVar11 == 0;
            if (uVar26 >= 0x80000000 || uVar11 != 0) {
              uVar4 = -uVar1;
            }
            puVar25 = (undefined8 *)(ulong)uVar4;
            func_0x000107c3aa40();
            func_0x000107c3a9c8();
            puVar19 = puVar16;
            if (iVar27 != 0) {
              puVar19 = (undefined8 *)((long)puVar16 + 1);
              *(undefined *)puVar16 = (&UNK_10e60dacd)[uVar28];
            }
            puVar17 = (undefined8 *)((long)puVar19 + 1);
            *(undefined1 *)puVar19 = 0x30;
            if ((((ulong)auVar7 & 0x10000000000000) != 0 || uVar11 != 0) || uVar4 != 0) {
              *(undefined1 *)((long)puVar19 + 1) = 0x2e;
              func_0x000107c3aa8c(puVar17);
              func_0x000107330b24(extraout_x8_06 + 2,puVar25);
              puVar17 = puVar25;
              func_0x000107c3aab0();
            }
          }
          else {
            uVar1 = uVar26 - uVar11 & (int)(uVar4 << 0xb) >> 0x1f;
            func_0x000107c3aa40();
            func_0x000107c3a9c8();
            puVar17 = puVar16;
            if (iVar27 != 0) {
              func_0x000107c3aa38();
              puVar17 = puVar16;
            }
            func_0x000107c31774();
            uVar9 = uVar1 == 1;
            if (0 < (int)uVar1) {
              func_0x000107c3aa8c();
              goto code_r0x0001003a9840;
            }
          }
        }
        else {
          bVar10 = (uVar4 & 0xff) != 2 && (uVar26 == uVar1 || (int)(uVar26 - uVar1) < 0);
          func_0x000107c3aa78(((ulong)puVar19 >> 0x20) + uVar18);
          puVar17 = extraout_x8_05;
          iVar22 = extraout_w9;
          if (!bVar10) {
            puVar17 = extraout_x12;
            iVar22 = extraout_w11;
          }
          uVar9 = ((ulong)auVar7 & 0x10000000000000) == 0;
          puVar16 = extraout_x8_05;
          iVar6 = extraout_w9;
          if (!(bool)uVar9) {
            puVar16 = puVar17;
            iVar6 = iVar22;
          }
          func_0x000107c3aa40();
          func_0x000107c3a9c8();
          if (iVar27 != 0) {
            func_0x000107c3aa38();
          }
          func_0x000107c3aab0();
          func_0x000107c3aa8c();
          func_0x000107330b24(puVar16,(ulong)puVar19 >> 0x20);
          puVar17 = puVar16;
          if ((uVar4 >> 0x14 & 1) != 0) {
            puVar17 = (undefined8 *)((long)puVar16 + 1);
            *(undefined1 *)puVar16 = 0x2e;
            uVar9 = iVar6 == 1;
            if (0 < iVar6) {
              func_0x000107c3aa8c(puVar17);
code_r0x0001003a9840:
              func_0x000107330b24();
            }
          }
        }
        func_0x000107c3a9c8();
        break;
      }
      puVar17 = (undefined8 *)(ulong)(uVar1 - 1);
      iVar22 = 0;
      if (uVar11 != 1) {
        iVar22 = 0x2e;
      }
      uVar1 = uVar26 - uVar11 & ((int)(uVar26 - uVar11) >> 0x1f ^ 0xffffffffU);
      bVar10 = (uVar29 & 0x100000) != 0;
      if (bVar10) {
        iVar22 = 0x2e;
      }
      uVar11 = 0;
      if (bVar10) {
        uVar18 = uVar1 + uVar18;
        uVar11 = uVar1;
      }
      uVar23 = 0x65;
      if (((ulong)auVar7 & 0x1000000000000) != 0) {
        uVar23 = 0x45;
      }
      func_0x000107c3aa94(uVar18);
      uVar9 = iVar22 == 0;
      func_0x000107c3aa40();
      if (iVar27 != 0) {
        func_0x000107c3aa38();
      }
      func_0x000107c31774();
      if (uVar11 != 0) {
        func_0x000107c3aa8c();
        func_0x000107330b24(puVar16,uVar11);
      }
      *(undefined1 *)puVar16 = uVar23;
      func_0x000107330ac0(puVar17,(long)puVar16 + 1);
    }
    break;
  case 9:
    puVar17 = (undefined8 *)auStack_220;
    auStack_220 = (undefined1  [8])*param_4;
    func_0x000107330414(extraout_x8,puVar17);
    break;
  case 10:
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    puStack_258 = (undefined8 *)0x0;
    if ((int)uVar11 < 0) {
      puStack_258 = (undefined8 *)0x10000000000;
      dVar31 = -dVar31;
    }
    uVar9 = (~uVar11 & 0x7ff00000) == 0;
    if ((bool)uVar9) {
      uVar9 = ABS(dVar31) == INFINITY;
      func_0x0001073304d4(extraout_x8,uVar9,&UNK_10e60db10,&puStack_258);
    }
    else {
      func_0x000107c31748();
      auStack_220 = (undefined1  [8])puVar19;
      puStack_218 = puVar20;
      func_0x000107330548(extraout_x8,auStack_220,&UNK_10e60db10,puStack_258,0x2e);
    }
    break;
  case 0xb:
    func_0x000107c3aa80();
    if (dVar14 == 0.0) goto code_r0x0001003a98d0;
    dVar12 = dVar14;
    func_0x000107c613d0(dVar14);
    func_0x000107c31778(extraout_x8,dVar14,dVar12);
    break;
  case 0xc:
    func_0x000107c3aa80();
    func_0x000107c31778(extraout_x8);
    break;
  case 0xd:
    func_0x000107c3aa80();
    func_0x000107c3177c();
    uVar28 = ((ulong)puVar15 & 0xffffffff) + 2;
    func_0x000107c3aa40();
    puVar19 = (undefined8 *)(puVar15 + 1);
    *puVar15 = 0x7830;
    func_0x0001003ac67c(uStack_8);
    if ((bool)uVar9) {
      func_0x000107c3aa48();
      func_0x000107c3aa4c();
      puVar20 = (undefined1 *)((long)puVar19 + (long)iVar27);
      do {
        puVar20 = puVar20 + -1;
        *puVar20 = (&UNK_10e60dabc)[uVar28 & 0xf];
        bVar10 = 0xf < uVar28;
        uVar28 = uVar28 >> 4;
      } while (bVar10);
      return puVar19;
    }
    goto LAB_1003a98c8;
  case 0xe:
    func_0x0001003a9974(*param_4);
    puStack_258 = (undefined8 *)auStack_220;
    puStack_218 = auStack_200;
    uStack_208 = 500;
    uStack_210 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_250 = 0;
    uStack_240 = 0;
    auStack_220 = (undefined1  [8])extraout_x8_02;
    (*pcVar8)();
    func_0x0001003ac6b8();
    goto code_r0x0001003a9298;
  }
LAB_1003a92a0:
  func_0x0001003ac67c(uStack_8);
  puVar19 = puVar17;
  if ((bool)uVar9) {
    return puVar17;
  }
LAB_1003a98c8:
  func_0x000107c60e78();
LAB_1003a98cc:
  func_0x000107c3aa14();
code_r0x0001003a98d0:
  func_0x000107c3a9ec();
  func_0x000106e53aac();
  func_0x000107c60e54(puVar19,&PTR_DAT_110d9ebd0,&DAT_10bd486fc);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1003a9900);
  (*pcVar8)();
}



/* Entry: 1003a994c; end: 1003a9983;  */

void FUN_1003a994c(void)

{
  return;
}



/* Entry: 1003a9984; end: 1003a9c1b;  */

void FUN_1003a9984(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  undefined1 uVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  undefined8 extraout_x8;
  uint uVar6;
  char *unaff_x20;
  char *pcStack_98;
  undefined1 *puStack_90;
  
  lVar5 = param_3;
  FUN_1003a9c1c();
  func_0x0001003a9964();
  if ((lVar5 == 2) && (pcVar3 = unaff_x20, FUN_100574918(), (int)pcVar3 != 0)) {
    if ((long)param_4 < 0) {
      if (((int)(uint)param_4 < 1) || (uVar6 = *(uint *)(param_5 + 2), uVar6 == 0))
      goto LAB_1003a9c18;
    }
    else {
      uVar6 = (uint)param_4 & 0xf;
      if ((param_4 & 0xf) == 0) goto LAB_1003a9c18;
    }
    uVar2 = uVar6 - 1 == 0xe;
    switch(uVar6 - 1) {
    case 0:
      FUN_1005d4750();
      break;
    case 1:
      FUN_10054bb00();
      break;
    case 2:
      func_0x00010057492c();
      FUN_100699010();
      break;
    case 3:
      func_0x00010057492c();
      FUN_1003b0404();
      break;
    case 4:
      func_0x00010057492c();
      func_0x000107c3178c();
      break;
    case 5:
      func_0x00010057492c();
      func_0x000107c31790();
      break;
    case 6:
      func_0x000107c31794();
      break;
    case 7:
      func_0x000107c3179c();
      break;
    case 8:
      func_0x000107c317a0(*(undefined4 *)param_5);
      break;
    case 9:
      func_0x000107c317a4(*param_5);
      break;
    case 10:
      func_0x000107c317a8(*param_5);
      break;
    case 0xb:
      func_0x00010057492c();
      FUN_1004637d0();
      break;
    case 0xc:
      func_0x00010057492c();
      FUN_10046381c();
      break;
    case 0xd:
      func_0x00010057492c();
      func_0x000107c317ac();
      break;
    case 0xe:
      FUN_1003ab8fc(&stack0xffffffffffffff78,*param_5,param_5[1]);
    }
  }
  else {
    pcVar3 = unaff_x20 + param_3;
    if (param_3 < 0x20) {
      while (pcVar4 = unaff_x20, uVar2 = pcVar4 == pcVar3, !(bool)uVar2) {
        if (*pcVar4 == '}') {
          bVar1 = pcVar4 + 1 == pcVar3;
          if ((bVar1) || (func_0x000107c3aa84(), !bVar1)) goto LAB_1003a9c14;
          func_0x0001003a9c28();
          unaff_x20 = pcVar4 + 2;
        }
        else {
          unaff_x20 = pcVar4 + 1;
          if (*pcVar4 == '{') {
            func_0x0001003a9c28();
            FUN_1003a9db4(pcVar4,pcVar3,&stack0xffffffffffffff78);
            unaff_x20 = pcVar4;
          }
        }
      }
      func_0x0001003ac6ac(&stack0xffffffffffffff78);
      FUN_1003a9c38();
    }
    else {
      puStack_90 = &stack0xffffffffffffff78;
      while (uVar2 = unaff_x20 == pcVar3, !(bool)uVar2) {
        uVar2 = *unaff_x20 == '{';
        pcStack_98 = unaff_x20;
        if (!(bool)uVar2) {
          pcVar4 = unaff_x20 + 1;
          FUN_1005d4714(pcVar4,pcVar3,0x7b,&pcStack_98);
          if ((int)pcVar4 == 0) {
            func_0x0001003ac6ac(&puStack_90);
            FUN_1005d468c();
            break;
          }
        }
        FUN_1005d468c(&puStack_90,unaff_x20,pcStack_98);
        FUN_1003a9db4(pcStack_98,pcVar3,&stack0xffffffffffffff78);
        unaff_x20 = pcStack_98;
      }
    }
  }
  func_0x0001003ac67c(extraout_x8);
  if ((bool)uVar2) {
    return;
  }
  func_0x000107c60e78();
LAB_1003a9c14:
  func_0x000107c3aaac();
LAB_1003a9c18:
  func_0x000107c3aa14();
  return;
}



/* Entry: 1003a9c1c; end: 1003a9c37;  */

void FUN_1003a9c1c(void)

{
  return;
}



/* Entry: 1003a9c38; end: 1003a9c6f;  */

void FUN_1003a9c38(long param_1)

{
  long unaff_x21;
  undefined8 uVar1;
  
  FUN_1003a9c70();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001003a9c80();
  func_0x0001003a9cc0();
  FUN_1003a9d20();
  *(undefined8 *)(unaff_x21 + 0x20) = uVar1;
  return;
}



/* Entry: 1003a9c70; end: 1003a9c87;  */

void FUN_1003a9c70(void)

{
  return;
}



/* Entry: 1003a9c88; end: 1003a9cb7;  */

long FUN_1003a9c88(long param_1,long param_2)

{
  if (*(ulong *)(param_1 + 0x18) < (ulong)(*(long *)(param_1 + 0x10) + param_2)) {
    func_0x0001006769e0();
  }
  return param_1;
}



/* Entry: 1003a9cb8; end: 1003a9cd7;  */

void FUN_1003a9cb8(void)

{
  return;
}



/* Entry: 1003a9cd8; end: 1003a9d1f;  */

void FUN_1003a9cd8(void)

{
  undefined8 in_x3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001003a9ccc();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 1) {
    FUN_1003a9d4c(in_x3,unaff_x21);
  }
  func_0x0001003a9d9c();
  return;
}



/* Entry: 1003a9d20; end: 1003a9d4b;  */

void FUN_1003a9d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1003a9cd8(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1003a9d4c; end: 1003a9d93;  */

void FUN_1003a9d4c(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  uVar2 = lVar3 + 1;
  if (*(ulong *)(param_1 + 0x18) < uVar2) {
    func_0x0001006769e0();
    lVar3 = *(long *)(param_1 + 0x10);
    uVar2 = lVar3 + 1;
  }
  uVar1 = *param_2;
  *(ulong *)(param_1 + 0x10) = uVar2;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar3) = uVar1;
  return;
}



/* Entry: 1003a9d94; end: 1003a9db3;  */

void FUN_1003a9d94(void)

{
  return;
}



/* Entry: 1003a9db4; end: 1003ab807;  */

void FUN_1003a9db4(ulong param_1,undefined **param_2,long param_3)

{
  undefined ****ppppuVar1;
  undefined ***pppuVar2;
  uint uVar3;
  undefined ***pppuVar4;
  code *pcVar5;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  undefined *****pppppuVar14;
  char *pcVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined ***pppuVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined ****ppppuVar21;
  uint uVar22;
  int extraout_w8;
  uint extraout_w8_00;
  int iVar23;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  uint uVar24;
  int extraout_w8_07;
  int extraout_w8_08;
  undefined8 extraout_x8;
  ulong uVar25;
  long extraout_x8_00;
  undefined **extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  undefined *****extraout_x8_05;
  undefined *****extraout_x8_06;
  undefined *****extraout_x8_07;
  undefined *****extraout_x8_08;
  undefined8 extraout_x8_09;
  undefined8 extraout_x8_10;
  undefined2 *puVar26;
  undefined2 *puVar27;
  undefined **extraout_x8_11;
  undefined **ppuVar28;
  undefined **extraout_x8_12;
  long lVar29;
  undefined8 extraout_x8_13;
  undefined8 extraout_x8_14;
  ulong extraout_x8_15;
  byte extraout_w9;
  byte bVar30;
  byte extraout_w9_00;
  byte extraout_w9_01;
  byte extraout_w9_02;
  uint extraout_w9_03;
  int extraout_w9_04;
  uint extraout_w9_05;
  uint extraout_w9_06;
  uint extraout_w9_07;
  uint extraout_w9_08;
  uint extraout_w9_09;
  uint extraout_w9_10;
  int extraout_w9_11;
  uint extraout_w9_12;
  int extraout_w9_13;
  undefined8 uVar31;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 uVar32;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  uint extraout_w10;
  uint uVar33;
  uint uVar34;
  uint extraout_w10_00;
  uint extraout_w10_01;
  undefined **extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  undefined **extraout_x10_03;
  undefined **extraout_x10_04;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 uVar35;
  undefined8 extraout_x11_01;
  undefined **ppuVar36;
  undefined **ppuVar37;
  undefined *****pppppuVar38;
  ulong *puVar39;
  ulong uVar40;
  ulong uVar41;
  long lVar42;
  byte bVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  undefined8 unaff_x30;
  float fVar47;
  double dVar48;
  undefined ***pppuStack_618;
  undefined ****ppppuStack_610;
  undefined ***pppuStack_608;
  undefined ***pppuStack_600;
  undefined ***pppuStack_5f8;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined ***pppuStack_5e0;
  byte bStack_5d8;
  byte bStack_5d7;
  undefined2 uStack_5d6;
  undefined2 uStack_5d4;
  undefined1 uStack_5d2;
  undefined1 uStack_5d1;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined ***pppuStack_5c0;
  int iStack_5b8;
  uint uStack_5b4;
  int iStack_5b0;
  undefined1 uStack_5ac;
  uint uStack_5a4;
  long lStack_5a0;
  int iStack_598;
  float fStack_590;
  undefined4 uStack_58c;
  code *pcStack_588;
  int iStack_580;
  undefined ****ppppuStack_570;
  undefined ***pppuStack_568;
  undefined ***pppuStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  code *pcStack_548;
  undefined1 uStack_540;
  undefined4 uStack_53c;
  undefined **ppuStack_350;
  undefined1 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_330 [136];
  undefined4 uStack_2a8;
  undefined **ppuStack_2a0;
  undefined1 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [136];
  undefined4 uStack_1f8;
  undefined **ppuStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [136];
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [136];
  undefined4 uStack_98;
  undefined8 uStack_88;
  
  func_0x0001003a9964();
  ppuVar37 = (undefined **)(param_1 + 1);
  if (ppuVar37 == param_2) {
    func_0x000107c31738();
LAB_1003ab638:
    func_0x000107c60e78();
LAB_1003ab63c:
    func_0x000107c317b8(&UNK_10f3dbf55);
LAB_1003ab648:
    func_0x000107c3aa98();
  }
  else {
    bVar43 = *(byte *)ppuVar37;
    uVar25 = (ulong)bVar43;
    uVar10 = bVar43 == 0x7b;
    uStack_88 = extraout_x8;
    if ((bool)uVar10) {
      FUN_1003a9c38(param_3,ppuVar37,param_1 + 2);
LAB_1003ab574:
      func_0x0001003ac67c(uStack_88);
      if ((bool)uVar10) {
        func_0x0001003ac690((byte *)((long)ppuVar37 + 1),unaff_x30);
        return;
      }
      goto LAB_1003ab638;
    }
    uVar6 = 0x7c < bVar43;
    uVar22 = (uint)bVar43;
    uVar10 = uVar22 == 0x7d;
    if ((bool)uVar10) {
      lVar29 = param_3 + 8;
      FUN_1003ab808(lVar29);
      pppppuVar14 = &ppppuStack_570;
      FUN_1003ab898(pppppuVar14,param_3 + 0x20,lVar29);
      func_0x0001003ab8d4();
      if (!(bool)uVar6 || (bool)uVar10) {
                    /* WARNING: Could not recover jumptable at 0x0001003a9e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e60cd8b)[extraout_x8_00] * 4 + 0x1003a9e40))();
        return;
      }
LAB_1003aa2a4:
      *(undefined ******)(param_3 + 0x20) = pppppuVar14;
      goto LAB_1003ab574;
    }
    if (uVar22 != 0x3a) {
      bVar11 = uVar22 - 0x30 == 9;
      if (9 < uVar22 - 0x30) {
        func_0x000107c3aa74();
        if (bVar11 || extraout_w9_03 < 0x1a) {
          ppuVar28 = (undefined **)(param_1 + 2);
          do {
            bVar11 = param_2 <= ppuVar28;
            ppuVar36 = param_2;
            if (ppuVar28 == param_2) goto LAB_1003a9ed4;
            func_0x000107c3a9e8();
            ppuVar28 = extraout_x8_01;
          } while ((!bVar11) || (extraout_w9_04 == 0x5f || extraout_w10 < 0x1a));
          ppuVar36 = (undefined **)((long)extraout_x8_01 - 1);
LAB_1003a9ed4:
          param_1 = param_3 + 0x28;
          func_0x000106e540dc(param_1,ppuVar37,(long)ppuVar36 - (long)ppuVar37);
          if ((int)param_1 < 0) {
            func_0x000107c3aa14();
            uVar25 = extraout_x8_02;
            goto LAB_1003a9ef4;
          }
          goto LAB_1003a9f5c;
        }
LAB_1003ab65c:
        func_0x000107c317b8(&UNK_10f3dbf3f);
LAB_1003ab668:
        func_0x000107c3aa98();
        goto LAB_1003ab75c;
      }
      if (uVar22 == 0x30) {
        ppuVar36 = (undefined **)(param_1 + 2);
        param_1 = 0;
LAB_1003a9f38:
        bVar11 = ppuVar36 == param_2;
        if ((!bVar11) && ((func_0x000107c3aaec(), bVar11 || (extraout_w8 == 0x7d)))) {
          func_0x000106e53d50(param_3 + 8,param_1);
          goto LAB_1003a9f5c;
        }
        goto LAB_1003ab65c;
      }
LAB_1003a9ef4:
      uVar31 = 0xccccccc;
      ppuVar37 = (undefined **)(param_1 + 2);
      uVar32 = 10;
      param_1 = 0;
      do {
        if ((uint)uVar31 < (uint)param_1) goto LAB_1003ab63c;
        uVar22 = ((int)uVar25 + (uint)param_1 * (int)uVar32) - 0x30;
        param_1 = (ulong)uVar22;
        bVar11 = param_2 <= ppuVar37;
        ppuVar36 = param_2;
        if (ppuVar37 == param_2) goto LAB_1003a9f34;
        func_0x000107c3aa70();
        uVar25 = extraout_x8_03;
        uVar31 = extraout_x9;
        ppuVar37 = extraout_x10;
        uVar32 = extraout_x11;
      } while (!bVar11);
      ppuVar36 = (undefined **)((long)extraout_x10 - 1);
LAB_1003a9f34:
      if (-1 < (int)uVar22) goto LAB_1003a9f38;
      goto LAB_1003ab63c;
    }
    param_1 = param_3 + 8;
    FUN_1003ab808(param_1);
    ppuVar36 = ppuVar37;
LAB_1003a9f5c:
    bVar11 = ppuVar36 == param_2;
    if (bVar11) goto LAB_1003ab648;
    func_0x000107c3aaec();
    if (!bVar11) {
      uVar6 = 0x7c < extraout_w8_00;
      uVar10 = extraout_w8_00 == 0x7d;
      if ((bool)uVar10) {
        pppppuVar14 = &ppppuStack_570;
        FUN_1003ab898(pppppuVar14,param_3 + 0x20,param_1);
        func_0x0001003ab8d4();
        ppuVar37 = ppuVar36;
        if (!(bool)uVar6 || (bool)uVar10) {
                    /* WARNING: Could not recover jumptable at 0x0001003a9fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10e60cdb3)[extraout_x8_04] * 4 + 0x1003a9fa4))();
          return;
        }
        goto LAB_1003aa2a4;
      }
      goto LAB_1003ab648;
    }
    ppppuVar1 = (undefined ****)(param_3 + 0x20);
    pppppuVar14 = (undefined *****)&fStack_590;
    FUN_1003ab898(pppppuVar14,ppppuVar1,param_1);
    ppuVar28 = (undefined **)((long)ppuVar36 + 1);
    if (iStack_580 != 0xf) {
      pppuStack_5e0 = (undefined ***)0xffffffff00000000;
      bStack_5d8 = 0;
      bStack_5d7 = 0;
      uStack_5d6 = 0x20;
      uStack_5d4 = 0;
      uStack_5d2 = 1;
      ppuVar37 = (undefined **)((long)ppuVar36 + 2);
      if (((ppuVar37 < param_2) && (*(byte *)ppuVar37 == 0x7d)) &&
         (bVar43 = *(byte *)ppuVar28, (*(byte *)ppuVar28 & 0xffffffdf) - 0x41 < 0x1a)) {
LAB_1003aa4e0:
        bStack_5d8 = bVar43;
        bVar43 = bStack_5d7;
        lVar29 = param_3 + 8;
        pppppuVar38 = *(undefined ******)(param_3 + 0x20);
        pppuStack_608 = *(undefined ****)(param_3 + 0x38);
        pppuStack_600 = (undefined ***)&pppuStack_5e0;
        uStack_5e8 = 0;
        uVar22 = iStack_580 - 1;
        bVar7 = 0xd < uVar22;
        bVar11 = uVar22 == 0xe;
        ppppuStack_610 = (undefined ****)pppppuVar38;
        pppuStack_5f8 = (undefined ***)ppppuVar1;
        lStack_5f0 = lVar29;
        switch(uVar22) {
        case 0:
          func_0x000107c3aa34();
          pppppuVar38 = (undefined *****)ppppuStack_610;
          break;
        case 1:
          pppuStack_560 = (undefined ***)&pppuStack_5e0;
          uStack_558 = (undefined *****)CONCAT44(uStack_558._4_4_,fStack_590);
          uStack_550 = (undefined ***)((ulong)uStack_550 & 0xffffffff00000000);
          ppppuStack_570 = (undefined ****)pppppuVar38;
          pppuStack_568 = pppuStack_608;
          func_0x000107c3aa2c();
          if (bVar7) {
            uVar10 = 0x2b;
            if (!bVar11) {
              uVar10 = 0x20;
            }
            uStack_558._0_5_ = CONCAT14(uVar10,(undefined4)uStack_558);
            uStack_550 = (undefined ***)CONCAT44(uStack_550._4_4_,1);
          }
          func_0x000107c317c4((long)(char)bStack_5d8,&ppppuStack_570);
          pppppuVar38 = (undefined *****)ppppuStack_570;
          break;
        case 2:
          func_0x000107c2992c(&ppppuStack_610,CONCAT44(uStack_58c,fStack_590),&pppuStack_5e0);
          pppppuVar38 = (undefined *****)ppppuStack_610;
          break;
        case 3:
          uStack_558 = (undefined *****)CONCAT44(uStack_58c,fStack_590);
          pppuStack_560 = (undefined ***)&pppuStack_5e0;
          uStack_550 = (undefined ***)((ulong)uStack_550 & 0xffffffff);
          ppppuStack_570 = (undefined ****)pppppuVar38;
          pppuStack_568 = pppuStack_608;
          func_0x000107c3aa2c();
          if (bVar7) {
            uVar10 = 0x2b;
            if (!bVar11) {
              uVar10 = 0x20;
            }
            uStack_550 = (undefined ***)CONCAT71(uStack_550._1_7_,uVar10);
            uStack_550 = (undefined ***)CONCAT44(1,(uint)uStack_550);
          }
          func_0x000107c29930((long)(char)bStack_5d8,&ppppuStack_570);
          pppppuVar38 = (undefined *****)ppppuStack_570;
          break;
        case 4:
          uStack_550 = (undefined ***)CONCAT44(uStack_58c,fStack_590);
          pppuStack_560 = (undefined ***)&pppuStack_5e0;
          pcStack_548 = pcStack_588;
          uStack_53c = 0;
          if ((long)pcStack_588 < 0) {
            uStack_540 = 0x2d;
            uStack_53c = 1;
            bVar11 = uStack_550 != (undefined ***)0x0;
            uStack_550 = (undefined ***)-(long)uStack_550;
            pcStack_548 = (code *)-(long)(pcStack_588 + bVar11);
            ppppuStack_570 = (undefined ****)pppppuVar38;
            pppuStack_568 = pppuStack_608;
          }
          else {
            ppppuStack_570 = (undefined ****)pppppuVar38;
            pppuStack_568 = pppuStack_608;
            func_0x000107c3aa2c();
            if (bVar7) {
              uStack_540 = 0x2b;
              if (!bVar11) {
                uStack_540 = 0x20;
              }
              uStack_53c = 1;
            }
          }
          func_0x000107c317c8((long)(char)bStack_5d8,&ppppuStack_570);
          pppppuVar38 = (undefined *****)ppppuStack_570;
          break;
        case 5:
          uStack_550 = (undefined ***)CONCAT44(uStack_58c,fStack_590);
          pppuStack_560 = (undefined ***)&pppuStack_5e0;
          pcStack_548 = pcStack_588;
          uStack_53c = 0;
          ppppuStack_570 = (undefined ****)pppppuVar38;
          pppuStack_568 = pppuStack_608;
          func_0x000107c3aa2c();
          if (bVar7) {
            uStack_540 = 0x2b;
            if (!bVar11) {
              uStack_540 = 0x20;
            }
            uStack_53c = 1;
          }
          func_0x000107c317c8((long)(char)bStack_5d8,&ppppuStack_570);
          pppppuVar38 = (undefined *****)ppppuStack_570;
          break;
        case 6:
          if (bStack_5d8 == 0) {
            uVar31 = 4;
            if (fStack_590._0_1_ == '\0') {
              uVar31 = 5;
            }
            pcVar15 = "true";
            if (fStack_590._0_1_ == '\0') {
              pcVar15 = "false";
            }
            FUN_1003ac46c(pppppuVar38,pcVar15,uVar31,&pppuStack_5e0);
          }
          else {
            func_0x000107c3aa34();
            pppppuVar38 = (undefined *****)ppppuStack_610;
          }
          break;
        case 7:
          if ((bStack_5d8 == 0) || (bStack_5d8 == 99)) {
            if (0xf < bStack_5d7 || (int)((ulong)bStack_5d7 & 0xf) == 4) {
              func_0x000107c31738();
              goto LAB_1003ab75c;
            }
            ppppuStack_570 = (undefined ****)CONCAT71(ppppuStack_570._1_7_,fStack_590._0_1_);
            uVar25 = 0;
            if (((ulong)pppuStack_5e0 & 0xffffffff) != 0) {
              uVar25 = ((ulong)pppuStack_5e0 & 0xffffffff) - 1;
            }
            cVar9 = (&UNK_10e60dad1)[(ulong)bStack_5d7 & 0xf];
            func_0x0001003a9c80();
            func_0x000107c3a9e0();
            func_0x000107c3aa58();
            func_0x0001003ac550(pppppuVar14,uVar25 - (uVar25 >> ((long)cVar9 & 0x3fU)),
                                (ulong)&pppuStack_5e0 | 10);
            pppppuVar38 = pppppuVar14;
            ppppuStack_610 = (undefined ****)pppppuVar14;
          }
          else {
            func_0x000107c3aa34();
            pppppuVar38 = (undefined *****)ppppuStack_610;
          }
          break;
        case 8:
          puStack_138 = (undefined1 *)
                        CONCAT17(uStack_5d1,
                                 CONCAT16(uStack_5d2,
                                          CONCAT24(uStack_5d4,
                                                   CONCAT22(uStack_5d6,
                                                            CONCAT11(bStack_5d7,bStack_5d8)))));
          uStack_140 = (undefined **)pppuStack_5e0;
          pppppuVar38 = (undefined *****)&uStack_140;
          func_0x000107c31784();
          func_0x000107c3aa88();
          func_0x000107c3a9cc();
          fVar47 = fStack_590;
          uVar22 = extraout_w11_01;
          if ((extraout_x10_02 & 0x80000000) != 0) {
            fVar47 = -fStack_590;
            uVar22 = extraout_w9_07;
          }
          if ((fVar47 < INFINITY) || (fVar47 != INFINITY)) {
            uVar33 = extraout_w8_03 & 0xf;
            cVar8 = SBORROW4(uVar33,4);
            cVar9 = (int)(uVar33 - 4) < 0;
            uVar10 = uVar33 == 4;
            if (((bool)uVar10) && ((uVar22 & 0xff00) != 0)) {
              func_0x000107c3aa1c();
              func_0x000107c3aa28();
              func_0x000107c3aa58();
              uVar22 = uVar22 & 0xffff00ff;
              if ((int)uStack_140 != 0) {
                uStack_140 = (undefined **)CONCAT44(uStack_140._4_4_,(int)uStack_140 + -1);
              }
            }
            func_0x000107c3aae8();
            func_0x000107c3aa6c(0);
            if ((bool)uVar10) {
              if ((uVar22 >> 8 & 0xff) != 0) {
                func_0x000107c3aac4();
              }
              pppppuVar38 = (undefined *****)((ulong)uStack_140 >> 0x20);
              func_0x000107c31750((double)fVar47,pppppuVar38,(ulong)uVar22 << 0x20 | 10,
                                  &ppppuStack_570);
              func_0x000107c3aab8();
            }
            else {
              func_0x000107c3aae0();
              uVar33 = 6;
              if (cVar9 == cVar8) {
                uVar33 = extraout_w9_09;
              }
              if (extraout_w8_06 == 1) {
                if (uVar33 == 0x7fffffff) {
                  func_0x000107c3a9ec();
                  func_0x000107c3aa00();
                  func_0x000107c3a9ac();
                  goto LAB_1003ab75c;
                }
                uVar33 = uVar33 + 1;
              }
              pppppuVar38 = (undefined *****)(ulong)uVar33;
              func_0x000107c31754((double)fVar47,pppppuVar38,
                                  ((ulong)(uVar22 | 0xc0000) & 0x7fffffff) << 0x20 | 10,
                                  &ppppuStack_570);
              if ((uVar22 & 0x20000) != 0) {
                func_0x000107c3aac8();
              }
              func_0x000107c3aa60();
              func_0x000107c3aa30();
            }
code_r0x0001003ab554:
            func_0x0001003ac644(&ppppuStack_570);
          }
          else {
            func_0x000107c3aa20();
          }
          break;
        case 9:
          puStack_138 = (undefined1 *)
                        CONCAT17(uStack_5d1,
                                 CONCAT16(uStack_5d2,
                                          CONCAT24(uStack_5d4,
                                                   CONCAT22(uStack_5d6,
                                                            CONCAT11(bStack_5d7,bStack_5d8)))));
          uStack_140 = (undefined **)pppuStack_5e0;
          pppppuVar38 = (undefined *****)&uStack_140;
          func_0x000107c31784();
          func_0x000107c3aa88();
          func_0x000107c3a9cc();
          dVar48 = (double)CONCAT44(uStack_58c,fStack_590);
          uVar22 = extraout_w11;
          if ((extraout_x10_00 & 0x8000000000000000) != 0) {
            dVar48 = -(double)CONCAT44(uStack_58c,fStack_590);
            uVar22 = extraout_w9_05;
          }
          if ((dVar48 < INFINITY) || (dVar48 != INFINITY)) {
            uVar33 = extraout_w8_01 & 0xf;
            cVar8 = SBORROW4(uVar33,4);
            cVar9 = (int)(uVar33 - 4) < 0;
            uVar10 = uVar33 == 4;
            if (((bool)uVar10) && ((uVar22 & 0xff00) != 0)) {
              func_0x000107c3aa1c();
              func_0x000107c3aa28();
              func_0x000107c3aa58();
              uVar22 = uVar22 & 0xffff00ff;
              if ((int)uStack_140 != 0) {
                uStack_140 = (undefined **)CONCAT44(uStack_140._4_4_,(int)uStack_140 + -1);
              }
            }
            func_0x000107c3aae8();
            func_0x000107c3aa6c(0);
            if ((bool)uVar10) {
              if ((uVar22 >> 8 & 0xff) != 0) {
                func_0x000107c3aac4();
              }
              pppppuVar38 = (undefined *****)((ulong)uStack_140 >> 0x20);
              func_0x000107c31750(dVar48,pppppuVar38,(ulong)uVar22 << 0x20 | 10,&ppppuStack_570);
              func_0x000107c3aab8();
            }
            else {
              func_0x000107c3aae0();
              uVar33 = 6;
              if (cVar9 == cVar8) {
                uVar33 = extraout_w9_08;
              }
              if (extraout_w8_05 == 1) {
                if (uVar33 == 0x7fffffff) {
                  func_0x000107c3a9ec();
                  func_0x000107c3aa00();
                  func_0x000107c3a9ac();
                  goto LAB_1003ab75c;
                }
                uVar33 = uVar33 + 1;
              }
              pppppuVar38 = (undefined *****)(ulong)uVar33;
              func_0x000107c31754(dVar48,pppppuVar38,
                                  ((ulong)(uVar22 | 0x80000) & 0x7fffffff) << 0x20 | 10,
                                  &ppppuStack_570);
              if ((uVar22 & 0x20000) != 0) {
                func_0x000107c3aac8();
              }
              func_0x000107c3aa60();
              func_0x000107c3aa30();
            }
            goto code_r0x0001003ab554;
          }
          func_0x000107c3aae4();
          func_0x000107c3aa20();
          break;
        case 10:
          uStack_5c8 = CONCAT17(uStack_5d1,
                                CONCAT16(uStack_5d2,
                                         CONCAT24(uStack_5d4,
                                                  CONCAT22(uStack_5d6,
                                                           CONCAT11(bStack_5d7,bStack_5d8)))));
          uStack_5d0 = (undefined ****)pppuStack_5e0;
          pppppuVar14 = (undefined *****)&uStack_5d0;
          func_0x000107c31784();
          iVar23 = (int)lVar29;
          func_0x000107c3a9cc(bVar43);
          dVar48 = (double)CONCAT44(uStack_58c,fStack_590);
          uVar22 = extraout_w11_00;
          if ((extraout_x10_01 & 0x8000000000000000) != 0) {
            dVar48 = -(double)CONCAT44(uStack_58c,fStack_590);
            uVar22 = extraout_w9_06;
          }
          if ((dVar48 < INFINITY) || (dVar48 != INFINITY)) {
            uVar10 = (extraout_w8_02 & 0xf) == 4;
            if (((bool)uVar10) && ((uVar22 & 0xff00) != 0)) {
              func_0x000107c3aa1c();
              func_0x000107c3aa28();
              func_0x000107c3aa58();
              uVar22 = uVar22 & 0xffff00ff;
              if ((int)uStack_5d0 != 0) {
                uStack_5d0 = (undefined ****)CONCAT44(uStack_5d0._4_4_,(int)uStack_5d0 + -1);
              }
            }
            ppppuStack_570 = (undefined ****)&PTR_FUN_11099bc38;
            pppuStack_568 = (undefined ***)&uStack_550;
            func_0x000107c3aa6c(0);
            if ((bool)uVar10) {
              if ((uVar22 >> 8 & 0xff) != 0) {
                func_0x000107c3aac4();
              }
              ppppuVar21 = (undefined ****)uStack_140;
              pppuVar18 = pppuStack_560;
              uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,0x25);
              if ((uVar22 >> 0x14 & 1) == 0) {
                puVar26 = (undefined2 *)((long)&uStack_140 + 1);
              }
              else {
                puVar26 = (undefined2 *)((long)&uStack_140 + 2);
                uStack_140 = (undefined **)CONCAT62(SUB86(ppppuVar21,2),0x2325);
              }
              puVar27 = puVar26;
              if (-1 < (long)uStack_5d0) {
                puVar27 = puVar26 + 1;
                *puVar26 = 0x2a2e;
              }
              *(undefined1 *)puVar27 = 0x4c;
              uVar10 = 0x61;
              if ((uVar22 & 0x10000) != 0) {
                uVar10 = 0x41;
              }
              *(undefined1 *)((long)puVar27 + 1) = uVar10;
              *(undefined1 *)(puVar27 + 1) = 0;
code_r0x0001003aacc4:
              while( true ) {
                uVar25 = (long)uStack_558 - (long)pppuVar18;
                pcVar15 = (char *)((long)pppuStack_568 + (long)pppuVar18);
                func_0x000107c61318(pcVar15,uVar25,&uStack_140);
                if ((int)pcVar15 < 0) goto code_r0x0001003aad18;
                if (((ulong)pcVar15 & 0xffffffff) < uVar25) break;
                pppppuVar14 = (undefined *****)((long)pppuVar18 + ((ulong)pcVar15 & 0xffffffff) + 1)
                ;
                if (uStack_558 < pppppuVar14) goto code_r0x0001003aad28;
              }
              FUN_1003ac208(&ppppuStack_570,(long)pppuVar18 + ((ulong)pcVar15 & 0xffffffff));
              func_0x000107c317cc(pppppuVar38,pppuStack_568,pppuStack_560,&uStack_5d0);
              goto code_r0x0001003ab554;
            }
            uVar33 = 6;
            if ((char)uStack_5c8 == '\0' || -1 < (long)uStack_5d0) {
              uVar33 = uStack_5d0._4_4_;
            }
            if (extraout_w8_04 == 1) {
              if (uVar33 == 0x7fffffff) {
                func_0x000107c3a9ec();
                func_0x000107c3aa00();
                func_0x000107c3a9ac();
                goto LAB_1003ab75c;
              }
              uVar33 = uVar33 + 1;
            }
            uVar34 = uVar22 & 0xff;
            if (dVar48 <= 0.0) {
              if ((int)uVar33 < 1 || uVar34 != 2) {
                uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,0x30);
                pppppuVar38 = &ppppuStack_570;
                FUN_1003a9d4c(pppppuVar38,&uStack_140);
                iVar23 = 0;
              }
              else {
                func_0x000107c3aa5c();
                ppppuVar21 = (undefined ****)pppuStack_568;
                uVar34 = uVar33;
                while (0 < (int)uVar34) {
                  *(char *)ppppuVar21 = '0';
                  ppppuVar21 = (undefined ****)((long)ppppuVar21 + 1);
                  uVar34 = uVar34 - 1;
                }
                iVar23 = -uVar33;
                pppppuVar38 = pppppuVar14;
              }
            }
            else if ((int)uVar33 < 0) {
              if ((uVar22 >> 0x12 & 1) == 0) {
                func_0x000107c31748(dVar48);
                pppppuVar38 = &ppppuStack_570;
                FUN_1003b0404(pppppuVar38,pppppuVar14);
              }
              else {
                func_0x000107c31744((float)dVar48);
                pppppuVar38 = &ppppuStack_570;
                FUN_10054bb00(pppppuVar38,pppppuVar14);
                iVar23 = (int)((ulong)pppppuVar14 >> 0x20);
              }
            }
            else {
              func_0x000107c31800(dVar48,&uStack_140);
              ppppuVar21 = (undefined ****)uStack_140;
              puVar19 = puStack_138;
              func_0x000107c31760();
              iVar23 = (int)puVar19;
              uVar25 = (ulong)(-iVar23 - 0x7c);
              puVar20 = &uStack_5a4;
              func_0x000107c31764(uVar25,puVar20);
              func_0x000107c31768(ppppuVar21,(ulong)puVar19 & 0xffffffff,uVar25,
                                  (ulong)puVar20 & 0xffffffff);
              if (0x2fe < uVar33) {
                uVar33 = 0x2ff;
              }
              iStack_5b8 = 0;
              iStack_5b0 = -uStack_5a4;
              uVar41 = (ulong)(uint)-iVar23;
              uVar45 = (ulong)ppppuVar21 >> (uVar41 & 0x3f);
              uVar25 = uVar45;
              pppuStack_5c0 = (undefined ***)&uStack_550;
              uStack_5b4 = uVar33;
              uStack_5ac = uVar34 == 2;
              func_0x00010054bacc();
              pppppuVar38 = (undefined *****)&pppuStack_5c0;
              func_0x000107c317d4(pppppuVar38,
                                  *(long *)(&UNK_10e60cdd8 + (long)(int)uVar25 * 8) <<
                                  (uVar41 & 0x3f),(ulong)ppppuVar21 / 10,uVar25);
              if ((int)pppppuVar38 == 0) {
                lVar29 = 1L << (uVar41 & 0x3f);
                uVar40 = lVar29 - 1;
                uVar44 = uVar40 & (ulong)ppppuVar21;
                uVar46 = (long)(int)uVar25;
                do {
                  uVar33 = (uint)uVar45;
                  switch((int)uVar46) {
                  case 1:
                    uVar45 = 0;
                    goto code_r0x0001003aaf6c;
                  case 2:
                    uVar45 = (ulong)(uVar33 % 10);
                    uVar33 = uVar33 / 10;
                    goto code_r0x0001003aaf6c;
                  case 3:
                    uVar24 = 100;
                    break;
                  case 4:
                    uVar24 = 1000;
                    break;
                  case 5:
                    uVar24 = 10000;
                    break;
                  case 6:
                    uVar24 = 100000;
                    break;
                  case 7:
                    uVar24 = 1000000;
                    break;
                  case 8:
                    uVar24 = 10000000;
                    break;
                  case 9:
                    uVar24 = 100000000;
                    break;
                  case 10:
                    uVar24 = 1000000000;
                    break;
                  default:
                    cVar9 = '\0';
                    goto code_r0x0001003aaf70;
                  }
                  uVar3 = 0;
                  if (uVar24 != 0) {
                    uVar3 = uVar33 / uVar24;
                  }
                  uVar45 = (ulong)(uVar33 - uVar3 * uVar24);
                  uVar33 = uVar3;
code_r0x0001003aaf6c:
                  cVar9 = (char)uVar33;
code_r0x0001003aaf70:
                  pppppuVar38 = (undefined *****)&pppuStack_5c0;
                  func_0x000107c3aabc(pppppuVar38,(int)(char)(cVar9 + '0'),
                                      *(long *)(&UNK_10e60cdd8 + uVar46 * 8) << (uVar41 & 0x3f),
                                      ((uVar45 & 0xffffffff) << (uVar41 & 0x3f)) + uVar44);
                  if ((int)pppppuVar38 != 0) {
                    uVar25 = (ulong)((int)uVar46 - 1);
                    goto code_r0x0001003ab09c;
                  }
                  uVar25 = uVar46 - 1;
                  bVar11 = 1 < (long)uVar46;
                  uVar46 = uVar25;
                } while (bVar11);
                lVar42 = 1;
                do {
                  uVar45 = uVar44 * 10;
                  lVar42 = lVar42 * 10;
                  uVar44 = uVar40 & uVar44 * 10;
                  uVar25 = (ulong)((int)uVar25 - 1);
                  pppppuVar38 = (undefined *****)&pppuStack_5c0;
                  func_0x000107c317d8(pppppuVar38,
                                      (int)(char)((char)(uVar45 >> (uVar41 & 0x3f)) + '0'),lVar29,
                                      uVar44,lVar42,0);
                } while ((int)pppppuVar38 == 0);
              }
code_r0x0001003ab09c:
              iVar23 = iStack_5b0;
              uVar33 = uStack_5b4;
              if ((int)pppppuVar38 == 2) {
                iVar23 = (int)uVar25 + ~uStack_5a4 + iStack_5b8;
                puStack_138 = auStack_120;
                uStack_140 = &PTR_DAT_110d9ec20;
                uStack_128 = 0x20;
                uStack_130 = 0;
                uStack_98 = 0;
                puStack_1e8 = auStack_1d0;
                ppuStack_1f0 = &PTR_DAT_110d9ec20;
                uStack_1d8 = 0x20;
                uStack_1e0 = 0;
                uStack_148 = 0;
                puStack_298 = auStack_280;
                ppuStack_2a0 = &PTR_DAT_110d9ec20;
                uStack_288 = 0x20;
                uStack_290 = 0;
                uStack_1f8 = 0;
                puStack_348 = auStack_330;
                ppuStack_350 = &PTR_DAT_110d9ec20;
                uStack_338 = 0x20;
                uStack_340 = 0;
                uStack_2a8 = 0;
                lStack_5a0 = 0;
                iStack_598 = 0;
                if ((uVar22 >> 0x12 & 1) == 0) {
                  iVar12 = (int)&lStack_5a0;
                  func_0x000107c31800(dVar48);
                }
                else {
                  iVar12 = (int)&lStack_5a0;
                  func_0x000107c317dc((float)dVar48);
                }
                iVar13 = iStack_598;
                lVar29 = lStack_5a0;
                uVar24 = 1;
                if (iVar12 != 0) {
                  uVar24 = 2;
                }
                lVar42 = lStack_5a0 << (ulong)uVar24;
                if (iStack_598 < 0) {
                  if (iVar23 < 0) {
                    func_0x000107c317e8(&uStack_140,-iVar23);
                    func_0x000107c317ec(&ppuStack_2a0,&uStack_140);
                    if (iVar12 == 0) {
                      pppuStack_618 = (undefined ***)0x0;
                    }
                    else {
                      func_0x000107c317ec(&ppuStack_350,&uStack_140);
                      pppuStack_618 = &ppuStack_350;
                      func_0x000107c317e4(&ppuStack_350,1);
                    }
                    func_0x000107c317fc(&uStack_140,lVar42);
                    func_0x000107c3a9f0(&ppuStack_1f0);
                    pppuVar18 = &ppuStack_1f0;
                    func_0x000107c317e4(pppuVar18,uVar24 - iVar13);
                  }
                  else {
                    func_0x000107c3aa50(&uStack_140);
                    func_0x000107c3aad8();
                    func_0x000107c317e4(&ppuStack_1f0,uVar24 - iVar13);
                    pppuVar18 = &ppuStack_2a0;
                    func_0x000107c3a9f0();
                    if (iVar12 == 0) {
                      pppuStack_618 = (undefined ***)0x0;
                    }
                    else {
                      pppuStack_618 = &ppuStack_350;
                      pppuVar18 = &ppuStack_350;
                      func_0x000107c317e0(pppuVar18,2);
                    }
                  }
                }
                else {
                  func_0x000107c3aa50(&uStack_140);
                  func_0x000107c317e4(&uStack_140,iVar13);
                  func_0x000107c3a9f0(&ppuStack_2a0);
                  func_0x000107c317e4(&ppuStack_2a0,iVar13);
                  if (iVar12 == 0) {
                    pppuStack_618 = (undefined ***)0x0;
                  }
                  else {
                    func_0x000107c3a9f0(&ppuStack_350);
                    pppuStack_618 = &ppuStack_350;
                    func_0x000107c317e4(&ppuStack_350,iVar13 + 1);
                  }
                  func_0x000107c3aad8();
                  pppuVar18 = &ppuStack_1f0;
                  func_0x000107c317e4(pppuVar18,(ulong)uVar24);
                }
                pppuVar4 = pppuStack_568;
                if ((int)uVar33 < 0) {
                  lVar42 = 0;
                  pppuVar2 = &ppuStack_2a0;
                  if (pppuStack_618 != (undefined ***)0x0) {
                    pppuVar2 = pppuStack_618;
                  }
                  uVar33 = (uint)lVar29 & 1;
                  while( true ) {
                    func_0x000107c3aa0c();
                    puVar16 = &uStack_140;
                    func_0x000107c317f0(puVar16,&ppuStack_2a0);
                    puVar17 = &uStack_140;
                    func_0x000107c317f4(puVar17,pppuVar2,&ppuStack_1f0);
                    *(char *)((long)pppuVar4 + lVar42) = (char)pppuVar18 + '0';
                    if ((int)puVar16 < (int)(uVar33 ^ 1) || (int)uVar33 <= (int)puVar17) break;
                    func_0x000107c3a9e4(&uStack_140);
                    pppuVar18 = &ppuStack_2a0;
                    func_0x000107c3a9e4();
                    if (pppuStack_618 != (undefined ***)0x0) {
                      pppuVar18 = pppuStack_618;
                      func_0x000107c3a9e4();
                    }
                    lVar42 = lVar42 + 1;
                  }
                  if ((int)puVar16 < (int)(uVar33 ^ 1)) {
                    if ((int)uVar33 <= (int)puVar17) {
                      puVar16 = &uStack_140;
                      func_0x000107c317f4(puVar16,&uStack_140,&ppuStack_1f0);
                      if ((0 < (int)puVar16) ||
                         (((int)puVar16 == 0 && (((ulong)pppuVar18 & 1) != 0))))
                      goto code_r0x0001003ab3f8;
                    }
                  }
                  else {
code_r0x0001003ab3f8:
                    *(char *)((long)pppuVar4 + lVar42) = (char)pppuVar18 + '1';
                  }
                  func_0x000107c3aa5c();
                  iVar23 = iVar23 - (int)lVar42;
                }
                else {
                  uVar25 = (long)(int)uVar33 - 1;
                  iVar23 = iVar23 - (int)uVar25;
                  if (uVar33 == 0) {
                    FUN_1003ac208(&ppppuStack_570,1);
                    iVar12 = (int)&ppuStack_1f0;
                    func_0x000107c3a9e4();
                    func_0x000107c3aa54();
                    cVar9 = '0';
                    if (0 < iVar12) {
                      cVar9 = '1';
                    }
                    *(char *)pppuStack_568 = cVar9;
                  }
                  else {
                    pppppuVar14 = &ppppuStack_570;
                    FUN_1003ac208(pppppuVar14,uVar33);
                    for (uVar41 = 0; cVar9 = (char)pppppuVar14, (uVar25 & 0xffffffff) != uVar41;
                        uVar41 = uVar41 + 1) {
                      func_0x000107c3aa0c();
                      *(char *)((long)pppuStack_568 + uVar41) = cVar9 + '0';
                      pppppuVar14 = (undefined *****)&uStack_140;
                      func_0x000107c3a9e4();
                    }
                    func_0x000107c3aa0c();
                    iVar12 = (int)pppppuVar14;
                    iVar13 = iVar12;
                    func_0x000107c3aa54();
                    if ((0 < iVar13) || ((iVar13 == 0 && (((ulong)pppppuVar14 & 1) != 0)))) {
                      if (iVar12 == 9) {
                        *(char *)((long)pppuStack_568 + uVar25) = ':';
                        uVar25 = (ulong)(uVar33 - 2);
                        uVar31 = 0x30;
                        while ((uVar33 = (int)uVar25 + 1, 0 < (int)uVar33 &&
                               (*(char *)((long)pppuStack_568 + (ulong)uVar33) == ':'))) {
                          *(char *)((long)pppuStack_568 + (ulong)uVar33) = (char)uVar31;
                          func_0x000107c3aaf0();
                          uVar25 = extraout_x8_15;
                          uVar31 = extraout_x9_02;
                        }
                        if (*(char *)pppuStack_568 == ':') {
                          *(char *)pppuStack_568 = '1';
                          iVar23 = iVar23 + 1;
                        }
                        goto code_r0x0001003ab4b4;
                      }
                      iVar12 = iVar12 + 1;
                    }
                    *(char *)((long)pppuStack_568 + uVar25) = (char)iVar12 + '0';
                  }
                }
code_r0x0001003ab4b4:
                func_0x000107c317f8(&ppuStack_350);
                func_0x000107c317f8(&ppuStack_2a0);
                func_0x000107c317f8(&ppuStack_1f0);
                pppppuVar38 = (undefined *****)&uStack_140;
                func_0x000107c317f8();
              }
              else {
                func_0x000107c3aa5c();
                iVar23 = iVar23 + (int)uVar25;
              }
              if (((uVar22 >> 0x14 & 1) == 0) && (uVar34 != 2)) {
                iVar13 = iVar23 + (int)pppuStack_560;
                iVar12 = iVar23;
                for (ppppuVar21 = (undefined ****)pppuStack_560;
                    (iVar23 = iVar13, ppppuVar21 != (undefined ****)0x0 &&
                    (iVar23 = iVar12, ((char *)((long)pppuStack_568 + -1))[(long)ppppuVar21] == '0')
                    ); ppppuVar21 = (undefined ****)((long)ppppuVar21 + -1)) {
                  iVar12 = iVar12 + 1;
                }
                func_0x000107c3aa5c();
              }
            }
            if ((uVar22 & 0x20000) != 0) {
              func_0x000107c3aac8();
            }
            uStack_140 = (undefined **)pppuStack_568;
            puStack_138 = (undefined1 *)CONCAT44(iVar23,(int)pppuStack_560);
            func_0x000107c3aa30((ulong)(uVar22 | 0x80000) << 0x20);
            goto code_r0x0001003ab554;
          }
          func_0x000107c3aae4();
          func_0x000107c3aa20();
          pppppuVar38 = pppppuVar14;
          break;
        case 0xb:
          lVar29 = CONCAT44(uStack_58c,fStack_590);
          if (bStack_5d8 != 0x73) {
            if (bStack_5d8 == 0x70) {
              func_0x000107c317d0(&ppppuStack_610,lVar29);
              pppppuVar38 = (undefined *****)ppppuStack_610;
              break;
            }
            if (bStack_5d8 != 0) {
              func_0x000107c3aa04();
              goto LAB_1003ab75c;
            }
          }
          if (lVar29 == 0) {
            func_0x000107c3a9ec();
            func_0x000107c3aac0();
            func_0x000107c3a9ac();
            goto LAB_1003ab75c;
          }
          lVar42 = lVar29;
          func_0x000107c613d0(lVar29);
          FUN_1003ac46c(pppppuVar38,lVar29,lVar42,&pppuStack_5e0);
          ppppuStack_610 = (undefined ****)pppppuVar38;
          break;
        case 0xc:
          pppppuVar38 = &ppppuStack_610;
          FUN_1003ac3c0(pppppuVar38,CONCAT44(uStack_58c,fStack_590),pcStack_588);
          break;
        case 0xd:
          if ((bStack_5d8 != 0) && (bStack_5d8 != 0x70)) {
            func_0x000107c3aa04();
            goto LAB_1003ab75c;
          }
          func_0x000107c317d0(&ppppuStack_610,CONCAT44(uStack_58c,fStack_590));
          pppppuVar38 = (undefined *****)ppppuStack_610;
          break;
        case 0xe:
          (*pcStack_588)(CONCAT44(uStack_58c,fStack_590),lVar29,ppppuVar1);
          pppppuVar38 = (undefined *****)*pppuStack_5f8;
        }
        *ppppuVar1 = (undefined ***)pppppuVar38;
        goto LAB_1003ab564;
      }
      pppuStack_568 = (undefined ***)(param_3 + 8);
      uStack_558 = &ppppuStack_570;
      uStack_550 = (undefined ***)CONCAT44(uStack_550._4_4_,iStack_580);
      ppppuStack_570 = &pppuStack_5e0;
      pppuStack_560 = (undefined ***)ppppuVar1;
      if (ppuVar28 != param_2) {
        uVar25 = (ulong)(*(byte *)ppuVar28 >> 3);
        ppuVar37 = (undefined **)
                   ((long)ppuVar28 +
                   (long)(char)(&UNK_10e60dadb)[uVar25] + (0x80ff0000UL >> uVar25 & 1));
        if (param_2 <= ppuVar37) {
          ppuVar37 = ppuVar28;
        }
        do {
          bVar43 = *(byte *)ppuVar37;
          if (bVar43 == 0x5e) {
            bVar43 = 3;
LAB_1003aa190:
            if (ppuVar37 == ppuVar28) {
              bVar30 = 0;
              pppppuVar38 = (undefined *****)&pppuStack_5e0;
            }
            else {
              if (*(byte *)ppuVar28 == 0x7b) {
                func_0x000107c317b4(&UNK_10f3dbec2);
                goto LAB_1003ab75c;
              }
              pppppuVar14 = (undefined *****)((ulong)&pppuStack_5e0 | 10);
              func_0x000106e53a28(pppppuVar14,ppuVar28);
              func_0x000107c3aadc();
              bVar30 = extraout_w9 & 0xf0;
              pppppuVar38 = extraout_x8_05;
              ppuVar28 = ppuVar37;
            }
            ppuVar28 = (undefined **)((long)ppuVar28 + 1);
            *(byte *)((long)pppppuVar38 + 9) = bVar30 | bVar43;
            goto LAB_1003aa1d0;
          }
          if (bVar43 == 0x3e) {
            bVar43 = 2;
            goto LAB_1003aa190;
          }
          if (bVar43 == 0x3c) {
            bVar43 = 1;
            goto LAB_1003aa190;
          }
          bVar11 = ppuVar37 != ppuVar28;
          ppuVar37 = ppuVar28;
        } while (bVar11);
        pppppuVar38 = (undefined *****)&pppuStack_5e0;
LAB_1003aa1d0:
        if (ppuVar28 != param_2) {
          bVar43 = *(byte *)ppuVar28;
          if (bVar43 == 0x20) {
            bVar43 = 0x30;
LAB_1003aa2b8:
            pppppuVar14 = (undefined *****)((ulong)uStack_550 & 0xffffffff);
            func_0x000107c317bc();
            if (((uint)uStack_550 - 1 < 8) &&
               ((8 < (uint)uStack_550 || ((1 << (ulong)((uint)uStack_550 & 0x1f) & 0x10aU) == 0))))
            {
              func_0x000107c317b4(&UNK_10f3dbf15);
              goto LAB_1003ab75c;
            }
            func_0x000107c3aadc();
            *(byte *)((long)extraout_x8_06 + 9) = extraout_w9_00 & 0x8f | bVar43;
            ppuVar28 = (undefined **)((long)ppuVar28 + 1);
            pppppuVar38 = extraout_x8_06;
          }
          else {
            if (bVar43 == 0x2b) {
              bVar43 = 0x20;
              goto LAB_1003aa2b8;
            }
            if (bVar43 == 0x2d) {
              bVar43 = 0x10;
              goto LAB_1003aa2b8;
            }
          }
          if (ppuVar28 != param_2) {
            bVar43 = *(byte *)ppuVar28;
            if (bVar43 == 0x23) {
              pppppuVar14 = (undefined *****)((ulong)uStack_550 & 0xffffffff);
              func_0x000107c317bc();
              func_0x000107c3aadc();
              *(byte *)((long)extraout_x8_07 + 9) = extraout_w9_01 | 0x80;
              ppuVar28 = (undefined **)((long)ppuVar28 + 1);
              if (ppuVar28 == param_2) goto LAB_1003aa4cc;
              bVar43 = *(byte *)ppuVar28;
              pppppuVar38 = extraout_x8_07;
            }
            if (bVar43 == 0x30) {
              pppppuVar14 = (undefined *****)((ulong)uStack_550 & 0xffffffff);
              func_0x000107c317bc();
              func_0x000107c3aadc();
              *(byte *)((long)extraout_x8_08 + 9) = extraout_w9_02 & 0xf0 | 4;
              *(undefined1 *)((long)extraout_x8_08 + 10) = 0x30;
              ppuVar28 = (undefined **)((long)ppuVar28 + 1);
              pppppuVar38 = extraout_x8_08;
              if (ppuVar28 == param_2) goto LAB_1003aa4cc;
            }
            ppuStack_1f0 = ppuVar28;
            if (*(byte *)ppuVar28 - 0x30 < 10) {
              func_0x000107c3aad4();
              pppppuVar38 = (undefined *****)ppppuStack_570;
              *(float *)ppppuStack_570 = SUB84(pppppuVar14,0);
              ppuVar28 = ppuStack_1f0;
            }
            else if (*(byte *)ppuVar28 == 0x7b) {
              ppuVar37 = (undefined **)((long)ppuVar28 + 1);
              bVar11 = ppuVar37 == param_2;
              if (!bVar11) {
                func_0x000107c3aa84();
                if ((bVar11) || (iVar23 = (int)extraout_x8_09, iVar23 == 0x3a)) {
                  pppppuVar14 = (undefined *****)&uStack_140;
                  func_0x000107c317c0(pppppuVar14,pppuStack_568,pppuStack_560);
                  func_0x000107c3aaa0();
                }
                else {
                  bVar11 = iVar23 - 0x30U == 9;
                  ppuVar37 = param_2;
                  if (iVar23 - 0x30U < 10) {
                    if (iVar23 == 0x30) {
                      ppuVar37 = (undefined **)((long)ppuVar28 + 2);
                    }
                    else {
                      uVar25 = 0;
                      uVar32 = 0xccccccc;
                      ppuVar28 = (undefined **)((long)ppuVar28 + 2);
                      uVar35 = 10;
                      uVar31 = extraout_x8_09;
                      do {
                        if ((uint)uVar32 < (uint)uVar25) goto LAB_1003ab6e4;
                        uVar22 = ((int)uVar31 + (uint)uVar25 * (int)uVar35) - 0x30;
                        uVar25 = (ulong)uVar22;
                        bVar11 = param_2 <= ppuVar28;
                        if (ppuVar28 == param_2) goto LAB_1003ab41c;
                        func_0x000107c3aa70();
                        uVar22 = (uint)uVar25;
                        uVar31 = extraout_x8_13;
                        uVar32 = extraout_x9_00;
                        ppuVar28 = extraout_x10_03;
                        uVar35 = extraout_x11_00;
                      } while (!bVar11);
                      ppuVar37 = (undefined **)((long)extraout_x10_03 + -1);
LAB_1003ab41c:
                      if ((int)uVar22 < 0) {
LAB_1003ab6e4:
                        func_0x000107c3aa08();
                        goto LAB_1003ab75c;
                      }
                    }
                    bVar11 = ppuVar37 == param_2;
                    if ((bVar11) || ((func_0x000107c3aaec(), !bVar11 && (extraout_w8_07 != 0x7d))))
                    {
                      func_0x000107c3a9bc();
                      goto LAB_1003ab75c;
                    }
                    func_0x000107c3aaa4();
                    func_0x000107c3aaa0();
                  }
                  else {
                    func_0x000107c3aa74();
                    if ((!bVar11 && 0x18 < extraout_w9_10) && (bVar11 || extraout_w9_10 != 0x19)) {
                      func_0x000107c3a9bc();
                      goto LAB_1003ab75c;
                    }
                    ppuVar28 = (undefined **)((long)ppuVar28 + 2);
                    do {
                      bVar11 = param_2 <= ppuVar28;
                      if (ppuVar28 == param_2) goto LAB_1003ab000;
                      func_0x000107c3a9e8();
                      ppuVar28 = extraout_x8_11;
                    } while ((!bVar11) || (extraout_w9_11 == 0x5f || extraout_w10_00 < 0x1a));
                    ppuVar37 = (undefined **)((long)extraout_x8_11 + -1);
LAB_1003ab000:
                    func_0x000107c3aa9c();
                    func_0x000107c3aaa0();
                  }
                }
                pppppuVar38 = (undefined *****)ppppuStack_570;
                *(float *)ppppuStack_570 = SUB84(pppppuVar14,0);
              }
              if ((ppuVar37 == param_2) || (*(byte *)ppuVar37 != 0x7d)) {
                func_0x000107c3a9bc();
                goto LAB_1003ab75c;
              }
              ppuVar28 = (undefined **)((long)ppuVar37 + 1);
            }
            if (ppuVar28 != param_2) {
              if (*(byte *)ppuVar28 == 0x2e) {
                ppuStack_1f0 = (undefined **)((long)ppuVar28 + 1);
                if (ppuStack_1f0 == param_2) {
LAB_1003ab698:
                  func_0x000107c317b4(&UNK_10f3dbfd9);
                  goto LAB_1003ab75c;
                }
                if ((int)(char)*(byte *)ppuStack_1f0 - 0x30U < 10) {
                  func_0x000107c3aad4();
                  pppppuVar38 = (undefined *****)ppppuStack_570;
                  *(float *)((long)ppppuStack_570 + 4) = SUB84(pppppuVar14,0);
                }
                else {
                  if (*(byte *)ppuStack_1f0 != 0x7b) goto LAB_1003ab698;
                  ppuVar37 = (undefined **)((long)ppuVar28 + 2);
                  bVar11 = ppuVar37 == param_2;
                  if (!bVar11) {
                    func_0x000107c3aa84();
                    if ((bVar11) || (iVar23 = (int)extraout_x8_10, iVar23 == 0x3a)) {
                      pppppuVar14 = (undefined *****)&uStack_140;
                      func_0x000107c317c0(pppppuVar14,pppuStack_568,pppuStack_560);
                      func_0x000107c3aaa8();
                    }
                    else {
                      bVar11 = iVar23 - 0x30U == 9;
                      ppuVar37 = param_2;
                      if (iVar23 - 0x30U < 10) {
                        if (iVar23 == 0x30) {
                          ppuVar37 = (undefined **)((long)ppuVar28 + 3);
                        }
                        else {
                          uVar25 = 0;
                          uVar32 = 0xccccccc;
                          ppuVar28 = (undefined **)((long)ppuVar28 + 3);
                          uVar35 = 10;
                          uVar31 = extraout_x8_10;
                          do {
                            if ((uint)uVar32 < (uint)uVar25) goto LAB_1003ab6fc;
                            uVar22 = ((int)uVar31 + (uint)uVar25 * (int)uVar35) - 0x30;
                            uVar25 = (ulong)uVar22;
                            bVar11 = param_2 <= ppuVar28;
                            if (ppuVar28 == param_2) goto LAB_1003ab478;
                            func_0x000107c3aa70();
                            uVar22 = (uint)uVar25;
                            uVar31 = extraout_x8_14;
                            uVar32 = extraout_x9_01;
                            ppuVar28 = extraout_x10_04;
                            uVar35 = extraout_x11_01;
                          } while (!bVar11);
                          ppuVar37 = (undefined **)((long)extraout_x10_04 + -1);
LAB_1003ab478:
                          if ((int)uVar22 < 0) {
LAB_1003ab6fc:
                            func_0x000107c3aa08();
                            goto LAB_1003ab75c;
                          }
                        }
                        bVar11 = ppuVar37 == param_2;
                        if ((bVar11) ||
                           ((func_0x000107c3aaec(), !bVar11 && (extraout_w8_08 != 0x7d)))) {
                          func_0x000107c3a9bc();
                          goto LAB_1003ab75c;
                        }
                        func_0x000107c3aaa4();
                        func_0x000107c3aaa8();
                      }
                      else {
                        func_0x000107c3aa74();
                        if ((!bVar11 && 0x18 < extraout_w9_12) && (bVar11 || extraout_w9_12 != 0x19)
                           ) {
                          func_0x000107c3a9bc();
                          goto LAB_1003ab75c;
                        }
                        ppuVar28 = (undefined **)((long)ppuVar28 + 3);
                        do {
                          bVar11 = param_2 <= ppuVar28;
                          if (ppuVar28 == param_2) goto LAB_1003ab07c;
                          func_0x000107c3a9e8();
                          ppuVar28 = extraout_x8_12;
                        } while ((!bVar11) || (extraout_w9_13 == 0x5f || extraout_w10_01 < 0x1a));
                        ppuVar37 = (undefined **)((long)extraout_x8_12 + -1);
LAB_1003ab07c:
                        func_0x000107c3aa9c();
                        func_0x000107c3aaa8();
                      }
                    }
                    pppppuVar38 = (undefined *****)ppppuStack_570;
                    *(float *)((long)ppppuStack_570 + 4) = SUB84(pppppuVar14,0);
                  }
                  if ((ppuVar37 == param_2) ||
                     (ppuStack_1f0 = (undefined **)((long)ppuVar37 + 1), *(byte *)ppuVar37 != 0x7d))
                  {
                    func_0x000107c3a9bc();
                    goto LAB_1003ab75c;
                  }
                }
                ppuVar28 = ppuStack_1f0;
                if (((uint)uStack_550 < 0xf) &&
                   ((1 << (ulong)((uint)uStack_550 & 0x1f) & 0x41feU) != 0)) {
                  func_0x000107c317b4(&UNK_10f3dbff5);
                  goto LAB_1003ab75c;
                }
              }
              if ((ppuVar28 != param_2) && (bVar43 = *(byte *)ppuVar28, bVar43 != 0x7d)) {
                ppuVar28 = (undefined **)((long)ppuVar28 + 1);
                *(byte *)(pppppuVar38 + 1) = bVar43;
              }
            }
          }
        }
      }
LAB_1003aa4cc:
      bVar11 = ppuVar28 == param_2;
      if ((!bVar11) && (func_0x000107c3aa84(), ppuVar37 = ppuVar28, bVar43 = bStack_5d8, bVar11))
      goto LAB_1003aa4e0;
      goto LAB_1003ab668;
    }
    puVar39 = (ulong *)(param_3 + 8);
    uVar25 = *puVar39;
    *puVar39 = (ulong)ppuVar28;
    *(ulong *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + (uVar25 - (long)ppuVar28);
    (*pcStack_588)(CONCAT44(uStack_58c,fStack_590),puVar39,ppppuVar1);
    ppuVar37 = (undefined **)*puVar39;
LAB_1003ab564:
    bVar11 = ppuVar37 == param_2;
    if (!bVar11) {
      func_0x000107c3aa84();
      uVar10 = 1;
      if (bVar11) goto LAB_1003ab574;
    }
  }
  func_0x000107c31738();
LAB_1003ab75c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1003ab760);
  (*pcVar5)();
code_r0x0001003aad18:
  if (uStack_558 != (undefined *****)0xffffffffffffffff) {
    pppppuVar14 = (undefined *****)((long)uStack_558 + 1);
code_r0x0001003aad28:
    (*(code *)*ppppuStack_570)(&ppppuStack_570,pppppuVar14);
  }
  goto code_r0x0001003aacc4;
}



/* Entry: 1003ab808; end: 1003ab833;  */

ulong * FUN_1003ab808(ulong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *extraout_x8;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = (uint)param_1[2];
  if (-1 < (int)uVar1) {
    *(uint *)(param_1 + 2) = uVar1 + 1;
    return (ulong *)(ulong)uVar1;
  }
  iVar3 = 0xf3dbf67;
  func_0x000107c31738();
  *(undefined4 *)extraout_x8 = 0;
  *(undefined4 *)(extraout_x8 + 2) = 0;
  uVar4 = *param_1;
  if ((long)uVar4 < 0) {
    if (iVar3 < (int)uVar4) {
      puVar2 = (undefined8 *)(param_1[1] + (long)iVar3 * 0x20);
      uVar5 = *puVar2;
      extraout_x8[1] = puVar2[1];
      *extraout_x8 = uVar5;
      *(undefined4 *)(extraout_x8 + 2) = *(undefined4 *)(puVar2 + 2);
      return param_1;
    }
  }
  else if ((iVar3 < 0xf) &&
          (uVar4 = uVar4 >> ((ulong)(uint)(iVar3 << 2) & 0x3f),
          *(uint *)(extraout_x8 + 2) = (uint)uVar4 & 0xf, (uVar4 & 0xf) != 0)) {
    puVar2 = (undefined8 *)(param_1[1] + (long)iVar3 * 0x10);
    uVar5 = *puVar2;
    extraout_x8[1] = puVar2[1];
    *extraout_x8 = uVar5;
  }
  return param_1;
}



/* Entry: 1003ab834; end: 1003ab897;  */

void FUN_1003ab834(undefined8 *param_1,ulong *param_2,int param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar2 = *param_2;
  if ((long)uVar2 < 0) {
    if (param_3 < (int)uVar2) {
      puVar1 = (undefined8 *)(param_2[1] + (long)param_3 * 0x20);
      uVar3 = *puVar1;
      param_1[1] = puVar1[1];
      *param_1 = uVar3;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar1 + 2);
      return;
    }
  }
  else if ((param_3 < 0xf) &&
          (uVar2 = uVar2 >> ((ulong)(uint)(param_3 << 2) & 0x3f),
          *(uint *)(param_1 + 2) = (uint)uVar2 & 0xf, (uVar2 & 0xf) != 0)) {
    puVar1 = (undefined8 *)(param_2[1] + (long)param_3 * 0x10);
    uVar3 = *puVar1;
    param_1[1] = puVar1[1];
    *param_1 = uVar3;
  }
  return;
}



/* Entry: 1003ab898; end: 1003ab8cb;  */

void FUN_1003ab898(long param_1,long param_2,undefined8 param_3)

{
  FUN_1003ab834(param_1,param_2 + 8,param_3);
  if (*(int *)(param_1 + 0x10) == 0) {
    func_0x000107c3aad0();
  }
  return;
}



/* Entry: 1003ab8cc; end: 1003ab8fb;  */

void FUN_1003ab8cc(void)

{
  return;
}



/* Entry: 1003ab8fc; end: 1003ab94b;  */

undefined8 FUN_1003ab8fc(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_48 = *param_1;
  uStack_30 = param_1[3];
  uStack_38 = param_1[2];
  uStack_40 = param_1[1];
  (*param_3)(param_2,&uStack_28,&uStack_48);
  return uStack_48;
}



/* Entry: 1003ab94c; end: 1003ab96b;  */

void FUN_1003ab94c(undefined8 *param_1)

{
  *param_1 = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 1) = 0x200000;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0xe) = 1;
  return;
}



/* Entry: 1003ab96c; end: 1003ab98f;  */

void FUN_1003ab96c(long param_1)

{
  FUN_1003ab94c();
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 1003ab990; end: 1003abb0f;  */

void FUN_1003ab990(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_70 [64];
  
  puVar2 = auStack_70;
  puVar3 = auStack_70;
  FUN_1003ab96c(auStack_70);
  FUN_1003abb10(auStack_70,param_2);
  lVar1 = *param_2;
  *param_2 = (long)puVar2;
  param_2[1] = param_2[1] + (lVar1 - (long)puVar2);
  FUN_1003abcbc(auStack_70,param_1,param_3);
  *param_3 = puVar3;
  return;
}



/* Entry: 1003abb10; end: 1003abb6b;  */

long FUN_1003abb10(long param_1,long *param_2)

{
  long lVar1;
  undefined1 uStack_49;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined4 uStack_28;
  
  plStack_30 = &lStack_48;
  uStack_28 = 0xd;
  lVar1 = *param_2;
  lStack_48 = param_1;
  lStack_40 = param_1;
  plStack_38 = param_2;
  func_0x0001003ab9fc(lVar1,lVar1 + param_2[1],&lStack_48);
  FUN_1003abb78((long)*(char *)(param_1 + 8),&uStack_49);
  return lVar1;
}



/* Entry: 1003abb6c; end: 1003abb77;  */

void FUN_1003abb6c(void)

{
  return;
}



/* Entry: 1003abb78; end: 1003abb93;  */

void FUN_1003abb78(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  if ((iVar1 != 0) && (iVar1 != 0x73)) {
    func_0x000106e54464();
    func_0x000107c60d1c();
    *(undefined ***)CONCAT44(uVar2,iVar1) = &PTR_DAT_110a1e1d8;
    *(undefined8 *)(CONCAT44(uVar2,iVar1) + 0x40) = param_2;
    return;
  }
  return;
}



/* Entry: 1003abb94; end: 1003abbc3;  */

void FUN_1003abb94(undefined8 *param_1,undefined8 param_2)

{
  func_0x000107c60d1c();
  *param_1 = &PTR_DAT_110a1e1d8;
  param_1[8] = param_2;
  return;
}



/* Entry: 1003abbc4; end: 1003abcbb;  */

void FUN_1003abbc4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  long alStack_120 [20];
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = param_3;
  FUN_1003abb94(auStack_80,param_1);
  FUN_1003abd9c(alStack_120,auStack_80);
  if (param_3 != 0) {
    lVar1 = *(long *)(alStack_120[0] + -0x18);
    func_0x000107c3174c(auStack_130,&lStack_38);
    func_0x0001080c9df4(auStack_128,(long)alStack_120 + lVar1,auStack_130);
    func_0x000107c60db0(auStack_128);
    func_0x0001080c9f60();
  }
  FUN_1003abdf8(alStack_120,param_2);
  func_0x0001003ac1f0((long)alStack_120 + *(long *)(alStack_120[0] + -0x18),5);
  FUN_1003ac208(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x000107c60cd8(alStack_120);
  func_0x000107c60d20(auStack_80);
  return;
}



/* Entry: 1003abcbc; end: 1003abd6b;  */

long FUN_1003abcbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 *puStack_260;
  undefined8 uStack_258;
  undefined **ppuStack_250;
  undefined1 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [504];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_248 = auStack_230;
  ppuStack_250 = &PTR_FUN_11099bc38;
  uStack_238 = 500;
  uStack_240 = 0;
  FUN_1003abbc4(&ppuStack_250,param_2,*(undefined8 *)(param_3 + 0x18));
  puStack_260 = puStack_248;
  uStack_258 = uStack_240;
  FUN_1003ac264(param_1,&puStack_260,param_3);
  func_0x0001003ac638();
  func_0x0001003ac660(uStack_38);
  if ((bool)in_ZR) {
    return param_3;
  }
  func_0x000107c60e78();
  func_0x0001003ac638();
  func_0x000107c60bd8(param_3);
  return param_3;
}



/* Entry: 1003abd6c; end: 1003abd73;  */

void FUN_1003abd6c(void)

{
  return;
}



/* Entry: 1003abd74; end: 1003abd9b;  */

void FUN_1003abd74(long param_1)

{
  func_0x000107c60dd0();
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  return;
}



/* Entry: 1003abd9c; end: 1003abdef;  */

long * FUN_1003abd9c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___ZTVNSt3__113basic_ostreamIcNS_11char_traitsIcEEEE_110346b08;
  param_1[1] = (long)(PTR___ZTVNSt3__113basic_ostreamIcNS_11char_traitsIcEEEE_110346b08 + 0x40);
  param_1[7] = 0;
  *param_1 = (long)(puVar1 + 0x18);
  FUN_1003abd74(param_1 + 1);
  return param_1;
}



/* Entry: 1003abdf0; end: 1003abdf7;  */

void FUN_1003abdf0(void)

{
  return;
}


