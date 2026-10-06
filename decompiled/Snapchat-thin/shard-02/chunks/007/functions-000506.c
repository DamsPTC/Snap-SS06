/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10214beac; end: 10214bed7;  */

void FUN_10214beac(undefined1 *param_1,undefined *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long unaff_x20;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_d8;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  lVar11 = *(long *)(unaff_x20 + 0x18);
  if (param_1 != (undefined1 *)0x0) {
    puStack_b0 = (undefined *)0x0;
    uVar3 = 0;
    func_0x0001012190e4(0);
    func_0x000107c5fc50(param_1,&puStack_b0,uVar3);
    puVar13 = puStack_b0;
    if (puStack_b0 != (undefined *)0x0) {
      if (param_2 == (undefined *)0x0) {
        puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar12 = (undefined *)((ulong)puStack_b0 & 0xffffffffffffff8);
        if ((ulong)puStack_b0 >> 0x3e == 0) {
          puStack_d8 = *(undefined **)(puVar12 + 0x10);
        }
        else {
          puStack_d8 = puStack_b0;
          if (-1 < (long)puStack_b0) {
            puStack_d8 = puVar12;
          }
          func_0x000107c60480();
        }
        puVar14 = (undefined *)0x0;
        do {
          if (puStack_d8 == puVar14) {
            func_0x000107c6142c(puVar13);
            if (*(long *)(puStack_80 + 0x10) == 0) {
              puStack_b0 = puStack_78;
              uStack_a8 = uStack_a8 & 0xffffffffffffff00;
              func_0x000100087f6c(&puStack_b0);
              func_0x000100c7f554();
            }
            else {
              puVar13 = *(undefined **)(puStack_80 + 0x20);
              func_0x000107c61428(lVar11 + 0x10,&puStack_b0,0,0);
              lVar11 = lVar11 + 0x10;
              func_0x000107c61648();
              func_0x000107c614b0(puVar13);
              if (lVar11 != 0) {
                func_0x000107c61574();
                puStack_c0 = (undefined *)0x0;
                uStack_b8 = 0xe000000000000000;
                func_0x000107c602fc(0x20);
                func_0x000107c5fb78(0xd00000000000001e,0x800000010f065500);
                uVar3 = 0x112d393f0;
                puStack_c8 = puVar13;
                func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
                func_0x000107c603d0(&puStack_c8,&puStack_c0,uVar3,
                                    PTR___ss26DefaultStringInterpolationVN_11034ec00,
                                    PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08
                                   );
                func_0x000107c6142c(uStack_b8);
              }
              uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
              puStack_c0 = puVar13;
              func_0x000107c614b0(puVar13);
              func_0x000100087f6c(&puStack_c0);
              func_0x000100c7f554();
              func_0x000107c614ac(puVar13);
              func_0x000107c614ac(puVar13);
            }
            func_0x000107c6142c(puStack_80);
            func_0x000107c6142c(puStack_78);
            return;
          }
          if (((ulong)puVar13 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puVar12 + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10214bc44);
              (*pcVar2)();
            }
            puVar4 = *(undefined **)(puVar13 + (long)puVar14 * 8 + 0x20);
            func_0x000107c61174(puVar4);
          }
          else {
            puVar4 = puVar14;
            func_0x00010121c198(puVar14,puVar13);
          }
          if (SCARRY8((long)puVar14,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10214bc40);
            (*pcVar2)();
          }
          puVar5 = &UNK_1104d1df8;
          func_0x000107c613fc(&UNK_1104d1df8,0x18,7);
          *(undefined ***)(puVar5 + 0x10) = &puStack_78;
          puVar6 = &UNK_1104d1e20;
          func_0x000107c613fc(&UNK_1104d1e20,0x20,7);
          *(undefined8 *)(puVar6 + 0x10) = 0x10214bed0;
          *(undefined **)(puVar6 + 0x18) = puVar5;
          puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          pcStack_90 = FUN_10214bed8;
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0x42000000;
          puStack_a0 = &UNK_100fe2610;
          puStack_98 = &UNK_1104d1e38;
          ppuVar7 = &puStack_b0;
          puStack_88 = puVar6;
          func_0x000107c60bc4(ppuVar7);
          puVar8 = puStack_88;
          func_0x000107c6157c(puVar6);
          func_0x000107c61574(puVar8);
          puVar8 = &UNK_1104d1e70;
          func_0x000107c613fc(&UNK_1104d1e70,0x18,7);
          *(undefined ***)(puVar8 + 0x10) = &puStack_80;
          puVar9 = &UNK_1104d1e98;
          func_0x000107c613fc(&UNK_1104d1e98,0x20,7);
          *(code **)(puVar9 + 0x10) = FUN_10214bef8;
          *(undefined **)(puVar9 + 0x18) = puVar8;
          pcStack_90 = FUN_10214bf00;
          puStack_b0 = puVar1;
          uStack_a8 = 0x42000000;
          puStack_a0 = &UNK_100fe2654;
          puStack_98 = &UNK_1104d1eb0;
          ppuVar10 = &puStack_b0;
          puStack_88 = puVar9;
          func_0x000107c60bc4(ppuVar10);
          puVar1 = puStack_88;
          func_0x000107c6157c(puVar9);
          func_0x000107c61574(puVar1);
          func_0x000107c4c744(puVar4);
          func_0x000107c61170(puVar4);
          func_0x000107c60bd0(ppuVar10);
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c61574(puVar5);
          puVar4 = puVar6;
          func_0x000107c61544(puVar6,"",0x6b,0x32,0x15,1);
          func_0x000107c61574(puVar8);
          func_0x000107c61574(puVar6);
          if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10214bc48);
            (*pcVar2)();
          }
          puVar4 = puVar9;
          func_0x000107c61544(puVar9,"",0x6b,0x36,0x1c,1);
          func_0x000107c61574(puVar9);
          puVar14 = puVar14 + 1;
        } while (((ulong)puVar4 & 1) == 0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10214bc4c);
        (*pcVar2)();
      }
      func_0x000107c614b0(param_2);
      func_0x000107c6142c(puVar13);
      func_0x000107c61428(lVar11 + 0x10,&puStack_b0,0,0);
      lVar11 = lVar11 + 0x10;
      func_0x000107c61648();
      if (lVar11 != 0) {
        func_0x000107c61574();
        puStack_c0 = (undefined *)0x0;
        uStack_b8 = 0xe000000000000000;
        func_0x000107c602fc(0x20);
        func_0x000107c5fb78(0xd00000000000001e,0x800000010f065500);
        uVar3 = 0x112d393f0;
        puStack_78 = param_2;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c603d0(&puStack_78,&puStack_c0,uVar3,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        func_0x000107c6142c(uStack_b8);
      }
      uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
      puStack_c0 = param_2;
      func_0x000107c614b0(param_2);
      func_0x000100087f6c(&puStack_c0);
      func_0x000100c7f554();
      func_0x000107c614ac(param_2);
      goto LAB_10214b888;
    }
  }
  FUN_10214be34();
  param_2 = &UNK_1104d1f58;
  func_0x000107c613f8(&UNK_1104d1f58,param_1,0,0);
  *param_1 = 1;
  uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
  puStack_b0 = param_2;
  func_0x000100087f6c(&puStack_b0);
  func_0x000100c7f554();
LAB_10214b888:
  func_0x000107c614ac(param_2);
  return;
}



/* Entry: 10214bed8; end: 10214bef7;  */

void FUN_10214bed8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10214bef8; end: 10214beff;  */

void FUN_10214bef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long unaff_x20;
  ulong uVar4;
  
  puVar3 = *(ulong **)(unaff_x20 + 0x10);
  uVar4 = *puVar3;
  uVar1 = uVar4;
  func_0x000107c61558();
  *puVar3 = uVar4;
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_101bf282c(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *puVar3 = uVar2;
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_101bf282c(uVar4,uVar1 + 1,1,uVar2);
    *puVar3 = uVar4;
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar4 + uVar1 * 8 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRetain_11034f320)(param_3);
  return;
}



/* Entry: 10214bf00; end: 10214bf1f;  */

void FUN_10214bf00(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10214bf20; end: 10214c087;  */

int FUN_10214bf20(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10214bf9c;
        goto LAB_10214bf80;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10214bf80:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10214bf9c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10214c088; end: 10214c0c7;  */

void FUN_10214c088(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b8c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da61918;
  func_0x000107c61520(&UNK_10da61918,&UNK_1104d1f58);
  puRam0000000112e5b8c0 = puVar1;
  return;
}



/* Entry: 10214c0c8; end: 10214c0d7;  */

void FUN_10214c0c8(long param_1,long param_2)

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



/* Entry: 10214c0d8; end: 10214c1eb;  */

void FUN_10214c0d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10214c1ec; end: 10214c23f;  */

void FUN_10214c1ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10214c240; end: 10214c4ff;  */

void FUN_10214c240(byte param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    func_0x000100087bd4(FUN_10214c864);
  }
  puVar5 = PTR_PTR_1126c3128;
  func_0x000107c61168();
  func_0x000107c4ed50();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar6 = 0x6567617473;
    func_0x000107c5fadc(0x6567617473,0xe500000000000000);
    pcVar3 = "lenses_archives_fetch";
    if (param_1 != 2) {
      pcVar3 = "feed_fetch_failed";
    }
    uVar1 = 0xea00000000006863;
    uVar4 = 0x7465665f64656566;
    if (param_1 != 0) {
      uVar1 = 0x800000010f0655e0;
      uVar4 = 0xd000000000000010;
    }
    uVar2 = (ulong)pcVar3 | 0x8000000000000000;
    uVar7 = 0xd000000000000015;
    if (param_1 < 2) {
      uVar2 = uVar1;
      uVar7 = uVar4;
    }
    func_0x000107c5fadc(uVar7,uVar2);
    func_0x000107c6142c(uVar2);
    puVar8 = puVar5;
    func_0x000107c5e508(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
  }
  func_0x0001000d224c(&uStack_48);
  func_0x000107c45314(uStack_48);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(puVar8);
  return;
}



/* Entry: 10214c500; end: 10214c7fb;  */

void FUN_10214c500(uint param_1)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  double dStack_70;
  char cStack_68;
  
  puVar4 = PTR_PTR_1126c3128;
  func_0x000107c61168();
  func_0x000107c4ecf0();
  func_0x000107c61180();
  if ((param_1 & 0xff00) == 0x100) {
    if (puVar4 == (undefined *)0x0) {
LAB_10214c6e4:
      puVar9 = (undefined *)0x0;
      goto LAB_10214c6e8;
    }
    param_1 = param_1 & 0xff;
    uVar5 = 0x746c75736572;
    func_0x000107c5fadc(0x746c75736572,0xe600000000000000);
    uVar6 = 0x6572756c696166;
    func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
    puVar8 = puVar4;
    func_0x000107c5e508(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    puVar7 = (undefined *)0x6e6f73616572;
    func_0x000107c5fadc(0x6e6f73616572,0xe600000000000000);
    pcVar2 = "lenses_archives_fetch_failed";
    if (param_1 != 2) {
      pcVar2 = "Lenses metadata fetch failed. ";
    }
    pcVar1 = "feed_media_fetch_failed";
    uVar6 = 0xd000000000000011;
    if (param_1 != 0) {
      pcVar1 = "lenses_metadata_fetch_failed";
      uVar6 = 0xd000000000000017;
    }
    uVar5 = 0xd00000000000001c;
    if (param_1 < 2) {
      pcVar2 = pcVar1;
      uVar5 = uVar6;
    }
    func_0x000107c5fadc(uVar5,(ulong)pcVar2 | 0x8000000000000000);
    func_0x000107c6142c((ulong)pcVar2 | 0x8000000000000000);
    puVar9 = puVar8;
    func_0x000107c5e508(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    puVar8 = puVar4;
    puVar4 = puVar7;
  }
  else {
    if (puVar4 == (undefined *)0x0) goto LAB_10214c6e4;
    uVar5 = 0x746c75736572;
    func_0x000107c5fadc(0x746c75736572,0xe600000000000000);
    puVar8 = (undefined *)0x73736563637573;
    func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
    puVar9 = puVar4;
    func_0x000107c5e508(puVar4);
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar8);
LAB_10214c6e8:
  func_0x0001000d224c(&dStack_70);
  dVar10 = dStack_70;
  func_0x000107c45314(dStack_70);
  func_0x000107c61170(dVar10);
  func_0x0001000285a8(0x112dc10e8,&UNK_10d97dc20);
  func_0x000100087bd4(&dStack_70,FUN_10214c7fc);
  dVar10 = dStack_70;
  if ((cStack_68 != '\x01') && (func_0x0001000d224c(&dStack_70), dStack_70 != 0.0)) {
    dVar10 = dVar10 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10214c7f4);
      (*pcVar3)();
    }
    if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10214c7f8);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10214c7fc);
      (*pcVar3)();
    }
    func_0x000107c3d8d8(dStack_70);
    func_0x000107c61170(dStack_70);
  }
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 10214c7fc; end: 10214c863;  */

void FUN_10214c7fc(double *param_1,double param_2)

{
  bool bVar1;
  long unaff_x20;
  double dVar2;
  
  dVar2 = *(double *)(unaff_x20 + 0x28);
  bVar1 = *(char *)(unaff_x20 + 0x30) != '\x01';
  if (bVar1) {
    func_0x000107c40fd4(*(undefined8 *)(unaff_x20 + 0x18));
    dVar2 = param_2 - dVar2;
  }
  *param_1 = dVar2;
  *(bool *)(param_1 + 1) = !bVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 10214c864; end: 10214c893;  */

void FUN_10214c864(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c40fd4(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  return;
}



/* Entry: 10214c894; end: 10214c913;  */

void FUN_10214c894(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104d2108;
  func_0x000107c613fc(&UNK_1104d2108,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10214c914,puVar1);
  return;
}



/* Entry: 10214c914; end: 10214caab;  */

void FUN_10214c914(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar5 = &puStack_80;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&puStack_80);
  puVar2 = puStack_80;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puStack_80);
  if (puVar2 != (undefined *)0x0) {
    uVar3 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010f065620);
    puVar6 = puVar2;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar3);
    if ((int)puVar6 != 0) {
      func_0x0001000a0a8c(0);
      puVar4 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      pcStack_60 = FUN_10214cabc;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_101443eec;
      puStack_68 = &UNK_1104d2140;
      uStack_58 = uVar1;
      func_0x000107c60bc4(&puStack_80);
      uVar3 = uStack_58;
      func_0x000107c6157c(uVar1);
      func_0x000107c61574(uVar3);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      puVar6 = puVar4;
      func_0x000100a0dc54(puVar4,0xd000000000000020,0x800000010f065650);
      func_0x000107c615e8(puVar2);
      func_0x000107c61170(puVar4);
      goto LAB_10214ca8c;
    }
    func_0x000107c615e8(puVar2);
  }
  puVar6 = (undefined *)0x0;
LAB_10214ca8c:
  *param_1 = puVar6;
  return;
}



/* Entry: 10214caac; end: 10214cabb;  */

undefined1  [16] FUN_10214caac(void)

{
  return ZEXT816(0x1104d2130);
}



/* Entry: 10214cabc; end: 10214cb0b;  */

undefined * FUN_10214cabc(void)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  puVar1 = PTR_PTR_1126a9f30;
  func_0x000107c610f8(PTR_PTR_1126a9f30);
  func_0x000107c493e4();
  func_0x000107c61170(uStack_28);
  return puVar1;
}



/* Entry: 10214cb0c; end: 10214cb33;  */

void FUN_10214cb0c(long param_1,long param_2)

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



/* Entry: 10214cb34; end: 10214cdf3;  */

void FUN_10214cb34(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c4ec80(uStack_48);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar3 = PTR_PTR_1126a9f38;
  func_0x000107c610f8();
  func_0x000107c492ec();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_48);
  puVar6 = puVar3;
  func_0x000107c3f458();
  if ((int)puVar6 == 0) {
    func_0x000107c61170(puVar3);
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126a9f40;
    func_0x000107c610f8(PTR_PTR_1126a9f40);
    func_0x000107c453e4();
    puVar2 = PTR_PTR_1126a9f48;
    func_0x000107c610f8(PTR_PTR_1126a9f48);
    func_0x000107c453e4();
    func_0x000107c61174(puVar3);
    puVar4 = puVar3;
    func_0x00010214ccc0();
    puVar5 = PTR_PTR_1126a9f58;
    func_0x000107c610f8();
    func_0x000107c464f8();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar6);
    func_0x0001000a0a8c(0);
    puVar6 = puVar5;
    func_0x000104494b00();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 10214cdf4; end: 10214cdff;  */

void FUN_10214cdf4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10214ce58,param_1);
  return;
}



/* Entry: 10214ce00; end: 10214ce57;  */

void FUN_10214ce00(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 10214ce58; end: 10214cfe3;  */

void FUN_10214ce58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c4ec80(uStack_48);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar3 = PTR_PTR_1126a9f38;
  func_0x000107c610f8();
  func_0x000107c492ec();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_48);
  puVar6 = puVar3;
  func_0x000107c3f458();
  if ((int)puVar6 == 0) {
    func_0x000107c61170(puVar3);
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126a9f40;
    func_0x000107c610f8(PTR_PTR_1126a9f40);
    func_0x000107c453e4();
    puVar2 = PTR_PTR_1126a9f48;
    func_0x000107c610f8(PTR_PTR_1126a9f48);
    func_0x000107c453e4();
    func_0x000107c61174(puVar3);
    puVar4 = puVar3;
    func_0x00010214ccc0();
    puVar5 = PTR_PTR_1126a9f50;
    func_0x000107c610f8();
    func_0x000107c464f8();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar6);
    func_0x0001000a0a8c(0);
    puVar6 = puVar5;
    func_0x000104494b00();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 10214cfe4; end: 10214d003;  */

undefined1  [16] FUN_10214cfe4(void)

{
  return ZEXT816(0x1104d21f8);
}



/* Entry: 10214d004; end: 10214d09b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10214d004(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5b980) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10214d09c; end: 10214d0fb; -[GamesConsentPresentationServices init] */

void FUN_10214d09c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesConsentPresentationServices.GamesConsentPresentationServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10214d0c8);
  (*pcVar1)();
}



/* Entry: 10214d0fc; end: 10214d10b; -[GamesConsentPresentationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10214d0fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5b980));
  return;
}



/* Entry: 10214d10c; end: 10214d273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10214d10c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e5b9e0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e5b9e0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000107c614f0();
    lVar3 = unaff_x20;
    func_0x00010214d17c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10214d274; end: 10214d71f;  */

undefined * FUN_10214d274(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar13 = param_1 >> 0x3e;
  if (param_2 != 0) {
    if (uVar13 == 0) {
      uVar12 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar12 = param_1;
      }
      func_0x000107c60480();
    }
    if (uVar12 != 0) {
      uVar15 = param_1 & 0xffffffffffffff8;
      uVar9 = param_2;
      func_0x000107c61174();
      func_0x000107c61434(param_1);
      uVar14 = 0;
      while( true ) {
        if (uVar12 == uVar14) {
          uVar12 = param_2;
          func_0x000107c61174();
          uVar14 = param_1;
          func_0x000107c61550();
          if ((uVar13 != 0) || ((uVar14 & 1) == 0)) {
            func_0x00010214ea78();
            uVar15 = param_1 & 0xffffffffffffff8;
          }
          if (*(long *)(uVar15 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d720);
            (*pcVar2)();
          }
          uVar8 = *(undefined8 *)(uVar15 + 0x20);
          *(ulong *)(uVar15 + 0x20) = uVar12;
          func_0x000107c61170(uVar8);
          goto LAB_10214d44c;
        }
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar15 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d584);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(param_1 + uVar14 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar14;
          uVar9 = param_1;
          FUN_10214f008(uVar14,param_1,&PTR_PTR_1126ae6a8,0x112d4d630);
        }
        uVar5 = uVar4;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x000107c5faec();
        uVar11 = uVar9;
        func_0x000107c61170(uVar5);
        uVar5 = param_2;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar7 = uVar5;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
        if ((uVar6 == uVar7) && (uVar9 == uVar11)) break;
        uVar5 = uVar9;
        func_0x000107c605b8(uVar6,uVar9,uVar7,uVar11,0);
        func_0x000107c61170(uVar4);
        func_0x000107c6142c(uVar9);
        func_0x000107c6142c(uVar11);
        if ((uVar6 & 1) != 0) goto LAB_10214d434;
        bVar3 = SCARRY8(uVar14,1);
        uVar14 = uVar14 + 1;
        uVar9 = uVar5;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d588);
          (*pcVar2)();
        }
      }
      func_0x000107c61170(uVar4);
      func_0x000107c6142c(uVar9);
      func_0x000107c6142c(uVar11);
LAB_10214d434:
      if (uVar14 != 0) {
        FUN_10214d720(0,uVar14);
      }
LAB_10214d44c:
      if (param_1 >> 0x3e == 0) {
        uVar13 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar13 = param_1 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < param_1) {
          uVar13 = param_1;
        }
        func_0x000107c60480();
      }
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar13 != 0) {
        func_0x00010214ee98(0,uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d71c);
          (*pcVar2)();
        }
        uVar12 = 0;
        do {
          if ((param_1 & 0xc000000000000001) == 0) {
            if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) <= (long)uVar12) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d58c);
              (*pcVar2)();
            }
            uVar14 = *(ulong *)(param_1 + uVar12 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar14 = uVar12;
            FUN_10214f008(uVar12,param_1,&PTR_PTR_1126ae6a8,0x112d4d630);
          }
          uVar9 = uVar14;
          FUN_10214f490();
          func_0x000107c61170(uVar14);
          uVar14 = *(ulong *)(puVar1 + 0x10);
          if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar14) {
            func_0x00010214ee98(1 < *(ulong *)(puVar1 + 0x18),uVar14 + 1,1);
          }
          uVar12 = uVar12 + 1;
          *(ulong *)(puVar1 + 0x10) = uVar14 + 1;
          *(ulong *)(puVar1 + uVar14 * 8 + 0x20) = uVar9;
        } while (uVar13 != uVar12);
      }
      uVar8 = 0;
      func_0x000102150424(0,0x112e5ba10,&PTR_PTR_1126a9f60);
      puVar10 = puVar1;
      func_0x000107c5fc48(puVar1,uVar8);
      func_0x000107c6142c(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c6142c(puVar1);
      return puVar10;
    }
  }
  if (uVar13 == 0) {
    uVar13 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar13 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    func_0x00010214ee98(0,uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d718);
      (*pcVar2)();
    }
    uVar12 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) <= (long)uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d6e8);
          (*pcVar2)();
        }
        uVar14 = *(ulong *)(param_1 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar14 = uVar12;
        FUN_10214f008(uVar12,param_1,&PTR_PTR_1126ae6a8,0x112d4d630);
      }
      uVar9 = uVar14;
      FUN_10214f490();
      func_0x000107c61170(uVar14);
      uVar14 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar14) {
        func_0x00010214ee98(1 < *(ulong *)(puVar1 + 0x18),uVar14 + 1,1);
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar14 + 1;
      *(ulong *)(puVar1 + uVar14 * 8 + 0x20) = uVar9;
    } while (uVar13 != uVar12);
  }
  uVar8 = 0;
  func_0x000102150424(0,0x112e5ba10,&PTR_PTR_1126a9f60);
  puVar10 = puVar1;
  func_0x000107c5fc48(puVar1,uVar8);
  func_0x000107c6142c(puVar1);
  return puVar10;
}



/* Entry: 10214d720; end: 10214d87b;  */

void FUN_10214d720(ulong param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  if (param_1 != param_2) {
    uVar5 = *unaff_x20;
    if ((uVar5 & 0xc000000000000001) == 0) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d858);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      if (uVar4 <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d85c);
        (*pcVar2)();
      }
      if (uVar4 <= param_2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d860);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(uVar5 + 0x20 + param_1 * 8);
      uVar6 = *(ulong *)(uVar5 + 0x20 + param_2 * 8);
      func_0x000107c61174();
      func_0x000107c61174();
    }
    else {
      uVar4 = param_1;
      FUN_10214f008(param_1,uVar5,&PTR_PTR_1126ae6a8,0x112d4d630);
      uVar6 = param_2;
      FUN_10214f008(param_2,uVar5,&PTR_PTR_1126ae6a8,0x112d4d630);
    }
    uVar7 = uVar5;
    func_0x000107c61550();
    if ((((int)uVar7 == 0) || ((long)uVar5 < 0)) || ((uVar5 >> 0x3e & 1) != 0)) {
      func_0x00010214ea78();
      uVar8 = (uint)(uVar5 >> 0x3e) & 1;
    }
    else {
      uVar8 = 0;
    }
    uVar7 = uVar5 & 0xffffffffffffff8;
    lVar1 = uVar7 + param_1 * 8;
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    *(ulong *)(lVar1 + 0x20) = uVar6;
    func_0x000107c61170(uVar3);
    if (((long)uVar5 < 0) || (uVar8 != 0)) {
      func_0x00010214ea78();
      uVar7 = uVar5 & 0xffffffffffffff8;
    }
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d878);
      (*pcVar2)();
    }
    if (*(ulong *)(uVar7 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d87c);
      (*pcVar2)();
    }
    lVar1 = uVar7 + param_2 * 8;
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    *(ulong *)(lVar1 + 0x20) = uVar4;
    func_0x000107c61170(uVar3);
    *unaff_x20 = uVar5;
  }
  return;
}



/* Entry: 10214d87c; end: 10214d87f;  */

void FUN_10214d87c(void)

{
  return;
}



/* Entry: 10214d880; end: 10214dc87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10214d880(code *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 *unaff_x20;
  code *pcVar17;
  long *plVar18;
  long lStack_68;
  
  puVar1 = unaff_x20;
  func_0x000107c614f0();
  puVar2 = puVar1;
  if ((*(long *)(unaff_x20 + _DAT_112e5b9b0) != 0) &&
     (func_0x0001000d224c(&lStack_68), lStack_68 != 0)) {
    func_0x0001000285a8(0x112d530a0,&UNK_10d9db4c0);
    lVar3 = lStack_68;
    func_0x000107c4cd74(lStack_68);
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x0001000b637c();
    func_0x000107c61170(lVar3);
    puVar15 = &UNK_1104d23b8;
    func_0x000107c613fc(&UNK_1104d23b8,0x18,7);
    *(undefined1 **)(puVar15 + 0x10) = puVar1;
    uVar7 = 0x112d530a8;
    func_0x0001000285a8(0x112d530a8,&UNK_10d919940);
    pcVar5 = FUN_102150178;
    func_0x0001000bfde0(FUN_102150178,puVar15,uVar7);
    func_0x000107c61574(lVar4);
    func_0x000107c61574(puVar15);
    puVar15 = &UNK_1104d23e0;
    func_0x000107c613fc(&UNK_1104d23e0,0x18,7);
    func_0x000107c61614(puVar15 + 0x10);
    puVar6 = &UNK_1104d2408;
    func_0x000107c613fc(&UNK_1104d2408,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_1021501a0;
    *(undefined **)(puVar6 + 0x18) = puVar15;
    uVar7 = 0;
    func_0x00010006a340();
    func_0x000107c613fc();
    func_0x00010006a360();
    puVar15 = &UNK_1104d2430;
    puVar8 = puVar15;
    func_0x000107c613fc(&UNK_1104d2430,0x11,7);
    puVar8[0x10] = 0;
    func_0x000107c613fc(&UNK_1104d2430,0x11,7);
    puVar15[0x10] = 0;
    puVar9 = &UNK_1104d2458;
    func_0x000107c613fc(&UNK_1104d2458,0x30,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar7;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    *(code **)(puVar9 + 0x20) = param_1;
    *(undefined8 *)(puVar9 + 0x28) = param_2;
    plVar18 = *(long **)(unaff_x20 + _DAT_112e5b9c0);
    func_0x000107c6157c(uVar7);
    func_0x000107c6157c(puVar8);
    func_0x000107c6157c(param_2);
    pcVar10 = FUN_10214e20c;
    func_0x0001000c0ebc(FUN_10214e20c,0);
    plVar11 = plVar18;
    func_0x00010487bcec(0x4014000000000000,plVar18);
    func_0x000107c61574(pcVar10);
    uVar12 = 1;
    func_0x00010061b458(1);
    func_0x000107c61574(plVar11);
    func_0x000104883b8c(0x403e000000000000);
    func_0x000107c61574(uVar12);
    puVar13 = &UNK_1104d23e0;
    func_0x000107c613fc(&UNK_1104d23e0,0x18,7);
    func_0x000107c61614(puVar13 + 0x10);
    puVar14 = &UNK_1104d2480;
    func_0x000107c613fc(&UNK_1104d2480,0x50,7);
    *(undefined8 *)(puVar14 + 0x10) = uVar7;
    *(undefined **)(puVar14 + 0x18) = puVar15;
    *(undefined **)(puVar14 + 0x20) = puVar13;
    *(code **)(puVar14 + 0x28) = FUN_1021501e0;
    *(undefined **)(puVar14 + 0x30) = puVar9;
    *(code **)(puVar14 + 0x38) = FUN_1021501a8;
    *(undefined **)(puVar14 + 0x40) = puVar6;
    *(undefined8 *)(puVar14 + 0x48) = 0x403e000000000000;
    puVar13 = &UNK_1104d24a8;
    func_0x000107c613fc(&UNK_1104d24a8,0x30,7);
    *(undefined8 *)(puVar13 + 0x10) = uVar7;
    *(undefined **)(puVar13 + 0x18) = puVar15;
    *(code **)(puVar13 + 0x20) = FUN_1021501e0;
    *(undefined **)(puVar13 + 0x28) = puVar9;
    pcVar17 = *(code **)(*plVar18 + 0x70);
    func_0x000107c61580(uVar7,2);
    func_0x000107c61580(puVar15,2);
    func_0x000107c61580(puVar9,2);
    func_0x000107c6157c(puVar6);
    pcVar10 = FUN_102150248;
    puVar16 = puVar14;
    (*pcVar17)(FUN_102150248,puVar14,FUN_102150294,puVar13);
    func_0x000107c61574(plVar18);
    func_0x000107c61574(puVar14);
    func_0x000107c61574(puVar13);
    pcVar17 = pcVar10;
    func_0x000107c614f0(pcVar10);
    (**(code **)(puVar16 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112e5b9d8),pcVar17,puVar16);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar15);
    func_0x000107c61574(puVar9);
    func_0x000107c615e8(pcVar10);
    func_0x000107c5bc1c(lStack_68);
    func_0x000107c615e8(lStack_68);
    func_0x000107c61574(pcVar5);
    return;
  }
  FUN_102150138();
  puVar15 = &UNK_110724380;
  func_0x000107c613f8(&UNK_110724380,puVar2,0,0);
  *puVar2 = 0;
  (*param_1)(0,puVar15);
  func_0x000107c614ac(puVar15);
  return;
}



/* Entry: 10214dc88; end: 10214dcbb; -[_TtC34LensPlusExclusiveLensesFetcherImpl34LensPlusExclusiveLensesFetcherImpl fetchExclusiveLenses] */

void FUN_10214dc88(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10214d880(FUN_10214d87c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10214dcbc; end: 10214ddc7; -[_TtC34LensPlusExclusiveLensesFetcherImpl34LensPlusExclusiveLensesFetcherImpl fetchExclusiveLensesWithCompletion:] */

void FUN_10214dcbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1104d2390;
  func_0x000107c613fc(&UNK_1104d2390,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_10214d880(FUN_102150130,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10214ddc8; end: 10214e173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10214ddc8(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    uVar6 = uVar2;
    if (6 < uVar2) {
      uVar6 = 7;
    }
    if ((long)uVar2 < (long)uVar6) {
LAB_10214e170:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10214e174);
      (*pcVar1)();
    }
  }
  else {
    uVar2 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar2 = param_1;
    }
    uVar6 = uVar2;
    func_0x000107c60480();
    uVar7 = uVar2;
    func_0x000107c60480();
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10214e0e0);
      (*pcVar1)();
    }
    if (6 < uVar6) {
      uVar6 = 7;
    }
    func_0x000107c60480();
    if ((long)uVar2 < (long)uVar6) goto LAB_10214e170;
  }
  if (((param_1 & 0xc000000000000001) == 0) || (uVar6 == 0)) {
    func_0x000107c61434(param_1);
  }
  else {
    uVar3 = 0;
    func_0x000102150424(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    func_0x000107c61434(param_1);
    func_0x000107c60318(0,param_1,uVar3);
    if ((((uVar6 != 1) && (func_0x000107c60318(1,param_1,uVar3), uVar6 != 2)) &&
        (func_0x000107c60318(2,param_1,uVar3), uVar6 != 3)) &&
       (((func_0x000107c60318(3,param_1,uVar3), uVar6 != 4 &&
         (func_0x000107c60318(4,param_1,uVar3), uVar6 != 5)) &&
        (func_0x000107c60318(5,param_1,uVar3), uVar6 != 6)))) {
      func_0x000107c60318(6,param_1,uVar3);
    }
  }
  if (param_1 >> 0x3e == 0) {
    uVar2 = 0;
    puVar8 = (undefined *)(param_1 & 0xffffffffffffff8);
    param_4 = uVar6 << 1;
LAB_10214df54:
    uVar3 = 0;
    func_0x000107c605fc(0);
    puVar4 = puVar8;
    func_0x000107c615f4(puVar8,2);
    func_0x000107c61480();
    if (puVar4 == (undefined *)0x0) {
      func_0x000107c615e8(puVar8);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar9 = *(long *)(puVar4 + 0x10);
    func_0x000107c61574();
    if (SBORROW8(param_4 >> 1,uVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10214e148);
      (*pcVar1)();
    }
    if (lVar9 != (param_4 >> 1) - uVar2) {
      func_0x000107c615e8();
      goto LAB_10214df3c;
    }
    puVar5 = puVar8;
    func_0x000107c61480(puVar8,uVar3);
    func_0x000107c615e8(puVar8);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar5 != (undefined *)0x0) goto LAB_10214dfd4;
  }
  else {
    func_0x000107c6142c(param_1);
    uVar2 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar2 = param_1;
    }
    puVar8 = (undefined *)0x0;
    func_0x000107c60484(0,uVar6);
    if ((param_4 & 1) != 0) goto LAB_10214df54;
LAB_10214df3c:
    puVar4 = puVar8;
    FUN_10214f384();
  }
  func_0x000107c615e8(puVar8);
  puVar5 = puVar4;
LAB_10214dfd4:
  puStack_58 = puVar5;
  func_0x0001007d6d78(&puStack_58);
  func_0x0001000d224c(&puStack_58);
  puVar8 = puStack_58;
  if (puStack_58 != (undefined *)0x0) {
    puVar4 = puVar5;
    FUN_10214fad4(puVar5,puStack_58);
    func_0x000107c61574(puVar5);
    if ((ulong)puVar4 >> 0x3e == 0) {
      puVar5 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar5 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar4) {
        puVar5 = puVar4;
      }
      func_0x000107c60480();
    }
    if (puVar5 == (undefined *)0x0) {
      func_0x0001000285a8(0x112dc1428,&UNK_10d97e110);
      func_0x000100854cb0();
    }
    else {
      puVar5 = &UNK_1104d24f8;
      func_0x000107c613fc(&UNK_1104d24f8,0x18,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      func_0x0001000285a8(0x112e5ba28,&UNK_10da61b58);
      func_0x000107c613fc();
      func_0x000107c61434(puVar4);
      func_0x0001000b64ac(FUN_102150390,puVar5);
    }
    func_0x000107c6142c(puVar4);
    func_0x000107c615e8(puVar8);
    return;
  }
  func_0x000107c61574(puVar5);
  func_0x0001000285a8(0x112dc1428,&UNK_10d97e110);
  func_0x000100854cb0();
  return;
}



/* Entry: 10214e174; end: 10214e20b;  */

void FUN_10214e174(byte *param_1,code *param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1,auStack_68,0,0);
  if ((*param_1 & 1) == 0) {
    func_0x000107c61428(param_1,auStack_80,1,0);
    *param_1 = 1;
    (*param_2)(param_4 & 1,param_5);
  }
  return;
}



/* Entry: 10214e20c; end: 10214e24b;  */

bool FUN_10214e20c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (uVar2 >> 0x3e == 0) {
    uVar1 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar1 = uVar2;
    }
    func_0x000107c60480(uVar1);
  }
  return uVar1 != 0;
}



/* Entry: 10214e24c; end: 10214e453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10214e24c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  long param_5,code *param_6,undefined8 param_7,code *param_8)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_102150138();
    puVar2 = &UNK_110724380;
    func_0x000107c613f8(&UNK_110724380,param_2,0,0);
    *(undefined1 *)param_2 = 1;
    (*param_6)(0,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
    return;
  }
  lStack_70 = param_4 + 0x10;
  uVar7 = *param_2;
  func_0x000100087bd4(FUN_1021502f4,auStack_80,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61428(param_5 + 0x10,auStack_80,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 == 0) {
    (*param_6)(1,0);
  }
  else {
    (*param_8)(uVar7);
    plVar6 = *(long **)(param_5 + _DAT_112e5b9c0);
    plVar1 = plVar6;
    func_0x000107c615f0();
    func_0x000104883b8c(param_1);
    func_0x000107c61574(uVar7);
    func_0x000107c615e8(plVar6);
    puVar2 = &UNK_1104d24d0;
    func_0x000107c613fc(&UNK_1104d24d0,0x20,7);
    *(code **)(puVar2 + 0x10) = param_6;
    *(undefined8 *)(puVar2 + 0x18) = param_7;
    pcVar5 = *(code **)(*plVar1 + 0x60);
    func_0x000107c6157c(param_7);
    pcVar3 = FUN_102150344;
    puVar4 = puVar2;
    (*pcVar5)(FUN_102150344);
    func_0x000107c61574(plVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c614f0(pcVar3);
    uVar7 = *(undefined8 *)(param_5 + _DAT_112e5b9d8);
    pcVar5 = *(code **)(puVar4 + 0x10);
    func_0x000107c6157c(uVar7);
    (*pcVar5)();
    func_0x000107c61170(param_5);
    func_0x000107c615e8(pcVar3);
    func_0x000107c61574(uVar7);
  }
  return;
}



/* Entry: 10214e454; end: 10214e5eb;  */

void FUN_10214e454(undefined8 param_1,long param_2,code *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 auStack_50 [16];
  long lStack_40;
  byte bStack_31;
  
  lStack_40 = param_2 + 0x10;
  pcVar1 = FUN_1021502a0;
  func_0x000100087bd4(&bStack_31,FUN_1021502a0,auStack_50,PTR___sSbN_11034dd40);
  if ((bStack_31 & 1) == 0) {
    FUN_102150138();
    puVar2 = &UNK_110724380;
    func_0x000107c613f8(&UNK_110724380,pcVar1,0,0);
    *pcVar1 = (code)0x2;
    (*param_3)(0,puVar2);
    func_0x000107c614ac(puVar2);
  }
  return;
}



/* Entry: 10214e5ec; end: 10214e63b; -[_TtC34LensPlusExclusiveLensesFetcherImpl34LensPlusExclusiveLensesFetcherImpl setLastActiveExclusiveLens:] */

/* WARNING: Possible PIC construction at 0x00010214e624: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010214e628) */

void FUN_10214e5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010214e4f8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10214e63c; end: 10214e66f; -[_TtC34LensPlusExclusiveLensesFetcherImpl34LensPlusExclusiveLensesFetcherImpl observeExclusiveLenses] */

void FUN_10214e63c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10214d10c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10214e670; end: 10214e673;  */

void FUN_10214e670(void)

{
  return;
}



/* Entry: 10214e674; end: 10214e85f;  */

undefined1  [16] FUN_10214e674(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  puVar3 = &UNK_1104d2520;
  func_0x000107c613fc(&UNK_1104d2520,0x18,7);
  if (param_2 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    *(ulong *)(puVar3 + 0x10) = uVar8;
  }
  else {
    uVar8 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar8 = param_2;
    }
    uVar9 = uVar8;
    func_0x000107c60480();
    *(ulong *)(puVar3 + 0x10) = uVar9;
    func_0x000107c60480();
  }
  if (uVar8 != 0) {
    if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10214e860);
      (*pcVar1)();
    }
    uVar9 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(param_2 + uVar9 * 8 + 0x20);
        func_0x000107c61174(uVar6);
      }
      else {
        uVar6 = uVar9;
        func_0x00010214f1c4(uVar9,param_2);
      }
      uVar9 = uVar9 + 1;
      puVar4 = &UNK_1104d2548;
      func_0x000107c613fc(&UNK_1104d2548,0x28,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar2;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      *(undefined8 *)(puVar4 + 0x20) = param_1;
      uStack_80 = 0x102150398;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1010ffbc4;
      puStack_88 = &UNK_1104d2560;
      ppuVar5 = &puStack_a0;
      puStack_78 = puVar4;
      func_0x000107c60bc4(&puStack_a0);
      puVar4 = puStack_78;
      func_0x000107c6157c(uVar2);
      func_0x000107c6157c(puVar3);
      func_0x000107c6157c(param_1);
      func_0x000107c61574(puVar4);
      func_0x000107c5dc64(uVar6);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(uVar6);
    } while (uVar8 != uVar9);
  }
  func_0x0001000b6d30(0);
  uVar7 = 0;
  func_0x000104885df0(0,0);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar2);
  auVar10._8_8_ = &PTR_DAT_1107aaa40;
  auVar10._0_8_ = uVar7;
  return auVar10;
}



/* Entry: 10214e860; end: 10214e8cf;  */

void FUN_10214e860(void)

{
  long in_x3;
  undefined1 auStack_50 [16];
  long lStack_40;
  char cStack_31;
  
  lStack_40 = in_x3 + 0x10;
  func_0x000100087bd4(&cStack_31,FUN_1021503c0,auStack_50,PTR___sSbN_11034dd40);
  if (cStack_31 == '\x01') {
    func_0x000100087f6c();
    func_0x000100c7f554();
  }
  return;
}



/* Entry: 10214e8d0; end: 10214e937;  */

void FUN_10214e8d0(undefined8 param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2,auStack_48,1,0);
  lVar1 = *param_2 + -1;
  if (!SBORROW8(*param_2,1)) {
    *param_2 = lVar1;
    *(bool *)param_1 = lVar1 == 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10214e938);
  (*pcVar2)();
}



/* Entry: 10214e938; end: 10214e997; -[_TtC34LensPlusExclusiveLensesFetcherImpl34LensPlusExclusiveLensesFetcherImpl init] */

void FUN_10214e938(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPlusExclusiveLensesFetcherImpl.LensPlusExclusiveLensesFetcherImpl",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10214e964);
  (*pcVar1)();
}



/* Entry: 10214e998; end: 10214ea1f; -[_TtC34LensPlusExclusiveLensesFetcherImpl34LensPlusExclusiveLensesFetcherImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10214e998(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5b9b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5b9b8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e5b9c0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5b9c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5b9d0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5b9d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5b9e0));
  return;
}



/* Entry: 10214ea20; end: 10214ea3f;  */

void FUN_10214ea20(void)

{
  func_0x000107c61168(&PTR_PTR_1128208d8);
  return;
}



/* Entry: 10214ea40; end: 10214ea47;  */

undefined * FUN_10214ea40(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar13 = param_1 >> 0x3e;
  if (param_2 != 0) {
    if (uVar13 == 0) {
      uVar12 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar12 = param_1;
      }
      func_0x000107c60480(uVar12,param_2,*(undefined8 *)(unaff_x20 + 0x10));
    }
    if (uVar12 != 0) {
      uVar15 = param_1 & 0xffffffffffffff8;
      uVar9 = param_2;
      func_0x000107c61174();
      func_0x000107c61434(param_1);
      uVar14 = 0;
      while( true ) {
        if (uVar12 == uVar14) {
          uVar12 = param_2;
          func_0x000107c61174();
          uVar14 = param_1;
          func_0x000107c61550();
          if ((uVar13 != 0) || ((uVar14 & 1) == 0)) {
            func_0x00010214ea78();
            uVar15 = param_1 & 0xffffffffffffff8;
          }
          if (*(long *)(uVar15 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d720);
            (*pcVar2)();
          }
          uVar8 = *(undefined8 *)(uVar15 + 0x20);
          *(ulong *)(uVar15 + 0x20) = uVar12;
          func_0x000107c61170(uVar8);
          goto LAB_10214d44c;
        }
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar15 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d584);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(param_1 + uVar14 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar14;
          uVar9 = param_1;
          FUN_10214f008(uVar14,param_1,&PTR_PTR_1126ae6a8,0x112d4d630);
        }
        uVar5 = uVar4;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x000107c5faec();
        uVar11 = uVar9;
        func_0x000107c61170(uVar5);
        uVar5 = param_2;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar7 = uVar5;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
        if ((uVar6 == uVar7) && (uVar9 == uVar11)) break;
        uVar5 = uVar9;
        func_0x000107c605b8(uVar6,uVar9,uVar7,uVar11,0);
        func_0x000107c61170(uVar4);
        func_0x000107c6142c(uVar9);
        func_0x000107c6142c(uVar11);
        if ((uVar6 & 1) != 0) goto LAB_10214d434;
        bVar3 = SCARRY8(uVar14,1);
        uVar14 = uVar14 + 1;
        uVar9 = uVar5;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d588);
          (*pcVar2)();
        }
      }
      func_0x000107c61170(uVar4);
      func_0x000107c6142c(uVar9);
      func_0x000107c6142c(uVar11);
LAB_10214d434:
      if (uVar14 != 0) {
        FUN_10214d720(0,uVar14);
      }
LAB_10214d44c:
      if (param_1 >> 0x3e == 0) {
        uVar13 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar13 = param_1 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < param_1) {
          uVar13 = param_1;
        }
        func_0x000107c60480();
      }
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar13 != 0) {
        func_0x00010214ee98(0,uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d71c);
          (*pcVar2)();
        }
        uVar12 = 0;
        do {
          if ((param_1 & 0xc000000000000001) == 0) {
            if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) <= (long)uVar12) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d58c);
              (*pcVar2)();
            }
            uVar14 = *(ulong *)(param_1 + uVar12 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar14 = uVar12;
            FUN_10214f008(uVar12,param_1,&PTR_PTR_1126ae6a8,0x112d4d630);
          }
          uVar9 = uVar14;
          FUN_10214f490();
          func_0x000107c61170(uVar14);
          uVar14 = *(ulong *)(puVar1 + 0x10);
          if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar14) {
            func_0x00010214ee98(1 < *(ulong *)(puVar1 + 0x18),uVar14 + 1,1);
          }
          uVar12 = uVar12 + 1;
          *(ulong *)(puVar1 + 0x10) = uVar14 + 1;
          *(ulong *)(puVar1 + uVar14 * 8 + 0x20) = uVar9;
        } while (uVar13 != uVar12);
      }
      uVar8 = 0;
      func_0x000102150424(0,0x112e5ba10,&PTR_PTR_1126a9f60);
      puVar10 = puVar1;
      func_0x000107c5fc48(puVar1,uVar8);
      func_0x000107c6142c(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c6142c(puVar1);
      return puVar10;
    }
  }
  if (uVar13 == 0) {
    uVar13 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar13 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    func_0x00010214ee98(0,uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d718);
      (*pcVar2)();
    }
    uVar12 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) <= (long)uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10214d6e8);
          (*pcVar2)();
        }
        uVar14 = *(ulong *)(param_1 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar14 = uVar12;
        FUN_10214f008(uVar12,param_1,&PTR_PTR_1126ae6a8,0x112d4d630);
      }
      uVar9 = uVar14;
      FUN_10214f490();
      func_0x000107c61170(uVar14);
      uVar14 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar14) {
        func_0x00010214ee98(1 < *(ulong *)(puVar1 + 0x18),uVar14 + 1,1);
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar14 + 1;
      *(ulong *)(puVar1 + uVar14 * 8 + 0x20) = uVar9;
    } while (uVar13 != uVar12);
  }
  uVar8 = 0;
  func_0x000102150424(0,0x112e5ba10,&PTR_PTR_1126a9f60);
  puVar10 = puVar1;
  func_0x000107c5fc48(puVar1,uVar8);
  func_0x000107c6142c(puVar1);
  return puVar10;
}



/* Entry: 10214ea48; end: 10214eadb;  */

void FUN_10214ea48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 10214eadc; end: 10214ec13;  */

ulong FUN_10214eadc(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5,
                   code *param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10214ec14);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  (*param_5)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10214ec10);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10214ec14; end: 10214ec93;  */

undefined * FUN_10214ec14(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_10214ee30();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10214ec94; end: 10214edb7;  */

long FUN_10214ec94(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10214edb4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10214edb8);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d74dc8;
        func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d74dc8;
      func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10214edb0);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 10214edb8; end: 10214ee2f;  */

void FUN_10214edb8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000102150424(0,param_1,param_2);
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



/* Entry: 10214ee30; end: 10214eeb3;  */

/* WARNING: Possible PIC construction at 0x00010214ee60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010214ee64) */
/* WARNING: Removing unreachable block (ram,0x00010214ee68) */

void FUN_10214ee30(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112d76cc8;
    plVar5 = (long *)&UNK_10d936770;
  }
  else {
    puVar3 = (ulong *)0x112d74dc8;
    plVar5 = (long *)&UNK_10d9355f0;
    unaff_x30 = 0x10214ee64;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 10214eeb4; end: 10214f007;  */

undefined * FUN_10214eeb4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10214f008);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112e5ba10;
    FUN_10214edb8(0x112e5ba10,&PTR_PTR_1126a9f60,0x112e5ba18,&UNK_10da61b48);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000102150424(0,0x112e5ba10,&PTR_PTR_1126a9f60);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10214f008; end: 10214f383;  */

ulong FUN_10214f008(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10214f0ec);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10214f0f0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000102150424(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10214f1c4);
  (*pcVar2)();
}



/* Entry: 10214f384; end: 10214f48f;  */

undefined * FUN_10214f384(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10214f490);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = (undefined *)0x112d4d630;
      FUN_10214edb8(0x112d4d630,&PTR_PTR_1126ae6a8,0x112d530b8,&UNK_10d9db4e0);
      func_0x000107c613fc();
      puVar5 = puVar4;
      func_0x000107c610a4();
      puVar1 = puVar5 + -0x19;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(ulong *)(puVar4 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10214f48c);
      (*pcVar3)();
    }
    uVar6 = 0;
    func_0x000102150424(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    func_0x000107c6140c(puVar4 + 0x20,param_2 + param_3 * 8,lVar2,uVar6);
  }
  return puVar4;
}



/* Entry: 10214f490; end: 10214f723;  */

undefined * FUN_10214f490(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_80;
  
  lVar1 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  lVar6 = param_2;
  lVar2 = lVar1;
  if (lVar1 == 0) {
    func_0x000107c5faec();
    lVar6 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c5faec();
  lVar3 = param_1;
  lVar9 = lVar6;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  lVar8 = -0x2000000000000000;
  if (lVar3 == 0) {
    lVar7 = 0;
    lVar9 = -0x2000000000000000;
  }
  else {
    lVar7 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c602fc(0x36);
  func_0x000107c5fb78(0xd000000000000034,0x800000010f065720);
  lVar3 = lVar6;
  func_0x000107c5fb78(lVar1);
  uVar4 = 0;
  lVar1 = param_1;
  func_0x000107c44fb4();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar10 = 0;
    lVar11 = lVar3;
  }
  else {
    lVar10 = lVar1;
    func_0x000107c5faec();
    lVar11 = lVar3;
    func_0x000107c61170(lVar1);
    lVar8 = lVar3;
  }
  func_0x000107c4b334();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c6142c(lVar6);
    uStack_80 = 0;
    lVar11 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5c964();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    uStack_80 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c5fadc(lVar7,lVar9);
  func_0x000107c6142c(lVar9);
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fadc(lVar10,lVar8);
  func_0x000107c6142c(lVar8);
  if (lVar11 == 0) {
    uStack_80 = 0;
  }
  else {
    func_0x000107c5fadc(uStack_80,lVar11);
    func_0x000107c6142c(lVar11);
  }
  puVar5 = PTR_PTR_1126a9f60;
  func_0x000107c610f8(PTR_PTR_1126a9f60);
  func_0x000107c47304();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uStack_80);
  return puVar5;
}



/* Entry: 10214f724; end: 10214fad3;  */

undefined * FUN_10214f724(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  func_0x000107c3d128();
  func_0x000107c61180();
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    uVar4 = 0;
    func_0x000102150424(0,0x112d530b0,&PTR_PTR_1126d8840);
    uVar5 = param_1;
    func_0x000107c5fc54(param_1,uVar4);
    func_0x000107c61170(param_1);
    if (uVar5 >> 0x3e == 0) {
      uVar13 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar13 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar13 = uVar5;
      }
      func_0x000107c60480();
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
    if (uVar13 != 0) {
      uStack_b0 = uVar5 & 0xffffffffffffff8;
      uVar14 = 0;
      do {
        while( true ) {
          if ((uVar5 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uStack_b0 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10214fa78);
              (*pcVar3)();
            }
            uVar6 = *(ulong *)(uVar5 + uVar14 * 8 + 0x20);
            func_0x000107c61174(uVar6);
          }
          else {
            uVar6 = uVar14;
            FUN_10214f008(uVar14,uVar5,&PTR_PTR_1126d8840,0x112d530b0);
          }
          puVar11 = PTR___NSConcreteStackBlock_11034bd00;
          uVar1 = uVar14 + 1;
          if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10214fa74);
            (*pcVar3)();
          }
          puStack_80 = (undefined *)0x0;
          lStack_78 = 0;
          pcStack_88 = FUN_10214e670;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_100fe4708;
          puStack_90 = &UNK_1104d2588;
          ppuVar7 = &puStack_a8;
          func_0x000107c60bc4(ppuVar7);
          func_0x000107c61574(puStack_80);
          puVar10 = &UNK_1104d25c0;
          func_0x000107c613fc(&UNK_1104d25c0,0x18,7);
          *(long **)(puVar10 + 0x10) = &lStack_78;
          puVar8 = &UNK_1104d25e8;
          func_0x000107c613fc(&UNK_1104d25e8,0x20,7);
          *(undefined8 *)(puVar8 + 0x10) = 0x1021503d8;
          *(undefined **)(puVar8 + 0x18) = puVar10;
          pcStack_88 = (code *)0x102150404;
          puStack_a8 = puVar11;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_100fe4704;
          puStack_90 = &UNK_1104d2600;
          ppuVar9 = &puStack_a8;
          puStack_80 = puVar8;
          func_0x000107c60bc4(ppuVar9);
          puVar11 = puStack_80;
          func_0x000107c6157c(puVar8);
          func_0x000107c61574(puVar11);
          func_0x000107c4c5c4(uVar6);
          func_0x000107c61170(uVar6);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c60bd0(ppuVar7);
          uVar6 = 0;
          func_0x000107c61544(0,"",0x75,0xc0,0x1e,1);
          func_0x000107c61574(puVar10);
          if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10214fa7c);
            (*pcVar3)();
          }
          puVar11 = puVar8;
          func_0x000107c61544(puVar8,"",0x75,0xc0,0x2e,1);
          func_0x000107c61574(puVar8);
          lVar2 = lStack_78;
          if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10214fa80);
            (*pcVar3)();
          }
          if (lStack_78 != 0) break;
          uVar14 = uVar14 + 1;
          if (uVar1 == uVar13) goto LAB_10214faa4;
        }
        puVar11 = puVar12;
        func_0x000107c61550();
        if ((((int)puVar11 == 0) || ((long)puVar12 < 0)) ||
           (puVar11 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar12 >> 0x3e == 0) {
            puVar10 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar10 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar12) {
              puVar10 = puVar12;
            }
            func_0x000107c60480(puVar10);
          }
          puVar11 = (undefined *)0x0;
          FUN_10214eadc(0,puVar10 + 1,1,puVar12,&UNK_100fe2b94,&UNK_100fe2c14);
        }
        uVar6 = (ulong)puVar11 & 0xffffffffffffff8;
        uVar14 = *(ulong *)(uVar6 + 0x10);
        puVar12 = puVar11;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar14) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_10214eadc(puVar12,uVar14 + 1,1,puVar11,&UNK_100fe2b94,&UNK_100fe2c14);
          uVar6 = (ulong)puVar12 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar14 + 1;
        *(long *)(uVar6 + uVar14 * 8 + 0x20) = lVar2;
        uVar14 = uVar1;
      } while (uVar1 != uVar13);
    }
LAB_10214faa4:
    func_0x000107c6142c(uVar5);
  }
  return puVar12;
}



/* Entry: 10214fad4; end: 10215012f;  */

undefined *
FUN_10214fad4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong *puVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined *puVar19;
  
  uVar16 = (ulong)param_1 >> 0x3e;
  if (uVar16 == 0) {
    puVar14 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    puVar11 = puVar14;
    if ((undefined *)0x6 < puVar14) {
      puVar11 = (undefined *)0x7;
    }
    uVar18 = 1;
    if ((long)puVar14 < (long)puVar11) {
LAB_10215012c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102150130);
      (*pcVar1)();
    }
  }
  else {
    puVar12 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar12 = param_1;
    }
    puVar14 = puVar12;
    func_0x000107c60480();
    puVar11 = puVar12;
    func_0x000107c60480();
    if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021500fc);
      (*pcVar1)();
    }
    uVar18 = (uint)((ulong)puVar14 >> 0x3f) ^ 1;
    puVar11 = puVar14;
    if ((undefined *)0x6 < puVar14) {
      puVar11 = (undefined *)0x7;
    }
    func_0x000107c60480();
    if ((long)puVar12 < (long)puVar11) goto LAB_10215012c;
  }
  if ((((ulong)param_1 & 0xc000000000000001) == 0) || (puVar11 == (undefined *)0x0)) {
    func_0x000107c61434(param_1);
  }
  else {
    uVar2 = 0;
    func_0x000102150424(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    func_0x000107c61434(param_1);
    func_0x000107c60318(0,param_1,uVar2);
    if ((((puVar11 != (undefined *)0x1) &&
         (func_0x000107c60318(1,param_1,uVar2), puVar11 != (undefined *)0x2)) &&
        (func_0x000107c60318(2,param_1,uVar2), puVar11 != (undefined *)0x3)) &&
       (((func_0x000107c60318(3,param_1,uVar2), puVar11 != (undefined *)0x4 &&
         (func_0x000107c60318(4,param_1,uVar2), puVar11 != (undefined *)0x5)) &&
        (func_0x000107c60318(5,param_1,uVar2), puVar11 != (undefined *)0x6)))) {
      func_0x000107c60318(6,param_1,uVar2);
    }
  }
  if (uVar16 == 0) {
    puVar12 = (undefined *)0x0;
    uVar3 = (ulong)param_1 & 0xffffffffffffff8;
    puVar10 = (undefined *)(uVar3 + 0x20);
    puVar4 = puVar11;
  }
  else {
    func_0x000107c6142c(param_1);
    puVar12 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar12 = param_1;
    }
    uVar3 = 0;
    func_0x000107c60484();
    puVar4 = (undefined *)((ulong)param_4 >> 1);
    puVar10 = puVar11;
  }
  lVar15 = (long)puVar4 - (long)puVar12;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar15 != 0) {
    if (lVar15 == 0 || (long)puVar4 < (long)puVar12) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102150104);
      (*pcVar1)();
    }
    puVar17 = (undefined8 *)(puVar10 + (long)puVar12 * 8);
    do {
      puVar4 = (undefined *)*puVar17;
      func_0x000107c61174();
      puVar12 = puVar4;
      func_0x000107c44fb4();
      func_0x000107c61180();
      if (puVar12 == (undefined *)0x0) {
        puVar19 = (undefined *)0x0;
        puVar12 = (undefined *)0xe000000000000000;
        puVar5 = puVar10;
      }
      else {
        puVar19 = puVar12;
        func_0x000107c5faec();
        puVar5 = puVar10;
        func_0x000107c61170(puVar12);
        puVar12 = puVar10;
      }
      puVar10 = puVar5;
      uVar8 = (ulong)puVar19 & 0xffffffffffff;
      if (((ulong)puVar12 & 0x2000000000000000) != 0) {
        uVar8 = (ulong)puVar12 >> 0x38 & 0xf;
      }
      if (uVar8 == 0) {
        func_0x000107c6142c(puVar12);
      }
      else {
        puVar5 = puVar19;
        func_0x000107c5fadc(puVar19,puVar12);
        puVar10 = puVar12;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar12);
        uVar2 = param_2;
        param_4 = puVar19;
        func_0x000107c40458();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar19);
        puVar12 = puVar11;
        func_0x000107c61550();
        if ((((int)puVar12 == 0) || ((long)puVar11 < 0)) ||
           (puVar12 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar11 >> 0x3e == 0) {
            puVar10 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar10 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar11) {
              puVar10 = puVar11;
            }
            func_0x000107c60480();
          }
          puVar10 = puVar10 + 1;
          puVar12 = (undefined *)0x0;
          FUN_10214eadc(0,puVar10,1,puVar11,FUN_10214ec14,FUN_10214ec94);
          param_4 = puVar11;
        }
        uVar6 = (ulong)puVar12 & 0xffffffffffffff8;
        uVar8 = *(ulong *)(uVar6 + 0x10);
        puVar19 = (undefined *)(uVar8 + 1);
        puVar11 = puVar12;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar8) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          puVar10 = puVar19;
          FUN_10214eadc(puVar11,puVar19,1,puVar12,FUN_10214ec14,FUN_10214ec94);
          uVar6 = (ulong)puVar11 & 0xffffffffffffff8;
          param_4 = puVar12;
        }
        *(undefined **)(uVar6 + 0x10) = puVar19;
        *(undefined8 *)(uVar6 + uVar8 * 8 + 0x20) = uVar2;
      }
      func_0x000107c61170(puVar4);
      lVar15 = lVar15 + -1;
      puVar17 = puVar17 + 1;
    } while (lVar15 != 0);
  }
  func_0x000107c615e8(uVar3);
  if (uVar18 == 0) {
    puVar14 = (undefined *)0x3;
  }
  else if (2 < (long)puVar14) {
    puVar14 = (undefined *)0x3;
  }
  if (uVar16 == 0) {
    puVar12 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar12 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar12 = param_1;
    }
    func_0x000107c60480();
  }
  if ((long)puVar12 < (long)puVar14) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102150100);
    (*pcVar1)();
  }
  if ((((ulong)param_1 & 0xc000000000000001) == 0) || (puVar14 == (undefined *)0x0)) {
    func_0x000107c61434(param_1);
  }
  else {
    uVar2 = 0;
    func_0x000102150424(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    func_0x000107c61434(param_1);
    puVar12 = (undefined *)0x0;
    do {
      puVar10 = puVar12 + 1;
      func_0x000107c60318(puVar12,param_1,uVar2);
      puVar12 = puVar10;
    } while (puVar14 != puVar10);
  }
  if (uVar16 == 0) {
    puVar12 = (undefined *)0x0;
    uVar16 = (ulong)param_1 & 0xffffffffffffff8;
    puVar10 = (undefined *)(uVar16 + 0x20);
    param_4 = puVar14;
  }
  else {
    func_0x000107c6142c(param_1);
    puVar12 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar12 = param_1;
    }
    uVar16 = 0;
    func_0x000107c60484();
    param_4 = (undefined *)((ulong)param_4 >> 1);
    puVar10 = puVar14;
  }
  lVar15 = (long)param_4 - (long)puVar12;
  if (lVar15 != 0) {
    if (lVar15 == 0 || (long)param_4 < (long)puVar12) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102150108);
      (*pcVar1)();
    }
    puVar13 = (ulong *)(puVar10 + (long)puVar12 * 8);
    do {
      uVar6 = *puVar13;
      func_0x000107c61174();
      uVar3 = uVar6;
      func_0x000107c4b334();
      func_0x000107c61180();
      uVar8 = uVar6;
      if (uVar3 != 0) {
        uVar7 = uVar3;
        func_0x000107c5c964();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        puVar12 = puVar10;
        uVar3 = uVar7;
        uVar8 = uVar7;
        if (uVar7 == 0) {
          uVar3 = 0;
          func_0x000107c5faec(0);
          puVar14 = puVar10;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar10);
          uVar8 = 0;
          func_0x000107c5faec(0);
          puVar12 = puVar14;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar14);
        }
        uVar9 = uVar7;
        func_0x000107c5faec();
        puVar10 = puVar12;
        func_0x000107c61174(uVar7);
        func_0x000107c6142c(puVar12);
        uVar7 = uVar9 & 0xffffffffffff;
        if (((ulong)puVar12 & 0x2000000000000000) != 0) {
          uVar7 = (ulong)puVar12 >> 0x38 & 0xf;
        }
        if (uVar7 == 0) {
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar3);
        }
        else {
          uVar2 = param_2;
          func_0x000107c40458();
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar8);
          puVar12 = puVar11;
          func_0x000107c61550();
          if ((((int)puVar12 == 0) || ((long)puVar11 < 0)) ||
             (puVar12 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar11 >> 0x3e == 0) {
              puVar10 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar10 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar11) {
                puVar10 = puVar11;
              }
              func_0x000107c60480();
            }
            puVar10 = puVar10 + 1;
            puVar12 = (undefined *)0x0;
            FUN_10214eadc(0,puVar10,1,puVar11,FUN_10214ec14,FUN_10214ec94);
          }
          uVar8 = (ulong)puVar12 & 0xffffffffffffff8;
          uVar3 = *(ulong *)(uVar8 + 0x10);
          puVar14 = (undefined *)(uVar3 + 1);
          puVar11 = puVar12;
          if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar3) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
            puVar10 = puVar14;
            FUN_10214eadc(puVar11,puVar14,1,puVar12,FUN_10214ec14,FUN_10214ec94);
            uVar8 = (ulong)puVar11 & 0xffffffffffffff8;
          }
          *(undefined **)(uVar8 + 0x10) = puVar14;
          *(undefined8 *)(uVar8 + uVar3 * 8 + 0x20) = uVar2;
          uVar8 = uVar6;
        }
      }
      func_0x000107c61170(uVar8);
      lVar15 = lVar15 + -1;
      puVar13 = puVar13 + 1;
    } while (lVar15 != 0);
  }
  func_0x000107c615e8(uVar16);
  return puVar11;
}



/* Entry: 102150130; end: 102150137;  */

void FUN_102150130(uint param_1,long param_2)

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
  (**(code **)(lVar1 + 0x10))(lVar1,param_1 & 1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102150138; end: 102150177;  */

void FUN_102150138(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5ba20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaddc0;
  func_0x000107c61520(&UNK_10dcaddc0,&UNK_110724380);
  puRam0000000112e5ba20 = puVar1;
  return;
}



/* Entry: 102150178; end: 10215019f;  */

void FUN_102150178(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10214f724();
  *param_1 = uVar1;
  return;
}



/* Entry: 1021501a0; end: 1021501a7;  */

void FUN_1021501a0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_2;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 0x112dc1428;
    func_0x0001000285a8(0x112dc1428,&UNK_10d97e110);
    func_0x000100854cb0();
  }
  else {
    FUN_10214ddc8();
    func_0x000107c61170(lVar1);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1021501a8; end: 1021501df;  */

undefined8 FUN_1021501a8(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_30,&uStack_28);
  return uStack_30;
}



/* Entry: 1021501e0; end: 102150247;  */

void FUN_1021501e0(undefined1 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  
  lStack_60 = *(long *)(unaff_x20 + 0x18) + 0x10;
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = param_1;
  uStack_40 = param_2;
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + 0x10),FUN_10215036c,auStack_70,
                      PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 102150248; end: 10215025f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102150248(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  code *pcVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  pcVar4 = *(code **)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar6 = *(code **)(unaff_x20 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_102150138(param_1,*(undefined8 *)(unaff_x20 + 0x10));
    puVar3 = &UNK_110724380;
    func_0x000107c613f8(&UNK_110724380,param_1,0,0);
    *(undefined1 *)param_1 = 1;
    (*pcVar4)(0,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar3);
    return;
  }
  lStack_70 = *(long *)(unaff_x20 + 0x18) + 0x10;
  uVar9 = *param_1;
  func_0x000100087bd4(FUN_1021502f4,auStack_80,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61428(lVar1 + 0x10,auStack_80,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    (*pcVar4)(1,0);
  }
  else {
    (*pcVar6)(uVar9);
    plVar7 = *(long **)(lVar1 + _DAT_112e5b9c0);
    plVar2 = plVar7;
    func_0x000107c615f0();
    func_0x000104883b8c(uVar10);
    func_0x000107c61574(uVar9);
    func_0x000107c615e8(plVar7);
    puVar3 = &UNK_1104d24d0;
    func_0x000107c613fc(&UNK_1104d24d0,0x20,7);
    *(code **)(puVar3 + 0x10) = pcVar4;
    *(undefined8 *)(puVar3 + 0x18) = uVar8;
    pcVar6 = *(code **)(*plVar2 + 0x60);
    func_0x000107c6157c(uVar8);
    pcVar4 = FUN_102150344;
    puVar5 = puVar3;
    (*pcVar6)(FUN_102150344);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c614f0(pcVar4);
    uVar8 = *(undefined8 *)(lVar1 + _DAT_112e5b9d8);
    pcVar6 = *(code **)(puVar5 + 0x10);
    func_0x000107c6157c(uVar8);
    (*pcVar6)();
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(pcVar4);
    func_0x000107c61574(uVar8);
  }
  return;
}



/* Entry: 102150260; end: 102150293;  */

void FUN_102150260(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102150294; end: 10215029f;  */

void FUN_102150294(void)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [16];
  long lStack_40;
  byte bStack_31;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  lStack_40 = *(long *)(unaff_x20 + 0x18) + 0x10;
  pcVar2 = FUN_1021502a0;
  func_0x000100087bd4(&bStack_31,FUN_1021502a0,auStack_50,PTR___sSbN_11034dd40,
                      *(undefined8 *)(unaff_x20 + 0x28));
  if ((bStack_31 & 1) == 0) {
    FUN_102150138();
    puVar3 = &UNK_110724380;
    func_0x000107c613f8(&UNK_110724380,pcVar2,0,0);
    *pcVar2 = (code)0x2;
    (*pcVar1)(0,puVar3);
    func_0x000107c614ac(puVar3);
  }
  return;
}



/* Entry: 1021502a0; end: 1021502f3;  */

void FUN_1021502a0(undefined1 *param_1)

{
  long unaff_x20;
  undefined1 *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  *param_1 = *puVar1;
  return;
}



/* Entry: 1021502f4; end: 102150343;  */

void FUN_1021502f4(void)

{
  long unaff_x20;
  undefined1 *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  *puVar1 = 1;
  return;
}



/* Entry: 102150344; end: 10215036b;  */

void FUN_102150344(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(1,0);
  return;
}



/* Entry: 10215036c; end: 10215038f;  */

void FUN_10215036c(void)

{
  long unaff_x20;
  
  FUN_10214e174(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 102150390; end: 1021503bf;  */

undefined1  [16] FUN_102150390(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uVar8 = *(ulong *)(unaff_x20 + 0x10);
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  puVar3 = &UNK_1104d2520;
  func_0x000107c613fc(&UNK_1104d2520,0x18,7);
  if (uVar8 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    *(ulong *)(puVar3 + 0x10) = uVar9;
  }
  else {
    uVar9 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar9 = uVar8;
    }
    uVar10 = uVar9;
    func_0x000107c60480();
    *(ulong *)(puVar3 + 0x10) = uVar10;
    func_0x000107c60480();
  }
  if (uVar9 != 0) {
    if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10214e860);
      (*pcVar1)();
    }
    uVar10 = 0;
    do {
      if ((uVar8 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(uVar8 + uVar10 * 8 + 0x20);
        func_0x000107c61174(uVar6);
      }
      else {
        uVar6 = uVar10;
        func_0x00010214f1c4(uVar10,uVar8);
      }
      uVar10 = uVar10 + 1;
      puVar4 = &UNK_1104d2548;
      func_0x000107c613fc(&UNK_1104d2548,0x28,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar2;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      *(undefined8 *)(puVar4 + 0x20) = param_1;
      uStack_80 = 0x102150398;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1010ffbc4;
      puStack_88 = &UNK_1104d2560;
      ppuVar5 = &puStack_a0;
      puStack_78 = puVar4;
      func_0x000107c60bc4(&puStack_a0);
      puVar4 = puStack_78;
      func_0x000107c6157c(uVar2);
      func_0x000107c6157c(puVar3);
      func_0x000107c6157c(param_1);
      func_0x000107c61574(puVar4);
      func_0x000107c5dc64(uVar6);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(uVar6);
    } while (uVar9 != uVar10);
  }
  func_0x0001000b6d30(0);
  uVar7 = 0;
  func_0x000104885df0(0,0);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar2);
  auVar11._8_8_ = &PTR_DAT_1107aaa40;
  auVar11._0_8_ = uVar7;
  return auVar11;
}



/* Entry: 1021503c0; end: 1021503d7;  */

void FUN_1021503c0(void)

{
  long unaff_x20;
  
  FUN_10214e8d0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1021503d8; end: 102150463;  */

void FUN_1021503d8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102150464; end: 102150473;  */

void FUN_102150464(long param_1,long param_2)

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



/* Entry: 102150474; end: 1021504f3;  */

void FUN_102150474(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104d2638;
  func_0x000107c613fc(&UNK_1104d2638,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1021507b0,puVar1);
  return;
}



/* Entry: 1021504f4; end: 1021507af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021504f4(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long lStack_68;
  long lStack_60;
  ulong uStack_58;
  
  func_0x000100083b20(&uStack_58);
  uVar2 = uStack_58;
  uVar4 = uStack_58;
  func_0x000107c42e5c();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar5 == 0) {
    func_0x000107c61170(uVar2);
  }
  else {
    uVar4 = uVar5;
    func_0x000107c4ea80();
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar2;
      func_0x000107c5c360();
      func_0x000107c61180();
      uVar6 = uVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar6 == 0) {
        bVar3 = false;
      }
      else {
        uVar4 = uVar6;
        func_0x000107c41050();
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        uVar6 = uVar4;
        func_0x000107c5c370();
        func_0x000107c61170(uVar4);
        bVar3 = uVar6 == 3;
      }
      uVar4 = uVar5;
      func_0x000107c4ea6c();
      uVar6 = uVar5;
      func_0x000107c4ea74();
      if (((((uint)uVar6 | (uint)uVar4) & 1) != 0) && (!bVar3)) {
        uVar4 = uVar2;
        func_0x000107c42e5c();
        func_0x000107c61180();
        func_0x000100083b20(&uStack_58);
        uVar15 = *(undefined8 *)(uStack_58 + _DAT_113034440);
        func_0x000107c6157c(uVar15);
        func_0x000107c61170(uStack_58);
        uVar7 = 0x112e5ba30;
        func_0x0001000285a8(0x112e5ba30,&UNK_10da61b98);
        uVar8 = 0x1021507c8;
        func_0x0001000cb480(0x1021507c8,0,uVar7);
        func_0x000107c61574(uVar15);
        puVar9 = &UNK_1104d2680;
        func_0x000107c613fc(&UNK_1104d2680,0x18,7);
        *(ulong *)(puVar9 + 0x10) = uVar4;
        puVar10 = &UNK_1104d26a8;
        func_0x000107c613fc(&UNK_1104d26a8,0x18,7);
        *(ulong *)(puVar10 + 0x10) = uVar4;
        lVar11 = 0;
        FUN_102150934();
        lVar12 = lVar11;
        func_0x000107c610f8();
        *(undefined8 *)(lVar12 + _DAT_112e5ba38) = uVar8;
        puVar1 = (undefined8 *)(lVar12 + _DAT_112e5ba40);
        *puVar1 = FUN_10215082c;
        puVar1[1] = puVar9;
        puVar1 = (undefined8 *)(lVar12 + _DAT_112e5ba48);
        *puVar1 = FUN_10215087c;
        puVar1[1] = puVar10;
        puVar9 = PTR_s_init_1125d9248;
        lStack_68 = lVar12;
        lStack_60 = lVar11;
        func_0x000107c61174(uVar4);
        func_0x000107c61174();
        plVar13 = &lStack_68;
        func_0x000107c61154(plVar13,puVar9);
        func_0x0001000a0a8c(0);
        func_0x000107c61174();
        plVar14 = plVar13;
        func_0x000104494b00();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(plVar13);
        func_0x000107c61170(plVar13);
        func_0x000107c61170(uVar4);
        func_0x000107c615e8(uVar5);
        goto LAB_102150790;
      }
    }
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar5);
  }
  plVar14 = (long *)0x0;
LAB_102150790:
  *param_1 = (long)plVar14;
  return;
}



/* Entry: 1021507b0; end: 1021507d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021507b0(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lStack_68;
  long lStack_60;
  ulong uStack_58;
  
  func_0x000100083b20(&uStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_58;
  uVar4 = uStack_58;
  func_0x000107c42e5c();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar5 == 0) {
    func_0x000107c61170(uVar2);
  }
  else {
    uVar4 = uVar5;
    func_0x000107c4ea80();
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar2;
      func_0x000107c5c360();
      func_0x000107c61180();
      uVar6 = uVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar6 == 0) {
        bVar3 = false;
      }
      else {
        uVar4 = uVar6;
        func_0x000107c41050();
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        uVar6 = uVar4;
        func_0x000107c5c370();
        func_0x000107c61170(uVar4);
        bVar3 = uVar6 == 3;
      }
      uVar4 = uVar5;
      func_0x000107c4ea6c();
      uVar6 = uVar5;
      func_0x000107c4ea74();
      if (((((uint)uVar6 | (uint)uVar4) & 1) != 0) && (!bVar3)) {
        uVar4 = uVar2;
        func_0x000107c42e5c();
        func_0x000107c61180();
        func_0x000100083b20(&uStack_58);
        uVar15 = *(undefined8 *)(uStack_58 + _DAT_113034440);
        func_0x000107c6157c(uVar15);
        func_0x000107c61170(uStack_58);
        uVar7 = 0x112e5ba30;
        func_0x0001000285a8(0x112e5ba30,&UNK_10da61b98);
        uVar8 = 0x1021507c8;
        func_0x0001000cb480(0x1021507c8,0,uVar7);
        func_0x000107c61574(uVar15);
        puVar9 = &UNK_1104d2680;
        func_0x000107c613fc(&UNK_1104d2680,0x18,7);
        *(ulong *)(puVar9 + 0x10) = uVar4;
        puVar10 = &UNK_1104d26a8;
        func_0x000107c613fc(&UNK_1104d26a8,0x18,7);
        *(ulong *)(puVar10 + 0x10) = uVar4;
        lVar11 = 0;
        FUN_102150934();
        lVar12 = lVar11;
        func_0x000107c610f8();
        *(undefined8 *)(lVar12 + _DAT_112e5ba38) = uVar8;
        puVar1 = (undefined8 *)(lVar12 + _DAT_112e5ba40);
        *puVar1 = FUN_10215082c;
        puVar1[1] = puVar9;
        puVar1 = (undefined8 *)(lVar12 + _DAT_112e5ba48);
        *puVar1 = FUN_10215087c;
        puVar1[1] = puVar10;
        puVar9 = PTR_s_init_1125d9248;
        lStack_68 = lVar12;
        lStack_60 = lVar11;
        func_0x000107c61174(uVar4);
        func_0x000107c61174();
        plVar13 = &lStack_68;
        func_0x000107c61154(plVar13,puVar9);
        func_0x0001000a0a8c(0);
        func_0x000107c61174();
        plVar14 = plVar13;
        func_0x000104494b00();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(plVar13);
        func_0x000107c61170(plVar13);
        func_0x000107c61170(uVar4);
        func_0x000107c615e8(uVar5);
        goto LAB_102150790;
      }
    }
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar5);
  }
  plVar14 = (long *)0x0;
LAB_102150790:
  *param_1 = (long)plVar14;
  return;
}



/* Entry: 1021507d4; end: 10215082b;  */

undefined8 FUN_1021507d4(undefined8 param_1,long param_2)

{
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    param_1 = 0x40f5180000000000;
  }
  else {
    func_0x000107c4ea7c();
    func_0x000107c615e8(param_2);
  }
  return param_1;
}



/* Entry: 10215082c; end: 102150833;  */

undefined8 FUN_10215082c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    param_1 = 0x40f5180000000000;
  }
  else {
    func_0x000107c4ea7c();
    func_0x000107c615e8(lVar1);
  }
  return param_1;
}



/* Entry: 102150834; end: 10215087b;  */

long FUN_102150834(long param_1)

{
  long lVar1;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c4ea78();
    func_0x000107c615e8(param_1);
  }
  return lVar1;
}



/* Entry: 10215087c; end: 102150883;  */

long FUN_10215087c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4ea78();
    func_0x000107c615e8(lVar1);
  }
  return lVar2;
}



/* Entry: 102150884; end: 1021508e3; -[_TtC34LensPlusExclusiveLensesFetcherImpl33LensPlusExclusiveLensesPrefetcher init] */

void FUN_102150884(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPlusExclusiveLensesFetcherImpl.LensPlusExclusiveLensesPrefetcher",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021508b0);
  (*pcVar1)();
}



/* Entry: 1021508e4; end: 102150933; -[_TtC34LensPlusExclusiveLensesFetcherImpl33LensPlusExclusiveLensesPrefetcher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102150900: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102150904) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021508e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5ba38));
  return;
}



/* Entry: 102150934; end: 102150953;  */

void FUN_102150934(void)

{
  func_0x000107c61168(&PTR_PTR_1128209c8);
  return;
}



/* Entry: 102150954; end: 10215097f; -[_TtC34LensPlusExclusiveLensesFetcherImpl33LensPlusExclusiveLensesPrefetcher dataSyncerIdentifier] */

void FUN_102150954(void)

{
  func_0x000107c5fadc(0xd000000000000022,0x800000010f065760);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102150980; end: 102150987; -[_TtC34LensPlusExclusiveLensesFetcherImpl33LensPlusExclusiveLensesPrefetcher submitOnRegister] */

undefined8 FUN_102150980(void)

{
  return 1;
}



/* Entry: 102150988; end: 102150c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102150988(double param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126b7248;
  func_0x000107c610f8();
  func_0x000107c453e4();
  (**(code **)(unaff_x20 + _DAT_112e5ba40))();
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102150bec);
    (*pcVar1)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102150bf0);
    (*pcVar1)();
  }
  if (param_1 < 4294967296.0) {
    func_0x000107c57d34(puVar2);
    puVar3 = PTR_PTR_1126b7238;
    func_0x000107c610f8(PTR_PTR_1126b7238);
    func_0x000107c453e4();
    func_0x000107c57c1c();
    puVar4 = PTR_PTR_1126b7240;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar5 = puVar4;
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102150bf8);
      (*pcVar1)();
    }
    func_0x000107c3d93c();
    func_0x000107c61170(puVar5);
    puVar5 = puVar4;
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c3d93c();
      func_0x000107c61170(puVar5);
      puVar5 = puVar4;
      func_0x000107c3de68();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102150c00);
        (*pcVar1)();
      }
      func_0x000107c3d93c();
      func_0x000107c61170();
      (**(code **)(unaff_x20 + _DAT_112e5ba48))();
      if (((ulong)puVar5 & 1) != 0) {
        puVar5 = puVar4;
        func_0x000107c3de68();
        func_0x000107c61180();
        if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102150c04);
          (*pcVar1)();
        }
        func_0x000107c3d93c();
        func_0x000107c61170(puVar5);
      }
      func_0x000107c56a40(puVar4);
      puVar5 = PTR_PTR_1126b7228;
      func_0x000107c610f8(PTR_PTR_1126b7228);
      func_0x000107c453e4();
      uVar6 = 0xd000000000000022;
      func_0x000107c5fadc(0xd000000000000022,0x800000010f065760);
      func_0x000107c5597c(puVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c55974(puVar5);
      func_0x000107c55958(puVar5);
      func_0x000107c55968(puVar5);
      func_0x000107c54734(puVar5);
      func_0x000107c55960(puVar5);
      func_0x000107c50140();
      func_0x000107c55978(puVar5);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      return puVar5;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102150bfc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102150bf4);
  (*pcVar1)();
}



/* Entry: 102150c04; end: 102150c37; -[_TtC34LensPlusExclusiveLensesFetcherImpl33LensPlusExclusiveLensesPrefetcher jobConfig] */

void FUN_102150c04(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102150988();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102150c38; end: 102150d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102150c38(code *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar1 = puStack_70;
  if (puStack_70 == (undefined *)0x0) {
    if (param_1 != (code *)0x0) {
      (*param_1)(2,0);
    }
  }
  else {
    puVar2 = &UNK_1104d26f8;
    func_0x000107c613fc(&UNK_1104d26f8,0x20,7);
    *(code **)(puVar2 + 0x10) = param_1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    pcStack_50 = FUN_102150dc8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1014c8004;
    puStack_58 = &UNK_1104d2710;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    FUN_10212d7c8(param_1,param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c43094(puVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(puVar1);
  }
  return;
}



/* Entry: 102150d34; end: 102150dbf; -[_TtC34LensPlusExclusiveLensesFetcherImpl33LensPlusExclusiveLensesPrefetcher onSync:] */

void FUN_102150d34(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1104d26d0;
    func_0x000107c613fc(&UNK_1104d26d0,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_102150dc0;
  }
  func_0x000107c61174(param_1);
  FUN_102150c38(pcVar2,puVar1);
  FUN_10212d6a4(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102150dc0; end: 102150dc7;  */

void FUN_102150dc0(undefined8 param_1,long param_2)

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



/* Entry: 102150dc8; end: 102150df7;  */

void FUN_102150dc8(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(0,0);
  }
  return;
}



/* Entry: 102150df8; end: 102150e13;  */

void FUN_102150df8(long param_1,long param_2)

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



/* Entry: 102150e14; end: 102151397;  */

void FUN_102150e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  uVar5 = 0x18;
  func_0x000107c613fc();
  lVar8 = param_4;
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar1 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  lVar8 = param_4;
  func_0x000107c5c360();
  func_0x000107c61180();
  lVar2 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar2 == 0) {
    uVar7 = 1;
    if (lVar1 != 0) goto LAB_102150f04;
LAB_102150f40:
    uVar6 = 0;
    uVar5 = 0x800000010f0657e0;
    lVar8 = -0x2fffffffffffffea;
  }
  else {
    lVar8 = lVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar8;
    func_0x000107c5c370();
    func_0x000107c61170(lVar8);
    uVar7 = (uint)(lVar2 != 3);
    if (lVar1 == 0) goto LAB_102150f40;
LAB_102150f04:
    lVar8 = lVar1;
    func_0x000107c4ea6c();
    if ((int)lVar8 == 0) goto LAB_102150f40;
    lVar2 = lVar1;
    func_0x000107c4ea70();
    func_0x000107c61180();
    lVar8 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    uVar6 = 1;
  }
  puVar3 = &UNK_1104d2748;
  func_0x000107c613fc(&UNK_1104d2748,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(long *)(puVar3 + 0x28) = lVar8;
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  func_0x0001000285a8(0x112e5ba78,&UNK_10da61bd0);
  func_0x000107c613fc();
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  pcVar4 = FUN_1021515cc;
  func_0x0001000bdd8c(FUN_1021515cc,puVar3);
  if (lVar1 == 0) {
    if ((uVar6 & uVar7) == 0) goto LAB_10215105c;
  }
  else {
    lVar8 = lVar1;
    func_0x000107c4ea74();
    lVar2 = lVar1;
    func_0x000107c4ea80();
    if ((((uVar6 | (uint)lVar8) & uVar7) != 1) || ((int)lVar2 != 0)) goto LAB_10215105c;
  }
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x10;
  func_0x0001009548b0(0x10,4,0x38,0,0,0,&UNK_10da61be0,pcVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
LAB_10215105c:
  uVar5 = 0;
  func_0x00010023511c(0);
  func_0x000107c610f8();
  func_0x000103f53d30(pcVar4,uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(lVar1);
  *(code **)(unaff_x20 + 0x10) = pcVar4;
  return;
}



/* Entry: 102151398; end: 10215152f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102151398(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112e5b730,&UNK_10dc15a90);
  func_0x000107c4c974(param_2);
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  uVar2 = 0x112e5b738;
  func_0x0001000285a8(0x112e5b738,&UNK_10da61720);
  pcVar3 = FUN_102151530;
  func_0x0001000cb480(FUN_102151530,0,uVar2);
  func_0x000107c61574(uVar1);
  func_0x0001000d224c(auStack_78);
  puVar4 = auStack_78;
  func_0x0001000a8868(puVar4,uStack_60);
  uVar5 = 3;
  func_0x000100774b74(3,0x2d,0,uStack_60,uStack_58,puVar4);
  func_0x0001000834e4(auStack_78);
  func_0x0001000285a8(0x112d53a90,&UNK_10da61260);
  func_0x000107c4cfbc();
  func_0x000107c61180();
  uVar2 = param_4;
  func_0x0001000bda74();
  func_0x000107c61170(param_4);
  uVar6 = 0;
  FUN_10214ea20(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_6);
  uVar1 = uVar2;
  FUN_1021517bc(uVar2,pcVar3,uVar5,param_5,param_6,uVar6);
  func_0x000107c61574(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102151530; end: 10215156b;  */

void FUN_102151530(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x000107c40a84(lVar1,param_3,0,0xe);
    func_0x000107c61180();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10215156c; end: 102151583;  */

void FUN_10215156c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102151584,0,0);
  return;
}


