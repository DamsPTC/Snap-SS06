/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1037319c4; end: 1037319e3;  */

void FUN_1037319c4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e7bd0);
  return;
}



/* Entry: 1037319e4; end: 103731ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1037319e4(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,code *param_5,
             undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  uVar1 = param_1;
  func_0x000107c4a83c();
  func_0x000107c61180();
  if (uVar1 == 0) {
LAB_103731b70:
    FUN_10373292c();
    (*param_5)(0,0);
  }
  else {
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    if ((uVar2 == 0xd00000000000001e) && (param_2 == -0x7ffffffef0e9df00)) {
      func_0x000107c6142c(0x800000010f162100);
    }
    else {
      func_0x000107c605b8(uVar2,param_2,0xd00000000000001e,0x800000010f162100,0);
      func_0x000107c6142c(param_2);
      if ((uVar2 & 1) == 0) goto LAB_103731b70;
    }
    lVar3 = *(long *)(unaff_x20 + _DAT_112f8e900);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      puVar4 = &UNK_11068abe0;
      func_0x000107c613fc(&UNK_11068abe0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar5 = &UNK_11068ac08;
      func_0x000107c613fc(&UNK_11068ac08,0x30,7);
      *(ulong *)(puVar5 + 0x10) = param_1;
      *(code **)(puVar5 + 0x18) = param_5;
      *(undefined8 *)(puVar5 + 0x20) = param_6;
      *(undefined **)(puVar5 + 0x28) = puVar4;
      pcStack_60 = FUN_103732ccc;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_101b8c84c;
      puStack_68 = &UNK_11068ac20;
      puStack_58 = puVar5;
      func_0x000107c60bc4(&puStack_80);
      puVar4 = puStack_58;
      func_0x000107c61174(param_1);
      func_0x000107c6157c(param_6);
      func_0x000107c61574(puVar4);
      func_0x000107c4b778(lVar3);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(lVar3);
    }
  }
  return 0;
}



/* Entry: 103731ba4; end: 103731c27;  */

void FUN_103731ba4(ulong param_1,ulong param_2,undefined8 param_3,code *param_4,undefined8 param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  if (((param_1 & 1) == 0) || ((param_2 & 1) == 0)) {
    uVar1 = 2;
  }
  else {
    func_0x000107c61428(param_6 + 0x10,auStack_48,0,0);
    param_6 = param_6 + 0x10;
    func_0x000107c61618();
    if (param_6 != 0) {
      FUN_10373292c();
      func_0x000107c61170(param_6);
    }
    uVar1 = 0;
  }
  (*param_4)(uVar1,0);
  return;
}



/* Entry: 103731c28; end: 103731d23; -[_TtC19ContentSyncCacheJob28ContentSyncCacheJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_103731c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4(param_6);
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
  func_0x000107c60bc4(param_6);
  uVar2 = param_3;
  FUN_103732cf4(param_3,param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103731d24; end: 103731dc3;  */

void FUN_103731d24(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5d388(param_3);
  func_0x000107c3dba0();
  func_0x000107c61180();
  uVar1 = 0;
  FUN_1037332bc(0,0x112e0fd70,&PTR_PTR_1126c2098);
  uVar2 = param_1;
  func_0x000107c5fc54(param_1,uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61428(param_2 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 103731dc4; end: 10373222b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103731dc4(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_98,0,0);
    uVar14 = *(ulong *)(param_2 + 0x10);
    if (uVar14 >> 0x3e == 0) {
      uVar15 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar15 = uVar14 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar14) {
        uVar15 = uVar14;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(uVar14);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar15 != 0) {
      uVar18 = 0;
      uVar19 = param_3 & 0xffffffffffffff8;
      uVar1 = uVar19;
      if (0x7fffffffffffffff < param_3) {
        uVar1 = param_3;
      }
      do {
        while( true ) {
          if ((uVar14 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103732214);
              (*pcVar2)();
            }
            uVar4 = *(ulong *)(uVar14 + 0x20 + uVar18 * 8);
            func_0x000107c61174();
          }
          else {
            uVar4 = uVar18;
            FUN_103732770(uVar18,uVar14,&PTR_PTR_1126c2098,0x112e0fd70);
          }
          bVar3 = SCARRY8(uVar18,1);
          uVar18 = uVar18 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103732210);
            (*pcVar2)();
          }
          uVar5 = uVar4;
          func_0x000107c4004c();
          func_0x000107c61180();
          if (uVar5 != 0) break;
LAB_103731fc8:
          func_0x000107c61170(uVar4);
          if (uVar18 == uVar15) goto LAB_1037320dc;
        }
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c490d4();
        if (param_3 >> 0x3e == 0) {
          uVar17 = *(ulong *)(uVar19 + 0x10);
        }
        else {
          uVar17 = uVar1;
          func_0x000107c60480();
        }
        uVar16 = 0;
        do {
          if (uVar17 == uVar16) {
            func_0x000107c61170(uVar4);
            func_0x000107c61170(puVar9);
            uVar4 = uVar5;
            goto LAB_103731fc8;
          }
          if ((param_3 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar19 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10373220c);
              (*pcVar2)();
            }
            uVar6 = *(ulong *)(param_3 + uVar16 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar6 = uVar16;
            FUN_103732770(uVar16,param_3,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
          }
          if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103732208);
            (*pcVar2)();
          }
          FUN_1037332bc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          uVar7 = uVar6;
          func_0x000107c60118(uVar6,puVar9);
          func_0x000107c61170(uVar6);
          uVar16 = uVar16 + 1;
        } while ((uVar7 & 1) == 0);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(uVar5);
        puVar9 = puVar10;
        func_0x000107c61550();
        if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
           (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar10 >> 0x3e == 0) {
            puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar10) {
              puVar8 = puVar10;
            }
            func_0x000107c60480(puVar8);
          }
          puVar9 = (undefined *)0x0;
          func_0x000102d29b74(0,puVar8 + 1,1,puVar10);
        }
        uVar17 = (ulong)puVar9 & 0xffffffffffffff8;
        uVar5 = *(ulong *)(uVar17 + 0x10);
        puVar10 = puVar9;
        if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar5) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
          func_0x000102d29b74(puVar10,uVar5 + 1,1,puVar9);
          uVar17 = (ulong)puVar10 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar17 + 0x10) = uVar5 + 1;
        *(ulong *)(uVar17 + uVar5 * 8 + 0x20) = uVar4;
      } while (uVar18 != uVar15);
    }
LAB_1037320dc:
    func_0x000107c6142c(uVar14);
    func_0x000107c5d388(param_4);
    lVar11 = *(long *)(param_1 + _DAT_112f8e910);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 == 0) {
      func_0x000107c61170(param_1);
      func_0x000107c6142c(puVar10);
    }
    else {
      uVar12 = 0;
      FUN_1037332bc(0,0x112e0fd70,&PTR_PTR_1126c2098);
      puVar9 = puVar10;
      func_0x000107c5fc48(puVar10,uVar12);
      pcStack_a8 = FUN_10373222c;
      uStack_a0 = 0;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0x42000000;
      pcStack_b8 = FUN_103732230;
      puStack_b0 = &UNK_11068ada0;
      ppuVar13 = &puStack_c8;
      func_0x000107c60bc4(ppuVar13);
      func_0x000107c51dbc(lVar11);
      func_0x000107c6142c(puVar10);
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c615e8(lVar11);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 10373222c; end: 10373222f;  */

void FUN_10373222c(void)

{
  return;
}



/* Entry: 103732230; end: 10373234b;  */

/* WARNING: Possible PIC construction at 0x00010373232c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103732330) */

void FUN_103732230(long param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    FUN_1037332bc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = 0x112d5d480;
    func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
    uVar5 = uVar4;
    func_0x000100120cb0();
    func_0x000107c5f9e8(param_2,uVar3,uVar4,uVar5);
  }
  if (param_3 != 0) {
    uVar5 = 0;
    FUN_1037332bc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = 0;
    func_0x000107c5eea4(0);
    uVar4 = uVar3;
    func_0x000100120cb0();
    func_0x000107c5f9e8(param_3,uVar5,uVar3,uVar4);
  }
  func_0x000107c6157c(uVar2);
  uVar4 = param_4;
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10373234c; end: 1037323a7; -[_TtC19ContentSyncCacheJob28ContentSyncCacheJobProcessor init] */

void FUN_10373234c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentSyncCacheJob.ContentSyncCacheJobProcessor",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103732378);
  (*pcVar1)();
}



/* Entry: 1037323a8; end: 10373241f; -[_TtC19ContentSyncCacheJob28ContentSyncCacheJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037323c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037323e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037323c8) */
/* WARNING: Removing unreachable block (ram,0x0001037323e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037323a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8e8f8));
  return;
}



/* Entry: 103732420; end: 1037324e3;  */

undefined8 FUN_103732420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  FUN_103732efc(param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1037324e4; end: 103732713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037324e4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 auStack_a0 [80];
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_11307e6a8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar8 = lRam0000000112f8e8e8;
    if (lVar2 == 0) {
      lVar8 = 0xe10;
      lVar7 = 600;
    }
    else {
      func_0x000107c615f0(lVar2);
      if (lVar8 != -1) {
        func_0x000107c61568(0x112f8e8e8,FUN_103731590);
      }
      lVar8 = lVar2;
      func_0x000107c497fc(lVar2);
      func_0x000107c615e8(lVar2);
      lVar7 = lRam0000000112f8e8e0;
      func_0x000107c615f0(lVar2);
      if (lVar7 != -1) {
        func_0x000107c61568(0x112f8e8e0,FUN_1037315fc);
      }
      lVar7 = lVar2;
      func_0x000107c497fc(lVar2);
      func_0x000107c615e8(lVar2);
    }
    lVar3 = 0x112dd1f58;
    func_0x0001000285a8(0x112dd1f58,&UNK_10dbcf190);
    lVar4 = lVar3;
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 4;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    *(undefined8 *)(lVar4 + 0x20) = 0x500000007;
    uVar5 = 0xd00000000000001e;
    FUN_1037330d8(0xd00000000000001e,0x800000010f162100,lVar4,lVar8);
    func_0x000107c61588(lVar4);
    func_0x000107c5c2c0(lVar1);
    func_0x000107c61534(lVar3,auStack_a0);
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined4 *)(lVar3 + 0x20) = 1;
    uVar6 = 0xd00000000000001e;
    FUN_1037330d8(0xd00000000000001e,0x800000010f162160,lVar3,lVar7);
    func_0x000107c61588(lVar3);
    func_0x000107c5c2c0(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 103732714; end: 103732747;  */

void FUN_103732714(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103732748; end: 103732767;  */

void FUN_103732748(void)

{
  FUN_1037324e4();
  return;
}



/* Entry: 103732768; end: 10373276f;  */

undefined8 FUN_103732768(void)

{
  return 0;
}



/* Entry: 103732770; end: 10373292b;  */

ulong FUN_103732770(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103732854);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103732858);
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
  FUN_1037332bc(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10373292c);
  (*pcVar2)();
}



/* Entry: 10373292c; end: 103732ccb;  */

/* WARNING: Possible PIC construction at 0x000103732c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103732c9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103732c58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10373292c(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  long unaff_x20;
  ulong uVar15;
  long lVar16;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar15 = *(ulong *)(unaff_x20 + _DAT_112f8e910);
  uVar3 = uVar15;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar3 == 0) {
    return;
  }
  uVar4 = uVar3;
  func_0x000107c5c448();
  func_0x000107c61180();
  func_0x000107c615e8(uVar3);
  uVar5 = 0;
  FUN_1037332bc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = uVar4;
  func_0x000107c5fc54(uVar4,uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = uVar3;
  if (uVar15 != 0) {
    uVar6 = uVar15;
    func_0x000107c5c444();
    func_0x000107c61180();
    func_0x000107c615e8(uVar15);
    uVar4 = uVar6;
    func_0x000107c5fc54(uVar6,uVar5);
    func_0x000107c61170(uVar6);
    if (uVar3 >> 0x3e == 0) {
      uVar15 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar15 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar15 = uVar3;
      }
      func_0x000107c60480();
    }
    if (uVar15 != 0) {
      if ((long)uVar15 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103732ccc);
        (*pcVar2)();
      }
      lVar16 = 0;
      lVar14 = *(long *)(unaff_x20 + _DAT_112f8e908);
      if ((uVar3 & 0xc000000000000001) == 0) goto LAB_103732a84;
      do {
        lVar7 = lVar16;
        FUN_103732770(lVar16,uVar3,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
        while( true ) {
          puVar8 = &UNK_11068ace8;
          func_0x000107c613fc(&UNK_11068ace8,0x18,7);
          *(undefined **)(puVar8 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
          lVar9 = lVar14;
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar9 == 0) {
            func_0x000107c61574(puVar8);
            func_0x000107c61170(lVar7);
          }
          else {
            puVar10 = &UNK_11068ad10;
            func_0x000107c613fc(&UNK_11068ad10,0x20,7);
            *(undefined **)(puVar10 + 0x10) = puVar8;
            *(long *)(puVar10 + 0x18) = lVar7;
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            pcStack_80 = FUN_1037332a8;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            puStack_90 = &UNK_102d29384;
            puStack_88 = &UNK_11068ad28;
            ppuVar11 = &puStack_a0;
            puStack_78 = puVar10;
            func_0x000107c60bc4(ppuVar11);
            puVar10 = puStack_78;
            func_0x000107c6157c(puVar8);
            func_0x000107c61174();
            func_0x000107c61574(puVar10);
            puVar10 = &UNK_11068abe0;
            func_0x000107c613fc(&UNK_11068abe0,0x18,7);
            func_0x000107c61614(puVar10 + 0x10,unaff_x20);
            puVar12 = &UNK_11068ad60;
            func_0x000107c613fc(&UNK_11068ad60,0x30,7);
            *(undefined **)(puVar12 + 0x10) = puVar10;
            *(undefined **)(puVar12 + 0x18) = puVar8;
            *(ulong *)(puVar12 + 0x20) = uVar4;
            *(long *)(puVar12 + 0x28) = lVar7;
            pcStack_80 = (code *)0x1037332b0;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            puStack_90 = &UNK_1000b0c7c;
            puStack_88 = &UNK_11068ad78;
            ppuVar13 = &puStack_a0;
            puStack_78 = puVar12;
            func_0x000107c60bc4(ppuVar13);
            puVar10 = puStack_78;
            func_0x000107c6157c(puVar8);
            func_0x000107c61174(lVar7);
            func_0x000107c61434(uVar4);
            func_0x000107c61574(puVar10);
            func_0x000107c3cedc(lVar9);
            func_0x000107c61170(lVar7);
            func_0x000107c60bd0(ppuVar13);
            func_0x000107c60bd0(ppuVar11);
            func_0x000107c61574(puVar8);
            func_0x000107c615e8(lVar9);
          }
          if (uVar15 - 1 == lVar16) goto code_r0x000107c6142c;
          lVar16 = lVar16 + 1;
          if ((uVar3 & 0xc000000000000001) != 0) break;
LAB_103732a84:
          lVar7 = *(long *)(uVar3 + lVar16 * 8 + 0x20);
          func_0x000107c61174();
        }
      } while( true );
    }
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 103732ccc; end: 103732cf3;  */

void FUN_103732ccc(ulong param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (((param_1 & 1) == 0) || ((param_2 & 1) == 0)) {
    uVar3 = 2;
  }
  else {
    func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0,*(undefined8 *)(unaff_x20 + 0x20));
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_10373292c();
      func_0x000107c61170(lVar2);
    }
    uVar3 = 0;
  }
  (*pcVar1)(uVar3,0);
  return;
}



/* Entry: 103732cf4; end: 103732efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103732cf4(ulong param_1,long param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  puVar1 = &UNK_11068ac70;
  lVar7 = 0x18;
  func_0x000107c613fc(&UNK_11068ac70,0x18,7);
  *(long *)(puVar1 + 0x10) = param_3;
  func_0x000107c60bc4(param_3);
  uVar2 = param_1;
  func_0x000107c4a83c();
  func_0x000107c61180();
  if (uVar2 == 0) {
LAB_103732eb8:
    FUN_10373292c();
    (**(code **)(param_3 + 0x10))(param_3,0,0);
  }
  else {
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    if ((uVar3 == 0xd00000000000001e) && (lVar7 == -0x7ffffffef0e9df00)) {
      func_0x000107c6142c(0x800000010f162100);
    }
    else {
      func_0x000107c605b8(uVar3,lVar7,0xd00000000000001e,0x800000010f162100,0);
      func_0x000107c6142c(lVar7);
      if ((uVar3 & 1) == 0) goto LAB_103732eb8;
    }
    lVar7 = *(long *)(param_2 + _DAT_112f8e900);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 != 0) {
      puVar4 = &UNK_11068abe0;
      func_0x000107c613fc(&UNK_11068abe0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,param_2);
      puVar5 = &UNK_11068ac98;
      func_0x000107c613fc(&UNK_11068ac98,0x30,7);
      *(ulong *)(puVar5 + 0x10) = param_1;
      *(code **)(puVar5 + 0x18) = FUN_10373326c;
      *(undefined **)(puVar5 + 0x20) = puVar1;
      *(undefined **)(puVar5 + 0x28) = puVar4;
      pcStack_60 = FUN_1037332fc;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_101b8c84c;
      puStack_68 = &UNK_11068acb0;
      puStack_58 = puVar5;
      func_0x000107c60bc4(&puStack_80);
      puVar4 = puStack_58;
      func_0x000107c61174(param_1);
      func_0x000107c6157c(puVar1);
      func_0x000107c61574(puVar4);
      func_0x000107c4b778(lVar7);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61574(puVar1);
      func_0x000107c615e8(lVar7);
      return 0;
    }
  }
  func_0x000107c61574(puVar1);
  return 0;
}



/* Entry: 103732efc; end: 1037330d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103732efc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5ffd8();
  lVar8 = *(long *)(lVar1 + -8);
  lStack_70 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar5 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  uVar7 = *(undefined8 *)(param_2 + _DAT_11302e640);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar7;
  FUN_1037332bc(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar7);
  func_0x000107c5f81c(lVar2);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100029608();
  uVar4 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar3 = uVar4;
  func_0x00010002964c();
  func_0x000107c60264(lVar6,&puStack_68,uVar4,uVar3,lVar1,uVar7);
  (**(code **)(lVar8 + 0x68))
            (lVar5,*(undefined4 *)
                    PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_70);
  uVar4 = 0xd00000000000001f;
  func_0x000107c5ffec(0xd00000000000001f,0x800000010f162180,lVar2,lVar6,lVar5,0);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
  return;
}



/* Entry: 1037330d8; end: 10373324b;  */

undefined * FUN_1037330d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126b7248;
  func_0x000107c610f8(PTR_PTR_1126b7248);
  func_0x000107c453e4();
  if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103733244);
    (*pcVar1)();
  }
  if (param_4 >> 0x20 == 0) {
    func_0x000107c57d34();
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
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c61434(param_3);
      func_0x000107c3d940(puVar5);
      func_0x000107c6142c(param_3);
      func_0x000107c61170(puVar5);
      func_0x000107c56a40(puVar4);
      puVar5 = PTR_PTR_1126b7228;
      func_0x000107c610f8(PTR_PTR_1126b7228);
      func_0x000107c453e4();
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c5597c(puVar5);
      func_0x000107c61170(param_1);
      func_0x000107c55958(puVar5);
      func_0x000107c55974(puVar5);
      func_0x000107c55968(puVar5);
      func_0x000107c54734(puVar5);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      return puVar5;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10373324c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103733248);
  (*pcVar1)();
}



/* Entry: 10373324c; end: 10373326b;  */

void FUN_10373324c(void)

{
  func_0x000107c61168(&PTR_PTR_112f8e988);
  return;
}



/* Entry: 10373326c; end: 103733273;  */

void FUN_10373326c(undefined8 param_1,long param_2)

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



/* Entry: 103733274; end: 1037332a7;  */

void FUN_103733274(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1037332a8; end: 1037332bb;  */

void FUN_1037332a8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5d388(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c3dba0();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_1037332bc(0,0x112e0fd70,&PTR_PTR_1126c2098);
  uVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1037332bc; end: 1037332fb;  */

void FUN_1037332bc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1037332fc; end: 103733333;  */

void FUN_1037332fc(ulong param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (((param_1 & 1) == 0) || ((param_2 & 1) == 0)) {
    uVar3 = 2;
  }
  else {
    func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0,*(undefined8 *)(unaff_x20 + 0x20));
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_10373292c();
      func_0x000107c61170(lVar2);
    }
    uVar3 = 0;
  }
  (*pcVar1)(uVar3,0);
  return;
}



/* Entry: 103733334; end: 10373346b;  */

void FUN_103733334(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11068aec0;
  func_0x000107c613fc(&UNK_11068aec0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  uStack_60 = 0x1037339fc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101443eec;
  puStack_68 = &UNK_11068aed8;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000a0a8c(0);
  puVar2 = puVar1;
  func_0x000100a0dc54(puVar1,0xd00000000000001e,0x800000010f162100);
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 10373346c; end: 10373348b;  */

void FUN_10373346c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar5 = &puStack_80;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_11068aec0;
  func_0x000107c613fc(&UNK_11068aec0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  uStack_60 = 0x1037339fc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101443eec;
  puStack_68 = &UNK_11068aed8;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x0001000a0a8c(0);
  puVar4 = puVar3;
  func_0x000100a0dc54(puVar3,0xd00000000000001e,0x800000010f162100);
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 10373348c; end: 103733523;  */

void FUN_10373348c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c613fc(param_4,0x28,7);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined8 *)(param_4 + 0x18) = param_2;
  *(undefined8 *)(param_4 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_5,param_4);
  return;
}



/* Entry: 103733524; end: 10373365b;  */

void FUN_103733524(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11068ae70;
  func_0x000107c613fc(&UNK_11068ae70,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  uStack_60 = 0x103733a20;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101443eec;
  puStack_68 = &UNK_11068ae88;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000a0a8c(0);
  puVar2 = puVar1;
  func_0x000100a0dc54(puVar1,0xd00000000000001e,0x800000010f162160);
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 10373365c; end: 103733687;  */

void FUN_10373365c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar5 = &puStack_80;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_11068ae70;
  func_0x000107c613fc(&UNK_11068ae70,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  uStack_60 = 0x103733a20;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101443eec;
  puStack_68 = &UNK_11068ae88;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x0001000a0a8c(0);
  puVar4 = puVar3;
  func_0x000100a0dc54(puVar3,0xd00000000000001e,0x800000010f162160);
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 103733688; end: 1037339ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103733688(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5ffd8();
  lStack_a8 = *(long *)(lVar3 + -8);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar12 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_b0 = lVar12;
  func_0x000107c5ffc4();
  lStack_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar12 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_c0 = lVar12;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000100083b20(&lStack_68);
  uVar4 = *(undefined8 *)(lStack_68 + _DAT_11302ce60);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  func_0x000100083b20(&uStack_70);
  uVar5 = uStack_70;
  func_0x000107c4ac3c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&uStack_78);
  uVar6 = uStack_78;
  func_0x000107c4ac40();
  func_0x000107c61180();
  func_0x000107c61170(uStack_78);
  func_0x000100083b20(&lStack_80);
  uVar7 = *(undefined8 *)(lStack_80 + _DAT_112fb9a78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_80);
  lVar8 = 0;
  FUN_1037319c4();
  lVar9 = lVar8;
  func_0x000107c610f8();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar9 + _DAT_112f8e8f0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar9 + _DAT_112f8e8f8) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112f8e900) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112f8e908) = uVar6;
  *(undefined8 *)(lVar9 + _DAT_112f8e910) = uVar7;
  func_0x0001000295c4(0);
  func_0x000107c61174();
  uStack_d0 = uVar4;
  func_0x000107c61174();
  uStack_c8 = uVar7;
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uVar6;
  func_0x000107c5f81c(lVar12);
  puStack_88 = puVar1;
  func_0x000100029608();
  uVar4 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar10 = uVar4;
  func_0x00010002964c();
  lVar3 = lStack_c0;
  func_0x000107c60264(lStack_c0,&puStack_88,uVar4,uVar10,lStack_b8,uVar7);
  lVar2 = lStack_b0;
  (**(code **)(lStack_a8 + 0x68))
            (lStack_b0,
             *(undefined4 *)
              PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_a0);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5ffec(0xd00000000000001c,0x800000010f1621a0,lVar12,lVar3,lVar2,0);
  *(undefined8 *)(lVar9 + _DAT_112f8e918) = uVar4;
  plVar11 = &lStack_98;
  lStack_98 = lVar9;
  lStack_90 = lVar8;
  func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
  func_0x000107c61170(uStack_d0);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uStack_c8);
  return plVar11;
}



/* Entry: 1037339ac; end: 1037339c7;  */

void FUN_1037339ac(long param_1,long param_2)

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



/* Entry: 1037339c8; end: 103733a17;  */

void FUN_1037339c8(void)

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



/* Entry: 103733a18; end: 103733a23;  */

void FUN_103733a18(long param_1,long param_2)

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



/* Entry: 103733a24; end: 103733a73;  */

void FUN_103733a24(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000036;
  func_0x000100bd65fc(0xd000000000000036,0x800000010f162270,0);
  uRam000000011380bb18 = uVar1;
  return;
}



/* Entry: 103733a74; end: 103733a8f; +[SCSpotlightPrefetchFeatureConfigKeys runPrefetchJobPeriodicallyForegroundSeconds] */

void FUN_103733a74(void)

{
  if (lRam000000011355c0f0 != -1) {
    func_0x000107c61568(0x11355c0f0,FUN_103733a24);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380bb18);
  return;
}



/* Entry: 103733a90; end: 103733adf;  */

void FUN_103733a90(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000036;
  func_0x000100bd65fc(0xd000000000000036,0x800000010f162230,0);
  uRam000000011380bb20 = uVar1;
  return;
}



/* Entry: 103733ae0; end: 103733b1f;  */

undefined8 FUN_103733ae0(void)

{
  if (lRam000000011355c0f8 != -1) {
    func_0x000107c61568(0x11355c0f8,FUN_103733a90);
  }
  return 0x11380bb20;
}



/* Entry: 103733b20; end: 103733b3b; +[SCSpotlightPrefetchFeatureConfigKeys runPrefetchJobPeriodicallyBackgroundSeconds] */

void FUN_103733b20(void)

{
  if (lRam000000011355c0f8 != -1) {
    func_0x000107c61568(0x11355c0f8,FUN_103733a90);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380bb20);
  return;
}



/* Entry: 103733b3c; end: 103733b8b;  */

void FUN_103733b3c(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000030;
  func_0x000100bd65fc(0xd000000000000030,0x800000010f1621f0,0);
  uRam000000011380bb28 = uVar1;
  return;
}



/* Entry: 103733b8c; end: 103733bcb;  */

undefined8 FUN_103733b8c(void)

{
  if (lRam000000011355c100 != -1) {
    func_0x000107c61568(0x11355c100,FUN_103733b3c);
  }
  return 0x11380bb28;
}



/* Entry: 103733bcc; end: 103733be7; +[SCSpotlightPrefetchFeatureConfigKeys spotlightPrefetchJobTriggerOptionBackground] */

void FUN_103733bcc(void)

{
  if (lRam000000011355c100 != -1) {
    func_0x000107c61568(0x11355c100,FUN_103733b3c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380bb28);
  return;
}



/* Entry: 103733be8; end: 103733c37;  */

void FUN_103733be8(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000029;
  func_0x000100442ccc(0xd000000000000029,0x800000010f1621c0,0);
  uRam000000011380bb30 = uVar1;
  return;
}



/* Entry: 103733c38; end: 103733c53; +[SCSpotlightPrefetchFeatureConfigKeys stopFourthTabPrefetchingSpotlight] */

void FUN_103733c38(void)

{
  if (lRam000000011355c108 != -1) {
    func_0x000107c61568(0x11355c108,FUN_103733be8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380bb30);
  return;
}



/* Entry: 103733c54; end: 103733c97;  */

void FUN_103733c54(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    func_0x000107c61568(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 103733c98; end: 103733cd3; -[SCSpotlightPrefetchFeatureConfigKeys init] */

void FUN_103733c98(undefined8 param_1)

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



/* Entry: 103733cd4; end: 103733d07;  */

void FUN_103733cd4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103733d08; end: 103733d0b; -[SCSpotlightPrefetchFeatureConfigKeys .cxx_destruct] */

void FUN_103733d08(void)

{
  return;
}



/* Entry: 103733d0c; end: 103733d2b;  */

void FUN_103733d0c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e7ce8);
  return;
}



/* Entry: 103733d2c; end: 103733d77;  */

undefined8 FUN_103733d2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_103733d78(param_1,param_2);
  return unaff_x20;
}



/* Entry: 103733d78; end: 103733fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103733d78(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126b7248;
  func_0x000107c610f8(PTR_PTR_1126b7248);
  func_0x000107c453e4();
  func_0x000107c57d34();
  puVar3 = PTR_PTR_1126b7238;
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  func_0x000107c57c1c();
  puVar4 = PTR_PTR_1126b7230;
  func_0x000107c610f8(PTR_PTR_1126b7230);
  func_0x000107c453e4();
  func_0x000107c56358();
  func_0x000107c57ecc(puVar4);
  func_0x000107c57ed0(puVar4);
  puVar5 = PTR_PTR_1126b7240;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = puVar5;
  func_0x000107c3de68();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103733fb0);
    (*pcVar1)();
  }
  func_0x000107c3d93c();
  func_0x000107c61170(puVar6);
  puVar6 = puVar5;
  func_0x000107c3de68();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c3d93c();
    func_0x000107c61170(puVar6);
    puVar6 = puVar5;
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar6 != (undefined *)0x0) {
      func_0x000107c3d93c();
      func_0x000107c61170(puVar6);
      puVar6 = PTR_PTR_1126b7228;
      func_0x000107c610f8(PTR_PTR_1126b7228);
      func_0x000107c453e4();
      func_0x000107c55974();
      func_0x000107c57ec0(puVar6);
      func_0x000107c55958(puVar6);
      func_0x000107c54734(puVar6);
      uVar7 = 0xd000000000000018;
      func_0x000107c5fadc(0xd000000000000018,0x800000010dc06100);
      func_0x000107c5597c(puVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c55968(puVar6);
      lVar8 = *(long *)(param_2 + _DAT_11307e6a8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        func_0x000107c5c2c0();
        func_0x000107c615e8(lVar8);
      }
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103733fb8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103733fb4);
  (*pcVar1)();
}



/* Entry: 103733fb8; end: 103733fd3;  */

void FUN_103733fb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103733fd4; end: 103733ff3;  */

void FUN_103733fd4(void)

{
  func_0x000107c61168(&PTR_PTR_112f8ea60);
  return;
}



/* Entry: 103733ff4; end: 103734073;  */

void FUN_103733ff4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_11068afe8;
  func_0x000107c613fc(&UNK_11068afe8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103734194,puVar1);
  return;
}



/* Entry: 103734074; end: 103734193;  */

void FUN_103734074(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11068b030;
  func_0x000107c613fc(&UNK_11068b030,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  pcStack_50 = FUN_103734294;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_11068b048;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000a0a8c(0);
  puVar2 = puVar1;
  func_0x000100a0dc54(puVar1,0xd000000000000018,0x800000010dc06160);
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 103734194; end: 1037341ab;  */

void FUN_103734194(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_70;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_11068b030;
  func_0x000107c613fc(&UNK_11068b030,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  pcStack_50 = FUN_103734294;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_11068b048;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x0001000a0a8c(0);
  puVar4 = puVar3;
  func_0x000100a0dc54(puVar3,0xd000000000000018,0x800000010dc06160);
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 1037341ac; end: 103734267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037341ac(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar4 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(lStack_38);
  func_0x000100083b20(&lStack_40);
  uVar1 = *(undefined8 *)(lStack_40 + _DAT_1130344b8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_40);
  lVar2 = 0;
  FUN_1037345e0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8eab8) = uVar4;
  *(undefined8 *)(lVar3 + _DAT_112f8eac0) = uVar1;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103734268; end: 103734293;  */

void FUN_103734268(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103734294; end: 1037342b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103734294(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar4 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(lStack_38);
  func_0x000100083b20(&lStack_40);
  uVar1 = *(undefined8 *)(lStack_40 + _DAT_1130344b8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_40);
  lVar2 = 0;
  FUN_1037345e0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8eab8) = uVar4;
  *(undefined8 *)(lVar3 + _DAT_112f8eac0) = uVar1;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037342b8; end: 10373431b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037342b8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f8eab8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f8eac0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10373431c; end: 103734423; -[_TtC24GamesFriendsFeedPruneJob33GamesFriendsFeedPruneJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_10373431c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  
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
  puVar2 = &UNK_11068b080;
  func_0x000107c613fc(&UNK_11068b080,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  pcVar3 = FUN_103734600;
  FUN_1037344bc(FUN_103734600,puVar2);
  func_0x000107c61574(puVar2);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 103734424; end: 103734483; -[_TtC24GamesFriendsFeedPruneJob33GamesFriendsFeedPruneJobProcessor init] */

void FUN_103734424(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesFriendsFeedPruneJob.GamesFriendsFeedPruneJobProcessor",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103734450);
  (*pcVar1)();
}



/* Entry: 103734484; end: 1037344bb; -[_TtC24GamesFriendsFeedPruneJob33GamesFriendsFeedPruneJobProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103734484(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f8eab8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8eac0));
  return;
}



/* Entry: 1037344bc; end: 1037345df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037344bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(auStack_78);
  lVar3 = lStack_58;
  uVar1 = uStack_60;
  puVar2 = auStack_78;
  func_0x0001000a8868(puVar2,uStack_60);
  func_0x00010373542c(uVar1,lVar3,puVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f8eac0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar3;
    func_0x000107c49e70();
    func_0x000107c615e8(lVar3);
  }
  func_0x0001000a8868(auStack_78,uStack_60);
  puVar4 = &UNK_11068b0a8;
  func_0x000107c613fc(&UNK_11068b0a8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  pcVar6 = *(code **)(lStack_58 + 0x18);
  func_0x000107c6157c(param_2);
  (*pcVar6)(lVar5,FUN_103734608,puVar4,uStack_60,lStack_58);
  func_0x000107c61574(puVar4);
  func_0x0001000834e4(auStack_78);
  return 0;
}



/* Entry: 1037345e0; end: 1037345ff;  */

void FUN_1037345e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128e7d98);
  return;
}



/* Entry: 103734600; end: 103734607;  */

void FUN_103734600(undefined8 param_1,long param_2)

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



/* Entry: 103734608; end: 10373462f;  */

void FUN_103734608(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0,0);
  return;
}



/* Entry: 103734630; end: 1037346bb;  */

void FUN_103734630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 1037346bc; end: 1037346bf;  */

undefined8 FUN_1037346bc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
     && ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
    uVar1 = param_1[4];
    if ((((uVar1 == param_2[4]) && (param_1[5] == param_2[5])) ||
        (func_0x000107c605b8(), (uVar1 & 1) != 0)) &&
       (((((byte)param_1[6] ^ (byte)param_2[6]) & 1) == 0 &&
        (((*(byte *)((long)param_1 + 0x31) ^ *(byte *)((long)param_2 + 0x31)) & 1) == 0)))) {
      uVar1 = param_2[8];
      if (param_1[8] == 0) {
        if (uVar1 != 0) {
          return 0;
        }
      }
      else {
        if (uVar1 == 0) {
          return 0;
        }
        uVar2 = param_1[7];
        if (((uVar2 != param_2[7]) || (param_1[8] != uVar1)) &&
           (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
          return 0;
        }
      }
      uVar1 = param_2[10];
      if (param_1[10] == 0) {
        if (uVar1 != 0) {
          return 0;
        }
      }
      else {
        if (uVar1 == 0) {
          return 0;
        }
        uVar2 = param_1[9];
        if (((uVar2 != param_2[9]) || (param_1[10] != uVar1)) &&
           (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
          return 0;
        }
      }
      if ((double)param_1[0xb] == (double)param_2[0xb]) {
        uVar1 = param_2[0xd];
        if (param_1[0xd] == 0) {
          if (uVar1 != 0) {
            return 0;
          }
        }
        else {
          if (uVar1 == 0) {
            return 0;
          }
          uVar2 = param_1[0xc];
          if (((uVar2 != param_2[0xc]) || (param_1[0xd] != uVar1)) &&
             (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
            return 0;
          }
        }
        uVar1 = param_2[0xf];
        if (param_1[0xf] == 0) {
          if (uVar1 != 0) {
            return 0;
          }
        }
        else {
          if (uVar1 == 0) {
            return 0;
          }
          uVar2 = param_1[0xe];
          if (((uVar2 != param_2[0xe]) || (param_1[0xf] != uVar1)) &&
             (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
            return 0;
          }
        }
        uVar1 = param_2[0x11];
        if (param_1[0x11] == 0) {
          if (uVar1 != 0) {
            return 0;
          }
        }
        else {
          if (uVar1 == 0) {
            return 0;
          }
          uVar2 = param_1[0x10];
          if (((uVar2 != param_2[0x10]) || (param_1[0x11] != uVar1)) &&
             (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
            return 0;
          }
        }
        uVar1 = param_2[0x13];
        if (param_1[0x13] == 0) {
          if (uVar1 == 0) {
            return 1;
          }
        }
        else if ((uVar1 != 0) &&
                (((uVar2 = param_1[0x12], uVar2 == param_2[0x12] && (param_1[0x13] == uVar1)) ||
                 (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 1037346c0; end: 10373486f;  */

/* WARNING: Possible PIC construction at 0x0001037346dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037346f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103734730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103734754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037347ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037347d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037347f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037347d4) */
/* WARNING: Removing unreachable block (ram,0x0001037347b0) */
/* WARNING: Removing unreachable block (ram,0x000103734758) */
/* WARNING: Removing unreachable block (ram,0x000103734734) */
/* WARNING: Removing unreachable block (ram,0x0001037346f8) */
/* WARNING: Removing unreachable block (ram,0x00010373475c) */
/* WARNING: Removing unreachable block (ram,0x00010373473c) */
/* WARNING: Removing unreachable block (ram,0x00010373476c) */
/* WARNING: Removing unreachable block (ram,0x000103734774) */
/* WARNING: Removing unreachable block (ram,0x000103734778) */
/* WARNING: Removing unreachable block (ram,0x00010373477c) */
/* WARNING: Removing unreachable block (ram,0x000103734780) */
/* WARNING: Removing unreachable block (ram,0x000103734784) */
/* WARNING: Removing unreachable block (ram,0x000103734828) */
/* WARNING: Removing unreachable block (ram,0x0001037347b8) */
/* WARNING: Removing unreachable block (ram,0x000103734838) */
/* WARNING: Removing unreachable block (ram,0x0001037347dc) */
/* WARNING: Removing unreachable block (ram,0x000103734848) */
/* WARNING: Removing unreachable block (ram,0x000103734794) */
/* WARNING: Removing unreachable block (ram,0x000103734718) */
/* WARNING: Removing unreachable block (ram,0x0001037346e0) */
/* WARNING: Removing unreachable block (ram,0x0001037347f8) */
/* WARNING: Removing unreachable block (ram,0x000103734858) */
/* WARNING: Removing unreachable block (ram,0x000103734800) */

void FUN_1037346c0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 103734870; end: 1037348ab;  */

void FUN_103734870(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  FUN_1037346c0(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 1037348ac; end: 1037348af;  */

/* WARNING: Possible PIC construction at 0x0001037346dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037346f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103734730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103734754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037347ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037347d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037347f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037347d4) */
/* WARNING: Removing unreachable block (ram,0x0001037347b0) */
/* WARNING: Removing unreachable block (ram,0x000103734758) */
/* WARNING: Removing unreachable block (ram,0x000103734734) */
/* WARNING: Removing unreachable block (ram,0x0001037346f8) */
/* WARNING: Removing unreachable block (ram,0x00010373475c) */
/* WARNING: Removing unreachable block (ram,0x00010373473c) */
/* WARNING: Removing unreachable block (ram,0x00010373476c) */
/* WARNING: Removing unreachable block (ram,0x000103734774) */
/* WARNING: Removing unreachable block (ram,0x000103734778) */
/* WARNING: Removing unreachable block (ram,0x00010373477c) */
/* WARNING: Removing unreachable block (ram,0x000103734780) */
/* WARNING: Removing unreachable block (ram,0x000103734784) */
/* WARNING: Removing unreachable block (ram,0x000103734828) */
/* WARNING: Removing unreachable block (ram,0x0001037347b8) */
/* WARNING: Removing unreachable block (ram,0x000103734838) */
/* WARNING: Removing unreachable block (ram,0x0001037347dc) */
/* WARNING: Removing unreachable block (ram,0x000103734848) */
/* WARNING: Removing unreachable block (ram,0x000103734794) */
/* WARNING: Removing unreachable block (ram,0x000103734718) */
/* WARNING: Removing unreachable block (ram,0x0001037346e0) */
/* WARNING: Removing unreachable block (ram,0x0001037347f8) */
/* WARNING: Removing unreachable block (ram,0x000103734858) */
/* WARNING: Removing unreachable block (ram,0x000103734800) */

void FUN_1037348ac(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 1037348b0; end: 1037348e7;  */

void FUN_1037348b0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_1037346c0(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 1037348e8; end: 103734967;  */

uint FUN_1037348e8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_c8 = param_1[0x13];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_28 = param_2[0x13];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_103734d5c(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 103734968; end: 103734d5b;  */

undefined1  [16] FUN_103734968(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar5 = 0x6c696e;
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x100);
  func_0x000107c5fb78(0xd00000000000002e,0x800000010f1622f0);
  func_0x000107c5fb78(*unaff_x20,unaff_x20[1]);
  func_0x000107c5fb78(0x6449736e656c202c,0xea0000000000203a);
  func_0x000107c5fb78(unaff_x20[2],unaff_x20[3]);
  func_0x000107c5fb78(0x74706d6f7270202c,0xec000000203a6449);
  func_0x000107c5fb78(unaff_x20[4],unaff_x20[5]);
  func_0x000107c5fb78(0xd000000000000017,0x800000010f162320);
  bVar3 = (*(byte *)(unaff_x20 + 6) & 1) == 0;
  uVar6 = 0x65757274;
  if (bVar3) {
    uVar6 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f162340);
  bVar3 = (*(byte *)((long)unaff_x20 + 0x31) & 1) == 0;
  uVar6 = 0x65757274;
  if (bVar3) {
    uVar6 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f162360);
  lVar4 = unaff_x20[8];
  if (lVar4 == 0) {
    lVar4 = -0x1d00000000000000;
    uVar6 = 0x6c696e;
  }
  else {
    uVar6 = unaff_x20[7];
  }
  func_0x000107c61434();
  func_0x000107c5fb78(uVar6,lVar4);
  func_0x000107c6142c(lVar4);
  func_0x000107c5fb78(0x614e736e656c202c,0xec000000203a656d);
  lVar4 = unaff_x20[10];
  if (lVar4 == 0) {
    lVar4 = -0x1d00000000000000;
    uVar6 = 0x6c696e;
  }
  else {
    uVar6 = unaff_x20[9];
  }
  func_0x000107c61434();
  func_0x000107c5fb78(uVar6,lVar4);
  func_0x000107c6142c(lVar4);
  func_0x000107c5fb78(0xd000000000000015,0x800000010f162380);
  func_0x000107c5fddc(unaff_x20[0xb],&uStack_70,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0xd000000000000011,0x800000010f1623a0);
  uVar6 = uVar5;
  if (unaff_x20[0xd] != 0) {
    uVar6 = 0x657463616465723c;
  }
  uVar1 = 0xe300000000000000;
  if (unaff_x20[0xd] != 0) {
    uVar1 = 0xea00000000003e64;
  }
  func_0x000107c5fb78(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f1623c0);
  lVar4 = unaff_x20[0xf];
  if (lVar4 == 0) {
    lVar4 = -0x1d00000000000000;
    uVar6 = 0x6c696e;
  }
  else {
    uVar6 = unaff_x20[0xe];
  }
  func_0x000107c61434();
  func_0x000107c5fb78(uVar6,lVar4);
  func_0x000107c6142c(lVar4);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f1623e0);
  lVar4 = unaff_x20[0x11];
  if (lVar4 == 0) {
    lVar4 = -0x1d00000000000000;
    uVar6 = 0x6c696e;
  }
  else {
    uVar6 = unaff_x20[0x10];
  }
  func_0x000107c61434();
  func_0x000107c5fb78(uVar6,lVar4);
  func_0x000107c6142c(lVar4);
  func_0x000107c5fb78(0xd000000000000011,0x800000010f162400);
  lVar4 = unaff_x20[0x13];
  if (lVar4 == 0) {
    lVar4 = -0x1d00000000000000;
  }
  else {
    uVar5 = unaff_x20[0x12];
  }
  func_0x000107c61434();
  func_0x000107c5fb78(uVar5,lVar4);
  func_0x000107c6142c(lVar4);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  auVar2._8_8_ = uStack_68;
  auVar2._0_8_ = uStack_70;
  return auVar2;
}



/* Entry: 103734d5c; end: 103734f87;  */

undefined8 FUN_103734d5c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
     && ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
    uVar1 = param_1[4];
    if ((((uVar1 == param_2[4]) && (param_1[5] == param_2[5])) ||
        (func_0x000107c605b8(), (uVar1 & 1) != 0)) &&
       (((((byte)param_1[6] ^ (byte)param_2[6]) & 1) == 0 &&
        (((*(byte *)((long)param_1 + 0x31) ^ *(byte *)((long)param_2 + 0x31)) & 1) == 0)))) {
      uVar1 = param_2[8];
      if (param_1[8] == 0) {
        if (uVar1 != 0) {
          return 0;
        }
      }
      else {
        if (uVar1 == 0) {
          return 0;
        }
        uVar2 = param_1[7];
        if (((uVar2 != param_2[7]) || (param_1[8] != uVar1)) &&
           (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
          return 0;
        }
      }
      uVar1 = param_2[10];
      if (param_1[10] == 0) {
        if (uVar1 != 0) {
          return 0;
        }
      }
      else {
        if (uVar1 == 0) {
          return 0;
        }
        uVar2 = param_1[9];
        if (((uVar2 != param_2[9]) || (param_1[10] != uVar1)) &&
           (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
          return 0;
        }
      }
      if ((double)param_1[0xb] == (double)param_2[0xb]) {
        uVar1 = param_2[0xd];
        if (param_1[0xd] == 0) {
          if (uVar1 != 0) {
            return 0;
          }
        }
        else {
          if (uVar1 == 0) {
            return 0;
          }
          uVar2 = param_1[0xc];
          if (((uVar2 != param_2[0xc]) || (param_1[0xd] != uVar1)) &&
             (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
            return 0;
          }
        }
        uVar1 = param_2[0xf];
        if (param_1[0xf] == 0) {
          if (uVar1 != 0) {
            return 0;
          }
        }
        else {
          if (uVar1 == 0) {
            return 0;
          }
          uVar2 = param_1[0xe];
          if (((uVar2 != param_2[0xe]) || (param_1[0xf] != uVar1)) &&
             (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
            return 0;
          }
        }
        uVar1 = param_2[0x11];
        if (param_1[0x11] == 0) {
          if (uVar1 != 0) {
            return 0;
          }
        }
        else {
          if (uVar1 == 0) {
            return 0;
          }
          uVar2 = param_1[0x10];
          if (((uVar2 != param_2[0x10]) || (param_1[0x11] != uVar1)) &&
             (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
            return 0;
          }
        }
        uVar1 = param_2[0x13];
        if (param_1[0x13] == 0) {
          if (uVar1 == 0) {
            return 1;
          }
        }
        else if ((uVar1 != 0) &&
                (((uVar2 = param_1[0x12], uVar2 == param_2[0x12] && (param_1[0x13] == uVar1)) ||
                 (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 103734f88; end: 103734f8b;  */

void FUN_103734f88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8eba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc062b0;
  func_0x000107c61520(&UNK_10dc062b0,&UNK_11068b1a8);
  puRam0000000112f8eba8 = puVar1;
  return;
}



/* Entry: 103734f8c; end: 103734fcb;  */

void FUN_103734f8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8eba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc062b0;
  func_0x000107c61520(&UNK_10dc062b0,&UNK_11068b1a8);
  puRam0000000112f8eba8 = puVar1;
  return;
}



/* Entry: 103734fcc; end: 103735057;  */

long FUN_103734fcc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103735058; end: 103735133;  */

undefined8 * FUN_103735058(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  uVar4 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar4;
  uVar8 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar8;
  uVar8 = param_2[0xd];
  uVar5 = param_2[0xe];
  param_1[0xd] = uVar8;
  param_1[0xe] = uVar5;
  uVar5 = param_2[0xf];
  uVar6 = param_2[0x10];
  param_1[0xf] = uVar5;
  param_1[0x10] = uVar6;
  uVar6 = param_2[0x11];
  uVar7 = param_2[0x12];
  param_1[0x11] = uVar6;
  param_1[0x12] = uVar7;
  uVar7 = param_2[0x13];
  param_1[0x13] = uVar7;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar7);
  return param_1;
}



/* Entry: 103735134; end: 103735297;  */

undefined8 * FUN_103735134(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_2 + 0x31);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0x10] = param_2[0x10];
  uVar1 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0x12] = param_2[0x12];
  uVar1 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103735298; end: 103735363;  */

undefined8 * FUN_103735298(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_2 + 0x31);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[10];
  uVar2 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[0xb] = param_2[0xb];
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xf];
  uVar2 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0x11];
  uVar2 = param_1[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0x13];
  uVar2 = param_1[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103735364; end: 103735443;  */

int FUN_103735364(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x28] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103735444; end: 10373549f; -[_TtC40SCMemPlatBackupRecurringCheckinScheduler16CheckinProcessor init] */

void FUN_103735444(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupRecurringCheckinScheduler.CheckinProcessor",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103735470);
  (*pcVar1)();
}



/* Entry: 1037354a0; end: 1037354d7; -[_TtC40SCMemPlatBackupRecurringCheckinScheduler16CheckinProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037354bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037354c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037354a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8ebb0));
  return;
}



/* Entry: 1037354d8; end: 1037354f7;  */

void FUN_1037354d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128e7e60);
  return;
}



/* Entry: 1037354f8; end: 10373560f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037354f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar2 = &puStack_80;
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112f8ebb0);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(param_1);
    func_0x0001000d224c(&lStack_50);
    func_0x000107c61574(uVar3);
    if (lStack_50 != 0) {
      puVar1 = &UNK_11068b380;
      func_0x000107c613fc(&UNK_11068b380,0x20,7);
      *(undefined8 *)(puVar1 + 0x10) = param_2;
      *(undefined8 *)(puVar1 + 0x18) = param_3;
      pcStack_60 = FUN_103735854;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f3aa0;
      puStack_68 = &UNK_11068b398;
      puStack_58 = puVar1;
      func_0x000107c60bc4(&puStack_80);
      puVar1 = puStack_58;
      func_0x000107c6157c(param_3);
      func_0x000107c61574(puVar1);
      func_0x000107c518c0(lStack_50);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c615e8(lStack_50);
    }
  }
  return;
}



/* Entry: 103735610; end: 103735717; -[_TtC40SCMemPlatBackupRecurringCheckinScheduler16CheckinProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_103735610(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  
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
  puVar2 = &UNK_11068b2e0;
  func_0x000107c613fc(&UNK_11068b2e0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  pcVar3 = FUN_103735718;
  FUN_103735720(FUN_103735718,puVar2);
  func_0x000107c61574(puVar2);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 103735718; end: 10373571f;  */

void FUN_103735718(undefined8 param_1,long param_2)

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



/* Entry: 103735720; end: 10373582b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103735720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  puVar1 = &UNK_11068b308;
  func_0x000107c613fc(&UNK_11068b308,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_11068b330;
  func_0x000107c613fc(&UNK_11068b330,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcStack_58 = FUN_10373582c;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_11068b348;
  ppuVar3 = &puStack_78;
  puStack_50 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar1 = puStack_50;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uStack_48);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uStack_48);
  return 0;
}



/* Entry: 10373582c; end: 103735853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10373582c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar4 = &puStack_80;
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(lVar2 + _DAT_112f8ebb0);
    func_0x000107c6157c(uVar6);
    func_0x000107c61170(lVar2);
    func_0x0001000d224c(&lStack_50);
    func_0x000107c61574(uVar6);
    if (lStack_50 != 0) {
      puVar3 = &UNK_11068b380;
      func_0x000107c613fc(&UNK_11068b380,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = uVar1;
      *(undefined8 *)(puVar3 + 0x18) = uVar5;
      pcStack_60 = FUN_103735854;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f3aa0;
      puStack_68 = &UNK_11068b398;
      puStack_58 = puVar3;
      func_0x000107c60bc4(&puStack_80);
      puVar3 = puStack_58;
      func_0x000107c6157c(uVar5);
      func_0x000107c61574(puVar3);
      func_0x000107c518c0(lStack_50);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(lStack_50);
    }
  }
  return;
}



/* Entry: 103735854; end: 10373587b;  */

void FUN_103735854(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0,0);
  return;
}



/* Entry: 10373587c; end: 103735883;  */

void FUN_10373587c(long param_1,long param_2)

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



/* Entry: 103735884; end: 10373591b;  */

void FUN_103735884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_11068b3d0;
  func_0x000107c613fc(&UNK_11068b3d0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103735b54,puVar1);
  return;
}



/* Entry: 10373591c; end: 103735b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10373591c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar6 = puStack_80;
  lVar1 = *(long *)(puStack_80 + _DAT_113080730);
  func_0x000107c61174();
  func_0x000107c61170(puVar6);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4a598();
    if ((int)lVar1 != 0) {
      func_0x0001000285a8(0x112e287d0,&UNK_10da10c10);
      func_0x000100083b20(&puStack_80);
      puVar6 = puStack_80;
      puVar3 = puStack_80;
      func_0x000107c4cab4();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puVar4 = puVar3;
      func_0x0001000bda74();
      func_0x000107c61170(puVar3);
      func_0x000100083b20(&puStack_80);
      uVar7 = *(undefined8 *)(puStack_80 + _DAT_112ff4aa8);
      func_0x000107c6157c(uVar7);
      func_0x000107c61170(puStack_80);
      puVar3 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      puVar6 = &UNK_11068b418;
      func_0x000107c613fc(&UNK_11068b418,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar4;
      *(undefined8 *)(puVar6 + 0x18) = uVar7;
      pcStack_60 = FUN_103735bf0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_101443eec;
      puStack_68 = &UNK_11068b430;
      puStack_58 = puVar6;
      func_0x000107c60bc4(&puStack_80);
      puVar6 = puStack_58;
      func_0x000107c6157c(uVar7);
      func_0x000107c6157c(puVar4);
      func_0x000107c61574(puVar6);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      func_0x0001000a0a8c(0);
      puVar6 = puVar3;
      func_0x000100a0dc54(puVar3,0xd000000000000025,0x800000010f162460);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61574(uVar7);
      func_0x000107c61574(puVar4);
      goto LAB_103735b34;
    }
    func_0x000107c615e8(lVar2);
  }
  puVar6 = (undefined *)0x0;
LAB_103735b34:
  *param_1 = puVar6;
  return;
}



/* Entry: 103735b54; end: 103735b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103735b54(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  func_0x000100083b20(&puStack_80,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  puVar6 = puStack_80;
  lVar1 = *(long *)(puStack_80 + _DAT_113080730);
  func_0x000107c61174();
  func_0x000107c61170(puVar6);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4a598();
    if ((int)lVar1 != 0) {
      func_0x0001000285a8(0x112e287d0,&UNK_10da10c10);
      func_0x000100083b20(&puStack_80);
      puVar6 = puStack_80;
      puVar3 = puStack_80;
      func_0x000107c4cab4();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puVar4 = puVar3;
      func_0x0001000bda74();
      func_0x000107c61170(puVar3);
      func_0x000100083b20(&puStack_80);
      uVar7 = *(undefined8 *)(puStack_80 + _DAT_112ff4aa8);
      func_0x000107c6157c(uVar7);
      func_0x000107c61170(puStack_80);
      puVar3 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      puVar6 = &UNK_11068b418;
      func_0x000107c613fc(&UNK_11068b418,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar4;
      *(undefined8 *)(puVar6 + 0x18) = uVar7;
      pcStack_60 = FUN_103735bf0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_101443eec;
      puStack_68 = &UNK_11068b430;
      puStack_58 = puVar6;
      func_0x000107c60bc4(&puStack_80);
      puVar6 = puStack_58;
      func_0x000107c6157c(uVar7);
      func_0x000107c6157c(puVar4);
      func_0x000107c61574(puVar6);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      func_0x0001000a0a8c(0);
      puVar6 = puVar3;
      func_0x000100a0dc54(puVar3,0xd000000000000025,0x800000010f162460);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61574(uVar7);
      func_0x000107c61574(puVar4);
      goto LAB_103735b34;
    }
    func_0x000107c615e8(lVar2);
  }
  puVar6 = (undefined *)0x0;
LAB_103735b34:
  *param_1 = puVar6;
  return;
}



/* Entry: 103735b70; end: 103735bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103735b70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = 0;
  FUN_1037354d8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8ebb0) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112f8ebb8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103735bf0; end: 103735c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103735bf0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_1037354d8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f8ebb0) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112f8ebb8) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  return;
}


