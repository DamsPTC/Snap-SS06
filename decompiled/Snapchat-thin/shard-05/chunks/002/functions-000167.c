/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c085c4; end: 103c085e3; -[_TtC23SCSnapDocSendServiceAPI21SCSnapDocSendServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c085c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff76b8));
  return;
}



/* Entry: 103c085e4; end: 103c08603;  */

void FUN_103c085e4(void)

{
  func_0x000107c61168(&PTR_PTR_112ff7728);
  return;
}



/* Entry: 103c08604; end: 103c0862f;  */

void FUN_103c08604(void)

{
  return;
}



/* Entry: 103c08630; end: 103c0867b;  */

void FUN_103c08630(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c0867c; end: 103c08747;  */

void FUN_103c0867c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1106e85a0;
  func_0x000107c613fc(&UNK_1106e85a0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  func_0x0001000285a8(0x112ff7838,&UNK_10dc651f8);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103c08834;
  func_0x0001000bdd8c(FUN_103c08834,puVar1);
  uVar3 = 0;
  func_0x0001002bd41c(0);
  func_0x000107c610f8();
  func_0x000103c193bc(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103c08748; end: 103c08763;  */

void FUN_103c08748(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_1106e85a0;
  func_0x000107c613fc(&UNK_1106e85a0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  func_0x0001000285a8(0x112ff7838,&UNK_10dc651f8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  pcVar3 = FUN_103c08834;
  func_0x0001000bdd8c(FUN_103c08834,puVar2);
  uVar4 = 0;
  func_0x0001002bd41c(0);
  func_0x000107c610f8();
  func_0x000103c193bc(pcVar3,uVar4);
  *param_1 = pcVar3;
  return;
}



/* Entry: 103c08764; end: 103c087ff;  */

void FUN_103c08764(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  uVar1 = uStack_48;
  func_0x000103c08c18(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 103c08800; end: 103c08833;  */

void FUN_103c08800(void)

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



/* Entry: 103c08834; end: 103c0883f;  */

void FUN_103c08834(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  uVar1 = uStack_48;
  func_0x000103c08c18(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 103c08840; end: 103c08d8b;  */

/* WARNING: Removing unreachable block (ram,0x000103c08b70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103c08840(undefined8 *param_1,long *param_2,ulong param_3,undefined *param_4)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  byte bVar15;
  undefined4 uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lStack_188;
  long lStack_180;
  ulong uStack_178;
  byte bStack_170;
  undefined4 uStack_16c;
  byte bStack_168;
  undefined8 uStack_d6;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined8 uStack_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long alStack_90 [6];
  
  alStack_90[5] = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c3fa04();
  func_0x000107c61180();
  uVar23 = 0;
  uVar22 = 0x200000000;
  uVar24 = 0;
  uVar25 = 0;
  if (param_2 == (long *)0x0) {
    uVar14 = 0;
    goto LAB_103c08a08;
  }
  param_3 = 0x800000010f1aec80;
  puVar5 = (undefined *)0xd000000000000020;
  func_0x000107c5fadc();
  plVar6 = param_2;
  param_4 = puVar5;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7;
      func_0x000107c5ee30();
      func_0x000107c61170();
      uVar3 = (uint)(param_3 >> 0x20);
      uVar13 = uVar3 >> 0x1e;
      lVar12 = (long)plVar8 >> 0x20;
      if (uVar3 >> 0x1e < 2) {
        if (uVar13 == 0) {
          if ((param_3 & 0xff000000000000) != 0) {
LAB_103c08948:
            alStack_90[4] = 0;
            alStack_90[1] = 0;
            alStack_90[0] = 0;
            alStack_90[3] = 0;
            alStack_90[2] = 0;
            uStack_b4 = 0;
            uStack_b0 = 0;
            uStack_c0 = 0;
            uStack_b8 = uStack_b8 & 0xffffff00;
            uStack_a0 = 0xc000000000000000;
            uStack_a8 = 0;
            if (uVar13 == 2) {
              lVar12 = plVar8[2];
              lVar20 = plVar8[3];
              func_0x000107c5ec30();
              plVar10 = plVar7;
              if (plVar7 != (long *)0x0) {
                plVar9 = plVar7;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar12,(long)plVar9)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103c08c10);
                  (*pcVar4)();
                }
                plVar10 = (long *)((lVar12 - (long)plVar9) + (long)plVar7);
                plVar7 = plVar9;
              }
              plVar9 = (long *)(lVar20 - lVar12);
              if (SBORROW8(lVar20,lVar12)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103c08c0c);
                (*pcVar4)();
              }
              func_0x000107c5ec38();
              plVar2 = plVar7;
              if ((long)plVar9 <= (long)plVar7) {
                plVar2 = plVar9;
              }
              lVar12 = 0;
              if (plVar10 != (long *)0x0) {
                lVar12 = (long)plVar2 + (long)plVar10;
              }
LAB_103c08b38:
              FUN_103c08dd0();
            }
            else {
              if (uVar13 == 1) {
                lVar20 = (long)(int)plVar8;
                if (lVar12 < lVar20) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103c08c08);
                  (*pcVar4)();
                }
                func_0x000107c5ec30();
                if (plVar7 == (long *)0x0) {
                  func_0x000107c5ec38();
                  plVar10 = (long *)0x0;
                }
                else {
                  plVar9 = plVar7;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar20,(long)plVar9)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103c08c14);
                    (*pcVar4)();
                  }
                  plVar10 = (long *)((lVar20 - (long)plVar9) + (long)plVar7);
                  func_0x000107c5ec38();
                  plVar7 = plVar9;
                  if (plVar10 != (long *)0x0) {
                    if (lVar12 - lVar20 <= (long)plVar9) {
                      plVar9 = (long *)(lVar12 - lVar20);
                    }
                    lVar12 = (long)plVar9 + (long)plVar10;
                    goto LAB_103c08b38;
                  }
                }
                lVar12 = 0;
                goto LAB_103c08b38;
              }
              uStack_d6._0_1_ = SUB81(plVar8,0);
              uStack_d6._1_1_ = (undefined1)((ulong)plVar8 >> 8);
              uStack_d6._2_1_ = (undefined1)((ulong)plVar8 >> 0x10);
              uStack_d6._3_1_ = (undefined1)((ulong)plVar8 >> 0x18);
              uStack_d6._4_1_ = (undefined1)((ulong)plVar8 >> 0x20);
              uStack_d6._5_1_ = (undefined1)((ulong)plVar8 >> 0x28);
              uStack_d6._6_1_ = (undefined1)((ulong)plVar8 >> 0x30);
              uStack_d6._7_1_ = (undefined1)((ulong)plVar8 >> 0x38);
              uStack_ce = (undefined1)param_3;
              uStack_cd = (undefined1)(param_3 >> 8);
              uStack_cc = (undefined1)(param_3 >> 0x10);
              uStack_cb = (undefined1)(param_3 >> 0x18);
              uStack_ca = (undefined1)(param_3 >> 0x20);
              uStack_c9 = (undefined1)(param_3 >> 0x28);
              lVar12 = (long)&uStack_d6 + (param_3 >> 0x30 & 0xff);
              FUN_103c08dd0();
              plVar10 = &uStack_d6;
            }
            func_0x00010006ae80(plVar10,lVar12,alStack_90,0,100,0,&UNK_1106e9660,plVar7);
            func_0x000107c61170(plVar6);
            func_0x000107c615e8(param_2);
            func_0x00010006c090(plVar8,param_3);
            param_3 = 0x112d49548;
            param_4 = &UNK_10d90fde0;
            param_2 = alStack_90;
            FUN_103c08e10(param_2,0x112d49548);
            uVar23 = CONCAT44(uStack_b4,uStack_b8);
            uVar24 = CONCAT71(uStack_af,uStack_b0);
            uVar14 = uStack_a0;
            uVar22 = uStack_c0;
            uVar25 = uStack_a8;
            goto LAB_103c08a08;
          }
        }
        else if ((int)plVar8 != lVar12) goto LAB_103c08948;
      }
      else if ((uVar13 == 2) && (plVar8[2] != plVar8[3])) goto LAB_103c08948;
      func_0x00010006c090(plVar8,param_3);
    }
    func_0x000107c61170(plVar6);
  }
  func_0x000107c615e8();
  uVar23 = 0;
  uVar24 = 0;
  uVar14 = 0;
  uVar22 = 0x200000000;
  uVar25 = 0;
LAB_103c08a08:
  param_1[1] = uVar23;
  *param_1 = uVar22;
  param_1[3] = uVar25;
  param_1[2] = uVar24;
  param_1[4] = uVar14;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_90[5]) {
    return param_2;
  }
  func_0x000107c60e78();
  FUN_103c08840(&uStack_178,param_3);
  lVar12 = _DAT_112ff7a78;
  if ((uStack_178 & 0xff00000000) == 0x200000000) {
    bVar18 = 0;
    bVar19 = 0;
    uVar21 = 8;
    uVar16 = 0;
    bVar17 = 0;
    bVar15 = 0;
  }
  else {
    uVar21 = uStack_178 & 0xffffffff;
    bVar19 = (byte)(uStack_178 >> 0x20) & 1;
    bVar18 = (byte)(uStack_178 >> 0x30) & 1;
    uVar16 = uStack_16c;
    bVar17 = bStack_170;
    bVar15 = bStack_168;
  }
  lVar11 = 0;
  FUN_103c09134();
  lVar20 = lVar11;
  func_0x000107c610f8();
  *(long **)(lVar20 + _DAT_112ff7850) = param_2;
  puVar1 = (ulong *)(lVar20 + _DAT_112ff7858);
  *puVar1 = uVar21;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(byte *)(lVar20 + _DAT_112ff7860) = bVar19;
  *(byte *)(lVar20 + _DAT_112ff7868) = bVar18;
  *(byte *)(lVar20 + _DAT_112ff7870) = bVar17 & 1;
  *(undefined4 *)(lVar20 + _DAT_112ff7878) = uVar16;
  *(byte *)(lVar20 + _DAT_112ff7880) = bVar15 & 1;
  FUN_103c08d8c(param_4 + lVar12,lVar20 + _DAT_112ff7888);
  puVar5 = PTR_s_init_1125d9248;
  lStack_188 = lVar20;
  lStack_180 = lVar11;
  func_0x000107c61174(param_2);
  plVar6 = &lStack_188;
  func_0x000107c61154(plVar6,puVar5);
  FUN_103c08e10(&uStack_178,0x112ff7840,&UNK_10dc65200);
  return plVar6;
}



/* Entry: 103c08d8c; end: 103c08dcf;  */

long FUN_103c08d8c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103c08dd0; end: 103c08e0f;  */

void FUN_103c08dd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc65eb0;
  func_0x000107c61520(&DAT_10dc65eb0,&UNK_1106e9660);
  puRam0000000112ff7848 = puVar1;
  return;
}



/* Entry: 103c08e10; end: 103c08e83;  */

undefined8 FUN_103c08e10(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103c08e84; end: 103c09067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c08e84(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  
  lVar9 = _DAT_112ff7888;
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112ff7850);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ff7858);
  uVar4 = *(undefined1 *)(unaff_x20 + _DAT_112ff7860);
  uVar5 = *(undefined1 *)(unaff_x20 + _DAT_112ff7868);
  uVar6 = *(undefined1 *)(unaff_x20 + _DAT_112ff7880);
  uVar3 = *(undefined1 *)((undefined8 *)(unaff_x20 + _DAT_112ff7858) + 1);
  uVar7 = *(undefined1 *)(unaff_x20 + _DAT_112ff7870);
  iVar2 = *(int *)(unaff_x20 + _DAT_112ff7878);
  lVar11 = 0;
  FUN_103c09a74();
  lVar12 = lVar11;
  func_0x000107c610f8();
  lVar10 = _DAT_112ff78f0;
  uVar13 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar12 + lVar10) = uVar13;
  puVar1 = (undefined8 *)(lVar12 + _DAT_112ff78f8);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(lVar12 + _DAT_112ff7900) = 0;
  *(undefined8 *)(lVar12 + _DAT_112ff78b8) = uVar15;
  puVar1 = (undefined8 *)(lVar12 + _DAT_112ff78c0);
  *puVar1 = uVar14;
  *(undefined1 *)(puVar1 + 1) = uVar3;
  *(undefined1 *)(lVar12 + _DAT_112ff78c8) = uVar4;
  *(undefined1 *)(lVar12 + _DAT_112ff78d0) = uVar5;
  *(undefined1 *)(lVar12 + _DAT_112ff78d8) = uVar6;
  FUN_103c08d8c(unaff_x20 + lVar9,lVar12 + _DAT_112ff78e0);
  puVar1 = (undefined8 *)(lVar12 + _DAT_112ff78e8);
  puVar1[1] = 0xf;
  *puVar1 = 3;
  puVar1[3] = 0x3fb999999999999a;
  puVar1[2] = 0x3fa0624dd2f1a9fc;
  *(undefined1 *)(puVar1 + 4) = uVar7;
  *(bool *)((long)puVar1 + 0x21) = 0 < iVar2;
  *(float *)((long)puVar1 + 0x24) = (float)iVar2 / 100.0;
  puVar8 = PTR_s_init_1125d9248;
  lStack_80 = lVar12;
  lStack_78 = lVar11;
  func_0x000107c61174(uVar15);
  func_0x000107c61154(&lStack_80,puVar8);
  return;
}



/* Entry: 103c09068; end: 103c0909b; -[_TtC31CallSuperResolutionServicesImpl37CallSuperResolutionSessionFactoryImpl makeSession] */

void FUN_103c09068(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103c08e84();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103c0909c; end: 103c090fb; -[_TtC31CallSuperResolutionServicesImpl37CallSuperResolutionSessionFactoryImpl init] */

void FUN_103c0909c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallSuperResolutionServicesImpl.CallSuperResolutionSessionFactoryImpl",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c090c8);
  (*pcVar1)();
}



/* Entry: 103c090fc; end: 103c09133; -[_TtC31CallSuperResolutionServicesImpl37CallSuperResolutionSessionFactoryImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c090fc(long param_1)

{
  long lVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff7850));
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112ff7888))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff7888));
  return;
}



/* Entry: 103c09134; end: 103c09153;  */

void FUN_103c09134(void)

{
  func_0x000107c61168(&PTR_PTR_112945f20);
  return;
}



/* Entry: 103c09154; end: 103c093b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c09154(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_e0 [24];
  undefined8 auStack_c8 [3];
  ulong uStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  
  lVar1 = param_2 + _DAT_112ff78f8;
  func_0x000107c61428(lVar1,auStack_98,0,0);
  FUN_103c09d5c(lVar1,&uStack_80);
  if (lStack_68 == 0) {
    func_0x000103c09e74(&uStack_80,0x112ff7930,&UNK_10dc65270);
  }
  else {
    func_0x000100d68780(&uStack_80,auStack_c8);
    ppuVar7 = ppuStack_a8;
    uVar8 = uStack_b0;
    func_0x0001000a8868(auStack_c8,uStack_b0);
    (**(code **)((long)ppuVar7 + 0x20))(uVar8,ppuVar7);
    ppuVar7 = ppuStack_a8;
    uVar6 = uStack_b0;
    if ((uVar8 & 1) != 0) {
      *(undefined1 *)(param_2 + _DAT_112ff7900) = 1;
      func_0x0001000a8868(auStack_c8,uStack_b0);
      (**(code **)((long)ppuVar7 + 0x28))(uVar6,ppuVar7);
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
      func_0x000107c61428(lVar1,auStack_e0,0x21,0);
      FUN_103c09f18(&uStack_80,lVar1);
      func_0x000107c614a8(auStack_e0);
    }
    FUN_103c09ef8(auStack_c8);
  }
  if (*(char *)(param_2 + _DAT_112ff7900) == '\x01') {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    if (*(long *)(lVar1 + 0x18) != 0) {
      func_0x000103c09eb4(lVar1,auStack_c8);
      func_0x0001000a8868(auStack_c8,uStack_b0);
      (**(code **)((long)ppuStack_a8 + 0x28))(uStack_b0,ppuStack_a8);
      FUN_103c09ef8(auStack_c8);
    }
    lVar2 = param_2 + _DAT_112ff78e0;
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
    lVar5 = *(long *)(lVar2 + 0x20);
    func_0x0001000a8868(lVar2,uVar4);
    uVar9 = 0;
    FUN_103c085e4();
    uVar10 = uVar9;
    func_0x000107c613fc();
    ppuStack_a8 = &PTR_DAT_1106e8520;
    ppuStack_a0 = &PTR_DAT_1106e84d0;
    puVar3 = (undefined8 *)(param_2 + _DAT_112ff78e8);
    uStack_78 = puVar3[1];
    uStack_80 = *puVar3;
    lStack_68 = puVar3[3];
    uStack_70 = puVar3[2];
    uStack_60 = puVar3[4];
    auStack_c8[0] = uVar10;
    uStack_b0 = uVar9;
    (**(code **)(lVar5 + 8))(param_1,auStack_c8,&uStack_80,uVar4,lVar5);
    FUN_103c09ef8(auStack_c8);
    func_0x000103c09eb4(param_1,auStack_c8);
    func_0x000107c61428(lVar1,auStack_e0,0x21,0);
    FUN_103c09f18(auStack_c8,lVar1);
    func_0x000107c614a8(auStack_e0);
  }
  return;
}



/* Entry: 103c093b4; end: 103c093d3;  */

void FUN_103c093b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x100) = param_7;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c093d4,0,0);
  return;
}



/* Entry: 103c093d4; end: 103c09597;  */

void FUN_103c093d4(void)

{
  code *pcVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x22;
  double dVar8;
  
  dVar8 = *(double *)(unaff_x22 + 0xd8);
  if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c09584);
    (*pcVar1)();
  }
  if (dVar8 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c09588);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0958c);
    (*pcVar1)();
  }
  uVar6 = *(ulong *)(unaff_x22 + 0xe0);
  *(long *)(unaff_x22 + 200) = (long)dVar8;
  puVar2 = PTR___sSiN_11034deb0;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  if ((uVar6 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
    dVar8 = *(double *)(unaff_x22 + 0xe0);
    if (dVar8 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c09594);
      (*pcVar1)();
    }
    if (dVar8 < 9.223372036854776e+18) {
      lVar7 = *(long *)(unaff_x22 + 0xe8);
      *(long *)(unaff_x22 + 0xd0) = (long)dVar8;
      puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar5);
      *(undefined **)(unaff_x22 + 0x108) = puVar4;
      func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0xb0,0,0);
      lVar7 = lVar7 + 0x10;
      func_0x000107c61618();
      *(long *)(unaff_x22 + 0x110) = lVar7;
      if (lVar7 != 0) {
        plVar3 = (long *)0x90;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x118) = plVar3;
        *plVar3 = unaff_x22;
        plVar3[1] = (long)FUN_103c09598;
        plVar3[0xe] = (long)puVar4;
        plVar3[0xf] = lVar7;
        plVar3[0xc] = unaff_x22 + 0x38;
        plVar3[0xd] = (long)puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_103c09740,0,0);
        return;
      }
      pcVar1 = *(code **)(unaff_x22 + 0xf0);
      func_0x000107c6142c(puVar4);
      (*pcVar1)(0);
                    /* WARNING: Could not recover jumptable at 0x000103c0957c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c09598);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c09590);
  (*pcVar1)();
}



/* Entry: 103c09598; end: 103c095eb;  */

void FUN_103c09598(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x108);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x118));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c095ec,0,0);
  return;
}



/* Entry: 103c095ec; end: 103c09723;  */

void FUN_103c095ec(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(long *)(unaff_x22 + 0x50) == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
    pcVar5 = *(code **)(unaff_x22 + 0xf0);
    func_0x000103c09e74(unaff_x22 + 0x38,0x112e353f8,&UNK_10da1ed90);
    (*pcVar5)(0);
    func_0x000107c61170(uVar4);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
    lVar1 = *(long *)(unaff_x22 + 0x100);
    pcVar5 = *(code **)(unaff_x22 + 0xf0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
    func_0x000100d68780(unaff_x22 + 0x38,unaff_x22 + 0x10);
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar4);
    (**(code **)(lVar2 + 8))(uVar4,lVar2);
    func_0x000103c09eb4(unaff_x22 + 0x10,unaff_x22 + 0x60);
    func_0x000103c09eb4(lVar1,unaff_x22 + 0x88);
    FUN_103c0abdc(0);
    func_0x000107c610f8();
    lVar1 = unaff_x22 + 0x60;
    FUN_103c09f7c(uVar7,uVar6,lVar1,unaff_x22 + 0x88);
    lVar2 = lVar1;
    func_0x000107c61174();
    (*pcVar5)(lVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
    FUN_103c09ef8(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000103c09720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c09724; end: 103c0973f;  */

void FUN_103c09724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c09740,0,0);
  return;
}



/* Entry: 103c09740; end: 103c09853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c09740(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x78);
  uVar4 = *(undefined1 *)(lVar7 + _DAT_112ff78c8);
  uVar1 = 0;
  if (*(char *)((undefined8 *)(lVar7 + _DAT_112ff78c0) + 1) != '\x01') {
    uVar1 = *(undefined8 *)(lVar7 + _DAT_112ff78c0);
  }
  uVar5 = *(undefined1 *)(lVar7 + _DAT_112ff78d0);
  func_0x000103c09eb4(*(long *)(lVar7 + _DAT_112ff78b8) + _DAT_112ff7af0,unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar7 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar3);
  piVar8 = *(int **)(lVar7 + 8);
  iVar2 = *piVar8;
  plVar6 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_103c09854;
                    /* WARNING: Could not recover jumptable at 0x000103c09850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar8))
            (unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),
             0xd00000000000002a,0x800000010f1aed40,uVar4,uVar1,uVar5,uVar3,lVar7);
  return;
}



/* Entry: 103c09854; end: 103c098ef;  */

void FUN_103c09854(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x103c098b0;
  }
  else {
    pcVar1 = FUN_103c098f0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103c098f0; end: 103c0993b;  */

void FUN_103c098f0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x60);
  FUN_103c09ef8(unaff_x22 + 0x38);
  func_0x000107c614ac(uVar2);
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x000103c09938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c0993c; end: 103c099a7; -[_TtC31CallSuperResolutionServicesImpl30CallSuperResolutionSessionImpl createProcessorWithFrameSize:completion:] */

void FUN_103c0993c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  FUN_103c09a94(param_1,param_2);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103c099a8; end: 103c09a07; -[_TtC31CallSuperResolutionServicesImpl30CallSuperResolutionSessionImpl init] */

void FUN_103c099a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallSuperResolutionServicesImpl.CallSuperResolutionSessionImpl",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c099d4);
  (*pcVar1)();
}



/* Entry: 103c09a08; end: 103c09a73; -[_TtC31CallSuperResolutionServicesImpl30CallSuperResolutionSessionImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c09a08(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff78b8));
  FUN_103c09ef8(param_1 + _DAT_112ff78e0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ff78f0));
  FUN_103c09e74(param_1 + _DAT_112ff78f8,0x112ff7930,&UNK_10dc65270);
  return;
}



/* Entry: 103c09a74; end: 103c09a93;  */

void FUN_103c09a74(void)

{
  func_0x000107c61168(&PTR_PTR_112946018);
  return;
}



/* Entry: 103c09a94; end: 103c09d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c09a94(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_d8 [24];
  long lStack_c0;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  undefined1 auStack_78 [40];
  
  puVar2 = &UNK_1106e85c8;
  func_0x000107c613fc(&UNK_1106e85c8,0x18,7);
  *(long *)(puVar2 + 0x10) = param_4;
  lStack_a0 = param_3;
  func_0x000107c60bc4(param_4);
  uVar7 = 0x112ff7930;
  func_0x0001000285a8(0x112ff7930,&UNK_10dc65270);
  func_0x000100087bd4(auStack_78,FUN_103c09d44,auStack_b0,uVar7);
  FUN_103c09d5c(auStack_78,auStack_d8);
  if (lStack_c0 == 0) {
    func_0x000103c09e74(auStack_d8,0x112ff7930,&UNK_10dc65270);
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    func_0x000100d68780(auStack_d8,auStack_b0);
    if ((*(byte *)(param_3 + _DAT_112ff78d8) & 1) == 0) {
      puVar5 = &UNK_1106e85f0;
      func_0x000107c613fc(&UNK_1106e85f0,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,param_3);
      func_0x000103c09eb4(auStack_b0,auStack_d8);
      puVar6 = &UNK_1106e8618;
      func_0x000107c613fc(&UNK_1106e8618,0x60,7);
      *(undefined8 *)(puVar6 + 0x10) = param_1;
      *(undefined8 *)(puVar6 + 0x18) = param_2;
      *(undefined **)(puVar6 + 0x20) = puVar5;
      *(code **)(puVar6 + 0x28) = FUN_103c09d34;
      *(undefined **)(puVar6 + 0x30) = puVar2;
      func_0x000100d68780(auStack_d8,puVar6 + 0x38);
      func_0x000107c6157c(puVar2);
      uVar7 = 6;
      func_0x0001001ca524(6,0,0x74,4,0,0,&UNK_10dc65280,puVar6,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uVar7);
    }
    else {
      iVar1 = 2;
      func_0x000100029b9c(2,0x1a,0,0);
      if (iVar1 == 0) {
        (**(code **)(param_4 + 0x10))(param_4,0);
      }
      else {
        func_0x000103c09eb4(auStack_b0,auStack_d8);
        uVar7 = 10;
        if (*(char *)((undefined8 *)(param_3 + _DAT_112ff78c0) + 1) != '\x01') {
          uVar7 = *(undefined8 *)(param_3 + _DAT_112ff78c0);
        }
        uVar3 = 0;
        FUN_103c0caec(0);
        func_0x000107c610f8();
        puVar4 = auStack_d8;
        FUN_103c0b078(param_1,param_2,puVar4,uVar7,uVar3);
        (**(code **)(param_4 + 0x10))(param_4,puVar4);
        func_0x000107c61170(puVar4);
      }
    }
    FUN_103c09ef8(auStack_b0);
  }
  func_0x000103c09e74(auStack_78,0x112ff7930,&UNK_10dc65270);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 103c09d34; end: 103c09d43;  */

void FUN_103c09d34(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103c09d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103c09d44; end: 103c09d5b;  */

void FUN_103c09d44(void)

{
  long unaff_x20;
  
  FUN_103c09154(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c09d5c; end: 103c09dab;  */

undefined8 FUN_103c09d5c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ff7930;
  func_0x0001000285a8(0x112ff7930,&UNK_10dc65270);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103c09dac; end: 103c09e37;  */

void FUN_103c09dac(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  plVar3 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103c09e38;
  plVar3[0x1f] = lVar4;
  plVar3[0x20] = unaff_x20 + 0x38;
  plVar3[0x1d] = lVar1;
  plVar3[0x1e] = lVar2;
  plVar3[0x1b] = lVar5;
  plVar3[0x1c] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c093d4,0,0);
  return;
}



/* Entry: 103c09e38; end: 103c09e73;  */

void FUN_103c09e38(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c09e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103c09e74; end: 103c09ef7;  */

undefined8 FUN_103c09e74(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103c09ef8; end: 103c09f17;  */

void FUN_103c09ef8(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103c09f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103c09f18; end: 103c09f67;  */

undefined8 FUN_103c09f18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ff7930;
  func_0x0001000285a8(0x112ff7930,&UNK_10dc65270);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103c09f68; end: 103c09f7b; -[_TtC31CallSuperResolutionServicesImpl34CallSuperResolutionSnapMLProcessor frameSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c09f68(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11380d0f0);
}



/* Entry: 103c09f7c; end: 103c0a2ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103c09f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  code *pcStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [48];
  
  lVar13 = unaff_x20;
  uStack_e8 = param_4;
  uStack_e0 = param_3;
  func_0x000107c614f0();
  lVar6 = 0x112ff79b8;
  lStack_f0 = lVar13;
  func_0x0001000285a8(0x112ff79b8,&UNK_10dc652f8);
  lStack_100 = *(long *)(lVar6 + -8);
  lVar17 = *(long *)(lStack_100 + 0x40);
  lStack_f8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar17 + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)&pcStack_110 - extraout_x8;
  lVar6 = 0x112ff79a8;
  func_0x0001000285a8(0x112ff79a8,&UNK_10dc65390);
  lVar13 = *(long *)(lVar6 + -8);
  lStack_108 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar18 - extraout_x8_00;
  lVar6 = 0x112ff79c0;
  func_0x0001000285a8(0x112ff79c0,&UNK_10dc65300);
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar19 - extraout_x8_01;
  (**(code **)(lVar15 + 0x68))
            (lVar14,*(undefined4 *)
                     PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             lVar6);
  iVar5 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar5 == 0) {
    FUN_103c0cc8c(lVar18,lVar19,lVar14);
  }
  else {
    uVar7 = 0;
    func_0x000103c0865c(0);
    func_0x000107c5fd10(lVar18,lVar19,uVar7,lVar14,uVar7);
  }
  lVar3 = _DAT_112ff7940;
  lVar2 = _DAT_112ff7938;
  (**(code **)(lVar15 + 8))(lVar14,lVar6);
  lVar15 = lStack_f8;
  lVar6 = lStack_100;
  pcStack_110 = *(code **)(lStack_100 + 0x20);
  (*pcStack_110)(unaff_x20 + lVar2,lVar18,lStack_f8);
  (**(code **)(lVar13 + 0x20))(unaff_x20 + lVar3,lVar19,lStack_108);
  uVar4 = uStack_e0;
  FUN_103c0af18(uStack_e0,unaff_x20 + _DAT_112ff7948);
  uVar7 = uStack_e8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11380d0f0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_103c0af18(uStack_e8,unaff_x20 + _DAT_112ff7958);
  lStack_108 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(lVar14,unaff_x20 + lVar2,lVar15);
  FUN_103c0af18(uVar4,auStack_a0);
  FUN_103c0af18(uVar7,auStack_c8);
  uVar11 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar12 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  uVar16 = lVar17 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar8 = &UNK_1106e8668;
  func_0x000107c613fc(&UNK_1106e8668,uVar16 + 0x58,uVar11 | 7);
  (*pcStack_110)(puVar8 + uVar12,lVar14,lVar15);
  func_0x000100d688ac(auStack_a0,puVar8 + uVar16);
  func_0x000100d688ac(auStack_c8,puVar8 + uVar16 + 0x28);
  *(long *)(puVar8 + uVar16 + 0x50) = lStack_f0;
  *(undefined **)(lStack_108 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar9 = 6;
  func_0x0001001ca524(6,0,0x74,3,0,0,&UNK_10dc65310,puVar8);
  func_0x000107c61574(puVar8);
  *(undefined8 *)(unaff_x20 + _DAT_112ff7950) = uVar9;
  puVar10 = &stack0xffffffffffffff28;
  func_0x000107c61154(puVar10,PTR_s_init_1125d9248);
  func_0x0001000834e4(uVar7);
  func_0x0001000834e4(uVar4);
  return puVar10;
}



/* Entry: 103c0a2f0; end: 103c0a35f;  */

void FUN_103c0a2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar2 = 0x112ff79c8;
  func_0x0001000285a8(0x112ff79c8,&UNK_10dc65318);
  *(long *)(unaff_x22 + 0x30) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c0a360,0,0);
  return;
}



/* Entry: 103c0a360; end: 103c0a3db;  */

void FUN_103c0a360(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000285a8(0x112ff79b8,&UNK_10dc652f8);
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103c0a3dc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Entry: 103c0a3dc; end: 103c0a423;  */

void FUN_103c0a3dc(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c0a424,0,0);
  return;
}



/* Entry: 103c0a424; end: 103c0a50b;  */

void FUN_103c0a424(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  
  lVar8 = *(long *)(unaff_x22 + 0x10);
  if (lVar8 != 0) {
    lVar7 = *(long *)(unaff_x22 + 0x20);
    *(long *)(unaff_x22 + 0x50) = lVar8;
    func_0x0001000f11b0();
    *(undefined8 *)(unaff_x22 + 0x58) = param_1;
    uVar2 = *(undefined8 *)(lVar7 + 0x18);
    lVar3 = *(long *)(lVar7 + 0x20);
    func_0x0001000a8868(lVar7,uVar2);
    uVar4 = *(undefined8 *)(lVar8 + 0x10);
    *(undefined8 *)(unaff_x22 + 0x60) = uVar4;
    piVar6 = *(int **)(lVar3 + 0x10);
    iVar1 = *piVar6;
    plVar5 = (long *)(ulong)(uint)piVar6[1];
    func_0x000107c61174();
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_103c0a50c;
                    /* WARNING: Could not recover jumptable at 0x000103c0a4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))(uVar4,uVar2,lVar3);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103c0a508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c0a50c; end: 103c0a573;  */

void FUN_103c0a50c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x60);
  *(undefined8 *)(lVar3 + 0x70) = param_1;
  *(long *)(lVar3 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x68));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103c0a574;
  }
  else {
    pcVar2 = FUN_103c0a6b0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103c0a574; end: 103c0a6af;  */

void FUN_103c0a574(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000f11b0();
  if (!SBORROW8(param_1,lVar8)) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar7 = *(long *)(unaff_x22 + 0x50);
    lVar9 = *(long *)(unaff_x22 + 0x28);
    uVar4 = *(undefined8 *)(lVar7 + 0x18);
    uVar6 = 1000000;
    func_0x000107c600c8(uVar4,1000000);
    uVar1 = *(undefined8 *)(lVar9 + 0x18);
    lVar2 = *(long *)(lVar9 + 0x20);
    func_0x0001000a8868(lVar9,uVar1);
    (**(code **)(lVar2 + 0x10))
              ((double)(param_1 - lVar8) / 1000000.0,uVar4,uVar6,param_3,uVar1,lVar2);
    pcVar3 = *(code **)(lVar7 + 0x20);
    uVar1 = *(undefined8 *)(lVar7 + 0x28);
    func_0x000107c6157c(uVar1);
    uVar4 = uVar10;
    func_0x000107c61174(uVar10);
    (*pcVar3)(uVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61574(uVar1);
    func_0x000107c61574(lVar7);
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_103c0a764;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
              (plVar5,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x30));
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103c0a6b0);
  (*pcVar3)();
}



/* Entry: 103c0a6b0; end: 103c0a763;  */

void FUN_103c0a6b0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar6 = *(long *)(unaff_x22 + 0x50);
  pcVar1 = *(code **)(lVar6 + 0x20);
  uVar2 = *(undefined8 *)(lVar6 + 0x28);
  uVar7 = *(undefined8 *)(lVar6 + 0x10);
  func_0x000107c6157c(uVar2);
  uVar3 = uVar7;
  func_0x000107c61174(uVar7);
  (*pcVar1)(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(lVar6);
  func_0x000107c614ac(uVar5);
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_103c0a764;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar4,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Entry: 103c0a764; end: 103c0a7ab;  */

void FUN_103c0a764(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c0a7ac,0,0);
  return;
}



/* Entry: 103c0a7ac; end: 103c0a893;  */

void FUN_103c0a7ac(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  
  lVar8 = *(long *)(unaff_x22 + 0x10);
  if (lVar8 != 0) {
    *(long *)(unaff_x22 + 0x50) = lVar8;
    lVar7 = *(long *)(unaff_x22 + 0x20);
    func_0x0001000f11b0();
    *(undefined8 *)(unaff_x22 + 0x58) = param_1;
    uVar2 = *(undefined8 *)(lVar7 + 0x18);
    lVar3 = *(long *)(lVar7 + 0x20);
    func_0x0001000a8868(lVar7,uVar2);
    uVar4 = *(undefined8 *)(lVar8 + 0x10);
    *(undefined8 *)(unaff_x22 + 0x60) = uVar4;
    piVar6 = *(int **)(lVar3 + 0x10);
    iVar1 = *piVar6;
    plVar5 = (long *)(ulong)(uint)piVar6[1];
    func_0x000107c61174();
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_103c0a50c;
                    /* WARNING: Could not recover jumptable at 0x000103c0a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))(uVar4,uVar2,lVar3);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103c0a890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c0a894; end: 103c0a917; -[_TtC31CallSuperResolutionServicesImpl34CallSuperResolutionSnapMLProcessor process:presentationTime:completionHandler:] */

/* WARNING: Possible PIC construction at 0x000103c0a900: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c0a904) */

void FUN_103c0a894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103c0ad60(param_3,param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103c0a918; end: 103c0aa1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0a918(void)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c614f0();
  lVar1 = 0x112ff79a8;
  func_0x0001000285a8(0x112ff79a8,&UNK_10dc65390);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))
            (&stack0xffffffffffffffb0 + -extraout_x8,unaff_x20 + _DAT_112ff7940,lVar1);
  func_0x000107c5fd2c(lVar1);
  (**(code **)(lVar3 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,lVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ff7950);
  func_0x000107c6157c(uVar2);
  func_0x000107c5fd50();
  func_0x000107c61574(uVar2);
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c0aa1c; end: 103c0ab2b; -[_TtC31CallSuperResolutionServicesImpl34CallSuperResolutionSnapMLProcessor dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0aa1c(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined8 uVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = 0x112ff79a8;
  func_0x0001000285a8(0x112ff79a8,&UNK_10dc65390);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))((long)&lStack_50 - extraout_x8,param_1 + _DAT_112ff7940,lVar2);
  func_0x000107c61174();
  func_0x000107c5fd2c(lVar2);
  (**(code **)(lVar4 + 8))((long)&lStack_50 - extraout_x8,lVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ff7950);
  func_0x000107c6157c(uVar3);
  func_0x000107c5fd50();
  func_0x000107c61574(uVar3);
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c0ab2c; end: 103c0abd3; -[_TtC31CallSuperResolutionServicesImpl34CallSuperResolutionSnapMLProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c0aba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c0abac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0ab2c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_112ff7938;
  lVar2 = 0x112ff79b8;
  func_0x0001000285a8(0x112ff79b8,&UNK_10dc652f8);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  lVar1 = _DAT_112ff7940;
  lVar2 = 0x112ff79a8;
  func_0x0001000285a8(0x112ff79a8,&UNK_10dc65390);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  lVar2 = *(long *)(((undefined8 *)(param_1 + _DAT_112ff7948))[3] + -8);
  if ((*(byte *)(lVar2 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff7948));
  return;
}



/* Entry: 103c0abd4; end: 103c0abdb;  */

void FUN_103c0abd4(void)

{
  if (lRam0000000112ff7988 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7b9278);
  return;
}



/* Entry: 103c0abdc; end: 103c0ac13;  */

void FUN_103c0abdc(undefined8 param_1)

{
  if (lRam0000000112ff7988 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7b9278);
  return;
}



/* Entry: 103c0ac14; end: 103c0ac3f; -[_TtC31CallSuperResolutionServicesImpl34CallSuperResolutionSnapMLProcessor init] */

void FUN_103c0ac14(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallSuperResolutionServicesImpl.CallSuperResolutionSnapMLProcessor",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0ac40);
  (*pcVar1)();
}



/* Entry: 103c0ac40; end: 103c0ad07;  */

void FUN_103c0ac40(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = 0x112ff7998;
  lVar1 = 0x13f;
  FUN_103c0ad08(0x13f,0x112ff7998,PTR___sScSMa_11034fda0);
  if (uVar2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x112ff79a0;
    lVar1 = 0x13f;
    FUN_103c0ad08(0x13f,0x112ff79a0,PTR___sScS12ContinuationVMa_11034fd50);
    if (uVar2 < 0x40) {
      lStack_48 = *(long *)(lVar1 + -8) + 0x40;
      puStack_40 = &UNK_10dc652b8;
      puStack_38 = PTR___sBoWV_11034d678 + 0x40;
      puStack_30 = &UNK_10dc652b8;
      puStack_28 = &UNK_10dc652d0;
      func_0x000107c61630(param_1,0x100,6,&lStack_50,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 103c0ad08; end: 103c0ad5f;  */

void FUN_103c0ad08(long param_1,long *param_2,code *param_3)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0xff;
    func_0x000103c0865c();
    (*param_3)();
    if (lVar1 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 103c0ad60; end: 103c0af0f;  */

/* WARNING: Possible PIC construction at 0x000103c0aea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c0aeb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c0aea4) */
/* WARNING: Removing unreachable block (ram,0x000103c0aebc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0ad60(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  code *pcVar6;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112ff79b0;
  uStack_78 = param_2;
  func_0x0001000285a8(0x112ff79b0,&UNK_10dc652f0);
  lStack_70 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &UNK_1106e8640;
  func_0x000107c613fc(&UNK_1106e8640,0x18,7);
  *(long *)(puVar2 + 0x10) = param_4;
  param_3 = param_3 + _DAT_112ff7958;
  uVar3 = *(ulong *)(param_3 + 0x18);
  lVar1 = *(long *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar3);
  pcVar6 = *(code **)(lVar1 + 0x18);
  func_0x000107c60bc4(param_4);
  (*pcVar6)(uVar3,lVar1);
  if ((uVar3 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,param_1);
  }
  else {
    puVar4 = (undefined *)0x0;
    func_0x000103c0865c();
    func_0x000107c613fc();
    *(undefined8 *)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = uStack_78;
    *(code **)(puVar4 + 0x20) = FUN_103c0af10;
    *(undefined **)(puVar4 + 0x28) = puVar2;
    puStack_68 = puVar4;
    func_0x000107c61174(param_1);
    func_0x000107c6157c(puVar2);
    func_0x000107c6157c(puVar4);
    uVar5 = 0x112ff79a8;
    func_0x0001000285a8(0x112ff79a8,&UNK_10dc65390);
    func_0x000107c5fd28(auStack_80 + -extraout_x8,&puStack_68,uVar5);
    puVar2 = puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 103c0af10; end: 103c0af17;  */

void FUN_103c0af10(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103c0b060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103c0af18; end: 103c0af5b;  */

long FUN_103c0af18(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103c0af5c; end: 103c0b013;  */

void FUN_103c0af5c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  ulong uVar6;
  
  lVar3 = 0x112ff79b8;
  func_0x0001000285a8(0x112ff79b8,&UNK_10dc652f8);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar4 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  uVar6 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  uVar5 = *(undefined8 *)(unaff_x20 + (uVar6 + 0x57 & 0xffffffffffffff8));
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103c0b014;
  lVar1 = unaff_x20 + uVar6 + 0x28;
  plVar2[4] = unaff_x20 + uVar6;
  plVar2[5] = lVar1;
  plVar2[3] = unaff_x20 + uVar4;
  lVar3 = 0x112ff79c8;
  func_0x0001000285a8(0x112ff79c8,&UNK_10dc65318,unaff_x20 + uVar6,lVar1,uVar5);
  plVar2[6] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[7] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[8] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c0a360,0,0);
  return;
}



/* Entry: 103c0b014; end: 103c0b04f;  */

void FUN_103c0b014(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c0b04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103c0b050; end: 103c0b063;  */

void FUN_103c0b050(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000103c0b060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,param_1);
  return;
}



/* Entry: 103c0b064; end: 103c0b077; -[_TtC31CallSuperResolutionServicesImpl30CallSuperResolutionVTProcessor frameSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c0b064(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11380d0f8);
}



/* Entry: 103c0b078; end: 103c0bd17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c0b078(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  double *pdVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined1 *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar17;
  undefined8 uVar18;
  long unaff_x20;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined **ppuStack_138;
  code *pcStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [40];
  
  lVar17 = unaff_x20;
  ppuStack_138 = (undefined **)param_4;
  uStack_f8 = param_3;
  func_0x000107c614f0();
  lVar8 = 0x112ff79b8;
  lStack_f0 = lVar17;
  func_0x0001000285a8(0x112ff79b8,&UNK_10dc652f8);
  lStack_108 = *(long *)(lVar8 + -8);
  lStack_128 = *(long *)(lStack_108 + 0x40);
  lStack_100 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_128 + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&lStack_150 - extraout_x8;
  lVar8 = 0x112ff79a8;
  func_0x0001000285a8(0x112ff79a8,&UNK_10dc65390);
  lVar22 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar12 - extraout_x8_00;
  lVar17 = 0x112ff79c0;
  func_0x0001000285a8(0x112ff79c0,&UNK_10dc65300);
  lVar23 = *(long *)(lVar17 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = lVar19 - extraout_x8_01;
  (**(code **)(lVar23 + 0x68))
            (lVar21,*(undefined4 *)
                     PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             lVar17);
  iVar6 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar6 == 0) {
    FUN_103c0cc8c(lVar12,lVar19,lVar21);
  }
  else {
    uVar7 = 0;
    func_0x000103c0865c(0);
    func_0x000107c5fd10(lVar12,lVar19,uVar7,lVar21,uVar7);
  }
  lVar4 = _DAT_112ff79d8;
  lVar3 = _DAT_112ff79d0;
  (**(code **)(lVar23 + 8))(lVar21,lVar17);
  pcStack_130 = *(code **)(lStack_108 + 0x20);
  (*pcStack_130)(unaff_x20 + lVar3,lVar12,lStack_100);
  (**(code **)(lVar22 + 0x20))(unaff_x20 + lVar4,lVar19,lVar8);
  *(undefined4 *)(unaff_x20 + _DAT_112ff79e8) = 0x40000000;
  puStack_110 = (undefined1 *)_DAT_112ff79f0;
  uVar7 = 0;
  func_0x000103c0d60c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  lVar8 = 0;
  puStack_118 = (undefined1 *)uVar7;
  func_0x000107c5f824();
  lStack_148 = *(long *)(lVar8 + -8);
  lStack_140 = lVar8;
  lStack_120 = lVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar21 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f80c(lVar21);
  lVar8 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar17 = lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puStack_e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = 0x112d4ac68;
  FUN_103c0d698(0x112d4ac68);
  uVar10 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar9 = 0x112d4ac78;
  func_0x000103c0d6d8(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar17,&puStack_e0,uVar10,uVar9,lVar8,uVar7);
  lVar8 = 0;
  func_0x000107c5ffd8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = lVar17 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12_00 + 0x68))
            (lVar8,*(undefined4 *)
                    PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
            );
  uVar10 = 0xd000000000000025;
  func_0x000107c5ffec(0xd000000000000025,0x800000010f1aee00,lVar21,lVar17,lVar8,0);
  uVar7 = uStack_f8;
  lVar8 = lStack_120;
  *(undefined8 *)(unaff_x20 + (long)puStack_110) = uVar10;
  *(undefined8 *)(unaff_x20 + _DAT_112ff79f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7a00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7a08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7a10) = 0;
  pdVar1 = (double *)(unaff_x20 + _DAT_11380d0f8);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  func_0x000103c0d5c8(uStack_f8,unaff_x20 + _DAT_112ff79e0);
  puVar11 = &stack0xffffffffffffff78;
  func_0x000107c61154(puVar11,PTR_s_init_1125d9248);
  func_0x000103c0d60c(0,0x112ff7a50,
                      &PTR__OBJC_CLASS___VTLowLatencySuperResolutionScalerConfiguration_1126ad988);
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x103c0b9ec);
    (*pcVar5)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x103c0b9f0);
    (*pcVar5)();
  }
  if (((ulong)ABS(param_1) < 0x7ff0000000000000) && ((ulong)ABS(param_2) < 0x7ff0000000000000)) {
    if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x103c0b9f8);
      (*pcVar5)();
    }
    if (param_2 < 9.223372036854776e+18) {
      lVar12 = (long)param_1;
      func_0x000107c600a4(lVar12,(long)param_2);
      lVar19 = *(long *)(lVar12 + 0x10);
      lVar17 = 0x20;
      do {
        if (lVar19 == 0) {
          func_0x000107c6142c();
          FUN_103c0d83c(uVar7);
          return puVar11;
        }
        pfVar2 = (float *)(lVar12 + lVar17);
        lVar17 = lVar17 + 4;
        lVar19 = lVar19 + -1;
      } while (*pfVar2 != 2.0);
      func_0x000107c6142c();
      uVar18 = *(undefined8 *)(puVar11 + _DAT_112ff79f0);
      puVar13 = &UNK_1106e86b8;
      func_0x000107c613fc(&UNK_1106e86b8,0x18,7);
      func_0x000107c61614(puVar13 + 0x10,puVar11);
      func_0x000103c0d5c8(uVar7,auStack_b0);
      puVar14 = &UNK_1106e86e0;
      func_0x000107c613fc(&UNK_1106e86e0,0x60,7);
      *(undefined **)(puVar14 + 0x10) = puVar13;
      *(double *)(puVar14 + 0x18) = param_1;
      *(double *)(puVar14 + 0x20) = param_2;
      *(undefined ***)(puVar14 + 0x28) = ppuStack_138;
      FUN_103c0d64c(auStack_b0,puVar14 + 0x30);
      *(long *)(puVar14 + 0x58) = lStack_f0;
      uStack_c0 = 0x103c0d664;
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0x42000000;
      puStack_d0 = &UNK_1000b0c7c;
      puStack_c8 = &UNK_1106e86f8;
      ppuVar15 = &puStack_e0;
      puStack_b8 = puVar14;
      func_0x000107c60bc4();
      ppuStack_138 = ppuVar15;
      lStack_120 = lVar8;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar8 = lVar8 - (extraout_x12_01 + 0xfU & 0xfffffffffffffff0);
      func_0x000107c61174(uVar18);
      puVar16 = puVar11;
      func_0x000107c61174();
      puStack_110 = puVar16;
      func_0x000107c6157c(puVar13);
      func_0x000107c5f808(lVar8);
      lVar17 = 0;
      func_0x000107c5f7fc();
      lVar12 = *(long *)(lVar17 + -8);
      lStack_150 = lVar8;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
      lVar19 = lVar8 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
      puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar7 = 0x112d4af88;
      puStack_118 = puVar11;
      FUN_103c0d698(0x112d4af88);
      uVar10 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar9 = 0x112d4af98;
      func_0x000103c0d6d8(0x112d4af98,0x112d4af90,&UNK_10d914100);
      func_0x000107c60264(lVar19,&puStack_e8,uVar10,uVar9,lVar17,uVar7);
      ppuVar15 = ppuStack_138;
      func_0x000107c5ffe8(0,lVar8,lVar19,ppuStack_138);
      func_0x000107c60bd0(ppuVar15);
      func_0x000107c61170(uVar18);
      (**(code **)(lVar12 + 8))(lVar19,lVar17);
      (**(code **)(lStack_148 + 8))(lVar8,lStack_140);
      puVar14 = puStack_b8;
      lVar17 = lStack_120;
      func_0x000107c61574(puVar13);
      func_0x000107c61574(puVar14);
      puVar13 = &UNK_1106e86b8;
      func_0x000107c613fc(&UNK_1106e86b8,0x18,7);
      puVar11 = puStack_110;
      func_0x000107c61614(puVar13 + 0x10,puStack_110);
      func_0x000107c61170(puVar11);
      lVar8 = lStack_128;
      lStack_120 = lVar17;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar19 = lStack_100;
      lVar12 = lStack_108;
      uVar20 = lVar8 + 0xfU & 0xfffffffffffffff0;
      lVar17 = lVar17 - uVar20;
      (**(code **)(lStack_108 + 0x10))(lVar17,puVar11 + _DAT_112ff79d0,lStack_100);
      ppuStack_138 = (undefined **)lVar17;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      pcVar5 = pcStack_130;
      lVar21 = lVar17 - uVar20;
      (*pcStack_130)(lVar21,lVar17,lVar19);
      uVar7 = uStack_f8;
      func_0x000103c0d5c8(uStack_f8,&puStack_e0);
      uVar20 = (ulong)*(byte *)(lVar12 + 0x50);
      uVar24 = uVar20 + 0x10 & (uVar20 ^ 0xffffffffffffffff);
      uVar25 = lVar8 + uVar24 + 7 & 0xfffffffffffffff8;
      puVar14 = &UNK_1106e8730;
      func_0x000107c613fc(&UNK_1106e8730,uVar25 + 0x38,uVar20 | 7);
      (*pcVar5)(puVar14 + uVar24,lVar21,lVar19);
      puVar11 = puStack_118;
      *(undefined **)(puVar14 + uVar25) = puVar13;
      FUN_103c0d64c(&puStack_e0,puVar14 + uVar25 + 8);
      *(long *)(puVar14 + uVar25 + 0x30) = lStack_f0;
      *(undefined **)(lStack_120 + -0x10) = PTR___sytN_11034f1b0 + 8;
      uVar10 = 6;
      func_0x0001001ca524(6,0,0x74,3,0,0,&UNK_10dc653a0,puVar14);
      func_0x000107c61574(puVar14);
      FUN_103c0d83c(uVar7);
      uVar7 = *(undefined8 *)(puStack_110 + _DAT_112ff7a00);
      *(undefined8 *)(puStack_110 + _DAT_112ff7a00) = uVar10;
      func_0x000107c61574(uVar7);
      return puVar11;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x103c0b9fc);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x103c0b9f4);
  (*pcVar5)();
}



/* Entry: 103c0bd18; end: 103c0bdb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0bd18(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined *puVar26;
  long *unaff_x22;
  long *plVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x1a] = param_3;
  unaff_x22[0x1b] = param_4;
  unaff_x22[0x19] = param_2;
  lVar17 = 0x112ff79c8;
  func_0x0001000285a8(0x112ff79c8,&UNK_10dc65318);
  unaff_x22[0x1c] = lVar17;
  lVar17 = *(long *)(lVar17 + -8);
  unaff_x22[0x1d] = lVar17;
  uVar4 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x1e] = uVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    pcVar12 = FUN_103c0bdb4;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = unaff_x22[0x1e];
  lVar17 = unaff_x22[0x1a];
  func_0x0001000285a8(0x112ff79b8,&UNK_10dc652f8);
  func_0x000107c5fd34(lVar20);
  func_0x000107c61428(lVar17 + 0x10,unaff_x22 + 0x12,0,0);
  puVar5 = (undefined8 *)
           (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4);
  func_0x000107c615b8();
  unaff_x22[0x1f] = (long)puVar5;
  *puVar5 = unaff_x22;
  puVar5[1] = FUN_103c0be80;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    plVar28 = unaff_x22 + 0x15;
    goto LAB_107c5fd38;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar27 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xf8));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    pcVar12 = FUN_103c0bef4;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = plVar27[0x15];
  if (lVar16 == 0) {
    (**(code **)(plVar27[0x1d] + 8))(plVar27[0x1e],plVar27[0x1c]);
LAB_103c0c214:
    func_0x000107c615c0(plVar27[0x1e]);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x000103c0c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar27[1])();
      return;
    }
  }
  else {
    plVar27[0x20] = lVar16;
    lVar20 = plVar27[0x1a] + 0x10;
    func_0x000107c61618();
    plVar27[0x21] = lVar20;
    if (lVar20 == 0) {
LAB_103c0c1e8:
      lVar20 = plVar27[0x1d];
      lVar18 = plVar27[0x1e];
      lVar23 = plVar27[0x1c];
      (**(code **)(lVar16 + 0x20))(*(undefined8 *)(lVar16 + 0x10));
      (**(code **)(lVar20 + 8))(lVar18,lVar23);
      func_0x000107c61574(lVar16);
      goto LAB_103c0c214;
    }
    lVar18 = *(long *)(lVar20 + _DAT_112ff7a10);
    plVar27[0x22] = lVar18;
    if (lVar18 == 0) {
LAB_103c0c1e4:
      func_0x000107c61170();
      goto LAB_103c0c1e8;
    }
    lVar23 = *(long *)(lVar20 + _DAT_112ff7a08);
    plVar27[0x23] = lVar23;
    if (lVar23 == 0) goto LAB_103c0c1e4;
    lVar25 = *(long *)(lVar20 + _DAT_112ff79f8);
    plVar27[0x24] = lVar25;
    if (lVar25 == 0) goto LAB_103c0c1e4;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar6 = lVar25;
    func_0x0001000f11b0();
    plVar27[0x25] = lVar6;
    plVar27[0x16] = 0;
    plVar28 = plVar27 + 0x16;
    iVar3 = 0;
    func_0x000107c60ad8(0,lVar23);
    lVar6 = plVar27[0x16];
    plVar27[0x26] = lVar6;
    if (iVar3 != 0 || lVar6 == 0) {
LAB_103c0c260:
      lVar6 = plVar27[0x1d];
      lVar7 = plVar27[0x1e];
      lVar14 = plVar27[0x1c];
      (**(code **)(lVar16 + 0x20))(*(undefined8 *)(lVar16 + 0x10));
      func_0x000107c61170(lVar18);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(lVar25);
      func_0x000107c61170(lVar20);
      (**(code **)(lVar6 + 8))(lVar7,lVar14);
      func_0x000107c61574(lVar16);
LAB_103c0c324:
      func_0x000107c61170(plVar27[0x16]);
      goto LAB_103c0c214;
    }
    uVar24 = *(ulong *)(lVar16 + 0x10);
    func_0x000107c61174();
    func_0x000107c61174();
    uVar4 = uVar24;
    FUN_103c0d0c0();
    func_0x000107c61170(uVar24);
    if ((uVar4 & 1) == 0) {
      func_0x000107c61170(lVar6);
      goto LAB_103c0c260;
    }
    lVar7 = *(long *)(lVar16 + 0x18);
    lVar14 = 1000000;
    func_0x000107c600c8();
    plVar27[0x27] = lVar7;
    plVar27[0x28] = lVar14;
    plVar27[0x29] = (long)plVar28;
    plVar27[0x17] = 0;
    iVar3 = 0;
    func_0x000107c60ad8(0,lVar18,plVar27 + 0x17);
    puVar26 = (undefined *)plVar27[0x17];
    plVar27[0x2a] = (long)puVar26;
    if ((iVar3 != 0) || (puVar26 == (undefined *)0x0)) {
LAB_103c0c2c8:
      lVar7 = plVar27[0x1d];
      lVar14 = plVar27[0x1e];
      lVar19 = plVar27[0x1c];
      (**(code **)(lVar16 + 0x20))(*(undefined8 *)(lVar16 + 0x10));
      func_0x000107c61170(lVar18);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(lVar25);
      func_0x000107c61170(lVar20);
      func_0x000107c61170(lVar6);
      (**(code **)(lVar7 + 8))(lVar14,lVar19);
      func_0x000107c61574(lVar16);
      func_0x000107c61170(plVar27[0x17]);
      goto LAB_103c0c324;
    }
    puVar8 = PTR__OBJC_CLASS___VTFrameProcessorFrame_1126ad990;
    func_0x000107c610f8();
    func_0x000107c61174();
    plVar27[0x30] = lVar7;
    *(int *)(plVar27 + 0x31) = (int)lVar14;
    uVar22 = (undefined4)((ulong)lVar14 >> 0x20);
    *(undefined4 *)((long)plVar27 + 0x18c) = uVar22;
    plVar27[0x32] = (long)plVar28;
    func_0x000107c45a78();
    plVar27[0x2b] = (long)puVar8;
    if (puVar8 == (undefined *)0x0) {
LAB_103c0c2c0:
      func_0x000107c61170(puVar26);
      goto LAB_103c0c2c8;
    }
    puVar9 = PTR__OBJC_CLASS___VTFrameProcessorFrame_1126ad990;
    func_0x000107c610f8();
    plVar27[0x33] = lVar7;
    *(int *)(plVar27 + 0x34) = (int)lVar14;
    *(undefined4 *)((long)plVar27 + 0x1a4) = uVar22;
    plVar27[0x35] = (long)plVar28;
    func_0x000107c45a78();
    plVar27[0x2c] = (long)puVar9;
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c61170(puVar26);
      puVar26 = puVar8;
      goto LAB_103c0c2c0;
    }
    puVar26 = PTR__OBJC_CLASS___VTLowLatencySuperResolutionScalerParameters_1126ad998;
    func_0x000107c610f8();
    func_0x000107c488d4();
    plVar27[0x2d] = (long)puVar26;
    plVar27[7] = (long)(plVar27 + 0x18);
    plVar27[2] = (long)plVar27;
    plVar27[3] = (long)FUN_103c0c334;
    plVar28 = plVar27 + 2;
    func_0x000107c61448(plVar28,1);
    lVar16 = 0x112ff7a58;
    func_0x0001000285a8(0x112ff7a58,&UNK_10dc653b0);
    plVar27[10] = (long)PTR___NSConcreteStackBlock_11034bd00;
    plVar27[0x11] = lVar16;
    plVar27[0xb] = 0x42000000;
    plVar27[0xc] = (long)FUN_103c0c7a4;
    plVar27[0xd] = (long)&UNK_1106e8748;
    plVar27[0xe] = (long)plVar28;
    func_0x000107c61174(puVar26);
    func_0x000107c4f2dc(lVar25);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(plVar27 + 2);
      return;
    }
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar28 = (long *)*plVar27;
  lVar16 = *(long *)(*plVar27 + 0x30);
  *(long *)(*plVar27 + 0x170) = lVar16;
  if (lVar16 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      pcVar12 = FUN_103c0c3d0;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    pcVar12 = FUN_103c0c5b8;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = plVar28[0x2d];
  lVar20 = plVar28[0x25];
  func_0x000107c615e8(plVar28[0x18]);
  func_0x000107c61170();
  func_0x0001000f11b0();
  if (SBORROW8(lVar17,lVar20)) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x103c0c5b4);
    (*pcVar12)();
  }
  lVar18 = plVar28[0x2c];
  lVar19 = plVar28[0x2d];
  lVar23 = plVar28[0x2a];
  lVar29 = plVar28[0x2b];
  lVar25 = plVar28[0x28];
  lVar15 = plVar28[0x29];
  lVar6 = plVar28[0x26];
  lVar31 = plVar28[0x27];
  lVar7 = plVar28[0x23];
  lVar32 = plVar28[0x24];
  lVar14 = plVar28[0x21];
  lVar1 = plVar28[0x22];
  lVar30 = plVar28[0x20];
  lVar10 = plVar28[0x1b];
  uVar13 = *(undefined8 *)(lVar10 + 0x18);
  lVar2 = *(long *)(lVar10 + 0x20);
  func_0x000103c0d85c(lVar10,uVar13);
  (**(code **)(lVar2 + 0x10))
            ((double)(lVar17 - lVar20) / 1000000.0,lVar31,lVar25,lVar15,uVar13,lVar2);
  pcVar12 = *(code **)(lVar30 + 0x20);
  uVar13 = *(undefined8 *)(lVar30 + 0x28);
  func_0x000107c6157c(uVar13);
  lVar17 = lVar18;
  func_0x000107c3ecb8();
  func_0x000107c61180();
  (*pcVar12)();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar17);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(lVar30);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(plVar28[0x17]);
  func_0x000107c61170(plVar28[0x16]);
  puVar5 = (undefined8 *)
           (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4);
  func_0x000107c615b8();
  plVar28[0x2f] = (long)puVar5;
  *puVar5 = plVar28;
  puVar5[1] = FUN_103c0c730;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    plVar28 = plVar28 + 0x15;
  }
  else {
    func_0x000107c60e78();
    lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar17 = plVar28[0x2d];
    lVar23 = plVar28[0x2e];
    lVar16 = plVar28[0x2b];
    lVar6 = plVar28[0x2c];
    lVar31 = plVar28[0x2a];
    lVar32 = plVar28[0x26];
    lVar20 = plVar28[0x23];
    lVar7 = plVar28[0x24];
    lVar18 = plVar28[0x21];
    lVar14 = plVar28[0x22];
    lVar29 = plVar28[0x20];
    func_0x000107c61654();
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar20);
    func_0x000107c61170(lVar32);
    func_0x000107c61170(lVar31);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(plVar28[0x17]);
    func_0x000107c61170(plVar28[0x16]);
    pcVar12 = *(code **)(lVar29 + 0x20);
    uVar13 = *(undefined8 *)(lVar29 + 0x28);
    uVar21 = *(undefined8 *)(lVar29 + 0x10);
    func_0x000107c6157c(uVar13);
    uVar11 = uVar21;
    func_0x000107c61174();
    (*pcVar12)(uVar21);
    func_0x000107c61170(uVar11);
    func_0x000107c61574(uVar13);
    func_0x000107c61574(lVar29);
    func_0x000107c614ac(lVar23);
    puVar5 = (undefined8 *)
             (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4);
    func_0x000107c615b8();
    plVar28[0x2f] = (long)puVar5;
    *puVar5 = plVar28;
    puVar5[1] = FUN_103c0c730;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
      func_0x000107c60e78();
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar17 = *(long *)(*plVar28 + 0x178);
      func_0x000107c615c0();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
        func_0x000107c60e78();
        plVar28 = (long *)(lVar17 + 0x20);
        func_0x000103c0d85c(plVar28,*(undefined8 *)(lVar17 + 0x38));
        lVar17 = *plVar28;
        if (lVar15 != 0) {
          uVar13 = 0x112d393f0;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          plVar28 = (long *)PTR___ss5ErrorWS_11034ee10;
          func_0x000107c613f8();
          *plVar28 = lVar15;
          func_0x000107c61174(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar17,uVar13);
          return;
        }
        **(long **)(*(long *)(lVar17 + 0x40) + 0x28) = lVar25;
        func_0x000107c615f0(lVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar17);
        return;
      }
      pcVar12 = FUN_103c0d910;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar12,0,0);
      return;
    }
    plVar28 = plVar28 + 0x15;
  }
LAB_107c5fd38:
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaF_11034fd68)(puVar5,plVar28,0,0);
  return;
}



/* Entry: 103c0bdb4; end: 103c0be7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0bdb4(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined *puVar26;
  long *unaff_x22;
  long *plVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = unaff_x22[0x1e];
  lVar17 = unaff_x22[0x1a];
  func_0x0001000285a8(0x112ff79b8,&UNK_10dc652f8);
  func_0x000107c5fd34(lVar20);
  func_0x000107c61428(lVar17 + 0x10,unaff_x22 + 0x12,0,0);
  puVar5 = (undefined8 *)
           (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4);
  func_0x000107c615b8();
  unaff_x22[0x1f] = (long)puVar5;
  *puVar5 = unaff_x22;
  puVar5[1] = FUN_103c0be80;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    plVar28 = unaff_x22 + 0x15;
    goto LAB_107c5fd38;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar27 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xf8));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    pcVar3 = FUN_103c0bef4;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = plVar27[0x15];
  if (lVar16 == 0) {
    (**(code **)(plVar27[0x1d] + 8))(plVar27[0x1e],plVar27[0x1c]);
LAB_103c0c214:
    func_0x000107c615c0(plVar27[0x1e]);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x000103c0c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar27[1])();
      return;
    }
  }
  else {
    plVar27[0x20] = lVar16;
    lVar20 = plVar27[0x1a] + 0x10;
    func_0x000107c61618();
    plVar27[0x21] = lVar20;
    if (lVar20 == 0) {
LAB_103c0c1e8:
      lVar20 = plVar27[0x1d];
      lVar18 = plVar27[0x1e];
      lVar23 = plVar27[0x1c];
      (**(code **)(lVar16 + 0x20))(*(undefined8 *)(lVar16 + 0x10));
      (**(code **)(lVar20 + 8))(lVar18,lVar23);
      func_0x000107c61574(lVar16);
      goto LAB_103c0c214;
    }
    lVar18 = *(long *)(lVar20 + _DAT_112ff7a10);
    plVar27[0x22] = lVar18;
    if (lVar18 == 0) {
LAB_103c0c1e4:
      func_0x000107c61170();
      goto LAB_103c0c1e8;
    }
    lVar23 = *(long *)(lVar20 + _DAT_112ff7a08);
    plVar27[0x23] = lVar23;
    if (lVar23 == 0) goto LAB_103c0c1e4;
    lVar25 = *(long *)(lVar20 + _DAT_112ff79f8);
    plVar27[0x24] = lVar25;
    if (lVar25 == 0) goto LAB_103c0c1e4;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar6 = lVar25;
    func_0x0001000f11b0();
    plVar27[0x25] = lVar6;
    plVar27[0x16] = 0;
    plVar28 = plVar27 + 0x16;
    iVar4 = 0;
    func_0x000107c60ad8(0,lVar23);
    lVar6 = plVar27[0x16];
    plVar27[0x26] = lVar6;
    if (iVar4 != 0 || lVar6 == 0) {
LAB_103c0c260:
      lVar6 = plVar27[0x1d];
      lVar8 = plVar27[0x1e];
      lVar14 = plVar27[0x1c];
      (**(code **)(lVar16 + 0x20))(*(undefined8 *)(lVar16 + 0x10));
      func_0x000107c61170(lVar18);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(lVar25);
      func_0x000107c61170(lVar20);
      (**(code **)(lVar6 + 8))(lVar8,lVar14);
      func_0x000107c61574(lVar16);
LAB_103c0c324:
      func_0x000107c61170(plVar27[0x16]);
      goto LAB_103c0c214;
    }
    uVar24 = *(ulong *)(lVar16 + 0x10);
    func_0x000107c61174();
    func_0x000107c61174();
    uVar7 = uVar24;
    FUN_103c0d0c0();
    func_0x000107c61170(uVar24);
    if ((uVar7 & 1) == 0) {
      func_0x000107c61170(lVar6);
      goto LAB_103c0c260;
    }
    lVar8 = *(long *)(lVar16 + 0x18);
    lVar14 = 1000000;
    func_0x000107c600c8();
    plVar27[0x27] = lVar8;
    plVar27[0x28] = lVar14;
    plVar27[0x29] = (long)plVar28;
    plVar27[0x17] = 0;
    iVar4 = 0;
    func_0x000107c60ad8(0,lVar18,plVar27 + 0x17);
    puVar26 = (undefined *)plVar27[0x17];
    plVar27[0x2a] = (long)puVar26;
    if ((iVar4 != 0) || (puVar26 == (undefined *)0x0)) {
LAB_103c0c2c8:
      lVar8 = plVar27[0x1d];
      lVar14 = plVar27[0x1e];
      lVar19 = plVar27[0x1c];
      (**(code **)(lVar16 + 0x20))(*(undefined8 *)(lVar16 + 0x10));
      func_0x000107c61170(lVar18);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(lVar25);
      func_0x000107c61170(lVar20);
      func_0x000107c61170(lVar6);
      (**(code **)(lVar8 + 8))(lVar14,lVar19);
      func_0x000107c61574(lVar16);
      func_0x000107c61170(plVar27[0x17]);
      goto LAB_103c0c324;
    }
    puVar9 = PTR__OBJC_CLASS___VTFrameProcessorFrame_1126ad990;
    func_0x000107c610f8();
    func_0x000107c61174();
    plVar27[0x30] = lVar8;
    *(int *)(plVar27 + 0x31) = (int)lVar14;
    uVar22 = (undefined4)((ulong)lVar14 >> 0x20);
    *(undefined4 *)((long)plVar27 + 0x18c) = uVar22;
    plVar27[0x32] = (long)plVar28;
    func_0x000107c45a78();
    plVar27[0x2b] = (long)puVar9;
    if (puVar9 == (undefined *)0x0) {
LAB_103c0c2c0:
      func_0x000107c61170(puVar26);
      goto LAB_103c0c2c8;
    }
    puVar10 = PTR__OBJC_CLASS___VTFrameProcessorFrame_1126ad990;
    func_0x000107c610f8();
    plVar27[0x33] = lVar8;
    *(int *)(plVar27 + 0x34) = (int)lVar14;
    *(undefined4 *)((long)plVar27 + 0x1a4) = uVar22;
    plVar27[0x35] = (long)plVar28;
    func_0x000107c45a78();
    plVar27[0x2c] = (long)puVar10;
    if (puVar10 == (undefined *)0x0) {
      func_0x000107c61170(puVar26);
      puVar26 = puVar9;
      goto LAB_103c0c2c0;
    }
    puVar26 = PTR__OBJC_CLASS___VTLowLatencySuperResolutionScalerParameters_1126ad998;
    func_0x000107c610f8();
    func_0x000107c488d4();
    plVar27[0x2d] = (long)puVar26;
    plVar27[7] = (long)(plVar27 + 0x18);
    plVar27[2] = (long)plVar27;
    plVar27[3] = (long)FUN_103c0c334;
    plVar28 = plVar27 + 2;
    func_0x000107c61448(plVar28,1);
    lVar16 = 0x112ff7a58;
    func_0x0001000285a8(0x112ff7a58,&UNK_10dc653b0);
    plVar27[10] = (long)PTR___NSConcreteStackBlock_11034bd00;
    plVar27[0x11] = lVar16;
    plVar27[0xb] = 0x42000000;
    plVar27[0xc] = (long)FUN_103c0c7a4;
    plVar27[0xd] = (long)&UNK_1106e8748;
    plVar27[0xe] = (long)plVar28;
    func_0x000107c61174(puVar26);
    func_0x000107c4f2dc(lVar25);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(plVar27 + 2);
      return;
    }
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar28 = (long *)*plVar27;
  lVar16 = *(long *)(*plVar27 + 0x30);
  *(long *)(*plVar27 + 0x170) = lVar16;
  if (lVar16 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      pcVar3 = FUN_103c0c3d0;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    pcVar3 = FUN_103c0c5b8;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = plVar28[0x2d];
  lVar20 = plVar28[0x25];
  func_0x000107c615e8(plVar28[0x18]);
  func_0x000107c61170();
  func_0x0001000f11b0();
  if (SBORROW8(lVar17,lVar20)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103c0c5b4);
    (*pcVar3)();
  }
  lVar18 = plVar28[0x2c];
  lVar19 = plVar28[0x2d];
  lVar23 = plVar28[0x2a];
  lVar29 = plVar28[0x2b];
  lVar25 = plVar28[0x28];
  lVar15 = plVar28[0x29];
  lVar6 = plVar28[0x26];
  lVar31 = plVar28[0x27];
  lVar8 = plVar28[0x23];
  lVar32 = plVar28[0x24];
  lVar14 = plVar28[0x21];
  lVar1 = plVar28[0x22];
  lVar30 = plVar28[0x20];
  lVar11 = plVar28[0x1b];
  uVar13 = *(undefined8 *)(lVar11 + 0x18);
  lVar2 = *(long *)(lVar11 + 0x20);
  func_0x000103c0d85c(lVar11,uVar13);
  (**(code **)(lVar2 + 0x10))
            ((double)(lVar17 - lVar20) / 1000000.0,lVar31,lVar25,lVar15,uVar13,lVar2);
  pcVar3 = *(code **)(lVar30 + 0x20);
  uVar13 = *(undefined8 *)(lVar30 + 0x28);
  func_0x000107c6157c(uVar13);
  lVar17 = lVar18;
  func_0x000107c3ecb8();
  func_0x000107c61180();
  (*pcVar3)();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar17);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(lVar30);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(plVar28[0x17]);
  func_0x000107c61170(plVar28[0x16]);
  puVar5 = (undefined8 *)
           (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4);
  func_0x000107c615b8();
  plVar28[0x2f] = (long)puVar5;
  *puVar5 = plVar28;
  puVar5[1] = FUN_103c0c730;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    plVar28 = plVar28 + 0x15;
  }
  else {
    func_0x000107c60e78();
    lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar17 = plVar28[0x2d];
    lVar23 = plVar28[0x2e];
    lVar16 = plVar28[0x2b];
    lVar6 = plVar28[0x2c];
    lVar31 = plVar28[0x2a];
    lVar32 = plVar28[0x26];
    lVar20 = plVar28[0x23];
    lVar8 = plVar28[0x24];
    lVar18 = plVar28[0x21];
    lVar14 = plVar28[0x22];
    lVar29 = plVar28[0x20];
    func_0x000107c61654();
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar20);
    func_0x000107c61170(lVar32);
    func_0x000107c61170(lVar31);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(plVar28[0x17]);
    func_0x000107c61170(plVar28[0x16]);
    pcVar3 = *(code **)(lVar29 + 0x20);
    uVar13 = *(undefined8 *)(lVar29 + 0x28);
    uVar21 = *(undefined8 *)(lVar29 + 0x10);
    func_0x000107c6157c(uVar13);
    uVar12 = uVar21;
    func_0x000107c61174();
    (*pcVar3)(uVar21);
    func_0x000107c61170(uVar12);
    func_0x000107c61574(uVar13);
    func_0x000107c61574(lVar29);
    func_0x000107c614ac(lVar23);
    puVar5 = (undefined8 *)
             (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4);
    func_0x000107c615b8();
    plVar28[0x2f] = (long)puVar5;
    *puVar5 = plVar28;
    puVar5[1] = FUN_103c0c730;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
      func_0x000107c60e78();
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar17 = *(long *)(*plVar28 + 0x178);
      func_0x000107c615c0();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
        func_0x000107c60e78();
        plVar28 = (long *)(lVar17 + 0x20);
        func_0x000103c0d85c(plVar28,*(undefined8 *)(lVar17 + 0x38));
        lVar17 = *plVar28;
        if (lVar15 != 0) {
          uVar13 = 0x112d393f0;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          plVar28 = (long *)PTR___ss5ErrorWS_11034ee10;
          func_0x000107c613f8();
          *plVar28 = lVar15;
          func_0x000107c61174(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar17,uVar13);
          return;
        }
        **(long **)(*(long *)(lVar17 + 0x40) + 0x28) = lVar25;
        func_0x000107c615f0(lVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar17);
        return;
      }
      pcVar3 = FUN_103c0d910;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
      return;
    }
    plVar28 = plVar28 + 0x15;
  }
LAB_107c5fd38:
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaF_11034fd68)(puVar5,plVar28,0,0);
  return;
}



/* Entry: 103c0be80; end: 103c0bef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0be80(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined *puVar26;
  long *unaff_x22;
  long *plVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar27 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xf8));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    pcVar3 = FUN_103c0bef4;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = plVar27[0x15];
  if (lVar19 == 0) {
    (**(code **)(plVar27[0x1d] + 8))(plVar27[0x1e],plVar27[0x1c]);
LAB_103c0c214:
    func_0x000107c615c0(plVar27[0x1e]);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000103c0c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar27[1])();
      return;
    }
  }
  else {
    plVar27[0x20] = lVar19;
    lVar20 = plVar27[0x1a] + 0x10;
    func_0x000107c61618();
    plVar27[0x21] = lVar20;
    if (lVar20 == 0) {
LAB_103c0c1e8:
      lVar20 = plVar27[0x1d];
      lVar17 = plVar27[0x1e];
      lVar23 = plVar27[0x1c];
      (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x10));
      (**(code **)(lVar20 + 8))(lVar17,lVar23);
      func_0x000107c61574(lVar19);
      goto LAB_103c0c214;
    }
    lVar17 = *(long *)(lVar20 + _DAT_112ff7a10);
    plVar27[0x22] = lVar17;
    if (lVar17 == 0) {
LAB_103c0c1e4:
      func_0x000107c61170();
      goto LAB_103c0c1e8;
    }
    lVar23 = *(long *)(lVar20 + _DAT_112ff7a08);
    plVar27[0x23] = lVar23;
    if (lVar23 == 0) goto LAB_103c0c1e4;
    lVar25 = *(long *)(lVar20 + _DAT_112ff79f8);
    plVar27[0x24] = lVar25;
    if (lVar25 == 0) goto LAB_103c0c1e4;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar25;
    func_0x0001000f11b0();
    plVar27[0x25] = lVar5;
    plVar27[0x16] = 0;
    plVar28 = plVar27 + 0x16;
    iVar4 = 0;
    func_0x000107c60ad8(0,lVar23);
    lVar5 = plVar27[0x16];
    plVar27[0x26] = lVar5;
    if (iVar4 != 0 || lVar5 == 0) {
LAB_103c0c260:
      lVar5 = plVar27[0x1d];
      lVar7 = plVar27[0x1e];
      lVar14 = plVar27[0x1c];
      (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x10));
      func_0x000107c61170(lVar17);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(lVar25);
      func_0x000107c61170(lVar20);
      (**(code **)(lVar5 + 8))(lVar7,lVar14);
      func_0x000107c61574(lVar19);
LAB_103c0c324:
      func_0x000107c61170(plVar27[0x16]);
      goto LAB_103c0c214;
    }
    uVar24 = *(ulong *)(lVar19 + 0x10);
    func_0x000107c61174();
    func_0x000107c61174();
    uVar6 = uVar24;
    FUN_103c0d0c0();
    func_0x000107c61170(uVar24);
    if ((uVar6 & 1) == 0) {
      func_0x000107c61170(lVar5);
      goto LAB_103c0c260;
    }
    lVar7 = *(long *)(lVar19 + 0x18);
    lVar14 = 1000000;
    func_0x000107c600c8();
    plVar27[0x27] = lVar7;
    plVar27[0x28] = lVar14;
    plVar27[0x29] = (long)plVar28;
    plVar27[0x17] = 0;
    iVar4 = 0;
    func_0x000107c60ad8(0,lVar17,plVar27 + 0x17);
    puVar26 = (undefined *)plVar27[0x17];
    plVar27[0x2a] = (long)puVar26;
    if ((iVar4 != 0) || (puVar26 == (undefined *)0x0)) {
LAB_103c0c2c8:
      lVar7 = plVar27[0x1d];
      lVar14 = plVar27[0x1e];
      lVar18 = plVar27[0x1c];
      (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x10));
      func_0x000107c61170(lVar17);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(lVar25);
      func_0x000107c61170(lVar20);
      func_0x000107c61170(lVar5);
      (**(code **)(lVar7 + 8))(lVar14,lVar18);
      func_0x000107c61574(lVar19);
      func_0x000107c61170(plVar27[0x17]);
      goto LAB_103c0c324;
    }
    puVar8 = PTR__OBJC_CLASS___VTFrameProcessorFrame_1126ad990;
    func_0x000107c610f8();
    func_0x000107c61174();
    plVar27[0x30] = lVar7;
    *(int *)(plVar27 + 0x31) = (int)lVar14;
    uVar22 = (undefined4)((ulong)lVar14 >> 0x20);
    *(undefined4 *)((long)plVar27 + 0x18c) = uVar22;
    plVar27[0x32] = (long)plVar28;
    func_0x000107c45a78();
    plVar27[0x2b] = (long)puVar8;
    if (puVar8 == (undefined *)0x0) {
LAB_103c0c2c0:
      func_0x000107c61170(puVar26);
      goto LAB_103c0c2c8;
    }
    puVar9 = PTR__OBJC_CLASS___VTFrameProcessorFrame_1126ad990;
    func_0x000107c610f8();
    plVar27[0x33] = lVar7;
    *(int *)(plVar27 + 0x34) = (int)lVar14;
    *(undefined4 *)((long)plVar27 + 0x1a4) = uVar22;
    plVar27[0x35] = (long)plVar28;
    func_0x000107c45a78();
    plVar27[0x2c] = (long)puVar9;
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c61170(puVar26);
      puVar26 = puVar8;
      goto LAB_103c0c2c0;
    }
    puVar26 = PTR__OBJC_CLASS___VTLowLatencySuperResolutionScalerParameters_1126ad998;
    func_0x000107c610f8();
    func_0x000107c488d4();
    plVar27[0x2d] = (long)puVar26;
    plVar27[7] = (long)(plVar27 + 0x18);
    plVar27[2] = (long)plVar27;
    plVar27[3] = (long)FUN_103c0c334;
    plVar28 = plVar27 + 2;
    func_0x000107c61448(plVar28,1);
    lVar19 = 0x112ff7a58;
    func_0x0001000285a8(0x112ff7a58,&UNK_10dc653b0);
    plVar27[10] = (long)PTR___NSConcreteStackBlock_11034bd00;
    plVar27[0x11] = lVar19;
    plVar27[0xb] = 0x42000000;
    plVar27[0xc] = (long)FUN_103c0c7a4;
    plVar27[0xd] = (long)&UNK_1106e8748;
    plVar27[0xe] = (long)plVar28;
    func_0x000107c61174(puVar26);
    func_0x000107c4f2dc(lVar25);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(plVar27 + 2);
      return;
    }
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar28 = (long *)*plVar27;
  lVar19 = *(long *)(*plVar27 + 0x30);
  *(long *)(*plVar27 + 0x170) = lVar19;
  if (lVar19 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
      pcVar3 = FUN_103c0c3d0;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    pcVar3 = FUN_103c0c5b8;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = plVar28[0x2d];
  lVar20 = plVar28[0x25];
  func_0x000107c615e8(plVar28[0x18]);
  func_0x000107c61170();
  func_0x0001000f11b0();
  if (SBORROW8(lVar16,lVar20)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103c0c5b4);
    (*pcVar3)();
  }
  lVar17 = plVar28[0x2c];
  lVar18 = plVar28[0x2d];
  lVar23 = plVar28[0x2a];
  lVar29 = plVar28[0x2b];
  lVar25 = plVar28[0x28];
  lVar15 = plVar28[0x29];
  lVar5 = plVar28[0x26];
  lVar31 = plVar28[0x27];
  lVar7 = plVar28[0x23];
  lVar32 = plVar28[0x24];
  lVar14 = plVar28[0x21];
  lVar1 = plVar28[0x22];
  lVar30 = plVar28[0x20];
  lVar10 = plVar28[0x1b];
  uVar13 = *(undefined8 *)(lVar10 + 0x18);
  lVar2 = *(long *)(lVar10 + 0x20);
  func_0x000103c0d85c(lVar10,uVar13);
  (**(code **)(lVar2 + 0x10))
            ((double)(lVar16 - lVar20) / 1000000.0,lVar31,lVar25,lVar15,uVar13,lVar2);
  pcVar3 = *(code **)(lVar30 + 0x20);
  uVar13 = *(undefined8 *)(lVar30 + 0x28);
  func_0x000107c6157c(uVar13);
  lVar16 = lVar17;
  func_0x000107c3ecb8();
  func_0x000107c61180();
  (*pcVar3)();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar16);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(lVar30);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(plVar28[0x17]);
  func_0x000107c61170(plVar28[0x16]);
  puVar11 = (undefined8 *)
            (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4);
  func_0x000107c615b8();
  plVar28[0x2f] = (long)puVar11;
  *puVar11 = plVar28;
  puVar11[1] = FUN_103c0c730;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
    func_0x000107c60e78();
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar16 = plVar28[0x2d];
    lVar23 = plVar28[0x2e];
    lVar19 = plVar28[0x2b];
    lVar5 = plVar28[0x2c];
    lVar31 = plVar28[0x2a];
    lVar32 = plVar28[0x26];
    lVar20 = plVar28[0x23];
    lVar7 = plVar28[0x24];
    lVar17 = plVar28[0x21];
    lVar14 = plVar28[0x22];
    lVar29 = plVar28[0x20];
    func_0x000107c61654();
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar20);
    func_0x000107c61170(lVar32);
    func_0x000107c61170(lVar31);
    func_0x000107c61170(lVar19);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(plVar28[0x17]);
    func_0x000107c61170(plVar28[0x16]);
    pcVar3 = *(code **)(lVar29 + 0x20);
    uVar13 = *(undefined8 *)(lVar29 + 0x28);
    uVar21 = *(undefined8 *)(lVar29 + 0x10);
    func_0x000107c6157c(uVar13);
    uVar12 = uVar21;
    func_0x000107c61174();
    (*pcVar3)(uVar21);
    func_0x000107c61170(uVar12);
    func_0x000107c61574(uVar13);
    func_0x000107c61574(lVar29);
    func_0x000107c614ac(lVar23);
    puVar11 = (undefined8 *)
              (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4)
    ;
    func_0x000107c615b8();
    plVar28[0x2f] = (long)puVar11;
    *puVar11 = plVar28;
    puVar11[1] = FUN_103c0c730;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
      func_0x000107c60e78();
      lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar16 = *(long *)(*plVar28 + 0x178);
      func_0x000107c615c0();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
        func_0x000107c60e78();
        plVar27 = (long *)(lVar16 + 0x20);
        func_0x000103c0d85c(plVar27,*(undefined8 *)(lVar16 + 0x38));
        lVar16 = *plVar27;
        if (lVar15 != 0) {
          uVar13 = 0x112d393f0;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          plVar27 = (long *)PTR___ss5ErrorWS_11034ee10;
          func_0x000107c613f8();
          *plVar27 = lVar15;
          func_0x000107c61174(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar16,uVar13);
          return;
        }
        **(long **)(*(long *)(lVar16 + 0x40) + 0x28) = lVar25;
        func_0x000107c615f0(lVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar16);
        return;
      }
      pcVar3 = FUN_103c0d910;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaF_11034fd68)
            (puVar11,plVar28 + 0x15,0,0);
  return;
}



/* Entry: 103c0bef4; end: 103c0c333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0bef4(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined *puVar26;
  long *unaff_x22;
  long *plVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = unaff_x22[0x15];
  if (lVar19 == 0) {
    (**(code **)(unaff_x22[0x1d] + 8))(unaff_x22[0x1e],unaff_x22[0x1c]);
LAB_103c0c214:
    func_0x000107c615c0(unaff_x22[0x1e]);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000103c0c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)unaff_x22[1])();
      return;
    }
  }
  else {
    unaff_x22[0x20] = lVar19;
    lVar20 = unaff_x22[0x1a] + 0x10;
    func_0x000107c61618();
    unaff_x22[0x21] = lVar20;
    if (lVar20 == 0) {
LAB_103c0c1e8:
      lVar20 = unaff_x22[0x1d];
      lVar17 = unaff_x22[0x1e];
      lVar23 = unaff_x22[0x1c];
      (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x10));
      (**(code **)(lVar20 + 8))(lVar17,lVar23);
      func_0x000107c61574(lVar19);
      goto LAB_103c0c214;
    }
    lVar17 = *(long *)(lVar20 + _DAT_112ff7a10);
    unaff_x22[0x22] = lVar17;
    if (lVar17 == 0) {
LAB_103c0c1e4:
      func_0x000107c61170();
      goto LAB_103c0c1e8;
    }
    lVar23 = *(long *)(lVar20 + _DAT_112ff7a08);
    unaff_x22[0x23] = lVar23;
    if (lVar23 == 0) goto LAB_103c0c1e4;
    lVar25 = *(long *)(lVar20 + _DAT_112ff79f8);
    unaff_x22[0x24] = lVar25;
    if (lVar25 == 0) goto LAB_103c0c1e4;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar25;
    func_0x0001000f11b0();
    unaff_x22[0x25] = lVar5;
    unaff_x22[0x16] = 0;
    plVar27 = unaff_x22 + 0x16;
    iVar4 = 0;
    func_0x000107c60ad8(0,lVar23);
    lVar5 = unaff_x22[0x16];
    unaff_x22[0x26] = lVar5;
    if (iVar4 != 0 || lVar5 == 0) {
LAB_103c0c260:
      lVar5 = unaff_x22[0x1d];
      lVar7 = unaff_x22[0x1e];
      lVar14 = unaff_x22[0x1c];
      (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x10));
      func_0x000107c61170(lVar17);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(lVar25);
      func_0x000107c61170(lVar20);
      (**(code **)(lVar5 + 8))(lVar7,lVar14);
      func_0x000107c61574(lVar19);
LAB_103c0c324:
      func_0x000107c61170(unaff_x22[0x16]);
      goto LAB_103c0c214;
    }
    uVar24 = *(ulong *)(lVar19 + 0x10);
    func_0x000107c61174();
    func_0x000107c61174();
    uVar6 = uVar24;
    FUN_103c0d0c0();
    func_0x000107c61170(uVar24);
    if ((uVar6 & 1) == 0) {
      func_0x000107c61170(lVar5);
      goto LAB_103c0c260;
    }
    lVar7 = *(long *)(lVar19 + 0x18);
    lVar14 = 1000000;
    func_0x000107c600c8();
    unaff_x22[0x27] = lVar7;
    unaff_x22[0x28] = lVar14;
    unaff_x22[0x29] = (long)plVar27;
    unaff_x22[0x17] = 0;
    iVar4 = 0;
    func_0x000107c60ad8(0,lVar17,unaff_x22 + 0x17);
    puVar26 = (undefined *)unaff_x22[0x17];
    unaff_x22[0x2a] = (long)puVar26;
    if ((iVar4 != 0) || (puVar26 == (undefined *)0x0)) {
LAB_103c0c2c8:
      lVar7 = unaff_x22[0x1d];
      lVar14 = unaff_x22[0x1e];
      lVar18 = unaff_x22[0x1c];
      (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x10));
      func_0x000107c61170(lVar17);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(lVar25);
      func_0x000107c61170(lVar20);
      func_0x000107c61170(lVar5);
      (**(code **)(lVar7 + 8))(lVar14,lVar18);
      func_0x000107c61574(lVar19);
      func_0x000107c61170(unaff_x22[0x17]);
      goto LAB_103c0c324;
    }
    puVar8 = PTR__OBJC_CLASS___VTFrameProcessorFrame_1126ad990;
    func_0x000107c610f8();
    func_0x000107c61174();
    unaff_x22[0x30] = lVar7;
    *(int *)(unaff_x22 + 0x31) = (int)lVar14;
    uVar22 = (undefined4)((ulong)lVar14 >> 0x20);
    *(undefined4 *)((long)unaff_x22 + 0x18c) = uVar22;
    unaff_x22[0x32] = (long)plVar27;
    func_0x000107c45a78();
    unaff_x22[0x2b] = (long)puVar8;
    if (puVar8 == (undefined *)0x0) {
LAB_103c0c2c0:
      func_0x000107c61170(puVar26);
      goto LAB_103c0c2c8;
    }
    puVar9 = PTR__OBJC_CLASS___VTFrameProcessorFrame_1126ad990;
    func_0x000107c610f8();
    unaff_x22[0x33] = lVar7;
    *(int *)(unaff_x22 + 0x34) = (int)lVar14;
    *(undefined4 *)((long)unaff_x22 + 0x1a4) = uVar22;
    unaff_x22[0x35] = (long)plVar27;
    func_0x000107c45a78();
    unaff_x22[0x2c] = (long)puVar9;
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c61170(puVar26);
      puVar26 = puVar8;
      goto LAB_103c0c2c0;
    }
    puVar26 = PTR__OBJC_CLASS___VTLowLatencySuperResolutionScalerParameters_1126ad998;
    func_0x000107c610f8();
    func_0x000107c488d4();
    unaff_x22[0x2d] = (long)puVar26;
    unaff_x22[7] = (long)(unaff_x22 + 0x18);
    unaff_x22[2] = (long)unaff_x22;
    unaff_x22[3] = (long)FUN_103c0c334;
    plVar27 = unaff_x22 + 2;
    func_0x000107c61448(plVar27,1);
    lVar19 = 0x112ff7a58;
    func_0x0001000285a8(0x112ff7a58,&UNK_10dc653b0);
    unaff_x22[10] = (long)PTR___NSConcreteStackBlock_11034bd00;
    unaff_x22[0x11] = lVar19;
    unaff_x22[0xb] = 0x42000000;
    unaff_x22[0xc] = (long)FUN_103c0c7a4;
    unaff_x22[0xd] = (long)&UNK_1106e8748;
    unaff_x22[0xe] = (long)plVar27;
    func_0x000107c61174(puVar26);
    func_0x000107c4f2dc(lVar25);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 2);
      return;
    }
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar27 = (long *)*unaff_x22;
  lVar19 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x170) = lVar19;
  if (lVar19 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
      pcVar3 = FUN_103c0c3d0;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    pcVar3 = FUN_103c0c5b8;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = plVar27[0x2d];
  lVar20 = plVar27[0x25];
  func_0x000107c615e8(plVar27[0x18]);
  func_0x000107c61170();
  func_0x0001000f11b0();
  if (SBORROW8(lVar16,lVar20)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103c0c5b4);
    (*pcVar3)();
  }
  lVar17 = plVar27[0x2c];
  lVar18 = plVar27[0x2d];
  lVar23 = plVar27[0x2a];
  lVar28 = plVar27[0x2b];
  lVar25 = plVar27[0x28];
  lVar15 = plVar27[0x29];
  lVar5 = plVar27[0x26];
  lVar30 = plVar27[0x27];
  lVar7 = plVar27[0x23];
  lVar31 = plVar27[0x24];
  lVar14 = plVar27[0x21];
  lVar1 = plVar27[0x22];
  lVar29 = plVar27[0x20];
  lVar10 = plVar27[0x1b];
  uVar13 = *(undefined8 *)(lVar10 + 0x18);
  lVar2 = *(long *)(lVar10 + 0x20);
  func_0x000103c0d85c(lVar10,uVar13);
  (**(code **)(lVar2 + 0x10))
            ((double)(lVar16 - lVar20) / 1000000.0,lVar30,lVar25,lVar15,uVar13,lVar2);
  pcVar3 = *(code **)(lVar29 + 0x20);
  uVar13 = *(undefined8 *)(lVar29 + 0x28);
  func_0x000107c6157c(uVar13);
  lVar16 = lVar17;
  func_0x000107c3ecb8();
  func_0x000107c61180();
  (*pcVar3)();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar16);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(lVar29);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(plVar27[0x17]);
  func_0x000107c61170(plVar27[0x16]);
  puVar11 = (undefined8 *)
            (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4);
  func_0x000107c615b8();
  plVar27[0x2f] = (long)puVar11;
  *puVar11 = plVar27;
  puVar11[1] = FUN_103c0c730;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
    func_0x000107c60e78();
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar16 = plVar27[0x2d];
    lVar23 = plVar27[0x2e];
    lVar19 = plVar27[0x2b];
    lVar5 = plVar27[0x2c];
    lVar30 = plVar27[0x2a];
    lVar31 = plVar27[0x26];
    lVar20 = plVar27[0x23];
    lVar7 = plVar27[0x24];
    lVar17 = plVar27[0x21];
    lVar14 = plVar27[0x22];
    lVar28 = plVar27[0x20];
    func_0x000107c61654();
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar20);
    func_0x000107c61170(lVar31);
    func_0x000107c61170(lVar30);
    func_0x000107c61170(lVar19);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(plVar27[0x17]);
    func_0x000107c61170(plVar27[0x16]);
    pcVar3 = *(code **)(lVar28 + 0x20);
    uVar13 = *(undefined8 *)(lVar28 + 0x28);
    uVar21 = *(undefined8 *)(lVar28 + 0x10);
    func_0x000107c6157c(uVar13);
    uVar12 = uVar21;
    func_0x000107c61174();
    (*pcVar3)(uVar21);
    func_0x000107c61170(uVar12);
    func_0x000107c61574(uVar13);
    func_0x000107c61574(lVar28);
    func_0x000107c614ac(lVar23);
    puVar11 = (undefined8 *)
              (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4)
    ;
    func_0x000107c615b8();
    plVar27[0x2f] = (long)puVar11;
    *puVar11 = plVar27;
    puVar11[1] = FUN_103c0c730;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
      func_0x000107c60e78();
      lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar16 = *(long *)(*plVar27 + 0x178);
      func_0x000107c615c0();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
        func_0x000107c60e78();
        plVar27 = (long *)(lVar16 + 0x20);
        func_0x000103c0d85c(plVar27,*(undefined8 *)(lVar16 + 0x38));
        lVar16 = *plVar27;
        if (lVar15 != 0) {
          uVar13 = 0x112d393f0;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          plVar27 = (long *)PTR___ss5ErrorWS_11034ee10;
          func_0x000107c613f8();
          *plVar27 = lVar15;
          func_0x000107c61174(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar16,uVar13);
          return;
        }
        **(long **)(*(long *)(lVar16 + 0x40) + 0x28) = lVar25;
        func_0x000107c615f0(lVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar16);
        return;
      }
      pcVar3 = FUN_103c0d910;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaF_11034fd68)
            (puVar11,plVar27 + 0x15,0,0);
  return;
}



/* Entry: 103c0c334; end: 103c0c3cf;  */

void FUN_103c0c334(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long *unaff_x22;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar20 = (long *)*unaff_x22;
  lVar17 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x170) = lVar17;
  if (lVar17 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
      pcVar8 = FUN_103c0c3d0;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    pcVar8 = FUN_103c0c5b8;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = plVar20[0x2d];
  lVar18 = plVar20[0x25];
  func_0x000107c615e8(plVar20[0x18]);
  func_0x000107c61170();
  func_0x0001000f11b0();
  if (SBORROW8(lVar15,lVar18)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x103c0c5b4);
    (*pcVar8)();
  }
  lVar1 = plVar20[0x2c];
  lVar16 = plVar20[0x2d];
  lVar2 = plVar20[0x2a];
  lVar21 = plVar20[0x2b];
  lVar13 = plVar20[0x28];
  lVar14 = plVar20[0x29];
  lVar3 = plVar20[0x26];
  lVar23 = plVar20[0x27];
  lVar4 = plVar20[0x23];
  lVar24 = plVar20[0x24];
  lVar5 = plVar20[0x21];
  lVar6 = plVar20[0x22];
  lVar22 = plVar20[0x20];
  lVar9 = plVar20[0x1b];
  uVar12 = *(undefined8 *)(lVar9 + 0x18);
  lVar7 = *(long *)(lVar9 + 0x20);
  func_0x000103c0d85c(lVar9,uVar12);
  (**(code **)(lVar7 + 0x10))
            ((double)(lVar15 - lVar18) / 1000000.0,lVar23,lVar13,lVar14,uVar12,lVar7);
  pcVar8 = *(code **)(lVar22 + 0x20);
  uVar12 = *(undefined8 *)(lVar22 + 0x28);
  func_0x000107c6157c(uVar12);
  lVar15 = lVar1;
  func_0x000107c3ecb8();
  func_0x000107c61180();
  (*pcVar8)();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar15);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(lVar22);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(plVar20[0x17]);
  func_0x000107c61170(plVar20[0x16]);
  puVar10 = (undefined8 *)
            (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4);
  func_0x000107c615b8();
  plVar20[0x2f] = (long)puVar10;
  *puVar10 = plVar20;
  puVar10[1] = FUN_103c0c730;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    func_0x000107c60e78();
    lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar15 = plVar20[0x2d];
    lVar2 = plVar20[0x2e];
    lVar17 = plVar20[0x2b];
    lVar3 = plVar20[0x2c];
    lVar23 = plVar20[0x2a];
    lVar24 = plVar20[0x26];
    lVar18 = plVar20[0x23];
    lVar4 = plVar20[0x24];
    lVar1 = plVar20[0x21];
    lVar5 = plVar20[0x22];
    lVar21 = plVar20[0x20];
    func_0x000107c61654();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(lVar24);
    func_0x000107c61170(lVar23);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(plVar20[0x17]);
    func_0x000107c61170(plVar20[0x16]);
    pcVar8 = *(code **)(lVar21 + 0x20);
    uVar12 = *(undefined8 *)(lVar21 + 0x28);
    uVar19 = *(undefined8 *)(lVar21 + 0x10);
    func_0x000107c6157c(uVar12);
    uVar11 = uVar19;
    func_0x000107c61174();
    (*pcVar8)(uVar19);
    func_0x000107c61170(uVar11);
    func_0x000107c61574(uVar12);
    func_0x000107c61574(lVar21);
    func_0x000107c614ac(lVar2);
    puVar10 = (undefined8 *)
              (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4)
    ;
    func_0x000107c615b8();
    plVar20[0x2f] = (long)puVar10;
    *puVar10 = plVar20;
    puVar10[1] = FUN_103c0c730;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
      func_0x000107c60e78();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar15 = *(long *)(*plVar20 + 0x178);
      func_0x000107c615c0();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
        func_0x000107c60e78();
        plVar20 = (long *)(lVar15 + 0x20);
        func_0x000103c0d85c(plVar20,*(undefined8 *)(lVar15 + 0x38));
        lVar15 = *plVar20;
        if (lVar14 == 0) {
          **(long **)(*(long *)(lVar15 + 0x40) + 0x28) = lVar13;
          func_0x000107c615f0(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar15);
          return;
        }
        uVar12 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        plVar20 = (long *)PTR___ss5ErrorWS_11034ee10;
        func_0x000107c613f8();
        *plVar20 = lVar14;
        func_0x000107c61174(lVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar15,uVar12);
        return;
      }
      pcVar8 = FUN_103c0d910;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar8,0,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaF_11034fd68)
            (puVar10,plVar20 + 0x15,0,0);
  return;
}



/* Entry: 103c0c3d0; end: 103c0c5b7;  */

void FUN_103c0c3d0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long *unaff_x22;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = unaff_x22[0x2d];
  lVar18 = unaff_x22[0x25];
  func_0x000107c615e8(unaff_x22[0x18]);
  func_0x000107c61170();
  func_0x0001000f11b0();
  if (SBORROW8(lVar20,lVar18)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x103c0c5b4);
    (*pcVar8)();
  }
  lVar1 = unaff_x22[0x2c];
  lVar17 = unaff_x22[0x2d];
  lVar2 = unaff_x22[0x2a];
  lVar21 = unaff_x22[0x2b];
  lVar14 = unaff_x22[0x28];
  lVar15 = unaff_x22[0x29];
  lVar3 = unaff_x22[0x26];
  lVar23 = unaff_x22[0x27];
  lVar4 = unaff_x22[0x23];
  lVar24 = unaff_x22[0x24];
  lVar5 = unaff_x22[0x21];
  lVar6 = unaff_x22[0x22];
  lVar22 = unaff_x22[0x20];
  lVar9 = unaff_x22[0x1b];
  uVar13 = *(undefined8 *)(lVar9 + 0x18);
  lVar7 = *(long *)(lVar9 + 0x20);
  func_0x000103c0d85c(lVar9,uVar13);
  (**(code **)(lVar7 + 0x10))
            ((double)(lVar20 - lVar18) / 1000000.0,lVar23,lVar14,lVar15,uVar13,lVar7);
  pcVar8 = *(code **)(lVar22 + 0x20);
  uVar13 = *(undefined8 *)(lVar22 + 0x28);
  func_0x000107c6157c(uVar13);
  lVar20 = lVar1;
  func_0x000107c3ecb8();
  func_0x000107c61180();
  (*pcVar8)();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar20);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(lVar22);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(unaff_x22[0x17]);
  func_0x000107c61170(unaff_x22[0x16]);
  puVar10 = (undefined8 *)
            (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4);
  func_0x000107c615b8();
  unaff_x22[0x2f] = (long)puVar10;
  *puVar10 = unaff_x22;
  puVar10[1] = FUN_103c0c730;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    func_0x000107c60e78();
    lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar20 = unaff_x22[0x2d];
    lVar2 = unaff_x22[0x2e];
    lVar16 = unaff_x22[0x2b];
    lVar3 = unaff_x22[0x2c];
    lVar23 = unaff_x22[0x2a];
    lVar24 = unaff_x22[0x26];
    lVar18 = unaff_x22[0x23];
    lVar4 = unaff_x22[0x24];
    lVar1 = unaff_x22[0x21];
    lVar5 = unaff_x22[0x22];
    lVar21 = unaff_x22[0x20];
    func_0x000107c61654();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(lVar24);
    func_0x000107c61170(lVar23);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar20);
    func_0x000107c61170(lVar20);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(unaff_x22[0x17]);
    func_0x000107c61170(unaff_x22[0x16]);
    pcVar8 = *(code **)(lVar21 + 0x20);
    uVar13 = *(undefined8 *)(lVar21 + 0x28);
    uVar19 = *(undefined8 *)(lVar21 + 0x10);
    func_0x000107c6157c(uVar13);
    uVar11 = uVar19;
    func_0x000107c61174();
    (*pcVar8)(uVar19);
    func_0x000107c61170(uVar11);
    func_0x000107c61574(uVar13);
    func_0x000107c61574(lVar21);
    func_0x000107c614ac(lVar2);
    puVar10 = (undefined8 *)
              (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4)
    ;
    func_0x000107c615b8();
    unaff_x22[0x2f] = (long)puVar10;
    *puVar10 = unaff_x22;
    puVar10[1] = FUN_103c0c730;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
      func_0x000107c60e78();
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar20 = *(long *)(*unaff_x22 + 0x178);
      func_0x000107c615c0();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_103c0d910,0,0);
        return;
      }
      func_0x000107c60e78();
      plVar12 = (long *)(lVar20 + 0x20);
      func_0x000103c0d85c(plVar12,*(undefined8 *)(lVar20 + 0x38));
      lVar20 = *plVar12;
      if (lVar15 == 0) {
        **(long **)(*(long *)(lVar20 + 0x40) + 0x28) = lVar14;
        func_0x000107c615f0(lVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar20);
        return;
      }
      uVar13 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      plVar12 = (long *)PTR___ss5ErrorWS_11034ee10;
      func_0x000107c613f8();
      *plVar12 = lVar15;
      func_0x000107c61174(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar20,uVar13);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaF_11034fd68)
            (puVar10,unaff_x22 + 0x15,0,0);
  return;
}



/* Entry: 103c0c5b8; end: 103c0c72f;  */

void FUN_103c0c5b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *unaff_x22;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = unaff_x22[0x2d];
  lVar4 = unaff_x22[0x2e];
  lVar14 = unaff_x22[0x2b];
  lVar5 = unaff_x22[0x2c];
  lVar17 = unaff_x22[0x2a];
  lVar18 = unaff_x22[0x26];
  lVar1 = unaff_x22[0x23];
  lVar6 = unaff_x22[0x24];
  lVar2 = unaff_x22[0x21];
  lVar7 = unaff_x22[0x22];
  lVar16 = unaff_x22[0x20];
  func_0x000107c61654();
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(unaff_x22[0x17]);
  func_0x000107c61170(unaff_x22[0x16]);
  pcVar3 = *(code **)(lVar16 + 0x20);
  uVar12 = *(undefined8 *)(lVar16 + 0x28);
  uVar15 = *(undefined8 *)(lVar16 + 0x10);
  func_0x000107c6157c(uVar12);
  uVar8 = uVar15;
  func_0x000107c61174();
  (*pcVar3)(uVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(lVar16);
  func_0x000107c614ac(lVar4);
  puVar9 = (undefined8 *)
           (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4);
  func_0x000107c615b8();
  unaff_x22[0x2f] = (long)puVar9;
  *puVar9 = unaff_x22;
  puVar9[1] = FUN_103c0c730;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaF_11034fd68)
              (puVar9,unaff_x22 + 0x15,0,0);
    return;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(*unaff_x22 + 0x178);
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103c0d910,0,0);
    return;
  }
  func_0x000107c60e78();
  plVar11 = (long *)(lVar10 + 0x20);
  func_0x000103c0d85c(plVar11,*(undefined8 *)(lVar10 + 0x38));
  lVar10 = *plVar11;
  if (param_3 != 0) {
    uVar12 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar11 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar11 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar10,uVar12);
    return;
  }
  **(undefined8 **)(*(long *)(lVar10 + 0x40) + 0x28) = param_2;
  func_0x000107c615f0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar10);
  return;
}



/* Entry: 103c0c730; end: 103c0c7a3;  */

void FUN_103c0c730(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(*unaff_x22 + 0x178);
  func_0x000107c615c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103c0d910,0,0);
    return;
  }
  func_0x000107c60e78();
  plVar2 = (long *)(lVar1 + 0x20);
  func_0x000103c0d85c(plVar2,*(undefined8 *)(lVar1 + 0x38));
  lVar1 = *plVar2;
  if (param_3 != 0) {
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar1,uVar3);
    return;
  }
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_2;
  func_0x000107c615f0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar1);
  return;
}



/* Entry: 103c0c7a4; end: 103c0c847;  */

void FUN_103c0c7a4(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x000103c0d85c(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
  func_0x000107c615f0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 103c0c848; end: 103c0c8cb; -[_TtC31CallSuperResolutionServicesImpl30CallSuperResolutionVTProcessor process:presentationTime:completionHandler:] */

/* WARNING: Possible PIC construction at 0x000103c0c8b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c0c8b8) */

void FUN_103c0c848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000103c0d3cc(param_3,param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103c0c8cc; end: 103c0c9e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0c8cc(void)

{
  long extraout_x8;
  long unaff_x20;
  long lVar1;
  long lVar2;
  
  func_0x000107c614f0();
  lVar1 = 0x112ff79a8;
  func_0x0001000285a8(0x112ff79a8,&UNK_10dc65390);
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar2 + 0x10))
            (&stack0xffffffffffffffb0 + -extraout_x8,unaff_x20 + _DAT_112ff79d8,lVar1);
  func_0x000107c5fd2c(lVar1);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,lVar1);
  lVar1 = *(long *)(unaff_x20 + _DAT_112ff7a00);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_112ff79f8) != 0) {
    func_0x000107c42874();
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c0c9e8; end: 103c0ca0b; -[_TtC31CallSuperResolutionServicesImpl30CallSuperResolutionVTProcessor dealloc] */

void FUN_103c0c9e8(void)

{
  func_0x000107c61174();
  FUN_103c0c8cc();
  return;
}



/* Entry: 103c0ca0c; end: 103c0cae3; -[_TtC31CallSuperResolutionServicesImpl30CallSuperResolutionVTProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c0ca98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c0cac8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c0ca9c) */
/* WARNING: Removing unreachable block (ram,0x000103c0cacc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0ca0c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_112ff79d0;
  lVar2 = 0x112ff79b8;
  func_0x0001000285a8(0x112ff79b8,&UNK_10dc652f8);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  lVar1 = _DAT_112ff79d8;
  lVar2 = 0x112ff79a8;
  func_0x0001000285a8(0x112ff79a8,&UNK_10dc65390);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  FUN_103c0d83c(param_1 + _DAT_112ff79e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff79f0));
  return;
}



/* Entry: 103c0cae4; end: 103c0caeb;  */

void FUN_103c0cae4(void)

{
  if (lRam0000000112ff7a40 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7b92c0);
  return;
}



/* Entry: 103c0caec; end: 103c0cb23;  */

void FUN_103c0caec(undefined8 param_1)

{
  if (lRam0000000112ff7a40 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7b92c0);
  return;
}



/* Entry: 103c0cb24; end: 103c0cb4f; -[_TtC31CallSuperResolutionServicesImpl30CallSuperResolutionVTProcessor init] */

void FUN_103c0cb24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallSuperResolutionServicesImpl.CallSuperResolutionVTProcessor",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0cb50);
  (*pcVar1)();
}



/* Entry: 103c0cb50; end: 103c0cc33;  */

void FUN_103c0cb50(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = 0x112ff7998;
  lVar1 = 0x13f;
  FUN_103c0cc34(0x13f,0x112ff7998,PTR___sScSMa_11034fda0);
  if (uVar2 < 0x40) {
    lStack_70 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x112ff79a0;
    lVar1 = 0x13f;
    FUN_103c0cc34(0x13f,0x112ff79a0,PTR___sScS12ContinuationVMa_11034fd50);
    if (uVar2 < 0x40) {
      lStack_68 = *(long *)(lVar1 + -8) + 0x40;
      puStack_60 = &UNK_10dc65340;
      puStack_58 = PTR___sBi32_WV_11034d668 + 0x40;
      puStack_50 = PTR___sBOWV_11034d658 + 0x40;
      puStack_48 = &UNK_10dc65358;
      puStack_40 = &UNK_10dc65358;
      puStack_38 = &UNK_10dc65358;
      puStack_30 = &UNK_10dc65358;
      puStack_28 = &UNK_10dc65370;
      func_0x000107c61630(param_1,0x100,10,&lStack_70,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 103c0cc34; end: 103c0cc8b;  */

void FUN_103c0cc34(long param_1,long *param_2,code *param_3)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0xff;
    func_0x000103c0865c();
    (*param_3)();
    if (lVar1 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 103c0cc8c; end: 103c0ceab;  */

void FUN_103c0cc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_70;
  
  lVar2 = 0x112ff79c0;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112ff79c0,&UNK_10dc65300);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112ff79b8;
  func_0x0001000285a8(0x112ff79b8,&UNK_10dc652f8);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)(auStack_a0 + -extraout_x8) - extraout_x8_00;
  lVar4 = 0x112ff7a68;
  func_0x0001000285a8(0x112ff7a68,&UNK_10dc653d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar7 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12;
  lVar4 = 0x112ff79a8;
  func_0x0001000285a8(0x112ff79a8,&UNK_10dc65390);
  lVar5 = *(long *)(lVar4 + -8);
  (**(code **)(lVar5 + 0x38))(lVar8,1,1,lVar4);
  (**(code **)(lVar9 + 0x10))(auStack_a0 + -extraout_x8,uStack_90,lVar2);
  lStack_70 = lVar8;
  func_0x000103c0865c(0);
  func_0x000107c5fd48(lVar6);
  (**(code **)(lVar10 + 0x10))(uStack_88,lVar6,lVar3);
  FUN_103c0d888(lVar8,lVar7,0x112ff7a68,&UNK_10dc653d0);
  lVar2 = lVar7;
  (**(code **)(lVar5 + 0x30))(lVar7,1,lVar4);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar10 + 8))(lVar6,lVar3);
    (**(code **)(lVar5 + 0x20))(uStack_98,lVar7,lVar4);
    func_0x000103c0d8d0(lVar8,0x112ff7a68,&UNK_10dc653d0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0ceac);
  (*pcVar1)();
}



/* Entry: 103c0ceac; end: 103c0cf2f;  */

void FUN_103c0ceac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000103c0d8d0(param_2,0x112ff7a68,&UNK_10dc653d0);
  lVar1 = 0x112ff79a8;
  func_0x0001000285a8(0x112ff79a8,&UNK_10dc65390);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000103c0cf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_2,0,1,lVar1);
  return;
}



/* Entry: 103c0cf30; end: 103c0d0bf;  */

long FUN_103c0cf30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lStack_a0;
  undefined1 auStack_98 [80];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar15 = auStack_98;
  func_0x000107c61534();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  uVar4 = *(undefined8 *)PTR__kCVPixelBufferPoolMinimumBufferCountKey_11034a3c8;
  func_0x000107c5faec();
  *(undefined8 *)(lVar6 + 0x20) = uVar4;
  *(undefined **)(lVar6 + 0x48) = PTR___sSuN_11034e220;
  *(undefined1 **)(lVar6 + 0x28) = puVar15;
  *(undefined8 *)(lVar6 + 0x30) = param_1;
  lVar5 = lVar6;
  func_0x000100214a84();
  func_0x000107c61588(lVar6);
  func_0x000103c0d8d0((undefined8 *)(lVar6 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar2 = PTR___sSSSHsWP_11034da90;
  puVar1 = PTR___sSSN_11034da80;
  lStack_a0 = 0;
  uVar21 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  lVar6 = lVar5;
  func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar5);
  uVar4 = 0x112ff7a60;
  func_0x0001000285a8(0x112ff7a60,&UNK_10dc653c0);
  func_0x000107c5f9dc(param_2,puVar1,uVar4,puVar2);
  lVar5 = lVar6;
  func_0x000107c60ad4(uVar21,lVar6,param_2,&lStack_a0);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(param_2);
  lVar6 = lStack_a0;
  if ((int)uVar21 != 0) {
    func_0x000107c61170();
    lVar6 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar6;
  }
  func_0x000107c60e78();
  lVar17 = lVar6;
  func_0x000107c60ad0();
  if ((int)lVar17 != 0) {
    return 0;
  }
  lVar17 = lVar5;
  func_0x000107c60ad0(lVar5,0);
  if ((int)lVar17 != 0) {
    lVar22 = 0;
    goto LAB_103c0d270;
  }
  lVar17 = lVar6;
  func_0x000107c60aac(lVar6,0);
  if ((((lVar17 == 0) || (lVar18 = lVar5, func_0x000107c60aac(lVar5,0), lVar18 == 0)) ||
      (lVar7 = lVar6, func_0x000107c60aac(lVar6,1), lVar7 == 0)) ||
     (lVar8 = lVar5, func_0x000107c60aac(lVar5,1), lVar8 == 0)) {
LAB_103c0d260:
    lVar22 = 0;
  }
  else {
    lVar20 = lVar6;
    func_0x000107c60abc(lVar6,0);
    lVar9 = lVar6;
    func_0x000107c60abc(lVar6,1);
    lVar22 = lVar5;
    func_0x000107c60abc(lVar5,0);
    if ((lVar22 != lVar20) || (lVar22 = lVar5, func_0x000107c60abc(lVar5,1), lVar22 != lVar9))
    goto LAB_103c0d260;
    lVar10 = lVar6;
    func_0x000107c60ab4(lVar6,0);
    lVar11 = lVar5;
    func_0x000107c60ab4(lVar5,0);
    lVar12 = lVar6;
    func_0x000107c60ab4(lVar6,1);
    lVar13 = lVar5;
    func_0x000107c60ab4(lVar5,1);
    lVar14 = lVar6;
    func_0x000107c60ac8();
    lVar22 = 0;
    if (((lVar14 <= lVar10) && (lVar14 <= lVar11)) && ((lVar14 <= lVar12 && (lVar14 <= lVar13)))) {
      if (lVar10 == lVar11) {
        if (SBORROW8(lVar20,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c0d3b0);
          (*pcVar3)();
        }
        lVar22 = (lVar20 + -1) * lVar10;
        if (SUB168(SEXT816(lVar20 + -1) * SEXT816(lVar10),8) != lVar22 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c0d3b8);
          (*pcVar3)();
        }
        if (SCARRY8(lVar22,lVar14)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c0d3bc);
          (*pcVar3)();
        }
        func_0x000107c610b4(lVar18,lVar17,lVar22 + lVar14);
      }
      else {
        if (lVar20 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c0d3b4);
          (*pcVar3)();
        }
        if (lVar20 != 0) {
          lVar22 = 0;
          do {
            lVar16 = lVar22 * lVar10;
            if (SUB168(SEXT816(lVar22) * SEXT816(lVar10),8) != lVar16 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103c0d3a0);
              (*pcVar3)();
            }
            lVar19 = lVar22 * lVar11;
            if (SUB168(SEXT816(lVar22) * SEXT816(lVar11),8) != lVar19 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103c0d3a4);
              (*pcVar3)();
            }
            lVar22 = lVar22 + 1;
            func_0x000107c610b4(lVar18 + lVar19,lVar17 + lVar16,lVar14);
          } while (lVar20 != lVar22);
        }
      }
      if (lVar12 == lVar13) {
        if (SBORROW8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c0d3c0);
          (*pcVar3)();
        }
        lVar17 = (lVar9 + -1) * lVar12;
        if (SUB168(SEXT816(lVar9 + -1) * SEXT816(lVar12),8) != lVar17 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c0d3c8);
          (*pcVar3)();
        }
        if (SCARRY8(lVar17,lVar14)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c0d3cc);
          (*pcVar3)();
        }
        func_0x000107c610b4(lVar8,lVar7,lVar17 + lVar14);
        lVar22 = 1;
      }
      else {
        if (lVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c0d3c4);
          (*pcVar3)();
        }
        if (lVar9 == 0) {
          lVar22 = 1;
        }
        else {
          lVar17 = 0;
          lVar22 = 1;
          do {
            lVar18 = lVar17 * lVar12;
            if (SUB168(SEXT816(lVar17) * SEXT816(lVar12),8) != lVar18 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103c0d3a8);
              (*pcVar3)();
            }
            lVar20 = lVar17 * lVar13;
            if (SUB168(SEXT816(lVar17) * SEXT816(lVar13),8) != lVar20 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103c0d3ac);
              (*pcVar3)();
            }
            lVar17 = lVar17 + 1;
            func_0x000107c610b4(lVar8 + lVar20,lVar7 + lVar18,lVar14);
          } while (lVar9 != lVar17);
        }
      }
    }
  }
  func_0x000107c60ae0(lVar5,0);
LAB_103c0d270:
  func_0x000107c60ae0(lVar6,1);
  return lVar22;
}



/* Entry: 103c0d0c0; end: 103c0d5b7;  */

undefined8 FUN_103c0d0c0(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  
  lVar11 = param_1;
  func_0x000107c60ad0(param_1,1);
  if ((int)lVar11 != 0) {
    return 0;
  }
  lVar11 = param_2;
  func_0x000107c60ad0(param_2,0);
  if ((int)lVar11 != 0) {
    uVar15 = 0;
    goto LAB_103c0d270;
  }
  lVar11 = param_1;
  func_0x000107c60aac(param_1,0);
  if ((((lVar11 == 0) || (lVar12 = param_2, func_0x000107c60aac(param_2,0), lVar12 == 0)) ||
      (lVar2 = param_1, func_0x000107c60aac(param_1,1), lVar2 == 0)) ||
     (lVar3 = param_2, func_0x000107c60aac(param_2,1), lVar3 == 0)) {
LAB_103c0d260:
    uVar15 = 0;
  }
  else {
    lVar14 = param_1;
    func_0x000107c60abc(param_1,0);
    lVar4 = param_1;
    func_0x000107c60abc(param_1,1);
    lVar5 = param_2;
    func_0x000107c60abc(param_2,0);
    if ((lVar5 != lVar14) || (lVar5 = param_2, func_0x000107c60abc(param_2,1), lVar5 != lVar4))
    goto LAB_103c0d260;
    lVar5 = param_1;
    func_0x000107c60ab4(param_1,0);
    lVar9 = param_2;
    func_0x000107c60ab4(param_2,0);
    lVar6 = param_1;
    func_0x000107c60ab4(param_1,1);
    lVar7 = param_2;
    func_0x000107c60ab4(param_2,1);
    lVar8 = param_1;
    func_0x000107c60ac8();
    uVar15 = 0;
    if (((lVar8 <= lVar5) && (lVar8 <= lVar9)) && ((lVar8 <= lVar6 && (lVar8 <= lVar7)))) {
      if (lVar5 == lVar9) {
        if (SBORROW8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0d3b0);
          (*pcVar1)();
        }
        lVar9 = (lVar14 + -1) * lVar5;
        if (SUB168(SEXT816(lVar14 + -1) * SEXT816(lVar5),8) != lVar9 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0d3b8);
          (*pcVar1)();
        }
        if (SCARRY8(lVar9,lVar8)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0d3bc);
          (*pcVar1)();
        }
        func_0x000107c610b4(lVar12,lVar11,lVar9 + lVar8);
      }
      else {
        if (lVar14 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0d3b4);
          (*pcVar1)();
        }
        if (lVar14 != 0) {
          lVar16 = 0;
          do {
            lVar10 = lVar16 * lVar5;
            if (SUB168(SEXT816(lVar16) * SEXT816(lVar5),8) != lVar10 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0d3a0);
              (*pcVar1)();
            }
            lVar13 = lVar16 * lVar9;
            if (SUB168(SEXT816(lVar16) * SEXT816(lVar9),8) != lVar13 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0d3a4);
              (*pcVar1)();
            }
            lVar16 = lVar16 + 1;
            func_0x000107c610b4(lVar12 + lVar13,lVar11 + lVar10,lVar8);
          } while (lVar14 != lVar16);
        }
      }
      if (lVar6 == lVar7) {
        if (SBORROW8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0d3c0);
          (*pcVar1)();
        }
        lVar11 = (lVar4 + -1) * lVar6;
        if (SUB168(SEXT816(lVar4 + -1) * SEXT816(lVar6),8) != lVar11 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0d3c8);
          (*pcVar1)();
        }
        if (SCARRY8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0d3cc);
          (*pcVar1)();
        }
        func_0x000107c610b4(lVar3,lVar2,lVar11 + lVar8);
        uVar15 = 1;
      }
      else {
        if (lVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0d3c4);
          (*pcVar1)();
        }
        if (lVar4 == 0) {
          uVar15 = 1;
        }
        else {
          lVar11 = 0;
          uVar15 = 1;
          do {
            lVar12 = lVar11 * lVar6;
            if (SUB168(SEXT816(lVar11) * SEXT816(lVar6),8) != lVar12 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0d3a8);
              (*pcVar1)();
            }
            lVar14 = lVar11 * lVar7;
            if (SUB168(SEXT816(lVar11) * SEXT816(lVar7),8) != lVar14 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0d3ac);
              (*pcVar1)();
            }
            lVar11 = lVar11 + 1;
            func_0x000107c610b4(lVar3 + lVar14,lVar2 + lVar12,lVar8);
          } while (lVar4 != lVar11);
        }
      }
    }
  }
  func_0x000107c60ae0(param_2,0);
LAB_103c0d270:
  func_0x000107c60ae0(param_1,1);
  return uVar15;
}



/* Entry: 103c0d5b8; end: 103c0d5c7;  */

void FUN_103c0d5b8(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103c0d5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103c0d5c8; end: 103c0d64b;  */

long FUN_103c0d5c8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103c0d64c; end: 103c0d697;  */

undefined8 * FUN_103c0d64c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 103c0d698; end: 103c0d71b;  */

void FUN_103c0d698(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 103c0d71c; end: 103c0d7d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0d71c(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  long lVar22;
  long unaff_x20;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  long unaff_x22;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  
  lVar16 = 0x112ff79b8;
  func_0x0001000285a8(0x112ff79b8,&UNK_10dc652f8);
  uVar19 = (ulong)*(byte *)(*(long *)(lVar16 + -8) + 0x50);
  uVar28 = uVar19 + 0x10 & (uVar19 ^ 0xffffffffffffffff);
  uVar19 = *(long *)(*(long *)(lVar16 + -8) + 0x40) + uVar28 + 7 & 0xfffffffffffffff8;
  lVar25 = *(long *)(unaff_x20 + uVar19);
  uVar27 = *(undefined8 *)(unaff_x20 + (uVar19 + 0x37 & 0xffffffffffffff8));
  plVar12 = (long *)0x1b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_103c0d7d8;
  lVar17 = unaff_x20 + uVar19 + 8;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12[0x1a] = lVar25;
  plVar12[0x1b] = lVar17;
  plVar12[0x19] = unaff_x20 + uVar28;
  lVar16 = 0x112ff79c8;
  func_0x0001000285a8(0x112ff79c8,&UNK_10dc65318,lVar25,lVar17,uVar27);
  plVar12[0x1c] = lVar16;
  lVar16 = *(long *)(lVar16 + -8);
  plVar12[0x1d] = lVar16;
  uVar19 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar12[0x1e] = uVar19;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    pcVar11 = FUN_103c0bdb4;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = plVar12[0x1e];
  lVar16 = plVar12[0x1a];
  func_0x0001000285a8(0x112ff79b8,&UNK_10dc652f8);
  func_0x000107c5fd34(lVar15);
  func_0x000107c61428(lVar16 + 0x10,plVar12 + 0x12,0,0);
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70
                                   + 4);
  func_0x000107c615b8();
  plVar12[0x1f] = (long)plVar4;
  *plVar4 = (long)plVar12;
  plVar4[1] = (long)FUN_103c0be80;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    plVar12 = plVar12 + 0x15;
    goto LAB_107c5fd38;
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)*plVar12;
  func_0x000107c615c0(*(undefined8 *)(*plVar12 + 0xf8));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    pcVar11 = FUN_103c0bef4;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = plVar4[0x15];
  if (lVar17 == 0) {
    (**(code **)(plVar4[0x1d] + 8))(plVar4[0x1e],plVar4[0x1c]);
LAB_103c0c214:
    func_0x000107c615c0(plVar4[0x1e]);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000103c0c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar4[1])();
      return;
    }
  }
  else {
    plVar4[0x20] = lVar17;
    lVar15 = plVar4[0x1a] + 0x10;
    func_0x000107c61618();
    plVar4[0x21] = lVar15;
    if (lVar15 == 0) {
LAB_103c0c1e8:
      lVar15 = plVar4[0x1d];
      lVar25 = plVar4[0x1e];
      lVar22 = plVar4[0x1c];
      (**(code **)(lVar17 + 0x20))(*(undefined8 *)(lVar17 + 0x10));
      (**(code **)(lVar15 + 8))(lVar25,lVar22);
      func_0x000107c61574(lVar17);
      goto LAB_103c0c214;
    }
    lVar25 = *(long *)(lVar15 + _DAT_112ff7a10);
    plVar4[0x22] = lVar25;
    if (lVar25 == 0) {
LAB_103c0c1e4:
      func_0x000107c61170();
      goto LAB_103c0c1e8;
    }
    lVar22 = *(long *)(lVar15 + _DAT_112ff7a08);
    plVar4[0x23] = lVar22;
    if (lVar22 == 0) goto LAB_103c0c1e4;
    lVar23 = *(long *)(lVar15 + _DAT_112ff79f8);
    plVar4[0x24] = lVar23;
    if (lVar23 == 0) goto LAB_103c0c1e4;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar23;
    func_0x0001000f11b0();
    plVar4[0x25] = lVar5;
    plVar4[0x16] = 0;
    plVar12 = plVar4 + 0x16;
    iVar3 = 0;
    func_0x000107c60ad8(0,lVar22);
    lVar5 = plVar4[0x16];
    plVar4[0x26] = lVar5;
    if (iVar3 != 0 || lVar5 == 0) {
LAB_103c0c260:
      lVar5 = plVar4[0x1d];
      lVar6 = plVar4[0x1e];
      lVar13 = plVar4[0x1c];
      (**(code **)(lVar17 + 0x20))(*(undefined8 *)(lVar17 + 0x10));
      func_0x000107c61170(lVar25);
      func_0x000107c61170(lVar22);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(lVar15);
      (**(code **)(lVar5 + 8))(lVar6,lVar13);
      func_0x000107c61574(lVar17);
LAB_103c0c324:
      func_0x000107c61170(plVar4[0x16]);
      goto LAB_103c0c214;
    }
    uVar28 = *(ulong *)(lVar17 + 0x10);
    func_0x000107c61174();
    func_0x000107c61174();
    uVar19 = uVar28;
    FUN_103c0d0c0();
    func_0x000107c61170(uVar28);
    if ((uVar19 & 1) == 0) {
      func_0x000107c61170(lVar5);
      goto LAB_103c0c260;
    }
    lVar6 = *(long *)(lVar17 + 0x18);
    lVar13 = 1000000;
    func_0x000107c600c8();
    plVar4[0x27] = lVar6;
    plVar4[0x28] = lVar13;
    plVar4[0x29] = (long)plVar12;
    plVar4[0x17] = 0;
    iVar3 = 0;
    func_0x000107c60ad8(0,lVar25,plVar4 + 0x17);
    puVar24 = (undefined *)plVar4[0x17];
    plVar4[0x2a] = (long)puVar24;
    if ((iVar3 != 0) || (puVar24 == (undefined *)0x0)) {
LAB_103c0c2c8:
      lVar6 = plVar4[0x1d];
      lVar13 = plVar4[0x1e];
      lVar18 = plVar4[0x1c];
      (**(code **)(lVar17 + 0x20))(*(undefined8 *)(lVar17 + 0x10));
      func_0x000107c61170(lVar25);
      func_0x000107c61170(lVar22);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(lVar15);
      func_0x000107c61170(lVar5);
      (**(code **)(lVar6 + 8))(lVar13,lVar18);
      func_0x000107c61574(lVar17);
      func_0x000107c61170(plVar4[0x17]);
      goto LAB_103c0c324;
    }
    puVar7 = PTR__OBJC_CLASS___VTFrameProcessorFrame_1126ad990;
    func_0x000107c610f8();
    func_0x000107c61174();
    plVar4[0x30] = lVar6;
    *(int *)(plVar4 + 0x31) = (int)lVar13;
    uVar21 = (undefined4)((ulong)lVar13 >> 0x20);
    *(undefined4 *)((long)plVar4 + 0x18c) = uVar21;
    plVar4[0x32] = (long)plVar12;
    func_0x000107c45a78();
    plVar4[0x2b] = (long)puVar7;
    if (puVar7 == (undefined *)0x0) {
LAB_103c0c2c0:
      func_0x000107c61170(puVar24);
      goto LAB_103c0c2c8;
    }
    puVar8 = PTR__OBJC_CLASS___VTFrameProcessorFrame_1126ad990;
    func_0x000107c610f8();
    plVar4[0x33] = lVar6;
    *(int *)(plVar4 + 0x34) = (int)lVar13;
    *(undefined4 *)((long)plVar4 + 0x1a4) = uVar21;
    plVar4[0x35] = (long)plVar12;
    func_0x000107c45a78();
    plVar4[0x2c] = (long)puVar8;
    if (puVar8 == (undefined *)0x0) {
      func_0x000107c61170(puVar24);
      puVar24 = puVar7;
      goto LAB_103c0c2c0;
    }
    puVar24 = PTR__OBJC_CLASS___VTLowLatencySuperResolutionScalerParameters_1126ad998;
    func_0x000107c610f8();
    func_0x000107c488d4();
    plVar4[0x2d] = (long)puVar24;
    plVar4[7] = (long)(plVar4 + 0x18);
    plVar4[2] = (long)plVar4;
    plVar4[3] = (long)FUN_103c0c334;
    plVar12 = plVar4 + 2;
    func_0x000107c61448(plVar12,1);
    lVar17 = 0x112ff7a58;
    func_0x0001000285a8(0x112ff7a58,&UNK_10dc653b0);
    plVar4[10] = (long)PTR___NSConcreteStackBlock_11034bd00;
    plVar4[0x11] = lVar17;
    plVar4[0xb] = 0x42000000;
    plVar4[0xc] = (long)FUN_103c0c7a4;
    plVar4[0xd] = (long)&UNK_1106e8748;
    plVar4[0xe] = (long)plVar12;
    func_0x000107c61174(puVar24);
    func_0x000107c4f2dc(lVar23);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(plVar4 + 2);
      return;
    }
  }
  func_0x000107c60e78();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*plVar4;
  lVar17 = *(long *)(*plVar4 + 0x30);
  *(long *)(*plVar4 + 0x170) = lVar17;
  if (lVar17 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
      pcVar11 = FUN_103c0c3d0;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    pcVar11 = FUN_103c0c5b8;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = plVar12[0x2d];
  lVar15 = plVar12[0x25];
  func_0x000107c615e8(plVar12[0x18]);
  func_0x000107c61170();
  func_0x0001000f11b0();
  if (SBORROW8(lVar16,lVar15)) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x103c0c5b4);
    (*pcVar11)();
  }
  lVar25 = plVar12[0x2c];
  lVar18 = plVar12[0x2d];
  lVar22 = plVar12[0x2a];
  lVar26 = plVar12[0x2b];
  lVar23 = plVar12[0x28];
  lVar14 = plVar12[0x29];
  lVar5 = plVar12[0x26];
  lVar30 = plVar12[0x27];
  lVar6 = plVar12[0x23];
  lVar31 = plVar12[0x24];
  lVar13 = plVar12[0x21];
  lVar1 = plVar12[0x22];
  lVar29 = plVar12[0x20];
  lVar9 = plVar12[0x1b];
  uVar27 = *(undefined8 *)(lVar9 + 0x18);
  lVar2 = *(long *)(lVar9 + 0x20);
  func_0x000103c0d85c(lVar9,uVar27);
  (**(code **)(lVar2 + 0x10))
            ((double)(lVar16 - lVar15) / 1000000.0,lVar30,lVar23,lVar14,uVar27,lVar2);
  pcVar11 = *(code **)(lVar29 + 0x20);
  uVar27 = *(undefined8 *)(lVar29 + 0x28);
  func_0x000107c6157c(uVar27);
  lVar16 = lVar25;
  func_0x000107c3ecb8();
  func_0x000107c61180();
  (*pcVar11)();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar16);
  func_0x000107c61574(uVar27);
  func_0x000107c61574(lVar29);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(plVar12[0x17]);
  func_0x000107c61170(plVar12[0x16]);
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70
                                   + 4);
  func_0x000107c615b8();
  plVar12[0x2f] = (long)plVar4;
  *plVar4 = (long)plVar12;
  plVar4[1] = (long)FUN_103c0c730;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    plVar12 = plVar12 + 0x15;
  }
  else {
    func_0x000107c60e78();
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar16 = plVar12[0x2d];
    lVar22 = plVar12[0x2e];
    lVar17 = plVar12[0x2b];
    lVar5 = plVar12[0x2c];
    lVar30 = plVar12[0x2a];
    lVar31 = plVar12[0x26];
    lVar15 = plVar12[0x23];
    lVar6 = plVar12[0x24];
    lVar25 = plVar12[0x21];
    lVar13 = plVar12[0x22];
    lVar26 = plVar12[0x20];
    func_0x000107c61654();
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(lVar31);
    func_0x000107c61170(lVar30);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar25);
    func_0x000107c61170(plVar12[0x17]);
    func_0x000107c61170(plVar12[0x16]);
    pcVar11 = *(code **)(lVar26 + 0x20);
    uVar27 = *(undefined8 *)(lVar26 + 0x28);
    uVar20 = *(undefined8 *)(lVar26 + 0x10);
    func_0x000107c6157c(uVar27);
    uVar10 = uVar20;
    func_0x000107c61174();
    (*pcVar11)(uVar20);
    func_0x000107c61170(uVar10);
    func_0x000107c61574(uVar27);
    func_0x000107c61574(lVar26);
    func_0x000107c614ac(lVar22);
    plVar4 = (long *)(ulong)*(uint *)(
                                     PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70
                                     + 4);
    func_0x000107c615b8();
    plVar12[0x2f] = (long)plVar4;
    *plVar4 = (long)plVar12;
    plVar4[1] = (long)FUN_103c0c730;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
      func_0x000107c60e78();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar16 = *(long *)(*plVar12 + 0x178);
      func_0x000107c615c0();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
        func_0x000107c60e78();
        plVar12 = (long *)(lVar16 + 0x20);
        func_0x000103c0d85c(plVar12,*(undefined8 *)(lVar16 + 0x38));
        lVar16 = *plVar12;
        if (lVar14 != 0) {
          uVar27 = 0x112d393f0;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          plVar12 = (long *)PTR___ss5ErrorWS_11034ee10;
          func_0x000107c613f8();
          *plVar12 = lVar14;
          func_0x000107c61174(lVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar16,uVar27);
          return;
        }
        **(long **)(*(long *)(lVar16 + 0x40) + 0x28) = lVar23;
        func_0x000107c615f0(lVar23);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar16);
        return;
      }
      pcVar11 = FUN_103c0d910;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar11,0,0);
      return;
    }
    plVar12 = plVar12 + 0x15;
  }
LAB_107c5fd38:
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaF_11034fd68)(plVar4,plVar12,0,0);
  return;
}



/* Entry: 103c0d7d8; end: 103c0d813;  */

void FUN_103c0d7d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c0d810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103c0d814; end: 103c0d823;  */

long FUN_103c0d814(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 103c0d824; end: 103c0d83b;  */

void FUN_103c0d824(long param_1)

{
  FUN_103c0d83c(param_1 + 0x20);
  return;
}



/* Entry: 103c0d83c; end: 103c0d887;  */

void FUN_103c0d83c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103c0d850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103c0d888; end: 103c0d90f;  */

undefined8 FUN_103c0d888(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}


