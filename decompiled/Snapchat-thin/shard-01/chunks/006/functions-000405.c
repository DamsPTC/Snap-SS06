/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101251f38; end: 101251f43;  */

void FUN_101251f38(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_101252170();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = uStack_58;
  *(undefined8 *)(lVar1 + 0x28) = uStack_60;
  *param_1 = lVar1;
  return;
}



/* Entry: 101251f44; end: 101252123;  */

void FUN_101251f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 101252124; end: 10125215f;  */

void FUN_101252124(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101252160; end: 10125216f;  */

undefined1  [16] FUN_101252160(void)

{
  return ZEXT816(0x110398a88);
}



/* Entry: 101252170; end: 10125218f;  */

void FUN_101252170(void)

{
  func_0x000107c61168(&PTR_PTR_112d6b870);
  return;
}



/* Entry: 101252190; end: 1012521db;  */

void FUN_101252190(undefined8 param_1)

{
  func_0x0001000285a8(0x112d6b8e8,&UNK_10d92eb40);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101252250,param_1);
  return;
}



/* Entry: 1012521dc; end: 10125224f;  */

void FUN_1012521dc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101252450();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  func_0x000107c40584();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 101252250; end: 101252257;  */

void FUN_101252250(long *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101252450();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  func_0x000107c40584();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101252258; end: 1012522b3;  */

long FUN_101252258(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000107c40584();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1012522b4; end: 1012523e3;  */

undefined8
FUN_1012522b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar4 = &puStack_90;
  puVar2 = &UNK_110398ac8;
  func_0x000107c613fc(&UNK_110398ac8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_101252470;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x10125249c;
  puStack_78 = &UNK_110398ae0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c615f0(param_2);
  func_0x000107c61574(puVar2);
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  uStack_80 = 0x100f11714;
  puStack_78 = &UNK_110398b08;
  pcStack_70 = (code *)param_3;
  puStack_68 = (undefined *)param_4;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c40c20(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  return param_1;
}



/* Entry: 1012523e4; end: 10125241b;  */

void FUN_1012523e4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10125241c; end: 10125243f;  */

void FUN_10125241c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101252440; end: 10125244f;  */

undefined1  [16] FUN_101252440(void)

{
  return ZEXT816(0x110398aa8);
}



/* Entry: 101252450; end: 10125246f;  */

void FUN_101252450(void)

{
  func_0x000107c61168(&PTR_PTR_112d6b930);
  return;
}



/* Entry: 101252470; end: 10125249f;  */

void FUN_101252470(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1012524a0; end: 1012526a7;  */

/* WARNING: Possible PIC construction at 0x0001012525e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101252630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012525e4) */
/* WARNING: Removing unreachable block (ram,0x000101252634) */
/* WARNING: Removing unreachable block (ram,0x000101252690) */
/* WARNING: Removing unreachable block (ram,0x000101252644) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_1012524a0(void)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4b940(uVar4);
  if (*(char *)(unaff_x20 + 0x20) == '\x01') goto code_r0x000107c5d278;
  if (*(char *)(unaff_x20 + 0x21) != '\x01') {
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
      *(undefined1 *)(unaff_x20 + 0x21) = 1;
      puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x000107c61168();
      func_0x000107c6157c(uVar6);
      func_0x000107c41010();
      func_0x000107c61180();
      uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
      *(undefined **)(unaff_x20 + 0x28) = puVar3;
      func_0x000107c61170(uVar6);
    }
    goto code_r0x000107c5d278;
  }
  uVar5 = *(ulong *)(unaff_x20 + 0x28);
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  uVar2 = uVar5;
  func_0x000107c61174();
  func_0x000107c41010();
  func_0x000107c61180();
  if (uVar5 == 0) {
    if (puVar3 == (undefined *)0x0) goto code_r0x000107c5d278;
LAB_10125266c:
    func_0x000107c61170();
    bVar1 = *(byte *)(unaff_x20 + 0x20);
  }
  else {
    if (puVar3 == (undefined *)0x0) goto LAB_10125266c;
    FUN_1012527a0(0);
    func_0x000107c61174();
    uVar5 = uVar2;
    func_0x000107c60118();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar2);
    if ((uVar5 & 1) != 0) goto code_r0x000107c5d278;
    bVar1 = *(byte *)(unaff_x20 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    do {
      func_0x000107c5e054(uVar4);
    } while (*(char *)(unaff_x20 + 0x20) != '\x01');
  }
code_r0x000107c5d278:
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 1012526a8; end: 101252733;  */

undefined8 FUN_1012526a8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_2;
  uVar2 = param_2[3];
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x00010127bb68(uVar1,uVar2,param_3,param_2[4],param_2[5]);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 101252734; end: 10125278f;  */

void FUN_101252734(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_101252790(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101252790; end: 10125279f;  */

void FUN_101252790(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1012527a0; end: 1012527e3;  */

void FUN_1012527a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d6ba60 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d6ba60 = puVar1;
  return;
}



/* Entry: 1012527e4; end: 101252d67;  */

void FUN_1012527e4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar18 = *(long *)(unaff_x20 + 0x10);
  lVar16 = lVar18;
  func_0x000107c5da30();
  func_0x000107c61180();
  lVar19 = lVar16;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar16);
  puVar21 = (undefined *)0x0;
  if (lVar19 == 0) {
LAB_101252cf0:
    lVar19 = 0;
    lVar16 = 0;
  }
  else {
    lVar3 = lVar19;
    func_0x000107c4f38c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar19);
    lVar16 = 0;
    if (lVar3 == 0) {
LAB_101252cb8:
      lVar19 = 0;
    }
    else {
      func_0x000107c4f3e4();
      func_0x000107c61180();
      lVar19 = lVar18;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar18);
      if (lVar19 != 0) {
        lVar16 = lVar19;
        func_0x000107c5c5d0();
        func_0x000107c61180();
        func_0x000107c615e8(lVar19);
        func_0x000107c61170(lVar3);
        lVar19 = lVar16;
        func_0x000107c3ee50();
        func_0x000107c61180();
        func_0x000107c615e8(lVar16);
        lVar18 = *(long *)(unaff_x20 + 0x18);
        func_0x000107c4f598();
        func_0x000107c61180();
        lVar16 = lVar18;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar18);
        if (lVar16 != 0) {
          lVar18 = *(long *)(unaff_x20 + 0x28);
          func_0x000107c42eac();
          func_0x000107c61180();
          if (lVar18 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101252d68);
            (*pcVar2)();
          }
          lVar3 = lVar18;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar18);
          if (lVar3 == 0) {
            func_0x000107c615e8(lVar16);
            puVar21 = (undefined *)0x0;
          }
          else {
            puVar20 = &UNK_110398b88;
            puVar4 = puVar20;
            func_0x000107c613fc(&UNK_110398b88,0x18,7);
            func_0x000107c61644(puVar4 + 0x10);
            puVar17 = &UNK_110398bb0;
            func_0x000107c613fc(&UNK_110398bb0,0x20,7);
            *(undefined **)(puVar17 + 0x10) = puVar4;
            *(long *)(puVar17 + 0x18) = lVar3;
            func_0x000107c613fc(&UNK_110398b88,0x18,7);
            func_0x000107c61644(puVar20 + 0x10);
            puVar5 = &UNK_110398bd8;
            func_0x000107c613fc(&UNK_110398bd8,0x20,7);
            *(undefined **)(puVar5 + 0x10) = puVar20;
            *(long *)(puVar5 + 0x18) = lVar3;
            puVar21 = PTR_PTR_1126b0f78;
            func_0x000107c610f8();
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            pcStack_88 = FUN_1012533c4;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            pcStack_98 = (code *)&UNK_100288f10;
            puStack_90 = &UNK_110398bf0;
            ppuVar6 = &puStack_a8;
            puStack_80 = puVar17;
            func_0x000107c60bc4(ppuVar6);
            pcStack_b8 = FUN_1012533f8;
            puStack_d8 = puVar1;
            uStack_d0 = 0x42000000;
            puStack_c8 = &UNK_100288f10;
            puStack_c0 = &UNK_110398c18;
            ppuVar7 = &puStack_d8;
            puStack_b0 = puVar5;
            func_0x000107c60bc4(ppuVar7);
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c6157c(puVar4);
            func_0x000107c6157c(puVar20);
            func_0x000107c490ec();
            func_0x000107c60bd0(ppuVar7);
            func_0x000107c60bd0(ppuVar6);
            func_0x000107c61574(puStack_b0);
            puVar17 = puStack_80;
            func_0x000107c61574(puVar4);
            func_0x000107c61574(puVar20);
            func_0x000107c61574(puVar17);
            if (puVar21 != (undefined *)0x0) {
              puVar20 = PTR_PTR_1126b0f70;
              func_0x000107c610f8();
              func_0x000107c45554();
              lVar8 = *(long *)(unaff_x20 + 0x20);
              func_0x000107c3feac();
              func_0x000107c61180();
              lVar18 = lVar8;
              func_0x000107c5c734();
              func_0x000107c61180();
              func_0x000107c61170(lVar8);
              if (lVar18 != 0) {
                puVar17 = PTR_PTR_1126b0f80;
                func_0x000107c610f8();
                puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_a0 = 0x42000000;
                pcStack_98 = FUN_100f26cb8;
                puStack_90 = &UNK_110398c40;
                ppuVar6 = &puStack_a8;
                pcStack_88 = (code *)param_3;
                puStack_80 = (undefined *)param_4;
                func_0x000107c60bc4(ppuVar6);
                func_0x000107c6157c(param_4);
                func_0x000107c45ed4();
                func_0x000107c60bd0(ppuVar6);
                func_0x000107c61574(puStack_80);
                uVar9 = 0;
                func_0x000107c5fadc(0,0xe000000000000000);
                uVar10 = 0;
                func_0x000107c5fadc(0,0xe000000000000000);
                uVar11 = 0;
                func_0x000107c5fadc(0,0xe000000000000000);
                uVar12 = 0;
                func_0x000107c5fadc(0,0xe000000000000000);
                uVar13 = 0;
                func_0x000107c5fadc(0,0xe000000000000000);
                uVar14 = 0;
                func_0x000107c5fadc(0,0xe000000000000000);
                uVar15 = 0;
                func_0x000107c5fadc(0,0xe000000000000000);
                lVar8 = lVar16;
                func_0x000107c4f584();
                func_0x000107c61180();
                func_0x000107c61170(uVar9);
                func_0x000107c61170(uVar10);
                func_0x000107c61170(uVar11);
                func_0x000107c61170(uVar12);
                func_0x000107c61170(uVar13);
                func_0x000107c61170(uVar14);
                func_0x000107c61170(uVar15);
                func_0x000107c615e8(lVar18);
                func_0x000107c61170(lVar3);
                goto LAB_101252d04;
              }
              func_0x000107c615e8(lVar16);
              func_0x000107c61170(puVar20);
              func_0x000107c61170(puVar21);
              func_0x000107c61170(lVar19);
              func_0x000107c61170(lVar3);
              lVar19 = 0;
              goto LAB_101252ca8;
            }
            func_0x000107c615e8(lVar16);
            func_0x000107c61170(lVar19);
            lVar19 = lVar3;
          }
          func_0x000107c61170(lVar19);
          goto LAB_101252cf0;
        }
        func_0x000107c61170(lVar19);
        goto LAB_101252cb8;
      }
      func_0x000107c61170(lVar3);
LAB_101252ca8:
      lVar16 = 0;
    }
    puVar21 = (undefined *)0x0;
  }
  lVar8 = 0;
  puVar20 = (undefined *)0x0;
  puVar17 = (undefined *)0x0;
LAB_101252d04:
  *param_1 = lVar19;
  param_1[1] = lVar16;
  param_1[2] = lVar8;
  param_1[3] = (long)puVar21;
  param_1[4] = (long)puVar20;
  param_1[5] = (long)puVar17;
  return;
}



/* Entry: 101252d68; end: 101252f37;  */

void FUN_101252d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d6ba68,&UNK_10d92ec50);
  puVar1 = &UNK_110398b40;
  func_0x000107c613fc(&UNK_110398b40,0x48,7);
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
  func_0x0001000823a8(FUN_101252f38,puVar1);
  return;
}



/* Entry: 101252f38; end: 101252f4b;  */

void FUN_101252f38(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_1012533a4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x38) = uStack_68;
  *(undefined8 *)(lVar1 + 0x40) = uStack_78;
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x10) = uStack_90;
  *(undefined8 *)(lVar1 + 0x18) = uStack_88;
  *(undefined8 *)(lVar1 + 0x30) = uStack_98;
  *param_1 = lVar1;
  return;
}



/* Entry: 101252f4c; end: 101252fb7;  */

void FUN_101252f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x10) = param_6;
  *(undefined8 *)(unaff_x20 + 0x18) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_7;
  return;
}



/* Entry: 101252fb8; end: 101253033;  */

void FUN_101252fb8(uint param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c40d3c(param_3);
    FUN_101253034(param_1 & 1,(uint)param_3 ^ 1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101253034; end: 1012531eb;  */

void FUN_101253034(byte param_1,byte param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      puVar5 = &UNK_110398b88;
      func_0x000107c613fc(&UNK_110398b88,0x18,7);
      func_0x000107c61644(puVar5 + 0x10);
      puVar6 = &UNK_110398c78;
      func_0x000107c613fc(&UNK_110398c78,0x1a,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      puVar6[0x18] = param_1 & 1;
      puVar6[0x19] = param_2 & 1;
      uStack_60 = 0x10125341c;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_110398c90;
      ppuVar7 = &puStack_80;
      puStack_58 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c61574(puStack_58);
      func_0x0001000295c4(0);
      (**(code **)(lVar9 + 0x68))
                (lVar8,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
                 lVar2);
      lVar3 = lVar8;
      func_0x000107c5fff0(lVar8);
      (**(code **)(lVar9 + 8))(lVar8,lVar2);
      func_0x000107c4e560(lVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lVar4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012531ec);
  (*pcVar1)();
}



/* Entry: 1012531ec; end: 101253263;  */

void FUN_1012531ec(uint param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c40d38(param_3);
    FUN_101253034((uint)param_3 ^ 1,param_1 & 1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101253264; end: 101253327;  */

void FUN_101253264(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x000107c42eac();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101253328);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c53b2c(lVar3);
      func_0x000107c53b30(lVar3);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101253328; end: 101253393;  */

void FUN_101253328(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101253394; end: 1012533a3;  */

undefined1  [16] FUN_101253394(void)

{
  return ZEXT816(0x110398b68);
}



/* Entry: 1012533a4; end: 1012533c3;  */

void FUN_1012533a4(void)

{
  func_0x000107c61168(&PTR_PTR_112d6bab0);
  return;
}



/* Entry: 1012533c4; end: 1012533cb;  */

void FUN_1012533c4(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c40d3c(uVar2);
    FUN_101253034(param_1 & 1,(uint)uVar2 ^ 1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1012533cc; end: 1012533f7;  */

void FUN_1012533cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1012533f8; end: 101253443;  */

void FUN_1012533f8(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c40d38(uVar2);
    FUN_101253034((uint)uVar2 ^ 1,param_1 & 1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101253444; end: 101253533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101253444(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = lVar1;
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112d6c960);
    func_0x000107c6157c(uVar4);
    func_0x000100083b20(&uStack_38);
    func_0x000107c61574(uVar4);
    puVar2 = &UNK_110398cc8;
    func_0x000107c613fc(&UNK_110398cc8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    func_0x000107c6157c(puVar2);
    FUN_101253580(param_1,FUN_101253578,puVar2,param_1,uStack_38);
    func_0x000107c61574(uStack_38);
    func_0x000107c61578(puVar2,2);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    *(long *)(unaff_x20 + 0x10) = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c61170(uVar4);
    lVar1 = 0;
    lVar3 = param_1;
  }
  func_0x000107c61174(lVar1);
  return lVar3;
}



/* Entry: 101253534; end: 101253577;  */

void FUN_101253534(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101253578; end: 10125357f;  */

void FUN_101253578(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101267160(param_1,param_2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101253580; end: 10125368f;  */

undefined * FUN_101253580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126a67a0;
  func_0x000107c610f8(PTR_PTR_1126a67a0);
  func_0x000107c453e4();
  FUN_1012527e4(&lStack_90,param_1,param_2,param_3);
  if (lStack_90 != 0) {
    func_0x000107c552f8(puVar1);
    uVar2 = uStack_88;
    func_0x000107c4f580(uStack_88);
    func_0x000107c61180();
    func_0x000107c552ec(puVar1);
    func_0x000107c61170(uStack_68);
    func_0x000107c61170(uStack_70);
    func_0x000107c615e8(uStack_78);
    func_0x000107c61170(uStack_80);
    func_0x000107c615e8(uStack_88);
    func_0x000107c61170(lStack_90);
    func_0x000107c615e8(uVar2);
  }
  return puVar1;
}



/* Entry: 101253690; end: 101253757;  */

void FUN_101253690(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  uVar3 = 0x112d6bca0;
  func_0x0001000285a8(0x112d6bca0,&UNK_10d92f670);
  func_0x000107c613fc();
  puVar1 = &uStack_38;
  func_0x00010006c248();
  *(undefined8 **)(unaff_x20 + 0x20) = puVar1;
  puVar2 = &UNK_110398d40;
  func_0x000107c613fc(&UNK_110398d40,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = 0x101253dbc;
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  uStack_38 = param_1;
  func_0x000107c613fc(uVar3,0x20,7);
  func_0x000107c615f0(param_1);
  puVar1 = &uStack_38;
  func_0x00010006c248();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 **)(unaff_x20 + 0x20) = puVar1;
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 101253758; end: 101253773;  */

void FUN_101253758(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c615f0();
  return;
}



/* Entry: 101253774; end: 1012538a7;  */

void FUN_101253774(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = lVar1;
  if (lVar1 == 0) {
    *param_2 = param_3;
    func_0x000107c615f4(param_3,2);
    lVar1 = 0;
    lVar2 = param_3;
  }
  *param_1 = lVar2;
  func_0x000107c615f0(lVar1);
  return;
}



/* Entry: 1012538a8; end: 101253ae3;  */

ulong FUN_1012538a8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong auStack_60 [2];
  undefined8 uStack_50;
  ulong auStack_40 [2];
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c6157c(uVar3);
  uVar1 = 0x112d6bc90;
  func_0x0001000285a8(0x112d6bc90,&UNK_10d92ed68);
  func_0x000100075034(auStack_60,FUN_101253758,0,uVar1);
  func_0x000107c61574();
  uVar5 = auStack_60[0];
  if (auStack_60[0] == 0) {
    (**(code **)(param_1 + 0x10))();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uStack_50 = uVar3;
    func_0x000107c6157c(uVar4);
    uVar1 = 0x112d6bc98;
    func_0x0001000285a8(0x112d6bc98,&UNK_10d92ed70);
    func_0x000100075034(auStack_40,FUN_101253dc8,auStack_60,uVar1);
    func_0x000107c615e8(uVar3);
    func_0x000107c61574(uVar4);
    uVar5 = auStack_40[0];
  }
  uVar2 = uVar5;
  func_0x000107c61150(uVar5,PTR_s_respondsToSelector__11262c7e0,PTR_s_localStoryStore_1126051f8);
  if ((uVar2 & 1) == 0) {
    func_0x000107c615e8(uVar5);
    uVar2 = 0;
  }
  else {
    uVar2 = uVar5;
    func_0x000107c4b830(uVar5);
    func_0x000107c61180();
    func_0x000107c615e8(uVar5);
  }
  return uVar2;
}



/* Entry: 101253ae4; end: 101253ae7;  */

void FUN_101253ae4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 101253ae8; end: 101253d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101253ae8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar9 = &puStack_70;
  lVar3 = 0;
  FUN_10125d99c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112d6c438;
  uVar5 = unaff_x20;
  func_0x000107c6157c();
  func_0x000100078e94();
  func_0x000107c61180();
  *(undefined8 *)(lVar4 + lVar2) = uVar5;
  *(undefined8 *)(lVar4 + _DAT_112d6c440) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d6c430);
  *puVar1 = FUN_101253d98;
  puVar1[1] = unaff_x20;
  plVar6 = &lStack_40;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  puVar7 = &UNK_110398cf0;
  func_0x000107c613fc(&UNK_110398cf0,0x18,7);
  *(long **)(puVar7 + 0x10) = plVar6;
  puVar8 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  uStack_50 = 0x101253dc4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101016bdc;
  puStack_58 = &UNK_110398d08;
  puStack_48 = puVar7;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c46b38(puVar8);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puStack_48);
  return puVar8;
}



/* Entry: 101253d34; end: 101253d97;  */

void FUN_101253d34(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101253d98; end: 101253dc7;  */

ulong FUN_101253d98(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong auStack_60 [2];
  undefined8 uStack_50;
  ulong auStack_40 [2];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar3);
  uVar1 = 0x112d6bc90;
  func_0x0001000285a8(0x112d6bc90,&UNK_10d92ed68);
  func_0x000100075034(auStack_60,FUN_101253758,0,uVar1);
  func_0x000107c61574();
  uVar5 = auStack_60[0];
  if (auStack_60[0] == 0) {
    (**(code **)(unaff_x20 + 0x10))();
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_50 = uVar3;
    func_0x000107c6157c(uVar4);
    uVar1 = 0x112d6bc98;
    func_0x0001000285a8(0x112d6bc98,&UNK_10d92ed70);
    func_0x000100075034(auStack_40,0x101253ddc,auStack_60,uVar1);
    func_0x000107c615e8(uVar3);
    func_0x000107c61574(uVar4);
    uVar5 = auStack_40[0];
  }
  uVar2 = uVar5;
  func_0x000107c61150(uVar5,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_snapViewStateProvider_11266e960);
  if ((uVar2 & 1) == 0) {
    func_0x000107c615e8(uVar5);
    uVar2 = 0;
  }
  else {
    uVar2 = uVar5;
    func_0x000107c5b434(uVar5);
    func_0x000107c61180();
    func_0x000107c615e8(uVar5);
  }
  return uVar2;
}



/* Entry: 101253dc8; end: 101253def;  */

void FUN_101253dc8(void)

{
  func_0x000101253d80();
  return;
}



/* Entry: 101253df0; end: 101253e3f;  */

void FUN_101253df0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  (*(code *)0x101254640)();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uRam00000001137ff2a0 = uVar1;
  return;
}



/* Entry: 101253e40; end: 101253e6f;  */

void FUN_101253e40(undefined8 param_1,code *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  (*param_2)();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_3 = uVar1;
  return;
}



/* Entry: 101253e70; end: 101253e8f; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259121NoopImpalaMainContext application] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101253e70(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d6bca8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101253e90; end: 101253e9b; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259121NoopImpalaMainContext setApplication:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101253e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d6bca8);
  *(undefined8 *)(param_1 + _DAT_112d6bca8) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101253e9c; end: 101253ebb; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259121NoopImpalaMainContext networkingClient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101253e9c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d6bcb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101253ebc; end: 101253ec7; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259121NoopImpalaMainContext setNetworkingClient:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101253ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d6bcb0);
  *(undefined8 *)(param_1 + _DAT_112d6bcb0) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101253ec8; end: 101253ef7;  */

void FUN_101253ec8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + *param_4);
  *(undefined8 *)(param_1 + *param_4) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101253ef8; end: 101253f07; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259121NoopImpalaMainContext serviceConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101253ef8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d6bcb8));
  return;
}



/* Entry: 101253f08; end: 101253f3b; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259121NoopImpalaMainContext setServiceConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101253f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d6bcb8);
  *(undefined8 *)(param_1 + _DAT_112d6bcb8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101253f3c; end: 101253fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101253f3c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112d6bca8;
  uVar2 = 0;
  func_0x000101254600();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112d6bcb0;
  uVar2 = 0;
  func_0x000101254620();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112d6bcb8;
  puVar3 = PTR_PTR_1126b0fb0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101253fd8; end: 101253ff7; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259121NoopImpalaMainContext init] */

void FUN_101253fd8(void)

{
  FUN_101253f3c();
  return;
}



/* Entry: 101253ff8; end: 10125403f; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259121NoopImpalaMainContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101253ff8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6bca8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6bcb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6bcb8));
  return;
}



/* Entry: 101254040; end: 10125404f; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259115NoopApplication pushToValdiMarshaller:] */

undefined8 FUN_101254040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df408;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010b0470c0();
  return param_3;
}



/* Entry: 101254050; end: 101254067; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259115NoopApplication observeEnteredBackgroundWithCallback:] */

void FUN_101254050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c60bc4(param_3);
  puVar3 = PTR_PTR_1126b2f30;
  func_0x000107c610f8();
  uStack_50 = 0x10125404c;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110398e20;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c45b74(puVar3,param_2,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(param_3);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101254184);
  (*pcVar2)();
}



/* Entry: 101254068; end: 10125407f; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259115NoopApplication observeEnteredForegroundWithCallback:] */

void FUN_101254068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c60bc4(param_3);
  puVar3 = PTR_PTR_1126b2f30;
  func_0x000107c610f8();
  uStack_50 = 0x101254064;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110398df8;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c45b74(puVar3,param_2,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(param_3);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101254184);
  (*pcVar2)();
}



/* Entry: 101254080; end: 101254097; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259115NoopApplication observeKeyboardHeightWithCallback:] */

void FUN_101254080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c60bc4(param_3);
  puVar3 = PTR_PTR_1126b2f30;
  func_0x000107c610f8();
  uStack_50 = 0x10125407c;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110398dd0;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c45b74(puVar3,param_2,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(param_3);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101254184);
  (*pcVar2)();
}



/* Entry: 101254098; end: 1012540ab; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259115NoopApplication observeScreenCaptureWithCallback:] */

void FUN_101254098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c60bc4(param_3);
  puVar3 = PTR_PTR_1126b2f30;
  func_0x000107c610f8();
  uStack_50 = 0x101254094;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110398da8;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c45b74(puVar3,param_2,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(param_3);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101254184);
  (*pcVar2)();
}



/* Entry: 1012540ac; end: 101254183;  */

void FUN_1012540ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c60bc4(param_3);
  puVar3 = PTR_PTR_1126b2f30;
  func_0x000107c610f8();
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  uStack_58 = param_5;
  uStack_50 = param_4;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c45b74(puVar3,param_2,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(param_3);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101254184);
  (*pcVar2)();
}



/* Entry: 101254184; end: 101254193; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259120NoopNetworkingClient pushToValdiMarshaller:] */

void FUN_101254184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b899f18(param_3,param_1);
  func_0x00010b899f08();
  func_0x00010b899f00();
  func_0x00010b899e8c();
  func_0x00010b899ecc();
  return;
}



/* Entry: 101254194; end: 1012541a3; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259120NoopNetworkingClient makeRequestWithRequest:completion:] */

void FUN_101254194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  FUN_10125480c(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1012541a4; end: 1012541af; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259120NoopNetworkingClient makeRequestWithErrorMetadataWithRequest:completion:] */

void FUN_1012541a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  (*(code *)0x10125499c)(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1012541b0; end: 101254233;  */

void FUN_1012541b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  (*param_5)(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101254234; end: 10125423f; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259124NoopMediaPickerPresenter pushToValdiMarshaller:] */

void FUN_101254234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8feb4(param_3,param_1);
  func_0x00010af8fe58();
  func_0x00010af8fe50();
  func_0x00010af8fd34();
  func_0x00010af8fd10();
  return;
}



/* Entry: 101254240; end: 10125430f; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259124NoopMediaPickerPresenter presentMediaPickerWithMaxSelectionLimit:callback:] */

/* WARNING: Possible PIC construction at 0x0001012542f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012542f4) */

void FUN_101254240(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = 0;
  FUN_1012547cc(0,0x112d6bdf0,&PTR_PTR_1126c6628);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar1);
  uVar1 = 0;
  FUN_1012547cc(0,0x112d6bde8,&PTR_PTR_1126c6610);
  puVar3 = puVar4;
  func_0x000107c5fc48(puVar4,uVar1);
  uVar1 = 0;
  FUN_1012547cc(0,0x112d6bdf8,&PTR_PTR_1126a67a8);
  func_0x000107c5fc48(puVar4,uVar1);
  (**(code **)(param_3 + 0x10))(param_3,puVar2,puVar3,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101254310; end: 101254313; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259124NoopMediaPickerPresenter presentSpotlightMediaPicker] */

void FUN_101254310(void)

{
  return;
}



/* Entry: 101254314; end: 10125431f; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259129NoopMediaAuthorizationHandler pushToValdiMarshaller:] */

void FUN_101254314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b89a740(param_3,param_1);
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 101254320; end: 101254363;  */

void FUN_101254320(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000107c60bc4();
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(param_3);
    return;
  }
  return;
}



/* Entry: 101254364; end: 10125436f; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259116NoopMediaLibrary pushToValdiMarshaller:] */

void FUN_101254364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b89a740(param_3,param_1);
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 101254370; end: 10125437f; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259116NoopMediaLibrary getAuthorizationHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101254370(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d6bcc0));
  return;
}



/* Entry: 101254380; end: 10125443f;  */

/* WARNING: Possible PIC construction at 0x000101254418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010125441c) */

void FUN_101254380(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long in_x3;
  
  func_0x000107c60bc4();
  if (in_x3 != 0) {
    func_0x000107c60bc4();
    uVar1 = 0;
    FUN_1012547cc(0,0x112d6bde8,&PTR_PTR_1126c6610);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar1);
    uVar1 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010ef318e0);
    (**(code **)(in_x3 + 0x10))(in_x3,puVar2,uVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(in_x3);
    return;
  }
  return;
}



/* Entry: 101254440; end: 1012544eb; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259116NoopMediaLibrary getThumbnailUrlsForItemsWithItemIds:preferredWidth:preferredHeight:callback:] */

/* WARNING: Possible PIC construction at 0x0001012544c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012544c8) */

void FUN_101254440(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long in_x3;
  
  func_0x000107c60bc4();
  if (in_x3 != 0) {
    func_0x000107c60bc4();
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    uVar2 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010ef318e0);
    (**(code **)(in_x3 + 0x10))(in_x3,puVar1,uVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(in_x3);
    return;
  }
  return;
}



/* Entry: 1012544ec; end: 10125456b;  */

/* WARNING: Possible PIC construction at 0x00010125454c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101254550) */

void FUN_1012544ec(void)

{
  undefined8 uVar1;
  long in_x3;
  
  func_0x000107c60bc4();
  if (in_x3 != 0) {
    func_0x000107c60bc4();
    uVar1 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010ef318e0);
    (**(code **)(in_x3 + 0x10))(in_x3,0,uVar1);
    func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(in_x3);
    return;
  }
  return;
}



/* Entry: 10125456c; end: 1012545cf; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259116NoopMediaLibrary init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10125456c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112d6bcc0;
  uVar3 = 0;
  func_0x000101254660();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012545d0; end: 1012545df; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259116NoopMediaLibrary .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012545d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6bcc0));
  return;
}



/* Entry: 1012545e0; end: 10125469f;  */

void FUN_1012545e0(void)

{
  func_0x000107c61168(&PTR_PTR_1127bf8c0);
  return;
}



/* Entry: 1012546a0; end: 1012546ab; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259122NoopMemoriesTranscoder pushToValdiMarshaller:] */

undefined8 FUN_1012546a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af9e7d4(param_3,param_1);
  func_0x00010af9e7dc();
  func_0x00010af9e7a0();
  func_0x00010af9e7b0();
  return param_3;
}



/* Entry: 1012546ac; end: 10125473b; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259122NoopMemoriesTranscoder transcodeWithMemories:callback:] */

/* WARNING: Possible PIC construction at 0x000101254724: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101254728) */

void FUN_1012546ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long in_x3;
  
  uVar1 = 0;
  FUN_1012547cc(0,0x112d6bde0,&PTR_PTR_1126ce640);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar1);
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef318c0);
  (**(code **)(in_x3 + 0x10))(in_x3,puVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10125473c; end: 101254777;  */

void FUN_10125473c(undefined8 param_1)

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



/* Entry: 101254778; end: 1012547cb;  */

void FUN_101254778(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012547cc; end: 10125480b;  */

void FUN_1012547cc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10125480c; end: 101254b13;  */

undefined * FUN_10125480c(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  ppuVar5 = &puStack_c0;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = 0x6567617373656d;
  puVar4 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x28) = 0xe700000000000000;
  *(undefined8 *)(lVar2 + 0x30) = 0xd000000000000016;
  *(undefined8 *)(lVar2 + 0x38) = 0x800000010ef31900;
  lVar3 = lVar2;
  func_0x000100214a84();
  func_0x000107c61588(lVar2);
  FUN_100f15a0c((undefined8 *)(lVar2 + 0x20));
  lVar2 = lVar3;
  func_0x000107c5f9dc(lVar3,puVar4,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  (**(code **)(param_1 + 0x10))(param_1,0,lVar2);
  func_0x000107c6142c(lVar3);
  func_0x000107c61170(lVar2);
  puVar4 = PTR_PTR_1126b2f30;
  func_0x000107c610f8();
  uStack_a0 = 0x101254190;
  uStack_98 = 0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_110398d80;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c61574(uStack_98);
  func_0x000107c45b74();
  func_0x000107c60bd0(ppuVar5);
  if (puVar4 != (undefined *)0x0) {
    return puVar4;
  }
  func_0x000107c60bd0(param_1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10125499c);
  (*pcVar1)();
}



/* Entry: 101254b14; end: 101254b57;  */

void FUN_101254b14(long param_1,long param_2)

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



/* Entry: 101254b58; end: 101254b5b; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259116NoopMediaLibrary getVideoItemsWithOptions:callback:] */

/* WARNING: Possible PIC construction at 0x000101254418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010125441c) */

void FUN_101254b58(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long in_x3;
  
  func_0x000107c60bc4();
  if (in_x3 != 0) {
    func_0x000107c60bc4();
    uVar1 = 0;
    FUN_1012547cc(0,0x112d6bde8,&PTR_PTR_1126c6610);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar1);
    uVar1 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010ef318e0);
    (**(code **)(in_x3 + 0x10))(in_x3,puVar2,uVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(in_x3);
    return;
  }
  return;
}



/* Entry: 101254b5c; end: 101254b5f; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259116NoopMediaLibrary getImageItemsWithOptions:callback:] */

/* WARNING: Possible PIC construction at 0x000101254418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010125441c) */

void FUN_101254b5c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long in_x3;
  
  func_0x000107c60bc4();
  if (in_x3 != 0) {
    func_0x000107c60bc4();
    uVar1 = 0;
    FUN_1012547cc(0,0x112d6bde8,&PTR_PTR_1126c6610);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar1);
    uVar1 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010ef318e0);
    (**(code **)(in_x3 + 0x10))(in_x3,puVar2,uVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(in_x3);
    return;
  }
  return;
}



/* Entry: 101254b60; end: 101254b63; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259116NoopMediaLibrary getVideoForItemWithItemId:callback:] */

/* WARNING: Possible PIC construction at 0x00010125454c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101254550) */

void FUN_101254b60(void)

{
  undefined8 uVar1;
  long in_x3;
  
  func_0x000107c60bc4();
  if (in_x3 != 0) {
    func_0x000107c60bc4();
    uVar1 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010ef318e0);
    (**(code **)(in_x3 + 0x10))(in_x3,0,uVar1);
    func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(in_x3);
    return;
  }
  return;
}



/* Entry: 101254b64; end: 101254b67; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259116NoopMediaLibrary getImageForItemWithItemId:callback:] */

/* WARNING: Possible PIC construction at 0x00010125454c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101254550) */

void FUN_101254b64(void)

{
  undefined8 uVar1;
  long in_x3;
  
  func_0x000107c60bc4();
  if (in_x3 != 0) {
    func_0x000107c60bc4();
    uVar1 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010ef318e0);
    (**(code **)(in_x3 + 0x10))(in_x3,0,uVar1);
    func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(in_x3);
    return;
  }
  return;
}



/* Entry: 101254b68; end: 101254b6b; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259116NoopMediaLibrary getItemUriWithItemId:callback:] */

/* WARNING: Possible PIC construction at 0x00010125454c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101254550) */

void FUN_101254b68(void)

{
  undefined8 uVar1;
  long in_x3;
  
  func_0x000107c60bc4();
  if (in_x3 != 0) {
    func_0x000107c60bc4();
    uVar1 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010ef318e0);
    (**(code **)(in_x3 + 0x10))(in_x3,0,uVar1);
    func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(in_x3);
    return;
  }
  return;
}



/* Entry: 101254b6c; end: 101254b6f; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259120NoopNetworkingClient init] */

void FUN_101254b6c(undefined8 param_1)

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



/* Entry: 101254b70; end: 101254b73; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259115NoopApplication init] */

void FUN_101254b70(undefined8 param_1)

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



/* Entry: 101254b74; end: 101254b77; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259124NoopMediaPickerPresenter init] */

void FUN_101254b74(undefined8 param_1)

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



/* Entry: 101254b78; end: 101254b7b; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259129NoopMediaAuthorizationHandler init] */

void FUN_101254b78(undefined8 param_1)

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



/* Entry: 101254b7c; end: 101254b7f; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259122NoopMemoriesTranscoder init] */

void FUN_101254b7c(undefined8 param_1)

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



/* Entry: 101254b80; end: 101254b83; -[_TtC24MyProfile3ImplementationP33_8712E77BF3179AE2208A47B2FFBC259129NoopMediaAuthorizationHandler getStateWithCallback:] */

void FUN_101254b80(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000107c60bc4();
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(param_3);
    return;
  }
  return;
}


