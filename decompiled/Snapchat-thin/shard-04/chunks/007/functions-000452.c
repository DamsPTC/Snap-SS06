/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103796280; end: 1037963b3;  */

undefined * FUN_103796280(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (1 < param_1) {
    if (param_1 != 2) {
      func_0x000107c60614(&UNK_1106c9200,&stack0xffffffffffffffc8,&UNK_1106c9200,
                          PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1037963b4);
      (*pcVar6)();
    }
    puVar7 = (undefined *)0x112f90670;
    func_0x0001000285a8(0x112f90670,&UNK_10dc08bd0);
    func_0x000107c61534();
    *(undefined8 *)(puVar7 + 0x18) = 4;
    *(undefined8 *)(puVar7 + 0x10) = 2;
    *(undefined8 *)(puVar7 + 0x20) = 0x736469;
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined8 *)(puVar7 + 0x28) = 0xe300000000000000;
    *(undefined **)(puVar7 + 0x30) = puVar13;
    *(undefined8 *)(puVar7 + 0x38) = 0;
    puVar7[0x40] = 3;
    *(undefined8 *)(puVar7 + 0x48) = 0x6e65697069636572;
    *(undefined8 *)(puVar7 + 0x50) = 0xea00000000007374;
    FUN_103796550();
    *(undefined **)(puVar7 + 0x58) = puVar13;
    *(undefined8 *)(puVar7 + 0x60) = 0;
    puVar7[0x68] = 4;
    puVar13 = puVar7;
    FUN_103796550(puVar7);
    func_0x000107c61588(puVar7);
    uVar8 = 0x112f90678;
    func_0x0001000285a8(0x112f90678,&UNK_10dc08bd8);
    func_0x000107c61408(puVar7 + 0x20,2,uVar8);
    return puVar13;
  }
  puVar13 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e3b770,&UNK_10da27710);
    puVar9 = puVar13;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar14 = puVar7 + 0x40;
    do {
      uVar2 = *(ulong *)(puVar14 + -0x20);
      uVar3 = *(ulong *)(puVar14 + -0x18);
      uVar8 = *(undefined8 *)(puVar14 + -0x10);
      uVar4 = *(undefined8 *)(puVar14 + -8);
      uVar5 = *puVar14;
      func_0x000107c61434(uVar3);
      func_0x000101edf31c(uVar8,uVar4,uVar5);
      uVar10 = uVar2;
      uVar11 = uVar3;
      func_0x000100029284();
      if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103796668);
        (*pcVar6)();
      }
      uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar9 + uVar11 + 0x40) =
           *(ulong *)(puVar9 + uVar11 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar10 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar12 = (undefined8 *)(*(long *)(puVar9 + 0x38) + uVar10 * 0x18);
      *puVar12 = uVar8;
      puVar12[1] = uVar4;
      *(undefined1 *)(puVar12 + 2) = uVar5;
      if (SCARRY8(*(long *)(puVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10379666c);
        (*pcVar6)();
      }
      *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
      puVar13 = puVar13 + -1;
      puVar14 = puVar14 + 0x28;
    } while (puVar13 != (undefined *)0x0);
    func_0x000107c61574(puVar9);
  }
  return puVar9;
}



/* Entry: 1037963b4; end: 103796413; -[_TtC20SendToRankingRecents21ModelSyncJobProcessor init] */

void FUN_1037963b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToRankingRecents.ModelSyncJobProcessor",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037963e0);
  (*pcVar1)();
}



/* Entry: 103796414; end: 10379647b; -[_TtC20SendToRankingRecents21ModelSyncJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103796450: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103796454) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103796414(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f91fa8));
  FUN_103796b9c(param_1 + _DAT_112f91fb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f91fb8));
  return;
}



/* Entry: 10379647c; end: 10379649b;  */

void FUN_10379647c(void)

{
  func_0x000107c61168(&PTR_PTR_1128ea188);
  return;
}



/* Entry: 10379649c; end: 10379654f;  */

void FUN_10379649c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  lVar1 = param_6 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_6 + 0x30) + param_1 * 0x18);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  *(undefined1 *)(puVar3 + 2) = param_4;
  *(undefined8 *)(*(long *)(param_6 + 0x38) + param_1 * 8) = param_5;
  if (!SCARRY8(*(long *)(param_6 + 0x10),1)) {
    *(long *)(param_6 + 0x10) = *(long *)(param_6 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1037964ec);
  (*pcVar2)();
}



/* Entry: 103796550; end: 10379666b;  */

undefined * FUN_103796550(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar12 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e3b770,&UNK_10da27710);
    puVar8 = puVar12;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar13 = (undefined1 *)(param_1 + 0x40);
    do {
      uVar2 = *(ulong *)(puVar13 + -0x20);
      uVar4 = *(ulong *)(puVar13 + -0x18);
      uVar3 = *(undefined8 *)(puVar13 + -0x10);
      uVar5 = *(undefined8 *)(puVar13 + -8);
      uVar6 = *puVar13;
      func_0x000107c61434(uVar4);
      func_0x000101edf31c(uVar3,uVar5,uVar6);
      uVar9 = uVar2;
      uVar10 = uVar4;
      func_0x000100029284();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x103796668);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      puVar11 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x18);
      *puVar11 = uVar3;
      puVar11[1] = uVar5;
      *(undefined1 *)(puVar11 + 2) = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10379666c);
        (*pcVar7)();
      }
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar12 = puVar12 + -1;
      puVar13 = puVar13 + 0x28;
    } while (puVar12 != (undefined *)0x0);
    func_0x000107c61574(puVar8);
  }
  return puVar8;
}



/* Entry: 10379666c; end: 10379667f;  */

undefined * FUN_10379666c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f92010,&UNK_10dc0aee8);
    puVar5 = puVar9;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar1 = puVar11[-3];
      uVar2 = puVar11[-2];
      uVar3 = *(undefined1 *)(puVar11 + -1);
      uVar10 = *puVar11;
      FUN_103765724(uVar1,uVar2,uVar3);
      func_0x000107c61434(uVar10);
      uVar6 = uVar1;
      uVar7 = uVar2;
      FUN_10378de8c(uVar1,uVar2,uVar3);
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103796790);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar8 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x18);
      *puVar8 = uVar1;
      puVar8[1] = uVar2;
      *(undefined1 *)(puVar8 + 2) = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103796794);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar11 = puVar11 + 4;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 103796680; end: 103796793;  */

undefined * FUN_103796680(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar9;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar1 = puVar11[-3];
      uVar2 = puVar11[-2];
      uVar3 = *(undefined1 *)(puVar11 + -1);
      uVar10 = *puVar11;
      FUN_103765724(uVar1,uVar2,uVar3);
      func_0x000107c61434(uVar10);
      uVar6 = uVar1;
      uVar7 = uVar2;
      FUN_10378de8c(uVar1,uVar2,uVar3);
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103796790);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar8 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x18);
      *puVar8 = uVar1;
      puVar8[1] = uVar2;
      *(undefined1 *)(puVar8 + 2) = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103796794);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar11 = puVar11 + 4;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 103796794; end: 1037967f7;  */

ulong FUN_103796794(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 1037967f8; end: 103796a77;  */

undefined8 FUN_1037967f8(ulong param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lStack_68;
  
  puVar2 = &UNK_110692270;
  lVar8 = 0x18;
  func_0x000107c613fc(&UNK_110692270,0x18,7);
  *(long *)(puVar2 + 0x10) = param_3;
  lVar3 = param_3;
  func_0x000107c60bc4();
  func_0x000103aa60ac();
  uVar10 = *(ulong *)(lVar3 + 0x10);
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(lVar3 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103796a44);
        (*pcVar1)();
      }
      lVar11 = *(long *)(lVar3 + uVar12 * 8 + 0x20);
      if (lVar11 == 0) {
        uVar14 = 0x7265746c6966;
LAB_1037968d0:
        uVar14 = uVar14 | 0x6e69000000000000;
        lVar13 = -0x16ffffffffffff99;
      }
      else {
        if (lVar11 != 1) {
          if (lVar11 != 2) {
            func_0x000107c61574(puVar2);
            func_0x000107c60bd0(param_3);
            lStack_68 = lVar11;
            func_0x000107c60614(&UNK_1106c9200,&lStack_68,&UNK_1106c9200,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103796a78);
            (*pcVar1)();
          }
          uVar14 = 0x6b6e61726572;
          goto LAB_1037968d0;
        }
        lVar13 = -0x1900000000000000;
        uVar14 = 0x676e69726f6373;
      }
      uVar4 = param_1;
      func_0x000107c4a834();
      func_0x000107c61180();
      if (uVar4 != 0) {
        uVar5 = uVar4;
        func_0x000107c5faec();
        func_0x000107c61170(uVar4);
        if ((uVar14 == uVar5) && (lVar13 == lVar8)) {
          func_0x000107c6142c(lVar3);
          func_0x000107c6142c(lVar13);
          lVar3 = lVar8;
        }
        else {
          lVar9 = lVar13;
          func_0x000107c605b8(uVar14,lVar13,uVar5,lVar8,0);
          func_0x000107c6142c(lVar13);
          func_0x000107c6142c(lVar8);
          lVar8 = lVar9;
          if ((uVar14 & 1) == 0) goto LAB_103796868;
        }
        func_0x000107c6142c(lVar3);
        puVar6 = &UNK_110692298;
        func_0x000107c613fc(&UNK_110692298,0x30,7);
        *(undefined8 *)(puVar6 + 0x10) = param_2;
        *(long *)(puVar6 + 0x18) = lVar11;
        *(code **)(puVar6 + 0x20) = FUN_103796a78;
        *(undefined **)(puVar6 + 0x28) = puVar2;
        func_0x000107c61174();
        func_0x000107c6157c(puVar2);
        puVar7 = (undefined *)0x0;
        func_0x0001001ca524(0,0,100,4,0,0,&UNK_10dc0adc0,puVar6,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(puVar2);
        func_0x000107c61574(puVar6);
        puVar2 = puVar7;
        goto LAB_103796a18;
      }
      func_0x000107c6142c(lVar13);
LAB_103796868:
      uVar12 = uVar12 + 1;
    } while (uVar10 != uVar12);
  }
  func_0x000107c6142c(lVar3);
  (**(code **)(param_3 + 0x10))(param_3,2,0);
LAB_103796a18:
  func_0x000107c61574(puVar2);
  return 0;
}



/* Entry: 103796a78; end: 103796a7f;  */

void FUN_103796a78(undefined8 param_1,long param_2)

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



/* Entry: 103796a80; end: 103796af7;  */

void FUN_103796a80(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x200;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103796af8;
  plVar5[0x3b] = lVar2;
  plVar5[0x3c] = lVar4;
  plVar5[0x39] = lVar1;
  plVar5[0x3a] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037954a4,0,0);
  return;
}



/* Entry: 103796af8; end: 103796b73;  */

void FUN_103796af8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103796b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103796b74; end: 103796b83;  */

long FUN_103796b74(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 103796b84; end: 103796b9b;  */

void FUN_103796b84(long param_1)

{
  FUN_103796b9c(param_1 + 0x20);
  return;
}



/* Entry: 103796b9c; end: 103796d43;  */

void FUN_103796b9c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103796bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103796d44; end: 103796d67;  */

void FUN_103796d44(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000103796b34();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103796d68; end: 103796d6b;  */

void FUN_103796d68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f92008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0ae7c;
  func_0x000107c61520(&UNK_10dc0ae7c,&UNK_1106923a8);
  puRam0000000112f92008 = puVar1;
  return;
}



/* Entry: 103796d6c; end: 103796dab;  */

void FUN_103796d6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f92008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0ae7c;
  func_0x000107c61520(&UNK_10dc0ae7c,&UNK_1106923a8);
  puRam0000000112f92008 = puVar1;
  return;
}



/* Entry: 103796dac; end: 103796dbb;  */

void FUN_103796dac(long param_1)

{
  FUN_103796b9c(param_1 + 0x20);
  return;
}



/* Entry: 103796dbc; end: 1037971bb;  */

void FUN_103796dbc(ulong param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined1 auStack_a0 [8];
  char *pcStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_3 != 0) {
    lVar3 = param_3;
    lStack_78 = lVar2;
    func_0x000103aa60ac();
    pcStack_88 = *(code **)(lVar3 + 0x10);
    uStack_7c = *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8;
    lStack_70 = lVar3;
    if (pcStack_88 != (code *)0x0) {
      uVar8 = 0;
      lStack_90 = lVar3 + 0x20;
      pcStack_98 = "FeaturesSyncJobProcessor";
      do {
        if (*(ulong *)(lStack_70 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x103797198);
          (*pcVar11)();
        }
        lStack_68 = *(long *)(lStack_90 + uVar8 * 8);
        if (lStack_68 == 0) {
          uVar7 = 0x7265746c6966;
LAB_103796e9c:
          uVar7 = uVar7 | 0x6e69000000000000;
          uVar12 = 0xe900000000000067;
        }
        else {
          if (lStack_68 == 2) {
            uVar7 = 0x6b6e61726572;
            goto LAB_103796e9c;
          }
          if (lStack_68 != 1) {
            func_0x000107c60614(&UNK_1106c9200,&lStack_68,&UNK_1106c9200,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1037971bc);
            (*pcVar11)();
          }
          uVar12 = 0xe700000000000000;
          uVar7 = 0x676e69726f6373;
        }
        uVar8 = uVar8 + 1;
        uVar4 = param_1;
        func_0x000107c614f0(param_1);
        (**(code **)(param_2 + 0x10))();
        uVar5 = 0xd000000000000015;
        FUN_1037971bc(0xd000000000000015,(ulong)pcStack_98 | 0x8000000000000000,uVar7,uVar12,uVar4);
        func_0x000107c6142c(uVar12);
        func_0x0001000295c4(0);
        lVar2 = lStack_78;
        (**(code **)(lVar10 + 0x68))(puVar9,uStack_7c,lStack_78);
        puVar6 = puVar9;
        func_0x000107c5fff0(puVar9);
        (**(code **)(lVar10 + 8))(puVar9,lVar2);
        func_0x000107c5c2c0(param_3);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(puVar6);
      } while (pcStack_88 != (code *)uVar8);
    }
    func_0x000107c6142c(lStack_70);
    func_0x000107c614f0();
    uVar8 = param_1;
    (**(code **)(param_2 + 0x18))();
    uVar12 = 0xd000000000000018;
    FUN_1037971bc(0xd000000000000018,0x800000010f164350,0,0,uVar8);
    uVar5 = 0;
    func_0x0001000295c4();
    lVar2 = lStack_78;
    uVar1 = uStack_7c;
    pcStack_88 = *(code **)(lVar10 + 0x68);
    (*pcStack_88)(puVar9,uStack_7c,lStack_78);
    puVar6 = puVar9;
    lStack_70 = uVar5;
    func_0x000107c5fff0(puVar9);
    pcVar11 = *(code **)(lVar10 + 8);
    (*pcVar11)(puVar9,lVar2);
    func_0x000107c5c2c0(param_3);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(puVar6);
    uVar8 = param_1;
    (**(code **)(param_2 + 0x28))(param_1,param_2);
    if ((uVar8 & 1) == 0) {
      puVar6 = (undefined1 *)0xd000000000000022;
      func_0x000107c5fadc(0xd000000000000022,0x800000010f164320);
      func_0x000107c3f4ac(param_3);
      func_0x000107c615e8(param_3);
    }
    else {
      (**(code **)(param_2 + 0x60))(param_1,param_2);
      uVar12 = 0xd000000000000022;
      FUN_1037971bc(0xd000000000000022,0x800000010f164320,0,0,param_1);
      (*pcStack_88)(puVar9,uVar1,lVar2);
      puVar6 = puVar9;
      func_0x000107c5fff0(puVar9);
      (*pcVar11)(puVar9,lVar2);
      func_0x000107c5c2c0(param_3);
      func_0x000107c615e8(param_3);
      func_0x000107c61170(uVar12);
    }
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 1037971bc; end: 10379733b;  */

undefined *
FUN_1037971bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b7248;
  func_0x000107c610f8(PTR_PTR_1126b7248);
  func_0x000107c453e4();
  if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103797334);
    (*pcVar1)();
  }
  if (param_5 >> 0x20 == 0) {
    func_0x000107c57d34();
    puVar3 = PTR_PTR_1126b7238;
    func_0x000107c610f8(PTR_PTR_1126b7238);
    func_0x000107c453e4();
    func_0x000107c57c1c();
    puVar4 = PTR_PTR_1126b7240;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c56a40();
    puVar5 = puVar4;
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c3d93c();
      func_0x000107c61170(puVar5);
      puVar5 = PTR_PTR_1126b7228;
      func_0x000107c610f8(PTR_PTR_1126b7228);
      func_0x000107c453e4();
      func_0x000107c55974();
      func_0x000107c55958(puVar5);
      func_0x000107c54734(puVar5);
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c5597c(puVar5);
      func_0x000107c61170(param_1);
      uVar6 = 0;
      if (param_4 != 0) {
        func_0x000107c5fadc(param_3,param_4);
        uVar6 = param_3;
      }
      func_0x000107c5596c(puVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c55968(puVar5);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      return puVar5;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10379733c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103797338);
  (*pcVar1)();
}



/* Entry: 10379733c; end: 10379746f;  */

void FUN_10379733c(undefined8 param_1,ulong param_2,undefined8 param_3,char param_4)

{
  ulong uVar1;
  
  if (param_4 != '\0') {
    if (param_4 == '\x01') {
      func_0x000107c60690(1);
      uVar1 = 0;
      if ((param_2 & 0x7fffffffffffffff) != 0) {
        uVar1 = param_2;
      }
      func_0x000107c606a0(uVar1);
    }
    else {
      func_0x000107c60690(2);
      func_0x000107c60694((uint)param_2 & 1);
    }
    return;
  }
  func_0x000107c60690(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,param_2,param_3);
  return;
}



/* Entry: 103797470; end: 103797487;  */

void FUN_103797470(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  func_0x000107c6068c(auStack_78,0);
  if ((char)uVar3 == '\0') {
    func_0x000107c60690(0);
    func_0x000107c5fb58(auStack_78,uVar1,uVar2);
  }
  else if ((char)uVar3 == '\x01') {
    func_0x000107c60690(1);
    uVar2 = 0;
    if ((uVar1 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar1;
    }
    func_0x000107c606a0(uVar2);
  }
  else {
    func_0x000107c60690(2);
    func_0x000107c60694((uint)uVar1 & 1);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 103797488; end: 1037974db;  */

void FUN_103797488(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  func_0x000107c6068c(auStack_78);
  FUN_10379733c(auStack_78,uVar1,uVar2,uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 1037974dc; end: 1037975a7;  */

double FUN_1037974dc(double *param_1,double *param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  char cVar4;
  double dVar5;
  
  dVar5 = *param_1;
  dVar3 = *param_2;
  cVar4 = *(char *)(param_2 + 2);
  if (*(char *)(param_1 + 2) != '\0') {
    uVar1 = (uint)(dVar5 == dVar3);
    if (cVar4 != '\x01') {
      uVar1 = 0;
    }
    uVar2 = SUB84(dVar3,0) ^ SUB84(dVar5,0) ^ 1;
    if (cVar4 != '\x02') {
      uVar2 = 0;
    }
    if (*(char *)(param_1 + 2) != '\x01') {
      uVar1 = uVar2;
    }
    return (double)(ulong)(uVar1 & 1);
  }
  if (cVar4 != '\0') {
    return 0.0;
  }
  if ((dVar5 == dVar3) && (param_1[1] == param_2[1])) {
    return 4.94065645841247e-324;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(dVar5,param_1[1],dVar3,param_2[1],0);
  return dVar5;
}



/* Entry: 1037975a8; end: 1037975e7;  */

void FUN_1037975a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f92088 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0afa0;
  func_0x000107c61520(&UNK_10dc0afa0,&UNK_110692568);
  puRam0000000112f92088 = puVar1;
  return;
}



/* Entry: 1037975e8; end: 103797603;  */

undefined * FUN_1037975e8(void)

{
  return PTR___sSbs35_ExpressibleByBuiltinBooleanLiteralsWP_11034dd58;
}



/* Entry: 103797604; end: 103797643;  */

void FUN_103797604(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f92090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0b078;
  func_0x000107c61520(&UNK_10dc0b078,&UNK_110692568);
  puRam0000000112f92090 = puVar1;
  return;
}



/* Entry: 103797644; end: 103797653;  */

undefined * FUN_103797644(void)

{
  return PTR___sSSs34_ExpressibleByBuiltinStringLiteralsWP_11034dad8;
}



/* Entry: 103797654; end: 103797693;  */

void FUN_103797654(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f92098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0b0b8;
  func_0x000107c61520(&UNK_10dc0b0b8,&UNK_110692568);
  puRam0000000112f92098 = puVar1;
  return;
}



/* Entry: 103797694; end: 1037976bb;  */

undefined * FUN_103797694(void)

{
  return PTR___sSSs51_ExpressibleByBuiltinExtendedGraphemeClusterLiteralsWP_11034dae8;
}



/* Entry: 1037976bc; end: 103797757;  */

undefined8 * FUN_1037976bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00010376df2c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 103797758; end: 10379779b;  */

undefined8 * FUN_103797758(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_10376df18(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10379779c; end: 10379785f;  */

int FUN_10379779c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103797860; end: 103797a3f;  */

void FUN_103797860(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c3eb88();
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1037978fc);
    (*pcVar1)();
  }
  if (lVar2 == 0) {
    func_0x0001011eb06c(0);
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    func_0x000107c3eb84();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103797900);
      (*pcVar1)();
    }
    func_0x0001011eb06c(0);
    func_0x000107c600f8(unaff_x20);
    func_0x000107c61170(unaff_x20);
  }
  return;
}



/* Entry: 103797a40; end: 103797aff;  */

void FUN_103797a40(undefined8 param_1,undefined *param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5ed50();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  if ((param_4 & 1) == 0) {
    func_0x000107c61174(param_2);
  }
  else {
    func_0x0001011eb06c(0);
    param_2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  func_0x000107c600f4(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170(param_2);
  (**(code **)(lVar2 + 0x20))
            (param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 103797b00; end: 103797b07;  */

void FUN_103797b00(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 103797b08; end: 103797b67;  */

void FUN_103797b08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_103797a40(uVar1,param_2,*(undefined1 *)(unaff_x20 + 2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103797b68; end: 103797b6f;  */

undefined8 FUN_103797b68(void)

{
  return 2;
}



/* Entry: 103797b70; end: 103797bbb;  */

undefined8 * FUN_103797b70(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  
  func_0x000107c61520(&UNK_10dc0b2a8,param_1);
  puVar1 = unaff_x20;
  func_0x0001020fc1f8();
  func_0x000107c61170(*unaff_x20);
  return puVar1;
}



/* Entry: 103797bbc; end: 103797bbf;  */

void FUN_103797bbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSTsE13_copyContents12initializing8IteratorQz_SitSry7ElementQzG_tF_11034db60)();
  return;
}



/* Entry: 103797bc0; end: 103797bdf;  */

void FUN_103797bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5fbfc(param_1,param_2,param_4,param_3);
  return;
}



/* Entry: 103797be0; end: 103797c33;  */

void FUN_103797be0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb82ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___sSksSx5IndexRpzSnyABG7IndicesRtzSiAA_6StrideRTzrlE5index_8offsetByA2B_SitF_11034df70)();
  return;
}



/* Entry: 103797c34; end: 103797c7b;  */

void FUN_103797c34(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10dc0b168;
  func_0x000107c61520(&DAT_10dc0b168,param_2);
  FUN_103797c7c(param_2,puVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 103797c7c; end: 103797c8b;  */

void FUN_103797c7c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb82e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSl5countSivgTj_11034dfa8)
            (param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 8) + 8) + 8));
  return;
}



/* Entry: 103797c8c; end: 103797d1b;  */

code * FUN_103797c8c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0xf648);
  }
  *param_1 = lVar1;
  uVar4 = *param_2;
  puVar2 = &DAT_10dc0b168;
  func_0x000107c61520(&DAT_10dc0b168,param_3);
  lVar3 = lVar1;
  FUN_103797d48(lVar1,uVar4,param_3,puVar2);
  *(long *)(lVar1 + 0x20) = lVar3;
  return FUN_103797d1c;
}



/* Entry: 103797d1c; end: 103797d47;  */

void FUN_103797d1c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 103797d48; end: 103797df7;  */

undefined1  [16] FUN_103797d48(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar1 = 0;
  func_0x000107c614b8(0,*(undefined8 *)(*(long *)(*(long *)(*(long *)(param_4 + 8) + 8) + 8) + 8),
                      param_3,PTR___sSTTL_11034db40,PTR___s7ElementSTTl_11034d628);
  lVar2 = *(long *)(lVar1 + -8);
  *param_1 = lVar1;
  param_1[1] = lVar2;
  lVar1 = *(long *)(lVar2 + 0x40);
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(lVar1,0x7e0b);
  }
  param_1[2] = lVar1;
  FUN_103797f8c(lVar1,param_2,param_3,param_4);
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = FUN_103797df8;
  return auVar3;
}



/* Entry: 103797df8; end: 103797e27;  */

void FUN_103797df8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  (**(code **)(param_1[1] + 8))(uVar1,*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 103797e28; end: 103797e2b;  */

void FUN_103797e28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb83cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSlss5SliceVyxG11SubSequenceRtzrlEyACSny5IndexQzGcig_11034e058)();
  return;
}



/* Entry: 103797e2c; end: 103797e77;  */

void FUN_103797e2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dc0b1f8;
  func_0x000107c61520(&UNK_10dc0b1f8,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdb82b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSksSx5IndexRpzSnyABG7IndicesRtzSiAA_6StrideRTzrlE7indicesACvg_11034df78)
            (param_1,param_2,puVar1,PTR___sSiSxsWP_11034dee8);
  return;
}



/* Entry: 103797e78; end: 103797e87;  */

undefined1 FUN_103797e78(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x10);
}



/* Entry: 103797e88; end: 103797ecf;  */

void FUN_103797e88(void)

{
  FUN_1037985a4();
  return;
}



/* Entry: 103797ed0; end: 103797f03;  */

void FUN_103797ed0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar1 = PTR___sSlTL_11034dfe8;
  uVar3 = 0;
  func_0x000107c614b8(0,param_4,param_3,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  func_0x000107c614b4(param_4,param_3,uVar3,puVar1,PTR___sSl5IndexSl_SLTn_11034dfa0);
  uVar4 = param_2;
  func_0x000107c5fa90(param_2,param_1,uVar3,param_4);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010943f0);
    (*pcVar2)();
  }
  lVar5 = 0;
  func_0x000107c5ff1c(0,uVar3,param_4);
  uVar4 = param_1 + *(int *)(lVar5 + 0x24);
  func_0x000107c5fa90(uVar4,param_2 + (long)*(int *)(lVar5 + 0x24),uVar3,param_4);
  if ((uVar4 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010943f4);
  (*pcVar2)();
}



/* Entry: 103797f04; end: 103797f87;  */

void FUN_103797f04(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [32];
  
  func_0x000107c5ed4c(auStack_50);
  uVar1 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  lVar3 = *(long *)(param_2 + 0x10);
  uVar2 = param_1;
  func_0x000107c6147c(param_1,auStack_50,uVar1,lVar3,6);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1,(uint)uVar2 ^ 1,1,lVar3);
  return;
}



/* Entry: 103797f88; end: 103797f8b;  */

void FUN_103797f88(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [32];
  
  func_0x000107c5ed4c(auStack_50);
  uVar1 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  lVar3 = *(long *)(param_2 + 0x10);
  uVar2 = param_1;
  func_0x000107c6147c(param_1,auStack_50,uVar1,lVar3,6);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1,(uint)uVar2 ^ 1,1,lVar3);
  return;
}



/* Entry: 103797f8c; end: 10379805b;  */

void FUN_103797f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [32];
  
  uVar2 = param_3;
  (**(code **)(param_4 + 0x10))(param_3,param_4);
  uVar1 = uVar2;
  func_0x000107c4d9a0();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c60234(auStack_60,uVar1);
  func_0x000107c615e8(uVar1);
  uVar2 = 0;
  func_0x000107c614b8(0,*(undefined8 *)(*(long *)(*(long *)(*(long *)(param_4 + 8) + 8) + 8) + 8),
                      param_3,PTR___sSTTL_11034db40,PTR___s7ElementSTTl_11034d628);
  func_0x000107c6147c(param_1,auStack_60,PTR___sypN_11034f1a8 + 8,uVar2,7);
  return;
}



/* Entry: 10379805c; end: 103798087;  */

void FUN_10379805c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dc0b1f8;
  func_0x000107c61520();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 103798088; end: 1037980a7;  */

void FUN_103798088(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dc0b388,param_1);
  return;
}



/* Entry: 1037980a8; end: 1037980cb;  */

void FUN_1037980a8(void)

{
  FUN_1037981d0(0x112d4f688,PTR___sSnyxGSksSxRzSZ6StrideRpzrlMc_11034e120);
  return;
}



/* Entry: 1037980cc; end: 103798113;  */

void FUN_1037980cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = &UNK_10dc0b1f8;
  func_0x000107c61520();
  puStack_28 = puVar1;
  func_0x000107c61520(PTR___ss5SliceVyxGSksSkRzrlMc_11034eed8,param_1,&puStack_28);
  return;
}



/* Entry: 103798114; end: 103798123;  */

void FUN_103798114(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dc0b2a8,param_1);
  return;
}



/* Entry: 103798124; end: 103798147;  */

void FUN_103798124(void)

{
  FUN_1037981d0(0x112f920a0,PTR___sSnyxGSKsSxRzSZ6StrideRpzrlMc_11034e110);
  return;
}



/* Entry: 103798148; end: 10379818f;  */

void FUN_103798148(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = &UNK_10dc0b248;
  func_0x000107c61520();
  puStack_28 = puVar1;
  func_0x000107c61520(PTR___ss5SliceVyxGSKsSKRzrlMc_11034eec8,param_1,&puStack_28);
  return;
}



/* Entry: 103798190; end: 1037981ab;  */

void FUN_103798190(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dc0b184,param_1);
  return;
}



/* Entry: 1037981ac; end: 1037981cf;  */

void FUN_1037981ac(void)

{
  FUN_1037981d0(0x112f920a8,PTR___sSnyxGSlsSxRzSZ6StrideRpzrlMc_11034e128);
  return;
}



/* Entry: 1037981d0; end: 103798243;  */

void FUN_1037981d0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112d4f678;
    func_0x00010002969c(0x112d4f678,&UNK_10d915670);
    uVar2 = uVar1;
    func_0x000100f79844();
    puStack_40 = PTR___sSiSxsWP_11034dee8;
    uStack_38 = uVar2;
    func_0x000107c61520(param_2,uVar1,&puStack_40);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 103798244; end: 103798263;  */

void FUN_103798244(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(PTR___ss5SliceVyxGSlsMc_11034eee0,param_1);
  return;
}



/* Entry: 103798264; end: 1037982b7;  */

undefined8 * FUN_103798264(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1037982b8; end: 1037982fb;  */

undefined8 * FUN_1037982b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1037982fc; end: 103798397;  */

int FUN_1037982fc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103798398; end: 10379857f;  */

void FUN_103798398(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ed50();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0,1,&lStack_28,param_1 + 0x18);
  }
  return;
}



/* Entry: 103798580; end: 1037985a3;  */

void FUN_103798580(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1037985a4; end: 10379867b;  */

void FUN_1037985a4(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,code *param_5,
                  code *param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar1 = PTR___sSlTL_11034dfe8;
  uVar3 = 0;
  func_0x000107c614b8(0,param_4,param_3,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  func_0x000107c614b4(param_4,param_3,uVar3,puVar1,PTR___sSl5IndexSl_SLTn_11034dfa0);
  uVar4 = param_2;
  func_0x000107c5fa90(param_2,param_1,uVar3,param_4);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103798678);
    (*pcVar2)();
  }
  lVar5 = 0;
  (*param_5)(0,uVar3,param_4);
  (*param_6)(param_1,param_2 + (long)*(int *)(lVar5 + 0x24),uVar3,param_4);
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10379867c);
  (*pcVar2)();
}



/* Entry: 10379867c; end: 1037986a3;  */

void FUN_10379867c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dc0b1f8;
  func_0x000107c61520(&UNK_10dc0b1f8,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdb82a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSksE5index_8offsetBy07limitedC05IndexQzSgAE_SiAEtF_11034df68)
            (param_1,param_2,param_3,param_4,param_5,puVar1);
  return;
}



/* Entry: 1037986a4; end: 103798a87;  */

undefined * FUN_1037986a4(undefined *param_1,undefined *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  char cVar11;
  long extraout_x8;
  long lVar12;
  long lVar13;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined *apuStack_98 [3];
  long lStack_80;
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = (long)&puStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = param_2;
  func_0x000107c5dc3c();
  iVar2 = (int)puVar4;
  if (iVar2 < 3) {
    if (((iVar2 != 0) && (iVar2 != 1)) && (iVar2 == 2)) {
      puVar4 = param_2;
      func_0x000107c5c158();
      func_0x000107c61180();
      if (puVar4 != (undefined *)0x0) {
        puVar5 = puVar4;
        func_0x000107c5faec();
        func_0x000107c61170(param_2);
        func_0x000107c61170(puVar4);
        return puVar5;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103798a7c);
      (*pcVar1)();
    }
  }
  else if (iVar2 < 5) {
    if (iVar2 == 3) {
      puVar4 = param_2;
      func_0x000107c3ebe0(param_2);
      func_0x000107c61170(param_2);
      return (undefined *)((ulong)puVar4 & 0xffffffff);
    }
    if (iVar2 == 4) {
      func_0x000107c42240(param_2);
      func_0x000107c61170(param_2);
      return param_1;
    }
  }
  else {
    if (iVar2 == 5) {
      puVar4 = param_2;
      func_0x000107c4b680();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103798a84);
        (*pcVar1)();
      }
      puVar5 = puVar4;
      func_0x000107c5dc80();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (puVar5 != (undefined *)0x0) {
        puStack_f0 = puVar5;
        lStack_e8 = lVar12;
        func_0x000107c600f4(lVar13);
        func_0x000100e15a08();
        func_0x000107c601c0(apuStack_98,lVar3,puVar4);
        puVar5 = PTR___sypN_11034f1a8;
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        while (lStack_80 != 0) {
          func_0x000100102924(apuStack_98,auStack_b8);
          func_0x0001000bb420(auStack_b8,auStack_d8);
          FUN_103798d64(0);
          uVar6 = 0;
          puVar10 = auStack_d8;
          cVar11 = (char)puVar5 + '\b';
          func_0x000107c6147c();
          if ((uVar6 & 1) == 0) {
            func_0x000100183ab8(auStack_b8);
          }
          else {
            uVar7 = uStack_e0;
            FUN_1037986a4();
            func_0x000100183ab8(auStack_b8);
            puVar5 = puVar9;
            func_0x000107c61558();
            puVar8 = puVar9;
            if (((ulong)puVar5 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              func_0x000101ee71d8(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
            }
            uVar6 = *(ulong *)(puVar8 + 0x10);
            puVar9 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar6) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              func_0x000101ee71d8(puVar9,uVar6 + 1,1,puVar8);
            }
            *(ulong *)(puVar9 + 0x10) = uVar6 + 1;
            *(undefined8 *)(puVar9 + uVar6 * 0x18 + 0x20) = uVar7;
            *(undefined1 **)(puVar9 + uVar6 * 0x18 + 0x28) = puVar10;
            puVar9[uVar6 * 0x18 + 0x30] = cVar11;
            puVar5 = PTR___sypN_11034f1a8;
          }
          func_0x000107c601c0(apuStack_98,lVar3,puVar4);
        }
        func_0x000107c61170(puStack_f0);
        func_0x000107c61170(param_2);
        (**(code **)(lStack_e8 + 8))(lVar13,lVar3);
        return puVar9;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103798a88);
      (*pcVar1)();
    }
    if (iVar2 == 6) {
      puVar4 = param_2;
      func_0x000107c4c27c();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103798a80);
        (*pcVar1)();
      }
      puVar5 = puVar4;
      func_0x000107c5dc7c();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (puVar5 != (undefined *)0x0) {
        apuStack_98[0] = (undefined *)0x0;
        func_0x000107c5f9e4(puVar5,apuStack_98,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                            PTR___sSSSHsWP_11034da90);
        func_0x000107c61170(puVar5);
        puVar4 = apuStack_98[0];
        if (apuStack_98[0] != (undefined *)0x0) {
          puVar5 = apuStack_98[0];
          FUN_103798a88(apuStack_98[0]);
          func_0x000107c61170(param_2);
          func_0x000107c6142c(puVar4);
          return puVar5;
        }
      }
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_103796550(PTR___swiftEmptyArrayStorage_11034f1c8);
      func_0x000107c61170(param_2);
      return puVar4;
    }
  }
  func_0x000107c61170(param_2);
  return (undefined *)0x0;
}



/* Entry: 103798a88; end: 103798d63;  */

undefined * FUN_103798a88(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined1 auStack_110 [72];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar16 = (ulong *)(param_1 + 0x40);
  uVar14 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if (-uVar14 < 0x40) {
    uVar20 = ~(-1L << (-uVar14 & 0x3f));
  }
  uVar20 = uVar20 & *puVar16;
  func_0x000107c61434();
  lVar17 = 0;
  puVar19 = PTR___sypN_11034f1a8;
  lVar18 = lVar17;
  while( true ) {
    for (; uVar20 != 0; uVar20 = uVar20 - 1 & uVar20) {
      uVar11 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar17 << 6;
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
      uStack_98 = *puVar10;
      uVar1 = puVar10[1];
      uStack_90 = uVar1;
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar11 * 0x20,auStack_88);
      func_0x0001000bb420(auStack_88,auStack_110);
      FUN_103798d64(0);
      func_0x000107c61434(uVar1);
      uVar11 = 0;
      puVar8 = auStack_110;
      cVar9 = (char)puVar19 + '\b';
      func_0x000107c6147c();
      if ((uVar11 & 1) != 0) {
        uVar7 = uStack_c8;
        FUN_1037986a4();
        func_0x000103798de8(&uStack_98,&uStack_c8);
        uVar3 = uStack_c0;
        uVar1 = uStack_c8;
        if (*(ulong *)(puVar2 + 0x18) <= *(ulong *)(puVar2 + 0x10)) {
          func_0x000101ee23bc(*(ulong *)(puVar2 + 0x10) + 1,1);
        }
        func_0x000107c6068c(auStack_110,*(undefined8 *)(puVar2 + 0x28));
        puVar6 = auStack_110;
        func_0x000107c5fb58(puVar6,uVar1,uVar3);
        func_0x000107c606a8();
        uVar15 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
        uVar13 = (ulong)puVar6 & (uVar15 ^ 0xffffffffffffffff);
        uVar12 = uVar13 >> 6;
        uVar11 = -1L << (uVar13 & 0x3f) &
                 (*(ulong *)(puVar2 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar11 == 0) {
          bVar5 = false;
          uVar11 = 0x3f - uVar15 >> 6;
          do {
            uVar13 = uVar12 + 1;
            if ((uVar13 == uVar11) && (bVar5)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103798d64);
              (*pcVar4)();
            }
            uVar12 = 0;
            if (uVar13 != uVar11) {
              uVar12 = uVar13;
            }
            bVar5 = (bool)(uVar13 == uVar11 | bVar5);
          } while (*(ulong *)(puVar2 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
          uVar11 = ~*(ulong *)(puVar2 + uVar12 * 8 + 0x40);
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar12 << 6;
        }
        else {
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar13 & 0x7fffffffffffffc0;
        }
        uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar2 + uVar12 + 0x40) =
             1L << (uVar11 & 0x3f) | *(ulong *)(puVar2 + uVar12 + 0x40);
        puVar10 = (undefined8 *)(*(long *)(puVar2 + 0x30) + uVar11 * 0x10);
        *puVar10 = uVar1;
        puVar10[1] = uVar3;
        puVar10 = (undefined8 *)(*(long *)(puVar2 + 0x38) + uVar11 * 0x18);
        *puVar10 = uVar7;
        puVar10[1] = puVar8;
        *(char *)(puVar10 + 2) = cVar9;
        *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
        func_0x000100183ab8(auStack_b8);
        puVar19 = PTR___sypN_11034f1a8;
      }
      func_0x000103798da8(&uStack_98,0x112da9f08,&UNK_10da55920);
      lVar18 = lVar17;
    }
    bVar5 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103798d60);
      (*pcVar4)();
    }
    if ((long)(0x3f - uVar14 >> 6) <= lVar17) break;
    uVar20 = puVar16[lVar17];
  }
  func_0x000100216694(param_1,puVar16,~uVar14,lVar18,0);
  return puVar2;
}



/* Entry: 103798d64; end: 103798da7;  */

void FUN_103798d64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f921b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126d2ec0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f921b0 = puVar1;
  return;
}



/* Entry: 103798da8; end: 103798e93;  */

undefined8 FUN_103798da8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103798e94; end: 103798eff;  */

void FUN_103798e94(void)

{
  long unaff_x20;
  
  if (lRam0000000112f92608 != -1) {
    func_0x000107c61568(0x112f92608,&UNK_100996768);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)
            (lRam000000011380bb38 + 0x40,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103798f00; end: 103798f53;  */

void FUN_103798f00(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  if (lRam0000000112f92608 != -1) {
    func_0x000107c61568(0x112f92608,&UNK_100996768);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)
            (lRam000000011380bb38 + 0x40,*(undefined8 *)(lVar1 + 0x10));
  return;
}



/* Entry: 103798f54; end: 103798f5b;  */

undefined8 FUN_103798f54(void)

{
  return 0;
}



/* Entry: 103798f5c; end: 1037991c7;  */

undefined * FUN_103798f5c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  if (puVar9 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112f92288);
  puVar2 = puVar9;
  func_0x000107c60498();
  uVar10 = *(ulong *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = uVar10;
  func_0x000100f89a68();
  if ((uVar5 & 1) == 0) {
    puVar7 = (undefined8 *)(param_1 + 0x78);
    do {
      uVar8 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar8 + 0x40) = *(ulong *)(puVar2 + uVar8 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar10;
      puVar6 = (undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 0x28);
      *puVar6 = uVar11;
      puVar6[1] = uVar12;
      puVar6[2] = uVar4;
      puVar6[3] = uVar13;
      puVar6[4] = uVar14;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103799088);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      if (puVar9 == (undefined *)0x0) {
        func_0x000107c61434();
        return puVar2;
      }
      uVar10 = puVar7[-5];
      uVar11 = puVar7[-4];
      uVar12 = puVar7[-3];
      uVar4 = puVar7[-2];
      uVar13 = puVar7[-1];
      uVar14 = *puVar7;
      func_0x000107c61434();
      uVar3 = uVar10;
      func_0x000100f89a68();
      puVar7 = puVar7 + 6;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103799054);
  (*pcVar1)();
}



/* Entry: 1037991c8; end: 1037991e7;  */

void FUN_1037991c8(void)

{
  func_0x000107c61168(&PTR_PTR_112f92210);
  return;
}



/* Entry: 1037991e8; end: 10379933b;  */

undefined * FUN_1037991e8(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_e8 [72];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  if (puVar6 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112f92270);
  puVar3 = puVar6;
  func_0x000107c60498();
  uStack_98 = *(ulong *)(param_1 + 0x28);
  uVar9 = *(ulong *)(param_1 + 0x20);
  uStack_88 = *(ulong *)(param_1 + 0x38);
  uStack_90 = *(ulong *)(param_1 + 0x30);
  uStack_78 = *(ulong *)(param_1 + 0x48);
  uStack_80 = *(ulong *)(param_1 + 0x40);
  uStack_68 = *(ulong *)(param_1 + 0x58);
  uStack_70 = *(ulong *)(param_1 + 0x50);
  uStack_60 = *(ulong *)(param_1 + 0x60);
  uVar4 = uVar9;
  uStack_a0 = uVar9;
  func_0x000100f89a68();
  if ((uVar5 & 1) == 0) {
    puVar7 = (undefined8 *)((ulong)&uStack_a0 | 8);
    puVar8 = (ulong *)(param_1 + 0x68);
    do {
      uVar5 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar5 + 0x40) = *(ulong *)(puVar3 + uVar5 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar9;
      puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 0x40);
      uVar11 = puVar7[1];
      uVar10 = *puVar7;
      uVar13 = puVar7[3];
      uVar12 = puVar7[2];
      uVar14 = puVar7[4];
      uVar16 = puVar7[7];
      uVar15 = puVar7[6];
      puVar1[5] = puVar7[5];
      puVar1[4] = uVar14;
      puVar1[7] = uVar16;
      puVar1[6] = uVar15;
      puVar1[1] = uVar11;
      *puVar1 = uVar10;
      puVar1[3] = uVar13;
      puVar1[2] = uVar12;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10379933c);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      if (puVar6 == (undefined *)0x0) {
        FUN_10379933c(&uStack_a0,auStack_e8);
        return puVar3;
      }
      uVar5 = 0;
      FUN_10379933c(&uStack_a0);
      uStack_98 = puVar8[1];
      uVar9 = *puVar8;
      uStack_88 = puVar8[3];
      uStack_90 = puVar8[2];
      uStack_78 = puVar8[5];
      uStack_80 = puVar8[4];
      uStack_68 = puVar8[7];
      uStack_70 = puVar8[6];
      uStack_60 = puVar8[8];
      uVar4 = uVar9;
      uStack_a0 = uVar9;
      func_0x000100f89a68();
      puVar8 = puVar8 + 9;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103799300);
  (*pcVar2)();
}



/* Entry: 10379933c; end: 10379938b;  */

undefined8 FUN_10379933c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f92278;
  func_0x0001000285a8(0x112f92278,&UNK_10dc0b4e0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10379938c; end: 1037993c7;  */

void FUN_10379938c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1037993c8; end: 1037993d3;  */

void FUN_1037993c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1037993d4; end: 103799447;  */

void FUN_1037993d4(void)

{
  long unaff_x20;
  
  if (lRam0000000112f92608 != -1) {
    func_0x000107c61568(0x112f92608,&UNK_100996768);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)
            (lRam000000011380bb38 + 0x20,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103799448; end: 10379949b;  */

void FUN_103799448(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  if (lRam0000000112f92608 != -1) {
    func_0x000107c61568(0x112f92608,&UNK_100996768);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)
            (lRam000000011380bb38 + 0x20,*(undefined8 *)(lVar1 + 0x18));
  return;
}



/* Entry: 10379949c; end: 1037994a3;  */

undefined8 FUN_10379949c(void)

{
  return 0;
}



/* Entry: 1037994a4; end: 1037994c3;  */

void FUN_1037994a4(void)

{
  func_0x000107c61168(&PTR_PTR_112f922d0);
  return;
}



/* Entry: 1037994c4; end: 103799507;  */

void FUN_1037994c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 103799508; end: 10379953b;  */

void FUN_103799508(void)

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



/* Entry: 10379953c; end: 10379959b;  */

/* WARNING: Possible PIC construction at 0x00010379956c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103799570) */

void FUN_10379953c(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  if (lRam0000000112f92608 != -1) {
    func_0x000107c61568(0x112f92608,&UNK_100996768);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)
            (lRam000000011380bb38 + 0x28,*(undefined8 *)(lVar1 + 0x18));
  return;
}



/* Entry: 10379959c; end: 1037995a3;  */

undefined8 FUN_10379959c(void)

{
  return 0;
}



/* Entry: 1037995a4; end: 1037995df;  */

void FUN_1037995a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1037995e0; end: 1037995eb;  */

void FUN_1037995e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1037995ec; end: 10379965f;  */

void FUN_1037995ec(void)

{
  long unaff_x20;
  
  if (lRam0000000112f92608 != -1) {
    func_0x000107c61568(0x112f92608,&UNK_100996768);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)
            (lRam000000011380bb38 + 0x38,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}


