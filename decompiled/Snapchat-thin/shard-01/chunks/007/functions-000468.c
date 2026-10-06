/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013abdb0; end: 1013abdbb; -[SCSelfieOnboardingSettingsEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abdb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d796b8;
  func_0x000107c61428(param_1 + _DAT_112d796b8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1013abdbc; end: 1013abe1b;  */

void FUN_1013abdbc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1013abe1c; end: 1013acd9b;  */

/* WARNING: Possible PIC construction at 0x0001013ac820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac8a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac8bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac94c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac9a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac9b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac9c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac9d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ac9e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013accfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acd1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acd2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acd3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acd4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acd5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acc9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013accac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013accbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013accdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013accec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acc3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acc4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acc5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acc6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acc7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acbdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acbec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acc1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acb9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acbbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acbcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acb4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acb5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acb6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acb7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acb0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acb1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acb2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acacc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acaec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013aca9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acaac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013acabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013aca7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013aca8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013aca5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013aca3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013aca2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013aca40) */
/* WARNING: Removing unreachable block (ram,0x0001013aca60) */
/* WARNING: Removing unreachable block (ram,0x0001013aca90) */
/* WARNING: Removing unreachable block (ram,0x0001013aca80) */
/* WARNING: Removing unreachable block (ram,0x0001013acac0) */
/* WARNING: Removing unreachable block (ram,0x0001013acab0) */
/* WARNING: Removing unreachable block (ram,0x0001013acaa0) */
/* WARNING: Removing unreachable block (ram,0x0001013acaf0) */
/* WARNING: Removing unreachable block (ram,0x0001013acae0) */
/* WARNING: Removing unreachable block (ram,0x0001013acad0) */
/* WARNING: Removing unreachable block (ram,0x0001013acb30) */
/* WARNING: Removing unreachable block (ram,0x0001013acb20) */
/* WARNING: Removing unreachable block (ram,0x0001013acb10) */
/* WARNING: Removing unreachable block (ram,0x0001013acb80) */
/* WARNING: Removing unreachable block (ram,0x0001013acb70) */
/* WARNING: Removing unreachable block (ram,0x0001013acb60) */
/* WARNING: Removing unreachable block (ram,0x0001013acb50) */
/* WARNING: Removing unreachable block (ram,0x0001013acbd0) */
/* WARNING: Removing unreachable block (ram,0x0001013acbc0) */
/* WARNING: Removing unreachable block (ram,0x0001013acbb0) */
/* WARNING: Removing unreachable block (ram,0x0001013acba0) */
/* WARNING: Removing unreachable block (ram,0x0001013acb90) */
/* WARNING: Removing unreachable block (ram,0x0001013acc20) */
/* WARNING: Removing unreachable block (ram,0x0001013acc10) */
/* WARNING: Removing unreachable block (ram,0x0001013acc00) */
/* WARNING: Removing unreachable block (ram,0x0001013acbf0) */
/* WARNING: Removing unreachable block (ram,0x0001013acbe0) */
/* WARNING: Removing unreachable block (ram,0x0001013acc80) */
/* WARNING: Removing unreachable block (ram,0x0001013acc70) */
/* WARNING: Removing unreachable block (ram,0x0001013acc60) */
/* WARNING: Removing unreachable block (ram,0x0001013acc50) */
/* WARNING: Removing unreachable block (ram,0x0001013acc40) */
/* WARNING: Removing unreachable block (ram,0x0001013accf0) */
/* WARNING: Removing unreachable block (ram,0x0001013acce0) */
/* WARNING: Removing unreachable block (ram,0x0001013accd0) */
/* WARNING: Removing unreachable block (ram,0x0001013accc0) */
/* WARNING: Removing unreachable block (ram,0x0001013accb0) */
/* WARNING: Removing unreachable block (ram,0x0001013acca0) */
/* WARNING: Removing unreachable block (ram,0x0001013acd60) */
/* WARNING: Removing unreachable block (ram,0x0001013acd50) */
/* WARNING: Removing unreachable block (ram,0x0001013acd40) */
/* WARNING: Removing unreachable block (ram,0x0001013acd30) */
/* WARNING: Removing unreachable block (ram,0x0001013acd20) */
/* WARNING: Removing unreachable block (ram,0x0001013acd10) */
/* WARNING: Removing unreachable block (ram,0x0001013acd00) */
/* WARNING: Removing unreachable block (ram,0x0001013ac9ec) */
/* WARNING: Removing unreachable block (ram,0x0001013ac9dc) */
/* WARNING: Removing unreachable block (ram,0x0001013ac9cc) */
/* WARNING: Removing unreachable block (ram,0x0001013ac9bc) */
/* WARNING: Removing unreachable block (ram,0x0001013ac9ac) */
/* WARNING: Removing unreachable block (ram,0x0001013ac99c) */
/* WARNING: Removing unreachable block (ram,0x0001013ac98c) */
/* WARNING: Removing unreachable block (ram,0x0001013ac97c) */
/* WARNING: Removing unreachable block (ram,0x0001013ac950) */
/* WARNING: Removing unreachable block (ram,0x0001013ac8c0) */
/* WARNING: Removing unreachable block (ram,0x0001013ac8ac) */
/* WARNING: Removing unreachable block (ram,0x0001013ac89c) */
/* WARNING: Removing unreachable block (ram,0x0001013ac88c) */
/* WARNING: Removing unreachable block (ram,0x0001013ac87c) */
/* WARNING: Removing unreachable block (ram,0x0001013ac858) */
/* WARNING: Removing unreachable block (ram,0x0001013ac848) */
/* WARNING: Removing unreachable block (ram,0x0001013ac838) */
/* WARNING: Removing unreachable block (ram,0x0001013ac824) */
/* WARNING: Removing unreachable block (ram,0x0001013aca30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013abe1c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long alStack_350 [2];
  code *pcStack_340;
  ulong uStack_338;
  code *pcStack_330;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined1 *puStack_2f8;
  long lStack_2f0;
  undefined *puStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  long lStack_2a8;
  long lStack_288;
  long lStack_280;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 auStack_208 [3];
  long lStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 auStack_1e0 [3];
  long lStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 auStack_1b8 [3];
  long lStack_1a0;
  undefined **ppuStack_198;
  undefined8 auStack_190 [3];
  long lStack_178;
  undefined **ppuStack_170;
  undefined8 auStack_168 [3];
  long lStack_150;
  undefined **ppuStack_148;
  undefined8 auStack_140 [3];
  long lStack_128;
  undefined **ppuStack_120;
  long alStack_118 [3];
  long lStack_100;
  undefined **ppuStack_f8;
  long alStack_f0 [3];
  long lStack_d8;
  undefined **ppuStack_d0;
  long alStack_c8 [3];
  long lStack_b0;
  undefined **ppuStack_a8;
  long alStack_a0 [3];
  long lStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar11 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar11 == 0) {
    return;
  }
  lVar13 = unaff_x20;
  func_0x000107c40014();
  func_0x000107c61180();
  if (lVar13 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3fa0c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar9 = unaff_x20;
      func_0x000107c5dbb4();
      func_0x000107c61180();
      if (lVar9 != 0) {
        lVar12 = unaff_x20;
        func_0x000107c43d54();
        func_0x000107c61180();
        if (lVar12 == 0) {
          func_0x000107c61170(lVar11);
          lVar11 = lVar13;
        }
        else {
          lVar7 = unaff_x20;
          func_0x000107c43d5c();
          func_0x000107c61180();
          if (lVar7 == 0) {
            func_0x000107c61170(lVar11);
            lVar11 = lVar13;
          }
          else {
            lVar3 = unaff_x20;
            func_0x000107c4d840();
            func_0x000107c61180();
            if (lVar3 != 0) {
              lVar4 = unaff_x20;
              func_0x000107c5d900();
              func_0x000107c61180();
              if (lVar4 != 0) {
                lVar6 = unaff_x20;
                func_0x000107c42eb0();
                func_0x000107c61180();
                if (lVar6 == 0) {
                  func_0x000107c61170(lVar11);
                  lVar11 = lVar13;
                }
                else {
                  lVar5 = unaff_x20;
                  lStack_220 = lVar6;
                  func_0x000107c42318();
                  func_0x000107c61180();
                  if (lVar5 == 0) {
                    func_0x000107c61170(lVar11);
                    lVar11 = lVar13;
                  }
                  else {
                    lVar6 = unaff_x20;
                    lStack_228 = lVar5;
                    func_0x000107c42310();
                    func_0x000107c61180();
                    if (lVar6 != 0) {
                      lVar5 = unaff_x20;
                      lStack_230 = lVar6;
                      func_0x000107c410c8();
                      func_0x000107c61180();
                      if (lVar5 != 0) {
                        lVar6 = unaff_x20;
                        lStack_238 = lVar5;
                        func_0x000107c3eb54();
                        func_0x000107c61180();
                        if (lVar6 == 0) {
                          func_0x000107c61170(lVar11);
                          lVar11 = lVar13;
                        }
                        else {
                          lVar5 = unaff_x20;
                          lStack_240 = lVar6;
                          func_0x000107c40e34();
                          func_0x000107c61180();
                          if (lVar5 == 0) {
                            func_0x000107c61170(lVar11);
                            lVar11 = lVar13;
                          }
                          else {
                            func_0x000107c5e1d0();
                            func_0x000107c61180();
                            if (unaff_x20 != 0) {
                              lVar6 = 0;
                              lStack_270 = unaff_x20;
                              FUN_1013a5c98();
                              func_0x000107c613fc();
                              *(undefined8 *)(lVar6 + 0x68) = 0;
                              *(long *)(lVar6 + 0x10) = lVar11;
                              *(long *)(lVar6 + 0x18) = lVar13;
                              *(long *)(lVar6 + 0x20) = lVar2;
                              *(long *)(lVar6 + 0x28) = lVar9;
                              *(long *)(lVar6 + 0x50) = lStack_230;
                              lStack_288 = lVar6;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              lStack_268 = lStack_230;
                              func_0x000107c61174();
                              lStack_258 = lVar9;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              lStack_260 = lVar13;
                              func_0x000107c61174();
                              lVar13 = lStack_270;
                              lStack_250 = lVar11;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              lVar11 = lStack_228;
                              lStack_280 = lStack_238;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              lStack_230 = lStack_220;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              lStack_2a8 = lVar7;
                              func_0x000107c61174();
                              lVar9 = lVar12;
                              func_0x000107c43d50();
                              func_0x000107c61180();
                              lVar7 = 0;
                              func_0x0001013a5ce4();
                              lStack_2c8 = lVar7;
                              func_0x000107c613fc();
                              *(long *)(lVar7 + 0x10) = lVar9;
                              puVar8 = PTR_PTR_1126ae810;
                              func_0x000107c610f8();
                              func_0x000107c453e4();
                              *(undefined **)(lVar7 + 0x18) = puVar8;
                              uVar14 = *(undefined8 *)(lVar4 + _DAT_113083868);
                              lVar9 = 0;
                              lStack_220 = lVar7;
                              func_0x0001013a5da4();
                              puStack_2d0 = (undefined *)lVar9;
                              func_0x000107c613fc();
                              *(undefined8 *)(lVar9 + 0x10) = uVar14;
                              lVar7 = 0;
                              lStack_228 = lVar9;
                              FUN_1013a5e70();
                              lVar9 = lVar7;
                              func_0x000107c610f8();
                              puVar15 = (undefined8 *)(lVar9 + _DAT_112d79408);
                              *puVar15 = 0;
                              puVar15[1] = 0;
                              *(long *)(lVar9 + _DAT_112d793f8) = lVar11;
                              *(long *)(lVar9 + _DAT_112d79400) = lStack_268;
                              puVar8 = PTR_s_init_1125d9248;
                              lStack_78 = lVar9;
                              lStack_70 = lVar7;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174(uVar14);
                              plVar10 = &lStack_78;
                              func_0x000107c61154(plVar10,puVar8);
                              lVar11 = 0;
                              plStack_2b0 = plVar10;
                              func_0x0001013a673c();
                              func_0x000107c613fc();
                              *(long *)(lVar11 + 0x10) = lStack_258;
                              *(long *)(lVar11 + 0x18) = lStack_260;
                              *(long *)(lVar11 + 0x20) = lVar13;
                              lStack_240 = lVar11;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              lVar11 = lVar12;
                              lStack_2c0 = lStack_250;
                              func_0x000107c43d50();
                              func_0x000107c61180();
                              lStack_2b8 = lVar11;
                              func_0x000107c4d390();
                              func_0x000107c61180();
                              lVar11 = lVar2;
                              lStack_248 = lVar12;
                              func_0x000107c3fa04();
                              func_0x000107c61180();
                              if (lVar11 == 0) {
                    /* WARNING: Does not return */
                                pcVar1 = (code *)SoftwareBreakpoint(1,0x1013acd88);
                                (*pcVar1)();
                              }
                              func_0x000107c4d80c();
                              func_0x000107c61180();
                              lVar11 = lVar2;
                              lStack_260 = lVar3;
                              func_0x000107c3fa04();
                              func_0x000107c61180();
                              if (lVar11 == 0) {
                    /* WARNING: Does not return */
                                pcVar1 = (code *)SoftwareBreakpoint(1,0x1013acd8c);
                                (*pcVar1)();
                              }
                              lVar13 = lStack_230;
                              func_0x000107c42eac();
                              func_0x000107c61180();
                              if (lVar13 == 0) {
                    /* WARNING: Does not return */
                                pcVar1 = (code *)SoftwareBreakpoint(1,0x1013acd90);
                                (*pcVar1)();
                              }
                              lVar12 = 0;
                              func_0x0001013a5090();
                              lVar9 = lVar12;
                              func_0x000107c613fc();
                              *(long *)(lVar9 + 0x10) = lVar11;
                              *(long *)(lVar9 + 0x18) = lVar13;
                              ppuStack_80 = &PTR_DAT_1103abc98;
                              alStack_a0[0] = lVar9;
                              lStack_88 = lVar12;
                              func_0x000107c3fa04();
                              func_0x000107c61180();
                              if (lVar2 == 0) {
                    /* WARNING: Does not return */
                                pcVar1 = (code *)SoftwareBreakpoint(1,0x1013acd94);
                                (*pcVar1)();
                              }
                              lVar11 = lStack_230;
                              func_0x000107c42eac();
                              func_0x000107c61180();
                              if (lVar11 == 0) {
                    /* WARNING: Does not return */
                                pcVar1 = (code *)SoftwareBreakpoint(1,0x1013acd98);
                                (*pcVar1)();
                              }
                              lVar9 = 0;
                              func_0x0001013a465c();
                              lVar13 = lVar9;
                              func_0x000107c613fc();
                              *(long *)(lVar13 + 0x10) = lVar2;
                              *(long *)(lVar13 + 0x18) = lVar11;
                              ppuStack_a8 = &PTR_DAT_1103abb88;
                              alStack_c8[0] = lVar13;
                              lStack_b0 = lVar9;
                              func_0x000107c42eac();
                              func_0x000107c61180();
                              if (lStack_230 == 0) {
                    /* WARNING: Does not return */
                                pcVar1 = (code *)SoftwareBreakpoint(1,0x1013acd9c);
                                (*pcVar1)();
                              }
                              lStack_2f0 = lStack_230;
                              func_0x0001000c6518(alStack_a0,lVar12);
                              lVar11 = *(long *)(*(long *)(lVar12 + -8) + 0x40);
                              puStack_2f8 = (undefined1 *)alStack_350;
                              (*(code *)PTR____chkstk_darwin_11034bd40)();
                              puStack_320 = (undefined8 *)(lVar11 + 0xfU & 0xfffffffffffffff0);
                              puVar15 = (undefined8 *)((long)alStack_350 - (long)puStack_320);
                              pcStack_330 = *(code **)(extraout_x8 + 0x10);
                              (*pcStack_330)(puVar15);
                              func_0x0001000c6518(alStack_c8,lVar9);
                              alStack_350[1] = *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40);
                              puStack_300 = puVar15;
                              (*(code *)PTR____chkstk_darwin_11034bd40)();
                              uStack_338 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
                              puVar16 = (undefined8 *)((long)puVar15 - uStack_338);
                              pcStack_340 = *(code **)(extraout_x8_00 + 0x10);
                              (*pcStack_340)(puVar16);
                              lVar11 = lStack_2c8;
                              puVar8 = puStack_2d0;
                              auStack_140[0] = *puVar15;
                              auStack_168[0] = *puVar16;
                              lStack_d8 = lStack_2c8;
                              ppuStack_d0 = &PTR_DAT_1103abd08;
                              alStack_f0[0] = lStack_220;
                              ppuStack_f8 = &PTR_DAT_1103abd28;
                              lStack_100 = (long)puStack_2d0;
                              alStack_118[0] = lStack_228;
                              ppuStack_120 = &PTR_DAT_1103abc98;
                              ppuStack_148 = &PTR_DAT_1103abb88;
                              lVar13 = 0;
                              lStack_150 = lVar9;
                              lStack_128 = lVar12;
                              FUN_1013a9310();
                              lStack_328 = lVar13;
                              func_0x000107c610f8();
                              func_0x0001000c6518(alStack_f0,lVar11);
                              puStack_308 = puVar16;
                              (*(code *)PTR____chkstk_darwin_11034bd40)
                                        (*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
                              puVar16 = (undefined8 *)
                                        ((long)puVar16 -
                                        (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
                              (**(code **)(extraout_x12_00 + 0x10))(puVar16);
                              func_0x0001000c6518(alStack_118,puVar8);
                              puStack_310 = puVar16;
                              (*(code *)PTR____chkstk_darwin_11034bd40)
                                        (*(undefined8 *)(*(long *)((long)puVar8 + -8) + 0x40));
                              puVar17 = (undefined8 *)
                                        ((long)puVar16 -
                                        (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
                              (**(code **)(extraout_x12_01 + 0x10))(puVar17);
                              alStack_350[0] = lVar12;
                              func_0x0001000c6518(auStack_140,lVar12);
                              puStack_318 = puVar17;
                              (*(code *)PTR____chkstk_darwin_11034bd40)();
                              puVar15 = (undefined8 *)((long)puVar17 - (long)puStack_320);
                              (*pcStack_330)(puVar15);
                              func_0x0001000c6518(auStack_168,lVar9);
                              puStack_320 = puVar15;
                              (*(code *)PTR____chkstk_darwin_11034bd40)();
                              puVar18 = (undefined8 *)((long)puVar15 - uStack_338);
                              (*pcStack_340)(puVar18);
                              auStack_190[0] = *puVar16;
                              auStack_1b8[0] = *puVar17;
                              auStack_1e0[0] = *puVar15;
                              auStack_208[0] = *puVar18;
                              lStack_178 = lVar11;
                              ppuStack_170 = &PTR_DAT_1103abd08;
                              lStack_1a0 = (long)puVar8;
                              ppuStack_198 = &PTR_DAT_1103abd28;
                              lStack_1c8 = alStack_350[0];
                              ppuStack_1c0 = &PTR_DAT_1103abc98;
                              ppuStack_1e8 = &PTR_DAT_1103abb88;
                              lStack_1f0 = lVar9;
                              func_0x000107c61614(lVar13 + _DAT_112d79548,0);
                              puVar15 = (undefined8 *)(lVar13 + _DAT_112d79550);
                              puVar15[1] = 0;
                              *puVar15 = 1;
                              *(undefined1 *)(lVar13 + _DAT_112d79558) = 4;
                              lVar11 = lVar13 + _DAT_112d79578;
                              *(undefined8 *)(lVar11 + 8) = 0;
                              func_0x000107c61614(lVar11,0);
                              puVar15 = (undefined8 *)(lVar13 + _DAT_112d79580);
                              puVar15[5] = 0;
                              puVar15[4] = 0;
                              puVar15[7] = 0;
                              puVar15[6] = 0;
                              puVar15[1] = 0;
                              *puVar15 = 0;
                              puVar15[3] = 0;
                              puVar15[2] = 0;
                              *(long *)(lVar13 + _DAT_112d794f8) = lStack_2c0;
                              *(long *)(lVar13 + _DAT_112d79500) = lStack_240;
                              *(long *)(lVar13 + _DAT_112d79508) = lStack_2b8;
                              *(long *)(lVar13 + _DAT_112d79510) = lStack_248;
                              *(long *)(lVar13 + _DAT_112d79518) = lStack_2a8;
                              *(long *)(lVar13 + _DAT_112d79520) = lStack_280;
                              FUN_1013acd9c(auStack_190,lVar13 + _DAT_112d79528);
                              *(long *)(lVar13 + _DAT_112d79530) = lStack_260;
                              FUN_1013acd9c(auStack_1b8,lVar13 + _DAT_112d79538);
                              FUN_1013acd9c(auStack_1e0,lVar13 + _DAT_112d79560);
                              FUN_1013acd9c(auStack_208,lVar13 + _DAT_112d79568);
                              plVar10 = plStack_2b0;
                              puVar15 = (undefined8 *)(lVar13 + _DAT_112d79540);
                              *puVar15 = plStack_2b0;
                              puVar15[1] = &PTR_DAT_1103abd40;
                              *(long *)(lVar13 + _DAT_112d79570) = lStack_2f0;
                              lStack_210 = lStack_328;
                              puStack_2d0 = PTR_s_init_1125d9248;
                              lStack_218 = lVar13;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c6157c(lStack_220);
                              func_0x000107c6157c(lStack_228);
                              lVar13 = lStack_240;
                              func_0x000107c6157c(lStack_240);
                              lVar11 = lStack_2b8;
                              func_0x000107c61174(lStack_2b8);
                              func_0x000107c61174(lStack_248);
                              func_0x000107c61174(lStack_260);
                              func_0x000107c61174(plVar10);
                              func_0x000107c61174(lStack_2f0);
                              func_0x000107c61154(&lStack_218,puStack_2d0);
                              func_0x000107c61574(lVar13);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar11);
  return;
}



/* Entry: 1013acd9c; end: 1013acddf;  */

long FUN_1013acd9c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1013acde0; end: 1013ace07; -[SCSelfieOnboardingSettingsEntryPoint begin] */

void FUN_1013acde0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013abe1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013ace08; end: 1013ad5a7; -[SCSelfieOnboardingSettingsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ace08(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112d796c0);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_1013a5b40();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_1013ace9c;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_1013ace9c:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1013ad5a8; end: 1013ad653; -[SCSelfieOnboardingSettingsEntryPoint setValue:forIvarName:] */

void FUN_1013ad5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  func_0x0001013acebc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_1013ad938(auStack_50);
  return;
}



/* Entry: 1013ad654; end: 1013ad7ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ad654(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d79648,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d79650,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d79658,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d79660,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d79668,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d79670,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d79678,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d79680,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d79688,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d79690,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d79698,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d796a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d796a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d796b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d796b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d796c0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013ad7ac; end: 1013ad7cb; -[SCSelfieOnboardingSettingsEntryPoint init] */

void FUN_1013ad7ac(void)

{
  FUN_1013ad654();
  return;
}



/* Entry: 1013ad7cc; end: 1013ad7ff;  */

void FUN_1013ad7cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013ad800; end: 1013ad917; -[SCSelfieOnboardingSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ad800(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d79648);
  func_0x000107c61610(param_1 + _DAT_112d79650);
  func_0x000107c61610(param_1 + _DAT_112d79658);
  func_0x000107c61610(param_1 + _DAT_112d79660);
  func_0x000107c61610(param_1 + _DAT_112d79668);
  func_0x000107c61610(param_1 + _DAT_112d79670);
  func_0x000107c61610(param_1 + _DAT_112d79678);
  func_0x000107c61610(param_1 + _DAT_112d79680);
  func_0x000107c61610(param_1 + _DAT_112d79688);
  func_0x000107c61610(param_1 + _DAT_112d79690);
  func_0x000107c61610(param_1 + _DAT_112d79698);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d796a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d796a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d796b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d796b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d796c0));
  return;
}



/* Entry: 1013ad918; end: 1013ad937;  */

void FUN_1013ad918(void)

{
  func_0x000107c61168(&PTR_PTR_1127cdde0);
  return;
}



/* Entry: 1013ad938; end: 1013ad96b;  */

void FUN_1013ad938(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001013ad94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1013ad96c; end: 1013ada17;  */

void FUN_1013ad96c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1013ada18; end: 1013ada27;  */

void FUN_1013ada18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1013ada28; end: 1013ada6f; -[_TtC20SelfieOnboardingImpl22SelfieAVCaptureRequest captureOutput:didFinishProcessingPhoto:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ada28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + _DAT_112d79700) & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d796f8);
  *(undefined8 *)(param_1 + _DAT_112d796f8) = param_4;
  func_0x000107c61174(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1013ada70; end: 1013adaf7; -[_TtC20SelfieOnboardingImpl22SelfieAVCaptureRequest captureOutput:didFinishCaptureForResolvedSettings:error:] */

/* WARNING: Possible PIC construction at 0x0001013adacc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013adadc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013adad0) */
/* WARNING: Removing unreachable block (ram,0x0001013adae0) */

void FUN_1013ada70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_5);
  FUN_1013ae1f0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013adaf8; end: 1013adb57; -[_TtC20SelfieOnboardingImpl22SelfieAVCaptureRequest init] */

void FUN_1013adaf8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfieOnboardingImpl.SelfieAVCaptureRequest",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013adb24);
  (*pcVar1)();
}



/* Entry: 1013adb58; end: 1013adbb7; -[_TtC20SelfieOnboardingImpl22SelfieAVCaptureRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013adb58(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d796f0 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d796f8));
  lVar1 = _DAT_1137ff3e0;
  lVar2 = 0;
  func_0x000107c5eec8();
                    /* WARNING: Could not recover jumptable at 0x0001013adbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 1013adbb8; end: 1013adbbf;  */

void FUN_1013adbb8(void)

{
  if (lRam0000000112d79730 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e63275c);
  return;
}



/* Entry: 1013adbc0; end: 1013adbf7;  */

void FUN_1013adbc0(undefined8 param_1)

{
  if (lRam0000000112d79730 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e63275c);
  return;
}



/* Entry: 1013adbf8; end: 1013adc87;  */

void FUN_1013adbf8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_40 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_38 = &UNK_10d938b98;
  puStack_30 = &UNK_10d938bb0;
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,4,&puStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 1013adc88; end: 1013addb7;  */

void FUN_1013adc88(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 1013addb8; end: 1013adebf;  */

void FUN_1013addb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112d797c8;
  FUN_1013ae62c(0x112d797c8,&SUB_1000ebdd0,&UNK_10d938db0);
  uVar2 = 0x112d797d0;
  FUN_1013ae62c(0x112d797d0,&SUB_1000ebdd0,&UNK_10d938d70);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 1013adec0; end: 1013adf03;  */

void FUN_1013adec0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1013adf04; end: 1013adf87;  */

void FUN_1013adf04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112d797d8;
  FUN_1013ae62c(0x112d797d8,0x1013ae418,&UNK_10da15a00);
  uVar2 = 0x112d797e0;
  FUN_1013ae62c(0x112d797e0,0x1013ae418,&UNK_10daa0620);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 1013adf88; end: 1013adfff;  */

undefined8 FUN_1013adf88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 1013ae000; end: 1013ae0f3;  */

undefined1 * FUN_1013ae000(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 1013ae0f4; end: 1013ae1ef;  */

void FUN_1013ae0f4(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_2;
  func_0x000107c4340c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61170(param_2);
    lVar2 = 0;
    param_3 = 0;
    lStack_78 = 0;
    lStack_70 = 0;
    lStack_68 = 0;
    lVar3 = 0;
  }
  else {
    lVar2 = lVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar3);
    func_0x000107c5ca64(&lStack_78,param_2);
    lVar1 = param_2;
    func_0x000107c4ce20();
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c5f9e8();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_2);
  }
  *param_1 = lVar2;
  param_1[1] = param_3;
  param_1[2] = lStack_78;
  param_1[3] = lStack_70;
  param_1[4] = lStack_68;
  param_1[5] = lVar3;
  return;
}



/* Entry: 1013ae1f0; end: 1013ae37b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ae1f0(undefined *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  code *pcVar2;
  long lVar3;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 uStack_50;
  
  lVar3 = _DAT_1137ff3e0;
  if ((*(byte *)(unaff_x20 + _DAT_112d79700) & 1) != 0) {
    return;
  }
  if (param_1 == (undefined *)0x0) {
    puVar1 = *(undefined1 **)(unaff_x20 + _DAT_112d796f8);
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000107c61174();
      func_0x000107c61174();
      FUN_1013ae0f4(&lStack_b0);
      if (lStack_88 != 0) {
        uStack_78 = uStack_a8;
        puStack_80 = (undefined *)lStack_b0;
        uStack_68 = uStack_98;
        uStack_70 = uStack_a0;
        uStack_60 = uStack_90;
        lStack_58 = lStack_88;
        uStack_50 = 0;
        (**(code **)(unaff_x20 + _DAT_112d796f0))
                  (((undefined8 *)(unaff_x20 + _DAT_112d796f0))[1],unaff_x20 + _DAT_1137ff3e0,
                   &puStack_80);
        FUN_1013ae3bc(&lStack_b0);
        func_0x000107c61170(puVar1);
        return;
      }
      func_0x000107c61170();
    }
    lVar3 = _DAT_1137ff3e0;
    pcVar2 = *(code **)(unaff_x20 + _DAT_112d796f0);
    FUN_1013ae37c();
    param_1 = &UNK_1103ac5e0;
    func_0x000107c613f8(&UNK_1103ac5e0,puVar1,0,0);
    *puVar1 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    lStack_58 = 0;
    uStack_50 = 1;
    puStack_80 = param_1;
  }
  else {
    pcVar2 = *(code **)(unaff_x20 + _DAT_112d796f0);
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    lStack_58 = 0;
    uStack_50 = 1;
    puStack_80 = param_1;
    func_0x000107c614b0();
  }
  (*pcVar2)(unaff_x20 + lVar3,&puStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
  return;
}



/* Entry: 1013ae37c; end: 1013ae3bb;  */

void FUN_1013ae37c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d938f5c;
  func_0x000107c61520(&UNK_10d938f5c,&UNK_1103ac5e0);
  puRam0000000112d79740 = puVar1;
  return;
}



/* Entry: 1013ae3bc; end: 1013ae403;  */

undefined8 FUN_1013ae3bc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d79748;
  func_0x0001000285a8(0x112d79748,&UNK_10d938bd0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1013ae404; end: 1013ae593;  */

void FUN_1013ae404(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103ac4f8;
  if (lRam0000000112d79750 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112d79750 = param_1;
  }
  return;
}



/* Entry: 1013ae594; end: 1013ae62b;  */

void FUN_1013ae594(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d938ca4;
  func_0x000107c61520(&UNK_10d938ca4,&UNK_1103ac5e0);
  puRam0000000112d79768 = puVar1;
  return;
}



/* Entry: 1013ae62c; end: 1013ae66b;  */

void FUN_1013ae62c(long *param_1,code *param_2,long param_3)

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



/* Entry: 1013ae66c; end: 1013ae79f;  */

void FUN_1013ae66c(void)

{
  FUN_1013ae62c(0x112d79780,&SUB_1000ebdd0,&UNK_10d942f50);
  return;
}



/* Entry: 1013ae7a0; end: 1013ae82b;  */

void FUN_1013ae7a0(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 1013ae82c; end: 1013ae8d7;  */

void FUN_1013ae82c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1013ae8d8; end: 1013ae8e7;  */

void FUN_1013ae8d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1013ae8e8; end: 1013ae9fb;  */

long FUN_1013ae8e8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x50);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = 0x112d79930;
    func_0x0001000285a8(0x112d79930,&UNK_10d9390c8);
    func_0x000107c613fc();
    func_0x0001000c2754();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
    *(long *)(unaff_x20 + 0x50) = lVar2;
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
    lVar1 = 0;
  }
  func_0x000107c6157c(lVar1);
  return lVar2;
}



/* Entry: 1013ae9fc; end: 1013af0eb;  */

long FUN_1013ae9fc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_80;
  char *pcStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5ffd8();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar9 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(unaff_x20 + 0x60);
  lVar3 = lVar4;
  if (lVar4 == 0) {
    FUN_1013b275c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    pcStack_78 = "tureSessionSampleBufferDelegate";
    lStack_70 = lVar4;
    func_0x000107c5f808(lVar9);
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar6 = 0x112d4ac68;
    FUN_1013b1d7c(0x112d4ac68,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918,
                  PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
    uVar5 = 0x112d4ac70;
    uStack_80 = uVar6;
    func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
    uVar6 = 0x112d4ac78;
    func_0x0001013b1dbc(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
    func_0x000107c60264(lVar8,&puStack_68,uVar5,uVar6,lVar2,uStack_80);
    (**(code **)(lVar10 + 0x68))
              (lVar7,*(undefined4 *)
                      PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
               ,lVar1);
    lVar3 = -0x2fffffffffffffc8;
    func_0x000107c5ffec(0xd000000000000038,(ulong)pcStack_78 | 0x8000000000000000,lVar9,lVar8,lVar7,
                        0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
    *(long *)(unaff_x20 + 0x60) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar6);
    lVar4 = 0;
  }
  func_0x000107c61174(lVar4);
  return lVar3;
}



/* Entry: 1013af0ec; end: 1013af173;  */

void FUN_1013af0ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_1013af174();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_2;
    uVar1 = *(undefined1 *)(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x30) = param_3;
    func_0x0001013b25f8(uVar2,uVar1);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1013af174; end: 1013af6cf;  */

undefined1  [16] FUN_1013af174(ulong param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  char *pcVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = 0x112d79958;
  func_0x0001000285a8(0x112d79958,&UNK_10d943450);
  func_0x000107c613fc();
  *(undefined8 *)(lVar10 + 0x18) = 6;
  *(undefined8 *)(lVar10 + 0x10) = 3;
  puVar6 = PTR__AVCaptureDeviceTypeBuiltInWideAngleCamera_110347f20;
  uVar16 = *(undefined8 *)PTR__AVCaptureDeviceTypeBuiltInTrueDepthCamera_110347f10;
  uVar17 = *(undefined8 *)PTR__AVCaptureDeviceTypeBuiltInDualCamera_110347ee8;
  *(undefined8 *)(lVar10 + 0x20) = uVar16;
  *(undefined8 *)(lVar10 + 0x28) = uVar17;
  uVar19 = *(undefined8 *)puVar6;
  *(undefined8 *)(lVar10 + 0x30) = uVar19;
  uVar20 = *(undefined8 *)PTR__AVMediaTypeVideo_110348090;
  uVar4 = 0;
  func_0x0001000ebdd0(0);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uVar19);
  func_0x000107c61174(uVar20);
  lVar5 = lVar10;
  func_0x000107c5fc48(lVar10,uVar4);
  func_0x000107c61574(lVar10);
  puVar6 = PTR__OBJC_CLASS___AVCaptureDeviceDiscoverySession_1126a6c90;
  func_0x000107c61168();
  func_0x000107c41fd8();
  func_0x000107c61180();
  func_0x000107c61170(uVar20);
  func_0x000107c61170(lVar5);
  puVar8 = puVar6;
  func_0x000107c4197c();
  func_0x000107c61180();
  puVar7 = (undefined1 *)0x0;
  FUN_1013b275c(0,0x112d79960,&PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0);
  puVar11 = puVar8;
  func_0x000107c5fc54(puVar8,puVar7);
  func_0x000107c61170(puVar8);
  if ((ulong)puVar11 >> 0x3e == 0) {
    if (*(long *)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_1013af630;
LAB_1013af2ec:
    if (((ulong)puVar11 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013af6cc);
        (*pcVar2)();
      }
      puVar8 = *(undefined1 **)(puVar11 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar8 = (undefined1 *)0x0;
      puVar7 = puVar11;
      FUN_1013b219c(0,puVar11,&PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0,0x112d79960);
    }
    func_0x000107c6142c(puVar11);
    puVar9 = PTR__OBJC_CLASS___AVCaptureDeviceInput_1126d4280;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c46530();
    lVar10 = 0;
    if (puVar9 != (undefined1 *)0x0) {
      func_0x000107c61174();
      func_0x000107c61170(puVar8);
      func_0x000107c3e76c(*(undefined8 *)(unaff_x20 + 0x10));
      puVar11 = *(undefined1 **)(unaff_x20 + 0x10);
      func_0x000107c3f394();
      if (((ulong)puVar11 & 1) == 0) {
        FUN_1013b25ac();
        puVar12 = &UNK_1103acab8;
        func_0x000107c613f8(&UNK_1103acab8,puVar11,0,0);
        puVar7 = (undefined1 *)0x1;
        *puVar11 = 1;
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar8);
        puVar6 = puVar9;
        goto LAB_1013af664;
      }
      func_0x000107c3d710(*(undefined8 *)(unaff_x20 + 0x10));
      uVar4 = *(undefined8 *)(&PTR__AVCaptureSessionPreset1280x720_1103acac8)[param_1 & 0xff];
      func_0x000107c61174();
      iVar3 = (int)*(undefined8 *)(unaff_x20 + 0x10);
      func_0x000107c3f43c();
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (iVar3 == 0) {
        puVar11 = *(undefined1 **)(param_2 + 0x10);
        if (puVar11 == (undefined1 *)0x0) {
          puVar18 = *(undefined1 **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
          if (puVar18 != (undefined1 *)0x0) goto LAB_1013af534;
        }
        else {
          puVar7 = puVar11;
          FUN_1013baff8(0,puVar11,0);
          uVar17 = *(undefined8 *)PTR__AVCaptureSessionPreset3840x2160_110347f78;
          uVar16 = *(undefined8 *)PTR__AVCaptureSessionPreset1920x1080_110347f68;
          uVar20 = *(undefined8 *)PTR__AVCaptureSessionPreset1280x720_110347f60;
          pcVar21 = (char *)(param_2 + 0x20);
          do {
            uVar19 = uVar16;
            if (*pcVar21 != '\x01') {
              uVar19 = uVar17;
            }
            uVar13 = uVar20;
            if (*pcVar21 != '\0') {
              uVar13 = uVar19;
            }
            func_0x000107c61174();
            uVar14 = *(ulong *)(puVar1 + 0x10);
            puVar18 = (undefined1 *)(uVar14 + 1);
            if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar14) {
              puVar7 = puVar18;
              FUN_1013baff8(1 < *(ulong *)(puVar1 + 0x18),puVar18,1);
            }
            *(undefined1 **)(puVar1 + 0x10) = puVar18;
            *(undefined8 *)(puVar1 + uVar14 * 8 + 0x20) = uVar13;
            puVar11 = puVar11 + -1;
            pcVar21 = pcVar21 + 1;
          } while (puVar11 != (undefined1 *)0x0);
LAB_1013af534:
          puVar11 = (undefined1 *)0x0;
          do {
            if (*(undefined1 **)(puVar1 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1013af61c);
              (*pcVar2)();
            }
            puVar12 = *(undefined **)(puVar1 + (long)puVar11 * 8 + 0x20);
            uVar14 = *(ulong *)(unaff_x20 + 0x10);
            func_0x000107c61174();
            func_0x000107c3f43c();
            if ((uVar14 & 1) != 0) {
              func_0x000107c6142c(puVar1);
              uVar20 = *(undefined8 *)(unaff_x20 + 0x10);
              if (puVar12 != (undefined *)0x0) goto LAB_1013af5b0;
              goto LAB_1013af59c;
            }
            func_0x000107c61170(puVar12);
            puVar11 = puVar11 + 1;
          } while (puVar18 != puVar11);
        }
        func_0x000107c6142c(puVar1);
        uVar20 = *(undefined8 *)(unaff_x20 + 0x10);
LAB_1013af59c:
        puVar12 = *(undefined **)PTR__AVCaptureSessionPresetPhoto_110347fa8;
        func_0x000107c61174(puVar12);
LAB_1013af5b0:
        func_0x000107c61174(uVar20);
        func_0x000107c58fe4();
        func_0x000107c61170(uVar20);
        func_0x000107c61170(puVar12);
      }
      else {
        puVar12 = *(undefined **)(unaff_x20 + 0x10);
        func_0x000107c58fe4(puVar12);
      }
      FUN_1013b1398();
      unaff_x20 = *(long *)(unaff_x20 + 0x10);
      func_0x000107c61174();
      func_0x000107c3fe5c();
      func_0x000107c61170(unaff_x20);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar4);
      puVar6 = puVar8;
      goto LAB_1013af664;
    }
    lVar5 = lVar10;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar5);
    func_0x000107c61654();
    func_0x000107c61170(puVar8);
    func_0x000107c614ac(lVar10);
    func_0x000107c61170();
    puVar11 = puVar8;
    unaff_x20 = lVar10;
  }
  else {
    puVar8 = (undefined1 *)((ulong)puVar11 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar11) {
      puVar8 = puVar11;
    }
    func_0x000107c60480();
    if (puVar8 != (undefined1 *)0x0) goto LAB_1013af2ec;
LAB_1013af630:
    func_0x000107c6142c();
  }
  FUN_1013b25ac();
  puVar12 = &UNK_1103acab8;
  func_0x000107c613f8(&UNK_1103acab8,puVar11,0,0);
  puVar7 = (undefined1 *)0x1;
  *puVar11 = 1;
LAB_1013af664:
  func_0x000107c61170(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    func_0x000107c60e78();
    FUN_1013af744();
    func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
    func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
    uVar14 = (ulong)*(byte *)(unaff_x20 + 0x30);
    func_0x0001013b25f8(*(undefined8 *)(unaff_x20 + 0x28),uVar14);
    func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
    func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
    func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
    func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
    func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
    func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
    auVar23._8_8_ = uVar14;
    auVar23._0_8_ = unaff_x20;
    return auVar23;
  }
  auVar22._8_8_ = puVar7;
  auVar22._0_8_ = puVar12;
  return auVar22;
}



/* Entry: 1013af6d0; end: 1013af743;  */

void FUN_1013af6d0(void)

{
  long unaff_x20;
  
  FUN_1013af744();
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001013b25f8(*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1013af744; end: 1013af95b;  */

void FUN_1013af744(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar9 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lStack_b0 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001013aec00();
  puVar4 = &UNK_1103ac700;
  func_0x000107c613fc(&UNK_1103ac700,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  uStack_70 = 0x1013b2598;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1103ac920;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c6157c(puVar4);
  func_0x000107c5f808(lVar10);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  FUN_1013b1d7c(0x112d4af88,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = 0x112d4af98;
  func_0x0001013b1dbc(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar9,&puStack_98,uVar7,uVar8,lVar2,uVar6);
  func_0x000107c5ffe8(0,lVar10,lVar9,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar3);
  (**(code **)(lStack_a0 + 8))(lVar9,lVar2);
  (**(code **)(lStack_b0 + 8))(lVar10,lStack_a8);
  puVar1 = puStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 1013af95c; end: 1013af97b;  */

void FUN_1013af95c(void)

{
  FUN_1013af6d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013af97c; end: 1013afb43;  */

void FUN_1013af97c(code *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c3e490();
  if (puVar3 + -1 < (undefined1 *)0x2) {
    FUN_1013b25ac();
    puVar2 = &UNK_1103acab8;
    func_0x000107c613f8(&UNK_1103acab8,puVar3,0,0);
    *puVar3 = 0;
    (*param_1)();
    func_0x000107c614ac(puVar2);
  }
  else if (puVar3 == (undefined1 *)0x0) {
    puVar4 = &UNK_1103ac700;
    func_0x000107c613fc(&UNK_1103ac700,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    puVar5 = &UNK_1103ac958;
    func_0x000107c613fc(&UNK_1103ac958,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(code **)(puVar5 + 0x18) = param_1;
    *(undefined8 *)(puVar5 + 0x20) = param_2;
    uStack_50 = 0x1013b25a0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100ab47f8;
    puStack_58 = &UNK_1103ac970;
    ppuVar6 = &puStack_70;
    puStack_48 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_48;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar4);
    func_0x000107c50310(puVar2);
    func_0x000107c60bd0(ppuVar6);
  }
  else {
    if (puVar3 != (undefined1 *)0x3) {
      func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001c,0x800000010ef3b370,
                          "SelfieOnboardingImpl/SelfieAVCaptureSession.swift",0x31,2,0x5b,0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013afb44);
      (*pcVar1)();
    }
    FUN_1013afb44(param_1,param_2);
  }
  FUN_1013ae8e8();
  return;
}



/* Entry: 1013afb44; end: 1013afd87;  */

void FUN_1013afb44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar10 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lStack_b0 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar11 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001013aec00();
  puVar4 = &UNK_1103ac700;
  func_0x000107c613fc(&UNK_1103ac700,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar5 = &UNK_1103ac9a8;
  func_0x000107c613fc(&UNK_1103ac9a8,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  pcStack_70 = FUN_1013b25ec;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1103ac9c0;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(param_2);
  func_0x000107c5f808(lVar11);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = 0x112d4af88;
  FUN_1013b1d7c(0x112d4af88,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar8 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar9 = 0x112d4af98;
  func_0x0001013b1dbc(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar10,&puStack_98,uVar8,uVar9,lVar2,uVar7);
  func_0x000107c5ffe8(0,lVar11,lVar10,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(lVar3);
  (**(code **)(lStack_a0 + 8))(lVar10,lVar2);
  (**(code **)(lStack_b0 + 8))(lVar11,lStack_a8);
  puVar5 = puStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 1013afd88; end: 1013afe37;  */

void FUN_1013afd88(ulong param_1,long param_2,code *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  puVar1 = (undefined1 *)(param_2 + 0x10);
  func_0x000107c61648();
  if (puVar1 != (undefined1 *)0x0) {
    if ((param_1 & 1) == 0) {
      puVar2 = puVar1;
      FUN_1013b25ac();
      puVar3 = &UNK_1103acab8;
      func_0x000107c613f8(&UNK_1103acab8,puVar2,0,0);
      *puVar2 = 0;
      (*param_3)();
      func_0x000107c614ac(puVar3);
    }
    else {
      FUN_1013afb44(param_3,param_4);
    }
    func_0x000107c61574(puVar1);
  }
  return;
}



/* Entry: 1013afe38; end: 1013b00ff;  */

undefined * FUN_1013afe38(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long lVar13;
  long lVar14;
  undefined *puStack_c0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar13 = (long)&puStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar14 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR__OBJC_CLASS___AVCaptureVideoPreviewLayer_1126dae20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a51c();
  func_0x000107c61174();
  puVar5 = puVar4;
  func_0x000107c56f8c(0);
  func_0x0001013aec00();
  puVar6 = &UNK_1103ac700;
  puStack_c0 = puVar5;
  func_0x000107c613fc(&UNK_1103ac700,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar5 = &UNK_1103ac7c8;
  func_0x000107c613fc(&UNK_1103ac7c8,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar6;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_70 = FUN_1013b1e00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1103ac7e0;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61174();
  func_0x000107c6157c(puVar6);
  func_0x000107c5f808(lVar14);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = 0x112d4af88;
  FUN_1013b1d7c(0x112d4af88,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar9 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar10 = 0x112d4af98;
  func_0x0001013b1dbc(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar13,&puStack_98,uVar9,uVar10,lVar2,uVar8);
  puVar5 = puStack_c0;
  func_0x000107c5ffe8(0,lVar14,lVar13,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(puVar5);
  (**(code **)(lVar11 + 8))(lVar13,lVar2);
  (**(code **)(lVar12 + 8))(lVar14,lVar3);
  puVar5 = puStack_68;
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar5);
  puVar6 = &UNK_1103ac818;
  func_0x000107c613fc(&UNK_1103ac818,0x18,7);
  *(undefined **)(puVar6 + 0x10) = puVar4;
  func_0x000107c61174(puVar4);
  FUN_1013b0238(0x1013b1e08,puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(puVar6);
  return puVar4;
}



/* Entry: 1013b0100; end: 1013b015f;  */

void FUN_1013b0100(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c58fb4(param_2);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1013b0160; end: 1013b0237;  */

void FUN_1013b0160(undefined1 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "getPreviewLayer()";
  func_0x0001000c10c0("getPreviewLayer()");
  func_0x000107c61180();
  puVar2 = &UNK_1103ac8b8;
  func_0x000107c613fc(&UNK_1103ac8b8,0x19,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  puVar2[0x18] = param_1;
  pcStack_40 = FUN_1013b2574;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103ac8d0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1013b0238; end: 1013b073b;  */

void FUN_1013b0238(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar2 + -8);
  lStack_b8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar10 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lStack_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar12 = *(undefined **)(unaff_x20 + 0x10);
  puVar3 = &UNK_10d939088;
  puStack_90 = puVar12;
  func_0x000107c614e0();
  puVar4 = &UNK_1103ac840;
  func_0x000107c613fc(&UNK_1103ac840,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  func_0x000107c61174(puVar12);
  func_0x000107c6157c(param_2);
  puVar5 = puVar3;
  func_0x000107c5ed54(puVar3,1,0x1013b1e1c,puVar4,
                      PTR___sSo8NSObjectC10Foundation27_KeyValueCodingAndObservingACWP_110351200);
  func_0x000107c61170(puVar12);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x0001013aec00();
  puVar3 = &UNK_1103ac700;
  func_0x000107c613fc(&UNK_1103ac700,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar12 = &UNK_1103ac868;
  func_0x000107c613fc(&UNK_1103ac868,0x20,7);
  *(undefined **)(puVar12 + 0x10) = puVar3;
  *(undefined **)(puVar12 + 0x18) = puVar5;
  pcStack_70 = FUN_1013b1e50;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1103ac880;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar12;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c6157c(puVar3);
  func_0x000107c61174(puVar5);
  func_0x000107c5f808(lVar11);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = 0x112d4af88;
  FUN_1013b1d7c(0x112d4af88,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar8 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar9 = 0x112d4af98;
  func_0x0001013b1dbc(0x112d4af98,0x112d4af90,&UNK_10d914100);
  lVar2 = lStack_b8;
  func_0x000107c60264(puVar10,&puStack_98,uVar8,uVar9,lStack_b8,uVar7);
  func_0x000107c5ffe8(0,lVar11,puVar10,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  (**(code **)(lStack_a0 + 8))(puVar10,lVar2);
  (**(code **)(lStack_b0 + 8))(lVar11,lStack_a8);
  puVar4 = puStack_68;
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 1013b073c; end: 1013b079f;  */

void FUN_1013b073c(long param_1)

{
  int iVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x000107c4a360();
    if (iVar1 != 0) {
      func_0x000107c5be70(*(undefined8 *)(param_1 + 0x10));
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1013b07a0; end: 1013b09ef;  */

void FUN_1013b07a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar10 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lStack_b0 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar11 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001013aec00();
  puVar4 = &UNK_1103ac700;
  func_0x000107c613fc(&UNK_1103ac700,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar5 = &UNK_1103ac728;
  func_0x000107c613fc(&UNK_1103ac728,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(undefined8 *)(puVar5 + 0x28) = param_3;
  pcStack_70 = FUN_1013b1b50;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1103ac740;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c6157c(puVar4);
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c5f808(lVar11);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = 0x112d4af88;
  FUN_1013b1d7c(0x112d4af88,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar8 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar9 = 0x112d4af98;
  func_0x0001013b1dbc(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar10,&puStack_98,uVar8,uVar9,lVar2,uVar7);
  func_0x000107c5ffe8(0,lVar11,lVar10,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(lVar3);
  (**(code **)(lStack_a0 + 8))(lVar10,lVar2);
  (**(code **)(lStack_b0 + 8))(lVar11,lStack_a8);
  puVar5 = puStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 1013b09f0; end: 1013b0a67;  */

void FUN_1013b09f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_1013b0a68(param_2,param_3,param_4);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1013b0a68; end: 1013b0c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b0a68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  long lStack_78;
  long lStack_70;
  
  func_0x000100087bd4(FUN_1013b1b78);
  puVar3 = &UNK_1103ac700;
  func_0x000107c613fc(&UNK_1103ac700,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_1103ac778;
  func_0x000107c613fc(&UNK_1103ac778,0x30,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(puVar4 + 0x28) = param_3;
  lVar5 = 0;
  FUN_1013adbc0();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112d796f8) = 0;
  *(undefined1 *)(lVar6 + _DAT_112d79700) = 0;
  lVar2 = _DAT_1137ff3e0;
  func_0x000107c6157c(puVar3);
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c5eec4(lVar6 + lVar2);
  puVar1 = (undefined8 *)(lVar6 + _DAT_112d796f0);
  *puVar1 = FUN_1013b1bc4;
  puVar1[1] = puVar4;
  plVar7 = &lStack_78;
  lStack_78 = lVar6;
  lStack_70 = lVar5;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  func_0x000107c61574(puVar3);
  puVar3 = PTR__OBJC_CLASS___AVCapturePhotoSettings_1126b9e80;
  func_0x000107c610f8(PTR__OBJC_CLASS___AVCapturePhotoSettings_1126b9e80);
  func_0x000107c453e4();
  func_0x000107c3f5c4(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(puVar3);
  func_0x000100087bd4(FUN_1013b1bd0,auStack_a0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(plVar7);
  return;
}



/* Entry: 1013b0c04; end: 1013b0cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b0c04(undefined1 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + _DAT_112d79700) = 0;
    lVar2 = _DAT_1137ff3e0;
    pcVar1 = *(code **)(lVar5 + _DAT_112d796f0);
    FUN_1013ae37c();
    puVar3 = &UNK_1103ac5e0;
    func_0x000107c613f8(&UNK_1103ac5e0,param_1,0,0);
    *param_1 = 1;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = 0;
    uStack_58 = 1;
    lVar4 = lVar5;
    puStack_88 = puVar3;
    func_0x000107c61174(lVar5);
    (*pcVar1)(lVar5 + lVar2,&puStack_88);
    func_0x000107c614ac(puVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1013b0cd8; end: 1013b1397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b0cd8(undefined8 param_1,undefined8 *param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long lVar9;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x13;
  long extraout_x13_00;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long alStack_140 [8];
  code *pcStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [32];
  
  lVar6 = 0;
  alStack_140[5] = param_5;
  alStack_140[6] = param_6;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)alStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0x112d68090;
  alStack_140[1] = lVar8;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  lStack_e0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_00;
  lVar14 = 0x112d3bc20;
  lStack_d8 = lVar8;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  uVar10 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_e8 = uVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = uVar10 - extraout_x12;
  lStack_d0 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_00;
  lVar14 = 0x112d79908;
  func_0x0001000285a8(0x112d79908,&UNK_10d939068);
  alStack_140[2] = *(long *)(lVar14 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  alStack_140[4] = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_01;
  alStack_140[3] = extraout_x13_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar9 - extraout_x12_02;
  pcVar12 = *(code **)(lVar11 + 0x10);
  lStack_c8 = lVar11;
  (*pcVar12)(lVar17,param_1,lVar6);
  puVar1 = (undefined8 *)(lVar17 + *(int *)(lVar14 + 0x30));
  uVar13 = *param_2;
  uVar20 = param_2[3];
  uVar19 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar13;
  puVar1[3] = uVar20;
  puVar1[2] = uVar19;
  uVar13 = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[4] = uVar13;
  *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_2 + 6);
  func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    func_0x0001013b1c3c(param_2,auStack_b8,0x112d79910,&UNK_10d939070);
    func_0x0001013b279c(lVar17,0x112d79908,&UNK_10d939068);
    return;
  }
  lVar11 = *(long *)(param_3 + 0x48);
  alStack_140[0] = param_4;
  lStack_f8 = param_3;
  if (lVar11 != 0) {
    (*pcVar12)(lVar8,lVar11 + _DAT_1137ff3e0,lVar6);
  }
  pcStack_100 = *(code **)(lStack_c8 + 0x38);
  alStack_140[7] = lVar8;
  (*pcStack_100)(lVar8,lVar11 == 0,1,lVar6);
  lStack_f0 = lVar17;
  func_0x0001013b1c3c(lVar17,lVar9,0x112d79908,&UNK_10d939068);
  puVar1 = (undefined8 *)(lVar9 + *(int *)(lVar14 + 0x30));
  uVar13 = *puVar1;
  uVar2 = puVar1[1];
  uVar19 = puVar1[2];
  uVar3 = puVar1[3];
  uVar20 = puVar1[4];
  uVar4 = puVar1[5];
  uVar5 = *(undefined1 *)(puVar1 + 6);
  func_0x0001013b1c3c(param_2,auStack_b8,0x112d79910,&UNK_10d939070);
  func_0x0001013b1c08(uVar13,uVar2,uVar19,uVar3,uVar20,uVar4,uVar5);
  lVar17 = lStack_c8;
  lVar11 = lStack_d0;
  pcVar15 = *(code **)(lStack_c8 + 0x20);
  (*pcVar15)(lStack_d0,lVar9,lVar6);
  (*pcStack_100)(lVar11,0,1,lVar6);
  lVar9 = lStack_d8;
  lVar8 = alStack_140[7];
  lVar14 = (long)*(int *)(lStack_e0 + 0x30);
  func_0x0001013b1c3c(alStack_140[7],lStack_d8,0x112d3bc20,&UNK_10d904ef0);
  func_0x0001013b1c3c(lVar11,lVar9 + lVar14,0x112d3bc20,&UNK_10d904ef0);
  pcVar12 = *(code **)(lVar17 + 0x30);
  lVar17 = lVar9;
  (*pcVar12)(lVar9,1,lVar6);
  uVar10 = uStack_e8;
  if ((int)lVar17 == 1) {
    func_0x0001013b279c(lVar11,0x112d3bc20,&UNK_10d904ef0);
    func_0x0001013b279c(lVar8,0x112d3bc20,&UNK_10d904ef0);
    lVar14 = lVar9 + lVar14;
    (*pcVar12)(lVar14,1,lVar6);
    lVar6 = lStack_f0;
    lVar18 = lStack_f8;
    if ((int)lVar14 == 1) {
      func_0x0001013b279c(lVar9,0x112d3bc20,&UNK_10d904ef0);
LAB_1013b125c:
      lVar9 = alStack_140[0];
      func_0x000107c614f0(alStack_140[0]);
      lVar14 = alStack_140[4];
      func_0x0001013b1c3c(lVar6,alStack_140[4],0x112d79908,&UNK_10d939068);
      uVar10 = (ulong)*(byte *)(alStack_140[2] + 0x50);
      uVar16 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
      puVar7 = &UNK_1103ac7a0;
      func_0x000107c613fc(&UNK_1103ac7a0,uVar16 + alStack_140[3],uVar10 | 7);
      lVar8 = alStack_140[6];
      *(long *)(puVar7 + 0x10) = alStack_140[5];
      *(long *)(puVar7 + 0x18) = alStack_140[6];
      func_0x0001013b1c84(lVar14,puVar7 + uVar16);
      func_0x000107c6157c(lVar8);
      func_0x00010090569c(FUN_1013b1cd4,puVar7,lVar9);
      func_0x000107c61574(puVar7);
      func_0x000107c6157c(lVar18);
      uVar10 = 0;
      func_0x000104896acc(FUN_1013b1d70,lVar18);
      func_0x0001013b279c(lVar6,0x112d79908,&UNK_10d939068);
      func_0x000107c61574(lVar18);
      if ((uVar10 & 1) == 0) {
        uVar13 = *(undefined8 *)(lVar18 + 0x48);
        *(undefined8 *)(lVar18 + 0x48) = 0;
        func_0x000107c61574(lVar18);
        func_0x000107c61170(uVar13);
        return;
      }
      goto LAB_1013b1354;
    }
LAB_1013b1170:
    lVar14 = lStack_f0;
    func_0x0001013b279c(lVar9,0x112d68090,&UNK_10da24400);
  }
  else {
    func_0x0001013b1c3c(lVar9,uStack_e8,0x112d3bc20,&UNK_10d904ef0);
    lVar11 = lVar9 + lVar14;
    (*pcVar12)(lVar11,1,lVar6);
    lVar18 = lStack_f8;
    lVar17 = alStack_140[1];
    if ((int)lVar11 == 1) {
      func_0x0001013b279c(lStack_d0,0x112d3bc20,&UNK_10d904ef0);
      func_0x0001013b279c(lVar8,0x112d3bc20,&UNK_10d904ef0);
      (**(code **)(lStack_c8 + 8))(uVar10,lVar6);
      goto LAB_1013b1170;
    }
    (*pcVar15)(alStack_140[1],lVar9 + lVar14,lVar6);
    uVar13 = 0x112d68098;
    FUN_1013b1d7c(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                  PTR___s10Foundation4UUIDVSQAAMc_110350c50);
    uVar16 = uVar10;
    func_0x000107c5fab8(uVar10,lVar17,lVar6,uVar13);
    pcVar12 = *(code **)(lStack_c8 + 8);
    (*pcVar12)(lVar17,lVar6);
    func_0x0001013b279c(lStack_d0,0x112d3bc20,&UNK_10d904ef0);
    func_0x0001013b279c(lVar8,0x112d3bc20,&UNK_10d904ef0);
    (*pcVar12)(uVar10,lVar6);
    func_0x0001013b279c(lVar9,0x112d3bc20,&UNK_10d904ef0);
    lVar14 = lStack_f0;
    lVar6 = lStack_f0;
    if ((uVar16 & 1) != 0) goto LAB_1013b125c;
  }
  func_0x0001013b279c(lVar14,0x112d79908,&UNK_10d939068);
LAB_1013b1354:
  func_0x000107c61574(lVar18);
  return;
}



/* Entry: 1013b1398; end: 1013b16db;  */

void FUN_1013b1398(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined1 auStack_90 [80];
  
  puVar9 = auStack_90;
  func_0x000107c3e76c(*(undefined8 *)(unaff_x20 + 0x10));
  iVar1 = (int)*(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3f398();
  puVar2 = *(undefined1 **)(unaff_x20 + 0x10);
  if (iVar1 == 0) {
    func_0x000107c3fe5c();
    FUN_1013b25ac();
    func_0x000107c613f8(&UNK_1103acab8,puVar2,0,0);
    *puVar2 = 2;
  }
  else {
    func_0x000107c3d7e0();
    puVar3 = PTR__OBJC_CLASS___AVCaptureVideoDataOutput_1126b70b0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar4 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    uVar5 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
    func_0x000107c5faec();
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    *(undefined **)(lVar4 + 0x48) = PTR___sSiN_11034deb0;
    *(undefined1 **)(lVar4 + 0x28) = puVar9;
    *(undefined8 *)(lVar4 + 0x30) = 0x42475241;
    lVar6 = lVar4;
    func_0x000100214a84(lVar4);
    func_0x000107c61588(lVar4);
    func_0x0001013b279c((undefined8 *)(lVar4 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    lVar4 = lVar6;
    func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                       );
    func_0x000107c6142c(lVar6);
    func_0x000107c5a540(puVar3);
    func_0x000107c61170(lVar4);
    puVar7 = puVar3;
    func_0x000107c526dc(puVar3);
    func_0x0001013ae968();
    puVar8 = puVar7;
    FUN_1013ae9fc();
    func_0x000107c58b60(puVar3);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    iVar1 = (int)*(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c3f398();
    puVar9 = *(undefined1 **)(unaff_x20 + 0x10);
    if (iVar1 == 0) {
      func_0x000107c3fe5c();
      FUN_1013b25ac();
      func_0x000107c613f8(&UNK_1103acab8,puVar9,0,0);
      *puVar9 = 2;
      func_0x000107c61170(puVar3);
    }
    else {
      func_0x000107c3d7e0();
      puVar7 = puVar3;
      func_0x000107c4022c();
      func_0x000107c61180();
      if (puVar7 != (undefined *)0x0) {
        puVar8 = puVar7;
        func_0x000107c61174();
        puVar10 = puVar8;
        func_0x000107c4a700();
        if ((int)puVar10 != 0) {
          func_0x000107c5a52c(puVar8);
        }
        func_0x000107c61170(puVar8);
      }
      uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000107c61174(uVar5);
      func_0x000107c3fe5c();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar7);
    }
  }
  return;
}



/* Entry: 1013b16dc; end: 1013b1843;  */

void FUN_1013b16dc(undefined8 param_1,undefined8 param_2,code *param_3)

{
  byte bStack_31;
  
  func_0x0001000285a8(0x112d79920,&UNK_10d9390c0);
  func_0x000107c5ed44(&bStack_31);
  if (bStack_31 != 2) {
    (*param_3)(bStack_31 & 1);
  }
  return;
}



/* Entry: 1013b1844; end: 1013b1967;  */

void FUN_1013b1844(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + 0x38,auStack_70,1,0);
    uVar4 = *(ulong *)(param_1 + 0x38);
    if (uVar4 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar5 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar5 != 0) {
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b1968);
        (*pcVar1)();
      }
      func_0x000107c61434(uVar4);
      uVar6 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          uVar2 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
          func_0x000107c61174(uVar2);
        }
        else {
          uVar2 = uVar6;
          func_0x0001013b1fec(uVar6,uVar4);
        }
        uVar6 = uVar6 + 1;
        func_0x000107c5ed04();
        func_0x000107c61170(uVar2);
      } while (uVar5 != uVar6);
      func_0x000107c6142c(uVar4);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61574(param_1);
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 1013b1968; end: 1013b19e7;  */

void FUN_1013b1968(void)

{
  FUN_1013af97c();
  return;
}



/* Entry: 1013b19e8; end: 1013b1a9f; -[_TtC20SelfieOnboardingImplP33_D426023FC835D2539090AEA66CC3E8C242SelfieAVCaptureSessionSampleBufferDelegate captureOutput:didOutputSampleBuffer:fromConnection:] */

/* WARNING: Possible PIC construction at 0x0001013b1a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013b1a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013b1a84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013b1a64) */
/* WARNING: Removing unreachable block (ram,0x0001013b1a54) */
/* WARNING: Removing unreachable block (ram,0x0001013b1a88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b19e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x000107c61174();
  lVar1 = param_4;
  func_0x000107c60a1c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lStack_38 = lVar1;
    func_0x000107c61174();
    func_0x0001002a64a8(&lStack_38);
    param_4 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1013b1aa0; end: 1013b1aff; -[_TtC20SelfieOnboardingImplP33_D426023FC835D2539090AEA66CC3E8C242SelfieAVCaptureSessionSampleBufferDelegate init] */

void FUN_1013b1aa0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfieOnboardingImpl.SelfieAVCaptureSessionSampleBufferDelegate",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b1acc);
  (*pcVar1)();
}



/* Entry: 1013b1b00; end: 1013b1b0f; -[_TtC20SelfieOnboardingImplP33_D426023FC835D2539090AEA66CC3E8C242SelfieAVCaptureSessionSampleBufferDelegate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b1b00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d797e8));
  return;
}



/* Entry: 1013b1b10; end: 1013b1b4f;  */

void FUN_1013b1b10(void)

{
  func_0x000107c61168(&PTR_PTR_112d79830);
  return;
}



/* Entry: 1013b1b50; end: 1013b1b77;  */

void FUN_1013b1b50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    FUN_1013b0a68(uVar2,uVar1,uVar3);
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 1013b1b78; end: 1013b1bc3;  */

void FUN_1013b1b78(void)

{
  FUN_1013b0c04();
  return;
}



/* Entry: 1013b1bc4; end: 1013b1bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b1bc4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long lVar11;
  ulong uVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x13;
  long extraout_x13_00;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long alStack_140 [8];
  code *pcStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [32];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  alStack_140[5] = *(undefined8 *)(unaff_x20 + 0x20);
  alStack_140[6] = *(undefined8 *)(unaff_x20 + 0x28);
  lVar7 = 0;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)alStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar16 = 0x112d68090;
  alStack_140[1] = lVar10;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  lStack_e0 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_00;
  lVar16 = 0x112d3bc20;
  lStack_d8 = lVar10;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  uVar12 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_e8 = uVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = uVar12 - extraout_x12;
  lStack_d0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_00;
  lVar16 = 0x112d79908;
  func_0x0001000285a8(0x112d79908,&UNK_10d939068);
  alStack_140[2] = *(long *)(lVar16 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  alStack_140[4] = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_01;
  alStack_140[3] = extraout_x13_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar11 - extraout_x12_02;
  pcVar14 = *(code **)(lVar13 + 0x10);
  lStack_c8 = lVar13;
  (*pcVar14)(lVar19,param_1,lVar7);
  puVar1 = (undefined8 *)(lVar19 + *(int *)(lVar16 + 0x30));
  uVar15 = *param_2;
  uVar21 = param_2[3];
  uVar20 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar15;
  puVar1[3] = uVar21;
  puVar1[2] = uVar20;
  uVar15 = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[4] = uVar15;
  *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_2 + 6);
  func_0x000107c61428(lVar8 + 0x10,auStack_80,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61648();
  if (lVar8 == 0) {
    func_0x0001013b1c3c(param_2,auStack_b8,0x112d79910,&UNK_10d939070);
    func_0x0001013b279c(lVar19,0x112d79908,&UNK_10d939068);
    return;
  }
  lVar13 = *(long *)(lVar8 + 0x48);
  alStack_140[0] = lVar5;
  lStack_f8 = lVar8;
  if (lVar13 != 0) {
    (*pcVar14)(lVar10,lVar13 + _DAT_1137ff3e0,lVar7);
  }
  pcStack_100 = *(code **)(lStack_c8 + 0x38);
  alStack_140[7] = lVar10;
  (*pcStack_100)(lVar10,lVar13 == 0,1,lVar7);
  lStack_f0 = lVar19;
  func_0x0001013b1c3c(lVar19,lVar11,0x112d79908,&UNK_10d939068);
  puVar1 = (undefined8 *)(lVar11 + *(int *)(lVar16 + 0x30));
  uVar15 = *puVar1;
  uVar2 = puVar1[1];
  uVar20 = puVar1[2];
  uVar3 = puVar1[3];
  uVar21 = puVar1[4];
  uVar4 = puVar1[5];
  uVar6 = *(undefined1 *)(puVar1 + 6);
  func_0x0001013b1c3c(param_2,auStack_b8,0x112d79910,&UNK_10d939070);
  func_0x0001013b1c08(uVar15,uVar2,uVar20,uVar3,uVar21,uVar4,uVar6);
  lVar13 = lStack_c8;
  lVar10 = lStack_d0;
  pcVar17 = *(code **)(lStack_c8 + 0x20);
  (*pcVar17)(lStack_d0,lVar11,lVar7);
  (*pcStack_100)(lVar10,0,1,lVar7);
  lVar5 = lStack_d8;
  lVar8 = alStack_140[7];
  lVar16 = (long)*(int *)(lStack_e0 + 0x30);
  func_0x0001013b1c3c(alStack_140[7],lStack_d8,0x112d3bc20,&UNK_10d904ef0);
  func_0x0001013b1c3c(lVar10,lVar5 + lVar16,0x112d3bc20,&UNK_10d904ef0);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar11 = lVar5;
  (*pcVar14)(lVar5,1,lVar7);
  uVar12 = uStack_e8;
  if ((int)lVar11 == 1) {
    func_0x0001013b279c(lVar10,0x112d3bc20,&UNK_10d904ef0);
    func_0x0001013b279c(lVar8,0x112d3bc20,&UNK_10d904ef0);
    lVar16 = lVar5 + lVar16;
    (*pcVar14)(lVar16,1,lVar7);
    lVar8 = lStack_f0;
    lVar13 = lStack_f8;
    if ((int)lVar16 == 1) {
      func_0x0001013b279c(lVar5,0x112d3bc20,&UNK_10d904ef0);
LAB_1013b125c:
      lVar7 = alStack_140[0];
      func_0x000107c614f0(alStack_140[0]);
      lVar16 = alStack_140[4];
      func_0x0001013b1c3c(lVar8,alStack_140[4],0x112d79908,&UNK_10d939068);
      uVar12 = (ulong)*(byte *)(alStack_140[2] + 0x50);
      uVar18 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
      puVar9 = &UNK_1103ac7a0;
      func_0x000107c613fc(&UNK_1103ac7a0,uVar18 + alStack_140[3],uVar12 | 7);
      lVar5 = alStack_140[6];
      *(long *)(puVar9 + 0x10) = alStack_140[5];
      *(long *)(puVar9 + 0x18) = alStack_140[6];
      func_0x0001013b1c84(lVar16,puVar9 + uVar18);
      func_0x000107c6157c(lVar5);
      func_0x00010090569c(FUN_1013b1cd4,puVar9,lVar7);
      func_0x000107c61574(puVar9);
      func_0x000107c6157c(lVar13);
      uVar12 = 0;
      func_0x000104896acc(FUN_1013b1d70,lVar13);
      func_0x0001013b279c(lVar8,0x112d79908,&UNK_10d939068);
      func_0x000107c61574(lVar13);
      if ((uVar12 & 1) == 0) {
        uVar15 = *(undefined8 *)(lVar13 + 0x48);
        *(undefined8 *)(lVar13 + 0x48) = 0;
        func_0x000107c61574(lVar13);
        func_0x000107c61170(uVar15);
        return;
      }
      goto LAB_1013b1354;
    }
LAB_1013b1170:
    lVar16 = lStack_f0;
    func_0x0001013b279c(lVar5,0x112d68090,&UNK_10da24400);
  }
  else {
    func_0x0001013b1c3c(lVar5,uStack_e8,0x112d3bc20,&UNK_10d904ef0);
    lVar10 = lVar5 + lVar16;
    (*pcVar14)(lVar10,1,lVar7);
    lVar13 = lStack_f8;
    lVar11 = alStack_140[1];
    if ((int)lVar10 == 1) {
      func_0x0001013b279c(lStack_d0,0x112d3bc20,&UNK_10d904ef0);
      func_0x0001013b279c(lVar8,0x112d3bc20,&UNK_10d904ef0);
      (**(code **)(lStack_c8 + 8))(uVar12,lVar7);
      goto LAB_1013b1170;
    }
    (*pcVar17)(alStack_140[1],lVar5 + lVar16,lVar7);
    uVar15 = 0x112d68098;
    FUN_1013b1d7c(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                  PTR___s10Foundation4UUIDVSQAAMc_110350c50);
    uVar18 = uVar12;
    func_0x000107c5fab8(uVar12,lVar11,lVar7,uVar15);
    pcVar14 = *(code **)(lStack_c8 + 8);
    (*pcVar14)(lVar11,lVar7);
    func_0x0001013b279c(lStack_d0,0x112d3bc20,&UNK_10d904ef0);
    func_0x0001013b279c(lVar8,0x112d3bc20,&UNK_10d904ef0);
    (*pcVar14)(uVar12,lVar7);
    func_0x0001013b279c(lVar5,0x112d3bc20,&UNK_10d904ef0);
    lVar16 = lStack_f0;
    lVar8 = lStack_f0;
    if ((uVar18 & 1) != 0) goto LAB_1013b125c;
  }
  func_0x0001013b279c(lVar16,0x112d79908,&UNK_10d939068);
LAB_1013b1354:
  func_0x000107c61574(lVar13);
  return;
}



/* Entry: 1013b1bd0; end: 1013b1cd3;  */

void FUN_1013b1bd0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x48);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x48) = uVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 1013b1cd4; end: 1013b1d6f;  */

void FUN_1013b1cd4(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  lVar4 = 0x112d79908;
  lVar3 = lVar4;
  func_0x0001000285a8(0x112d79908,&UNK_10d939068);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112d79908,&UNK_10d939068);
  puVar1 = (undefined8 *)
           (unaff_x20 + *(int *)(lVar4 + 0x30) + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff)));
  uStack_78 = puVar1[1];
  uStack_80 = *puVar1;
  uStack_68 = puVar1[3];
  uStack_70 = puVar1[2];
  uStack_58 = puVar1[5];
  uStack_60 = puVar1[4];
  uStack_50 = *(undefined1 *)(puVar1 + 6);
  (*pcVar2)(&uStack_80);
  return;
}



/* Entry: 1013b1d70; end: 1013b1d7b;  */

void FUN_1013b1d70(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1013b1d7c; end: 1013b1dff;  */

void FUN_1013b1d7c(long *param_1,code *param_2,long param_3)

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



/* Entry: 1013b1e00; end: 1013b1e23;  */

void FUN_1013b1e00(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x000107c58fb4(uVar1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1013b1e24; end: 1013b1e4f;  */

void FUN_1013b1e24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013b1e50; end: 1013b1e57;  */

void FUN_1013b1e50(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + 0x38,auStack_60,0x21,0);
    FUN_1013b2374(PTR___s10Foundation21NSKeyValueObservationCMa_110350800,0x112d79918,&UNK_10d9390b0
                 );
    uVar5 = *(ulong *)(lVar3 + 0x38);
    uVar6 = uVar5 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar6 + 0x10);
    uVar4 = uVar5;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_1013b2428(uVar4,uVar1 + 1,1,uVar5,PTR___s10Foundation21NSKeyValueObservationCMa_110350800,
                    0x112d79918,&UNK_10d9390b0);
      uVar6 = uVar4 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
    *(undefined8 *)(uVar6 + uVar1 * 8 + 0x20) = uVar2;
    *(ulong *)(lVar3 + 0x38) = uVar4;
    func_0x000107c614a8(auStack_60);
    func_0x000107c61174(uVar2);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 1013b1e58; end: 1013b1ec3;  */

void FUN_1013b1e58(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1013b1ec4; end: 1013b1ee7;  */

void FUN_1013b1ec4(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d79940;
  plVar5 = (long *)&UNK_10daa0590;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1013b275c(0,0x112d79948,&PTR__OBJC_CLASS___VNRequest_1126a6c80);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1013b1ee8; end: 1013b1f5f;  */

void FUN_1013b1ee8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1013b275c(0,param_1,param_2);
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



/* Entry: 1013b1f60; end: 1013b2187;  */

undefined *
FUN_1013b1f60(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1013b1e58(param_3,param_4,param_5);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1013b2188; end: 1013b219b;  */

ulong FUN_1013b2188(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013b2280);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013b2284);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___VNFaceObservation_1126a6c88;
    func_0x000107c61168(PTR__OBJC_CLASS___VNFaceObservation_1126a6c88);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___VNFaceObservation_1126a6c88;
    func_0x000107c61168(PTR__OBJC_CLASS___VNFaceObservation_1126a6c88);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1013b275c(0,0x112d79950,&PTR__OBJC_CLASS___VNFaceObservation_1126a6c88);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013b2358);
  (*pcVar2)();
}



/* Entry: 1013b219c; end: 1013b2357;  */

ulong FUN_1013b219c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013b2280);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013b2284);
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
  FUN_1013b275c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013b2358);
  (*pcVar2)();
}



/* Entry: 1013b2358; end: 1013b2373;  */

void FUN_1013b2358(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_1013b2428(0,uVar1 + 1,1,uVar3,&SUB_103f2feb8,0x112d79938,&UNK_10d9390d0);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 1013b2374; end: 1013b240b;  */

void FUN_1013b2374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_1013b2428(0,uVar1 + 1,1,uVar3,param_1,param_2,param_3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 1013b240c; end: 1013b2427;  */

ulong FUN_1013b240c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b2574);
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
  FUN_1013b1f60(uVar2,uVar4,&SUB_103f2feb8,0x112d79938,&UNK_10d9390d0);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b2570);
      (*pcVar1)();
    }
    FUN_1013b260c(0,uVar2,uVar3 + 0x20,param_4,&SUB_103f2feb8);
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



/* Entry: 1013b2428; end: 1013b2573;  */

ulong FUN_1013b2428(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b2574);
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
  FUN_1013b1f60(uVar2,uVar4,param_5,param_6,param_7);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b2570);
      (*pcVar1)();
    }
    FUN_1013b260c(0,uVar2,uVar3 + 0x20,param_4,param_5);
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



/* Entry: 1013b2574; end: 1013b25ab;  */

void FUN_1013b2574(void)

{
  long unaff_x20;
  undefined4 uVar1;
  
  uVar1 = 0x3f800000;
  if (*(char *)(unaff_x20 + 0x18) == '\0') {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d4bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setOpacity__112652d18);
  return;
}



/* Entry: 1013b25ac; end: 1013b25eb;  */

void FUN_1013b25ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d939150;
  func_0x000107c61520(&UNK_10d939150,&UNK_1103acab8);
  puRam0000000112d79928 = puVar1;
  return;
}



/* Entry: 1013b25ec; end: 1013b260b;  */

void FUN_1013b25ec(void)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    cVar2 = *(char *)(lVar3 + 0x30);
    if (cVar2 != -1) {
      uVar4 = *(undefined8 *)(lVar3 + 0x28);
      if (cVar2 == '\x01') {
        func_0x000107c614b0(uVar4);
        (*pcVar1)(uVar4,1);
        func_0x0001013b25f8(uVar4,1);
      }
      else {
        func_0x000107c5bba0(*(undefined8 *)(lVar3 + 0x10));
        (*pcVar1)(uVar4,cVar2);
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1013b260c; end: 1013b2713;  */

long FUN_1013b260c(long param_1,long param_2,long param_3,ulong param_4,code *param_5)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1013b2710);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1013b2714);
        (*pcVar3)();
      }
      uVar4 = 0;
      (*param_5)(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      (*param_5)(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1013b270c);
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



/* Entry: 1013b2714; end: 1013b274b;  */

void FUN_1013b2714(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013b274c; end: 1013b275b;  */

void FUN_1013b274c(void)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar4 = (undefined1)*(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = (ulong)*(byte *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_1013af174();
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    *(ulong *)(lVar2 + 0x28) = uVar3;
    uVar1 = *(undefined1 *)(lVar2 + 0x30);
    *(undefined1 *)(lVar2 + 0x30) = uVar4;
    func_0x0001013b25f8(uVar5,uVar1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1013b275c; end: 1013b27db;  */

void FUN_1013b275c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1013b27dc; end: 1013b2943;  */

int FUN_1013b27dc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1013b2858;
        goto LAB_1013b283c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1013b283c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1013b2858:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1013b2944; end: 1013b2983;  */

void FUN_1013b2944(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79968 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d939128;
  func_0x000107c61520(&UNK_10d939128,&UNK_1103acab8);
  puRam0000000112d79968 = puVar1;
  return;
}



/* Entry: 1013b2984; end: 1013b29c7;  */

void FUN_1013b2984(long param_1,long param_2)

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



/* Entry: 1013b29c8; end: 1013b2a2f;  */

void FUN_1013b29c8(long param_1)

{
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_30 = PTR___sBbWV_11034d660 + 0x40;
  puStack_28 = PTR___sBoWV_11034d678 + 0x40;
  puStack_20 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_18 = &UNK_10d9391d0;
  func_0x000107c61524(param_1,0,4,&puStack_30,param_1 + 0x58);
  return;
}



/* Entry: 1013b2a30; end: 1013b2b4b;  */

void FUN_1013b2a30(undefined8 *param_1)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  ulong uStack_78;
  undefined1 auStack_70 [48];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(lVar3 + 0x10);
  if (*(long *)(unaff_x20 + 0x20) < (long)(uVar2 - 1)) {
    uStack_78 = *(long *)(unaff_x20 + 0x20) + 1;
    *(ulong *)(unaff_x20 + 0x20) = uStack_78;
    if (uVar2 <= uStack_78) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b2b44);
      (*pcVar1)();
    }
    FUN_1013b4518(lVar3 + 0x20 + uStack_78 * 0x30,auStack_70,0x112d79ae0,&UNK_10d9392c8);
    func_0x000100087c34(&uStack_78);
    func_0x0001013b4560(&uStack_78,0x112d79af8,&UNK_10d9392e8);
    uVar2 = *(ulong *)(unaff_x20 + 0x20);
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b2b48);
      (*pcVar1)();
    }
    if (*(ulong *)(lVar3 + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b2b4c);
      (*pcVar1)();
    }
    FUN_1013b4518(lVar3 + 0x20 + uVar2 * 0x30,param_1,0x112d79ae0,&UNK_10d9392c8);
  }
  else {
    if ((*(byte *)(unaff_x20 + 0x28) & 1) == 0) {
      *(undefined1 *)(unaff_x20 + 0x28) = 1;
      func_0x0001048872ac();
    }
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}



/* Entry: 1013b2b4c; end: 1013b2d13;  */

void FUN_1013b2b4c(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long *unaff_x20;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar5 = *(long *)(*unaff_x20 + 0x50);
  lVar3 = 0;
  func_0x000107c61510(0,PTR___sSiN_11034deb0,lVar5,"idx obj ",0);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar6 = (long *)(&stack0xffffffffffffffa0 + -extraout_x8);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)plVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar8 = unaff_x20[4];
  lVar4 = unaff_x20[2];
  func_0x000107c5fc74(lVar4,lVar5);
  if (SBORROW8(lVar4,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1013b2d10);
    (*pcVar2)();
  }
  if (lVar8 < lVar4 + -1) {
    lVar4 = unaff_x20[4] + 1;
    if (!SCARRY8(unaff_x20[4],1)) {
      unaff_x20[4] = lVar4;
      func_0x000107c5fc98(lVar7,lVar4,unaff_x20[2],*(undefined8 *)(*unaff_x20 + 0x50));
      iVar1 = *(int *)(lVar3 + 0x30);
      *plVar6 = lVar4;
      (**(code **)(lVar9 + 0x20))((long)plVar6 + (long)iVar1,lVar7,lVar5);
      func_0x000100087c34(plVar6);
      (**(code **)(lVar10 + 8))(plVar6,lVar3);
      func_0x000107c5fc98(param_1,unaff_x20[4],unaff_x20[2],*(undefined8 *)(*unaff_x20 + 0x50));
      (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar5);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1013b2d14);
    (*pcVar2)();
  }
  if ((*(byte *)(unaff_x20 + 5) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 5) = 1;
    func_0x0001048872ac();
  }
                    /* WARNING: Could not recover jumptable at 0x0001013b2d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 0x38))(param_1,1,1,lVar5);
  return;
}


