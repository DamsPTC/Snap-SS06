/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b8605c; end: 103b8607b;  */

void FUN_103b8605c(void)

{
  func_0x000107c61168(&PTR_PTR_112937688);
  return;
}



/* Entry: 103b8607c; end: 103b860af; -[SCSnapCommonLoggingParams stickerListDivergenceSnapshot] */

void FUN_103b8607c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103b860b0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b860b0; end: 103b8638b;  */

void FUN_103b860b0(undefined8 param_1,undefined *param_2)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x20;
  ulong uVar15;
  ulong uVar16;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001036b7884();
  puVar5 = puVar4;
  FUN_103b865a8();
  uVar13 = *(ulong *)(puVar5 + 0x10);
  if (uVar13 != 0) {
    uVar16 = 0;
    do {
      if (*(ulong *)(puVar5 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103b86374);
        (*pcVar3)();
      }
      bVar2 = puVar5[uVar16 + 0x20];
      uVar15 = (ulong)bVar2;
      uVar16 = uVar16 + 1;
      lVar6 = unaff_x20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar2) {
      case 0:
        func_0x000107c453d8();
        puVar11 = param_2;
        break;
      case 1:
        func_0x000107c5b45c();
        puVar11 = param_2;
        break;
      case 2:
        func_0x000107c3ea54();
        puVar11 = param_2;
        break;
      case 3:
        func_0x000107c3e9d4();
        puVar11 = param_2;
        break;
      case 4:
        func_0x000107c42528();
        puVar11 = param_2;
        break;
      case 5:
        func_0x000107c443fc();
        puVar11 = param_2;
        break;
      case 6:
        func_0x000107c4063c();
        puVar11 = param_2;
        break;
      case 7:
        func_0x000107c5d2d4();
        puVar11 = param_2;
        break;
      case 8:
        func_0x000107c43cc4();
        puVar11 = param_2;
        break;
      case 9:
        func_0x000107c410e8();
        puVar11 = param_2;
        break;
      case 10:
        lVar7 = unaff_x20;
        func_0x000107c5bda0();
        func_0x000107c61180();
        puVar11 = param_2;
        if (lVar7 != 0) {
          lVar6 = lVar7;
          func_0x000107c3f1d0();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          puVar11 = param_2;
          if (lVar6 == 0) goto code_r0x000103b86124;
          goto code_r0x000103b86238;
        }
        goto code_r0x000103b86124;
      }
      func_0x000107c61180();
      param_2 = puVar11;
      if (lVar6 != 0) {
code_r0x000103b86238:
        lVar7 = lVar6;
        func_0x000107c5faec();
        puVar12 = param_2;
        func_0x000107c61170(lVar6);
        puVar11 = puVar12;
        if (param_2 != (undefined *)0x0) {
          puVar8 = puVar4;
          func_0x000107c61558();
          uVar9 = uVar15;
          func_0x000101c6350c();
          uVar14 = (ulong)~(uint)puVar12 & 1;
          lVar6 = *(long *)(puVar4 + 0x10) + uVar14;
          if (SCARRY8(*(long *)(puVar4 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103b86378);
            (*pcVar3)();
          }
          if (*(long *)(puVar4 + 0x18) < lVar6) {
            func_0x0001036b729c(lVar6);
            func_0x000101c6350c();
            uVar9 = uVar15;
            puVar11 = puVar8;
            if (((uint)puVar12 & 1) != ((uint)puVar8 & 1)) {
              func_0x000107c60624(&UNK_1106dbd98);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103b8638c);
              (*pcVar3)();
            }
          }
          else {
            puVar11 = puVar12;
            if (((ulong)puVar8 & 1) == 0) {
              func_0x0001036b7134();
            }
          }
          if (((ulong)puVar12 & 1) == 0) {
            *(ulong *)(puVar4 + (uVar9 >> 6) * 8 + 0x40) =
                 *(ulong *)(puVar4 + (uVar9 >> 6) * 8 + 0x40) | 1L << (uVar9 & 0x3f);
            *(byte *)(*(long *)(puVar4 + 0x30) + uVar9) = bVar2;
            plVar1 = (long *)(*(long *)(puVar4 + 0x38) + uVar9 * 0x10);
            *plVar1 = lVar7;
            plVar1[1] = (long)param_2;
            if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103b8637c);
              (*pcVar3)();
            }
            *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
          }
          else {
            plVar1 = (long *)(*(long *)(puVar4 + 0x38) + uVar9 * 0x10);
            lVar6 = plVar1[1];
            *plVar1 = lVar7;
            plVar1[1] = (long)param_2;
            func_0x000107c6142c(lVar6);
          }
        }
      }
code_r0x000103b86124:
      param_2 = puVar11;
    } while (uVar13 != uVar16);
  }
  func_0x000107c6142c(puVar5);
  uVar10 = 0;
  FUN_103b86c78(0);
  func_0x000107c610f8();
  func_0x000103b868f8(puVar4,uVar10);
  return;
}



/* Entry: 103b8638c; end: 103b8639b; -[_TtC31SCEditContentDivergenceServices31SCEditContentDivergenceServices stickers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8638c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff14b8));
  return;
}



/* Entry: 103b8639c; end: 103b863e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8639c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff14b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b863e8; end: 103b8643f; -[_TtC31SCEditContentDivergenceServices31SCEditContentDivergenceServices initWithStickers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b863e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff14b8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103b86440; end: 103b8649f; -[_TtC31SCEditContentDivergenceServices31SCEditContentDivergenceServices init] */

void FUN_103b86440(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCEditContentDivergenceServices.SCEditContentDivergenceServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8646c);
  (*pcVar1)();
}



/* Entry: 103b864a0; end: 103b864c3; -[_TtC31SCEditContentDivergenceServices31SCEditContentDivergenceServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b864a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff14b8));
  return;
}



/* Entry: 103b864c4; end: 103b8659b;  */

void FUN_103b864c4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b8659c; end: 103b865a7;  */

void FUN_103b8659c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103b865a8; end: 103b865d3;  */

void FUN_103b865a8(void)

{
  func_0x0001000285a8(0x112ff1520,&UNK_10dc5bdc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 103b865d4; end: 103b8671b;  */

/* WARNING: Possible PIC construction at 0x000103b86a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b867fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b86760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b86800) */
/* WARNING: Removing unreachable block (ram,0x000103b86a10) */
/* WARNING: Removing unreachable block (ram,0x000103b86a18) */
/* WARNING: Removing unreachable block (ram,0x000103b86764) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b865d4(ulong param_1,undefined8 param_2,undefined **param_3)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong *puVar8;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined **in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  ppuVar5 = (undefined **)0xe400000000000000;
  ppuVar2 = (undefined **)0x6f666e69;
  puVar8 = (ulong *)(param_1 & 0xff);
  switch(puVar8) {
  default:
    ppuVar5 = (undefined **)0xe800000000000000;
  case (ulong *)0x28:
  case (ulong *)0x36:
  case (ulong *)0x76:
  case (ulong *)0xae:
  case (ulong *)0xc8:
  case (ulong *)0xd6:
    ppuVar2 = (undefined **)0x6e73;
  case (ulong *)0x1b:
  case (ulong *)0x2f:
  case (ulong *)0x43:
  case (ulong *)0x57:
  case (ulong *)0x5f:
  case (ulong *)0x67:
  case (ulong *)0x6f:
  case (ulong *)0x83:
  case (ulong *)0x97:
  case (ulong *)0x9f:
  case (ulong *)0xa7:
  case (ulong *)0xbb:
  case (ulong *)0xcf:
  case (ulong *)0xe3:
  case (ulong *)0xf7:
  case (ulong *)0xff:
    ppuVar2 = (undefined **)((ulong)ppuVar2 & 0xffffffff0000ffff | 0x70610000);
  case (ulong *)0x26:
  case (ulong *)0x4e:
  case (ulong *)0x8e:
  case (ulong *)0x90:
  case (ulong *)0xc6:
  case (ulong *)0xee:
    ppuVar2 = (undefined **)((ulong)ppuVar2 | 0x686300000000);
  case (ulong *)0x50:
  case (ulong *)0xf0:
    ppuVar2 = (undefined **)((ulong)ppuVar2 | 0x7461000000000000);
  case (ulong *)0x3f:
  case (ulong *)0x7f:
  case (ulong *)0xb7:
  case (ulong *)0xdf:
    auVar9._8_8_ = ppuVar5;
    auVar9._0_8_ = ppuVar2;
    return auVar9;
  case (ulong *)0x2:
  case (ulong *)0x70:
    auVar12._8_8_ = 0xe700000000000000;
    auVar12._0_8_ = 0x696a6f6d746962;
    return auVar12;
  case (ulong *)0x3:
    ppuVar5 = (undefined **)0xeb000000006f6567;
    ppuVar2 = (undefined **)0x5f696a6f6d746962;
  case (ulong *)0xf4:
  case (ulong *)0xfc:
    auVar13._8_8_ = ppuVar5;
    auVar13._0_8_ = ppuVar2;
    return auVar13;
  case (ulong *)0x4:
    auVar10._8_8_ = 0xe500000000000000;
    auVar10._0_8_ = 0x696a6f6d65;
    return auVar10;
  case (ulong *)0x5:
    ppuVar5 = (undefined **)0xe500000000000000;
    ppuVar2 = (undefined **)0x7968706967;
  case (ulong *)0xe0:
    auVar15._8_8_ = ppuVar5;
    auVar15._0_8_ = ppuVar2;
    return auVar15;
  case (ulong *)0x6:
    auVar16._8_8_ = 0xea00000000006c61;
    auVar16._0_8_ = 0x75747865746e6f63;
    return auVar16;
  case (ulong *)0x7:
    ppuVar2 = (undefined **)0x6f6c6e75;
  case (ulong *)0xa0:
    auVar14._0_8_ = (ulong)ppuVar2 | 0x62616b6300000000;
    auVar14._8_8_ = 0xea0000000000656c;
    return auVar14;
  case (ulong *)0x8:
    ppuVar5 = (undefined **)0xec00000074657070;
    ppuVar2 = (undefined **)0x696e735f656d6167;
  case (ulong *)0xb8:
    auVar18._8_8_ = ppuVar5;
    auVar18._0_8_ = ppuVar2;
    return auVar18;
  case (ulong *)0x9:
    ppuVar5 = (undefined **)0xe600000000000000;
  case (ulong *)0x14:
  case (ulong *)0x44:
    auVar11._8_8_ = ppuVar5;
    auVar11._0_8_ = 0x6d6f74737563;
    return auVar11;
  case (ulong *)0xa:
    ppuVar5 = (undefined **)0x6c6c6f;
  case (ulong *)0x1c:
    ppuVar5 = (undefined **)((ulong)ppuVar5 & 0xffffffffffff | 0xeb00000000000000);
  case (ulong *)0xcc:
    ppuVar2 = (undefined **)0x6172656d6163;
  case (ulong *)0x3d:
  case (ulong *)0x7d:
  case (ulong *)0xb5:
    ppuVar2 = (undefined **)((ulong)ppuVar2 | 0x725f000000000000);
  case (ulong *)0x0:
  case (ulong *)0xdd:
    auVar17._8_8_ = ppuVar5;
    auVar17._0_8_ = ppuVar2;
    return auVar17;
  case (ulong *)0x10:
    ppuVar2 = (undefined **)0x6f667389;
    func_0x0001000285a8(0x6f667389,&UNK_10dc5bdc0);
  case (ulong *)0x7c:
    ppuVar5 = &PTR__OBJC_METACLASS___NSObject_112ff1000;
  case (ulong *)0x94:
  case (ulong *)0x9c:
  case (ulong *)0xa4:
    ppuVar5 = ppuVar5 + 0x9e;
  case (ulong *)0x31:
  case (ulong *)0x61:
  case (ulong *)0x69:
    func_0x000107c61538();
  case (ulong *)0x1a:
  case (ulong *)0x2e:
  case (ulong *)0x42:
  case (ulong *)0x56:
  case (ulong *)0x5e:
  case (ulong *)0x66:
  case (ulong *)0x6e:
  case (ulong *)0x71:
  case (ulong *)0x82:
  case (ulong *)0x96:
  case (ulong *)0x9e:
  case (ulong *)0xa1:
  case (ulong *)0xa6:
  case (ulong *)0xa9:
  case (ulong *)0xba:
  case (ulong *)0xce:
  case (ulong *)0xe2:
  case (ulong *)0xf6:
  case (ulong *)0xfe:
    *unaff_x19 = (undefined *)ppuVar2;
  case (ulong *)0xd1:
    auVar22._8_8_ = ppuVar5;
    auVar22._0_8_ = ppuVar2;
    return auVar22;
  case (ulong *)0x18:
    in_stack_00000008 = 0x6f666e69;
    puVar7 = PTR_s_dealloc_112525b20;
    func_0x000107c61154();
    auVar25._8_8_ = puVar7;
    auVar25._0_8_ = register0x00000008;
    return auVar25;
  case (ulong *)0x2c:
  case (ulong *)0xf8:
    param_3 = (undefined **)&UNK_10ef0f000;
  case (ulong *)0x12:
  case (ulong *)0x5a:
  case (ulong *)0xfa:
    param_3 = param_3 + 0x16e;
  case (ulong *)0x99:
    func_0x000107c60eb0(0x6f666e69,0x35,param_3,6,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b86970);
    (*pcVar1)();
  case (ulong *)0x32:
  case (ulong *)0x62:
  case (ulong *)0x6a:
  case (ulong *)0x72:
  case (ulong *)0xa2:
  case (ulong *)0xaa:
  case (ulong *)0xd2:
    unaff_x19 = (undefined **)0xe400000000000000;
    in_stack_00000010 = unaff_x29;
    in_stack_00000018 = unaff_x30;
  case (ulong *)0x33:
  case (ulong *)0x63:
  case (ulong *)0x6b:
  case (ulong *)0x73:
  case (ulong *)0xa3:
  case (ulong *)0xab:
  case (ulong *)0xd3:
    func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
    func_0x000107c61538();
    ppuVar5 = ppuVar2;
  case (ulong *)0x19:
  case (ulong *)0x2d:
  case (ulong *)0x41:
  case (ulong *)0x55:
  case (ulong *)0x5d:
  case (ulong *)0x65:
  case (ulong *)0x6d:
  case (ulong *)0x81:
  case (ulong *)0x95:
  case (ulong *)0x9d:
  case (ulong *)0xa5:
  case (ulong *)0xb9:
  case (ulong *)0xcd:
  case (ulong *)0xe1:
  case (ulong *)0xf5:
  case (ulong *)0xfd:
    ppuVar2 = unaff_x19;
    func_0x000107c604c4();
    unaff_x19 = ppuVar5;
    break;
  case (ulong *)0x3c:
    FUN_103b865d4();
    param_3 = ppuVar2;
    unaff_x20 = ppuVar5;
  case (ulong *)0x58:
    ppuVar2 = unaff_x20;
    ppuVar5 = param_3;
    func_0x000107c5fb58();
  case (ulong *)0x85:
  case (ulong *)0xbd:
  case (ulong *)0xe5:
  case (ulong *)0x1d:
  case (ulong *)0x45:
    unaff_x19 = ppuVar5;
    break;
  case (ulong *)0x3e:
  case (ulong *)0x7e:
  case (ulong *)0xb6:
  case (ulong *)0xde:
    uVar4 = (ulong)*(byte *)unaff_x20;
    FUN_103b865d4();
    *puVar8 = uVar4;
    puVar8[1] = (ulong)ppuVar5;
    auVar21._8_8_ = ppuVar5;
    auVar21._0_8_ = uVar4;
    return auVar21;
  case (ulong *)0x40:
    ppuVar2 = (undefined **)register0x00000008;
    ppuVar5 = (undefined **)PTR_s_init_1125d9248;
  case (ulong *)0x84:
    func_0x000107c61154();
  case (ulong *)0x30:
    auVar24._8_8_ = ppuVar5;
    auVar24._0_8_ = ppuVar2;
    return auVar24;
  case (ulong *)0x68:
    auVar26._8_8_ = 0xe400000000000000;
    auVar26._0_8_ = 0x6f666e69;
    return auVar26;
  case (ulong *)0x98:
    ppuVar2 = ppuVar5;
    FUN_103b865d4();
    func_0x000107c5fb58(&stack0x00000008,unaff_x19,ppuVar2);
    break;
  case (ulong *)0xa8:
  case (ulong *)0xdc:
    auVar19._1_7_ = 0;
    auVar19[0] = (int)puVar8 == 0xdc5bdb0;
    auVar19._8_8_ = 0xe400000000000000;
    return auVar19;
  case (ulong *)0xb4:
    unaff_x19 = ppuVar5;
    break;
  case (ulong *)0xbc:
    ppuVar2 = unaff_x20;
  case (ulong *)0x80:
    func_0x000107c610f8();
    puVar8 = _DAT_112ff1528;
  case (ulong *)0x60:
    *(undefined ***)((long)ppuVar2 + (long)puVar8) = unaff_x19;
  case (ulong *)0x1e:
  case (ulong *)0x46:
  case (ulong *)0x86:
  case (ulong *)0xbe:
  case (ulong *)0xe6:
    ppuVar5 = (undefined **)PTR_s_init_1125d9248;
    in_stack_00000000 = ppuVar2;
    func_0x000107c61154();
    ppuVar2 = (undefined **)register0x00000008;
  case (ulong *)0x9a:
  case (ulong *)0x54:
  case (ulong *)0x5c:
  case (ulong *)0x64:
  case (ulong *)0x6c:
    auVar23._8_8_ = ppuVar5;
    auVar23._0_8_ = ppuVar2;
    return auVar23;
  case (ulong *)0xd0:
  case (ulong *)0xe4:
    uVar3 = uRam000000006f666e69;
    uVar6 = uRam000000006f666e71;
    FUN_103b869c4(uRam000000006f666e69,uRam000000006f666e71);
    *(char *)puVar8 = (char)uVar3;
    auVar20._8_8_ = uVar6;
    auVar20._0_8_ = uVar3;
    return auVar20;
  case (ulong *)0xf9:
    unaff_x19 = (undefined **)(ulong)*(byte *)unaff_x20;
  case (ulong *)0x11:
  case (ulong *)0x59:
    func_0x000107c6068c(&stack0x00000008);
    ppuVar2 = ppuVar5;
    FUN_103b865d4(unaff_x19);
    func_0x000107c5fb58(&stack0x00000008,unaff_x19,ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(ppuVar2);
  auVar27._8_8_ = unaff_x19;
  auVar27._0_8_ = ppuVar2;
  return auVar27;
}



/* Entry: 103b8671c; end: 103b86943;  */

void FUN_103b8671c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  FUN_103b865d4(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b86944; end: 103b869a3; -[_TtC31SCEditContentDivergenceServices21SCStickerListSnapshot init] */

void FUN_103b86944(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCEditContentDivergenceServices.SCStickerListSnapshot",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b86970);
  (*pcVar1)();
}



/* Entry: 103b869a4; end: 103b869c3; -[_TtC31SCEditContentDivergenceServices21SCStickerListSnapshot .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b869a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff1528));
  return;
}



/* Entry: 103b869c4; end: 103b86a27;  */

ulong FUN_103b869c4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (10 < uVar1) {
    uVar1 = 0xb;
  }
  return uVar1;
}



/* Entry: 103b86a28; end: 103b86a2b;  */

void FUN_103b86a28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff1530 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5bdc8;
  func_0x000107c61520(&UNK_10dc5bdc8,&UNK_1106dbd08);
  puRam0000000112ff1530 = puVar1;
  return;
}



/* Entry: 103b86a2c; end: 103b86a6b;  */

void FUN_103b86a2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff1530 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5bdc8;
  func_0x000107c61520(&UNK_10dc5bdc8,&UNK_1106dbd08);
  puRam0000000112ff1530 = puVar1;
  return;
}



/* Entry: 103b86a6c; end: 103b86a6f;  */

void FUN_103b86a6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff1538 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5be68;
  func_0x000107c61520(&UNK_10dc5be68,&UNK_1106dbd98);
  puRam0000000112ff1538 = puVar1;
  return;
}



/* Entry: 103b86a70; end: 103b86aaf;  */

void FUN_103b86a70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff1538 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5be68;
  func_0x000107c61520(&UNK_10dc5be68,&UNK_1106dbd98);
  puRam0000000112ff1538 = puVar1;
  return;
}



/* Entry: 103b86ab0; end: 103b86ab3;  */

void FUN_103b86ab0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ff1540 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ff1548;
  func_0x00010002969c(0x112ff1548,&UNK_10dc5bf08);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112ff1540 = puVar2;
  return;
}



/* Entry: 103b86ab4; end: 103b86b03;  */

void FUN_103b86ab4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ff1540 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ff1548;
  func_0x00010002969c(0x112ff1548,&UNK_10dc5bf08);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112ff1540 = puVar2;
  return;
}



/* Entry: 103b86b04; end: 103b86c77;  */

undefined1  [16] FUN_103b86b04(void)

{
  return ZEXT816(0x1106dbd08);
}



/* Entry: 103b86c78; end: 103b86c97;  */

void FUN_103b86c78(void)

{
  func_0x000107c61168(&PTR_PTR_112937820);
  return;
}



/* Entry: 103b86c98; end: 103b86cc3; +[SCOperaMuteSwitchEvents mute] */

void FUN_103b86c98(void)

{
  func_0x000107c5fadc(0xd000000000000010,0x800000010f1a5360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b86cc4; end: 103b86cef; +[SCOperaMuteSwitchEvents unmute] */

void FUN_103b86cc4(void)

{
  func_0x000107c5fadc(0xd000000000000012,0x800000010f1a5380);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b86cf0; end: 103b86d2b; -[SCOperaMuteSwitchEvents init] */

void FUN_103b86cf0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b86d2c; end: 103b86d5f;  */

void FUN_103b86d2c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b86d60; end: 103b86d63; -[SCOperaMuteSwitchEvents .cxx_destruct] */

void FUN_103b86d60(void)

{
  return;
}



/* Entry: 103b86d64; end: 103b86d83;  */

void FUN_103b86d64(void)

{
  func_0x000107c61168(&PTR_PTR_1129378e0);
  return;
}



/* Entry: 103b86d84; end: 103b86daf; +[_TtC20SCOperaMuteSwitchAPI33SCOperaMuteSwitchPagePropertyKeys kSCOperaPageMuteStateKey] */

void FUN_103b86d84(void)

{
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1a53a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b86db0; end: 103b86ddb; +[_TtC20SCOperaMuteSwitchAPI33SCOperaMuteSwitchPagePropertyKeys kSCOperaPageMuteStateIsMuteOverriden] */

void FUN_103b86db0(void)

{
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1a53c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b86ddc; end: 103b86e07; +[_TtC20SCOperaMuteSwitchAPI33SCOperaMuteSwitchPagePropertyKeys kSCOperaPageMuteStateIsDeviceMuteSwitchOn] */

void FUN_103b86ddc(void)

{
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1a53f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b86e08; end: 103b86e53; +[_TtC20SCOperaMuteSwitchAPI33SCOperaMuteSwitchPagePropertyKeys kSCOperaPageMuteStateIsSoundPlaying] */

void FUN_103b86e08(void)

{
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f1a5420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b86e54; end: 103b86e8f; -[_TtC20SCOperaMuteSwitchAPI33SCOperaMuteSwitchPagePropertyKeys init] */

void FUN_103b86e54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000103b86e34();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b86e90; end: 103b86ebf;  */

void FUN_103b86e90(void)

{
  func_0x000103b86e34();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b86ec0; end: 103b86edb; -[_TtC20SCOperaMuteSwitchAPI33SCOperaMuteSwitchPagePropertyKeys .cxx_destruct] */

void FUN_103b86ec0(void)

{
  return;
}



/* Entry: 103b86edc; end: 103b86f1b;  */

void FUN_103b86edc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff16f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5c010;
  func_0x000107c61520(&UNK_10dc5c010,&UNK_1106dbe68);
  puRam0000000112ff16f8 = puVar1;
  return;
}



/* Entry: 103b86f1c; end: 103b86fc7;  */

void FUN_103b86f1c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b86fc8; end: 103b86fff;  */

void FUN_103b86fc8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103b87000; end: 103b87033; +[SCAdReportReasonIds key] */

void FUN_103b87000(void)

{
  func_0x000107c5fadc(0x725f74726f706572,0xed00006e6f736165);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b87034; end: 103b8703f;  */

undefined * FUN_103b87034(void)

{
  return &UNK_1106dbf08;
}



/* Entry: 103b87040; end: 103b8706b; +[SCAdReportReasonIds frequencyCapTooHigh] */

void FUN_103b87040(void)

{
  func_0x000107c5fadc(0xd000000000000028,0x800000010f1a5440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8706c; end: 103b87077;  */

undefined * FUN_103b8706c(void)

{
  return &UNK_1106dbf18;
}



/* Entry: 103b87078; end: 103b870a3; +[SCAdReportReasonIds frequencyAdLoad] */

void FUN_103b87078(void)

{
  func_0x000107c5fadc(0xd000000000000023,0x800000010f1a5470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b870a4; end: 103b870af;  */

undefined * FUN_103b870a4(void)

{
  return &UNK_1106dbf28;
}



/* Entry: 103b870b0; end: 103b870db; +[SCAdReportReasonIds offensiveSexual] */

void FUN_103b870b0(void)

{
  func_0x000107c5fadc(0xd000000000000030,0x800000010f1a54a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b870dc; end: 103b870e7;  */

undefined * FUN_103b870dc(void)

{
  return &UNK_1106dbf38;
}



/* Entry: 103b870e8; end: 103b87113; +[SCAdReportReasonIds offensiveViolent] */

void FUN_103b870e8(void)

{
  func_0x000107c5fadc(0xd000000000000032,0x800000010f1a54e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b87114; end: 103b8711f;  */

undefined * FUN_103b87114(void)

{
  return &UNK_1106dbf48;
}



/* Entry: 103b87120; end: 103b8714b; +[SCAdReportReasonIds offensiveSpeech] */

void FUN_103b87120(void)

{
  func_0x000107c5fadc(0xd00000000000004f,0x800000010f1a5520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8714c; end: 103b87157;  */

undefined * FUN_103b8714c(void)

{
  return &UNK_1106dbf58;
}



/* Entry: 103b87158; end: 103b87183; +[SCAdReportReasonIds offensiveOther] */

void FUN_103b87158(void)

{
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1a5570);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b87184; end: 103b8718f;  */

undefined * FUN_103b87184(void)

{
  return &UNK_1106dbf68;
}



/* Entry: 103b87190; end: 103b871bb; +[SCAdReportReasonIds irrelevantDemo] */

void FUN_103b87190(void)

{
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f1a55a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b871bc; end: 103b871c7;  */

undefined * FUN_103b871bc(void)

{
  return &UNK_1106dbf78;
}



/* Entry: 103b871c8; end: 103b871f3; +[SCAdReportReasonIds irrelevantAnnoying] */

void FUN_103b871c8(void)

{
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f1a55d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b871f4; end: 103b871ff;  */

undefined * FUN_103b871f4(void)

{
  return &UNK_1106dbf88;
}



/* Entry: 103b87200; end: 103b8722b; +[SCAdReportReasonIds irrelevantProduct] */

void FUN_103b87200(void)

{
  func_0x000107c5fadc(0xd000000000000032,0x800000010f1a5600);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8722c; end: 103b87237;  */

undefined * FUN_103b8722c(void)

{
  return &UNK_1106dbf98;
}



/* Entry: 103b87238; end: 103b87263; +[SCAdReportReasonIds irrelevantOther] */

void FUN_103b87238(void)

{
  func_0x000107c5fadc(0xd000000000000021,0x800000010f1a5640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b87264; end: 103b8726f;  */

undefined * FUN_103b87264(void)

{
  return &UNK_1106dbfa8;
}



/* Entry: 103b87270; end: 103b8729b; +[SCAdReportReasonIds seeTooOften] */

void FUN_103b87270(void)

{
  func_0x000107c5fadc(0xd000000000000023,0x800000010f1a5670);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8729c; end: 103b872a7;  */

undefined * FUN_103b8729c(void)

{
  return &UNK_1106dbfb8;
}



/* Entry: 103b872a8; end: 103b872d3; +[SCAdReportReasonIds dontLikeIt] */

void FUN_103b872a8(void)

{
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f1a56a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b872d4; end: 103b872df;  */

undefined * FUN_103b872d4(void)

{
  return &UNK_1106dbfc8;
}



/* Entry: 103b872e0; end: 103b8730b; +[SCAdReportReasonIds promoteScam] */

void FUN_103b872e0(void)

{
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1a56c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8730c; end: 103b87317;  */

undefined * FUN_103b8730c(void)

{
  return &UNK_1106dbfd8;
}



/* Entry: 103b87318; end: 103b87343; +[SCAdReportReasonIds infringeIP] */

void FUN_103b87318(void)

{
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f1a56e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b87344; end: 103b8734f;  */

undefined * FUN_103b87344(void)

{
  return &UNK_1106dbfe8;
}



/* Entry: 103b87350; end: 103b8737b; +[SCAdReportReasonIds ipCopyrightInfringement] */

void FUN_103b87350(void)

{
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f1a5700);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8737c; end: 103b87387;  */

undefined * FUN_103b8737c(void)

{
  return &UNK_1106dbff8;
}



/* Entry: 103b87388; end: 103b873b3; +[SCAdReportReasonIds ipTrademarkInfringement] */

void FUN_103b87388(void)

{
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f1a5730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b873b4; end: 103b873bf;  */

undefined * FUN_103b873b4(void)

{
  return &UNK_1106dc008;
}



/* Entry: 103b873c0; end: 103b873eb; +[SCAdReportReasonIds ipPublicityInfringement] */

void FUN_103b873c0(void)

{
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f1a5760);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b873ec; end: 103b873f7;  */

undefined * FUN_103b873ec(void)

{
  return &UNK_1106dc018;
}



/* Entry: 103b873f8; end: 103b87423; +[SCAdReportReasonIds iLikeIt] */

void FUN_103b873f8(void)

{
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f1a5790);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b87424; end: 103b8742f;  */

undefined * FUN_103b87424(void)

{
  return &UNK_1106dc028;
}



/* Entry: 103b87430; end: 103b8745b; +[SCAdReportReasonIds makeMeSmile] */

void FUN_103b87430(void)

{
  func_0x000107c5fadc(0xd000000000000022,0x800000010f1a57b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8745c; end: 103b87467;  */

undefined * FUN_103b8745c(void)

{
  return &UNK_1106dc038;
}



/* Entry: 103b87468; end: 103b87493; +[SCAdReportReasonIds productOrServiceILike] */

void FUN_103b87468(void)

{
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f1a57e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b87494; end: 103b8749f;  */

undefined * FUN_103b87494(void)

{
  return &UNK_1106dc048;
}



/* Entry: 103b874a0; end: 103b874cb; +[SCAdReportReasonIds relevantOther] */

void FUN_103b874a0(void)

{
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f1a5810);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b874cc; end: 103b874d7;  */

undefined * FUN_103b874cc(void)

{
  return &UNK_1106dc058;
}



/* Entry: 103b874d8; end: 103b87503; +[SCAdReportReasonIds illegalContent] */

void FUN_103b874d8(void)

{
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1a5830);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b87504; end: 103b8752f; +[SCAdReportReasonIds interested] */

void FUN_103b87504(void)

{
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f1a5860);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b87530; end: 103b8753f; -[SCAdReportReasonIds .cxx_destruct] */

void FUN_103b87530(void)

{
  return;
}



/* Entry: 103b87540; end: 103b8756b; +[SCAdHideReasonIds irrelevant] */

void FUN_103b87540(void)

{
  func_0x000107c5fadc(0xd000000000000019,0x800000010f1a5880);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8756c; end: 103b87577;  */

undefined * FUN_103b8756c(void)

{
  return &UNK_1106dc078;
}



/* Entry: 103b87578; end: 103b875a3; +[SCAdHideReasonIds iSeeItTooOften] */

void FUN_103b87578(void)

{
  func_0x000107c5fadc(0xd000000000000021,0x800000010f1a58a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b875a4; end: 103b875af;  */

undefined * FUN_103b875a4(void)

{
  return &UNK_1106dc088;
}



/* Entry: 103b875b0; end: 103b875db; +[SCAdHideReasonIds iSeeSimilarAdsTooOften] */

void FUN_103b875b0(void)

{
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f1a58d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b875dc; end: 103b875e7;  */

undefined * FUN_103b875dc(void)

{
  return &UNK_1106dc098;
}



/* Entry: 103b875e8; end: 103b87613; +[SCAdHideReasonIds inappropriate] */

void FUN_103b875e8(void)

{
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f1a5900);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b87614; end: 103b8761f;  */

undefined * FUN_103b87614(void)

{
  return &UNK_1106dc0a8;
}



/* Entry: 103b87620; end: 103b8764b; +[SCAdHideReasonIds alreadyBought] */

void FUN_103b87620(void)

{
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1a5920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8764c; end: 103b87657;  */

undefined * FUN_103b8764c(void)

{
  return &UNK_1106dc0b8;
}



/* Entry: 103b87658; end: 103b87683; +[SCAdHideReasonIds alreadyInstalled] */

void FUN_103b87658(void)

{
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1a5940);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b87684; end: 103b87687; -[SCAdHideReasonIds init] */

void FUN_103b87684(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b87688; end: 103b876c3;  */

void FUN_103b87688(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}


