/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10775731c; end: 10775734b;  */

void FUN_10775731c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109d4c10;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107757708; end: 107757717;  */

void FUN_107757708(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined8 *)*param_1 = *param_2;
  return;
}



/* Entry: 107757f68; end: 107757fa7;  */

/* WARNING: Possible PIC construction at 0x000107757f84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107757f88) */

long * FUN_107757f68(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_2 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48(0,*(undefined8 *)(param_1 + 0x48));
  plVar2 = (long *)plVar1[3];
  if (plVar2 == plVar1) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 107758d70; end: 107758e0b;  */

long * FUN_107758d70(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  if (*(int *)(param_2 + 8) == 0x1c) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x000107759430(uVar1,*(undefined8 *)(param_2 + 0x48));
    if ((int)uVar1 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      func_0x000107759430(uVar1,*(undefined8 *)(param_2 + 0x58));
      if ((int)uVar1 != 0) {
        lVar2 = param_1 + 0xd8;
        func_0x000107755f54(lVar2,param_2 + 0xd8);
        if ((int)lVar2 != 0) {
          lVar2 = param_1 + 0x68;
          func_0x000104c32db4(lVar2,param_2 + 0x68);
          if ((int)lVar2 != 0) {
            lVar2 = param_1 + 0xa0;
            func_0x000104c32db4(lVar2,param_2 + 0xa0);
            if ((int)lVar2 != 0) {
              plVar3 = *(long **)(param_1 + 0x118);
                    /* WARNING: Could not recover jumptable at 0x000107758df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined8 *)(param_2 + 0x118));
              return plVar3;
            }
          }
        }
      }
    }
  }
  return (long *)0x0;
}



/* Entry: 107758f48; end: 107758f8b;  */

long * FUN_107758f48(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 107759138; end: 107759173;  */

void FUN_107759138(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_DAT_1109d4e58;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  return;
}



/* Entry: 107759744; end: 107759747;  */

undefined8 * FUN_107759744(undefined8 *param_1)

{
  func_0x000107543b48(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10775b040; end: 10775b11f;  */

void FUN_10775b040(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  byte bVar6;
  code *pcVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 extraout_x10_01;
  undefined8 extraout_x10_02;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  ushort uStack_378;
  ushort uStack_376;
  ushort uStack_374;
  ushort uStack_372;
  ulong uStack_370;
  undefined1 uStack_368;
  ulong uStack_360;
  undefined8 uStack_358;
  byte bStack_350;
  undefined1 auStack_348 [16];
  char cStack_338;
  ulong uStack_330;
  undefined1 uStack_328;
  long lStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  undefined1 uStack_300;
  ulong uStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  byte bStack_2e0;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  int iStack_1f8;
  undefined1 auStack_1f0 [56];
  byte bStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [112];
  int iStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  byte bStack_120;
  undefined8 uStack_f0;
  ulong uStack_78;
  ulong auStack_70 [7];
  undefined8 uStack_38;
  
  func_0x00010775c2a0();
  uStack_38 = extraout_x8;
  func_0x000100060964(auStack_70,"format");
  lVar1 = *(long *)(param_1 + 0x48);
  lVar2 = *(long *)(param_1 + 0x50);
  uStack_78 = 0;
  puVar16 = auStack_70;
  func_0x0001073f26dc(&uStack_78,puVar16);
  uVar19 = (lVar2 - lVar1 >> 8) + uStack_78 * 0x1000 + (uStack_78 >> 4) + 0x9e3779b97f4a7c15 ^
           uStack_78;
  func_0x000104c2f714(auStack_70);
  puVar3 = *(ulong **)(param_1 + 0x50);
  auStack_70[0] = uVar19;
  for (puVar15 = *(ulong **)(param_1 + 0x48); bVar10 = puVar15 == puVar3, !bVar10;
      puVar15 = puVar15 + 0x20) {
    puVar16 = puVar15;
    func_0x00010756af98(auStack_70);
    func_0x00010775c39c();
    func_0x00010775c39c();
    func_0x00010775c39c();
  }
  uVar19 = auStack_70[0];
  func_0x00010775c25c(uStack_38);
  if (bVar10) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010775c2a0();
  lStack_320 = 0;
  uStack_318 = 0;
  uStack_310 = 0;
  puVar4 = *(undefined8 **)(uVar19 + 0x50);
  uStack_f0 = extraout_x8_01;
  for (puVar20 = *(undefined8 **)(uVar19 + 0x48); uVar11 = puVar20 == puVar4, !(bool)uVar11;
      puVar20 = puVar20 + 0x20) {
    FUN_107753050(auStack_1b0,*puVar20,puVar16,param_3);
    uVar11 = iStack_138 == 1;
    if (!(bool)uVar11) {
      func_0x00010756dd74(auStack_1b0);
      func_0x00010775c3f8();
      goto code_r0x00010775bac0;
    }
    auStack_1f0[0] = 0;
    bStack_1b8 = 0;
    func_0x00010775c484();
    func_0x000107775f1c(&uStack_270);
    uStack_2e8 = 0xb;
    puVar13 = &uStack_270;
    func_0x00010745de74(puVar13,&uStack_2f0);
    func_0x0001072c9884(&uStack_2f0);
    puVar14 = &uStack_270;
    func_0x0001072c9884();
    if ((int)puVar13 == 0) {
      func_0x00010775c484();
      func_0x0001077760fc(&uStack_270);
      func_0x00010729515c(auStack_1f0,&uStack_270);
      func_0x00010775c46c();
      if ((bStack_1b8 & 1) == 0) {
        func_0x000100060964(&uStack_270,&UNK_10f425c09);
        func_0x00010756c0ec(extraout_x8_00,&uStack_270);
        func_0x00010775c46c();
        goto code_r0x00010775babc;
      }
      uStack_330 = uStack_330 & 0xffffffffffffff00;
      uStack_328 = 0;
      uVar21 = 0;
      if (*(char *)(puVar20 + 4) == '\x01') {
        puVar15 = (ulong *)puVar20[2];
        func_0x00010775c24c();
        iVar12 = iStack_1f8;
        if (iStack_1f8 == 1) {
          func_0x00010775c318();
          func_0x00010757fc08();
          uStack_330 = *puVar15;
          uStack_328 = 1;
        }
        else {
          func_0x00010775c320();
          func_0x00010775c3f8();
        }
        func_0x00010775c2d8();
        uVar11 = iVar12 == 1;
        uVar21 = 1;
        if (!(bool)uVar11) goto code_r0x00010775babc;
      }
      auStack_348[0] = 0;
      cStack_338 = '\0';
      uVar11 = *(char *)(puVar20 + 7) == '\x01';
      if ((bool)uVar11) {
        func_0x00010775c24c(puVar20[5]);
        func_0x00010775c3c0();
        if (!(bool)uVar11) {
          func_0x00010775c320();
          goto code_r0x00010775ba68;
        }
        func_0x00010775c318();
        func_0x0001077755e0(&uStack_130);
        bVar6 = bStack_120;
        uVar21 = (uint)bStack_120;
        if ((bStack_120 & 1) == 0) {
          if ((bRam0000000113725e78 & 1) == 0) {
            iVar12 = 0x13725e78;
            ___cxa_guard_acquire();
            if (iVar12 != 0) {
              func_0x000100060964(0x113725ec0,&UNK_10f425c42);
              ___cxa_guard_release(0x113725e78);
            }
          }
          func_0x000104c2fe00(&uStack_2f0,0x113725ec0);
          func_0x00010775c3cc();
          func_0x00010775c474();
        }
        else {
          uVar11 = cStack_338 == '\x01';
          if ((bool)uVar11) {
            func_0x000107295c74(auStack_348,&uStack_130);
          }
          else {
            func_0x000107278b70(auStack_348,&uStack_130);
            cStack_338 = '\x01';
          }
        }
        func_0x00010726b07c(&uStack_130);
        func_0x00010775c2d8();
        if ((bVar6 & 1) == 0) goto code_r0x00010775bab8;
      }
      uStack_360 = uStack_360 & 0xffffffffffffff00;
      bStack_350 = 0;
      uVar11 = *(char *)(puVar20 + 10) == '\x01';
      if ((bool)uVar11) {
        func_0x00010775c24c(puVar20[8]);
        func_0x00010775c3c0();
        if (!(bool)uVar11) {
          func_0x00010775c320();
          goto code_r0x00010775ba68;
        }
        func_0x00010775c318();
        func_0x0001074389c8(&uStack_2f0);
        bStack_350 = bStack_2e0;
        uStack_358 = CONCAT44(uStack_2e4,uStack_2e8);
        uStack_360 = uStack_2f0;
        if ((bStack_2e0 & 1) == 0) {
          if ((bRam0000000113725e80 & 1) == 0) goto code_r0x00010775baf0;
          goto code_r0x00010775ba54;
        }
        func_0x00010775c2d8();
      }
      uStack_370 = uStack_370 & 0xffffffffffffff00;
      uStack_368 = 0;
      uVar11 = *(char *)(puVar20 + 0xd) == '\x01';
      if ((bool)uVar11) {
        uVar19 = puVar20[0xb];
        func_0x00010775c24c();
        func_0x00010775c3c0();
        if (!(bool)uVar11) {
          func_0x00010775c320();
          goto code_r0x00010775ba68;
        }
        func_0x00010775c318();
        puVar15 = &uStack_2f0;
        func_0x00010732a934();
        uStack_368 = SUB81(puVar15,0);
        uStack_370 = uVar19;
        if (((ulong)puVar15 & 1) == 0) {
          if ((bRam0000000113725e88 & 1) == 0) {
            iVar12 = 0x13725e88;
            ___cxa_guard_acquire();
            if (iVar12 != 0) {
              func_0x000100060964(0x113725f30,&UNK_10f425caf);
              ___cxa_guard_release(0x113725e88);
            }
          }
          uVar17 = 0x113725f30;
          goto code_r0x00010775baa4;
        }
        func_0x00010775c2d8();
      }
      uStack_372 = 0;
      uVar18 = (uint)*(byte *)(puVar20 + 0x10);
      cVar8 = SBORROW4(uVar18,1);
      cVar9 = (int)(uVar18 - 1) < 0;
      uVar11 = uVar18 == 1;
      if ((bool)uVar11) {
        func_0x00010775c24c(puVar20[0xe]);
        func_0x00010775c3c0();
        if (!(bool)uVar11) {
          func_0x00010775c320();
code_r0x00010775ba68:
          func_0x00010775c3f8();
          goto code_r0x00010775bab4;
        }
        func_0x00010775c318();
        func_0x00010775c428();
        func_0x00010775c418();
        func_0x000107323900(&uStack_130);
        func_0x00010775c430();
        if ((bool)uVar11) {
          func_0x00010775c2f4();
          func_0x00010775c2b0();
          uVar17 = extraout_x11;
          uVar5 = extraout_x10;
          if (cVar9 == cVar8) {
            uVar17 = extraout_x8_02;
            uVar5 = extraout_x9;
          }
          func_0x0001077f305c(uVar5,uVar17);
          func_0x00010775c27c();
        }
        else {
          func_0x00010775c49c();
        }
        func_0x00010775c3d8();
        uStack_372 = (ushort)(uVar21 << 8) | 0x120;
        func_0x00010775c3f0();
        if ((uVar21 & 1) == 0) {
          if ((bRam0000000113725e90 & 1) == 0) {
            iVar12 = 0x13725e90;
            ___cxa_guard_acquire();
            if (iVar12 != 0) {
              func_0x000100060964(0x113725f68,&UNK_10f425ce1);
              ___cxa_guard_release(0x113725e90);
            }
          }
          uVar17 = 0x113725f68;
          goto code_r0x00010775baa4;
        }
        func_0x00010775c2d8();
      }
      uStack_374 = 0;
      uVar18 = (uint)*(byte *)(puVar20 + 0x13);
      cVar8 = SBORROW4(uVar18,1);
      cVar9 = (int)(uVar18 - 1) < 0;
      uVar11 = uVar18 == 1;
      if ((bool)uVar11) {
        func_0x00010775c24c(puVar20[0x11]);
        func_0x00010775c3c0();
        if ((bool)uVar11) {
          func_0x00010775c318();
          func_0x00010775c428();
          func_0x00010775c418();
          func_0x000107323900(&uStack_130);
          func_0x00010775c430();
          if ((bool)uVar11) {
            func_0x00010775c2f4();
            func_0x00010775c2b0();
            uVar17 = extraout_x11_00;
            uVar5 = extraout_x10_00;
            if (cVar9 == cVar8) {
              uVar17 = extraout_x8_03;
              uVar5 = extraout_x9_00;
            }
            func_0x0001077f30b0(uVar5,uVar17);
            func_0x00010775c27c();
          }
          else {
            func_0x00010775c49c();
          }
          func_0x00010775c3d8();
          uStack_374 = (ushort)(uVar21 << 8) | 0x120;
          func_0x00010775c3f0();
          if ((uVar21 & 1) != 0) {
            func_0x00010775c2d8();
            goto code_r0x00010775b534;
          }
          if ((bRam0000000113725e98 & 1) == 0) {
            iVar12 = 0x13725e98;
            ___cxa_guard_acquire();
            if (iVar12 != 0) {
              func_0x000100060964(0x113725fa0,&UNK_10f425d15);
              ___cxa_guard_release(0x113725e98);
            }
          }
          uVar17 = 0x113725fa0;
code_r0x00010775b810:
          func_0x000104c2fe00(&uStack_2f0,uVar17);
          func_0x00010775c3cc();
          func_0x00010775c474();
        }
        else {
          func_0x00010775c320();
code_r0x00010775b7cc:
          func_0x00010775c3f8();
        }
        func_0x00010775c2d8();
        bVar10 = false;
      }
      else {
code_r0x00010775b534:
        uStack_376 = 0;
        uVar18 = (uint)*(byte *)(puVar20 + 0x16);
        cVar8 = SBORROW4(uVar18,1);
        cVar9 = (int)(uVar18 - 1) < 0;
        uVar11 = uVar18 == 1;
        if ((bool)uVar11) {
          func_0x00010775c24c(puVar20[0x14]);
          func_0x00010775c3c0();
          if (!(bool)uVar11) {
            func_0x00010775c320();
            goto code_r0x00010775b7cc;
          }
          func_0x00010775c318();
          func_0x00010775c428();
          func_0x00010775c418();
          func_0x000107323900(&uStack_130);
          func_0x00010775c430();
          if ((bool)uVar11) {
            func_0x00010775c2f4();
            func_0x00010775c2b0();
            uVar17 = extraout_x11_01;
            uVar5 = extraout_x10_01;
            if (cVar9 == cVar8) {
              uVar17 = extraout_x8_04;
              uVar5 = extraout_x9_01;
            }
            func_0x0001077f3104(uVar5,uVar17);
            func_0x00010775c27c();
          }
          else {
            func_0x00010775c49c();
          }
          func_0x00010775c3d8();
          uStack_376 = (ushort)(uVar21 << 8) | 0x120;
          func_0x00010775c3f0();
          if ((uVar21 & 1) == 0) {
            if ((bRam0000000113725ea0 & 1) == 0) {
              iVar12 = 0x13725ea0;
              ___cxa_guard_acquire();
              if (iVar12 != 0) {
                func_0x000100060964(0x113725fd8,&UNK_10f425d4b);
                ___cxa_guard_release(0x113725ea0);
              }
            }
            uVar17 = 0x113725fd8;
            goto code_r0x00010775b810;
          }
          func_0x00010775c2d8();
        }
        uStack_378 = 0;
        uVar18 = (uint)*(byte *)(puVar20 + 0x19);
        cVar8 = SBORROW4(uVar18,1);
        cVar9 = (int)(uVar18 - 1) < 0;
        uVar11 = uVar18 == 1;
        if ((bool)uVar11) {
          func_0x00010775c24c(puVar20[0x17]);
          func_0x00010775c3c0();
          if (!(bool)uVar11) {
            func_0x00010775c320();
            goto code_r0x00010775b7cc;
          }
          func_0x00010775c318();
          func_0x00010775c428();
          func_0x00010775c418();
          func_0x000107323900(&uStack_130);
          func_0x00010775c430();
          if ((bool)uVar11) {
            func_0x00010775c2f4();
            func_0x00010775c2b0();
            uVar17 = extraout_x11_02;
            uVar5 = extraout_x10_02;
            if (cVar9 == cVar8) {
              uVar17 = extraout_x8_05;
              uVar5 = extraout_x9_02;
            }
            func_0x0001077f3154(uVar5,uVar17);
            func_0x00010775c27c();
          }
          else {
            func_0x00010775c49c();
          }
          func_0x00010775c3d8();
          uStack_378 = (ushort)(uVar21 << 8) | 0x120;
          func_0x00010775c3f0();
          if ((uVar21 & 1) == 0) {
            if ((bRam0000000113725ea8 & 1) == 0) {
              iVar12 = 0x13725ea8;
              ___cxa_guard_acquire();
              if (iVar12 != 0) {
                func_0x000100060964(0x113726010,&UNK_10f425d7f);
                ___cxa_guard_release(0x113725ea8);
              }
            }
            uVar17 = 0x113726010;
            goto code_r0x00010775b810;
          }
          func_0x00010775c2d8();
        }
        uStack_130 = uStack_130 & 0xffffffffffffff00;
        bStack_120 = 0;
        uVar11 = *(char *)(puVar20 + 0x1c) == '\x01';
        if ((bool)uVar11) {
          func_0x00010775c24c(puVar20[0x1a]);
          func_0x00010775c3c0();
          if (!(bool)uVar11) {
            func_0x00010775c320();
            goto code_r0x00010775b7cc;
          }
          func_0x00010775c318();
          func_0x0001074389c8(&uStack_2f0);
          bStack_120 = bStack_2e0;
          uStack_128 = CONCAT44(uStack_2e4,uStack_2e8);
          uStack_130 = uStack_2f0;
          if ((bStack_2e0 & 1) == 0) {
            if ((bRam0000000113725eb0 & 1) == 0) {
              iVar12 = 0x13725eb0;
              ___cxa_guard_acquire();
              if (iVar12 != 0) {
                func_0x000100060964(0x113726048,&UNK_10f425dbd);
                ___cxa_guard_release(0x113725eb0);
              }
            }
            uVar17 = 0x113726048;
            goto code_r0x00010775b810;
          }
          func_0x00010775c2d8();
        }
        uStack_308 = uStack_308 & 0xffffffffffffff00;
        uStack_300 = 0;
        uVar11 = *(char *)(puVar20 + 0x1f) == '\x01';
        if ((bool)uVar11) {
          uVar19 = puVar20[0x1d];
          func_0x00010775c24c();
          func_0x00010775c3c0();
          if (!(bool)uVar11) {
            func_0x00010775c320();
            goto code_r0x00010775b7cc;
          }
          func_0x00010775c318();
          puVar15 = &uStack_2f0;
          func_0x00010732a934();
          uStack_300 = SUB81(puVar15,0);
          uStack_308 = uVar19;
          if (((ulong)puVar15 & 1) == 0) {
            if ((bRam0000000113725eb8 & 1) == 0) {
              iVar12 = 0x13725eb8;
              ___cxa_guard_acquire();
              if (iVar12 != 0) {
                func_0x000100060964(0x113726080,&UNK_10f425df2);
                ___cxa_guard_release(0x113725eb8);
              }
            }
            uVar17 = 0x113726080;
            goto code_r0x00010775b810;
          }
          func_0x00010775c2d8();
        }
        uVar19 = uStack_318;
        uVar11 = uStack_318 == uStack_310;
        if (uStack_318 < uStack_310) {
          func_0x00010775c330();
          func_0x00010775c114(uVar19);
          uVar19 = uVar19 + 0x120;
        }
        else {
          func_0x00010775c460((long)(uStack_318 - lStack_320) / 0x120);
          func_0x00010775c408();
          func_0x00010775c330(lStack_260);
          func_0x00010775c114();
          lStack_260 = lStack_260 + 0x120;
          func_0x00010775c454();
          uVar19 = uStack_318;
          func_0x00010775c400();
        }
        bVar10 = true;
        uStack_318 = uVar19;
      }
      func_0x00010775c3e0();
      func_0x00010775c420();
      func_0x00010775c2e8();
      if (!bVar10) goto code_r0x00010775bac4;
    }
    else {
      func_0x00010775c484();
      if (*(int *)(puVar14 + 0xd) != 7) {
        func_0x00010563ab98();
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10775baec);
        (*pcVar7)();
      }
      puVar13 = puVar14 + 1;
      func_0x000104c2d614();
      uVar19 = uStack_318;
      if (((ulong)puVar13 & 1) == 0) {
        if (uStack_318 < uStack_310) {
          func_0x00010775c01c(uStack_318,puVar14 + 1);
          uStack_318 = uVar19 + 0x120;
        }
        else {
          func_0x00010775c460((long)(uStack_318 - lStack_320) / 0x120);
          func_0x00010775c408();
          func_0x00010775c01c(lStack_260,puVar14 + 1);
          lStack_260 = lStack_260 + 0x120;
          func_0x00010775c454();
          uVar19 = uStack_318;
          func_0x00010775c400();
          uStack_318 = uVar19;
        }
      }
      func_0x00010775c420();
      func_0x00010775c2e8();
    }
  }
  func_0x0001072787e4(&uStack_3a0,&lStack_320);
  uStack_268 = uStack_398;
  uStack_270 = uStack_3a0;
  lStack_260 = lStack_390;
  uStack_398 = 0;
  lStack_390 = 0;
  uStack_3a0 = 0;
  func_0x000107348eb0(auStack_1a8,&uStack_270);
  func_0x0001074b0ce4(extraout_x8_00,auStack_1b0);
  func_0x00010726af18(auStack_1a8);
  func_0x00010726afc0(&uStack_270);
  func_0x00010726afc0(&uStack_3a0);
code_r0x00010775bac4:
  while( true ) {
    func_0x00010726afc0(&lStack_320);
    func_0x00010775c25c(uStack_f0);
    if ((bool)uVar11) break;
    ___stack_chk_fail();
code_r0x00010775baf0:
    iVar12 = 0x13725e80;
    ___cxa_guard_acquire();
    if (iVar12 != 0) {
      func_0x000100060964(0x113725ef8,&UNK_10f425c7f);
      ___cxa_guard_release(0x113725e80);
    }
code_r0x00010775ba54:
    uVar17 = 0x113725ef8;
code_r0x00010775baa4:
    func_0x000104c2fe00(&uStack_2f0,uVar17);
    func_0x00010775c3cc();
    func_0x00010775c474();
code_r0x00010775bab4:
    func_0x00010775c2d8();
code_r0x00010775bab8:
    func_0x00010775c3e0();
code_r0x00010775babc:
    func_0x00010775c420();
code_r0x00010775bac0:
    func_0x00010775c2e8();
  }
  return;
}



/* Entry: 10775c008; end: 10775c01b;  */

/* WARNING: Possible PIC construction at 0x00010775c048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010775c04c) */
/* WARNING: Removing unreachable block (ram,0x00010775c074) */
/* WARNING: Removing unreachable block (ram,0x00010775c08c) */
/* WARNING: Removing unreachable block (ram,0x00010775c060) */

undefined * FUN_10775c008(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_98 [104];
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c03f28();
  func_0x00010775c2a0();
  func_0x000107278acc(auStack_98);
  puVar2 = puVar1;
  func_0x000104c2f64c();
  func_0x00010775c0f8(puVar2 + 0x38,auStack_98);
  puVar1[0xa0] = 0;
  puVar1[0xa8] = 0;
  puVar1[0xb0] = 0;
  puVar1[0xc0] = 0;
  puVar1[200] = 0;
  puVar1[0xd8] = 0;
  puVar1[0xe0] = 0;
  puVar1[0xe8] = 0;
  puVar1[0x108] = 0;
  puVar1[0x110] = 0;
  puVar1[0x118] = 0;
  *(undefined8 *)(puVar1 + 0xf0) = 0;
  puVar1[0xf8] = 0;
  return puVar1;
}



/* Entry: 10775c620; end: 10775c687;  */

bool FUN_10775c620(double *param_1,double *param_2)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 1) == *(char *)(param_2 + 1);
  if (bVar1 && *(char *)(param_1 + 1) != '\0') {
    bVar1 = *param_1 == *param_2;
  }
  return !bVar1;
}



/* Entry: 10775de80; end: 10775de8b;  */

uint FUN_10775de80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x0001072e7894(uVar1,*param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10775e194; end: 10775e23b;  */

ulong FUN_10775e194(void)

{
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  ulong unaff_x22;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  
  func_0x00010775e358();
  func_0x00010775e2f8();
  while( true ) {
    func_0x00010775e3ac();
    while (unaff_x28 != 0) {
      uVar1 = (unaff_x28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x28 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      unaff_x22 = unaff_x27 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & unaff_x25;
      uVar1 = *(long *)(unaff_x19 + 8) + unaff_x22 * unaff_x26;
      func_0x000107278484();
      if ((uVar1 & 1) != 0) {
        return unaff_x22;
      }
      func_0x00010775e63c();
    }
    func_0x00010775e49c();
    if ((extraout_x8 & 1) != 0) break;
    func_0x00010775e630();
  }
  func_0x00010775e3ec();
  func_0x00010775e660();
  return unaff_x22;
}



/* Entry: 10775e908; end: 10775e96f;  */

/* WARNING: Possible PIC construction at 0x00010775ec30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010775ec34) */
/* WARNING: Removing unreachable block (ram,0x00010775ec58) */
/* WARNING: Removing unreachable block (ram,0x00010775ec80) */
/* WARNING: Removing unreachable block (ram,0x00010775ecb4) */
/* WARNING: Removing unreachable block (ram,0x00010775ecf4) */

long * FUN_10775e908(undefined8 param_1)

{
  undefined3 uVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [24];
  uint5 auStack_1b0 [2];
  byte bStack_1a0;
  undefined1 auStack_198 [16];
  undefined1 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  byte bStack_170;
  long alStack_168 [3];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [16];
  undefined1 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined1 auStack_a0 [112];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  puVar9 = auStack_a0;
  plVar4 = (long *)auStack_a0;
  plVar5 = (long *)auStack_a0;
  func_0x00010775ef30(param_1);
  auStack_a0[0] = 0;
  uStack_30 = 0;
  lVar10 = 1;
  uStack_28 = extraout_x8;
  func_0x0001074d1ee8();
  func_0x000107296ad0();
  func_0x00010775ef04(uStack_28);
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x000107296ad0();
  func_0x00010775ef18();
  plVar6 = plVar5;
  func_0x00010775ef30();
  plVar4 = plVar6 + 1;
  plVar7 = plVar4;
  uStack_e8 = extraout_x8_01;
  (**(code **)(*plVar6 + 0x20))();
  uVar3 = plVar7 == (long *)0x3;
  if ((bool)uVar3) {
    (**(code **)(*plVar5 + 0x28))(auStack_118,plVar4,1);
    auStack_198[0] = 0;
    uStack_188 = 0;
    uVar1 = SUB83((undefined8)auStack_1b0[0],5);
    uVar2 = (uint)(undefined8)auStack_1b0[0];
    auStack_1b0[0] = (uint5)(uVar2 & 0xffffff00);
    auStack_1b0[0]._0_8_ = CONCAT35(uVar1,auStack_1b0[0]);
    func_0x00010777067c(&lStack_180,puVar9,auStack_118,1,lVar10,auStack_198,auStack_1b0);
    func_0x0001072c9854(auStack_198);
    func_0x0001072f5f6c(auStack_118);
    if ((bStack_170 & 1) == 0) {
      *(undefined1 *)extraout_x8_00 = 0;
      *(undefined1 *)(extraout_x8_00 + 2) = 0;
    }
    else {
      auStack_118[0] = 0;
      uStack_108 = 0;
      func_0x00010756f300();
      (**(code **)(*plVar5 + 0x28))(&lStack_100,plVar4,2);
      func_0x00010756f360(auStack_1c8,auStack_118);
      uStack_130 = CONCAT35(uStack_130._5_3_,0x100000002);
      func_0x00010777067c(auStack_1b0,puVar9,&lStack_100,2,lVar10,auStack_1c8,&uStack_130);
      func_0x0001072c9854(auStack_1c8);
      func_0x0001072f5f6c(&lStack_100);
      if ((bStack_1a0 & 1) == 0) {
        *(undefined1 *)extraout_x8_00 = 0;
        *(undefined1 *)(extraout_x8_00 + 2) = 0;
      }
      else {
        uVar3 = puVar9[0x51] == '\x01';
        if ((bool)uVar3) {
          puVar8 = (undefined8 *)0x80;
          __Znwm();
          uStack_f8 = uStack_178;
          lStack_100 = lStack_180;
          uStack_128 = (undefined8)auStack_1b0[1];
          uStack_130 = (undefined8)auStack_1b0[0];
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = &PTR_DAT_1109d5038;
          plVar4 = puVar8 + 3;
          lStack_180 = 0;
          uStack_178 = 0;
          auStack_1b0[0]._0_8_ = 0;
          auStack_1b0[1]._0_8_ = 0;
          uStack_140 = 0;
          uStack_138 = 0;
          uStack_150 = 0;
          uStack_148 = 0;
          func_0x00010775edf0(plVar4,&lStack_100,&uStack_130);
          func_0x00010775ef28();
          func_0x00010775ef20();
          func_0x0001002a8234(puVar8 + 8,lVar10 + 0x40);
          func_0x0001072c9b9c(&uStack_150);
          func_0x0001072c9b9c(&uStack_140);
          *extraout_x8_00 = (long)plVar4;
          extraout_x8_00[1] = (long)puVar8;
          uStack_1d8 = 0;
          uStack_1d0 = 0;
          *(undefined1 *)(extraout_x8_00 + 2) = 1;
          puVar8 = &uStack_1d8;
        }
        else {
          puVar8 = (undefined8 *)0x80;
          __Znwm();
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = &PTR_DAT_1109d5038;
          uStack_f8 = uStack_178;
          lStack_100 = lStack_180;
          lStack_180 = 0;
          uStack_178 = 0;
          uStack_128 = (undefined8)auStack_1b0[1];
          uStack_130 = (undefined8)auStack_1b0[0];
          auStack_1b0[0]._0_8_ = 0;
          auStack_1b0[1]._0_8_ = 0;
          func_0x00010775edf0(puVar8 + 3,&lStack_100,&uStack_130);
          func_0x00010775ef28();
          func_0x00010775ef20();
          *extraout_x8_00 = (long)(puVar8 + 3);
          extraout_x8_00[1] = (long)puVar8;
          uStack_140 = 0;
          uStack_138 = 0;
          *(undefined1 *)(extraout_x8_00 + 2) = 1;
          puVar8 = &uStack_140;
        }
        func_0x00010775eed8(puVar8);
      }
      func_0x0001072c95d0(auStack_1b0);
      func_0x0001072c9854(auStack_118);
    }
    plVar5 = &lStack_180;
    func_0x0001072c95d0();
  }
  else {
    func_0x00010002b838(alStack_168,&UNK_10f426068);
    func_0x00010756a668(puVar9,alStack_168);
    plVar5 = alStack_168;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)extraout_x8_00 = 0;
    *(undefined1 *)(extraout_x8_00 + 2) = 0;
  }
  func_0x00010775ef04(uStack_e8);
  if ((bool)uVar3) {
    return plVar5;
  }
  ___stack_chk_fail();
  *plVar4 = (long)&PTR_DAT_1109d4fb0;
  func_0x0001072c9b9c(plVar4 + 0xb);
  func_0x0001072c9b9c(plVar4 + 9);
  *plVar4 = (long)&PTR_DAT_1109d4888;
  func_0x0001001148fc(plVar4 + 5);
  func_0x0001072c9884(plVar4 + 2);
  return plVar4;
}



/* Entry: 10775edcc; end: 10775eddf;  */

void FUN_10775edcc(void)

{
  func_0x00010775eec8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10775f02c; end: 10775f07f;  */

ulong FUN_10775f02c(void)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 in_ZR;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong unaff_x19;
  undefined1 auStack_c0 [56];
  undefined8 uStack_88;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x00010775f5c4();
  func_0x000104c318bc(auStack_60);
  uVar7 = unaff_x19;
  func_0x00010775f62c();
  func_0x00010775f5fc();
  func_0x00010775f5b0(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010775f5fc();
    func_0x00010775f5dc();
    puVar9 = auStack_c0;
    func_0x00010775f5c4();
    func_0x000100060964(auStack_c0);
    uVar8 = uVar7;
    FUN_10775f02c();
    func_0x00010775f5fc();
    func_0x00010775f5b0(uStack_88);
    unaff_x19 = uVar7;
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010775f5fc();
      func_0x00010775f5dc();
      uVar7 = uVar8;
      func_0x000104c32db4();
      if (((int)uVar7 == 0) || (*(char *)(uVar8 + 0x38) != puVar9[0x38])) {
        return 0;
      }
      cVar5 = *(char *)(uVar8 + 0x58);
      if (cVar5 != puVar9[0x58] || cVar5 == '\0') {
        return (ulong)(cVar5 == puVar9[0x58]);
      }
      bVar3 = *(byte *)(uVar8 + 0x57);
      uVar7 = *(ulong *)(uVar8 + 0x48);
      if (-1 < (char)bVar3) {
        uVar7 = (ulong)bVar3;
      }
      bVar4 = puVar9[0x57];
      uVar1 = *(ulong *)(puVar9 + 0x48);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      if (uVar7 == uVar1) {
        plVar6 = (long *)*(long *)(uVar8 + 0x40);
        if (-1 < (char)bVar3) {
          plVar6 = (long *)(uVar8 + 0x40);
        }
        plVar2 = (long *)*(long *)(puVar9 + 0x40);
        if (-1 < (char)bVar4) {
          plVar2 = (long *)(puVar9 + 0x40);
        }
        func_0x000107c610b0(plVar6,plVar2);
        return (ulong)((int)plVar6 == 0);
      }
      return 0;
    }
  }
  return unaff_x19;
}



/* Entry: 10775f68c; end: 10775f7df;  */

long * FUN_10775f68c(long *param_1,undefined *param_2,undefined2 param_3,long param_4)

{
  undefined1 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 extraout_x8;
  long *plVar5;
  undefined2 uStack_82;
  long alStack_80 [3];
  long *plStack_68;
  undefined8 uStack_48;
  
  plVar5 = param_1;
  puVar4 = param_2;
  uStack_82 = param_3;
  func_0x000107760a20();
  uVar1 = (int)plVar5[1] == 0xb;
  uStack_48 = extraout_x8;
  if ((bool)uVar1) {
    (**(code **)(*param_1 + 0x40))(alStack_80,param_1);
    puVar4 = &UNK_10f417dcf;
    plVar2 = alStack_80;
    func_0x000107278484();
    plVar5 = plVar2;
    func_0x000107760b00();
    if ((int)plVar2 != 0) {
      func_0x000107760ac4();
      *plVar5 = (long)&PTR_DAT_1109d5190;
      plVar5[1] = (long)param_2;
      plVar5[2] = (long)&uStack_82;
      plVar5[3] = param_4;
      plStack_68 = plVar5;
      func_0x000107760ab8(*(undefined8 *)(*param_1 + 0x10));
      goto LAB_10775f788;
    }
  }
  else {
    uVar1 = (int)plVar5[1] == 0x15;
    if ((bool)uVar1) {
      func_0x000107760ac4();
      *plVar5 = (long)&PTR_DAT_1109d5110;
      plVar5[1] = (long)param_2;
      plVar5[2] = (long)&uStack_82;
      plVar5[3] = param_4;
      plStack_68 = plVar5;
      func_0x000107760ab8(*(undefined8 *)(*param_1 + 0x10));
      goto LAB_10775f788;
    }
  }
  func_0x000107760ac4();
  *plVar5 = (long)&PTR_DAT_1109d5290;
  plVar5[1] = (long)param_2;
  plVar5[2] = (long)&uStack_82;
  plVar5[3] = param_4;
  plStack_68 = plVar5;
  func_0x000107760ab8(*(undefined8 *)(*param_1 + 0x10));
LAB_10775f788:
  plVar5 = alStack_80;
  func_0x00010745df78();
  func_0x0001077609c8(uStack_48);
  if ((bool)uVar1) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar5 = alStack_80;
  func_0x00010745df78();
  func_0x000107760a74();
  plVar5 = plVar5 + 2;
  while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
    if ((*(int *)(puVar4 + 0x10) != 1) &&
       ((*(int *)(puVar4 + 0x10) == 0 ||
        (puVar3 = puVar4, func_0x000107750bdc(puVar4,plVar5 + 2), puVar3 != (undefined *)0x0))))
    break;
  }
  return (long *)(ulong)(plVar5 != (long *)0x0);
}



/* Entry: 10775fc98; end: 10775fcdb;  */

undefined8 FUN_10775fc98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x0001073f26dc(&uStack_28,param_1);
  func_0x00010756af98(&uStack_28,param_2);
  return uStack_28;
}



/* Entry: 107760258; end: 10776026b;  */

undefined ** FUN_107760258(void)

{
  return &PTR_DAT_1109d5170;
}



/* Entry: 107760808; end: 10776080f;  */

void FUN_107760808(void)

{
  return;
}



/* Entry: 107760974; end: 10776099b;  */

void FUN_107760974(undefined8 param_1)

{
  func_0x000107760b74();
  func_0x000107760b08(param_1,&PTR_DAT_1109d52f0);
  func_0x000107760af0();
  return;
}



/* Entry: 10776173c; end: 10776179f;  */

long * FUN_10776173c(long param_1,long param_2)

{
  long *plVar1;
  
  if (*(int *)(param_2 + 8) == 0x16) {
    plVar1 = *(long **)(param_1 + 0x48);
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_2 + 0x48));
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010776178c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_2 + 0x58));
      return plVar1;
    }
  }
  return (long *)0x0;
}



/* Entry: 1077618e4; end: 1077618f7;  */

void FUN_1077618e4(void)

{
  func_0x000107761904();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077622a4; end: 1077622b7;  */

void FUN_1077622a4(void)

{
  func_0x00010776233c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077623e4; end: 1077633d7;  */

void FUN_1077623e4(long ***param_1,double ***param_2,double ***param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  double **ppdVar3;
  undefined1 uVar4;
  double ***pppdVar5;
  undefined1 *puVar6;
  long ***ppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long ****extraout_x8_01;
  long ****extraout_x8_02;
  long ****extraout_x8_03;
  long ****extraout_x8_04;
  long ****extraout_x8_05;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  code *extraout_x9_02;
  code *extraout_x9_03;
  code *extraout_x9_04;
  code *extraout_x9_05;
  double **extraout_x9_06;
  double **extraout_x9_07;
  double ***extraout_x9_08;
  long ***extraout_x10;
  long *unaff_x19;
  double ***pppdVar13;
  double ***unaff_x24;
  double ***pppdVar14;
  undefined1 uVar15;
  long lVar16;
  undefined4 uVar17;
  long unaff_x27;
  undefined1 uVar18;
  ulong uVar19;
  long ***in_register_00005008;
  byte bVar20;
  undefined1 auVar21 [16];
  long ***ppplVar22;
  long ***ppplVar23;
  long ***ppplStack_378;
  long ***ppplStack_370;
  double **ppdStack_368;
  double **ppdStack_360;
  double **ppdStack_358;
  ulong uStack_350;
  double **ppdStack_348;
  double **ppdStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  long ***ppplStack_318;
  int iStack_310;
  undefined1 auStack_308 [4];
  undefined1 uStack_304;
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [16];
  byte bStack_2a8;
  long ***ppplStack_2a0;
  long ***ppplStack_298;
  double **ppdStack_290;
  undefined1 auStack_288 [8];
  undefined4 uStack_280;
  undefined1 uStack_278;
  double **ppdStack_270;
  double **ppdStack_268;
  byte bStack_260;
  double **appdStack_258 [3];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  double **appdStack_210 [3];
  double **appdStack_1f8 [3];
  double **ppdStack_1e0;
  double **ppdStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  double **ppdStack_180;
  undefined1 uStack_178;
  double **ppdStack_168;
  undefined4 uStack_160;
  byte bStack_158;
  long ***ppplStack_150;
  long ***ppplStack_148;
  double **ppdStack_140;
  undefined1 uStack_138;
  long ***ppplStack_130;
  long ***ppplStack_128;
  double **ppdStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char cStack_f0;
  undefined1 auStack_e8 [64];
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  pppdVar5 = param_2;
  func_0x000107765ba4();
  pppdVar13 = pppdVar5 + 1;
  pppdVar14 = pppdVar13;
  uStack_88 = extraout_x8;
  (*(code *)(*pppdVar5)[4])();
  uVar1 = (long)pppdVar14 - 1;
  uVar4 = uVar1 == 0;
  if (pppdVar14 == (double ***)0x0 || (bool)uVar4) {
    func_0x00010002b838(auStack_198,&UNK_10f426231);
    func_0x000107765bf4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
    func_0x000107765eb4();
    goto LAB_107762b7c;
  }
  func_0x00010776606c();
  func_0x000107765fd0(&lStack_a8,pppdVar13);
  puVar6 = auStack_a0;
  (**(code **)(lStack_a8 + 0x18))();
  if (((int)puVar6 == 0) ||
     (func_0x000107765fc8(*(undefined8 *)(lStack_a8 + 0x20)), puVar6 == (undefined1 *)0x0)) {
    func_0x00010002b838(auStack_1b0,&UNK_10f426231);
    func_0x000107765bf4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
    func_0x000107765eb4();
    goto LAB_107762b74;
  }
  func_0x000107765e94();
  func_0x000107765c44();
  (*extraout_x9)();
  ppplVar7 = (long ***)(unaff_x27 + 8);
  (*(code *)ppplStack_130[0xd])(auStack_e8);
  func_0x000107765c5c();
  func_0x000107766060();
  if ((bool)uVar4) {
    func_0x000107765f84();
    if (((ulong)ppplVar7 & 1) != 0) {
      uVar17 = 0;
      uVar19 = 0x3ff0000000000000;
      ppplVar7 = (long ***)0x0;
LAB_1077624e8:
      uVar4 = pppdVar14 == (double ***)0x4;
      if ((double ***)0x4 < pppdVar14) {
        if ((uVar1 & 1) != 0) {
          func_0x00010002b838(appdStack_258,&UNK_10f426347);
          func_0x000107765bf4();
          pppplVar8 = (long ****)appdStack_258;
          goto LAB_107762b64;
        }
        func_0x00010776606c();
        (*extraout_x9_00)(&ppplStack_130,pppdVar13,2);
        uStack_280 = 1;
        uStack_278 = 1;
        uVar1 = (ulong)ppplStack_150 >> 0x28;
        uVar2 = (uint)ppplStack_150;
        ppplStack_150._0_5_ = (uint5)(uVar2 & 0xffffff00);
        ppplStack_150 = (long ***)CONCAT35((int3)uVar1,(uint5)ppplStack_150);
        func_0x00010777067c(&ppdStack_270,param_3,&ppplStack_130,2,param_4,auStack_288,
                            &ppplStack_150);
        func_0x0001072c9854(auStack_288);
        func_0x000107765c5c();
        if ((bStack_260 & 1) == 0) {
          func_0x000107765eb4();
          goto LAB_107762d84;
        }
        ppplStack_298 = (long ***)0x0;
        ppdStack_290 = (double **)0x0;
        auStack_2b8[0] = 0;
        bStack_2a8 = 0;
        ppplStack_2a0 = (long ***)&ppplStack_298;
        func_0x000107765f9c();
        if ((char)ppdStack_120 == '\x01') {
          func_0x00010756f360(&ppplStack_150,param_3 + 3);
          uStack_160 = 6;
          pppplVar8 = &ppplStack_150;
          func_0x0001074d1ed0(pppplVar8,&ppdStack_168);
          func_0x0001072c9884(&ppdStack_168);
          func_0x0001072c9854(&ppplStack_150);
          func_0x000107765fa8();
          if ((int)pppplVar8 == 0) goto LAB_1077626a4;
          func_0x000107765f9c();
          func_0x00010756bb10(auStack_2b8,&ppplStack_130);
        }
        func_0x000107765fa8();
LAB_1077626a4:
        uVar15 = (undefined1)*unaff_x19;
        lVar16 = 3;
        uVar18 = (undefined1)unaff_x19[2];
        ppplVar22 = (long ***)0xfff0000000000000;
        do {
          pppdVar5 = (double ***)(lVar16 + 1);
          uVar4 = pppdVar5 == pppdVar14;
          if (pppdVar14 <= pppdVar5) {
            *(undefined1 *)(unaff_x19 + 2) = uVar18;
            *(undefined1 *)unaff_x19 = uVar15;
            func_0x0001072c9ff4(&ppplStack_318,auStack_2b8);
            ppdVar3 = ppdStack_290;
            pppdVar14 = (double ***)ppplStack_298;
            param_2 = &ppdStack_1e0;
            ppdStack_340 = ppdStack_1d8;
            ppdStack_348 = ppdStack_1e0;
            uStack_350 = uVar19 | (ulong)ppplVar7 & 0xff;
            uStack_330 = uStack_1c8;
            uStack_338 = uStack_1d0;
            uStack_328 = uStack_1c0;
            ppdStack_360 = ppdStack_270;
            ppdStack_358 = ppdStack_268;
            ppdStack_270 = (double **)0x0;
            ppdStack_268 = (double **)0x0;
            ppplStack_378 = ppplStack_2a0;
            ppplStack_370 = ppplStack_298;
            ppdStack_368 = ppdStack_290;
            pppplVar8 = &ppplStack_370;
            if ((long ***)ppdStack_290 != (long ***)0x0) {
              ppplStack_298[2] = (long **)&ppplStack_370;
              ppplStack_298 = (long ***)0x0;
              ppdStack_290 = (double **)0x0;
              pppplVar8 = (long ****)ppplStack_378;
              ppplStack_2a0 = (long ***)&ppplStack_298;
            }
            ppplStack_378 = (long ***)pppplVar8;
            uStack_320 = uVar17;
            if (iStack_310 == 0) {
              func_0x000107765b74();
              func_0x000107765b80();
              func_0x000107765a80();
              func_0x000107765a6c();
              func_0x000107765b98();
              param_1 = (long ***)ppdStack_1e0;
              in_register_00005008 = (long ***)ppdStack_1d8;
            }
            else {
              if (iStack_310 == 1) {
                uVar4 = *(char *)((long)param_3 + 0x51) == '\x01';
                if ((bool)uVar4) {
                  func_0x000107765e1c();
                  func_0x000107766078();
                  func_0x000107765e64(&PTR_FUN_1109d5568);
                  param_1 = (long ***)ppdStack_1e0;
                  in_register_00005008 = (long ***)ppdStack_1d8;
                  pppplVar8 = extraout_x8_01;
                  if ((long ***)ppdVar3 != (long ***)0x0) {
                    func_0x000107765e00();
                    param_1 = (long ***)ppdStack_1e0;
                    in_register_00005008 = (long ***)ppdStack_1d8;
                    pppplVar8 = (long ****)ppplStack_150;
                  }
                  ppplStack_150 = (long ***)pppplVar8;
                  func_0x000107765d1c();
                  if ((long ***)ppdVar3 != (long ***)0x0) {
                    pppdVar14[2] = extraout_x9_06;
                    *extraout_x8_03 = (long ***)0x0;
                    extraout_x8_03[1] = (long ***)0x0;
                    ppplStack_150 = (long ***)extraout_x8_03;
                  }
                  func_0x000107765ea8();
                  func_0x000107765c18();
                  func_0x000107765c74();
                  func_0x000107766038();
                  *param_3 = (double **)&PTR_DAT_1109d55b8;
                  func_0x000107765e4c();
                  pppplVar8 = (long ****)&ppdStack_180;
                }
                else {
                  func_0x000107765e1c();
                  func_0x000107766078();
                  func_0x000107765d48(&PTR_FUN_1109d5568);
                  param_1 = (long ***)ppdStack_1e0;
                  in_register_00005008 = (long ***)ppdStack_1d8;
                  if ((long ***)ppdVar3 != (long ***)0x0) {
                    func_0x000107765e00();
                    param_1 = (long ***)ppdStack_1e0;
                    in_register_00005008 = (long ***)ppdStack_1d8;
                  }
                  func_0x000107765ea8();
                  func_0x000107764aac(param_3);
                  func_0x000107765c74();
                  pppplVar8 = &ppplStack_150;
                }
                func_0x0001072c9b9c(pppplVar8);
                ppplStack_128 = (long ***)0x0;
                ppplStack_130 = (long ***)0x0;
                FUN_107764a84(&ppplStack_130);
LAB_107762d54:
                *unaff_x19 = (long)param_3;
                unaff_x19[1] = (long)param_2;
                func_0x000107766054();
                goto LAB_107762d5c;
              }
              uVar4 = iStack_310 == 2;
              if ((bool)uVar4) {
                func_0x000107765b74();
                func_0x000107765b80();
                func_0x000107765a80();
                func_0x000107765a6c();
                func_0x000107765b98();
                param_1 = (long ***)ppdStack_1e0;
                in_register_00005008 = (long ***)ppdStack_1d8;
              }
              else {
                uVar4 = iStack_310 == 3;
                if ((bool)uVar4) {
                  func_0x000107765b74();
                  func_0x000107765b80();
                  func_0x000107765a80();
                  func_0x000107765a6c();
                  func_0x000107765b98();
                  param_1 = (long ***)ppdStack_1e0;
                  in_register_00005008 = (long ***)ppdStack_1d8;
                }
                else {
                  if (iStack_310 == 4) {
                    uVar4 = *(char *)((long)param_3 + 0x51) == '\x01';
                    if ((bool)uVar4) {
                      func_0x000107765e1c();
                      func_0x000107766078();
                      func_0x000107765e64(&PTR_DAT_1109d5640);
                      param_1 = (long ***)ppdStack_1e0;
                      in_register_00005008 = (long ***)ppdStack_1d8;
                      pppplVar8 = extraout_x8_02;
                      if ((long ***)ppdVar3 != (long ***)0x0) {
                        func_0x000107765e00();
                        param_1 = (long ***)ppdStack_1e0;
                        in_register_00005008 = (long ***)ppdStack_1d8;
                        pppplVar8 = (long ****)ppplStack_150;
                      }
                      ppplStack_150 = (long ***)pppplVar8;
                      func_0x000107765d1c();
                      if ((long ***)ppdVar3 != (long ***)0x0) {
                        pppdVar14[2] = extraout_x9_07;
                        *extraout_x8_04 = (long ***)0x0;
                        extraout_x8_04[1] = (long ***)0x0;
                        ppplStack_150 = (long ***)extraout_x8_04;
                      }
                      func_0x000107765ea8();
                      func_0x000107765c18();
                      func_0x000107765c74();
                      func_0x000107766038();
                      *param_3 = (double **)&PTR_DAT_1109d5690;
                      func_0x000107765e4c();
                      pppplVar8 = (long ****)&ppdStack_180;
                    }
                    else {
                      func_0x000107765e1c();
                      func_0x000107766078();
                      func_0x000107765d48(&PTR_DAT_1109d5640);
                      param_1 = (long ***)ppdStack_1e0;
                      in_register_00005008 = (long ***)ppdStack_1d8;
                      if ((long ***)ppdVar3 != (long ***)0x0) {
                        func_0x000107765e00();
                        param_1 = (long ***)ppdStack_1e0;
                        in_register_00005008 = (long ***)ppdStack_1d8;
                      }
                      func_0x000107765ea8();
                      func_0x000107765014(param_3);
                      func_0x000107765c74();
                      pppplVar8 = &ppplStack_150;
                    }
                    func_0x0001072c9b9c(pppplVar8);
                    ppplStack_128 = (long ***)0x0;
                    ppplStack_130 = (long ***)0x0;
                    func_0x000107764fec(&ppplStack_130);
                    goto LAB_107762d54;
                  }
                  uVar4 = iStack_310 == 5;
                  if ((bool)uVar4) {
                    func_0x000107765b74();
                    func_0x000107765b80();
                    func_0x000107765a80();
                    func_0x000107765a6c();
                    func_0x000107765b98();
                    param_1 = (long ***)ppdStack_1e0;
                    in_register_00005008 = (long ***)ppdStack_1d8;
                  }
                  else {
                    uVar4 = iStack_310 == 6;
                    if ((bool)uVar4) {
                      func_0x000107765b74();
                      func_0x000107765b80();
                      func_0x000107765a80();
                      func_0x000107765a6c();
                      func_0x000107765b98();
                      param_1 = (long ***)ppdStack_1e0;
                      in_register_00005008 = (long ***)ppdStack_1d8;
                    }
                    else {
                      uVar4 = iStack_310 == 7;
                      if ((bool)uVar4) {
                        ppplStack_128 = (long ***)CONCAT44(ppplStack_128._4_4_,1);
                        unaff_x24 = (double ***)ppplStack_318;
                        func_0x0001074d1ed0(ppplStack_318,&ppplStack_130);
                        if (((ulong)unaff_x24 & 1) == 0) {
                          bVar20 = *(byte *)(ppplStack_318 + 3);
                          pppdVar14 = (double ***)(ulong)bVar20;
                          func_0x000107765f94();
                          param_1 = (long ***)ppdStack_1e0;
                          in_register_00005008 = (long ***)ppdStack_1d8;
                          if ((bVar20 & 1) != 0) {
                            uVar4 = *(char *)((long)param_3 + 0x51) == '\x01';
                            if ((bool)uVar4) {
                              func_0x000107765e1c();
                              param_3 = unaff_x24;
                              func_0x000107766084();
                              in_register_00005008 = (long ***)ppdStack_358;
                              param_1 = (long ***)ppdStack_360;
                              ppdStack_120 = ppdStack_368;
                              ppplStack_128 = ppplStack_370;
                              param_3 = param_3 + 3;
                              ppdStack_360 = (double **)0x0;
                              ppdStack_358 = (double **)0x0;
                              pppplVar8 = &ppplStack_148;
                              ppplStack_148 = ppplStack_370;
                              ppdStack_140 = ppdStack_368;
                              ppplStack_130 = (long ***)pppplVar8;
                              if ((long ***)ppdStack_368 == (long ***)0x0) goto LAB_107762ff0;
                              ppplStack_370[2] = (long **)pppplVar8;
                              ppplStack_370 = (long ***)0x0;
                              ppdStack_368 = (double **)0x0;
                              ppplStack_130 = ppplStack_378;
                              ppplStack_378 = (long ***)&ppplStack_370;
                              goto LAB_107762ff0;
                            }
                            func_0x000107765ea8(&ppplStack_130);
                            func_0x000107765658();
                            unaff_x19[1] = (long)ppplStack_128;
                            *unaff_x19 = (long)ppplStack_130;
                            param_1 = ppplStack_130;
                            in_register_00005008 = ppplStack_128;
                            goto LAB_107763058;
                          }
                        }
                        else {
                          func_0x000107765f94();
                          pppdVar14 = (double ***)ppplStack_318;
                          param_1 = (long ***)ppdStack_1e0;
                          in_register_00005008 = (long ***)ppdStack_1d8;
                        }
                        func_0x000107765b74();
                        func_0x000107765b80();
                        func_0x0001004c3cd0(&ppplStack_150,&UNK_10f42647e,&ppdStack_180);
                        func_0x00010048a6c8(&ppdStack_168,&ppplStack_150,&UNK_10f426484);
                        func_0x000107765bf4();
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                                  (&ppdStack_168);
                        pppplVar8 = &ppplStack_150;
                        goto LAB_107762c80;
                      }
                      uVar4 = iStack_310 == 8;
                      if ((bool)uVar4) {
                        func_0x000107765b74();
                        func_0x000107765b80();
                        func_0x000107765a80();
                        func_0x000107765a6c();
                        func_0x000107765b98();
                        param_1 = (long ***)ppdStack_1e0;
                        in_register_00005008 = (long ***)ppdStack_1d8;
                      }
                      else {
                        uVar4 = iStack_310 == 9;
                        if ((bool)uVar4) {
                          func_0x000107765b74();
                          func_0x000107765b80();
                          func_0x000107765a80();
                          func_0x000107765a6c();
                          func_0x000107765b98();
                          param_1 = (long ***)ppdStack_1e0;
                          in_register_00005008 = (long ***)ppdStack_1d8;
                        }
                        else {
                          uVar4 = iStack_310 == 10;
                          if ((bool)uVar4) {
                            func_0x000107765b74();
                            func_0x000107765b80();
                            func_0x000107765a80();
                            func_0x000107765a6c();
                            func_0x000107765b98();
                            param_1 = (long ***)ppdStack_1e0;
                            in_register_00005008 = (long ***)ppdStack_1d8;
                          }
                          else {
                            func_0x000107765b74();
                            func_0x000107765b80();
                            func_0x000107765a80();
                            func_0x000107765a6c();
                            func_0x000107765b98();
                            param_1 = (long ***)ppdStack_1e0;
                            in_register_00005008 = (long ***)ppdStack_1d8;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_150);
            pppplVar8 = (long ****)&ppdStack_168;
LAB_107762c80:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppplVar8);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppdStack_180);
            func_0x000104c2f714(&ppplStack_130);
            func_0x000107765eb4();
            goto LAB_107762d5c;
          }
          func_0x00010776606c();
          (*extraout_x9_01)(&ppplStack_150,pppdVar13,lVar16);
          (*(code *)ppplStack_150[0xe])(&ppplStack_130,&ppplStack_148);
          func_0x0001072f5f6c(&ppplStack_150);
          ppdStack_180 = (double **)((ulong)ppdStack_180 & 0xffffffffffffff00);
          uStack_178 = 0;
          ppplStack_150 = (long ***)((ulong)ppplStack_150 & 0xffffffffffffff00);
          uStack_138 = 0;
          uVar4 = cStack_f0 == '\x01';
          if ((bool)uVar4) {
            if ((int)ppplStack_130 == 3) {
              ppplVar23 = (long ***)0x7ff0000000000000;
              if ((double)ppplStack_128 <= 1.79769313486232e+308) {
                ppplVar23 = ppplStack_128;
              }
            }
            else if ((int)ppplStack_130 == 4) {
              ppplVar23 = (long ***)(double)(long)ppplStack_128;
            }
            else {
              uVar4 = (int)ppplStack_130 == 5;
              if (!(bool)uVar4) goto LAB_107762748;
              ppplVar23 = (long ***)NEON_ucvtf(ppplStack_128);
            }
            in_register_00005008 = (long ***)0x0;
            uStack_178 = 1;
            uVar4 = (double)ppplVar23 == (double)ppplVar22;
            param_1 = ppplStack_128;
            ppdStack_180 = (double **)ppplVar23;
            if ((double)ppplVar23 <= (double)ppplVar22) {
              func_0x00010002b838(auStack_2e8,&UNK_10f42640a);
              func_0x000107765fd8();
              puVar6 = auStack_2e8;
              goto LAB_10776284c;
            }
            func_0x00010776606c();
            (*extraout_x9_02)(&uStack_98,pppdVar13,pppdVar5);
            func_0x00010756f360(auStack_300,auStack_2b8);
            auStack_308[0] = 0;
            uStack_304 = 0;
            func_0x00010777067c(&ppdStack_168,param_3,&uStack_98,pppdVar5,param_4,auStack_300,
                                auStack_308);
            func_0x0001072c9854(auStack_300);
            func_0x0001072f5f6c(&uStack_98);
            bVar20 = bStack_158;
            if ((bStack_158 & 1) == 0) {
              uVar18 = 0;
              uVar15 = 0;
            }
            else {
              if ((bStack_2a8 & 1) == 0) {
                func_0x00010756f300(auStack_2b8,ppdStack_168 + 2);
              }
              func_0x000107548da0(&ppplStack_2a0,&ppdStack_180,&ppdStack_168);
            }
            func_0x0001072c95d0(&ppdStack_168);
            ppplVar22 = ppplVar23;
          }
          else {
LAB_107762748:
            func_0x00010002b838(auStack_2d0,&UNK_10f42637b);
            func_0x000107765fd8();
            puVar6 = auStack_2d0;
LAB_10776284c:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6);
            uVar18 = 0;
            uVar15 = 0;
            bVar20 = 0;
          }
          func_0x0001001148fc(&ppplStack_150);
          func_0x000107267ed0(&ppplStack_130);
          lVar16 = lVar16 + 2;
          if ((bVar20 & 1) == 0) {
            *(undefined1 *)(unaff_x19 + 2) = uVar18;
            *(undefined1 *)unaff_x19 = uVar15;
            goto LAB_107762d74;
          }
        } while( true );
      }
      func_0x000107878fec(&ppplStack_150,uVar1);
      func_0x0001004c3cd0(&ppplStack_130,&UNK_10f42630a,&ppplStack_150);
      func_0x00010048a6c8(auStack_240,&ppplStack_130,&DAT_10f62a9de);
      func_0x000107765bf4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_240);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_130);
      pppplVar8 = &ppplStack_150;
      goto LAB_107762b64;
    }
    func_0x000107766060();
    if (!(bool)uVar4) goto LAB_107762b24;
    puVar10 = &UNK_10f4167db;
    func_0x000107765f84();
    if ((int)ppplVar7 != 0) {
      func_0x000107765fc8(*(undefined8 *)(lStack_a8 + 0x20));
      uVar4 = ppplVar7 == (long ***)0x2;
      if ((bool)uVar4) {
        func_0x000107765e94();
        func_0x000107765c44();
        func_0x000107765fd0();
        func_0x000107765f40();
        func_0x000107765e8c();
        func_0x000107765c5c();
        if (((ulong)puVar10 & 1) != 0) {
          uVar17 = 0;
          uVar19 = (ulong)ppplVar7 & 0xffffffffffffff00;
          goto LAB_1077624e8;
        }
      }
      func_0x00010002b838(appdStack_1f8,&UNK_10f426263);
      func_0x0001077633d8(param_3,appdStack_1f8,1);
      pppplVar8 = (long ****)appdStack_1f8;
      goto LAB_107762b64;
    }
    func_0x000107766060();
    if (!(bool)uVar4) goto LAB_107762b24;
    puVar10 = &UNK_10f424863;
    func_0x000107765f84();
    if ((int)ppplVar7 != 0) {
      func_0x000107765fc8(*(undefined8 *)(lStack_a8 + 0x20));
      uVar4 = ppplVar7 == (long ***)0x5;
      if ((bool)uVar4) {
        func_0x000107765e94();
        func_0x000107765c44();
        func_0x000107765fd0();
        func_0x000107765f40();
        func_0x000107765e8c();
        ppplVar22 = ppplVar7;
        func_0x000107765c5c();
        func_0x000107765e94();
        func_0x000107765c44();
        uVar11 = 0;
        (*extraout_x9_03)();
        func_0x000107765f40();
        func_0x000107765e8c();
        func_0x000107765c5c();
        func_0x000107765e94();
        uVar12 = 3;
        (*extraout_x9_04)(&ppplStack_130,auStack_a0);
        func_0x000107765f40();
        pppplVar8 = &ppplStack_128;
        (*extraout_x8_00)();
        pppplVar9 = pppplVar8;
        func_0x000107765c5c();
        func_0x000107765e94();
        func_0x000107765c44();
        uVar19 = 0;
        (*extraout_x9_05)();
        func_0x000107765f40();
        func_0x000107765e8c();
        func_0x000107765c5c();
        in_register_00005008 = (long ***)0x0;
        auVar21 = NEON_fmov(0x3ff0000000000000,8);
        bVar20 = NEON_umaxv(CONCAT17(-((char)(((double)pppplVar9 < 0.0) * -0x80) < '\0'),
                                     CONCAT16(-((char)(((double)pppplVar8 < 0.0) * -0x80) < '\0'),
                                              CONCAT15(-((char)(((double)ppplVar22 < 0.0) * -0x80) <
                                                        '\0'),CONCAT14(-((char)(((double)ppplVar7 <
                                                                                0.0) * -0x80) < '\0'
                                                                        ),CONCAT13(-((char)((auVar21
                                                  ._8_8_ < (double)pppplVar9) * -0x80) < '\0'),
                                                  CONCAT12(-((char)((auVar21._0_8_ <
                                                                    (double)pppplVar8) * -0x80) <
                                                            '\0'),CONCAT11(-((char)((auVar21._8_8_ <
                                                                                    (double)
                                                  ppplVar22) * -0x80) < '\0'),
                                                  -((char)((auVar21._0_8_ < (double)ppplVar7) *
                                                          -0x80) < '\0')))))))),1);
        param_1 = ppplVar7;
        if (((((bVar20 & 1) == 0) && (((ulong)puVar10 & 1) != 0)) && ((uVar11 & 1) != 0)) &&
           (((uVar12 & 1) != 0 && ((uVar19 & 1) != 0)))) {
          func_0x00010725aa9c(&ppplStack_130);
          ppdStack_1d8 = ppdStack_120;
          ppdStack_1e0 = (double **)ppplStack_128;
          uStack_1c8 = uStack_110;
          uStack_1d0 = uStack_118;
          uStack_1c0 = uStack_108;
          uVar19 = (ulong)ppplStack_130 & 0xffffffffffffff00;
          uVar17 = 1;
          ppplVar7 = ppplStack_130;
          param_1 = ppplStack_128;
          in_register_00005008 = (long ***)ppdStack_120;
          goto LAB_1077624e8;
        }
      }
      func_0x00010002b838(appdStack_210,&UNK_10f426296);
      func_0x00010756a69c(param_3,appdStack_210,1);
      pppplVar8 = (long ****)appdStack_210;
      goto LAB_107762b64;
    }
    func_0x000107766060();
    if (!(bool)uVar4) goto LAB_107762b24;
    func_0x00010724ef84(&ppplStack_130,auStack_e8);
  }
  else {
LAB_107762b24:
    func_0x00010002b838(&ppplStack_130,"");
  }
  func_0x0001004c3cd0(auStack_228,&UNK_10f4262ee,&ppplStack_130);
  func_0x0001077633d8(param_3,auStack_228,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_228);
  pppplVar8 = &ppplStack_130;
LAB_107762b64:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppplVar8);
  func_0x000107765eb4();
  while( true ) {
    func_0x00010724b3d8(auStack_e8);
LAB_107762b74:
    func_0x0001072f5f6c(&lStack_a8);
    unaff_x24 = pppdVar14;
LAB_107762b7c:
    func_0x000107765aec(uStack_88);
    if ((bool)uVar4) break;
    ___stack_chk_fail();
    pppplVar8 = extraout_x8_05;
    ppplStack_128 = (long ***)extraout_x9_08;
    ppdStack_120 = (double **)extraout_x10;
    ppplStack_130 = (long ***)extraout_x8_05;
LAB_107762ff0:
    ppplStack_150 = ppplStack_130;
    param_2[0xd] = (double **)in_register_00005008;
    param_2[0xc] = (double **)param_1;
    uStack_98 = 0;
    uStack_90 = 0;
    pppplVar9 = &ppplStack_128;
    if ((long ***)ppdStack_120 != (long ***)0x0) {
      ppplStack_128[2] = (long **)&ppplStack_128;
      *pppplVar8 = (long ***)0x0;
      pppplVar8[1] = (long ***)0x0;
      ppplStack_150 = (long ***)pppplVar8;
      pppplVar9 = (long ****)ppplStack_130;
    }
    ppplStack_130 = (long ***)pppplVar9;
    func_0x000107765ea8();
    func_0x000107765c18();
    func_0x000107765c74();
    func_0x0001072c9b9c(&ppdStack_180);
    unaff_x24[3] = (double **)&PTR_DAT_1109d5768;
    func_0x000107765e4c();
    func_0x0001072c9b9c(&uStack_98);
    *unaff_x19 = (long)param_3;
    unaff_x19[1] = (long)unaff_x24;
    pppdVar14 = unaff_x24;
LAB_107763058:
    ppplStack_128 = (long ***)0x0;
    ppplStack_130 = (long ***)0x0;
    func_0x000107766054();
    func_0x000107765630(&ppplStack_130);
LAB_107762d5c:
    func_0x000107545fd8(&ppplStack_378);
    func_0x0001072c9b9c(&ppdStack_360);
    func_0x0001072c9884(&ppplStack_318);
LAB_107762d74:
    func_0x0001072c9854(auStack_2b8);
    func_0x000107545fd8(&ppplStack_2a0);
LAB_107762d84:
    func_0x0001072c95d0(&ppdStack_270);
  }
  return;
}



/* Entry: 107763f0c; end: 1077640b7;  */

void FUN_107763f0c(long *param_1)

{
  long lVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined1 *extraout_x8;
  undefined1 **ppuVar6;
  double dVar7;
  undefined1 *puStack_88;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_1 + 0x40))(auStack_80);
  puVar3 = auStack_80;
  func_0x0001074d25b4();
  func_0x000104c2f714(auStack_80);
  puStack_88 = puVar3;
  if ((int)param_1[0xf] == 0) {
    func_0x000107451500(&puStack_88,param_1 + 9);
  }
  else {
    func_0x0001074b019c(&puStack_88,&UNK_10de96cc0);
    dVar7 = (double)param_1[9];
    func_0x000107765970(param_1 + 9);
    lVar1 = -0x61c8864680b583eb;
    if (dVar7 / 3.0 != 0.0) {
      lVar1 = (long)(dVar7 / 3.0) + -0x61c8864680b583eb;
    }
    func_0x000107765f18(((ulong)puStack_88 >> 4) + (long)puStack_88 * 0x1000 + lVar1 ^
                        (ulong)puStack_88);
    func_0x000107765f18();
    func_0x000107765f18();
    puStack_88 = extraout_x8;
  }
  ppuVar5 = (undefined1 **)(param_1 + 0x10);
  func_0x00010756af98(&puStack_88);
  puStack_88 = (undefined1 *)
               (param_1[0x14] + -0x61c8864680b583eb + (long)puStack_88 * 0x1000 +
                ((ulong)puStack_88 >> 4) ^ (ulong)puStack_88);
  ppuVar6 = (undefined1 **)param_1[0x12];
  while (bVar2 = ppuVar6 == (undefined1 **)(param_1 + 0x13), !bVar2) {
    func_0x000107451500(&puStack_88,ppuVar6 + 4);
    ppuVar4 = &puStack_88;
    ppuVar5 = ppuVar6 + 5;
    func_0x00010756af98();
    func_0x000107765ec0();
    ppuVar6 = ppuVar4;
  }
  func_0x000107765aec(uStack_48);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = auStack_80;
  func_0x000104c2f714();
  func_0x000107765c04();
  func_0x00010745df58(ppuVar5,*(undefined8 *)(puVar3 + 0x80));
  ppuVar6 = *(undefined1 ***)(puVar3 + 0x90);
  while (ppuVar6 != (undefined1 **)(puVar3 + 0x98)) {
    ppuVar4 = ppuVar6 + 5;
    ppuVar6 = ppuVar5;
    func_0x00010745df58(ppuVar5,*ppuVar4);
    func_0x000107765ec0();
  }
  return;
}



/* Entry: 1077643cc; end: 1077643cf;  */

void FUN_1077643cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d5568;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107764900; end: 107764927;  */

undefined8 * FUN_107764900(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x00010002c810();
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 107764a84; end: 107764aab;  */

long FUN_107764a84(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107764fc0; end: 107764fdf;  */

undefined8 * FUN_107764fc0(undefined8 *param_1)

{
  if (*(int *)(param_1 + 0xd) == 4) {
    return param_1 + 1;
  }
  func_0x00010563ab98();
  *param_1 = &PTR_DAT_1109d5640;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return param_1;
}



/* Entry: 1077650a4; end: 1077650d3;  */

void FUN_1077650a4(int param_1)

{
  undefined1 extraout_w8;
  undefined1 uVar1;
  undefined1 *unaff_x19;
  
  func_0x000107765c34();
  if (param_1 == 0) {
    uVar1 = 0;
    *unaff_x19 = 0;
  }
  else {
    func_0x000107765ed8();
    uVar1 = extraout_w8;
  }
  unaff_x19[0x38] = uVar1;
  return;
}



/* Entry: 1077657d0; end: 107765807;  */

long FUN_1077657d0(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109d5830);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1077658e0; end: 107765933;  */

undefined8 FUN_1077658e0(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107765d00();
  func_0x000107765ce4();
  func_0x000107765934(uStack_38);
  func_0x000107766008();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107765ed0();
  return uVar1;
}



/* Entry: 107766498; end: 1077664d3;  */

long * FUN_107766498(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_2 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48(0,*(undefined8 *)(param_1 + 0x48));
  plVar2 = (long *)plVar1[3];
  if (plVar2 == plVar1) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 1077667f0; end: 107766803;  */

void FUN_1077667f0(void)

{
  func_0x000107766814();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107767268; end: 107767357;  */

void FUN_107767268(long *param_1,long param_2,long **param_3,long *param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long **pplStack_c8;
  long *plStack_c0;
  long **pplStack_b0;
  undefined8 uStack_a8;
  ulong uStack_68;
  long *plStack_60;
  long lStack_58;
  undefined8 uStack_28;
  
  plVar2 = param_1;
  func_0x00010776884c();
  uStack_28 = extraout_x8;
  (**(code **)(*plVar2 + 0x40))(&plStack_60);
  pplVar3 = &plStack_60;
  func_0x0001074d25b4();
  func_0x000104c2f714(&plStack_60);
  uStack_68 = (long)pplVar3 * 0x1000 + ((ulong)pplVar3 >> 4) + param_1[0xc] + -0x61c8864680b583eb ^
              (ulong)pplVar3;
  plVar2 = param_1 + 9;
  func_0x000107375ad0();
  plStack_60 = plVar2;
  while (lStack_58 = param_2, plStack_60 != (long *)0x0) {
    func_0x0001073f26dc(&uStack_68,param_2);
    func_0x00010756af98(&uStack_68,param_2 + 0x38);
    func_0x000107375b30(&plStack_60);
    param_2 = lStack_58;
  }
  param_1 = param_1 + 0xd;
  func_0x00010756af98(&uStack_68);
  func_0x000107768838(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pplVar3 = &plStack_60;
  func_0x000104c2f714();
  func_0x00010776886c();
  pplVar4 = pplVar3;
  plVar2 = param_1;
  pplVar5 = param_3;
  func_0x00010776884c();
  uVar1 = *(char *)(pplVar5 + 0x32) == '\x01';
  uStack_a8 = extraout_x8_00;
  if ((bool)uVar1) {
    func_0x0001077688f4();
    *pplVar4 = (long *)&PTR_DAT_1109d5bc8;
    pplVar4[1] = (long *)pplVar3;
    pplVar4[2] = param_1;
    pplVar4[3] = param_4;
    pplStack_b0 = pplVar4;
    func_0x00010776696c(param_3,pplVar3 + 9,&pplStack_c8);
    func_0x000107768958();
    pplVar3 = param_3;
  }
  else {
    pplVar4 = pplVar3 + 9;
    func_0x000107375ad0();
    pplStack_c8 = pplVar4;
    plStack_c0 = plVar2;
    while (pplStack_c8 != (long **)0x0) {
      (**(code **)(*(long *)plStack_c0[7] + 0x48))((long *)plStack_c0[7],param_1,param_3,param_4);
      func_0x000107375b30(&pplStack_c8);
    }
    func_0x0001077533f4(pplVar3,param_1,param_3,param_4);
  }
  func_0x000107768838(uStack_a8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107768958();
    func_0x00010776886c();
                    /* WARNING: Could not recover jumptable at 0x00010776744c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*pplVar3[0xd] + 0x50))();
    return;
  }
  return;
}



/* Entry: 107767ec8; end: 10776805f;  */

undefined8 * FUN_107767ec8(long *param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 auStack_258 [50];
  ulong auStack_c8 [15];
  int iStack_50;
  undefined8 uStack_48;
  
  plVar7 = param_1;
  func_0x00010776884c();
  uStack_48 = extraout_x8;
  (**(code **)(*plVar7 + 0x40))(auStack_258);
  lVar6 = -0x61c8864680b583eb;
  if (param_1[0x10] != 0) {
    auStack_c8[0] = 0;
    func_0x0001074d2690(auStack_c8);
    lVar6 = auStack_c8[0] + 0x9e3779b97f4a7c15;
  }
  uVar9 = param_1[0x12];
  auStack_c8[0] = 0;
  func_0x0001073f26dc(auStack_c8,auStack_258);
  func_0x0001073f26dc(auStack_c8,param_1 + 9);
  uVar4 = lVar6 + auStack_c8[0] * 0x1000 + (auStack_c8[0] >> 4) ^ auStack_c8[0];
  func_0x000104c2f714(auStack_258);
  plVar7 = param_1 + 0x13;
  if ((param_1[0x12] & 1U) != 0) {
    plVar7 = (long *)*plVar7;
  }
  uVar1 = param_1[0x12] & 0x1ffffffffffffffe;
  uVar8 = uVar1 << 3;
  puVar3 = (undefined8 *)((uVar9 >> 1) + 0x9e3779b97f4a7c15 + uVar4 * 0x1000 + (uVar4 >> 4) ^ uVar4)
  ;
  while (puStack_2a8 = puVar3, uVar1 != 0) {
    uVar5 = *plVar7;
    func_0x000107751284(auStack_258);
    uStack_260 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    FUN_107753050(auStack_c8,uVar5,auStack_258,&uStack_2a0);
    func_0x00010724b3d8(&uStack_2a0);
    func_0x000107267da8(auStack_258);
    if (iStack_50 != 0) {
      puVar2 = auStack_c8;
      func_0x0001073405dc(puVar2);
      FUN_10772db3c(&puStack_2a8,puVar2);
    }
    func_0x000107768910();
    plVar7 = plVar7 + 2;
    uVar8 = uVar8 - 0x10;
    puVar3 = puStack_2a8;
    uVar1 = uVar8;
  }
  func_0x000107768838(uStack_48);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(&uStack_2a0);
  puVar3 = auStack_258;
  func_0x000107267da8();
  func_0x00010776886c();
  *puVar3 = &PTR_DAT_1109d5988;
  func_0x0001072c9b9c(puVar3 + 0xd);
  func_0x0001072c9500(puVar3 + 9);
  *puVar3 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(puVar3 + 5);
  func_0x0001072c9884(puVar3 + 2);
  return puVar3;
}



/* Entry: 10776814c; end: 10776815b;  */

void FUN_10776814c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010776887c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1077682e4; end: 10776830b;  */

void FUN_1077682e4(undefined8 param_1)

{
  func_0x000107768a70();
  func_0x000107768970(param_1,&PTR_DAT_1109d5b58);
  func_0x000107768988();
  return;
}



/* Entry: 1077684a0; end: 1077684cb;  */

void FUN_1077684a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001077689ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107768608; end: 107768633;  */

void FUN_107768608(void)

{
  __Znwm(0x18);
  func_0x000107768978(&PTR_DAT_1109d5c48);
  return;
}



/* Entry: 107768800; end: 10776880f;  */

void FUN_107768800(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d5cc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107769430; end: 107769443;  */

void FUN_107769430(void)

{
  func_0x000107539ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10776977c; end: 107769787;  */

undefined ** FUN_10776977c(void)

{
  return &PTR_DAT_1109d5e00;
}



/* Entry: 10776a3ec; end: 10776a40b;  */

void FUN_10776a3ec(long param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    func_0x00010755324c();
  }
  return;
}



/* Entry: 10776ac54; end: 10776ad23;  */

/* WARNING: Possible PIC construction at 0x00010776acb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010776aee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010776af34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010776aee4) */
/* WARNING: Removing unreachable block (ram,0x00010776aefc) */
/* WARNING: Removing unreachable block (ram,0x00010776aef4) */
/* WARNING: Removing unreachable block (ram,0x00010776dee0) */
/* WARNING: Removing unreachable block (ram,0x00010776acbc) */
/* WARNING: Removing unreachable block (ram,0x00010776af38) */
/* WARNING: Removing unreachable block (ram,0x00010776af24) */
/* WARNING: Removing unreachable block (ram,0x00010776af3c) */
/* WARNING: Removing unreachable block (ram,0x00010776df7c) */
/* WARNING: Removing unreachable block (ram,0x00010776af2c) */
/* WARNING: Removing unreachable block (ram,0x00010745df58) */
/* WARNING: Removing unreachable block (ram,0x00010745df6c) */
/* WARNING: Removing unreachable block (ram,0x00010745dfa0) */
/* WARNING: Removing unreachable block (ram,0x00010745df94) */
/* WARNING: Removing unreachable block (ram,0x00010745df98) */
/* WARNING: Removing unreachable block (ram,0x00010745dfa4) */
/* WARNING: Removing unreachable block (ram,0x00010745dfb0) */
/* WARNING: Removing unreachable block (ram,0x00010745e5cc) */
/* WARNING: Removing unreachable block (ram,0x00010745df60) */

void FUN_10776ac54(double *param_1,double *param_2,double *param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  undefined1 *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  double dVar9;
  undefined8 extraout_x8_01;
  ulong uVar10;
  double dVar11;
  long *plVar12;
  double dVar13;
  double *unaff_x19;
  undefined1 *puVar14;
  undefined *puVar15;
  double dVar16;
  undefined1 auStack_130 [24];
  double *pdStack_118;
  undefined8 uStack_48;
  
  puVar14 = &stack0xfffffffffffffff0;
  pdVar5 = param_2;
  pdVar7 = param_3;
  func_0x00010776d97c();
  uVar3 = *(char *)(pdVar7 + 0x32) == '\x01';
  if ((bool)uVar3) {
    func_0x00010776db3c();
    pdVar4 = param_3;
    func_0x00010756ec34();
    func_0x00010776e034();
    func_0x00010776db08();
    *pdVar4 = (double)&PTR_DAT_1109d5e50;
    pdVar4[1] = (double)param_2;
    pdVar4[2] = (double)param_3;
    pdVar4[3] = (double)param_4;
    pdStack_118 = pdVar4;
    func_0x00010776dd48();
    puVar15 = (undefined *)0x10776acbc;
    puVar2 = auStack_130;
    param_1 = unaff_x19;
  }
  else {
    uStack_48 = extraout_x8;
    func_0x00010776db08();
    func_0x00010776de8c(&PTR_DAT_1109d5ee0);
    func_0x00010776df20();
    func_0x00010776dd64();
    func_0x00010776d950(uStack_48);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010776dcc8();
    func_0x00010776dd7c();
    puVar15 = &SUB_10776ad24;
    func_0x00010776da9c();
    puVar2 = auStack_130;
  }
  do {
    puVar8 = param_5;
    pdVar4 = pdVar5;
    *(double **)(puVar2 + -0x30) = param_2;
    *(double **)(puVar2 + -0x28) = param_3;
    *(undefined1 **)(puVar2 + -0x20) = param_4;
    *(double **)(puVar2 + -0x18) = param_1;
    *(undefined1 **)(puVar2 + -0x10) = puVar14;
    *(undefined **)(puVar2 + -8) = puVar15;
    pdVar5 = pdVar4;
    func_0x00010776d97c();
    *(undefined8 *)(puVar2 + -0x38) = extraout_x8_00;
    pdVar5 = (double *)pdVar5[9];
    func_0x00010776dd20();
    uVar3 = *(int *)(puVar2 + -0x40) == 1;
    if ((bool)uVar3) {
      func_0x00010776dd10();
      uVar3 = *(int *)(pdVar5 + 0xd) == 2;
      if ((bool)uVar3) {
        func_0x00010776dd10();
        func_0x0001072cb4bc();
        dVar16 = *pdVar5;
        uVar3 = dVar16 == (double)(long)(double)(long)dVar16;
        if ((((bool)uVar3) && (dVar9 = pdVar4[0xc], dVar9 != 0.0)) && (pdVar4[0xe] != 0.0)) {
          dVar16 = (double)(long)dVar16;
          uVar10 = (long)dVar9 - 1;
          if (((ulong)dVar9 & uVar10) == 0) {
            dVar11 = (double)(uVar10 & (ulong)dVar16);
            uVar3 = true;
          }
          else {
            uVar3 = dVar9 == dVar16;
            dVar11 = dVar16;
            if ((ulong)dVar9 <= (ulong)dVar16) {
              uVar1 = 0;
              if (dVar9 != 0.0) {
                uVar1 = (ulong)dVar16 / (ulong)dVar9;
              }
              dVar11 = (double)((long)dVar16 - uVar1 * (long)dVar9);
            }
          }
          plVar12 = *(long **)((long)pdVar4[0xb] + (long)dVar11 * 8);
          if (plVar12 != (long *)0x0) {
            do {
              while( true ) {
                plVar12 = (long *)*plVar12;
                if (plVar12 == (long *)0x0) goto code_r0x00010776ae48;
                dVar13 = (double)plVar12[1];
                if (dVar13 != dVar16) break;
                uVar3 = (double)plVar12[2] == dVar16;
                if ((bool)uVar3) {
                  pdVar7 = (double *)plVar12[3];
                  pdVar6 = *(double **)(puVar8 + 0x18);
                  func_0x00010776dc58();
                  param_1 = pdVar5;
                  goto code_r0x00010776ae54;
                }
              }
              if (((ulong)dVar9 & uVar10) == 0) {
                dVar13 = (double)((ulong)dVar13 & uVar10);
              }
              else if ((ulong)dVar9 <= (ulong)dVar13) {
                uVar1 = 0;
                if (dVar9 != 0.0) {
                  uVar1 = (ulong)dVar13 / (ulong)dVar9;
                }
                dVar13 = (double)((long)dVar13 - uVar1 * (long)dVar9);
              }
              uVar3 = dVar13 == dVar11;
            } while ((bool)uVar3);
          }
        }
code_r0x00010776ae48:
        pdVar7 = (double *)pdVar4[0x10];
        pdVar6 = *(double **)(puVar8 + 0x18);
        func_0x00010776dc58();
        param_1 = pdVar5;
      }
      else {
        pdVar7 = (double *)pdVar4[0x10];
        pdVar6 = *(double **)(puVar8 + 0x18);
        func_0x00010776dc58();
        param_1 = pdVar5;
      }
    }
    else {
      pdVar6 = (double *)(puVar2 + -0xb8);
      func_0x00010756dd74(pdVar6);
      func_0x00010756dd30(param_1,pdVar6);
    }
code_r0x00010776ae54:
    func_0x00010776da60();
    func_0x00010776d950(*(undefined8 *)(puVar2 + -0x38));
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    pdVar5 = param_1;
    func_0x00010776da60();
    func_0x00010776da9c();
    *(undefined1 **)(puVar2 + -0xe0) = puVar8;
    *(double **)(puVar2 + -0xd8) = param_1;
    *(undefined1 **)(puVar2 + -0xd0) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -200) = &DAT_10776aeac;
    puVar14 = puVar2 + -0xd0;
    func_0x00010776d99c(extraout_x8_01,pdVar5,pdVar6,pdVar7);
    func_0x00010776e068();
    param_5 = puVar2 + -0x108;
    puVar15 = &UNK_10776aee4;
    puVar2 = puVar2 + -0x110;
    pdVar7 = pdVar6;
    param_4 = puVar8;
    param_3 = pdVar4;
  } while( true );
}



/* Entry: 10776b4bc; end: 10776b647;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10776b4bc(undefined8 param_1,float param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  double dVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  code *pcVar6;
  undefined1 uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 extraout_x8;
  long *plVar16;
  undefined1 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 *extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  uint5 *puVar17;
  long extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  long extraout_x9_02;
  code *extraout_x9_03;
  code *extraout_x9_04;
  ulong uVar18;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulong uVar19;
  uint5 *puVar20;
  uint5 *puVar21;
  long lVar22;
  uint5 *puVar23;
  long lVar24;
  long *plVar25;
  ulong uVar26;
  long *plVar27;
  uint5 *puVar28;
  long *plVar29;
  long *unaff_x28;
  uint5 *puVar30;
  float fVar31;
  long lVar32;
  undefined1 auStack_5c0 [24];
  undefined1 auStack_5a8 [24];
  undefined1 auStack_590 [4];
  undefined1 uStack_58c;
  byte bStack_580;
  undefined1 auStack_570 [8];
  undefined4 uStack_568;
  undefined1 uStack_560;
  undefined1 auStack_558 [24];
  undefined1 auStack_540 [24];
  long *plStack_528;
  long *plStack_520;
  long *plStack_518;
  undefined1 auStack_510 [16];
  byte bStack_500;
  undefined1 auStack_4f8 [8];
  int iStack_4f0;
  undefined1 uStack_4e8;
  uint5 auStack_4e0 [3];
  undefined1 auStack_4c8 [24];
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [16];
  long *plStack_478;
  uint5 uStack_470;
  uint5 *puStack_468;
  long *plStack_460;
  long lStack_458;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
  long lStack_428;
  long alStack_420 [2];
  byte bStack_410;
  long *plStack_400;
  long **pplStack_3f8;
  long *plStack_3f0;
  char cStack_3e8;
  undefined7 uStack_3e7;
  byte bStack_3b8;
  long *plStack_3b0;
  undefined4 uStack_3a8;
  byte bStack_3a0;
  undefined8 uStack_398;
  long alStack_320 [3];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [16];
  byte bStack_2e0;
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  int aiStack_290 [2];
  double adStack_288 [7];
  char cStack_250;
  long alStack_248 [9];
  undefined1 uStack_200;
  undefined1 auStack_1f8 [8];
  double dStack_1f0;
  undefined1 uStack_1e8;
  char cStack_1e0;
  undefined4 uStack_1b8;
  undefined1 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_138 [32];
  undefined8 uStack_118;
  long lStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  int iStack_70;
  undefined8 uStack_68;
  
  lVar22 = param_4;
  func_0x00010776d97c();
  plVar9 = *(long **)(lVar22 + 0x48);
  uStack_68 = extraout_x8;
  func_0x00010776dd20();
  uVar7 = iStack_70 == 1;
  plVar11 = plVar9;
  if ((bool)uVar7) {
    func_0x00010776dd10();
    uVar7 = (int)plVar9[0xd] == 3;
    plVar11 = plVar9;
    if (!(bool)uVar7) goto LAB_10776b560;
    func_0x00010776dd10();
    func_0x00010732393c();
    plVar25 = *(long **)(param_4 + 0x60);
    plVar11 = plVar9;
    if ((plVar25 != (long *)0x0) &&
       (plVar10 = (long *)(param_4 + 0x70), plVar11 = plVar10, *plVar10 != 0)) {
      func_0x00010726364c(plVar10,plVar9);
      uVar26 = (long)plVar25 - 1;
      if (((ulong)plVar25 & uVar26) == 0) {
        plVar27 = (long *)((ulong)plVar10 & uVar26);
        uVar7 = true;
      }
      else {
        uVar7 = plVar10 == plVar25;
        plVar27 = plVar10;
        if (plVar25 <= plVar10) {
          uVar18 = 0;
          if (plVar25 != (long *)0x0) {
            uVar18 = (ulong)plVar10 / (ulong)plVar25;
          }
          plVar27 = (long *)((long)plVar10 - uVar18 * (long)plVar25);
        }
      }
      plVar29 = *(long **)(*(long *)(param_4 + 0x58) + (long)plVar27 * 8);
      plVar11 = plVar10;
      if (plVar29 != (long *)0x0) {
        do {
          while( true ) {
            plVar29 = (long *)*plVar29;
            if (plVar29 == (long *)0x0) goto LAB_10776b5d4;
            plVar16 = (long *)plVar29[1];
            if (plVar10 != plVar16) break;
            plVar11 = plVar29 + 2;
            func_0x000104c32db4(plVar11,plVar9);
            if (((ulong)plVar11 & 1) != 0) goto LAB_10776b5d4;
          }
          if (((ulong)plVar25 & uVar26) == 0) {
            plVar16 = (long *)((ulong)plVar16 & uVar26);
          }
          else if (plVar25 <= plVar16) {
            uVar18 = 0;
            if (plVar25 != (long *)0x0) {
              uVar18 = (ulong)plVar16 / (ulong)plVar25;
            }
            plVar16 = (long *)((long)plVar16 - uVar18 * (long)plVar25);
          }
        } while (plVar16 == plVar27);
        plVar29 = (long *)0x0;
LAB_10776b5d4:
        uVar7 = plVar29 == (long *)0x0;
      }
    }
    uVar15 = *(undefined8 *)(param_7 + 0x18);
    func_0x00010776dc58();
  }
  else {
LAB_10776b560:
    uVar15 = *(undefined8 *)(param_7 + 0x18);
    func_0x00010776dc58();
  }
  func_0x00010776da60();
  func_0x00010776d950(uStack_68);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  plVar9 = plVar11;
  func_0x00010776da60();
  func_0x00010776da9c();
  puStack_f8 = &DAT_10776b648;
  puVar12 = extraout_x8_00;
  lStack_110 = param_7;
  plStack_108 = plVar11;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x00010776d99c();
  func_0x00010776e068();
  puVar14 = auStack_138;
  FUN_10776b4bc();
  func_0x00010776dd18();
  func_0x00010776d950(uStack_118);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010776dd18();
  func_0x00010776da9c();
  plVar11 = alStack_320;
  func_0x00010776d97c();
  alStack_248[0]._0_1_ = 0;
  uStack_200 = 0;
  auStack_2f0[0] = 0;
  bStack_2e0 = 0;
  uStack_1a8 = extraout_x8_01;
  (**(code **)(*plVar9 + 0x70))(aiStack_290,plVar9 + 1);
  uVar7 = cStack_250 == '\x01';
  if (!(bool)uVar7) {
    func_0x00010002b838(auStack_308,&UNK_10f4268ae);
    func_0x00010776d990();
    puVar13 = auStack_308;
    goto code_r0x00010776b8e4;
  }
  uVar7 = aiStack_290[0] + -1 == 6;
  switch(aiStack_290[0] + -1) {
  case 0:
    func_0x00010776d9c4();
    func_0x00010776d990();
    break;
  case 1:
    dStack_1f0 = (double)CONCAT44(dStack_1f0._4_4_,3);
    uStack_1e8 = 1;
    func_0x00010776da78();
    func_0x00010776dc50();
    func_0x000104c2fe00(&dStack_1f0,adStack_288);
    uStack_1b8 = 1;
    uStack_1b0 = 1;
    func_0x00010776da6c();
    goto code_r0x00010776b85c;
  case 2:
    if ((ulong)(long)ABS(adStack_288[0]) >> 0x35 != 0) {
      func_0x00010776dbbc();
      func_0x00010776da18();
      func_0x00010776da04();
      func_0x00010776d990();
code_r0x00010776b8d0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f8);
      puVar13 = auStack_2c0;
      goto code_r0x00010776b8e4;
    }
    uVar7 = adStack_288[0] == (double)(long)adStack_288[0];
    if (!(bool)uVar7) {
      func_0x00010002b838(auStack_2d8,&UNK_10f426990);
      func_0x00010776d990();
      puVar13 = auStack_2d8;
      goto code_r0x00010776b8e4;
    }
    dStack_1f0 = (double)CONCAT44(dStack_1f0._4_4_,1);
    uStack_1e8 = 1;
    func_0x00010776da78();
    func_0x00010776dc50();
    dStack_1f0 = (double)(long)adStack_288[0];
    uStack_1b8 = 0;
    uStack_1b0 = 1;
    func_0x00010776da6c();
    goto code_r0x00010776b85c;
  case 3:
    uVar7 = adStack_288[0] == 0.0;
    dVar1 = (double)-(long)adStack_288[0];
    if (-1 < (long)adStack_288[0]) {
      dVar1 = adStack_288[0];
    }
    if ((ulong)dVar1 >> 0x35 != 0) {
      func_0x00010776dbbc();
      func_0x00010776da18();
      func_0x00010776da04();
      func_0x00010776d990();
      goto code_r0x00010776b8d0;
    }
    dStack_1f0 = (double)CONCAT44(dStack_1f0._4_4_,1);
    uStack_1e8 = 1;
    func_0x00010776da78();
    func_0x00010776dc50();
    dStack_1f0 = adStack_288[0];
    uStack_1b8 = 0;
    uStack_1b0 = 1;
    func_0x00010776da6c();
    goto code_r0x00010776b85c;
  case 4:
    if ((ulong)adStack_288[0] >> 0x35 != 0) {
      func_0x00010776dbbc();
      func_0x00010776da18();
      func_0x00010776da04();
      func_0x00010776d990();
      goto code_r0x00010776b8d0;
    }
    dStack_1f0 = (double)CONCAT44(dStack_1f0._4_4_,1);
    uStack_1e8 = 1;
    func_0x00010776da78();
    func_0x00010776dc50();
    dStack_1f0 = adStack_288[0];
    uStack_1b8 = 0;
    uStack_1b0 = 1;
    func_0x00010776da6c();
code_r0x00010776b85c:
    func_0x00010776cc58(auStack_1f8);
    goto code_r0x00010776b8e8;
  case 5:
    func_0x00010776d9c4();
    func_0x00010776d990();
    break;
  case 6:
    func_0x00010776d9c4();
    func_0x00010776d990();
    break;
  default:
    func_0x00010776d9c4();
    func_0x00010776d990();
  }
  puVar13 = auStack_1f8;
code_r0x00010776b8e4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar13);
code_r0x00010776b8e8:
  if ((bStack_2e0 & 1) == 0) {
code_r0x00010776b954:
    plVar11 = alStack_248;
    func_0x00010776cb44(puVar12);
  }
  else {
    if ((puVar14[0x10] & 1) == 0) {
      func_0x000107570410(puVar14,auStack_2f0);
      goto code_r0x00010776b954;
    }
    func_0x00010756f724(auStack_1f8,puVar14,auStack_2f0);
    uVar7 = cStack_1e0 == '\x01';
    if (!(bool)uVar7) {
      func_0x00010776df40();
      goto code_r0x00010776b954;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (alStack_320,auStack_1f8);
    func_0x00010776d990();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_320);
    *puVar12 = 0;
    puVar12[0x48] = 0;
    func_0x00010776df40();
  }
  func_0x000107267ed0(aiStack_290);
  func_0x0001072c9854(auStack_2f0);
  func_0x00010776cc58();
  func_0x00010776d950(uStack_1a8);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010776cc58(auStack_1f8);
  func_0x000107267ed0(aiStack_290);
  func_0x0001072c9854(auStack_2f0);
  puVar20 = (uint5 *)alStack_248;
  func_0x00010776cc58();
  func_0x00010776da9c();
  puVar28 = puVar20;
  func_0x00010776d99c();
  puVar21 = puVar28 + 1;
  puVar23 = puVar21;
  uStack_398 = extraout_x8_03;
  (**(code **)(*(long *)puVar28 + 0x20))();
  uVar7 = puVar23 == (uint5 *)0x4;
  if (puVar23 < (uint5 *)0x5) {
    func_0x000107878fec(&uStack_470,(long)puVar23 + -1);
    func_0x0001004c3cd0(&plStack_400,&UNK_10f4268d8,&uStack_470);
    func_0x00010048a6c8(auStack_4c8,&plStack_400,&DAT_10f62a9de);
    func_0x00010756a668(plVar11,auStack_4c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4c8);
    func_0x00010776dbd0();
    puVar20 = &uStack_470;
code_r0x00010776bb9c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar20);
    func_0x00010776dc7c();
  }
  else {
    if (((ulong)puVar23 & 1) == 0) {
      func_0x00010002b838(auStack_4e0,&UNK_10f42690f);
      func_0x00010756a668(plVar11,auStack_4e0);
      puVar20 = auStack_4e0;
      goto code_r0x00010776bb9c;
    }
    auStack_4f8[0] = 0;
    uStack_4e8 = 0;
    auStack_510[0] = 0;
    bStack_500 = 0;
    func_0x00010776df38(&plStack_400);
    if ((char)plStack_3f0 == '\x01') {
      func_0x00010776df38(&uStack_470);
      uStack_3a8 = 6;
      puVar28 = &uStack_470;
      func_0x0001074d1ed0(puVar28,&plStack_3b0);
      func_0x0001072c9884(&plStack_3b0);
      func_0x0001072c9854(&uStack_470);
      func_0x0001072c9854(&plStack_400);
      if ((int)puVar28 != 0) {
        func_0x00010776df38();
        func_0x00010756bb10(auStack_510,&plStack_400);
        goto code_r0x00010776bc1c;
      }
    }
    else {
code_r0x00010776bc1c:
      func_0x0001072c9854();
    }
    plStack_528 = (long *)0x0;
    plStack_520 = (long *)0x0;
    plStack_518 = (long *)0x0;
    if (0xccccccccccccccc < (long)puVar23 - 3U) goto code_r0x00010776c804;
    func_0x00010776cc94();
    func_0x00010776de5c();
    plVar25 = (long *)(extraout_x8_04 + extraout_x9 * 0x28);
    _memcpy(plVar25);
    plVar9 = plStack_528;
    plStack_518 = (long *)CONCAT71(uStack_3e7,cStack_3e8);
    plStack_520 = plStack_3f0;
    plStack_528 = plVar25;
    func_0x00010776dcd0(plVar9);
    uVar26 = 2;
    while( true ) {
      puVar28 = (uint5 *)(uVar26 | 1);
      uVar7 = puVar28 == puVar23;
      if (puVar23 <= puVar28) break;
      func_0x00010776dfd8();
      (*extraout_x9_00)(alStack_420,puVar21,uVar26);
      _uStack_470 = 0;
      puStack_468 = (uint5 *)0x0;
      plStack_460 = (long *)0x0;
      iVar8 = (int)alStack_420 + 8;
      (**(code **)(alStack_420[0] + 0x18))();
      if (iVar8 == 0) {
        func_0x00010776de04(&plStack_400,alStack_420);
        bVar5 = bStack_3b8;
        if ((bStack_3b8 & 1) == 0) {
          func_0x00010776dbd8();
        }
        else {
          func_0x00010776df50();
        }
        func_0x00010776cc58(&plStack_400);
        if ((bVar5 & 1) == 0) goto code_r0x00010776c0a8;
      }
      else {
        plVar9 = alStack_420 + 1;
        (**(code **)(alStack_420[0] + 0x20))();
        if (plVar9 == (long *)0x0) {
          func_0x00010002b838(auStack_540,&UNK_10f42693d);
          func_0x00010756a69c(plVar11,auStack_540,uVar26);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_540);
          func_0x00010776dc7c();
code_r0x00010776c0a8:
          func_0x00010776df48();
          func_0x0001072f5f6c(alStack_420);
          goto code_r0x00010776c0b4;
        }
        if ((long *)(((long)plStack_460 - _uStack_470) / 0x48) < plVar9) {
          if ((long *)0x38e38e38e38e38e < plVar9) {
            func_0x00010776cd5c();
            goto code_r0x00010776c828;
          }
          FUN_10776ce24(&plStack_400,plVar9,((long)puStack_468 - _uStack_470) / 0x48,&plStack_460);
          func_0x00010776cd68(&uStack_470,&plStack_400);
          func_0x00010776ce80(&plStack_400);
        }
        unaff_x28 = (long *)0x0;
        while (uVar7 = plVar9 == unaff_x28, !(bool)uVar7) {
          (**(code **)(alStack_420[0] + 0x28))(&plStack_3b0,alStack_420 + 1,unaff_x28);
          func_0x00010776de04(&plStack_400,&plStack_3b0);
          func_0x0001072f5f6c(&plStack_3b0);
          bVar5 = bStack_3b8;
          if ((bStack_3b8 & 1) == 0) {
            func_0x00010776dbd8();
          }
          else {
            func_0x00010776df50();
          }
          func_0x00010776cc58(&plStack_400);
          unaff_x28 = (long *)((long)unaff_x28 + 1);
          if ((bVar5 & 1) == 0) goto code_r0x00010776c0a8;
        }
      }
      func_0x00010776dfd8();
      (*extraout_x9_01)(&plStack_400,puVar21,puVar28);
      func_0x00010756f360(auStack_558,auStack_510);
      auStack_590[0] = 0;
      uStack_58c = 0;
      func_0x00010777067c(&plStack_3b0,plVar11,&plStack_400,puVar28,uVar15,auStack_558,auStack_590);
      func_0x0001072c9854(auStack_558);
      func_0x00010776ddc0();
      bVar5 = bStack_3a0;
      if ((bStack_3a0 & 1) == 0) {
        func_0x00010776dbd8();
      }
      else {
        if ((bStack_500 & 1) == 0) {
          func_0x00010756f300(auStack_510,plStack_3b0 + 2);
        }
        uVar7 = plStack_520 == plStack_518;
        if (plStack_520 < plStack_518) {
          *plStack_520 = 0;
          plStack_520[1] = 0;
          plStack_520[2] = 0;
          func_0x00010776db58();
          plStack_520 = unaff_x28;
        }
        else {
          lVar22 = ((long)plStack_520 - (long)plStack_528) / 0x28;
          uVar18 = lVar22 + 1;
          if (0x666666666666666 < uVar18) {
            func_0x00010776cc88();
            goto code_r0x00010776c828;
          }
          uVar3 = ((long)plStack_518 - (long)plStack_528) / 0x28;
          uVar19 = uVar3 * 2;
          if (uVar19 < uVar18 || uVar19 - uVar18 == 0) {
            uVar19 = uVar18;
          }
          uVar7 = uVar3 == 0x333333333333333;
          if (0x333333333333332 < uVar3) {
            uVar19 = 0x666666666666666;
          }
          func_0x00010776cc94(&plStack_400,uVar19,lVar22,&plStack_518);
          plStack_3f0[1] = 0;
          plStack_3f0[2] = 0;
          *plStack_3f0 = 0;
          func_0x00010776db58();
          func_0x00010776de5c();
          plVar25 = (long *)(extraout_x8_05 + extraout_x9_02 * 0x28);
          _memcpy(plVar25);
          plVar9 = plStack_528;
          plStack_518 = (long *)CONCAT71(uStack_3e7,cStack_3e8);
          plStack_528 = plVar25;
          plStack_520 = unaff_x28;
          func_0x00010776dcd0(plVar9);
          plStack_520 = unaff_x28;
        }
      }
      func_0x0001072c95d0(&plStack_3b0);
      func_0x00010776df48();
      func_0x0001072f5f6c(alStack_420);
      if (bVar5 == 0) goto code_r0x00010776c0b4;
      uVar26 = uVar26 + 2;
    }
    func_0x00010776dfd8();
    (*extraout_x9_03)(&plStack_400,puVar21,1);
    uStack_568 = 6;
    uStack_560 = 1;
    uVar26 = (ulong)_uStack_470 >> 0x28;
    uStack_470._0_4_ = (uint)_uStack_470 & 0xffffff00;
    uStack_470 = (uint5)(uint)uStack_470;
    _uStack_470 = CONCAT35((int3)uVar26,uStack_470);
    func_0x00010777067c(alStack_420,plVar11,&plStack_400,1,uVar15,auStack_570,&uStack_470);
    func_0x0001072c9854(auStack_570);
    func_0x00010776ddc0();
    if ((bStack_410 & 1) == 0) {
      func_0x00010776dc7c();
    }
    else {
      func_0x00010776dfd8();
      (*extraout_x9_04)(&plStack_400,puVar21,(long)puVar23 + -1);
      func_0x00010756f360(auStack_5a8,auStack_510);
      uVar26 = (ulong)_uStack_470 >> 0x28;
      uStack_470._0_4_ = (uint)_uStack_470 & 0xffffff00;
      uStack_470 = (uint5)(uint)uStack_470;
      _uStack_470 = CONCAT35((int3)uVar26,uStack_470);
      func_0x00010777067c(auStack_590,plVar11,&plStack_400,(long)puVar23 + -1,uVar15,auStack_5a8,
                          &uStack_470);
      func_0x0001072c9854(auStack_5a8);
      func_0x00010776ddc0();
      if ((bStack_580 & 1) == 0) {
        func_0x00010776dc7c();
      }
      else {
        pplStack_3f8 = (long **)CONCAT44(pplStack_3f8._4_4_,6);
        plVar9 = (long *)(alStack_420[0] + 0x10);
        func_0x0001074d1ed0(plVar9,&plStack_400);
        func_0x0001072c9884(&plStack_400);
        if ((int)plVar9 != 0) {
          func_0x00010756f724(&plStack_400,auStack_4f8,alStack_420[0] + 0x10);
          uVar7 = cStack_3e8 == '\x01';
          if ((bool)uVar7) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_5c0,&plStack_400);
            func_0x00010756a69c(plVar11,auStack_5c0,1);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5c0);
            func_0x00010776dc7c();
            func_0x00010776df68();
            goto code_r0x00010776c700;
          }
          func_0x00010776df68();
        }
        if (iStack_4f0 == 0) {
          func_0x00010776dbd8();
        }
        else {
          if (iStack_4f0 == 1) {
            func_0x00010776debc();
            plVar25 = plStack_528;
            alStack_420[0] = 0;
            alStack_420[1] = 0;
            plStack_3b0 = plStack_528;
            func_0x00010776daac();
            func_0x00010776e054((long)plVar9 - (long)plVar25);
            func_0x000107546cd0(&uStack_470);
            lVar22 = 2;
            for (; uVar7 = plVar25 == plVar9, !(bool)uVar7; plVar25 = plVar25 + 5) {
              lStack_428 = plVar25[4];
              lStack_430 = plVar25[3];
              if (plVar25[4] != 0) {
                do {
                  func_0x00010776da3c();
                } while (extraout_w10 != 0);
              }
              lVar2 = plVar25[1];
              for (lVar24 = *plVar25; lVar4 = lStack_428, lVar32 = lStack_430, puVar28 = puStack_468
                  , lVar24 != lVar2; lVar24 = lVar24 + 0x48) {
                if (*(int *)(lVar24 + 0x40) != 0) {
                  func_0x00010563ab98();
                  goto code_r0x00010776c828;
                }
                puVar23 = *(uint5 **)(lVar24 + 8);
                if (puStack_468 != (uint5 *)0x0) {
                  uVar26 = 0;
                  if (puStack_468 != (uint5 *)0x0) {
                    uVar26 = (ulong)puVar23 / (ulong)puStack_468;
                  }
                  if (lStack_458 != 0) {
                    uVar18 = (long)puStack_468 - 1;
                    if (((ulong)puStack_468 & uVar18) == 0) {
                      puVar20 = (uint5 *)(uVar18 & (ulong)puVar23);
                    }
                    else {
                      puVar20 = puVar23;
                      if (puStack_468 <= puVar23) {
                        puVar20 = (uint5 *)((long)puVar23 - uVar26 * (long)puStack_468);
                      }
                    }
                    plVar10 = *(long **)(_uStack_470 + (long)puVar20 * 8);
                    if (plVar10 != (long *)0x0) {
                      do {
                        while( true ) {
                          plVar10 = (long *)*plVar10;
                          if (plVar10 == (long *)0x0) goto code_r0x00010776c22c;
                          puVar21 = (uint5 *)plVar10[1];
                          if (puVar21 != puVar23) break;
                          uVar7 = (uint5 *)plVar10[2] == puVar23;
                          if ((bool)uVar7) {
                            func_0x00010776dd38();
                            func_0x00010756a69c(plVar11,&plStack_400,lVar22);
                            func_0x00010776dbd0();
                            func_0x00010776dc7c();
                            func_0x00010776daa4();
                            goto code_r0x00010776c6cc;
                          }
                        }
                        if (((ulong)puStack_468 & uVar18) == 0) {
                          puVar21 = (uint5 *)((ulong)puVar21 & uVar18);
                        }
                        else if (puStack_468 <= puVar21) {
                          uVar19 = 0;
                          if (puStack_468 != (uint5 *)0x0) {
                            uVar19 = (ulong)puVar21 / (ulong)puStack_468;
                          }
                          puVar21 = (uint5 *)((long)puVar21 - uVar19 * (long)puStack_468);
                        }
                      } while (puVar21 == puVar20);
                    }
                  }
code_r0x00010776c22c:
                  uVar18 = (long)puStack_468 - 1;
                  if (((ulong)puStack_468 & uVar18) == 0) {
                    puVar20 = (uint5 *)(uVar18 & (ulong)puVar23);
                  }
                  else {
                    puVar20 = puVar23;
                    if (puStack_468 <= puVar23) {
                      puVar20 = (uint5 *)((long)puVar23 - uVar26 * (long)puStack_468);
                    }
                  }
                  plVar10 = *(long **)(_uStack_470 + (long)puVar20 * 8);
                  if (plVar10 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar10 = (long *)*plVar10;
                        if (plVar10 == (long *)0x0) goto code_r0x00010776c2b0;
                        puVar21 = (uint5 *)plVar10[1];
                        if (puVar21 != puVar23) break;
                        if ((uint5 *)plVar10[2] == puVar23) goto code_r0x00010776c3b0;
                      }
                      if (((ulong)puStack_468 & uVar18) == 0) {
                        puVar21 = (uint5 *)((ulong)puVar21 & uVar18);
                      }
                      else if (puStack_468 <= puVar21) {
                        uVar26 = 0;
                        if (puStack_468 != (uint5 *)0x0) {
                          uVar26 = (ulong)puVar21 / (ulong)puStack_468;
                        }
                        puVar21 = (uint5 *)((long)puVar21 - uVar26 * (long)puStack_468);
                      }
                    } while (puVar21 == puVar20);
                  }
                }
code_r0x00010776c2b0:
                plVar10 = (long *)0x28;
                __Znwm();
                plStack_3f0 = (long *)0x1;
                *plVar10 = 0;
                plVar10[1] = (long)puVar23;
                plVar10[2] = (long)puVar23;
                plVar10[4] = lVar4;
                plVar10[3] = lVar32;
                plStack_400 = plVar10;
                pplStack_3f8 = &plStack_460;
                if (lVar4 != 0) {
                  do {
                    func_0x00010776da3c();
                  } while (extraout_w10_00 != 0);
                }
                fVar31 = (float)lVar32;
                func_0x00010776dff8();
                if ((puVar28 == (uint5 *)0x0) || (param_2 * (float)puVar28 < fVar31)) {
                  func_0x00010776dfe4();
                  func_0x00010776de2c();
                  func_0x000107546cd0(&uStack_470);
                  puVar28 = puStack_468;
                  if (((ulong)puStack_468 & (long)puStack_468 - 1U) == 0) {
                    puVar20 = (uint5 *)((long)puStack_468 - 1U & (ulong)puVar23);
                  }
                  else {
                    puVar20 = puVar23;
                    if (puStack_468 <= puVar23) {
                      uVar26 = 0;
                      if (puStack_468 != (uint5 *)0x0) {
                        uVar26 = (ulong)puVar23 / (ulong)puStack_468;
                      }
                      puVar20 = (uint5 *)((long)puVar23 - uVar26 * (long)puStack_468);
                    }
                  }
                }
                plVar10 = *(long **)(_uStack_470 + (long)puVar20 * 8);
                if (plVar10 == (long *)0x0) {
                  *plStack_400 = (long)plStack_460;
                  plStack_460 = plStack_400;
                  *(long ***)(_uStack_470 + (long)puVar20 * 8) = &plStack_460;
                  if (*plStack_400 != 0) {
                    puVar23 = *(uint5 **)(*plStack_400 + 8);
                    if (((ulong)puVar28 & (long)puVar28 - 1U) == 0) {
                      puVar23 = (uint5 *)((ulong)puVar23 & (long)puVar28 - 1U);
                    }
                    else if (puVar28 <= puVar23) {
                      uVar26 = 0;
                      if (puVar28 != (uint5 *)0x0) {
                        uVar26 = (ulong)puVar23 / (ulong)puVar28;
                      }
                      puVar23 = (uint5 *)((long)puVar23 - uVar26 * (long)puVar28);
                    }
                    *(long **)(_uStack_470 + (long)puVar23 * 8) = plStack_400;
                  }
                }
                else {
                  *plStack_400 = *plVar10;
                  *plVar10 = (long)plStack_400;
                }
                func_0x00010776de14();
                func_0x000107546e6c();
code_r0x00010776c3b0:
              }
              func_0x00010776daa4();
              lVar22 = lVar22 + 2;
            }
            __Znwm(0x90);
            func_0x00010776dde8();
            func_0x000107546edc();
            uStack_438 = uStack_4a8;
            uStack_440 = uStack_4b0;
            uStack_4b0 = 0;
            uStack_4a8 = 0;
            func_0x00010776de44();
            func_0x000107546f28();
            plStack_478 = plVar11;
            func_0x00010776dcb4();
            func_0x0001075470f4(&plStack_400);
            func_0x00010776daa4();
            puVar14 = extraout_x8_02;
            func_0x000107547048(extraout_x8_02,&plStack_478);
            puVar14[0x10] = 1;
            func_0x00010776dfcc();
            if (puVar14 != (undefined1 *)0x0) {
              func_0x00010776da84();
            }
code_r0x00010776c6cc:
            func_0x0001075470f4(&uStack_470);
          }
          else {
            uVar7 = true;
            if ((iStack_4f0 == 2) || (uVar7 = iStack_4f0 == 3, !(bool)uVar7)) {
              *extraout_x8_02 = 0;
              extraout_x8_02[0x10] = 0;
              goto code_r0x00010776c700;
            }
            func_0x00010776debc();
            plVar25 = plStack_528;
            alStack_420[0] = 0;
            alStack_420[1] = 0;
            plStack_3b0 = plStack_528;
            func_0x00010776daac();
            func_0x00010776e054((long)plVar9 - (long)plVar25);
            puVar20 = &uStack_470;
            func_0x0001075473c0();
            lVar22 = 2;
            for (; uVar7 = plVar25 == plVar9, !(bool)uVar7; plVar25 = plVar25 + 5) {
              lStack_428 = plVar25[4];
              lStack_430 = plVar25[3];
              if (plVar25[4] != 0) {
                do {
                  func_0x00010776da3c();
                } while (extraout_w10_01 != 0);
              }
              lVar2 = plVar25[1];
              for (lVar24 = *plVar25; puVar23 = puStack_468, lVar24 != lVar2; lVar24 = lVar24 + 0x48
                  ) {
                if (*(int *)(lVar24 + 0x40) != 1) {
                  func_0x00010563ab98();
                  goto code_r0x00010776c828;
                }
                puVar21 = puVar20;
                if ((puStack_468 != (uint5 *)0x0) && (lStack_458 != 0)) {
                  func_0x00010776ddd8();
                  puVar28 = (uint5 *)((long)puVar23 + -1);
                  if (((ulong)puVar23 & (ulong)puVar28) == 0) {
                    puVar30 = (uint5 *)((ulong)puVar20 & (ulong)puVar28);
                  }
                  else {
                    puVar30 = puVar20;
                    if (puVar23 <= puVar20) {
                      uVar26 = 0;
                      if (puVar23 != (uint5 *)0x0) {
                        uVar26 = (ulong)puVar20 / (ulong)puVar23;
                      }
                      puVar30 = (uint5 *)((long)puVar20 - uVar26 * (long)puVar23);
                    }
                  }
                  plVar10 = *(long **)(_uStack_470 + (long)puVar30 * 8);
                  puVar21 = puVar20;
                  if (plVar10 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar10 = (long *)*plVar10;
                        if (plVar10 == (long *)0x0) goto code_r0x00010776c4f0;
                        puVar17 = (uint5 *)plVar10[1];
                        uVar7 = puVar17 == puVar20;
                        if (!(bool)uVar7) break;
                        func_0x00010776df5c();
                        if ((int)puVar21 != 0) {
                          func_0x00010776dd38();
                          func_0x00010756a69c(plVar11,&plStack_400,lVar22);
                          func_0x00010776dbd0();
                          func_0x00010776dc7c();
                          func_0x00010776daa4();
                          goto code_r0x00010776c738;
                        }
                      }
                      if (((ulong)puVar23 & (ulong)puVar28) == 0) {
                        puVar17 = (uint5 *)((ulong)puVar17 & (ulong)puVar28);
                      }
                      else if (puVar23 <= puVar17) {
                        uVar26 = 0;
                        if (puVar23 != (uint5 *)0x0) {
                          uVar26 = (ulong)puVar17 / (ulong)puVar23;
                        }
                        puVar17 = (uint5 *)((long)puVar17 - uVar26 * (long)puVar23);
                      }
                    } while (puVar17 == puVar30);
                  }
                }
code_r0x00010776c4f0:
                func_0x00010776ddd8();
                puVar23 = puStack_468;
                if (puStack_468 != (uint5 *)0x0) {
                  uVar26 = (long)puStack_468 - 1;
                  if (((ulong)puStack_468 & uVar26) == 0) {
                    puVar28 = (uint5 *)(uVar26 & (ulong)puVar21);
                  }
                  else {
                    puVar28 = puVar21;
                    if (puStack_468 <= puVar21) {
                      uVar18 = 0;
                      if (puStack_468 != (uint5 *)0x0) {
                        uVar18 = (ulong)puVar21 / (ulong)puStack_468;
                      }
                      puVar28 = (uint5 *)((long)puVar21 - uVar18 * (long)puStack_468);
                    }
                  }
                  plVar10 = *(long **)(_uStack_470 + (long)puVar28 * 8);
                  puVar20 = puVar21;
                  if (plVar10 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar10 = (long *)*plVar10;
                        if (plVar10 == (long *)0x0) goto code_r0x00010776c57c;
                        puVar30 = (uint5 *)plVar10[1];
                        if (puVar30 != puVar21) break;
                        func_0x00010776df5c();
                        if (((ulong)puVar20 & 1) != 0) goto code_r0x00010776c68c;
                      }
                      if (((ulong)puVar23 & uVar26) == 0) {
                        puVar30 = (uint5 *)((ulong)puVar30 & uVar26);
                      }
                      else if (puVar23 <= puVar30) {
                        uVar18 = 0;
                        if (puVar23 != (uint5 *)0x0) {
                          uVar18 = (ulong)puVar30 / (ulong)puVar23;
                        }
                        puVar30 = (uint5 *)((long)puVar30 - uVar18 * (long)puVar23);
                      }
                    } while (puVar30 == puVar28);
                  }
                }
code_r0x00010776c57c:
                plVar10 = (long *)0x58;
                __Znwm();
                plStack_3f0 = (long *)0x1;
                puVar20 = (uint5 *)(plVar10 + 2);
                *plVar10 = 0;
                plVar10[1] = (long)puVar21;
                plStack_400 = plVar10;
                pplStack_3f8 = &plStack_460;
                func_0x000104c2fe00(puVar20,lVar24 + 8);
                plVar10[10] = lStack_428;
                plVar10[9] = lStack_430;
                lVar32 = lStack_430;
                if (lStack_428 != 0) {
                  do {
                    func_0x00010776da3c();
                  } while (extraout_w10_02 != 0);
                }
                fVar31 = (float)lVar32;
                func_0x00010776dff8();
                if ((puVar23 == (uint5 *)0x0) || (param_2 * (float)puVar23 < fVar31)) {
                  func_0x00010776dfe4();
                  func_0x00010776de2c();
                  puVar20 = &uStack_470;
                  func_0x0001075473c0();
                  puVar23 = puStack_468;
                  if (((ulong)puStack_468 & (long)puStack_468 - 1U) == 0) {
                    puVar28 = (uint5 *)((long)puStack_468 - 1U & (ulong)puVar21);
                  }
                  else {
                    puVar28 = puVar21;
                    if (puStack_468 <= puVar21) {
                      uVar26 = 0;
                      if (puStack_468 != (uint5 *)0x0) {
                        uVar26 = (ulong)puVar21 / (ulong)puStack_468;
                      }
                      puVar28 = (uint5 *)((long)puVar21 - uVar26 * (long)puStack_468);
                    }
                  }
                }
                plVar10 = *(long **)(_uStack_470 + (long)puVar28 * 8);
                if (plVar10 == (long *)0x0) {
                  *plStack_400 = (long)plStack_460;
                  plStack_460 = plStack_400;
                  *(long ***)(_uStack_470 + (long)puVar28 * 8) = &plStack_460;
                  if (*plStack_400 != 0) {
                    puVar21 = *(uint5 **)(*plStack_400 + 8);
                    if (((ulong)puVar23 & (long)puVar23 - 1U) == 0) {
                      puVar21 = (uint5 *)((ulong)puVar21 & (long)puVar23 - 1U);
                    }
                    else if (puVar23 <= puVar21) {
                      uVar26 = 0;
                      if (puVar23 != (uint5 *)0x0) {
                        uVar26 = (ulong)puVar21 / (ulong)puVar23;
                      }
                      puVar21 = (uint5 *)((long)puVar21 - uVar26 * (long)puVar23);
                    }
                    *(long **)(_uStack_470 + (long)puVar21 * 8) = plStack_400;
                  }
                }
                else {
                  *plStack_400 = *plVar10;
                  *plVar10 = (long)plStack_400;
                }
                func_0x00010776de14();
                func_0x00010754755c();
code_r0x00010776c68c:
              }
              func_0x00010776daa4();
              lVar22 = lVar22 + 2;
            }
            __Znwm(0x90);
            func_0x00010776dde8();
            func_0x0001075475cc();
            uStack_438 = uStack_4a8;
            uStack_440 = uStack_4b0;
            uStack_4b0 = 0;
            uStack_4a8 = 0;
            func_0x00010776de44();
            func_0x000107547618();
            plStack_478 = plVar11;
            func_0x00010776dcb4();
            func_0x0001075477d8(&plStack_400);
            func_0x00010776daa4();
            puVar14 = extraout_x8_02;
            func_0x00010754772c(extraout_x8_02,&plStack_478);
            extraout_x8_02[0x10] = 1;
            func_0x00010776dfcc();
            if (puVar14 != (undefined1 *)0x0) {
              func_0x00010776da84();
            }
code_r0x00010776c738:
            func_0x0001075477d8(&uStack_470);
          }
          func_0x0001072c9b9c(&uStack_4b0);
          func_0x00010776d06c(&plStack_3b0);
          func_0x0001072c9b9c(auStack_4a0);
          func_0x0001072c9884(auStack_488);
        }
      }
code_r0x00010776c700:
      func_0x0001072c95d0(auStack_590);
    }
    func_0x0001072c95d0(alStack_420);
code_r0x00010776c0b4:
    func_0x00010776d06c(&plStack_528);
    func_0x0001072c9854(auStack_510);
    func_0x0001072c9854(auStack_4f8);
  }
  func_0x00010776d950(uStack_398);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010776c804:
  func_0x00010776cc88();
code_r0x00010776c828:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10776c82c);
  (*pcVar6)();
}



/* Entry: 10776cbf4; end: 10776cc3f;  */

void FUN_10776cbf4(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1109d5e10)[*(uint *)(param_1 + 0x38)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 10776ce24; end: 10776ce7f;  */

long * FUN_10776ce24(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong unaff_x20;
  long lVar2;
  
  func_0x00010776dc08();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    if (0x38e38e38e38e38e < unaff_x20) {
      func_0x000104bd35f4();
      lVar2 = param_1[1];
      while (lVar1 = param_1[2], lVar2 != lVar1) {
        param_1[2] = lVar1 + -0x48;
        FUN_10776cbf4(lVar1 + -0x40);
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    func_0x00010776df18(unaff_x20 * 9);
  }
  func_0x00010776de74(0x48);
  return param_1;
}



/* Entry: 10776d0d4; end: 10776d1d7;  */

void FUN_10776d0d4(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar4;
  long lStack_60;
  
  func_0x00010776dc08();
  func_0x00010776e020();
  do {
    if (param_2 == 0) {
      return;
    }
    plVar1 = unaff_x21;
    if ((unaff_x21 == (long *)*unaff_x19) || (func_0x00010002c810(), plVar1[4] < unaff_x20[2])) {
      if (*unaff_x21 != 0) {
        plVar1 = plVar1 + 1;
        goto LAB_10776d14c;
      }
LAB_10776d160:
      lVar2 = 0x38;
      __Znwm();
      *(long *)(lVar2 + 0x20) = unaff_x20[2];
      lVar3 = unaff_x20[4];
      uVar4 = unaff_x20[3];
      *(long *)(lVar2 + 0x30) = unaff_x20[4];
      *(undefined8 *)(lVar2 + 0x28) = uVar4;
      lStack_60 = lVar2;
      if (lVar3 != 0) {
        do {
          func_0x00010776da3c();
        } while (extraout_w10 != 0);
      }
      func_0x000107546c3c();
      lStack_60 = 0;
      func_0x000107546c64(&lStack_60);
    }
    else {
      plVar1 = unaff_x19;
      func_0x000107546bf0();
LAB_10776d14c:
      if (*plVar1 == 0) goto LAB_10776d160;
    }
    unaff_x20 = (long *)*unaff_x20;
    param_2 = (long)unaff_x20;
  } while( true );
}



/* Entry: 10776d3a8; end: 10776d3f3;  */

void FUN_10776d3a8(void)

{
  long unaff_x19;
  
  func_0x00010776dae8();
  *(undefined4 *)(unaff_x19 + 0x70) = 0;
  *(undefined4 *)(unaff_x19 + 0x78) = 1;
  return;
}



/* Entry: 10776d4cc; end: 10776d4f7;  */

void FUN_10776d4cc(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010776dec8();
  *param_1 = &PTR_DAT_1109d5f60;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 10776d6a4; end: 10776d6ef;  */

void FUN_10776d6a4(void)

{
  long unaff_x19;
  
  func_0x00010776dae8();
  *(undefined4 *)(unaff_x19 + 0x70) = 0;
  *(undefined4 *)(unaff_x19 + 0x78) = 1;
  return;
}



/* Entry: 10776d7d0; end: 10776d7f7;  */

void FUN_10776d7d0(undefined8 param_1)

{
  func_0x00010776dcbc();
  func_0x00010776dc00(param_1,&PTR_DAT_1109d6140);
  func_0x00010776da2c();
  return;
}



/* Entry: 10776e0dc; end: 10776e417;  */

void FUN_10776e0dc(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 extraout_x8;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1d8 [56];
  undefined1 auStack_1a0 [120];
  int iStack_128;
  undefined1 auStack_120 [56];
  undefined8 auStack_e8 [15];
  int iStack_70;
  undefined8 uStack_68;
  
  lVar2 = param_2;
  func_0x00010776f478();
  uStack_68 = extraout_x8;
  FUN_107753050(auStack_e8,*(undefined8 *)(lVar2 + 0x48));
  uVar1 = iStack_70 == 1;
  if (!(bool)uVar1) {
    func_0x00010756dd74(auStack_e8);
    func_0x00010776f4b4();
    goto LAB_10776e338;
  }
  puVar3 = auStack_e8;
  func_0x0001073405dc();
  func_0x00010757fc08();
  uVar7 = *puVar3;
  func_0x000104c2f64c(auStack_120);
  if (*(long *)(param_2 + 0x58) == 0) {
LAB_10776e1a8:
    func_0x000104c2f64c(auStack_1d8);
    if (*(long *)(param_2 + 0x68) == 0) {
LAB_10776e204:
      pdVar4 = *(double **)(param_2 + 0x78);
      if (pdVar4 == (double *)0x0) {
        iVar6 = 0;
      }
      else {
        func_0x00010776f444();
        iVar5 = iStack_128;
        if (iStack_128 == 1) {
          func_0x00010776f4e4();
          func_0x00010757fc08();
          iVar6 = (int)*pdVar4;
        }
        else {
          func_0x00010776f4ec();
          func_0x00010776f4b4();
          iVar6 = 0;
        }
        func_0x00010776f454();
        uVar1 = iVar5 == 1;
        if (!(bool)uVar1) goto LAB_10776e32c;
      }
      pdVar4 = *(double **)(param_2 + 0x88);
      if (pdVar4 == (double *)0x0) {
        iVar5 = 3;
      }
      else {
        func_0x00010776f444();
        if (iStack_128 == 1) {
          func_0x00010776f4e4();
          func_0x00010757fc08();
          iVar5 = (int)*pdVar4;
        }
        else {
          func_0x00010776f4ec();
          func_0x00010776f4b4();
          iVar5 = 3;
        }
        func_0x00010776f454();
        uVar1 = iStack_128 == 1;
        if (!(bool)uVar1) goto LAB_10776e32c;
      }
      uStack_210 = 0;
      uStack_208 = 0;
      uStack_200 = 0;
      func_0x00010724ef84(auStack_228,auStack_120);
      func_0x00010724ef84(auStack_240,auStack_1d8);
      func_0x0001078bbbac(auStack_1a0,uVar7,auStack_228,auStack_240,iVar6,iVar5);
      func_0x000100066230(&uStack_210,auStack_1a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_240);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_228);
      func_0x0001072625b4(auStack_1a0,&uStack_210);
      func_0x00010756de48(param_1 + 8,auStack_1a0);
      func_0x000104c2f714(auStack_1a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_210);
    }
    else {
      func_0x00010776f444();
      iVar6 = iStack_128;
      if (iStack_128 == 1) {
        func_0x00010776f4e4();
        func_0x0001077760fc(&uStack_210);
        func_0x000104c2f1f0(auStack_1d8,&uStack_210);
        func_0x000104c2f714(&uStack_210);
      }
      else {
        func_0x00010776f4ec();
        func_0x00010776f4b4();
      }
      func_0x00010776f454();
      uVar1 = iVar6 == 1;
      if ((bool)uVar1) goto LAB_10776e204;
    }
LAB_10776e32c:
    func_0x00010776f50c();
  }
  else {
    func_0x00010776f444();
    iVar6 = iStack_128;
    if (iStack_128 == 1) {
      func_0x00010776f4e4();
      func_0x0001077760fc(auStack_1d8);
      func_0x000104c2f1f0(auStack_120,auStack_1d8);
      func_0x00010776f50c();
    }
    else {
      func_0x00010776f4ec();
      func_0x00010776f4b4();
    }
    func_0x00010776f454();
    uVar1 = iVar6 == 1;
    if ((bool)uVar1) goto LAB_10776e1a8;
  }
  func_0x000104c2f714(auStack_120);
LAB_10776e338:
  func_0x00010776f500();
  func_0x00010776f430(uStack_68);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010776f50c();
  func_0x000104c2f714(auStack_120);
  func_0x00010776f500();
  do {
    func_0x00010776f4d4();
  } while( true );
}



/* Entry: 10776f37c; end: 10776f38f;  */

void FUN_10776f37c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10776fa08; end: 10776fa9f;  */

undefined *** FUN_10776fa08(long *param_1,undefined ***param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  char *pcVar8;
  uint extraout_w8;
  int iVar9;
  uint extraout_w8_00;
  uint extraout_w8_01;
  undefined ***unaff_x21;
  undefined ***unaff_x22;
  undefined ***pppuVar10;
  long lVar11;
  undefined1 auStack_160 [16];
  undefined **ppuStack_150;
  undefined1 *puStack_148;
  undefined ***pppuStack_138;
  undefined ***pppuStack_110;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  undefined1 uStack_d1;
  undefined **ppuStack_d0;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  undefined1 *puStack_40;
  undefined ***pppuStack_30;
  
  plVar4 = param_1;
  func_0x00010777006c();
  func_0x00010776fdfc();
  if (((ulong)plVar4 & 1) == 0) {
    uStack_49 = 0;
    puStack_40 = &uStack_49;
    ppuStack_48 = &PTR_FUN_1109d62d8;
    pppuStack_30 = &ppuStack_48;
    param_2 = &ppuStack_48;
    func_0x0001077700d8(*(undefined8 *)(*param_1 + 0x10));
    func_0x00010745df78();
    uVar2 = uStack_49;
  }
  else {
    uVar2 = 1;
  }
  func_0x000107770090(uVar2);
  if ((bool)in_ZR) {
    return (undefined ***)(ulong)(extraout_w8 & 1);
  }
  ___stack_chk_fail();
  pppuVar5 = &ppuStack_48;
  func_0x00010745df78();
  func_0x0001077700b0();
  puStack_58 = &SUB_10776faa0;
  pppuVar6 = pppuVar5;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010777006c();
  iVar9 = *(int *)(pppuVar6 + 1);
  pppuVar10 = unaff_x22;
  if (iVar9 == 1) {
    lVar11 = 0x30;
    uVar2 = 1;
    unaff_x21 = param_2;
    do {
      if (lVar11 == 0) {
        iVar9 = *(int *)(pppuVar5 + 1);
        pppuVar10 = unaff_x22;
        goto code_r0x00010776fb14;
      }
      func_0x00010777013c();
      unaff_x22 = &ppuStack_d0;
      func_0x000107283140(unaff_x22,unaff_x21);
      pppuVar6 = unaff_x22;
      func_0x0001077700b8();
      unaff_x21 = unaff_x21 + 3;
      lVar11 = lVar11 + -0x18;
    } while (((ulong)unaff_x22 & 1) == 0);
code_r0x00010776fb40:
    pppuVar10 = unaff_x22;
    uVar3 = 0;
  }
  else {
code_r0x00010776fb14:
    uVar2 = iVar9 == 0x25;
    if ((bool)uVar2) {
      unaff_x22 = (undefined ***)0x30;
      unaff_x21 = param_2;
      do {
        pppuVar10 = (undefined ***)0x0;
        if (unaff_x22 == (undefined ***)0x0) goto code_r0x00010776fb48;
        pppuVar6 = pppuVar5;
        func_0x0001077230d0(pppuVar5,unaff_x21);
        unaff_x21 = unaff_x21 + 3;
        unaff_x22 = unaff_x22 + -3;
      } while (((ulong)pppuVar6 & 1) == 0);
      goto code_r0x00010776fb40;
    }
code_r0x00010776fb48:
    uStack_d1 = 1;
    puStack_c8 = &uStack_d1;
    ppuStack_d0 = &PTR_DAT_1109d6358;
    pppuStack_b8 = &ppuStack_d0;
    pppuStack_c0 = param_2;
    func_0x0001077700d8((*pppuVar5)[2]);
    func_0x0001077700c0();
    uVar3 = uStack_d1;
  }
  func_0x000107770090(uVar3);
  if ((bool)uVar2) {
    return (undefined ***)(ulong)(extraout_w8_00 & 1);
  }
  ___stack_chk_fail();
  pppuVar7 = pppuVar6;
  func_0x0001077700c0();
  func_0x0001077700b0();
  puStack_e8 = &UNK_10776fbd0;
  pppuVar5 = pppuVar7;
  pppuStack_110 = pppuVar10;
  pppuStack_108 = unaff_x21;
  pppuStack_100 = param_2;
  pppuStack_f8 = pppuVar6;
  ppuStack_f0 = &puStack_60;
  func_0x00010777006c();
  uVar1 = *(int *)(pppuVar5 + 1) - 1U >> 2 | (*(int *)(pppuVar5 + 1) - 1U) * 0x40000000;
  uVar3 = uVar1 == 9;
  uVar2 = 0;
  switch(uVar1) {
  case 0:
    func_0x00010777013c();
    pcVar8 = "error";
    pppuVar5 = &ppuStack_150;
    func_0x000107278484(pppuVar5,"error");
    if (((ulong)pppuVar5 & 1) != 0) {
code_r0x00010776fc40:
      func_0x0001077700b8();
      uVar2 = 0;
      goto code_r0x00010776fcc0;
    }
    pppuVar5 = pppuVar7;
    func_0x00010776fdfc();
    if (((ulong)pppuVar5 & 1) == 0) {
      pppuVar5 = &ppuStack_150;
      func_0x000107264c5c();
      FUN_10772cf1c(pppuVar7);
      func_0x00010772cd44(pppuVar5,pcVar8,auStack_160);
      if (((ulong)pppuVar5 & 1) == 0) goto code_r0x00010776fc40;
    }
    func_0x0001077700b8();
    break;
  case 2:
  case 5:
  case 9:
    goto code_r0x00010776fcc0;
  }
  auStack_160[0] = 1;
  ppuStack_150 = &PTR_DAT_1109d6258;
  pppuStack_138 = &ppuStack_150;
  puStack_148 = auStack_160;
  func_0x0001077700d8((*pppuVar7)[2]);
  func_0x0001077700c0();
  uVar2 = auStack_160[0];
code_r0x00010776fcc0:
  func_0x000107770090(uVar2);
  if ((bool)uVar3) {
    return (undefined ***)(ulong)(extraout_w8_01 & 1);
  }
  ___stack_chk_fail();
  func_0x0001077700b8();
  func_0x0001077700b0();
  return pppuVar5;
}



/* Entry: 10776fdb8; end: 10776fdfb;  */

void FUN_10776fdb8(undefined8 *param_1,ulong param_2)

{
  if ((*(char *)*param_1 == '\x01') && (func_0x00010776faa0(param_2,param_1[1]), (param_2 & 1) == 0)
     ) {
    *(undefined1 *)*param_1 = 0;
  }
  return;
}



/* Entry: 10776ffa4; end: 10776ffab;  */

void FUN_10776ffa4(void)

{
  return;
}



/* Entry: 107770440; end: 10777067b;  */

undefined1 *
FUN_107770440(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  undefined ***pppuVar2;
  int iVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *puVar4;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined1 auStack_208 [24];
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [81];
  undefined1 uStack_127;
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [54];
  char cStack_62;
  undefined1 uStack_61;
  undefined **ppuStack_60;
  undefined1 *puStack_58;
  char *pcStack_50;
  undefined ***pppuStack_48;
  undefined8 uStack_28;
  
  func_0x000107771b50();
  iVar3 = (int)param_1[1];
  uVar1 = 1;
  uStack_28 = extraout_x8;
  if (iVar3 == 9) {
LAB_1077704a4:
    puVar4 = (undefined1 *)0x0;
  }
  else {
    uVar1 = iVar3 == 1;
    if ((bool)uVar1) {
      (**(code **)(*param_1 + 0x40))(&ppuStack_60,param_1);
      pppuVar2 = &ppuStack_60;
      func_0x000107278484(pppuVar2,"error");
      func_0x000104c2f714();
      if (((ulong)pppuVar2 & 1) != 0) goto LAB_1077704a4;
      iVar3 = (int)param_1[1];
    }
    uStack_61 = iVar3 == 0xb || iVar3 == 5;
    cStack_62 = '\x01';
    puStack_58 = &uStack_61;
    ppuStack_60 = &PTR_FUN_1109d67f8;
    pcStack_50 = &cStack_62;
    pppuStack_48 = &ppuStack_60;
    (**(code **)(*param_1 + 0x10))(param_1,&ppuStack_60);
    iVar3 = (int)&ppuStack_60;
    func_0x00010745df78();
    puVar4 = (undefined1 *)0x0;
    uVar1 = cStack_62 == '\x01';
    if ((((bool)uVar1) && ((*(byte *)(param_1 + 4) & 1) != 0)) &&
       ((*(byte *)((long)param_1 + 0x24) & 1) != 0)) {
      func_0x00010002b838();
      func_0x000107771bf8();
      func_0x000107771c30();
      if (iVar3 == 0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = auStack_98;
        func_0x00010002b838(puVar4,&DAT_10f34b835);
        iVar3 = (int)puVar4;
        func_0x000107771bf8();
        func_0x000107771c30();
        if (iVar3 == 0) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          puVar4 = auStack_c8;
          func_0x00010002b838(puVar4,&DAT_10f34b835);
          func_0x000107771bf8();
          func_0x000107771c30();
          func_0x00010776ff70(auStack_c8);
        }
        func_0x00010776ff70(auStack_98);
      }
      func_0x00010776ff70();
    }
  }
  func_0x000107771b24(uStack_28);
  if ((bool)uVar1) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010776ff70(auStack_c8);
  func_0x00010776ff70(auStack_98);
  pppuVar2 = &ppuStack_60;
  func_0x00010776ff70();
  func_0x000107771b48();
  func_0x000100456794(auStack_1c0);
  func_0x000107878fec(auStack_1d8,param_3);
  func_0x00010533a9c0(auStack_1a8,auStack_1c0,auStack_1d8);
  func_0x00010048a6c8(auStack_190,auStack_1a8,&UNK_10f426c9a);
  ppuStack_1e8 = pppuVar2[9];
  ppuStack_1f0 = pppuVar2[8];
  if (pppuVar2[9] != (undefined **)0x0) {
    do {
      func_0x000107771b38();
    } while (extraout_w10 != 0);
  }
  func_0x000107771650(auStack_208,param_5);
  ppuStack_218 = pppuVar2[7];
  ppuStack_220 = pppuVar2[6];
  if (pppuVar2[7] != (undefined **)0x0) {
    do {
      func_0x000107771b38();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107771c28(auStack_178,auStack_190,&ppuStack_1f0,auStack_208,&ppuStack_220);
  func_0x0001072c9830(&ppuStack_220);
  func_0x000107771c44();
  func_0x000107771c14();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_190);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
  uStack_127 = 0;
  puVar4 = auStack_178;
  func_0x000107771b68(puVar4);
  func_0x000107771bbc();
  return puVar4;
}



/* Entry: 1077713b4; end: 107771557;  */

void FUN_1077713b4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int extraout_w8;
  undefined1 *puVar2;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  int iStack_70;
  byte bStack_68;
  long lStack_60;
  long lStack_58;
  byte bStack_50;
  uint uStack_48;
  undefined1 uStack_44;
  
  puVar2 = auStack_d0;
  uStack_48 = uStack_48 & 0xffffff00;
  uStack_44 = 0;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    uStack_98 = 3;
    lVar1 = param_2 + 0x18;
    func_0x00010745de74(lVar1,auStack_a0);
    func_0x0001072c9884(auStack_a0);
    if ((int)lVar1 != 0) {
      uStack_48 = 0;
      uStack_44 = 1;
    }
  }
  func_0x0001077707e8(&lStack_60,param_2,param_3,param_4,&uStack_48);
  if ((bStack_50 & 1) == 0) {
    func_0x000107771b98();
    goto LAB_1077714d4;
  }
  if ((*(byte *)(lStack_60 + 0x25) & 1) == 0) {
    *(undefined1 *)(param_1 + 2) = 0;
LAB_107771490:
    *param_1 = lStack_60;
    param_1[1] = lStack_58;
    lStack_60 = 0;
    lStack_58 = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    func_0x00010775719c(auStack_a0);
    if ((bStack_68 & 1) == 0) {
      func_0x00010002b838(auStack_b8,&UNK_10f426d6b);
      puVar2 = auStack_b8;
      func_0x000107771b60();
    }
    else {
      if (iStack_70 != 2) {
        func_0x000107771c0c();
        func_0x000107771b98(bStack_50);
        if (extraout_w8 != 1) goto LAB_1077714d4;
        goto LAB_107771490;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_d0,auStack_a0);
      func_0x000107771b60();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
    func_0x000107771b98();
    func_0x000107771c0c();
  }
LAB_1077714d4:
  func_0x0001072c95d0(&lStack_60);
  return;
}



/* Entry: 107771830; end: 107771837;  */

void FUN_107771830(void)

{
  return;
}



/* Entry: 107771a24; end: 107771a4f;  */

undefined8 * FUN_107771a24(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x555555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d6878;
  func_0x000107771ab8(param_1 + 3);
  return param_1;
}



/* Entry: 107771dd0; end: 107771fd7;  */

void FUN_107771dd0(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  double adStack_f0 [7];
  undefined1 auStack_b8 [120];
  int iStack_40;
  undefined8 uStack_38;
  
  lVar4 = param_2;
  func_0x000107772bc8();
  uStack_38 = extraout_x8;
  FUN_107753050(auStack_b8,*(undefined8 *)(lVar4 + 0x48));
  uVar1 = iStack_40 == 1;
  if ((bool)uVar1) {
    fVar2 = SUB84(auStack_b8,0);
    func_0x00010727f7dc();
    func_0x000107776fc4();
    uVar1 = !NAN(fVar2) && !NAN(fVar2);
    if (NAN(fVar2)) goto LAB_107771f04;
    if (*(long *)(param_2 + 0x68) == 0) {
      if ((bRam0000000113726240 & 1) == 0) {
        iVar3 = 0x13726240;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          func_0x000100060964(0x113726280,&UNK_10f426f0e);
          ___cxa_guard_release(0x113726240);
        }
      }
      uVar7 = 0x113726280;
      goto LAB_107771ea4;
    }
    adStack_f0[0] = (double)fVar2;
    lVar4 = param_2 + 0x58;
    func_0x0001077648c8(lVar4,adStack_f0);
    lVar6 = param_2 + 0x60;
    uVar1 = lVar6 == lVar4;
    if ((bool)uVar1) {
      func_0x00010002c810();
      func_0x000107772bb8(*(undefined8 *)(lVar6 + 0x28));
    }
    else {
      uVar1 = *(long *)(param_2 + 0x58) == lVar4;
      if ((bool)uVar1) {
        func_0x000107772bb8(*(undefined8 *)(*(long *)(param_2 + 0x58) + 0x28));
      }
      else {
        func_0x0001077648c0();
        func_0x000107772bb8(*(undefined8 *)(lVar4 + 0x28));
      }
    }
  }
  else {
    puVar5 = auStack_b8;
    func_0x00010756dd74(puVar5);
    func_0x00010756dd30(param_1,puVar5);
  }
  while( true ) {
    func_0x000107772bf0();
    func_0x000107772b94(uStack_38);
    if ((bool)uVar1) break;
    ___stack_chk_fail();
LAB_107771f04:
    if ((bRam0000000113726238 & 1) == 0) {
      iVar3 = 0x13726238;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        func_0x000100060964(0x113726248,&UNK_10f41c20a);
        ___cxa_guard_release(0x113726238);
      }
    }
    uVar7 = 0x113726248;
LAB_107771ea4:
    func_0x000104c2fe00(adStack_f0,uVar7);
    func_0x00010756c0ec(param_1,adStack_f0);
    func_0x000107772c10();
  }
  return;
}



/* Entry: 107772aa0; end: 107772b2b;  */

long * FUN_107772aa0(long *param_1)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long *plVar2;
  long alStack_60 [7];
  undefined8 uStack_28;
  
  plVar2 = alStack_60;
  func_0x000107772bc8();
  uVar1 = (int)param_1[1] == 1;
  uStack_28 = extraout_x8;
  if ((bool)uVar1) {
    (**(code **)(*param_1 + 0x40))(alStack_60);
    func_0x000107278484(alStack_60,&DAT_10f34b835);
    param_1 = plVar2;
    func_0x000107772c10();
  }
  else {
    plVar2 = (long *)0x0;
  }
  func_0x000107772b94(uStack_28);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x000107772c10();
  func_0x000107772be0();
  *param_1 = (long)&PTR_DAT_1109d68c8;
  func_0x000107545fd8(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = (long)&PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107773244; end: 107773277;  */

/* WARNING: Possible PIC construction at 0x000107773260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107773264) */

long * FUN_107773244(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_2 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48(0,*(undefined8 *)(param_1 + 0x48));
  plVar2 = (long *)plVar1[3];
  if (plVar2 == plVar1) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 107773d28; end: 107773dab;  */

long * FUN_107773d28(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 8) == 0x1b) {
    plVar1 = *(long **)(param_1 + 0x48);
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_2 + 0x48));
    if ((int)plVar1 != 0) {
      lVar2 = param_1 + 0x58;
      func_0x000104c32db4(lVar2,param_2 + 0x58);
      if ((int)lVar2 != 0) {
        lVar2 = param_1 + 0x90;
        func_0x000104c32db4(lVar2,param_2 + 0x90);
        if ((int)lVar2 != 0) {
          plVar1 = *(long **)(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x000107773d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_2 + 200));
          return plVar1;
        }
      }
    }
  }
  return (long *)0x0;
}



/* Entry: 107773ee0; end: 107773f1b;  */

void FUN_107773ee0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_DAT_1109d6a58;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  return;
}



/* Entry: 107774748; end: 10777477f;  */

void FUN_107774748(long param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  puRam00000001137262c0 = &UNK_10e52b660;
  puRam00000001137262c8 = (undefined1 *)0x0;
  uRam00000001137262d0 = 0;
  uRam00000001137262d8 = 0;
  if (param_1 != 0) {
    uRam00000001137262d0 = 0xffffffffffffffff >> (LZCOUNT(param_1) & 0x3fU);
    uVar2 = uRam00000001137262d0 + 0x17 & 0xfffffffffffffff8;
    puVar1 = &uStack_21;
    func_0x000100063148(puVar1,uVar2 + uRam00000001137262d0 * 0x20);
    puRam00000001137262c0 = puVar1 + 8;
    puRam00000001137262c8 = puVar1 + uVar2;
    func_0x0001000631d0(0x1137262c0,0x20);
    return;
  }
  return;
}



/* Entry: 107774c38; end: 107774d9f;  */

/* WARNING: Possible PIC construction at 0x000107774cec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107774cf0) */

long FUN_107774c38(long param_1,double param_2,double param_3,double param_4,double param_5,
                  long param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((((255.0 < param_4) || (param_4 < 0.0)) || (255.0 < param_3)) ||
     (((param_2 < 0.0 || (255.0 < param_2)) || (param_3 < 0.0)))) {
    func_0x0001077749c8(auStack_a8);
    func_0x000107774dcc();
    func_0x000107774de0();
  }
  else {
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (0.0 <= param_5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_5)) {
        bVar1 = param_5 < 1.0;
        bVar2 = param_5 == 1.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      *(ulong *)(param_1 + 0x10) = CONCAT44((float)param_5,(float)((param_4 / 255.0) * param_5));
      *(ulong *)(param_1 + 8) =
           CONCAT44((float)((param_3 / 255.0) * param_5),(float)((param_2 / 255.0) * param_5));
      *(undefined4 *)(param_1 + 0x40) = 1;
      func_0x000107774dec(uStack_28);
      if (bVar2) {
        return param_6;
      }
      ___stack_chk_fail();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
      __Unwind_Resume();
      goto code_r0x000107774da0;
    }
    func_0x0001077749c8(auStack_a8);
    func_0x000107774dcc();
    func_0x000107774de0();
  }
  func_0x0001072625b4(auStack_60,auStack_78);
  param_6 = param_1;
code_r0x000107774da0:
  func_0x000104c318bc(param_6 + 8);
  *(undefined4 *)(param_6 + 0x40) = 0;
  return param_6;
}



/* Entry: 1077751c8; end: 107775203;  */

void FUN_1077751c8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010777d5d0();
  func_0x00010777d700();
  FUN_107777824(param_1,param_2,3);
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 1077753a4; end: 1077753db;  */

void FUN_1077753a4(void)

{
  func_0x00010777d738();
  func_0x0001077753c0();
  return;
}



/* Entry: 10777566c; end: 107775703;  */

void FUN_10777566c(void)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x21;
  long lVar3;
  undefined1 auStack_b8 [112];
  undefined8 uStack_48;
  
  func_0x00010777db88();
  func_0x00010777d250();
  uStack_48 = extraout_x8;
  func_0x00010777d860();
  func_0x00010777dda8();
  lVar1 = ((long *)*unaff_x21)[1];
  for (lVar3 = *(long *)*unaff_x21; uVar2 = lVar3 == lVar1, !(bool)uVar2; lVar3 = lVar3 + 0x40) {
    func_0x00010777dcd4(auStack_b8);
    func_0x0001077765a4();
    func_0x00010777d7d8();
    func_0x00010777d660();
  }
  func_0x00010777d83c();
  func_0x00010777d9b8();
  func_0x00010777d23c(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d9b8();
  func_0x00010777d638();
  func_0x00010777d428();
  func_0x000107775720();
  return;
}



/* Entry: 107775b6c; end: 107775b9b;  */

void FUN_107775b6c(void)

{
  func_0x00010777d3b8(3);
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 1077762ac; end: 10777630b;  */

void FUN_1077762ac(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  
  uVar2 = *(uint *)(param_2 + 0x68);
  if (uVar2 < 4) {
    puVar3 = (&PTR_DAT_1109d6b88)[uVar2];
  }
  else {
    puVar3 = &UNK_10f4271a1;
    if (uVar2 != 7) {
      puVar3 = &UNK_10f427199;
    }
    puVar1 = &DAT_10f42718c;
    if (uVar2 != 6) {
      puVar1 = puVar3;
    }
    puVar3 = &UNK_10f427193;
    if (uVar2 != 4) {
      puVar3 = puVar1;
    }
  }
  func_0x00010002b82c(param_1,puVar3);
  func_0x000107c613d0(puVar3);
  func_0x000107c60c50();
  return;
}



/* Entry: 10777713c; end: 1077772a7;  */

void FUN_10777713c(long param_1,undefined8 *param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined1 extraout_w8;
  undefined1 uVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined1 auStack_358 [24];
  undefined8 *puStack_340;
  undefined4 uStack_338;
  undefined1 uStack_334;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined1 ***pppuStack_320;
  undefined *puStack_318;
  undefined8 *puStack_310;
  undefined8 auStack_300 [4];
  undefined8 auStack_2e0 [8];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  byte bStack_260;
  undefined8 uStack_258;
  undefined1 **ppuStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 auStack_1c8 [15];
  undefined1 *puStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined8 auStack_110 [6];
  undefined8 auStack_e0 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte bStack_60;
  undefined8 uStack_58;
  
  func_0x00010777d250();
  iVar1 = *(int *)(param_1 + 0x68);
  uStack_58 = extraout_x8;
  if ((((((iVar1 == 0) || (in_ZR = 1, iVar1 == 1)) || (in_ZR = 1, iVar1 == 2)) ||
       ((in_ZR = 1, iVar1 == 3 || (in_ZR = 1, iVar1 == 4)))) ||
      ((in_ZR = 1, iVar1 == 5 || ((in_ZR = 1, iVar1 == 6 || (in_ZR = 1, iVar1 == 7)))))) ||
     (in_ZR = iVar1 == 8, (bool)in_ZR)) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777dcb0();
    param_1 = param_1 + 8;
    func_0x000107348ee8();
    func_0x00010777dc10();
    puVar3 = unaff_x21;
    unaff_x21 = puStack_118;
    while (param_1 != 0) {
      puStack_118 = unaff_x21;
      func_0x00010777da30(auStack_e0);
      param_2 = auStack_e0;
      func_0x00010729d394(&uStack_a0);
      func_0x000104c3323c(auStack_e0);
      bVar2 = bStack_60;
      if ((bStack_60 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        func_0x00010777de30();
        func_0x0001075365e0();
        param_2 = &uStack_a0;
        func_0x0001072d80fc();
      }
      func_0x000107267ed0(&uStack_a0);
      if (bVar2 == 0) {
        func_0x00010777d890();
        goto LAB_10777726c;
      }
      func_0x00010777db40();
      puVar3 = unaff_x21;
      unaff_x21 = puStack_118;
      param_1 = lStack_120;
    }
    param_2 = auStack_110;
    func_0x000107535570(&uStack_a0);
    unaff_x19[1] = uStack_98;
    *unaff_x19 = uStack_a0;
    uStack_a0 = 0;
    uStack_98 = 0;
    func_0x00010777d960();
    func_0x00010733c27c(&uStack_a0);
    unaff_x21 = puVar3;
LAB_10777726c:
    func_0x00010733c730();
  }
  func_0x00010777d23c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = auStack_110;
  func_0x00010733c730();
  func_0x00010777d9d0();
  ppuVar7 = &puStack_200;
  ppuVar5 = &puStack_200;
  ppuVar6 = &puStack_200;
  puStack_128 = &UNK_1077772a8;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  puStack_200 = &UNK_10e52b660;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  func_0x000104c2db28();
  puStack_1e0 = puVar3;
  while (puVar3 = param_2, puStack_1d8 = puVar3, puStack_1e0 != (undefined8 *)0x0) {
    func_0x00010777db48(&uStack_1d0);
    func_0x0001077765a4();
    ppuVar4 = &puStack_200;
    func_0x0001072baf4c(&puStack_200,puVar3);
    func_0x00010726cda0((undefined1 *)((long)ppuVar4 + 8),auStack_1c8);
    func_0x00010777d660();
    func_0x000104c2de10(&puStack_1e0);
    param_2 = puStack_1d8;
    unaff_x21 = puVar3;
  }
  func_0x000107278fec(&uStack_1d0);
  unaff_x19[2] = auStack_1c8[0];
  unaff_x19[1] = uStack_1d0;
  uStack_1d0 = 0;
  auStack_1c8[0] = 0;
  *(undefined4 *)(unaff_x19 + 0xd) = 9;
  func_0x00010726b264(&uStack_1d0);
  func_0x00010726ae88();
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726ae88();
  func_0x00010777d638();
  puStack_208 = &UNK_107777380;
  ppuStack_210 = &puStack_130;
  func_0x00010777d250();
  iVar1 = *(int *)(ppuVar6 + 0xd);
  uStack_258 = extraout_x8_00;
  if (((((iVar1 == 0) || (in_ZR = 1, iVar1 == 1)) || (in_ZR = 1, iVar1 == 2)) ||
      (((in_ZR = 1, iVar1 == 3 || (in_ZR = 1, iVar1 == 4)) ||
       ((in_ZR = 1, iVar1 == 5 || ((in_ZR = 1, iVar1 == 6 || (in_ZR = 1, iVar1 == 7)))))))) ||
     (in_ZR = iVar1 == 8, (bool)in_ZR)) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777da84();
    func_0x000104c32780(auStack_300);
    func_0x000107348ee8();
    func_0x00010777dc10();
    while (unaff_x21 != (undefined8 *)0x0) {
      func_0x00010777da30(auStack_2e0);
      ppuVar7 = (undefined **)auStack_2e0;
      func_0x00010729d394(&uStack_2a0);
      func_0x000104c3323c(auStack_2e0);
      bVar2 = bStack_260;
      if ((bStack_260 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        func_0x00010777de30();
        func_0x000107269164();
        ppuVar7 = (undefined **)&uStack_2a0;
        func_0x0001072d80fc();
      }
      func_0x000107267ed0(&uStack_2a0);
      if (bVar2 == 0) {
        func_0x00010777d890();
        goto code_r0x0001077774b4;
      }
      func_0x00010777db40();
      unaff_x21 = puStack_310;
    }
    ppuVar7 = (undefined **)auStack_300;
    func_0x000104c33260(&uStack_2a0);
    ppuVar5[1] = (undefined *)uStack_298;
    *ppuVar5 = (undefined *)uStack_2a0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    func_0x00010777d960();
    func_0x000104c335c0(&uStack_2a0);
code_r0x0001077774b4:
    ppuVar6 = (undefined **)auStack_300;
    func_0x000104c33548();
  }
  func_0x00010777d23c(uStack_258);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar3 = auStack_300;
    func_0x000104c33548();
    func_0x00010777d9d0();
    puStack_318 = &UNK_1077774f4;
    puStack_330 = ppuVar6;
    puStack_328 = ppuVar5;
    pppuStack_320 = &ppuStack_210;
    func_0x0001077752bc();
    uStack_338 = SUB84(ppuVar7,0);
    uStack_334 = (undefined1)((ulong)ppuVar7 >> 0x20);
    puStack_340 = puVar3;
    if (((ulong)ppuVar7 >> 0x20 & 1) == 0) {
      func_0x00010777d748();
      uVar8 = extraout_w8;
    }
    else {
      func_0x0001074e8e04(auStack_358,&puStack_340);
      func_0x00010777ddf0();
      uVar8 = 1;
    }
    *(undefined1 *)(extraout_x8_01 + 0x18) = uVar8;
    return;
  }
  return;
}



/* Entry: 107777824; end: 10777784b;  */

void FUN_107777824(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001072ca12c();
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 107777b0c; end: 107777b13;  */

undefined8 FUN_107777b0c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = (undefined8 *)*param_1;
  func_0x0001073493cc();
  lVar1 = ((long *)*param_2)[1];
  for (lVar2 = *(long *)*param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    func_0x0001077778dc(param_1,lVar2);
  }
  param_1[4] = param_1[4] + -0x10;
  func_0x000107349610(*param_1,0x5d);
  return 1;
}



/* Entry: 107777e4c; end: 107777e77;  */

long FUN_107777e4c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001073bc7cc(param_1);
  }
  return param_1;
}



/* Entry: 107778148; end: 107778163;  */

long FUN_107778148(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x00010777821c(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 1077783d8; end: 1077783fb;  */

void FUN_1077783d8(long *param_1,long *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int extraout_w8;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int extraout_w10;
  undefined8 unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  long lVar10;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long lVar11;
  byte abStack_2b0 [512];
  long alStack_b0 [16];
  
  uVar3 = (int)param_1[0xd] == 3;
  if ((bool)uVar3) {
    unaff_x20 = param_2 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4(unaff_x20,param_1 + 1);
    unaff_x21 = alStack_b0;
    param_1 = alStack_b0;
    func_0x0001072ddd58();
    param_2 = (long *)*unaff_x20;
    func_0x00010777d68c();
    func_0x00010777d640();
    if ((abStack_2b0[0x1e8] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
    }
    func_0x00010777d8a4();
    func_0x00010777d1dc();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    unaff_x30 = &LAB_107778484;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_2b0 + 0x1d0);
  }
  uVar3 = (int)param_1[0xd] == 4;
  if ((bool)uVar3) {
    plVar4 = param_2 + 1;
    param_1 = param_1 + 1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224();
    unaff_x20 = (long *)((long)register0x00000008 + -0xa0);
    lVar7 = *param_1;
    *(long *)((long)register0x00000008 + -0x90) = param_1[1];
    *(long *)((long)register0x00000008 + -0x98) = lVar7;
    *(undefined4 *)((long)register0x00000008 + -0x38) = 4;
    param_2 = (long *)*plVar4;
    func_0x00010777d68c();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0xb8) & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar4;
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
      param_1 = plVar4;
    }
    func_0x00010777d8a4();
    func_0x00010777d20c();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    unaff_x30 = &UNK_107778530;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  plVar4 = param_2;
  func_0x00010777d250();
  *(undefined8 *)((long)register0x00000008 + -0x70) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar3) {
    lVar7 = param_1[2];
    lVar11 = param_1[1];
    *(long *)((long)register0x00000008 + -0xd0) = param_1[2];
    *(long *)((long)register0x00000008 + -0xd8) = lVar11;
    if (lVar7 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc30();
    func_0x00010777d7a0();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0x100) & 1) != 0) {
      func_0x00010777d818();
      func_0x00010777d550();
      goto code_r0x000107778790;
    }
code_r0x0001077787a0:
    func_0x00010777d724();
code_r0x0001077787a4:
    func_0x0001072dbe34((undefined1 *)((long)register0x00000008 + -0x110));
  }
  else {
    uVar3 = extraout_w8 == 6;
    if ((bool)uVar3) {
      func_0x000107348eb0((undefined1 *)((long)register0x00000008 + -0xd8),param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0x100) & 1) == 0) goto code_r0x0001077787a0;
      func_0x00010777d818();
      func_0x00010777d550();
code_r0x000107778790:
      func_0x00010777d2ec();
      func_0x0001072dbd40((undefined1 *)((long)register0x00000008 + -0xf8));
      goto code_r0x0001077787a4;
    }
    uVar3 = extraout_w8 == 7;
    if ((bool)uVar3) {
      func_0x000107348ecc((undefined1 *)((long)register0x00000008 + -0xd8),param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0x100) & 1) == 0) goto code_r0x0001077787a0;
      func_0x00010777d818();
      func_0x00010777d550();
      goto code_r0x000107778790;
    }
    uVar3 = extraout_w8 == 8;
    if (!(bool)uVar3) {
      func_0x0001074fd134((undefined1 *)((long)register0x00000008 + -0xd8),param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0x100) & 1) == 0) goto code_r0x0001077787a0;
      func_0x00010777d818();
      func_0x00010777d550();
      goto code_r0x000107778790;
    }
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    lVar7 = *(long *)param_1[1];
    lVar11 = ((long *)param_1[1])[1];
    if (lVar11 - lVar7 != 0) {
      uVar5 = (lVar11 - lVar7) / 0x70;
      if (uVar5 >> 0x3c != 0) {
        func_0x000107778164();
        goto code_r0x00010777880c;
      }
      *(undefined1 **)((long)register0x00000008 + -0xc0) =
           (undefined1 *)((long)register0x00000008 + -0x100);
      func_0x000107778178();
      *(ulong *)((long)register0x00000008 + -0xe0) = uVar5;
      *(ulong *)((long)register0x00000008 + -0xd8) = uVar5;
      *(ulong *)((long)register0x00000008 + -0xd0) = uVar5;
      *(ulong *)((long)register0x00000008 + -200) = uVar5 + (long)plVar4 * 0x10;
      func_0x00010777dd9c();
      func_0x00010777dd68();
      lVar7 = *(long *)param_1[1];
      lVar11 = ((long *)param_1[1])[1];
    }
    do {
      uVar3 = lVar7 == lVar11;
      if ((bool)uVar3) {
        func_0x000107778054((undefined1 *)((long)register0x00000008 + -0xe0),
                            (undefined1 *)((long)register0x00000008 + -0x110));
        func_0x00010777d58c();
        func_0x00010777d960();
        func_0x00010773b158((undefined1 *)((long)register0x00000008 + -0xe0));
        goto code_r0x0001077787f0;
      }
      lVar6 = *param_2;
      func_0x0001077754c8((undefined1 *)((long)register0x00000008 + -0xf8),lVar7);
      bVar1 = *(byte *)((long)register0x00000008 + -0xe8);
      if ((bVar1 & 1) != 0) {
        uVar5 = *(ulong *)((long)register0x00000008 + -0x108);
        uVar8 = *(ulong *)((long)register0x00000008 + -0x100);
        uVar3 = uVar5 == uVar8;
        if (uVar5 < uVar8) {
          func_0x0001072f64f4(uVar5,(undefined1 *)((long)register0x00000008 + -0xf8));
          lVar6 = uVar5 + 0x10;
        }
        else {
          lVar10 = uVar5 - *(long *)((long)register0x00000008 + -0x110);
          uVar5 = (lVar10 >> 4) + 1;
          if (uVar5 >> 0x3c != 0) goto code_r0x000107778800;
          uVar8 = uVar8 - *(long *)((long)register0x00000008 + -0x110);
          uVar9 = (long)uVar8 >> 3;
          if ((ulong)((long)uVar8 >> 3) <= uVar5) {
            uVar9 = uVar5;
          }
          uVar3 = uVar8 == 0x7ffffffffffffff0;
          if (0x7fffffffffffffef < uVar8) {
            uVar9 = 0xfffffffffffffff;
          }
          *(undefined1 **)((long)register0x00000008 + -0xc0) =
               (undefined1 *)((long)register0x00000008 + -0x100);
          if (uVar9 == 0) {
            uVar9 = 0;
            lVar6 = 0;
          }
          else {
            func_0x000107778178();
          }
          lVar10 = uVar9 + lVar10;
          *(ulong *)((long)register0x00000008 + -0xe0) = uVar9;
          *(long *)((long)register0x00000008 + -0xd8) = lVar10;
          *(long *)((long)register0x00000008 + -0xd0) = lVar10;
          *(ulong *)((long)register0x00000008 + -200) = uVar9 + lVar6 * 0x10;
          func_0x0001072f64f4(lVar10,(undefined1 *)((long)register0x00000008 + -0xf8));
          *(long *)((long)register0x00000008 + -0xd0) = lVar10 + 0x10;
          func_0x00010777dd9c();
          lVar6 = *(long *)((long)register0x00000008 + -0x108);
          func_0x00010777dd68();
        }
        *(long *)((long)register0x00000008 + -0x108) = lVar6;
      }
      func_0x0001072dbe34((undefined1 *)((long)register0x00000008 + -0xf8));
      lVar7 = lVar7 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777db54();
code_r0x0001077787f0:
    func_0x000107778278((undefined1 *)((long)register0x00000008 + -0x110));
  }
  func_0x00010777d23c(*(undefined8 *)((long)register0x00000008 + -0x70));
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
code_r0x000107778800:
  func_0x000107778164();
code_r0x00010777880c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107778810);
  (*pcVar2)();
}



/* Entry: 107778aa4; end: 107778b77;  */

void FUN_107778aa4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 auStack_38 [2];
  
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 4:
    return;
  case 5:
    return;
  case 6:
    return;
  case 8:
    uVar3 = **(ulong **)(param_1 + 8);
    uVar1 = (*(ulong **)(param_1 + 8))[1];
    if (uVar1 - uVar3 == 0xe0) {
      puVar4 = auStack_38;
      while ((uVar3 != uVar1 && (uVar2 = uVar3, func_0x000107776fc4(), uVar2 >> 0x20 != 0))) {
        *puVar4 = (int)uVar2;
        uVar3 = uVar3 + 0x70;
        puVar4 = puVar4 + 1;
      }
    }
  }
  return;
}



/* Entry: 107778f2c; end: 107778f9f;  */

void FUN_107778f2c(long *param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 in_ZR;
  undefined1 uVar10;
  uint uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 uVar20;
  undefined1 extraout_w8;
  undefined1 uVar21;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  long lVar22;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined1 *unaff_x19;
  undefined4 uVar23;
  ulong unaff_x20;
  long *plVar24;
  undefined1 *puVar25;
  undefined1 *unaff_x22;
  undefined1 *puVar26;
  undefined8 unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar27;
  undefined *puVar28;
  code *pcVar29;
  long lVar30;
  undefined8 uVar31;
  byte abStack_1590 [5148];
  undefined4 uStack_174;
  long alStack_170 [16];
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [12];
  undefined4 uStack_b4;
  long alStack_b0 [13];
  undefined4 uStack_48;
  
  pbVar3 = auStack_c0;
  pppppppuVar27 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  uStack_48 = 0;
  plVar24 = alStack_b0;
  func_0x00010777d958();
  func_0x00010777d478();
  bVar1 = unaff_x20 >> 0x20 != 0;
  uVar23 = (undefined4)unaff_x20;
  if (bVar1) {
    uStack_b4 = uVar23;
    func_0x00010777d510();
    func_0x00010777d2c0();
    func_0x0001072dbd40();
  }
  else {
    *unaff_x19 = 0;
  }
  unaff_x19[0x10] = bVar1;
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar28 = &UNK_107778fa0;
  plVar16 = param_1;
  func_0x00010777d638();
  uVar10 = (int)plVar16[0xd] == 1;
  if ((bool)uVar10) {
    plVar17 = param_2 + 1;
    param_2 = plVar16 + 1;
    pbVar3 = abStack_1590 + 0x1410;
    puStack_c8 = &UNK_107778fa0;
    ppppppuStack_d0 = pppppppuVar27;
    func_0x00010777d1f4();
    plVar24 = alStack_170;
    func_0x00010777dae0();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      uStack_174 = uVar23;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)param_1 = 0;
    }
    *(bool *)(param_1 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    puVar28 = &UNK_107779038;
    plVar16 = plVar17;
    func_0x00010777d638();
    param_1 = plVar17;
    pppppppuVar27 = &ppppppuStack_d0;
  }
  uVar10 = (int)plVar16[0xd] == 2;
  if ((bool)uVar10) {
    plVar17 = param_2 + 1;
    param_2 = plVar16 + 1;
    *(undefined1 **)(pbVar3 + -0x30) = unaff_x22;
    *(long **)(pbVar3 + -0x28) = plVar24;
    *(ulong *)(pbVar3 + -0x20) = unaff_x20;
    *(long **)(pbVar3 + -0x18) = param_1;
    *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar27;
    *(undefined **)(pbVar3 + -8) = puVar28;
    pppppppuVar27 = (undefined8 *******)(pbVar3 + -0x10);
    func_0x00010777d1f4();
    plVar24 = (long *)(pbVar3 + -0xb0);
    func_0x00010777dacc();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      *(undefined4 *)(pbVar3 + -0xb4) = uVar23;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)param_1 = 0;
    }
    *(bool *)(param_1 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    puVar28 = &UNK_1077790d0;
    plVar16 = plVar17;
    func_0x00010777d638();
    pbVar3 = pbVar3 + -0xc0;
    param_1 = plVar17;
  }
  uVar10 = (int)plVar16[0xd] == 3;
  if ((bool)uVar10) {
    plVar17 = param_2 + 1;
    param_2 = plVar16 + 1;
    *(undefined1 **)(pbVar3 + -0x30) = unaff_x22;
    *(long **)(pbVar3 + -0x28) = plVar24;
    *(ulong *)(pbVar3 + -0x20) = unaff_x20;
    *(long **)(pbVar3 + -0x18) = param_1;
    *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar27;
    *(undefined **)(pbVar3 + -8) = puVar28;
    pppppppuVar27 = (undefined8 *******)(pbVar3 + -0x10);
    func_0x00010777d1f4();
    func_0x00010777dd10();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      *(undefined4 *)(pbVar3 + -0xb4) = uVar23;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)param_1 = 0;
    }
    *(bool *)(param_1 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    puVar28 = &UNK_107779164;
    plVar16 = plVar17;
    func_0x00010777d638();
    pbVar3 = pbVar3 + -0xc0;
    param_1 = plVar17;
  }
  uVar10 = (int)plVar16[0xd] == 4;
  if ((bool)uVar10) {
    plVar17 = param_2 + 1;
    param_2 = plVar16 + 1;
    *(undefined1 **)(pbVar3 + -0x30) = unaff_x22;
    *(long **)(pbVar3 + -0x28) = plVar24;
    *(ulong *)(pbVar3 + -0x20) = unaff_x20;
    *(long **)(pbVar3 + -0x18) = param_1;
    *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar27;
    *(undefined **)(pbVar3 + -8) = puVar28;
    pppppppuVar27 = (undefined8 *******)(pbVar3 + -0x10);
    func_0x00010777d1f4();
    plVar24 = (long *)(pbVar3 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      *(undefined4 *)(pbVar3 + -0xb4) = uVar23;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)param_1 = 0;
    }
    *(bool *)(param_1 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    puVar28 = &UNK_1077791fc;
    plVar16 = plVar17;
    func_0x00010777d638();
    pbVar3 = pbVar3 + -0xc0;
    param_1 = plVar17;
  }
  puVar9 = pbVar3 + -0xc0;
  *(undefined1 **)(pbVar3 + -0x30) = unaff_x22;
  *(long **)(pbVar3 + -0x28) = plVar24;
  *(ulong *)(pbVar3 + -0x20) = unaff_x20;
  *(long **)(pbVar3 + -0x18) = param_1;
  *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar27;
  *(undefined **)(pbVar3 + -8) = puVar28;
  puVar25 = pbVar3 + -0x10;
  plVar17 = plVar16;
  func_0x00010777d1f4();
  func_0x00010777da78();
  uVar23 = SUB84(plVar16,0);
  if ((bool)uVar10) {
    lVar22 = plVar16[2];
    lVar30 = plVar16[1];
    *(long *)(pbVar3 + -0xa0) = plVar16[2];
    *(long *)(pbVar3 + -0xa8) = lVar30;
    if (lVar22 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d958();
    func_0x00010777d478();
    if ((ulong)plVar16 >> 0x20 != 0) {
      *(undefined4 *)(pbVar3 + -0xc0) = uVar23;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
code_r0x000107779334:
    uVar20 = (undefined1)((ulong)plVar16 >> 0x20);
    *(undefined1 *)param_1 = 0;
code_r0x000107779368:
    *(undefined1 *)(param_1 + 2) = uVar20;
  }
  else {
    uVar10 = extraout_w8_05 == 6;
    if ((bool)uVar10) {
      plVar24 = (long *)(pbVar3 + -0xb0);
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)plVar16 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)(pbVar3 + -0xc0) = uVar23;
      func_0x00010777d400();
      func_0x0001072f8d90();
code_r0x00010777935c:
      func_0x00010777d2c0();
      func_0x0001072dbd40();
      uVar20 = 1;
      goto code_r0x000107779368;
    }
    uVar10 = extraout_w8_05 == 7;
    if ((bool)uVar10) {
      plVar24 = (long *)(pbVar3 + -0xb0);
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)plVar16 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)(pbVar3 + -0xc0) = uVar23;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
    uVar10 = extraout_w8_05 == 8;
    if (!(bool)uVar10) {
      plVar24 = (long *)(pbVar3 + -0xb0);
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)plVar16 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)(pbVar3 + -0xc0) = uVar23;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
    func_0x00010777dce0();
    func_0x00010777d398(plVar16[1]);
    puVar4 = pbVar3 + -0xb0;
    func_0x0001073b504c();
    plVar24 = (long *)((undefined8 *)plVar16[1])[1];
    for (plVar16 = *(long **)plVar16[1]; uVar10 = plVar16 == plVar24, !(bool)uVar10;
        plVar16 = plVar16 + 0xe) {
      func_0x00010777ddc4();
      *(int *)(pbVar3 + -0xc0) = (int)puVar4;
      pbVar3[-0xbc] = (char)((ulong)puVar4 >> 0x20);
      if ((ulong)puVar4 >> 0x20 == 0) {
        func_0x00010777d724();
        goto code_r0x000107779380;
      }
      func_0x00010777d700();
      func_0x0001073b50ac();
    }
    func_0x00010777dac0();
    func_0x000107535bd0();
    func_0x00010777d338();
    func_0x0001072dbd40();
code_r0x000107779380:
    plVar17 = (long *)(pbVar3 + -0xb0);
    func_0x0001056d1ce4();
  }
  func_0x00010777d1dc();
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  pcVar29 = (code *)&UNK_1077793bc;
  func_0x00010777d638();
  if ((int)plVar17[0xd] == 0) {
    plVar12 = param_2 + 1;
    puVar9 = pbVar3 + -0x1b0;
    *(long **)(pbVar3 + -0xe0) = plVar16;
    *(long **)(pbVar3 + -0xd8) = param_1;
    *(undefined1 **)(pbVar3 + -0xd0) = puVar25;
    *(undefined **)(pbVar3 + -200) = &UNK_1077793bc;
    puVar25 = pbVar3 + -0xd0;
    func_0x00010777d224(plVar12,plVar17 + 1);
    *(undefined4 *)(pbVar3 + -0x130) = 0;
    param_2 = (long *)*plVar12;
    plVar16 = (long *)(pbVar3 + -0x198);
    func_0x00010777d824();
    func_0x00010777d648();
    if ((pbVar3[-0xf0] & 1) == 0) {
      func_0x00010777d724();
      plVar17 = plVar12;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar17 = plVar12;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    pcVar29 = (code *)&UNK_107779450;
    func_0x00010777d638();
  }
  uVar10 = (int)plVar17[0xd] == 1;
  if ((bool)uVar10) {
    plVar12 = param_2 + 1;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(code **)(puVar9 + -8) = pcVar29;
    puVar25 = puVar9 + -0x10;
    func_0x00010777d224(plVar12,plVar17 + 1);
    func_0x00010777d8d4();
    param_2 = (long *)*plVar12;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar9[-0x30] & 1) == 0) {
      func_0x00010777d724();
      plVar17 = plVar12;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar17 = plVar12;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    pcVar29 = (code *)&UNK_1077794e4;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xf0;
  }
  uVar10 = (int)plVar17[0xd] == 2;
  if ((bool)uVar10) {
    plVar12 = param_2 + 1;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(code **)(puVar9 + -8) = pcVar29;
    puVar25 = puVar9 + -0x10;
    func_0x00010777d224(plVar12,plVar17 + 1);
    func_0x00010777d904();
    param_2 = (long *)*plVar12;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar9[-0x30] & 1) == 0) {
      func_0x00010777d724();
      plVar17 = plVar12;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar17 = plVar12;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    pcVar29 = FUN_107779578;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xf0;
  }
  uVar10 = (int)plVar17[0xd] == 3;
  if ((bool)uVar10) {
    plVar12 = param_2 + 1;
    param_2 = plVar17 + 1;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(code **)(puVar9 + -8) = pcVar29;
    puVar25 = puVar9 + -0x10;
    func_0x00010777d224(plVar12);
    param_1 = (long *)(puVar9 + -0x60);
    func_0x000104c2fe00();
    func_0x00010777d454();
    func_0x00010777d304();
    func_0x00010777dbd0();
    func_0x00010777d20c();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    plVar17 = param_1;
    func_0x00010777dbd0();
    pcVar29 = (code *)&LAB_1077795e4;
    func_0x00010777d638();
    puVar9 = puVar9 + -0x70;
  }
  uVar10 = (int)plVar17[0xd] == 4;
  if ((bool)uVar10) {
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(code **)(puVar9 + -8) = pcVar29;
    puVar25 = puVar9 + -0x10;
    func_0x00010777d224(param_2 + 1,plVar17 + 1);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar9[-0x30] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    pcVar29 = (code *)&UNK_107779678;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xf0;
  }
  puVar4 = puVar9 + -0x120;
  *(undefined8 *)(puVar9 + -0x50) = unaff_x26;
  *(ulong *)(puVar9 + -0x48) = unaff_x25;
  *(long **)(puVar9 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar9 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
  *(long **)(puVar9 + -0x28) = plVar24;
  *(long **)(puVar9 + -0x20) = plVar16;
  *(long **)(puVar9 + -0x18) = param_1;
  *(undefined1 **)(puVar9 + -0x10) = puVar25;
  *(code **)(puVar9 + -8) = pcVar29;
  puVar25 = puVar9 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar9 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar10) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    puVar18 = (undefined1 *)plVar16[1];
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((puVar9[-0x60] & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    puVar13 = (undefined8 *)(puVar9 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar10 = extraout_w8_06 == 6;
    if ((bool)uVar10) {
      unaff_x22 = puVar9 + -0x110;
      func_0x00010777d6c8();
      puVar18 = (undefined1 *)plVar16[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar9[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar10 = extraout_w8_06 == 7;
    if ((bool)uVar10) {
      unaff_x22 = puVar9 + -0x110;
      func_0x00010777d6bc();
      puVar18 = (undefined1 *)plVar16[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar9[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar10 = extraout_w8_06 == 8;
    if (!(bool)uVar10) {
      unaff_x22 = puVar9 + -0x110;
      func_0x00010777d6d4();
      puVar18 = (undefined1 *)plVar16[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar9[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    *(undefined8 *)(puVar9 + -0x90) = 0;
    *(undefined8 *)(puVar9 + -0x88) = 0;
    *(undefined8 *)(puVar9 + -0x98) = 0;
    func_0x00010777d398(plVar24[1]);
    func_0x0001072dd514(puVar9 + -0x98);
    func_0x00010777de3c();
    do {
      uVar10 = plVar24 == unaff_x24;
      if ((bool)uVar10) {
        puVar18 = puVar9 + -0x98;
        func_0x0001073fb2d4(puVar9 + -0x110);
        lVar22 = *(long *)(puVar9 + -0x110);
        param_1[1] = *(long *)(puVar9 + -0x108);
        *param_1 = lVar22;
        *(undefined8 *)(puVar9 + -0x110) = 0;
        *(undefined8 *)(puVar9 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c(puVar9 + -0x110);
        goto code_r0x000107779838;
      }
      puVar18 = (undefined1 *)*plVar16;
      func_0x000107323900(puVar9 + -0x110,plVar24);
      bVar2 = puVar9[-0xd8];
      unaff_x25 = (ulong)bVar2;
      if ((bVar2 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar18 = puVar9 + -0x110;
        func_0x0001072d17f4(puVar9 + -0x98);
      }
      func_0x00010724b3d8(puVar9 + -0x110);
      plVar24 = plVar24 + 0xe;
    } while ((bVar2 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779838:
    puVar13 = (undefined8 *)(puVar9 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar9 + -0x58));
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar14 = (undefined8 *)(puVar9 + -0x98);
  func_0x00010724b3d8();
  puVar28 = &UNK_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar14 + 0xd) == 0) {
    puVar15 = (undefined8 *)(puVar18 + 8);
    puVar4 = puVar9 + -0x250;
    *(undefined8 *)(puVar9 + -0x150) = unaff_x28;
    *(undefined8 *)(puVar9 + -0x148) = unaff_x27;
    *(undefined8 **)(puVar9 + -0x140) = puVar13;
    *(long **)(puVar9 + -0x138) = param_1;
    *(undefined1 **)(puVar9 + -0x130) = puVar25;
    *(undefined **)(puVar9 + -0x128) = &UNK_1077798bc;
    puVar25 = puVar9 + -0x130;
    func_0x00010777d1f4(puVar15,puVar14 + 1);
    *(undefined4 *)(puVar9 + -0x1e8) = 0;
    puVar18 = (undefined1 *)*puVar15;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar9[-0x160] & 1) == 0) {
      func_0x00010777d724();
      puVar14 = puVar15;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar14 = puVar15;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar28 = &UNK_107779964;
    func_0x00010777d638();
    puVar13 = (undefined8 *)(puVar9 + -0x250);
  }
  uVar10 = *(int *)(puVar14 + 0xd) == 1;
  if ((bool)uVar10) {
    puVar15 = (undefined8 *)(puVar18 + 8);
    puVar14 = puVar14 + 1;
    puVar5 = (undefined8 *)(puVar4 + -0x130);
    *(undefined8 *)(puVar4 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar4 + -0x20) = puVar13;
    *(long **)(puVar4 + -0x18) = param_1;
    *(undefined1 **)(puVar4 + -0x10) = puVar25;
    *(undefined **)(puVar4 + -8) = puVar28;
    puVar25 = puVar4 + -0x10;
    func_0x00010777d1f4();
    puVar4[-0x128] = *(undefined1 *)puVar14;
    *(undefined4 *)(puVar4 + -200) = 1;
    puVar18 = (undefined1 *)*puVar15;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar4[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar14 = puVar15;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar14 = puVar15;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar28 = &UNK_107779a1c;
    func_0x00010777d638();
    puVar4 = puVar4 + -0x130;
    puVar13 = puVar5;
  }
  uVar10 = *(int *)(puVar14 + 0xd) == 2;
  if ((bool)uVar10) {
    puVar15 = (undefined8 *)(puVar18 + 8);
    puVar14 = puVar14 + 1;
    puVar6 = (undefined8 *)(puVar4 + -0x130);
    *(undefined8 *)(puVar4 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar4 + -0x20) = puVar13;
    *(long **)(puVar4 + -0x18) = param_1;
    *(undefined1 **)(puVar4 + -0x10) = puVar25;
    *(undefined **)(puVar4 + -8) = puVar28;
    puVar25 = puVar4 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar4 + -0x128) = *puVar14;
    *(undefined4 *)(puVar4 + -200) = 2;
    puVar18 = (undefined1 *)*puVar15;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar4[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar14 = puVar15;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar14 = puVar15;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar28 = &UNK_107779ad4;
    func_0x00010777d638();
    puVar4 = puVar4 + -0x130;
    puVar13 = puVar6;
  }
  uVar10 = *(int *)(puVar14 + 0xd) == 3;
  if ((bool)uVar10) {
    puVar15 = puVar14 + 1;
    puVar14 = (undefined8 *)(puVar4 + -0x130);
    plVar7 = (long *)(puVar4 + -0x130);
    *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
    *(long **)(puVar4 + -0x28) = plVar24;
    *(undefined8 **)(puVar4 + -0x20) = puVar13;
    *(long **)(puVar4 + -0x18) = param_1;
    *(undefined1 **)(puVar4 + -0x10) = puVar25;
    *(undefined **)(puVar4 + -8) = puVar28;
    puVar25 = puVar4 + -0x10;
    func_0x00010777d1f4(puVar18 + 8,puVar15);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((puVar4[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar28 = &UNK_107779b94;
    func_0x00010777d638();
    puVar4 = puVar4 + -0x130;
    puVar13 = (undefined8 *)(puVar18 + 8);
    plVar24 = plVar7;
  }
  uVar10 = *(int *)(puVar14 + 0xd) == 4;
  if ((bool)uVar10) {
    puVar14 = puVar14 + 1;
    puVar8 = (undefined8 *)(puVar4 + -0x130);
    *(undefined8 *)(puVar4 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar4 + -0x20) = puVar13;
    *(long **)(puVar4 + -0x18) = param_1;
    *(undefined1 **)(puVar4 + -0x10) = puVar25;
    *(undefined **)(puVar4 + -8) = puVar28;
    puVar25 = puVar4 + -0x10;
    func_0x00010777d1f4();
    uVar31 = *puVar14;
    *(undefined8 *)(puVar4 + -0x120) = puVar14[1];
    *(undefined8 *)(puVar4 + -0x128) = uVar31;
    *(undefined4 *)(puVar4 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar4[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar28 = &UNK_107779c4c;
    func_0x00010777d638();
    puVar4 = puVar4 + -0x130;
    puVar13 = puVar8;
  }
  puVar9 = puVar4 + -0x150;
  puVar26 = puVar4 + -0x150;
  puVar18 = puVar4 + -0x150;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(ulong *)(puVar4 + -0x48) = unaff_x25;
  *(long **)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
  *(long **)(puVar4 + -0x28) = plVar24;
  *(undefined8 **)(puVar4 + -0x20) = puVar13;
  *(long **)(puVar4 + -0x18) = param_1;
  *(undefined1 **)(puVar4 + -0x10) = puVar25;
  *(undefined **)(puVar4 + -8) = puVar28;
  puVar25 = puVar4 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar4 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar10) {
    lVar22 = plVar24[2];
    lVar30 = plVar24[1];
    *(long *)(puVar4 + -0x140) = plVar24[2];
    *(long *)(puVar4 + -0x148) = lVar30;
    if (lVar22 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    *(undefined4 *)(puVar4 + -0xe8) = 5;
    puVar19 = (undefined1 *)puVar13[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    plVar24 = (long *)(puVar4 + -0x150);
    puVar18 = unaff_x22;
    if ((puVar4[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      plVar24 = (long *)(puVar4 + -0x150);
      puVar26 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    plVar16 = (long *)(puVar4 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar18;
  }
  else {
    uVar10 = extraout_w8_07 == 6;
    if ((bool)uVar10) {
      func_0x00010777d6c8();
      puVar19 = (undefined1 *)puVar13[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar18 = puVar4 + -0x150;
      if ((puVar4[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar26 = puVar4 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar18 = puVar26;
      goto code_r0x000107779dfc;
    }
    uVar10 = extraout_w8_07 == 7;
    if ((bool)uVar10) {
      func_0x00010777d6bc();
      puVar19 = (undefined1 *)puVar13[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar18 = puVar4 + -0x150;
      if ((puVar4[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar26 = puVar4 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar10 = extraout_w8_07 == 8;
    if (!(bool)uVar10) {
      func_0x00010777d6d4();
      puVar19 = (undefined1 *)puVar13[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((puVar4[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)(puVar4 + -0xd8) = 0;
    *(undefined8 *)(puVar4 + -0xd0) = 0;
    *(undefined8 *)(puVar4 + -0xe0) = 0;
    func_0x00010777d398(plVar24[1]);
    func_0x0001072ac134(puVar4 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar10 = plVar24 == unaff_x24;
      if ((bool)uVar10) {
        puVar19 = puVar4 + -0xe0;
        func_0x000107327958(puVar4 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804(puVar4 + -0xa0,plVar24,*puVar13);
      puVar19 = puVar4 + -0xa0;
      func_0x00010729d394(puVar4 + -0x150);
      func_0x000104c3323c(puVar4 + -0xa0);
      bVar2 = puVar4[-0x110];
      if ((bVar2 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar19 = puVar4 + -0x150;
        func_0x0001072d7f34(puVar4 + -0xe0);
      }
      func_0x000107267ed0(puVar4 + -0x150);
      plVar24 = plVar24 + 0xe;
    } while ((bVar2 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    plVar16 = (long *)(puVar4 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar4 + -0x58));
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  plVar17 = (long *)(puVar4 + -0xa0);
  func_0x000107267ed0();
  pcVar29 = FUN_107779ed8;
  func_0x00010777d9d0();
  uVar11 = (uint)plVar16;
  uVar20 = SUB81(plVar16,0);
  if ((int)plVar17[0xd] == 0) {
    plVar12 = (long *)(puVar19 + 8);
    puVar9 = puVar4 + -0x210;
    *(undefined1 **)(puVar4 + -0x180) = unaff_x22;
    *(long **)(puVar4 + -0x178) = plVar24;
    *(long **)(puVar4 + -0x170) = plVar16;
    *(long **)(puVar4 + -0x168) = param_1;
    *(undefined1 **)(puVar4 + -0x160) = puVar25;
    *(code **)(puVar4 + -0x158) = FUN_107779ed8;
    puVar25 = puVar4 + -0x160;
    func_0x00010777d1f4(plVar12,plVar17 + 1);
    *(undefined4 *)(puVar4 + -0x198) = 0;
    puVar19 = (undefined1 *)*plVar12;
    plVar24 = (long *)(puVar4 + -0x200);
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar11 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar21 = extraout_w8;
    }
    else {
      puVar4[-0x201] = uVar20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar21 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar21;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    pcVar29 = (code *)&LAB_107779f6c;
    plVar17 = plVar12;
    func_0x00010777d638();
    param_1 = plVar12;
  }
  uVar10 = (int)plVar17[0xd] == 1;
  if ((bool)uVar10) {
    plVar12 = (long *)(puVar19 + 8);
    *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
    *(long **)(puVar9 + -0x28) = plVar24;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(code **)(puVar9 + -8) = pcVar29;
    puVar25 = puVar9 + -0x10;
    func_0x00010777d1f4(plVar12,plVar17 + 1);
    plVar24 = (long *)(puVar9 + -0xb0);
    func_0x00010777dae0();
    puVar19 = (undefined1 *)*plVar12;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar11 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar21 = extraout_w8_00;
    }
    else {
      puVar9[-0xb1] = uVar20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar21 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar21;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    pcVar29 = (code *)&UNK_10777a170;
    plVar17 = plVar12;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xc0;
    param_1 = plVar12;
  }
  uVar10 = (int)plVar17[0xd] == 2;
  if ((bool)uVar10) {
    plVar12 = (long *)(puVar19 + 8);
    *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
    *(long **)(puVar9 + -0x28) = plVar24;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(code **)(puVar9 + -8) = pcVar29;
    puVar25 = puVar9 + -0x10;
    func_0x00010777d1f4(plVar12,plVar17 + 1);
    plVar24 = (long *)(puVar9 + -0xb0);
    func_0x00010777dacc();
    puVar19 = (undefined1 *)*plVar12;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar11 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8_01;
    }
    else {
      puVar9[-0xb1] = uVar20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    pcVar29 = (code *)&UNK_10777a208;
    plVar17 = plVar12;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xc0;
    param_1 = plVar12;
  }
  uVar10 = (int)plVar17[0xd] == 3;
  if ((bool)uVar10) {
    plVar12 = (long *)(puVar19 + 8);
    *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
    *(long **)(puVar9 + -0x28) = plVar24;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(code **)(puVar9 + -8) = pcVar29;
    puVar25 = puVar9 + -0x10;
    plVar16 = plVar12;
    func_0x00010777d1f4(plVar12,plVar17 + 1);
    func_0x00010777dd10();
    puVar19 = (undefined1 *)*plVar12;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar12 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8_02;
    }
    else {
      puVar9[-0xb1] = (char)plVar12;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    pcVar29 = (code *)&UNK_10777a2a0;
    plVar17 = plVar16;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xc0;
    param_1 = plVar16;
    plVar16 = plVar12;
  }
  uVar10 = (int)plVar17[0xd] == 4;
  if ((bool)uVar10) {
    plVar12 = (long *)(puVar19 + 8);
    *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
    *(long **)(puVar9 + -0x28) = plVar24;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(code **)(puVar9 + -8) = pcVar29;
    puVar25 = puVar9 + -0x10;
    func_0x00010777d1f4(plVar12,plVar17 + 1);
    plVar24 = (long *)(puVar9 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar16 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8_03;
    }
    else {
      puVar9[-0xb1] = (char)plVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    pcVar29 = FUN_10777a338;
    plVar17 = plVar12;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xc0;
    param_1 = plVar12;
  }
  uVar11 = (uint)plVar17;
  *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
  *(long **)(puVar9 + -0x28) = plVar24;
  *(long **)(puVar9 + -0x20) = plVar16;
  *(long **)(puVar9 + -0x18) = param_1;
  *(undefined1 **)(puVar9 + -0x10) = puVar25;
  *(code **)(puVar9 + -8) = pcVar29;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar10) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_02 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar16 >> 8 & 1) != 0) {
      puVar9[-0xc0] = (char)plVar16;
      func_0x00010777d400();
      func_0x000107779f90();
      goto LAB_10777a490;
    }
LAB_10777a468:
    func_0x00010777d748();
    uVar20 = extraout_w8_04;
  }
  else {
    uVar10 = extraout_w8_08 == 6;
    if ((bool)uVar10) {
      unaff_x22 = puVar9 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar11 >> 8 & 1) == 0) goto LAB_10777a468;
      puVar9[-0xc0] = (char)uVar11;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar10 = extraout_w8_08 == 7;
      if ((bool)uVar10) {
        unaff_x22 = puVar9 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar11 >> 8 & 1) == 0) goto LAB_10777a468;
        puVar9[-0xc0] = (char)uVar11;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar10 = extraout_w8_08 == 8;
        if ((bool)uVar10) {
          func_0x00010777dce0();
          func_0x00010777d398(plVar24[1]);
          func_0x0001075356bc(puVar9 + -0xb0);
          unaff_x22 = (undefined1 *)((undefined8 *)plVar24[1])[1];
          for (puVar25 = *(undefined1 **)plVar24[1]; uVar10 = puVar25 == unaff_x22, !(bool)uVar10;
              puVar25 = puVar25 + 0x70) {
            puVar4 = puVar25;
            func_0x000107775a54(puVar25,*plVar16);
            *(short *)(puVar9 + -0xc0) = (short)puVar4;
            if (((uint)puVar4 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto LAB_10777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
LAB_10777a4b4:
          func_0x0001074048e8(puVar9 + -0xb0);
          goto LAB_10777a4a0;
        }
        unaff_x22 = puVar9 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar11 >> 8 & 1) == 0) goto LAB_10777a468;
        puVar9[-0xc0] = (char)uVar11;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
LAB_10777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar20 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar20;
LAB_10777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar9 + -0xd0) = puVar9 + -0x10;
  *(undefined **)(puVar9 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779188; end: 1077791fb;  */

void FUN_107779188(byte *param_1,byte *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined1 in_ZR;
  undefined1 uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  byte bVar19;
  byte extraout_w8;
  byte extraout_w8_00;
  byte extraout_w8_01;
  byte extraout_w8_02;
  byte extraout_w8_03;
  byte extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar20;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined1 *unaff_x19;
  undefined4 uVar21;
  ulong unaff_x20;
  byte *pbVar22;
  undefined1 *puVar23;
  undefined1 *unaff_x22;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined8 unaff_x23;
  byte *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar26;
  code *pcVar27;
  undefined *puVar28;
  undefined8 uVar29;
  long lVar30;
  byte abStack_1290 [4336];
  byte *pbStack_1a0;
  byte *pbStack_198;
  undefined8 ******ppppppuStack_190;
  undefined *puStack_188;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  byte abStack_170 [8];
  long lStack_168;
  long lStack_160;
  undefined8 *****pppppuStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_b4;
  byte abStack_b0 [128];
  byte *pbVar4;
  
  func_0x00010777d1f4();
  pbVar22 = abStack_b0;
  func_0x00010777da1c();
  func_0x00010777d958();
  func_0x00010777d478();
  bVar1 = unaff_x20 >> 0x20 != 0;
  if (bVar1) {
    uStack_b4 = (undefined4)unaff_x20;
    func_0x00010777d510();
    func_0x00010777d2c0();
    func_0x0001072dbd40();
  }
  else {
    *unaff_x19 = 0;
  }
  unaff_x19[0x10] = bVar1;
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pbVar16 = param_1;
  func_0x00010777d638();
  pbVar4 = (byte *)&uStack_180;
  puStack_c8 = &UNK_1077791fc;
  pppppppuVar26 = (undefined8 *******)&pppppuStack_d0;
  pbVar15 = pbVar16;
  pppppuStack_d0 = (undefined8 *****)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  func_0x00010777da78();
  uVar21 = SUB84(pbVar16,0);
  if ((bool)in_ZR) {
    lStack_160 = *(long *)(pbVar16 + 0x10);
    lStack_168 = *(long *)(pbVar16 + 8);
    if (*(long *)(pbVar16 + 0x10) != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d958();
    func_0x00010777d478();
    if ((ulong)pbVar16 >> 0x20 != 0) {
      uStack_180 = uVar21;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
code_r0x000107779334:
    bVar19 = (byte)((ulong)pbVar16 >> 0x20);
    *param_1 = 0;
code_r0x000107779368:
    param_1[0x10] = bVar19;
  }
  else {
    in_ZR = extraout_w8_05 == 6;
    if ((bool)in_ZR) {
      pbVar22 = abStack_170;
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)pbVar16 >> 0x20 == 0) goto code_r0x000107779334;
      uStack_180 = uVar21;
      func_0x00010777d400();
      func_0x0001072f8d90();
code_r0x00010777935c:
      func_0x00010777d2c0();
      func_0x0001072dbd40();
      bVar19 = 1;
      goto code_r0x000107779368;
    }
    in_ZR = extraout_w8_05 == 7;
    if ((bool)in_ZR) {
      pbVar22 = abStack_170;
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)pbVar16 >> 0x20 == 0) goto code_r0x000107779334;
      uStack_180 = uVar21;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
    in_ZR = extraout_w8_05 == 8;
    if (!(bool)in_ZR) {
      pbVar22 = abStack_170;
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)pbVar16 >> 0x20 == 0) goto code_r0x000107779334;
      uStack_180 = uVar21;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
    func_0x00010777dce0();
    func_0x00010777d398(*(long *)(pbVar16 + 8));
    pbVar15 = abStack_170;
    func_0x0001073b504c();
    pbVar22 = (byte *)(*(undefined8 **)(pbVar16 + 8))[1];
    for (pbVar16 = (byte *)**(undefined8 **)(pbVar16 + 8); in_ZR = pbVar16 == pbVar22, !(bool)in_ZR;
        pbVar16 = pbVar16 + 0x70) {
      func_0x00010777ddc4();
      uStack_180 = SUB84(pbVar15,0);
      uStack_17c = (undefined1)((ulong)pbVar15 >> 0x20);
      if ((ulong)pbVar15 >> 0x20 == 0) {
        func_0x00010777d724();
        goto code_r0x000107779380;
      }
      func_0x00010777d700();
      func_0x0001073b50ac();
    }
    func_0x00010777dac0();
    func_0x000107535bd0();
    func_0x00010777d338();
    func_0x0001072dbd40();
code_r0x000107779380:
    pbVar15 = abStack_170;
    func_0x0001056d1ce4();
  }
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  pcVar27 = (code *)&UNK_1077793bc;
  func_0x00010777d638();
  if (*(int *)(pbVar15 + 0x68) == 0) {
    pbVar11 = param_2 + 8;
    pbVar4 = abStack_1290 + 0x1020;
    puStack_188 = &UNK_1077793bc;
    pbStack_1a0 = pbVar16;
    pbStack_198 = param_1;
    ppppppuStack_190 = pppppppuVar26;
    func_0x00010777d224(pbVar11,pbVar15 + 8);
    abStack_1290[0x10a0] = 0;
    abStack_1290[0x10a1] = 0;
    abStack_1290[0x10a2] = 0;
    abStack_1290[0x10a3] = 0;
    param_2 = *(byte **)pbVar11;
    pbVar16 = abStack_1290 + 0x1038;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((abStack_1290[0x10e0] & 1) == 0) {
      func_0x00010777d724();
      pbVar15 = pbVar11;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      pbVar15 = pbVar11;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    pcVar27 = (code *)&UNK_107779450;
    func_0x00010777d638();
    pppppppuVar26 = &ppppppuStack_190;
  }
  uVar9 = *(int *)(pbVar15 + 0x68) == 1;
  if ((bool)uVar9) {
    pbVar11 = param_2 + 8;
    *(byte **)(pbVar4 + -0x20) = pbVar16;
    *(byte **)(pbVar4 + -0x18) = param_1;
    *(undefined8 ********)(pbVar4 + -0x10) = pppppppuVar26;
    *(code **)(pbVar4 + -8) = pcVar27;
    pppppppuVar26 = (undefined8 *******)(pbVar4 + -0x10);
    func_0x00010777d224(pbVar11,pbVar15 + 8);
    func_0x00010777d8d4();
    param_2 = *(byte **)pbVar11;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((pbVar4[-0x30] & 1) == 0) {
      func_0x00010777d724();
      pbVar15 = pbVar11;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      pbVar15 = pbVar11;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    pcVar27 = (code *)&UNK_1077794e4;
    func_0x00010777d638();
    pbVar4 = pbVar4 + -0xf0;
  }
  uVar9 = *(int *)(pbVar15 + 0x68) == 2;
  if ((bool)uVar9) {
    pbVar11 = param_2 + 8;
    *(byte **)(pbVar4 + -0x20) = pbVar16;
    *(byte **)(pbVar4 + -0x18) = param_1;
    *(undefined8 ********)(pbVar4 + -0x10) = pppppppuVar26;
    *(code **)(pbVar4 + -8) = pcVar27;
    pppppppuVar26 = (undefined8 *******)(pbVar4 + -0x10);
    func_0x00010777d224(pbVar11,pbVar15 + 8);
    func_0x00010777d904();
    param_2 = *(byte **)pbVar11;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((pbVar4[-0x30] & 1) == 0) {
      func_0x00010777d724();
      pbVar15 = pbVar11;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      pbVar15 = pbVar11;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    pcVar27 = FUN_107779578;
    func_0x00010777d638();
    pbVar4 = pbVar4 + -0xf0;
  }
  uVar9 = *(int *)(pbVar15 + 0x68) == 3;
  if ((bool)uVar9) {
    pbVar11 = param_2 + 8;
    param_2 = pbVar15 + 8;
    *(byte **)(pbVar4 + -0x20) = pbVar16;
    *(byte **)(pbVar4 + -0x18) = param_1;
    *(undefined8 ********)(pbVar4 + -0x10) = pppppppuVar26;
    *(code **)(pbVar4 + -8) = pcVar27;
    pppppppuVar26 = (undefined8 *******)(pbVar4 + -0x10);
    func_0x00010777d224(pbVar11);
    param_1 = pbVar4 + -0x60;
    func_0x000104c2fe00();
    func_0x00010777d454();
    func_0x00010777d304();
    func_0x00010777dbd0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    pbVar15 = param_1;
    func_0x00010777dbd0();
    pcVar27 = (code *)&LAB_1077795e4;
    func_0x00010777d638();
    pbVar4 = pbVar4 + -0x70;
  }
  uVar9 = *(int *)(pbVar15 + 0x68) == 4;
  if ((bool)uVar9) {
    *(byte **)(pbVar4 + -0x20) = pbVar16;
    *(byte **)(pbVar4 + -0x18) = param_1;
    *(undefined8 ********)(pbVar4 + -0x10) = pppppppuVar26;
    *(code **)(pbVar4 + -8) = pcVar27;
    pppppppuVar26 = (undefined8 *******)(pbVar4 + -0x10);
    func_0x00010777d224(param_2 + 8,pbVar15 + 8);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((pbVar4[-0x30] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    pcVar27 = (code *)&UNK_107779678;
    func_0x00010777d638();
    pbVar4 = pbVar4 + -0xf0;
  }
  puVar3 = pbVar4 + -0x120;
  *(undefined8 *)(pbVar4 + -0x50) = unaff_x26;
  *(ulong *)(pbVar4 + -0x48) = unaff_x25;
  *(byte **)(pbVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(pbVar4 + -0x38) = unaff_x23;
  *(undefined1 **)(pbVar4 + -0x30) = unaff_x22;
  *(byte **)(pbVar4 + -0x28) = pbVar22;
  *(byte **)(pbVar4 + -0x20) = pbVar16;
  *(byte **)(pbVar4 + -0x18) = param_1;
  *(undefined8 ********)(pbVar4 + -0x10) = pppppppuVar26;
  *(code **)(pbVar4 + -8) = pcVar27;
  puVar23 = pbVar4 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(pbVar4 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar9) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    puVar17 = *(undefined1 **)(pbVar16 + 8);
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((pbVar4[-0x60] & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    puVar12 = (undefined8 *)(pbVar4 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar9 = extraout_w8_06 == 6;
    if ((bool)uVar9) {
      unaff_x22 = pbVar4 + -0x110;
      func_0x00010777d6c8();
      puVar17 = *(undefined1 **)(pbVar16 + 8);
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((pbVar4[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar9 = extraout_w8_06 == 7;
    if ((bool)uVar9) {
      unaff_x22 = pbVar4 + -0x110;
      func_0x00010777d6bc();
      puVar17 = *(undefined1 **)(pbVar16 + 8);
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((pbVar4[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar9 = extraout_w8_06 == 8;
    if (!(bool)uVar9) {
      unaff_x22 = pbVar4 + -0x110;
      func_0x00010777d6d4();
      puVar17 = *(undefined1 **)(pbVar16 + 8);
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((pbVar4[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    *(undefined8 *)(pbVar4 + -0x90) = 0;
    *(undefined8 *)(pbVar4 + -0x88) = 0;
    *(undefined8 *)(pbVar4 + -0x98) = 0;
    func_0x00010777d398(*(long *)(pbVar22 + 8));
    func_0x0001072dd514(pbVar4 + -0x98);
    func_0x00010777de3c();
    do {
      uVar9 = pbVar22 == unaff_x24;
      if ((bool)uVar9) {
        puVar17 = pbVar4 + -0x98;
        func_0x0001073fb2d4(pbVar4 + -0x110);
        lVar20 = *(long *)(pbVar4 + -0x110);
        *(long *)(param_1 + 8) = *(long *)(pbVar4 + -0x108);
        *(long *)param_1 = lVar20;
        *(undefined8 *)(pbVar4 + -0x110) = 0;
        *(undefined8 *)(pbVar4 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c(pbVar4 + -0x110);
        goto code_r0x000107779838;
      }
      puVar17 = *(undefined1 **)pbVar16;
      func_0x000107323900(pbVar4 + -0x110,pbVar22);
      bVar19 = pbVar4[-0xd8];
      unaff_x25 = (ulong)bVar19;
      if ((bVar19 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar17 = pbVar4 + -0x110;
        func_0x0001072d17f4(pbVar4 + -0x98);
      }
      func_0x00010724b3d8(pbVar4 + -0x110);
      pbVar22 = pbVar22 + 0x70;
    } while ((bVar19 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779838:
    puVar12 = (undefined8 *)(pbVar4 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)(pbVar4 + -0x58));
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar13 = (undefined8 *)(pbVar4 + -0x98);
  func_0x00010724b3d8();
  puVar28 = &UNK_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar13 + 0xd) == 0) {
    puVar14 = (undefined8 *)(puVar17 + 8);
    puVar3 = pbVar4 + -0x250;
    *(undefined8 *)(pbVar4 + -0x150) = unaff_x28;
    *(undefined8 *)(pbVar4 + -0x148) = unaff_x27;
    *(undefined8 **)(pbVar4 + -0x140) = puVar12;
    *(byte **)(pbVar4 + -0x138) = param_1;
    *(undefined1 **)(pbVar4 + -0x130) = puVar23;
    *(undefined **)(pbVar4 + -0x128) = &UNK_1077798bc;
    puVar23 = pbVar4 + -0x130;
    func_0x00010777d1f4(puVar14,puVar13 + 1);
    *(undefined4 *)(pbVar4 + -0x1e8) = 0;
    puVar17 = (undefined1 *)*puVar14;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((pbVar4[-0x160] & 1) == 0) {
      func_0x00010777d724();
      puVar13 = puVar14;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar13 = puVar14;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar28 = &UNK_107779964;
    func_0x00010777d638();
    puVar12 = (undefined8 *)(pbVar4 + -0x250);
  }
  uVar9 = *(int *)(puVar13 + 0xd) == 1;
  if ((bool)uVar9) {
    puVar14 = (undefined8 *)(puVar17 + 8);
    puVar13 = puVar13 + 1;
    puVar5 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar12;
    *(byte **)(puVar3 + -0x18) = param_1;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(undefined **)(puVar3 + -8) = puVar28;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    puVar3[-0x128] = *(undefined1 *)puVar13;
    *(undefined4 *)(puVar3 + -200) = 1;
    puVar17 = (undefined1 *)*puVar14;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar13 = puVar14;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar13 = puVar14;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar28 = &UNK_107779a1c;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar12 = puVar5;
  }
  uVar9 = *(int *)(puVar13 + 0xd) == 2;
  if ((bool)uVar9) {
    puVar14 = (undefined8 *)(puVar17 + 8);
    puVar13 = puVar13 + 1;
    puVar6 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar12;
    *(byte **)(puVar3 + -0x18) = param_1;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(undefined **)(puVar3 + -8) = puVar28;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar3 + -0x128) = *puVar13;
    *(undefined4 *)(puVar3 + -200) = 2;
    puVar17 = (undefined1 *)*puVar14;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar13 = puVar14;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar13 = puVar14;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar28 = &UNK_107779ad4;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar12 = puVar6;
  }
  uVar9 = *(int *)(puVar13 + 0xd) == 3;
  if ((bool)uVar9) {
    puVar14 = puVar13 + 1;
    puVar13 = (undefined8 *)(puVar3 + -0x130);
    pbVar7 = puVar3 + -0x130;
    *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
    *(byte **)(puVar3 + -0x28) = pbVar22;
    *(undefined8 **)(puVar3 + -0x20) = puVar12;
    *(byte **)(puVar3 + -0x18) = param_1;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(undefined **)(puVar3 + -8) = puVar28;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4(puVar17 + 8,puVar14);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar28 = &UNK_107779b94;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar12 = (undefined8 *)(puVar17 + 8);
    pbVar22 = pbVar7;
  }
  uVar9 = *(int *)(puVar13 + 0xd) == 4;
  if ((bool)uVar9) {
    puVar13 = puVar13 + 1;
    puVar8 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar12;
    *(byte **)(puVar3 + -0x18) = param_1;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(undefined **)(puVar3 + -8) = puVar28;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    uVar29 = *puVar13;
    *(undefined8 *)(puVar3 + -0x120) = puVar13[1];
    *(undefined8 *)(puVar3 + -0x128) = uVar29;
    *(undefined4 *)(puVar3 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar28 = &UNK_107779c4c;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar12 = puVar8;
  }
  puVar17 = puVar3 + -0x150;
  puVar24 = puVar3 + -0x150;
  puVar25 = puVar3 + -0x150;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(ulong *)(puVar3 + -0x48) = unaff_x25;
  *(byte **)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
  *(byte **)(puVar3 + -0x28) = pbVar22;
  *(undefined8 **)(puVar3 + -0x20) = puVar12;
  *(byte **)(puVar3 + -0x18) = param_1;
  *(undefined1 **)(puVar3 + -0x10) = puVar23;
  *(undefined **)(puVar3 + -8) = puVar28;
  puVar23 = puVar3 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar3 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar9) {
    lVar20 = *(long *)(pbVar22 + 0x10);
    lVar30 = *(long *)(pbVar22 + 8);
    *(long *)(puVar3 + -0x140) = *(long *)(pbVar22 + 0x10);
    *(long *)(puVar3 + -0x148) = lVar30;
    if (lVar20 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    *(undefined4 *)(puVar3 + -0xe8) = 5;
    puVar18 = (undefined1 *)puVar12[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    pbVar22 = puVar3 + -0x150;
    puVar25 = unaff_x22;
    if ((puVar3[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      pbVar22 = puVar3 + -0x150;
      puVar24 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    pbVar15 = puVar3 + -0xa0;
    func_0x000107267ed0();
    unaff_x22 = puVar25;
  }
  else {
    uVar9 = extraout_w8_07 == 6;
    if ((bool)uVar9) {
      func_0x00010777d6c8();
      puVar18 = (undefined1 *)puVar12[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar25 = puVar3 + -0x150;
      if ((puVar3[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar24 = puVar3 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar25 = puVar24;
      goto code_r0x000107779dfc;
    }
    uVar9 = extraout_w8_07 == 7;
    if ((bool)uVar9) {
      func_0x00010777d6bc();
      puVar18 = (undefined1 *)puVar12[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar25 = puVar3 + -0x150;
      if ((puVar3[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar24 = puVar3 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar9 = extraout_w8_07 == 8;
    if (!(bool)uVar9) {
      func_0x00010777d6d4();
      puVar18 = (undefined1 *)puVar12[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((puVar3[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)(puVar3 + -0xd8) = 0;
    *(undefined8 *)(puVar3 + -0xd0) = 0;
    *(undefined8 *)(puVar3 + -0xe0) = 0;
    func_0x00010777d398(*(long *)(pbVar22 + 8));
    func_0x0001072ac134(puVar3 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar9 = pbVar22 == unaff_x24;
      if ((bool)uVar9) {
        puVar18 = puVar3 + -0xe0;
        func_0x000107327958(puVar3 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804(puVar3 + -0xa0,pbVar22,*puVar12);
      puVar18 = puVar3 + -0xa0;
      func_0x00010729d394(puVar3 + -0x150);
      func_0x000104c3323c(puVar3 + -0xa0);
      bVar19 = puVar3[-0x110];
      if ((bVar19 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar18 = puVar3 + -0x150;
        func_0x0001072d7f34(puVar3 + -0xe0);
      }
      func_0x000107267ed0(puVar3 + -0x150);
      pbVar22 = pbVar22 + 0x70;
    } while ((bVar19 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    pbVar15 = puVar3 + -0xe0;
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar3 + -0x58));
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  pbVar16 = puVar3 + -0xa0;
  func_0x000107267ed0();
  pcVar27 = FUN_107779ed8;
  func_0x00010777d9d0();
  uVar10 = (uint)pbVar15;
  uVar2 = SUB81(pbVar15,0);
  if (*(int *)(pbVar16 + 0x68) == 0) {
    pbVar4 = puVar18 + 8;
    puVar17 = puVar3 + -0x210;
    *(undefined1 **)(puVar3 + -0x180) = unaff_x22;
    *(byte **)(puVar3 + -0x178) = pbVar22;
    *(byte **)(puVar3 + -0x170) = pbVar15;
    *(byte **)(puVar3 + -0x168) = param_1;
    *(undefined1 **)(puVar3 + -0x160) = puVar23;
    *(code **)(puVar3 + -0x158) = FUN_107779ed8;
    puVar23 = puVar3 + -0x160;
    func_0x00010777d1f4(pbVar4,pbVar16 + 8);
    *(undefined4 *)(puVar3 + -0x198) = 0;
    puVar18 = *(undefined1 **)pbVar4;
    pbVar22 = puVar3 + -0x200;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar19 = extraout_w8;
    }
    else {
      puVar3[-0x201] = uVar2;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      bVar19 = 1;
    }
    param_1[0x10] = bVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    pcVar27 = (code *)&LAB_107779f6c;
    pbVar16 = pbVar4;
    func_0x00010777d638();
    param_1 = pbVar4;
  }
  uVar9 = *(int *)(pbVar16 + 0x68) == 1;
  if ((bool)uVar9) {
    pbVar4 = puVar18 + 8;
    *(undefined1 **)(puVar17 + -0x30) = unaff_x22;
    *(byte **)(puVar17 + -0x28) = pbVar22;
    *(byte **)(puVar17 + -0x20) = pbVar15;
    *(byte **)(puVar17 + -0x18) = param_1;
    *(undefined1 **)(puVar17 + -0x10) = puVar23;
    *(code **)(puVar17 + -8) = pcVar27;
    puVar23 = puVar17 + -0x10;
    func_0x00010777d1f4(pbVar4,pbVar16 + 8);
    pbVar22 = puVar17 + -0xb0;
    func_0x00010777dae0();
    puVar18 = *(undefined1 **)pbVar4;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar19 = extraout_w8_00;
    }
    else {
      puVar17[-0xb1] = uVar2;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      bVar19 = 1;
    }
    param_1[0x10] = bVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    pcVar27 = (code *)&UNK_10777a170;
    pbVar16 = pbVar4;
    func_0x00010777d638();
    puVar17 = puVar17 + -0xc0;
    param_1 = pbVar4;
  }
  uVar9 = *(int *)(pbVar16 + 0x68) == 2;
  if ((bool)uVar9) {
    pbVar4 = puVar18 + 8;
    *(undefined1 **)(puVar17 + -0x30) = unaff_x22;
    *(byte **)(puVar17 + -0x28) = pbVar22;
    *(byte **)(puVar17 + -0x20) = pbVar15;
    *(byte **)(puVar17 + -0x18) = param_1;
    *(undefined1 **)(puVar17 + -0x10) = puVar23;
    *(code **)(puVar17 + -8) = pcVar27;
    puVar23 = puVar17 + -0x10;
    func_0x00010777d1f4(pbVar4,pbVar16 + 8);
    pbVar22 = puVar17 + -0xb0;
    func_0x00010777dacc();
    puVar18 = *(undefined1 **)pbVar4;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar19 = extraout_w8_01;
    }
    else {
      puVar17[-0xb1] = uVar2;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      bVar19 = 1;
    }
    param_1[0x10] = bVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    pcVar27 = (code *)&UNK_10777a208;
    pbVar16 = pbVar4;
    func_0x00010777d638();
    puVar17 = puVar17 + -0xc0;
    param_1 = pbVar4;
  }
  uVar9 = *(int *)(pbVar16 + 0x68) == 3;
  if ((bool)uVar9) {
    pbVar4 = puVar18 + 8;
    *(undefined1 **)(puVar17 + -0x30) = unaff_x22;
    *(byte **)(puVar17 + -0x28) = pbVar22;
    *(byte **)(puVar17 + -0x20) = pbVar15;
    *(byte **)(puVar17 + -0x18) = param_1;
    *(undefined1 **)(puVar17 + -0x10) = puVar23;
    *(code **)(puVar17 + -8) = pcVar27;
    puVar23 = puVar17 + -0x10;
    pbVar15 = pbVar4;
    func_0x00010777d1f4(pbVar4,pbVar16 + 8);
    func_0x00010777dd10();
    puVar18 = *(undefined1 **)pbVar4;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)pbVar4 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar19 = extraout_w8_02;
    }
    else {
      puVar17[-0xb1] = (char)pbVar4;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      bVar19 = 1;
    }
    param_1[0x10] = bVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    pcVar27 = (code *)&UNK_10777a2a0;
    pbVar16 = pbVar15;
    func_0x00010777d638();
    puVar17 = puVar17 + -0xc0;
    param_1 = pbVar15;
    pbVar15 = pbVar4;
  }
  uVar9 = *(int *)(pbVar16 + 0x68) == 4;
  if ((bool)uVar9) {
    pbVar4 = puVar18 + 8;
    *(undefined1 **)(puVar17 + -0x30) = unaff_x22;
    *(byte **)(puVar17 + -0x28) = pbVar22;
    *(byte **)(puVar17 + -0x20) = pbVar15;
    *(byte **)(puVar17 + -0x18) = param_1;
    *(undefined1 **)(puVar17 + -0x10) = puVar23;
    *(code **)(puVar17 + -8) = pcVar27;
    puVar23 = puVar17 + -0x10;
    func_0x00010777d1f4(pbVar4,pbVar16 + 8);
    pbVar22 = puVar17 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)pbVar15 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar19 = extraout_w8_03;
    }
    else {
      puVar17[-0xb1] = (char)pbVar15;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      bVar19 = 1;
    }
    param_1[0x10] = bVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    pcVar27 = FUN_10777a338;
    pbVar16 = pbVar4;
    func_0x00010777d638();
    puVar17 = puVar17 + -0xc0;
    param_1 = pbVar4;
  }
  uVar10 = (uint)pbVar16;
  *(undefined1 **)(puVar17 + -0x30) = unaff_x22;
  *(byte **)(puVar17 + -0x28) = pbVar22;
  *(byte **)(puVar17 + -0x20) = pbVar15;
  *(byte **)(puVar17 + -0x18) = param_1;
  *(undefined1 **)(puVar17 + -0x10) = puVar23;
  *(code **)(puVar17 + -8) = pcVar27;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar9) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_02 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)pbVar15 >> 8 & 1) != 0) {
      puVar17[-0xc0] = (char)pbVar15;
      func_0x00010777d400();
      func_0x000107779f90();
      goto LAB_10777a490;
    }
LAB_10777a468:
    func_0x00010777d748();
    bVar19 = extraout_w8_04;
  }
  else {
    uVar9 = extraout_w8_08 == 6;
    if ((bool)uVar9) {
      unaff_x22 = puVar17 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar10 >> 8 & 1) == 0) goto LAB_10777a468;
      puVar17[-0xc0] = (char)uVar10;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar9 = extraout_w8_08 == 7;
      if ((bool)uVar9) {
        unaff_x22 = puVar17 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar10 >> 8 & 1) == 0) goto LAB_10777a468;
        puVar17[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar9 = extraout_w8_08 == 8;
        if ((bool)uVar9) {
          func_0x00010777dce0();
          func_0x00010777d398(*(long *)(pbVar22 + 8));
          func_0x0001075356bc(puVar17 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(pbVar22 + 8))[1];
          for (puVar23 = (undefined1 *)**(undefined8 **)(pbVar22 + 8); uVar9 = puVar23 == unaff_x22,
              !(bool)uVar9; puVar23 = puVar23 + 0x70) {
            puVar3 = puVar23;
            func_0x000107775a54(puVar23,*(long *)pbVar15);
            *(short *)(puVar17 + -0xc0) = (short)puVar3;
            if (((uint)puVar3 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto LAB_10777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
LAB_10777a4b4:
          func_0x0001074048e8(puVar17 + -0xb0);
          goto LAB_10777a4a0;
        }
        unaff_x22 = puVar17 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar10 >> 8 & 1) == 0) goto LAB_10777a468;
        puVar17[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
LAB_10777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    bVar19 = 1;
  }
  param_1[0x10] = bVar19;
LAB_10777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar17 + -0xd0) = puVar17 + -0x10;
  *(undefined **)(puVar17 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779578; end: 10777959b;  */

void FUN_107779578(byte *param_1,byte *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  byte extraout_w8;
  byte bVar17;
  byte extraout_w8_00;
  byte extraout_w8_01;
  byte extraout_w8_02;
  byte extraout_w8_03;
  byte extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar18;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  byte *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar19;
  undefined1 *unaff_x22;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar22;
  code *pcVar23;
  undefined8 uVar24;
  byte abStack_e40 [3616];
  
  uVar7 = *(int *)(param_1 + 0x68) == 3;
  if ((bool)uVar7) {
    pbVar12 = param_2 + 8;
    param_2 = param_1 + 8;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224(pbVar12);
    unaff_x19 = abStack_e40 + 0xde0;
    func_0x000104c2fe00();
    func_0x00010777d454();
    func_0x00010777d304();
    func_0x00010777dbd0();
    func_0x00010777d20c();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    param_1 = unaff_x19;
    func_0x00010777dbd0();
    unaff_x30 = &LAB_1077795e4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_e40 + 0xdd0);
  }
  uVar7 = *(int *)(param_1 + 0x68) == 4;
  if ((bool)uVar7) {
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224(param_2 + 8,param_1 + 8);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x30) & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    unaff_x30 = &UNK_107779678;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  }
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x120);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar19 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar7) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    puVar15 = (undefined1 *)unaff_x20[1];
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0x60) & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    puVar9 = (undefined8 *)((long)register0x00000008 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar7 = extraout_w8_05 == 6;
    if ((bool)uVar7) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x110);
      func_0x00010777d6c8();
      puVar15 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar7 = extraout_w8_05 == 7;
    if ((bool)uVar7) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x110);
      func_0x00010777d6bc();
      puVar15 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar7 = extraout_w8_05 == 8;
    if (!(bool)uVar7) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x110);
      func_0x00010777d6d4();
      puVar15 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072dd514((undefined1 *)((long)register0x00000008 + -0x98));
    func_0x00010777de3c();
    do {
      uVar7 = unaff_x21 == unaff_x24;
      if ((bool)uVar7) {
        puVar15 = (undefined1 *)((long)register0x00000008 + -0x98);
        func_0x0001073fb2d4((undefined1 *)((long)register0x00000008 + -0x110));
        uVar24 = *(undefined8 *)((long)register0x00000008 + -0x110);
        *(undefined8 *)(unaff_x19 + 8) = *(undefined8 *)((long)register0x00000008 + -0x108);
        *(undefined8 *)unaff_x19 = uVar24;
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c((undefined1 *)((long)register0x00000008 + -0x110));
        goto code_r0x000107779838;
      }
      puVar15 = (undefined1 *)*unaff_x20;
      func_0x000107323900((undefined1 *)((long)register0x00000008 + -0x110),unaff_x21);
      bVar17 = *(byte *)((long)register0x00000008 + -0xd8);
      unaff_x25 = (ulong)bVar17;
      if ((bVar17 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar15 = (undefined1 *)((long)register0x00000008 + -0x110);
        func_0x0001072d17f4((undefined1 *)((long)register0x00000008 + -0x98));
      }
      func_0x00010724b3d8((undefined1 *)((long)register0x00000008 + -0x110));
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar17 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779838:
    puVar9 = (undefined8 *)((long)register0x00000008 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)((long)register0x00000008 + -0x58));
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar10 = (undefined8 *)((long)register0x00000008 + -0x98);
  func_0x00010724b3d8();
  puVar22 = &UNK_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar10 + 0xd) == 0) {
    puVar11 = (undefined8 *)(puVar15 + 8);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x250);
    *(undefined8 *)((long)register0x00000008 + -0x150) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x148) = unaff_x27;
    *(undefined8 **)((long)register0x00000008 + -0x140) = puVar9;
    *(byte **)((long)register0x00000008 + -0x138) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x130) = puVar19;
    *(undefined **)((long)register0x00000008 + -0x128) = &UNK_1077798bc;
    puVar19 = (undefined1 *)((long)register0x00000008 + -0x130);
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    *(undefined4 *)((long)register0x00000008 + -0x1e8) = 0;
    puVar15 = (undefined1 *)*puVar11;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x160) & 1) == 0) {
      func_0x00010777d724();
      puVar10 = puVar11;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar10 = puVar11;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar22 = &UNK_107779964;
    func_0x00010777d638();
    puVar9 = (undefined8 *)((long)register0x00000008 + -0x250);
  }
  uVar7 = *(int *)(puVar10 + 0xd) == 1;
  if ((bool)uVar7) {
    puVar11 = (undefined8 *)(puVar15 + 8);
    puVar10 = puVar10 + 1;
    puVar3 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar9;
    *(byte **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar19;
    *(undefined **)(puVar2 + -8) = puVar22;
    puVar19 = puVar2 + -0x10;
    func_0x00010777d1f4();
    puVar2[-0x128] = *(undefined1 *)puVar10;
    *(undefined4 *)(puVar2 + -200) = 1;
    puVar15 = (undefined1 *)*puVar11;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar10 = puVar11;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar10 = puVar11;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar22 = &UNK_107779a1c;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar9 = puVar3;
  }
  uVar7 = *(int *)(puVar10 + 0xd) == 2;
  if ((bool)uVar7) {
    puVar11 = (undefined8 *)(puVar15 + 8);
    puVar10 = puVar10 + 1;
    puVar4 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar9;
    *(byte **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar19;
    *(undefined **)(puVar2 + -8) = puVar22;
    puVar19 = puVar2 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar2 + -0x128) = *puVar10;
    *(undefined4 *)(puVar2 + -200) = 2;
    puVar15 = (undefined1 *)*puVar11;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar10 = puVar11;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar10 = puVar11;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar22 = &UNK_107779ad4;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar9 = puVar4;
  }
  uVar7 = *(int *)(puVar10 + 0xd) == 3;
  if ((bool)uVar7) {
    puVar11 = puVar10 + 1;
    puVar10 = (undefined8 *)(puVar2 + -0x130);
    puVar5 = puVar2 + -0x130;
    *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x20) = puVar9;
    *(byte **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar19;
    *(undefined **)(puVar2 + -8) = puVar22;
    puVar19 = puVar2 + -0x10;
    func_0x00010777d1f4(puVar15 + 8,puVar11);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar22 = &UNK_107779b94;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar9 = (undefined8 *)(puVar15 + 8);
    unaff_x21 = puVar5;
  }
  uVar7 = *(int *)(puVar10 + 0xd) == 4;
  if ((bool)uVar7) {
    puVar10 = puVar10 + 1;
    puVar6 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar9;
    *(byte **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar19;
    *(undefined **)(puVar2 + -8) = puVar22;
    puVar19 = puVar2 + -0x10;
    func_0x00010777d1f4();
    uVar24 = *puVar10;
    *(undefined8 *)(puVar2 + -0x120) = puVar10[1];
    *(undefined8 *)(puVar2 + -0x128) = uVar24;
    *(undefined4 *)(puVar2 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar22 = &UNK_107779c4c;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar9 = puVar6;
  }
  puVar15 = puVar2 + -0x150;
  puVar20 = puVar2 + -0x150;
  puVar21 = puVar2 + -0x150;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(ulong *)(puVar2 + -0x48) = unaff_x25;
  *(undefined1 **)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar2 + -0x20) = puVar9;
  *(byte **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar19;
  *(undefined **)(puVar2 + -8) = puVar22;
  puVar19 = puVar2 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar2 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar7) {
    lVar18 = *(long *)(unaff_x21 + 0x10);
    uVar24 = *(undefined8 *)(unaff_x21 + 8);
    *(undefined8 *)(puVar2 + -0x140) = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined8 *)(puVar2 + -0x148) = uVar24;
    if (lVar18 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    *(undefined4 *)(puVar2 + -0xe8) = 5;
    puVar16 = (undefined1 *)puVar9[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = puVar2 + -0x150;
    puVar21 = unaff_x22;
    if ((puVar2[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = puVar2 + -0x150;
      puVar20 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    pbVar12 = puVar2 + -0xa0;
    func_0x000107267ed0();
    unaff_x22 = puVar21;
  }
  else {
    uVar7 = extraout_w8_06 == 6;
    if ((bool)uVar7) {
      func_0x00010777d6c8();
      puVar16 = (undefined1 *)puVar9[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar21 = puVar2 + -0x150;
      if ((puVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar20 = puVar2 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar21 = puVar20;
      goto code_r0x000107779dfc;
    }
    uVar7 = extraout_w8_06 == 7;
    if ((bool)uVar7) {
      func_0x00010777d6bc();
      puVar16 = (undefined1 *)puVar9[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar21 = puVar2 + -0x150;
      if ((puVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar20 = puVar2 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar7 = extraout_w8_06 == 8;
    if (!(bool)uVar7) {
      func_0x00010777d6d4();
      puVar16 = (undefined1 *)puVar9[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((puVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)(puVar2 + -0xd8) = 0;
    *(undefined8 *)(puVar2 + -0xd0) = 0;
    *(undefined8 *)(puVar2 + -0xe0) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072ac134(puVar2 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar7 = unaff_x21 == unaff_x24;
      if ((bool)uVar7) {
        puVar16 = puVar2 + -0xe0;
        func_0x000107327958(puVar2 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804(puVar2 + -0xa0,unaff_x21,*puVar9);
      puVar16 = puVar2 + -0xa0;
      func_0x00010729d394(puVar2 + -0x150);
      func_0x000104c3323c(puVar2 + -0xa0);
      bVar17 = puVar2[-0x110];
      if ((bVar17 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar16 = puVar2 + -0x150;
        func_0x0001072d7f34(puVar2 + -0xe0);
      }
      func_0x000107267ed0(puVar2 + -0x150);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar17 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    pbVar12 = puVar2 + -0xe0;
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar2 + -0x58));
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  pbVar13 = puVar2 + -0xa0;
  func_0x000107267ed0();
  pcVar23 = FUN_107779ed8;
  func_0x00010777d9d0();
  uVar8 = (uint)pbVar12;
  uVar1 = SUB81(pbVar12,0);
  if (*(int *)(pbVar13 + 0x68) == 0) {
    pbVar14 = puVar16 + 8;
    puVar15 = puVar2 + -0x210;
    *(undefined1 **)(puVar2 + -0x180) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x178) = unaff_x21;
    *(byte **)(puVar2 + -0x170) = pbVar12;
    *(byte **)(puVar2 + -0x168) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x160) = puVar19;
    *(code **)(puVar2 + -0x158) = FUN_107779ed8;
    puVar19 = puVar2 + -0x160;
    func_0x00010777d1f4(pbVar14,pbVar13 + 8);
    *(undefined4 *)(puVar2 + -0x198) = 0;
    puVar16 = *(undefined1 **)pbVar14;
    unaff_x21 = puVar2 + -0x200;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar17 = extraout_w8;
    }
    else {
      puVar2[-0x201] = uVar1;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      bVar17 = 1;
    }
    unaff_x19[0x10] = bVar17;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    pcVar23 = (code *)&LAB_107779f6c;
    pbVar13 = pbVar14;
    func_0x00010777d638();
    unaff_x19 = pbVar14;
  }
  uVar7 = *(int *)(pbVar13 + 0x68) == 1;
  if ((bool)uVar7) {
    pbVar14 = puVar16 + 8;
    *(undefined1 **)(puVar15 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar15 + -0x28) = unaff_x21;
    *(byte **)(puVar15 + -0x20) = pbVar12;
    *(byte **)(puVar15 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar15 + -0x10) = puVar19;
    *(code **)(puVar15 + -8) = pcVar23;
    puVar19 = puVar15 + -0x10;
    func_0x00010777d1f4(pbVar14,pbVar13 + 8);
    unaff_x21 = puVar15 + -0xb0;
    func_0x00010777dae0();
    puVar16 = *(undefined1 **)pbVar14;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar17 = extraout_w8_00;
    }
    else {
      puVar15[-0xb1] = uVar1;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      bVar17 = 1;
    }
    unaff_x19[0x10] = bVar17;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    pcVar23 = (code *)&UNK_10777a170;
    pbVar13 = pbVar14;
    func_0x00010777d638();
    puVar15 = puVar15 + -0xc0;
    unaff_x19 = pbVar14;
  }
  uVar7 = *(int *)(pbVar13 + 0x68) == 2;
  if ((bool)uVar7) {
    pbVar14 = puVar16 + 8;
    *(undefined1 **)(puVar15 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar15 + -0x28) = unaff_x21;
    *(byte **)(puVar15 + -0x20) = pbVar12;
    *(byte **)(puVar15 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar15 + -0x10) = puVar19;
    *(code **)(puVar15 + -8) = pcVar23;
    puVar19 = puVar15 + -0x10;
    func_0x00010777d1f4(pbVar14,pbVar13 + 8);
    unaff_x21 = puVar15 + -0xb0;
    func_0x00010777dacc();
    puVar16 = *(undefined1 **)pbVar14;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar17 = extraout_w8_01;
    }
    else {
      puVar15[-0xb1] = uVar1;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      bVar17 = 1;
    }
    unaff_x19[0x10] = bVar17;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    pcVar23 = (code *)&UNK_10777a208;
    pbVar13 = pbVar14;
    func_0x00010777d638();
    puVar15 = puVar15 + -0xc0;
    unaff_x19 = pbVar14;
  }
  uVar7 = *(int *)(pbVar13 + 0x68) == 3;
  if ((bool)uVar7) {
    pbVar14 = puVar16 + 8;
    *(undefined1 **)(puVar15 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar15 + -0x28) = unaff_x21;
    *(byte **)(puVar15 + -0x20) = pbVar12;
    *(byte **)(puVar15 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar15 + -0x10) = puVar19;
    *(code **)(puVar15 + -8) = pcVar23;
    puVar19 = puVar15 + -0x10;
    pbVar12 = pbVar14;
    func_0x00010777d1f4(pbVar14,pbVar13 + 8);
    func_0x00010777dd10();
    puVar16 = *(undefined1 **)pbVar14;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)pbVar14 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar17 = extraout_w8_02;
    }
    else {
      puVar15[-0xb1] = (char)pbVar14;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      bVar17 = 1;
    }
    unaff_x19[0x10] = bVar17;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    pcVar23 = (code *)&UNK_10777a2a0;
    pbVar13 = pbVar12;
    func_0x00010777d638();
    puVar15 = puVar15 + -0xc0;
    unaff_x19 = pbVar12;
    pbVar12 = pbVar14;
  }
  uVar7 = *(int *)(pbVar13 + 0x68) == 4;
  if ((bool)uVar7) {
    pbVar14 = puVar16 + 8;
    *(undefined1 **)(puVar15 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar15 + -0x28) = unaff_x21;
    *(byte **)(puVar15 + -0x20) = pbVar12;
    *(byte **)(puVar15 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar15 + -0x10) = puVar19;
    *(code **)(puVar15 + -8) = pcVar23;
    puVar19 = puVar15 + -0x10;
    func_0x00010777d1f4(pbVar14,pbVar13 + 8);
    unaff_x21 = puVar15 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)pbVar12 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar17 = extraout_w8_03;
    }
    else {
      puVar15[-0xb1] = (char)pbVar12;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      bVar17 = 1;
    }
    unaff_x19[0x10] = bVar17;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    pcVar23 = FUN_10777a338;
    pbVar13 = pbVar14;
    func_0x00010777d638();
    puVar15 = puVar15 + -0xc0;
    unaff_x19 = pbVar14;
  }
  uVar8 = (uint)pbVar13;
  *(undefined1 **)(puVar15 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar15 + -0x28) = unaff_x21;
  *(byte **)(puVar15 + -0x20) = pbVar12;
  *(byte **)(puVar15 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar15 + -0x10) = puVar19;
  *(code **)(puVar15 + -8) = pcVar23;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar7) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)pbVar12 >> 8 & 1) != 0) {
      puVar15[-0xc0] = (char)pbVar12;
      func_0x00010777d400();
      func_0x000107779f90();
      goto LAB_10777a490;
    }
LAB_10777a468:
    func_0x00010777d748();
    bVar17 = extraout_w8_04;
  }
  else {
    uVar7 = extraout_w8_07 == 6;
    if ((bool)uVar7) {
      unaff_x22 = puVar15 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar8 >> 8 & 1) == 0) goto LAB_10777a468;
      puVar15[-0xc0] = (char)uVar8;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar7 = extraout_w8_07 == 7;
      if ((bool)uVar7) {
        unaff_x22 = puVar15 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar8 >> 8 & 1) == 0) goto LAB_10777a468;
        puVar15[-0xc0] = (char)uVar8;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar7 = extraout_w8_07 == 8;
        if ((bool)uVar7) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar15 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar19 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8);
              uVar7 = puVar19 == unaff_x22, !(bool)uVar7; puVar19 = puVar19 + 0x70) {
            puVar2 = puVar19;
            func_0x000107775a54(puVar19,*(undefined8 *)pbVar12);
            *(short *)(puVar15 + -0xc0) = (short)puVar2;
            if (((uint)puVar2 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto LAB_10777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
LAB_10777a4b4:
          func_0x0001074048e8(puVar15 + -0xb0);
          goto LAB_10777a4a0;
        }
        unaff_x22 = puVar15 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar8 >> 8 & 1) == 0) goto LAB_10777a468;
        puVar15[-0xc0] = (char)uVar8;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
LAB_10777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    bVar17 = 1;
  }
  unaff_x19[0x10] = bVar17;
LAB_10777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar15 + -0xd0) = puVar15 + -0x10;
  *(undefined **)(puVar15 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779988; end: 107779a1b;  */

void FUN_107779988(long *param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 extraout_w8;
  undefined1 uVar15;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar16;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined1 *puVar17;
  undefined1 *unaff_x22;
  undefined1 *puVar18;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar19;
  undefined *puVar20;
  code *pcVar21;
  undefined8 uVar22;
  byte abStack_a90 [2104];
  long lStack_258;
  undefined4 uStack_1f8;
  byte bStack_170;
  undefined8 ******ppppppuStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined1 uStack_128;
  undefined4 uStack_c8;
  byte bStack_40;
  
  pbVar4 = auStack_130;
  pppppppuVar19 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  uStack_128 = *param_2;
  uStack_c8 = 1;
  lVar13 = *param_1;
  func_0x00010777d4cc();
  func_0x00010777d6b0();
  func_0x00010777d928();
  func_0x00010777d648();
  if ((bStack_40 & 1) == 0) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777d6a4();
    func_0x00010777d2ac();
    func_0x00010777d2d4();
    func_0x00010777d7d0();
  }
  func_0x00010777d8ac();
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d6e0();
  func_0x00010777d8ac();
  puVar20 = &UNK_107779a1c;
  func_0x00010777d638();
  uVar6 = (int)param_1[0xd] == 2;
  if ((bool)uVar6) {
    plVar8 = (long *)(lVar13 + 8);
    param_1 = param_1 + 1;
    pbVar4 = abStack_a90 + 0x830;
    puStack_138 = &UNK_107779a1c;
    ppppppuStack_140 = pppppppuVar19;
    func_0x00010777d1f4();
    lStack_258 = *param_1;
    uStack_1f8 = 2;
    lVar13 = *plVar8;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((bStack_170 & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar8;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      param_1 = plVar8;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779ad4;
    func_0x00010777d638();
    pppppppuVar19 = &ppppppuStack_140;
  }
  uVar6 = (int)param_1[0xd] == 3;
  puVar9 = (undefined8 *)pbVar4;
  if ((bool)uVar6) {
    plVar8 = param_1 + 1;
    param_1 = (long *)((long)pbVar4 + -0x130);
    puVar2 = (undefined8 *)((long)pbVar4 + -0x130);
    *(undefined1 **)((long)pbVar4 + -0x30) = unaff_x22;
    *(undefined8 **)((long)pbVar4 + -0x28) = unaff_x21;
    *(byte **)((long)pbVar4 + -0x20) = pbVar4;
    *(undefined8 **)((long)pbVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)pbVar4 + -0x10) = pppppppuVar19;
    *(undefined **)((long)pbVar4 + -8) = puVar20;
    pppppppuVar19 = (undefined8 *******)((long)pbVar4 + -0x10);
    func_0x00010777d1f4((undefined8 *)(lVar13 + 8),plVar8);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((*(byte *)((long)pbVar4 + -0x40) & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779b94;
    func_0x00010777d638();
    pbVar4 = (byte *)((long)pbVar4 + -0x130);
    puVar9 = (undefined8 *)(lVar13 + 8);
    unaff_x21 = puVar2;
  }
  uVar6 = (int)param_1[0xd] == 4;
  if ((bool)uVar6) {
    param_1 = param_1 + 1;
    puVar3 = (undefined8 *)(pbVar4 + -0x130);
    *(undefined8 *)(pbVar4 + -0x30) = unaff_x28;
    *(undefined8 *)(pbVar4 + -0x28) = unaff_x27;
    *(undefined8 **)(pbVar4 + -0x20) = puVar9;
    *(undefined8 **)(pbVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar4 + -0x10) = pppppppuVar19;
    *(undefined **)(pbVar4 + -8) = puVar20;
    pppppppuVar19 = (undefined8 *******)(pbVar4 + -0x10);
    func_0x00010777d1f4();
    lVar13 = *param_1;
    *(long *)(pbVar4 + -0x120) = param_1[1];
    *(long *)(pbVar4 + -0x128) = lVar13;
    *(undefined4 *)(pbVar4 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((pbVar4[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779c4c;
    func_0x00010777d638();
    pbVar4 = pbVar4 + -0x130;
    puVar9 = puVar3;
  }
  puVar5 = pbVar4 + -0x150;
  puVar18 = pbVar4 + -0x150;
  puVar12 = pbVar4 + -0x150;
  *(undefined8 *)(pbVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(pbVar4 + -0x48) = unaff_x25;
  *(undefined1 **)(pbVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(pbVar4 + -0x38) = unaff_x23;
  *(undefined1 **)(pbVar4 + -0x30) = unaff_x22;
  *(undefined8 **)(pbVar4 + -0x28) = unaff_x21;
  *(undefined8 **)(pbVar4 + -0x20) = puVar9;
  *(undefined8 **)(pbVar4 + -0x18) = unaff_x19;
  *(undefined8 ********)(pbVar4 + -0x10) = pppppppuVar19;
  *(undefined **)(pbVar4 + -8) = puVar20;
  puVar17 = pbVar4 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(pbVar4 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar6) {
    lVar13 = *(long *)((long)unaff_x21 + 0x10);
    uVar22 = *(undefined8 *)((long)unaff_x21 + 8);
    *(undefined8 *)(pbVar4 + -0x140) = *(undefined8 *)((long)unaff_x21 + 0x10);
    *(undefined8 *)(pbVar4 + -0x148) = uVar22;
    if (lVar13 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    *(undefined4 *)(pbVar4 + -0xe8) = 5;
    puVar14 = (undefined1 *)puVar9[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = (undefined8 *)(pbVar4 + -0x150);
    puVar12 = unaff_x22;
    if ((pbVar4[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = (undefined8 *)(pbVar4 + -0x150);
      puVar18 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    puVar9 = (undefined8 *)(pbVar4 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar12;
  }
  else {
    uVar6 = extraout_w8_05 == 6;
    if ((bool)uVar6) {
      func_0x00010777d6c8();
      puVar14 = (undefined1 *)puVar9[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar12 = pbVar4 + -0x150;
      if ((pbVar4[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar18 = pbVar4 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar18;
      goto code_r0x000107779dfc;
    }
    uVar6 = extraout_w8_05 == 7;
    if ((bool)uVar6) {
      func_0x00010777d6bc();
      puVar14 = (undefined1 *)puVar9[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar12 = pbVar4 + -0x150;
      if ((pbVar4[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar18 = pbVar4 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar6 = extraout_w8_05 == 8;
    if (!(bool)uVar6) {
      func_0x00010777d6d4();
      puVar14 = (undefined1 *)puVar9[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((pbVar4[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)(pbVar4 + -0xd8) = 0;
    *(undefined8 *)(pbVar4 + -0xd0) = 0;
    *(undefined8 *)(pbVar4 + -0xe0) = 0;
    func_0x00010777d398(*(undefined8 *)((long)unaff_x21 + 8));
    func_0x0001072ac134(pbVar4 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar6 = unaff_x21 == (undefined8 *)unaff_x24;
      if ((bool)uVar6) {
        puVar14 = pbVar4 + -0xe0;
        func_0x000107327958(pbVar4 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804(pbVar4 + -0xa0,unaff_x21,*puVar9);
      puVar14 = pbVar4 + -0xa0;
      func_0x00010729d394(pbVar4 + -0x150);
      func_0x000104c3323c(pbVar4 + -0xa0);
      bVar1 = pbVar4[-0x110];
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar14 = pbVar4 + -0x150;
        func_0x0001072d7f34(pbVar4 + -0xe0);
      }
      func_0x000107267ed0(pbVar4 + -0x150);
      unaff_x21 = (undefined8 *)((long)unaff_x21 + 0x70);
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    puVar9 = (undefined8 *)(pbVar4 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(pbVar4 + -0x58));
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar10 = (undefined8 *)(pbVar4 + -0xa0);
  func_0x000107267ed0();
  pcVar21 = FUN_107779ed8;
  func_0x00010777d9d0();
  uVar7 = (uint)puVar9;
  uVar16 = SUB81(puVar9,0);
  if (*(int *)(puVar10 + 0xd) == 0) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    puVar5 = pbVar4 + -0x210;
    *(undefined1 **)(pbVar4 + -0x180) = unaff_x22;
    *(undefined8 **)(pbVar4 + -0x178) = unaff_x21;
    *(undefined8 **)(pbVar4 + -0x170) = puVar9;
    *(undefined8 **)(pbVar4 + -0x168) = unaff_x19;
    *(undefined1 **)(pbVar4 + -0x160) = puVar17;
    *(code **)(pbVar4 + -0x158) = FUN_107779ed8;
    puVar17 = pbVar4 + -0x160;
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    *(undefined4 *)(pbVar4 + -0x198) = 0;
    puVar14 = (undefined1 *)*puVar11;
    unaff_x21 = (undefined8 *)(pbVar4 + -0x200);
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar7 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8;
    }
    else {
      pbVar4[-0x201] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = (code *)&LAB_107779f6c;
    puVar10 = puVar11;
    func_0x00010777d638();
    unaff_x19 = puVar11;
  }
  uVar6 = *(int *)(puVar10 + 0xd) == 1;
  if ((bool)uVar6) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 **)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar5 + -0x20) = puVar9;
    *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = puVar17;
    *(code **)(puVar5 + -8) = pcVar21;
    puVar17 = puVar5 + -0x10;
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    unaff_x21 = (undefined8 *)(puVar5 + -0xb0);
    func_0x00010777dae0();
    puVar14 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar7 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_00;
    }
    else {
      puVar5[-0xb1] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = (code *)&UNK_10777a170;
    puVar10 = puVar11;
    func_0x00010777d638();
    puVar5 = puVar5 + -0xc0;
    unaff_x19 = puVar11;
  }
  uVar6 = *(int *)(puVar10 + 0xd) == 2;
  if ((bool)uVar6) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 **)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar5 + -0x20) = puVar9;
    *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = puVar17;
    *(code **)(puVar5 + -8) = pcVar21;
    puVar17 = puVar5 + -0x10;
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    unaff_x21 = (undefined8 *)(puVar5 + -0xb0);
    func_0x00010777dacc();
    puVar14 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar7 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_01;
    }
    else {
      puVar5[-0xb1] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = (code *)&UNK_10777a208;
    puVar10 = puVar11;
    func_0x00010777d638();
    puVar5 = puVar5 + -0xc0;
    unaff_x19 = puVar11;
  }
  uVar6 = *(int *)(puVar10 + 0xd) == 3;
  if ((bool)uVar6) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 **)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar5 + -0x20) = puVar9;
    *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = puVar17;
    *(code **)(puVar5 + -8) = pcVar21;
    puVar17 = puVar5 + -0x10;
    puVar9 = puVar11;
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    func_0x00010777dd10();
    puVar14 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar11 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_02;
    }
    else {
      puVar5[-0xb1] = (char)puVar11;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = (code *)&UNK_10777a2a0;
    puVar10 = puVar9;
    func_0x00010777d638();
    puVar5 = puVar5 + -0xc0;
    unaff_x19 = puVar9;
    puVar9 = puVar11;
  }
  uVar6 = *(int *)(puVar10 + 0xd) == 4;
  if ((bool)uVar6) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 **)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar5 + -0x20) = puVar9;
    *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = puVar17;
    *(code **)(puVar5 + -8) = pcVar21;
    puVar17 = puVar5 + -0x10;
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    unaff_x21 = (undefined8 *)(puVar5 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_03;
    }
    else {
      puVar5[-0xb1] = (char)puVar9;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = FUN_10777a338;
    puVar10 = puVar11;
    func_0x00010777d638();
    puVar5 = puVar5 + -0xc0;
    unaff_x19 = puVar11;
  }
  uVar7 = (uint)puVar10;
  *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
  *(undefined8 **)(puVar5 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar5 + -0x20) = puVar9;
  *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = puVar17;
  *(code **)(puVar5 + -8) = pcVar21;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar6) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar9 >> 8 & 1) != 0) {
      puVar5[-0xc0] = (char)puVar9;
      func_0x00010777d400();
      func_0x000107779f90();
      goto LAB_10777a490;
    }
LAB_10777a468:
    func_0x00010777d748();
    uVar16 = extraout_w8_04;
  }
  else {
    uVar6 = extraout_w8_06 == 6;
    if ((bool)uVar6) {
      unaff_x22 = puVar5 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar7 >> 8 & 1) == 0) goto LAB_10777a468;
      puVar5[-0xc0] = (char)uVar7;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar6 = extraout_w8_06 == 7;
      if ((bool)uVar6) {
        unaff_x22 = puVar5 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar7 >> 8 & 1) == 0) goto LAB_10777a468;
        puVar5[-0xc0] = (char)uVar7;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar6 = extraout_w8_06 == 8;
        if ((bool)uVar6) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)((long)unaff_x21 + 8));
          func_0x0001075356bc(puVar5 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)((long)unaff_x21 + 8))[1];
          for (puVar17 = (undefined1 *)**(undefined8 **)((long)unaff_x21 + 8);
              uVar6 = puVar17 == unaff_x22, !(bool)uVar6; puVar17 = puVar17 + 0x70) {
            puVar12 = puVar17;
            func_0x000107775a54(puVar17,*puVar9);
            *(short *)(puVar5 + -0xc0) = (short)puVar12;
            if (((uint)puVar12 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto LAB_10777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
LAB_10777a4b4:
          func_0x0001074048e8(puVar5 + -0xb0);
          goto LAB_10777a4a0;
        }
        unaff_x22 = puVar5 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar7 >> 8 & 1) == 0) goto LAB_10777a468;
        puVar5[-0xc0] = (char)uVar7;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
LAB_10777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar16 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar16;
LAB_10777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar5 + -0xd0) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779ed8; end: 107779ef7;  */

void FUN_107779ed8(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 uVar6;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  long extraout_x8;
  int extraout_w10;
  long *unaff_x19;
  uint uVar7;
  long *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar8;
  undefined1 *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_480 [976];
  undefined1 auStack_b0 [104];
  undefined4 uStack_48;
  
  uVar7 = (uint)unaff_x20;
  uVar2 = SUB81(unaff_x20,0);
  if ((int)param_1[0xd] == 0) {
    plVar3 = (long *)(param_2 + 8);
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4(plVar3,param_1 + 1);
    uStack_48 = 0;
    param_2 = *plVar3;
    unaff_x21 = auStack_b0;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar7 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar1 = extraout_w8;
    }
    else {
      auStack_480[0x3cf] = uVar2;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar1 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar1;
    func_0x00010777d1dc();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&LAB_107779f6c;
    param_1 = plVar3;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(auStack_480 + 0x3c0);
    unaff_x19 = plVar3;
  }
  uVar1 = (int)param_1[0xd] == 1;
  if ((bool)uVar1) {
    plVar3 = (long *)(param_2 + 8);
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4(plVar3,param_1 + 1);
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x00010777dae0();
    param_2 = *plVar3;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar7 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar6 = extraout_w8_00;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0xb1) = uVar2;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar6 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar6;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&UNK_10777a170;
    param_1 = plVar3;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar3;
  }
  uVar1 = (int)param_1[0xd] == 2;
  if ((bool)uVar1) {
    plVar3 = (long *)(param_2 + 8);
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4(plVar3,param_1 + 1);
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x00010777dacc();
    param_2 = *plVar3;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar7 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar2 = extraout_w8_01;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0xb1) = uVar2;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar2 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar2;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&UNK_10777a208;
    param_1 = plVar3;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar3;
  }
  uVar2 = (int)param_1[0xd] == 3;
  if ((bool)uVar2) {
    plVar3 = (long *)(param_2 + 8);
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar4 = plVar3;
    func_0x00010777d1f4(plVar3,param_1 + 1);
    func_0x00010777dd10();
    param_2 = *plVar3;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar3 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar1 = extraout_w8_02;
    }
    else {
      *(char *)((long)register0x00000008 + -0xb1) = (char)plVar3;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar1 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar1;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&UNK_10777a2a0;
    param_1 = plVar4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar4;
    unaff_x20 = plVar3;
  }
  uVar2 = (int)param_1[0xd] == 4;
  if ((bool)uVar2) {
    plVar3 = (long *)(param_2 + 8);
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4(plVar3,param_1 + 1);
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar1 = extraout_w8_03;
    }
    else {
      *(char *)((long)register0x00000008 + -0xb1) = (char)unaff_x20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar1 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar1;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = FUN_10777a338;
    param_1 = plVar3;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar3;
  }
  uVar7 = (uint)param_1;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar2) {
    func_0x00010777dc50();
    if (extraout_x8 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) != 0) {
      *(char *)((long)register0x00000008 + -0xc0) = (char)unaff_x20;
      func_0x00010777d400();
      func_0x000107779f90();
      goto LAB_10777a490;
    }
LAB_10777a468:
    func_0x00010777d748();
    uVar1 = extraout_w8_04;
  }
  else {
    uVar2 = extraout_w8_05 == 6;
    if ((bool)uVar2) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar7 >> 8 & 1) == 0) goto LAB_10777a468;
      *(char *)((long)register0x00000008 + -0xc0) = (char)uVar7;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar2 = extraout_w8_05 == 7;
      if ((bool)uVar2) {
        unaff_x22 = (undefined1 *)((long)register0x00000008 + -0xb0);
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar7 >> 8 & 1) == 0) goto LAB_10777a468;
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar7;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar2 = extraout_w8_05 == 8;
        if ((bool)uVar2) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc((undefined1 *)((long)register0x00000008 + -0xb0));
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar8 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8); uVar2 = puVar8 == unaff_x22,
              !(bool)uVar2; puVar8 = puVar8 + 0x70) {
            puVar5 = puVar8;
            func_0x000107775a54(puVar8,*unaff_x20);
            *(short *)((long)register0x00000008 + -0xc0) = (short)puVar5;
            if (((uint)puVar5 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto LAB_10777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
LAB_10777a4b4:
          func_0x0001074048e8((undefined1 *)((long)register0x00000008 + -0xb0));
          goto LAB_10777a4a0;
        }
        unaff_x22 = (undefined1 *)((long)register0x00000008 + -0xb0);
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar7 >> 8 & 1) == 0) goto LAB_10777a468;
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar7;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
LAB_10777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar1 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar1;
LAB_10777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 10777a0d0; end: 10777a0fb;  */

long FUN_10777a0d0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010740490c(param_1);
  }
  return param_1;
}



/* Entry: 10777a338; end: 10777a4ff;  */

void FUN_10777a338(uint param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 extraout_w8;
  undefined1 uVar2;
  int extraout_w8_00;
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar3;
  undefined1 *unaff_x22;
  undefined1 auStack_b0 [128];
  
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)in_ZR) {
    func_0x00010777dc50();
    if (extraout_x8 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) == 0) goto LAB_10777a468;
    func_0x00010777d400();
    func_0x000107779f90();
LAB_10777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar2 = 1;
  }
  else {
    in_ZR = extraout_w8_00 == 6;
    if ((bool)in_ZR) {
      unaff_x22 = auStack_b0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((param_1 >> 8 & 1) != 0) {
        func_0x00010777d400();
        func_0x000107779f90();
        goto LAB_10777a490;
      }
    }
    else {
      in_ZR = extraout_w8_00 == 7;
      if ((bool)in_ZR) {
        unaff_x22 = auStack_b0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((param_1 >> 8 & 1) != 0) {
          func_0x00010777d400();
          func_0x000107779f90();
          goto LAB_10777a490;
        }
      }
      else {
        in_ZR = extraout_w8_00 == 8;
        if ((bool)in_ZR) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(auStack_b0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar3 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8); in_ZR = puVar3 == unaff_x22,
              !(bool)in_ZR; puVar3 = puVar3 + 0x70) {
            puVar1 = puVar3;
            func_0x000107775a54(puVar3,*unaff_x20);
            if (((uint)puVar1 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto LAB_10777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
LAB_10777a4b4:
          func_0x0001074048e8(auStack_b0);
          goto LAB_10777a4a0;
        }
        unaff_x22 = auStack_b0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((param_1 >> 8 & 1) != 0) {
          func_0x00010777d400();
          func_0x000107779f90();
          goto LAB_10777a490;
        }
      }
    }
LAB_10777a468:
    func_0x00010777d748();
    uVar2 = extraout_w8;
  }
  *(undefined1 *)(unaff_x19 + 0x10) = uVar2;
LAB_10777a4a0:
  func_0x00010777d1dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010726af18(unaff_x22 + 8);
    func_0x00010777d638();
    func_0x00010777a518();
    return;
  }
  return;
}



/* Entry: 10777a898; end: 10777a8cf;  */

void FUN_10777a898(long param_1)

{
  undefined8 extraout_x8;
  int extraout_w9;
  
  func_0x00010777de24();
  if (extraout_w9 == 2) {
    func_0x00010777a8d0(extraout_x8,param_1 + 8);
  }
  else {
    func_0x00010777a930();
  }
  return;
}



/* Entry: 10777abc8; end: 10777ac27;  */

long * FUN_10777abc8(long *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  undefined1 extraout_w8_05;
  undefined1 extraout_w8_06;
  undefined1 extraout_w8_07;
  undefined1 uVar10;
  long lVar11;
  undefined1 *extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 *unaff_x19;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  code *pcVar17;
  long lVar18;
  undefined8 uVar19;
  char acStack_86c [1932];
  long *plStack_e0;
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [20];
  byte bStack_ac;
  char *pcVar4;
  
  pcVar4 = auStack_c0;
  pppppppuVar14 = (undefined8 *******)&stack0xfffffffffffffff0;
  plVar7 = param_1;
  func_0x00010777d1f4();
  func_0x00010777dd3c();
  plVar8 = (long *)*param_1;
  func_0x00010777d484();
  func_0x00010777d640();
  if ((bStack_ac & 1) == 0) {
    func_0x00010777d748();
    uVar6 = extraout_w8_00;
  }
  else {
    func_0x00010777d410();
    uVar6 = extraout_w8;
  }
  unaff_x19[0x14] = uVar6;
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  puVar16 = &UNK_10777ac28;
  func_0x00010777d638();
  uVar6 = (int)plVar7[0xd] == 4;
  if ((bool)uVar6) {
    pcVar4 = acStack_86c + 0x6fc;
    puStack_c8 = &UNK_10777ac28;
    plStack_e0 = param_1;
    ppppppuStack_d0 = pppppppuVar14;
    func_0x00010777d224(plVar8,plVar7 + 1);
    func_0x00010777d8ec();
    plVar9 = (long *)*plVar8;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((acStack_86c[0x710] & 1U) == 0) {
      func_0x00010777d748();
      plVar7 = plVar8;
      plVar8 = plVar9;
      uVar10 = extraout_w8_02;
    }
    else {
      func_0x00010777d410();
      plVar7 = plVar8;
      plVar8 = plVar9;
      uVar10 = extraout_w8_01;
    }
    unaff_x19[0x14] = uVar10;
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return plVar7;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    puVar16 = &UNK_10777aca4;
    func_0x00010777d638();
    pppppppuVar14 = &ppppppuStack_d0;
  }
  uVar6 = (int)plVar7[0xd] == 5;
  if ((bool)uVar6) {
    plVar7 = plVar7 + 1;
    *(long **)(pcVar4 + -0x20) = param_1;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar14;
    *(undefined **)(pcVar4 + -8) = puVar16;
    pppppppuVar14 = (undefined8 *******)(pcVar4 + -0x10);
    func_0x00010777d224();
    lVar11 = plVar7[1];
    lVar18 = *plVar7;
    *(long *)(pcVar4 + -0x88) = plVar7[1];
    *(long *)(pcVar4 + -0x90) = lVar18;
    plVar7 = plVar8;
    if (lVar11 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d484();
    func_0x00010777d648();
    if ((pcVar4[-0x9c] & 1U) == 0) {
      func_0x00010777d748();
      uVar10 = extraout_w8_04;
    }
    else {
      func_0x00010777d410();
      uVar10 = extraout_w8_03;
    }
    unaff_x19[0x14] = uVar10;
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return plVar7;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    puVar16 = &UNK_10777ad3c;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  puVar3 = pcVar4 + -0xc0;
  *(undefined8 *)(pcVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(pcVar4 + -0x28) = unaff_x21;
  *(long **)(pcVar4 + -0x20) = param_1;
  *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
  *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar14;
  *(undefined **)(pcVar4 + -8) = puVar16;
  puVar15 = pcVar4 + -0x10;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)plVar7[0xd];
  uVar6 = iVar2 == 6;
  if ((bool)uVar6) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    plVar8 = (long *)*param_1;
    func_0x00010777d484();
  }
  else {
    uVar6 = iVar2 == 7;
    if ((bool)uVar6) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      plVar8 = (long *)*param_1;
      func_0x00010777d484();
    }
    else {
      uVar6 = iVar2 == 8;
      if ((bool)uVar6) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        plVar8 = (long *)*param_1;
        func_0x00010777d484();
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        plVar8 = (long *)*param_1;
        func_0x00010777d484();
      }
    }
  }
  func_0x00010777d640();
  if ((pcVar4[-0xac] & 1U) == 0) {
    func_0x00010777d748();
    uVar10 = extraout_w8_06;
  }
  else {
    func_0x00010777d410();
    uVar10 = extraout_w8_05;
  }
  unaff_x19[0x14] = uVar10;
  func_0x00010777d1dc();
  if ((bool)uVar6) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  pcVar17 = (code *)&UNK_10777ae10;
  func_0x00010777d638();
  if ((int)plVar7[0xd] == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
    return plVar7;
  }
  uVar6 = (int)plVar7[0xd] == 1;
  if ((bool)uVar6) {
    plVar9 = plVar7 + 1;
    puVar3 = pcVar4 + -0x170;
    *(long **)(pcVar4 + -0xe0) = param_1;
    *(undefined1 **)(pcVar4 + -0xd8) = unaff_x19;
    *(undefined1 **)(pcVar4 + -0xd0) = puVar15;
    *(undefined **)(pcVar4 + -200) = &UNK_10777ae10;
    puVar15 = pcVar4 + -0xd0;
    func_0x00010777d224();
    func_0x00010777d8d4();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((pcVar4[-0x160] & 1U) == 0) {
      func_0x00010777db94();
      plVar7 = plVar8;
      plVar8 = plVar9;
    }
    else {
      func_0x00010777d4d8();
      plVar7 = plVar8;
      plVar8 = plVar9;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return plVar7;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar17 = FUN_10777aeac;
    func_0x00010777d638();
  }
  uVar6 = (int)plVar7[0xd] == 2;
  if ((bool)uVar6) {
    plVar9 = plVar7 + 1;
    *(long **)(puVar3 + -0x20) = param_1;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar15;
    *(code **)(puVar3 + -8) = pcVar17;
    puVar15 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d904();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      plVar7 = plVar8;
      plVar8 = plVar9;
    }
    else {
      func_0x00010777d4d8();
      plVar7 = plVar8;
      plVar8 = plVar9;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return plVar7;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar17 = (code *)&LAB_10777af30;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar6 = (int)plVar7[0xd] == 3;
  plVar9 = plVar8;
  if ((bool)uVar6) {
    plVar9 = plVar7 + 1;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(char **)(puVar3 + -0x28) = pcVar4 + -0xa8;
    *(long **)(puVar3 + -0x20) = param_1;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar15;
    *(code **)(puVar3 + -8) = pcVar17;
    puVar15 = puVar3 + -0x10;
    plVar7 = plVar8;
    func_0x00010777d1f4();
    func_0x00010777dd3c();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar3[-0xb0] & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return plVar7;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar17 = (code *)&UNK_10777afbc;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    param_1 = plVar8;
  }
  uVar6 = (int)plVar7[0xd] == 4;
  if ((bool)uVar6) {
    plVar8 = plVar7 + 1;
    *(long **)(puVar3 + -0x20) = param_1;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar15;
    *(code **)(puVar3 + -8) = pcVar17;
    puVar15 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      plVar7 = plVar9;
      plVar9 = plVar8;
    }
    else {
      func_0x00010777d4d8();
      plVar7 = plVar9;
      plVar9 = plVar8;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return plVar7;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar17 = (code *)&UNK_10777b040;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar6 = (int)plVar7[0xd] == 5;
  if ((bool)uVar6) {
    plVar8 = plVar7 + 1;
    *(long **)(puVar3 + -0x20) = param_1;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar15;
    *(code **)(puVar3 + -8) = pcVar17;
    puVar15 = puVar3 + -0x10;
    func_0x00010777d224();
    lVar11 = plVar8[1];
    lVar18 = *plVar8;
    *(long *)(puVar3 + -0x88) = plVar8[1];
    *(long *)(puVar3 + -0x90) = lVar18;
    plVar7 = plVar9;
    plVar9 = plVar8;
    if (lVar11 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return plVar7;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar17 = FUN_10777b0e0;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  puVar5 = puVar3 + -0xc0;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(char **)(puVar3 + -0x28) = pcVar4 + -0xa8;
  *(long **)(puVar3 + -0x20) = param_1;
  *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar15;
  *(code **)(puVar3 + -8) = pcVar17;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)plVar7[0xd];
  uVar6 = iVar2 == 6;
  if ((bool)uVar6) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar3[-0xb0] & 1) == 0) goto LAB_10777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar6 = iVar2 == 7;
    if ((bool)uVar6) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((puVar3[-0xb0] & 1) == 0) goto LAB_10777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar6 = iVar2 == 8;
      if ((bool)uVar6) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((puVar3[-0xb0] & 1) == 0) {
LAB_10777b1ac:
          func_0x00010777db94();
        }
        else {
          func_0x00010777d4d8();
        }
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((puVar3[-0xb0] & 1) == 0) goto LAB_10777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar6) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(long **)(puVar3 + -0xe0) = param_1;
  *(undefined1 **)(puVar3 + -0xd8) = unaff_x19;
  *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -200) = &UNK_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9;
  if ((int)plVar7[0xd] == 0) {
    *(undefined4 *)(puVar3 + -0xf0) = 0;
    unaff_x19 = puVar3 + -0x158;
    func_0x00010777dd30();
    plVar7 = (long *)(puVar3 + -0x150);
    func_0x00010726af18(plVar7);
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return plVar7;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(long **)(puVar3 + -0x180) = param_1;
    *(undefined1 **)(puVar3 + -0x178) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x170) = puVar3 + -0xd0;
    *(undefined **)(puVar3 + -0x168) = &UNK_10777b260;
    func_0x000107776fc4();
    bVar1 = (ulong)plVar9 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8_00 = (int)plVar9;
      extraout_x8_00[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8_00 = 0;
    }
    *(bool *)(extraout_x8_00 + 5) = bVar1;
    return plVar9;
  }
  func_0x00010777d490();
  if (!(bool)uVar6) goto code_r0x00010777b254;
  uVar13 = *(undefined8 *)(puVar3 + -0xe0);
  puVar12 = *(undefined8 **)(puVar3 + -0xd8);
  *(undefined8 *)(puVar3 + -0xe0) = uVar13;
  *(undefined8 **)(puVar3 + -0xd8) = puVar12;
  *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0xd0);
  *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -200);
  puVar15 = puVar3 + -0xd0;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9_00;
  uVar6 = (int)plVar7[0xd] == 1;
  if ((bool)uVar6) {
    puVar12 = (undefined8 *)(puVar3 + -0x158);
    puVar3[-0x150] = (char)plVar7[1];
    *(undefined4 *)(puVar3 + -0xf0) = 1;
    func_0x00010777dd30();
    plVar7 = (long *)(puVar3 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return plVar7;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar16 = &UNK_10777b31c;
    func_0x00010777d638();
    puVar5 = puVar3 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar6) goto code_r0x00010777b310;
    puVar15 = *(undefined1 **)(puVar3 + -0xd0);
    puVar16 = *(undefined **)(puVar3 + -200);
    uVar13 = *(undefined8 *)(puVar3 + -0xe0);
    puVar12 = *(undefined8 **)(puVar3 + -0xd8);
  }
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar5 + -0x28) = puVar3 + -0xa8;
  *(undefined8 *)(puVar5 + -0x20) = uVar13;
  *(undefined8 **)(puVar5 + -0x18) = puVar12;
  *(undefined1 **)(puVar5 + -0x10) = puVar15;
  *(undefined **)(puVar5 + -8) = puVar16;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)plVar7[0xd];
  uVar6 = iVar2 == 2;
  if ((bool)uVar6) {
    *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar5 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar6 = iVar2 == 3;
    if ((bool)uVar6) {
      plVar7 = (long *)(puVar5 + -0xa8);
      func_0x0001072ddd58(plVar7,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar6 = iVar2 == 4;
      if ((bool)uVar6) {
        uVar19 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar5 + -0xa0) = uVar19;
        *(undefined4 *)(puVar5 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar11 = *(long *)(extraout_x9_01 + 0x10);
        uVar19 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar5 + -0xa0) = uVar19;
        uVar6 = 1;
        if (lVar11 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_01 != 0);
        }
        *(undefined4 *)(puVar5 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar6 = iVar2 == 6;
        if ((bool)uVar6) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar6 = iVar2 == 7;
          if ((bool)uVar6) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar6 = iVar2 == 8;
            if ((bool)uVar6) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar6 = puVar5[-0xac] == '\x01';
              if ((bool)uVar6) {
                uVar19 = *(undefined8 *)(puVar5 + -0xbc);
                puVar12[1] = *(undefined8 *)(puVar5 + -0xb4);
                *puVar12 = uVar19;
                *(undefined4 *)(puVar12 + 2) = 1;
                uVar10 = 1;
              }
              else {
                func_0x00010777d748();
                uVar10 = extraout_w8_07;
              }
              *(undefined1 *)((long)puVar12 + 0x14) = uVar10;
              goto code_r0x00010777b450;
            }
            func_0x00010777d9ac();
            func_0x0001074fd134();
            func_0x00010777d3e4();
          }
        }
      }
    }
  }
  func_0x00010777d640();
code_r0x00010777b450:
  func_0x00010777d1dc();
  if ((bool)uVar6) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if (((((int)plVar7[0xd] != 0) && ((int)plVar7[0xd] != 1)) && ((int)plVar7[0xd] != 2)) &&
     ((int)plVar7[0xd] == 3)) {
    puVar16 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar5 + -0xe0) = uVar13;
    *(undefined8 **)(puVar5 + -0xd8) = puVar12;
    *(undefined1 **)(puVar5 + -0xd0) = puVar5 + -0x10;
    *(undefined **)(puVar5 + -200) = puVar16;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (long *)(ulong)((uint)puVar12 & 0xffff);
  }
  return (long *)0x0;
}



/* Entry: 10777aeac; end: 10777aecf;  */

undefined8 * FUN_10777aeac(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 extraout_w8;
  undefined1 uVar7;
  long lVar8;
  undefined4 *extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar9;
  code *unaff_x30;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_4dc [1212];
  
  uVar4 = *(int *)(param_1 + 0xd) == 2;
  if ((bool)uVar4) {
    puVar5 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224();
    func_0x00010777d904();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((acStack_4dc[0x43c] & 1U) == 0) {
      func_0x00010777db94();
      param_1 = param_2;
      param_2 = puVar5;
    }
    else {
      func_0x00010777d4d8();
      param_1 = param_2;
      param_2 = puVar5;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    unaff_x30 = (code *)&LAB_10777af30;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(acStack_4dc + 0x42c);
  }
  uVar4 = *(int *)(param_1 + 0xd) == 3;
  puVar5 = param_2;
  if ((bool)uVar4) {
    puVar5 = param_1 + 1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_1 = param_2;
    func_0x00010777d1f4();
    func_0x00010777dd3c();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    unaff_x30 = (code *)&UNK_10777afbc;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x20 = param_2;
  }
  uVar4 = *(int *)(param_1 + 0xd) == 4;
  if ((bool)uVar4) {
    puVar6 = param_1 + 1;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0xa0) & 1) == 0) {
      func_0x00010777db94();
      param_1 = puVar5;
      puVar5 = puVar6;
    }
    else {
      func_0x00010777d4d8();
      param_1 = puVar5;
      puVar5 = puVar6;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    unaff_x30 = (code *)&UNK_10777b040;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  uVar4 = *(int *)(param_1 + 0xd) == 5;
  if ((bool)uVar4) {
    puVar6 = param_1 + 1;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224();
    lVar8 = puVar6[1];
    uVar11 = *puVar6;
    *(undefined8 *)((long)register0x00000008 + -0x88) = puVar6[1];
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar11;
    param_1 = puVar5;
    puVar5 = puVar6;
    if (lVar8 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0xa0) & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    unaff_x30 = FUN_10777b0e0;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  puVar3 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0xd);
  uVar4 = iVar2 == 6;
  if ((bool)uVar4) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) goto LAB_10777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar4 = iVar2 == 7;
    if ((bool)uVar4) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) goto LAB_10777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar4 = iVar2 == 8;
      if ((bool)uVar4) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) {
LAB_10777b1ac:
          func_0x00010777db94();
        }
        else {
          func_0x00010777d4d8();
        }
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) goto LAB_10777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(undefined8 **)((long)register0x00000008 + -0xe0) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0xd8) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -200) = &UNK_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)((long)register0x00000008 + -0xe8) = extraout_x9;
  if (*(int *)(param_1 + 0xd) == 0) {
    *(undefined4 *)((long)register0x00000008 + -0xf0) = 0;
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x158);
    func_0x00010777dd30();
    puVar6 = (undefined8 *)((long)register0x00000008 + -0x150);
    func_0x00010726af18(puVar6);
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return puVar6;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(undefined8 **)((long)register0x00000008 + -0x180) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x178) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0xd0);
    *(undefined **)((long)register0x00000008 + -0x168) = &UNK_10777b260;
    func_0x000107776fc4();
    bVar1 = (ulong)puVar5 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8 = (int)puVar5;
      extraout_x8[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8 = 0;
    }
    *(bool *)(extraout_x8 + 5) = bVar1;
    return puVar5;
  }
  func_0x00010777d490();
  if (!(bool)uVar4) goto code_r0x00010777b254;
  uVar11 = *(undefined8 *)((long)register0x00000008 + -0xe0);
  puVar5 = *(undefined8 **)((long)register0x00000008 + -0xd8);
  *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
  *(undefined8 **)((long)register0x00000008 + -0xd8) = puVar5;
  *(undefined8 *)((long)register0x00000008 + -0xd0) =
       *(undefined8 *)((long)register0x00000008 + -0xd0);
  *(undefined8 *)((long)register0x00000008 + -200) =
       *(undefined8 *)((long)register0x00000008 + -200);
  puVar9 = (undefined1 *)((long)register0x00000008 + -0xd0);
  func_0x00010777d31c();
  *(undefined8 *)((long)register0x00000008 + -0xe8) = extraout_x9_00;
  uVar4 = *(int *)(param_1 + 0xd) == 1;
  if ((bool)uVar4) {
    puVar5 = (undefined8 *)((long)register0x00000008 + -0x158);
    *(undefined1 *)((long)register0x00000008 + -0x150) = *(undefined1 *)(param_1 + 1);
    *(undefined4 *)((long)register0x00000008 + -0xf0) = 1;
    func_0x00010777dd30();
    param_1 = (undefined8 *)((long)register0x00000008 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_1;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar10 = &UNK_10777b31c;
    func_0x00010777d638();
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x160);
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar4) goto code_r0x00010777b310;
    puVar9 = *(undefined1 **)((long)register0x00000008 + -0xd0);
    puVar10 = *(undefined **)((long)register0x00000008 + -200);
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    puVar5 = *(undefined8 **)((long)register0x00000008 + -0xd8);
  }
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar3 + -0x28) = (undefined1 *)((long)register0x00000008 + -0xa8);
  *(undefined8 *)(puVar3 + -0x20) = uVar11;
  *(undefined8 **)(puVar3 + -0x18) = puVar5;
  *(undefined1 **)(puVar3 + -0x10) = puVar9;
  *(undefined **)(puVar3 + -8) = puVar10;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0xd);
  uVar4 = iVar2 == 2;
  if ((bool)uVar4) {
    *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar3 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar4 = iVar2 == 3;
    if ((bool)uVar4) {
      param_1 = (undefined8 *)(puVar3 + -0xa8);
      func_0x0001072ddd58(param_1,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar4 = iVar2 == 4;
      if ((bool)uVar4) {
        uVar12 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar12;
        *(undefined4 *)(puVar3 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar8 = *(long *)(extraout_x9_01 + 0x10);
        uVar12 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar12;
        uVar4 = 1;
        if (lVar8 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_00 != 0);
        }
        *(undefined4 *)(puVar3 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar4 = iVar2 == 6;
        if ((bool)uVar4) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar4 = iVar2 == 7;
          if ((bool)uVar4) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar4 = iVar2 == 8;
            if ((bool)uVar4) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar4 = puVar3[-0xac] == '\x01';
              if ((bool)uVar4) {
                uVar12 = *(undefined8 *)(puVar3 + -0xbc);
                puVar5[1] = *(undefined8 *)(puVar3 + -0xb4);
                *puVar5 = uVar12;
                *(undefined4 *)(puVar5 + 2) = 1;
                uVar7 = 1;
              }
              else {
                func_0x00010777d748();
                uVar7 = extraout_w8;
              }
              *(undefined1 *)((long)puVar5 + 0x14) = uVar7;
              goto code_r0x00010777b450;
            }
            func_0x00010777d9ac();
            func_0x0001074fd134();
            func_0x00010777d3e4();
          }
        }
      }
    }
  }
  func_0x00010777d640();
code_r0x00010777b450:
  func_0x00010777d1dc();
  if ((bool)uVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if ((((*(int *)(param_1 + 0xd) != 0) && (*(int *)(param_1 + 0xd) != 1)) &&
      (*(int *)(param_1 + 0xd) != 2)) && (*(int *)(param_1 + 0xd) == 3)) {
    puVar10 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar3 + -0xe0) = uVar11;
    *(undefined8 **)(puVar3 + -0xd8) = puVar5;
    *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -200) = puVar10;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (undefined8 *)(ulong)((uint)puVar5 & 0xffff);
  }
  return (undefined8 *)0x0;
}



/* Entry: 10777b0e0; end: 10777b1f7;  */

undefined1 * FUN_10777b0e0(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined1 extraout_w8;
  undefined1 uVar6;
  undefined4 *extraout_x8;
  long lVar7;
  long extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar8;
  undefined8 uVar9;
  char acStack_20c [140];
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined4 uStack_f0;
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [16];
  byte bStack_b0;
  undefined1 auStack_a8 [120];
  
  puVar3 = auStack_c0;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0x68);
  uVar4 = iVar2 == 6;
  if ((bool)uVar4) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((bStack_b0 & 1) == 0) goto LAB_10777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar4 = iVar2 == 7;
    if ((bool)uVar4) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((bStack_b0 & 1) == 0) goto LAB_10777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar4 = iVar2 == 8;
      if ((bool)uVar4) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((bStack_b0 & 1) == 0) {
LAB_10777b1ac:
          func_0x00010777db94();
        }
        else {
          func_0x00010777d4d8();
        }
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((bStack_b0 & 1) == 0) goto LAB_10777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  puStack_c8 = &UNK_10777b1f8;
  ppppppuStack_d0 = (undefined8 ******)&stack0xfffffffffffffff0;
  func_0x00010777d31c();
  if (*(int *)(param_1 + 0x68) == 0) {
    uStack_f0 = 0;
    func_0x00010777dd30();
    puVar3 = auStack_150;
    func_0x00010726af18(puVar3);
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return puVar3;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    func_0x000107776fc4();
    bVar1 = (ulong)param_2 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8 = (int)param_2;
      extraout_x8[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8 = 0;
    }
    *(bool *)(extraout_x8 + 5) = bVar1;
    return param_2;
  }
  func_0x00010777d490();
  if (!(bool)uVar4) goto code_r0x00010777b254;
  func_0x00010777d31c();
  uVar4 = *(int *)(param_1 + 0x68) == 1;
  if ((bool)uVar4) {
    unaff_x19 = &uStack_158;
    auStack_150[0] = param_1[8];
    uStack_f0 = 1;
    func_0x00010777dd30();
    param_1 = auStack_150;
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_1;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    puVar3 = auStack_160;
    pppppppuVar8 = &ppppppuStack_d0;
    puVar5 = &UNK_10777b31c;
  }
  else {
    func_0x00010777d490();
    pppppppuVar8 = (undefined8 *******)ppppppuStack_d0;
    puVar5 = puStack_c8;
    if (!(bool)uVar4) goto code_r0x00010777b310;
  }
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar3 + -0x28) = auStack_a8;
  *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
  *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar8;
  *(undefined **)(puVar3 + -8) = puVar5;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0x68);
  uVar4 = iVar2 == 2;
  if ((bool)uVar4) {
    *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(extraout_x9 + 8);
    *(undefined4 *)(puVar3 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar4 = iVar2 == 3;
    if ((bool)uVar4) {
      param_1 = puVar3 + -0xa8;
      func_0x0001072ddd58(param_1,extraout_x9 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar4 = iVar2 == 4;
      if ((bool)uVar4) {
        uVar9 = *(undefined8 *)(extraout_x9 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar9;
        *(undefined4 *)(puVar3 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar7 = *(long *)(extraout_x9 + 0x10);
        uVar9 = *(undefined8 *)(extraout_x9 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar9;
        uVar4 = 1;
        if (lVar7 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10 != 0);
        }
        *(undefined4 *)(puVar3 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar4 = iVar2 == 6;
        if ((bool)uVar4) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar4 = iVar2 == 7;
          if ((bool)uVar4) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar4 = iVar2 == 8;
            if ((bool)uVar4) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar4 = puVar3[-0xac] == '\x01';
              if ((bool)uVar4) {
                uVar9 = *(undefined8 *)(puVar3 + -0xbc);
                unaff_x19[1] = *(undefined8 *)(puVar3 + -0xb4);
                *unaff_x19 = uVar9;
                *(undefined4 *)(unaff_x19 + 2) = 1;
                uVar6 = 1;
              }
              else {
                func_0x00010777d748();
                uVar6 = extraout_w8;
              }
              *(undefined1 *)((long)unaff_x19 + 0x14) = uVar6;
              goto code_r0x00010777b450;
            }
            func_0x00010777d9ac();
            func_0x0001074fd134();
            func_0x00010777d3e4();
          }
        }
      }
    }
  }
  func_0x00010777d640();
code_r0x00010777b450:
  func_0x00010777d1dc();
  if ((bool)uVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    puVar5 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar3 + -0xe0) = unaff_x20;
    *(undefined8 **)(puVar3 + -0xd8) = unaff_x19;
    *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -200) = puVar5;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (undefined1 *)(ulong)((uint)unaff_x19 & 0xffff);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10777b57c; end: 10777b5ab;  */

undefined2 FUN_10777b57c(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2cf8();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777b79c; end: 10777b7cb;  */

undefined2 FUN_10777b79c(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f26b4();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777b9bc; end: 10777b9eb;  */

undefined2 FUN_10777b9bc(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2814();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777bbdc; end: 10777bc0b;  */

undefined2 FUN_10777bbdc(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f29b0();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777bdfc; end: 10777be2b;  */

undefined2 FUN_10777bdfc(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f24c8();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777c040; end: 10777c0b3;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_10777c040(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 extraout_w8;
  undefined1 uVar6;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 uVar7;
  int extraout_w8_04;
  long lVar8;
  int extraout_w10;
  long unaff_x19;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 auStack_3c0 [592];
  undefined1 auStack_170 [128];
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [15];
  undefined1 uStack_b1;
  undefined1 auStack_b0 [128];
  
  puVar1 = auStack_c0;
  pppppppuVar11 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  puVar4 = auStack_b0;
  func_0x00010777dae0();
  func_0x00010777d950();
  func_0x00010777d5e0();
  uVar10 = (uint)unaff_x21;
  uVar2 = uVar10 == 0xff;
  uVar7 = SUB81(unaff_x21,0);
  if (uVar10 < 0x100) {
    func_0x00010777d748();
    uVar6 = extraout_w8;
  }
  else {
    uStack_b1 = uVar7;
    func_0x00010777d540();
    func_0x00010777d2c0();
    func_0x000107404cc4();
    uVar6 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x10) = uVar6;
  func_0x00010777d1dc();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar12 = &UNK_10777c0b4;
  puVar9 = param_1;
  func_0x00010777d638();
  if (*(int *)(puVar9 + 0x68) == 2) {
    puVar3 = param_2 + 8;
    param_2 = puVar9 + 8;
    puVar1 = auStack_3c0 + 0x240;
    puStack_c8 = &UNK_10777c0b4;
    pppppppuStack_d0 = pppppppuVar11;
    func_0x00010777d1f4();
    puVar4 = auStack_170;
    func_0x00010777dacc();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar2 = uVar10 == 0xff;
    if (uVar10 < 0x100) {
      func_0x00010777d748();
      uVar6 = extraout_w8_00;
    }
    else {
      auStack_3c0[0x24f] = uVar7;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar6 = 1;
    }
    param_1[0x10] = uVar6;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return puVar3;
    }
    ___stack_chk_fail();
    puVar12 = &UNK_10777c14c;
    puVar9 = puVar3;
    func_0x00010777d638();
    param_1 = puVar3;
    pppppppuVar11 = &pppppppuStack_d0;
  }
  if (*(int *)(puVar9 + 0x68) == 3) {
    puVar3 = param_2 + 8;
    param_2 = puVar9 + 8;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = puVar4;
    *(undefined1 **)(puVar1 + -0x18) = param_1;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar11;
    *(undefined **)(puVar1 + -8) = puVar12;
    pppppppuVar11 = (undefined8 *******)(puVar1 + -0x10);
    func_0x00010777d1f4(puVar3);
    puVar4 = puVar1 + -0xb0;
    puVar3 = puVar1 + -0xb0;
    func_0x0001072ddd58();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar2 = uVar10 == 0xff;
    if (uVar10 < 0x100) {
      func_0x00010777d748();
      uVar6 = extraout_w8_01;
    }
    else {
      puVar1[-0xb1] = uVar7;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar6 = 1;
    }
    param_1[0x10] = uVar6;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return puVar3;
    }
    ___stack_chk_fail();
    puVar12 = &UNK_10777c1e8;
    puVar9 = puVar3;
    func_0x00010777d638();
    puVar1 = puVar1 + -0xc0;
    param_1 = puVar3;
  }
  uVar2 = 0;
  if (*(int *)(puVar9 + 0x68) == 4) {
    param_2 = param_2 + 8;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = puVar4;
    *(undefined1 **)(puVar1 + -0x18) = param_1;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar11;
    *(undefined **)(puVar1 + -8) = puVar12;
    pppppppuVar11 = (undefined8 *******)(puVar1 + -0x10);
    func_0x00010777d1f4(param_2,puVar9 + 8);
    puVar4 = puVar1 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar2 = uVar10 == 0xff;
    if (uVar10 < 0x100) {
      func_0x00010777d748();
      uVar6 = extraout_w8_02;
    }
    else {
      puVar1[-0xb1] = uVar7;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar6 = 1;
    }
    param_1[0x10] = uVar6;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return param_2;
    }
    ___stack_chk_fail();
    puVar12 = &UNK_10777c280;
    puVar9 = param_2;
    func_0x00010777d638();
    puVar1 = puVar1 + -0xc0;
    param_1 = param_2;
  }
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
  *(undefined1 **)(puVar1 + -0x20) = puVar4;
  *(undefined1 **)(puVar1 + -0x18) = param_1;
  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar11;
  *(undefined **)(puVar1 + -8) = puVar12;
  puVar4 = puVar9;
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar2) {
    lVar8 = *(long *)(puVar9 + 0x10);
    uVar13 = *(undefined8 *)(puVar9 + 8);
    *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar9 + 0x10);
    *(undefined8 *)(puVar1 + -0xa8) = uVar13;
    if (lVar8 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    puVar9 = puVar1 + -0xb0;
    *(undefined4 *)(puVar1 + -0x48) = 5;
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar2 = uVar10 == 0xff;
    if (uVar10 < 0x100) goto code_r0x00010777c3d0;
    puVar1[-0xc0] = uVar7;
    func_0x00010777d400();
    func_0x00010777bfb4();
code_r0x00010777c3f8:
    func_0x00010777d2c0();
    func_0x000107404cc4();
    uVar7 = 1;
  }
  else {
    if (extraout_w8_04 == 6) {
      unaff_x21 = puVar1 + -0xb0;
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d950();
      uVar10 = (uint)puVar4 & 0xffff;
      puVar9 = (undefined1 *)(ulong)uVar10;
      func_0x00010777d640();
      uVar2 = uVar10 == 0xff;
      if (0xff < uVar10) {
        puVar1[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else if (extraout_w8_04 == 7) {
      unaff_x21 = puVar1 + -0xb0;
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d950();
      uVar10 = (uint)puVar4 & 0xffff;
      puVar9 = (undefined1 *)(ulong)uVar10;
      func_0x00010777d640();
      uVar2 = uVar10 == 0xff;
      if (0xff < uVar10) {
        puVar1[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else {
      if (extraout_w8_04 == 8) {
        func_0x00010777dce0();
        func_0x00010777d398(*(undefined8 *)(puVar9 + 8));
        func_0x000107535980(puVar1 + -0xb0);
        unaff_x21 = (undefined1 *)(*(undefined8 **)(puVar9 + 8))[1];
        for (puVar9 = (undefined1 *)**(undefined8 **)(puVar9 + 8); uVar2 = puVar9 == unaff_x21,
            !(bool)uVar2; puVar9 = puVar9 + 0x70) {
          puVar4 = puVar9;
          func_0x00010777bf6c();
          uVar10 = (uint)puVar4 & 0xffff;
          *(short *)(puVar1 + -0xc0) = (short)puVar4;
          uVar2 = uVar10 == 0x100;
          if (uVar10 < 0x100) {
            func_0x00010777d724();
            goto code_r0x00010777c41c;
          }
          func_0x00010777d700();
          func_0x000107535a48();
        }
        func_0x00010777dac0();
        func_0x000107535ae0();
        func_0x00010777d338();
        func_0x000107404cc4();
code_r0x00010777c41c:
        puVar4 = puVar1 + -0xb0;
        func_0x0001073e7720();
        goto code_r0x00010777c408;
      }
      unaff_x21 = puVar1 + -0xb0;
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d950();
      uVar10 = (uint)puVar4 & 0xffff;
      puVar9 = (undefined1 *)(ulong)uVar10;
      func_0x00010777d640();
      uVar2 = uVar10 == 0xff;
      if (0xff < uVar10) {
        puVar1[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
code_r0x00010777c3d0:
    func_0x00010777d748();
    uVar7 = extraout_w8_03;
  }
  param_1[0x10] = uVar7;
code_r0x00010777c408:
  func_0x00010777d1dc();
  if ((bool)uVar2) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar3 = unaff_x21 + 8;
  func_0x00010726af18();
  func_0x00010777d638();
  if ((((*(int *)(puVar3 + 0x68) != 0) && (*(int *)(puVar3 + 0x68) != 1)) &&
      (*(int *)(puVar3 + 0x68) != 2)) && (*(int *)(puVar3 + 0x68) == 3)) {
    pcVar5 = FUN_10777c468;
    func_0x00010777de8c();
    *(undefined1 **)(puVar1 + -0xe0) = puVar9;
    *(undefined1 **)(puVar1 + -0xd8) = puVar4;
    *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0x10;
    *(code **)(puVar1 + -200) = pcVar5;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2dd0();
    func_0x00010777d374();
    return (undefined1 *)(ulong)((uint)puVar4 & 0xffff);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10777c468; end: 10777c4bf;  */

undefined2 FUN_10777c468(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2dd0();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777c7b4; end: 10777c80b;  */

undefined2 FUN_10777c7b4(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f31a4();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}


